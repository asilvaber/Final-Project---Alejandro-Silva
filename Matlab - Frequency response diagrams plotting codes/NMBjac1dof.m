function J = NMBjac1dof(m,k,beta,w,amplitude)

% This function returns the derivative J of the 1dof algebraic equation
% for the modal backbone curve

J = 4*k-4*m*w^2+9*beta*amplitude^2;

end
