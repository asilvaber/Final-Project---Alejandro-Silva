function [AmplitudeNMB] = NewtonRaphsonNMB1dof(tol,m,k,beta,aMax,maxIter,W)

% This function calculates the output for the modal backbone curve of the
% 1dof oscillator

% Array with the oscillation amplitudes of the mass computed with N-R
AmplitudeNMB = zeros(1,length(W));

% For each pulsation and value N-R is applied to solve the equation 
% G(amplitude,w)=0
for i=1:length(W)
    % n: number of iterations
    n = 1;
    % The initial value of the amplitude for the N-R loop is aMax
    amplitude = aMax;
    % Initial evaluation of the equation G(amplitude,W(i))
    F = NMBeq1dof(m,k,beta,W(i),amplitude);
    % NEWTON-RAPHSON LOOP
    while norm(F)>tol && n<=maxIter
        F = NMBeq1dof(m,k,beta,W(i),amplitude);
        J = NMBjac1dof(m,k,beta,W(i),amplitude);
        amplitude = amplitude - J\F;
        n = n+1;
    end

    % The solution computed, amplitude, is assigned to the output matrix:
    % AmplitudeNMB
    if n<=maxIter,
        AmplitudeNMB(i) = amplitude;
    end
end

end
