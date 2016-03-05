function [Amplitude1FR,Amplitude2FR,A1amplitudeFR,A2amplitudeFR,B1amplitudeFR,B2amplitudeFR,W] = NewtonRaphsonFR2dof(tol,m1,m2,c1,c2,k1,k2,beta,fc11,fc12,fc21,fc22,fMin,fMax,numAmplSamples,numPulsSamples,aMax,maxIter)

% This function calculates the output for the frequency response of the
% 2dof oscillator

% Array with the pulsation values taken to compute the curves
W = fMin*2*pi:((fMax-fMin)/(numPulsSamples-1))*2*pi:fMax*2*pi;
% Matrix with the oscillation amplitudes of the first mass computed with
% N-R
Amplitude1FR = zeros(numAmplSamples,length(W));
% Matrix with the oscillation amplitudes of the second mass computed with
% N-R
Amplitude2FR = zeros(numAmplSamples,length(W));
% Matrix with the A1 coefficients of the responses, calculated with N-R
A1amplitudeFR = zeros(numAmplSamples,length(W));
% Matrix with the B1 coefficients of the responses, calculated with N-R
B1amplitudeFR = zeros(numAmplSamples,length(W));
% Matrix with the A2 coefficients of the responses, calculated with N-R
A2amplitudeFR = zeros(numAmplSamples,length(W));
% Matrix with the B2 coefficients of the responses, calculated with N-R
B2amplitudeFR = zeros(numAmplSamples,length(W));

% For each pulsation and initial amplitude values N-R is applied to solve
% the equation G(A1,B1,A2,B2,w)=0
for i=1:length(W)
    for j=1:numAmplSamples
        % n: number of iterations
        n = 1;
        % The initial values of the amplitudes for the N-R loop depend on
        % aMax and on the j-th iteration index
        amplitude1 = [j*aMax/numAmplSamples; -j*aMax/numAmplSamples];
        amplitude2 = [-j*aMax/numAmplSamples; j*aMax/numAmplSamples];
        % Initial evaluation of the equation G(amplitude,W(i))
        F = FReq2dof(m1,m2,c1,c2,k1,k2,beta,fc11,fc12,fc21,fc22,W(i),amplitude1(1),amplitude1(2),amplitude2(1),amplitude2(2));
        % NEWTON-RAPHSON LOOP
        while norm(F)>tol && n<=maxIter
            F = FReq2dof(m1,m2,c1,c2,k1,k2,beta,fc11,fc12,fc21,fc22,W(i),amplitude1(1),amplitude1(2),amplitude2(1),amplitude2(2));
            J = FRjac2dof(m1,m2,c1,c2,k1,k2,beta,W(i),amplitude1(1),amplitude1(2),amplitude2(1),amplitude2(2));
            delta = -J\F;
            amplitude1 = amplitude1 + delta(1:2);
            amplitude2 = amplitude2 + delta(3:4);
            n = n+1;
        end
        
        % The solutions computed in the arrays amplitude1 and amplitude2 
        % are assigned to the output matrices A1amplitudeFR, A2amplitudeFR, 
        % B1amplitudeFR, B2amplitudeFR, Amplitude1FR and Amplitude2FR   
        if n<=maxIter,
            A1amplitudeFR(j,i) = amplitude1(1);
            A2amplitudeFR(j,i) = amplitude2(1);
            B1amplitudeFR(j,i) = amplitude1(2);
            B2amplitudeFR(j,i) = amplitude2(2);
            Amplitude1FR(j,i) = sqrt(amplitude1(2)^2+amplitude1(1)^2);
            Amplitude2FR(j,i) = sqrt(amplitude2(2)^2+amplitude2(1)^2);
        end
    end
end

end
