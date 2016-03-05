%--------------------------------------------------------------------------
% THIS M-FILE CONTAINS ALL THE FUNCTIONS THAT CALCULATE THE NNMS BRANCHES
% WITH THE CONTINUATION METHOD GIVEN AN INITIAL SOLUTION AND THE CONTROL
% PARAMETERS SPECIFIED IN THE EXECUTABLE

% 'CURVECOMPUTATION' IS THE FUNCTION CALLED FROM THE MAIN EXECUTABLE FILE
% WHICH WILL RETURN THE ARRAYS WITH THE RESULTS OF THE COMPUTATIONS PLUS
% SOME BY-PRODUCTS OF THE ALGORITHM

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function [y11,freq11,Energy,FloqMult,y01,freq01,TangVect,FreqStep,NumIter,ConvRelErr] = curvecomputation(y0,freq0,RelDifferInt,InitFreqStep,MaxFreqStep,MinFreqStep,MaxPtsCurve,MaxEnergy,MaxFreq,NumJacCalc,ConvErrTol,AverageIter,MaxIter,Symmetry,ShootRKRelTol,JacobRKRelTol,ShootRKAbsTol,JacobRKAbsTol,PhaseCondCoor)

y11(1,:) = y0;
freq11(1) = freq0;
Energy = energy(y0);
FreqStep(1) = InitFreqStep;

for i=1:MaxPtsCurve
    if i>1
        InitTangVect = [];
        if HalvedFreqStep==0
            FreqStep(i) = (AverageIter/NumIter(i-1,:)) * FreqStep(i-1);
            if (FreqStep(i)>0 && FreqStep(i)>MaxFreqStep), FreqStep(i) = MaxFreqStep; end
            if (FreqStep(i)>0 && FreqStep(i)<MinFreqStep), FreqStep(i) = MinFreqStep; end
            if (FreqStep(i)<0 && FreqStep(i)<-MaxFreqStep), FreqStep(i) = -MaxFreqStep; end
            if (FreqStep(i)<0 && FreqStep(i)>-MinFreqStep), FreqStep(i) = -MinFreqStep; end
        else
            FreqStep(i) = FreqStep(i-1);
        end
    end
    disp(['COMPUTING POINT ',num2str(i)])
    y00 = y11(i,:);
    freq00 = freq11(i);
    ConvergenceOK = 0;
    HalvedFreqStep = 0;
    MinStepReached = 0;
    [TangVect(i,:),Fi] = predictor(y00,freq00,RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor);
    FloqMult(i,:) = floquet(Fi);
    if i>1, FreqStep(i) = stepdircontr(TangVect(i,:),TangVect(i-1,:),FreqStep(i)); end
    while ConvergenceOK==0
        disp(['Frequency stepsize: ',num2str(FreqStep(i))])
        [y01(i,:),freq01(i)] = predictorpoint(y00,freq00,TangVect(i,:),FreqStep(i));
        [y11(i+1,:),freq11(i+1),NumIter(i,:),ConvergenceOK,ConvRelErr(i,:)] = corrector(y01(i,:),freq01(i),TangVect(i,:),RelDifferInt,MaxIter,NumJacCalc,ConvErrTol,Symmetry,ShootRKRelTol,JacobRKRelTol,ShootRKAbsTol,JacobRKAbsTol,PhaseCondCoor);
        if ConvergenceOK==0
            disp('The stepsize is halved before repeating corrector phase')
            FreqStep(i) = FreqStep(i)/2;
            HalvedFreqStep = 1;
            if abs(FreqStep(i))<MinFreqStep
                disp('CONVERGENCE ABOVE THE MINIMUM STEPSIDE CANNOT BE REACHED')
                disp('COMPUTATION IS TERMINATED')
                MinStepReached = 1;
                break;
            end
        end
    end
    if MinStepReached, break; end
    if i==MaxPtsCurve
        [~, Fi] = jacobian(y11(i+1,:),freq11(i+1),RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor);
        FloqMult(i+1,:) = floquet(Fi);
    end
    Energy(i+1,:) = energy(y11(i+1,:));
    disp(['Energy at point ',num2str(i),': ',num2str(Energy(i+1))])
    disp(['Frequency at point ',num2str(i),': ',num2str(freq11(i+1))])
    if MaxEnergy<Energy(i+1)
    	disp('THE ENERGY LIMIT HAS BEEN REACHED')
        [~, Fi] = jacobian(y11(i+1,:),freq11(i+1),RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor);
        FloqMult(i+1,:) = floquet(Fi);
    	break;
    elseif MaxFreq<freq11(i+1)
    	disp('THE FREQUENCY LIMIT HAS BEEN REACHED')
        [~, Fi] = jacobian(y11(i+1,:),freq11(i+1),RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor);
        FloqMult(i+1,:) = floquet(Fi);
    	break;
    end
