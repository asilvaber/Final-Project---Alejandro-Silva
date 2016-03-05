function [Amplitude1NMB,Amplitude2NMB] = NewtonRaphsonNMB2dof(tol,m1,m2,k1,k2,beta,aMax,maxIter,W)

% This function calculates the output for the modal backbone curves of the
% 2dof oscillator

% Arrays with the oscillation amplitudes of the first and second mass
% computed with N-R
Amplitude1NMB = zeros(1,length(W));
Amplitude2NMB = zeros(1,length(W));

% For each pulsation value N-R is applied to solve the equation 
% G(amplitude1,amplitude2,w)=0
for i=1:length(W)
    % n: number of iterations
    n = 1;
    % The initial amplitude array for the N-R loop is [aMax; -aMax]
    amplitude = [aMax; -aMax];
    % Initial evaluation of the equation G(amplitude(1),amplitude(2),W(i))
    F = NMBeq2dof(m1,m2,k1,k2,beta,W(i),amplitude(1),amplitude(2));
    % NEWTON-RAPHSON LOOP
    while norm(F)>tol && n<=maxIter
        F = NMBeq2dof(m1,m2,k1,k2,beta,W(i),amplitude(1),amplitude(2));
        J = NMBjac2dof(m1,m2,k1,k2,beta,W(i),amplitude(1),amplitude(2));
        amplitude = amplitude - J\F;
        n = n+1;
    end
    
    % The solutions computed in the array amplitude are assigned to the 
    % output matrices Amplitude1NMB and Amplitude2NMB
    if n<=maxIter,
        Amplitude1NMB(i) = amplitude(1);
        Amplitude2NMB(i) = amplitude(2);
    end
end

end
