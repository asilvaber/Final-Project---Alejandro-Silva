function F = NMBeq1dof(m,k,beta,w,amplitude)

% This function returns the value of the 1dof algebraic equation
% G(amplitude,w), represented here by double scalar F, for the modal 
% backbone curve

F = 4*k*amplitude-4*m*amplitude*w^2+3*beta*amplitude^3;

end