end

disp('END OF CURVE COMPUTATION')

end

function [TangVect,Fi] = predictor(y00,freq00,RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor)

disp('START OF PREDICTOR PHASE')

ndof = length(y00)/2;

disp('Calculating jacobian...')
[dH, Fi] = jacobian(y00,freq00,RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor);
dF = [dH; zeros(1,2*ndof) 1];
disp('Jacobian calculation terminated')

b = [zeros(1,2*ndof+length(PhaseCondCoor)) 1]';

disp('Calculating tangent vector...')
TangVect = dF\b;

disp('END OF PREDICTOR PHASE')

if TangVect(length(TangVect))<0.9
    disp('WARNING: The frequency component of the tangent vector is significatively smaller than one. Jacobian matrix could be botched')
end
    
end

function [y11,freq11,NumIter,ConvergenceOK,ConvRelErr] = corrector(y01,freq01,TangVect,RelDifferInt,MaxIter,NumJacCalc,ConvErrTol,Symmetry,ShootRKRelTol,JacobRKRelTol,ShootRKAbsTol,JacobRKAbsTol,PhaseCondCoor)

disp('START OF CORRECTOR PHASE')
ndof = length(y01)/2;

i = 1;
y11 = y01;
freq11 = freq01;
ConvRelErrPres = 1e99;
while 1
    disp(['Iteration ',num2str(i)])
    disp('Calculating value of shooting function in present point...')
    H01 = shooting(y11,1/freq11,Symmetry,ShootRKRelTol,ShootRKAbsTol,PhaseCondCoor);
    ConvRelErrPast = ConvRelErrPres;
    ConvRelErrPres = norm(H01) / norm(y11);
    disp(['Present convergence error: ',num2str(ConvRelErrPres)])
    if ConvRelErrPres<ConvErrTol,
        disp('THE CONVERGENCE LIMIT HAS BEEN REACHED');
        disp('END OF CORRECTOR PHASE')
        ConvergenceOK = 1;
        ConvRelErr = ConvRelErrPres;
        break
    end
    if i==MaxIter
        disp('THE ITERATION NUMBER LIMIT HAS BEEN REACHED');
        ConvergenceOK = 0;
        ConvRelErr = ConvRelErrPres;
        break
    end
    if ConvRelErrPres>ConvRelErrPast,
        disp('CONVERGENCE BEYOND TOLERANCE IS NOT POSSIBLE');
        y11 = y01;
        freq11 = freq01;
        ConvergenceOK = 0;
        ConvRelErr = ConvRelErrPast;
        break
    end
    y01 = y11;
    freq01 = freq11;
    if i<NumJacCalc, 
        disp('Calculating jacobian...');
        [dH,~] = jacobian(y01,freq01,RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor);
        dF = [dH; TangVect];
        delta = -dF\[H01 0]';
        disp('Jacobian has been successfully computed')
    else disp(['Jacobian frozen after iteration ',num2str(NumJacCalc)]);
    end
    disp('Obtaining next point on Newton-Raphson iteration...')
    y11 = y01 + delta(1:2*ndof,1)';
    freq11 = freq01 + delta(2*ndof+1,1);
    i = i+1;
end

NumIter = i;

end

function H = shooting(y0,T,Symmetry,ShootRKRelTol,ShootRKAbsTol,PhaseCondCoor)

ModelPar = modelpar();

ndof = ModelPar(1);

M = massmat(ModelPar);

if Symmetry==0
    tspan = [  0, T  ];
else
    tspan = [  0, T/2  ];
end

MM = [  eye(ndof,ndof)  zeros(ndof,ndof)
            zeros(ndof,ndof)  M  ];

options = odeset('mass',MM,'RelTol',ShootRKRelTol,'AbsTol',ShootRKAbsTol);
[t,Y] = ode15s(@model,tspan,y0,options,ModelPar);

if Symmetry==0
    S = Y(length(t),:) - y0;
else
    S = Y(length(t),:) + y0;
end

H = S;
for i=1:length(PhaseCondCoor)
    H = [H y0(PhaseCondCoor(i))];
end

end

function FreqStepNew = stepdircontr(TVectNow,TVectPrev,FreqStep)

if TVectNow*TVectPrev'<0
    disp('A fold has been detected, the stepsize will change sign')
    FreqStepNew = -FreqStep;
else
    FreqStepNew = FreqStep;
end

end

