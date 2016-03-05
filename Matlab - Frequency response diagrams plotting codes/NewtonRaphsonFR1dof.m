function [AmplitudeFR,AamplitudeFR,BamplitudeFR,PhaseAngleFR,W] = NewtonRaphsonFR1dof(tol,m,c,k,beta,fc,fMin,fMax,numAmplSamples,numPulsSamples,aMax,maxIter)

% This function calculates the output for the frequency response and phase
% angle curves of the 1dof oscillator

% Array with the pulsation values taken to compute the curves
W = fMin*2*pi:((fMax-fMin)/(numPulsSamples-1))*2*pi:fMax*2*pi;
% Matrix with the oscillation amplitudes computed with N-R
AmplitudeFR = zeros(numAmplSamples,length(W));
% Matrix with the A coefficients of the responses, calculated with N-R
AamplitudeFR = zeros(numAmplSamples,length(W));
% Matrix with the B coefficients of the responses, calculated with N-R
BamplitudeFR = zeros(numAmplSamples,length(W));
% Matrix with the phase angles of the responses
PhaseAngleFR = zeros(numAmplSamples,length(W));

% For each pulsation and initial amplitude values N-R is applied to solve
% the equation G(A,B,w)=0
for i=1:length(W)
    for j=1:numAmplSamples
        % n: number of iterations
        n = 1;
        % The initial value of the amplitude for the N-R loop depends on
        % aMax and on the j-th iteration index
        amplitude = [j*aMax/numAmplSamples; j*aMax/numAmplSamples];
        % Initial evaluation of the equation G(amplitude,W(i))
        F = FReq1dof(m,c,k,beta,fc,W(i),amplitude(1),amplitude(2));
        % NEWTON-RAPHSON LOOP
        while norm(F)>tol && n<=maxIter
            F = FReq1dof(m,c,k,beta,fc,W(i),amplitude(1),amplitude(2));
            J = FRjac1dof(m,c,k,beta,W(i),amplitude(1),amplitude(2));
            amplitude = amplitude - J\F;
            n = n+1;
        end
        
        % The solutions computed in the array amplitude are assigned to the 
        % output matrices AamplitudeFR, BamplitudeFR, AmplitudeFR and
        % PhaseAngleFR      
        if n<=maxIter,
            AamplitudeFR(j,i) = amplitude(1);
            BamplitudeFR(j,i) = amplitude(2);
            % AmplitudeFR contains the mass oscillation amplitudes,
            % which are calculated from the harmonic response coefficients,
            % applying Pythagoras
            AmplitudeFR(j,i) = sqrt(amplitude(2)^2+amplitude(1)^2);
            PhaseAngleFR(j,i) = atan(abs(amplitude(2)/amplitude(1)));
            if amplitude(1)>0, PhaseAngleFR(j,i) = -PhaseAngleFR(j,i);
            elseif amplitude(1)<0, PhaseAngleFR(j,i) = PhaseAngleFR(j,i) - pi;
            end
        end
    end
end

end