function [y01,freq01] = predictorpoint(y00,freq00,TangVect,FreqStep)

ndof = length(y00) / 2;

disp('Obtaining next point on linearized curve...')
y01 = y00 + FreqStep*TangVect(1:2*ndof);
freq01 = freq00 + FreqStep*TangVect(2*ndof+1);

end

function dy = model(~,y,ModelPar)

ndof = ModelPar(1);

K   = stiffmat(ModelPar);
Fnl = nonlinear(y,ModelPar);

x = y(1:ndof);
v = y(ndof+1:2*ndof);

dx = v;
dv = -(K*x+Fnl);

dy = [dx; dv];

end

function [dH,Fi] = jacobian(y0,freq,RelDifferInt,Symmetry,JacobRKRelTol,JacobRKAbsTol,PhaseCondCoor)

tic

ModelPar = modelpar();

ndof = ModelPar(1);
T = 1/freq;

dy = zeros(2*ndof,2*ndof);
dS = zeros(2*ndof,2*ndof+1);

M = massmat(ModelPar);

if Symmetry==0
    tspan = [  0, T  ];
else
    tspan = [  0, T/2  ];
end

dy0 = zeros(1,8*ndof^2+2*ndof);

for i=1:2*ndof+1
    if i==2*ndof+1
        dy0(length(dy0)-2*ndof+1:length(dy0)) = y0;
        break;
    end
    dy0(4*ndof*(i-1)+1:4*ndof*i-2*ndof) = y0;
    dy0(4*ndof*(i-1)+i) = dy0(4*ndof*(i-1)+i) + RelDifferInt*norm(y0);
    dy0(4*ndof*i-2*ndof+1:4*i*ndof) = y0;
    dy0(4*ndof*i-2*ndof+i) = dy0(4*ndof*i-2*ndof+i) - RelDifferInt*norm(y0);
end
       
options = odeset('RelTol',JacobRKRelTol,'AbsTol',JacobRKAbsTol);
[Ty,DY] = ode15s(@modeldS,tspan,dy0,options,ModelPar,M);

for i=1:2*ndof
    dy(:,i) = (1/(2*RelDifferInt*norm(y0))) * (DY(length(Ty),4*ndof*(i-1)+1:4*i*ndof-2*ndof)' - DY(length(Ty),4*i*ndof-2*ndof+1:4*i*ndof)');
end

Fi = dy(1:2*ndof,1:2*ndof);

if Symmetry==0
    dS(:,1:2*ndof) = dy(:,1:2*ndof) - eye(2*ndof);
    dSdf = model(Ty,DY(length(Ty),length(dy0)-2*ndof+1:length(dy0))',ModelPar) * (-1/(freq^2));
else
    dS(:,1:2*ndof) = dy(:,1:2*ndof) + eye(2*ndof);
    dSdf = model(Ty,DY(length(Ty),length(dy0)-2*ndof+1:length(dy0))',ModelPar) * (-1/(2*freq^2));
end
dSdf(ndof+1:2*ndof) = M \ dSdf(ndof+1:2*ndof);

dS(:,2*ndof+1) = dSdf;

dH = dS;
UnitMat = eye(2*ndof+1);
for i=1:length(PhaseCondCoor)
    dH = [dH; UnitMat(PhaseCondCoor(i),:)];
end

disp(['Time lapsed for jacobian computation: ',num2str(toc)]);

end

function ddy = modeldS(~,dy,ModelPar,M)

ndof = ModelPar(1);

ddy = zeros(8*ndof^2+2*ndof,1);

for i=1:4*ndof+1
    Fnl = nonlinear(dy(2*ndof*(i-1)+1:2*i*ndof),ModelPar);
    K = stiffmat(ModelPar);
    x = dy(2*ndof*(i-1)+1:2*i*ndof-ndof);
    v = dy(2*i*ndof-ndof+1:2*i*ndof);
    ddx = v;
    ddv = -M \ (K*x+Fnl);
    ddy(2*ndof*(i-1)+1:2*i*ndof) = [ddx; ddv];
end

end

function FloqMult = floquet(Fi)

disp('Calculating Floquet multipliers...')

FloqMult = eig(Fi,'vector')';

disp('FLOQUET MULTIPLIERS CALCULATED')

end

function Energy = energy(y)

  ModelPar = modelpar();
  
  ndof = ModelPar(1);
  
  x = y(1:ndof);
  v = y(ndof+1:2*ndof);
 
  M = massmat(ModelPar);
  K = stiffmat(ModelPar);
  Energy = 0.5*v*M*v' + 0.5*x*K*x' + nlenergy(x,ModelPar);
  
end