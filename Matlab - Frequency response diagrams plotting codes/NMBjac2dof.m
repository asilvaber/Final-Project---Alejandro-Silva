function J = NMBjac2dof(m1,m2,k1,k2,beta,w,amplitude1,amplitude2)

% This function returns the jacobian matrix J of the 2dofs algebraic system
% for the modal backbone curve

J = [4*k1+9*beta*amplitude1^2-18*beta*amplitude2*amplitude1+9*beta*amplitude2^2+4*k2-4*w^2*m1, -9*beta*amplitude2^2-4*k2+18*beta*amplitude2*amplitude1-9*beta*amplitude1^2;
     4*k2+9*beta*amplitude1^2+9*beta*amplitude2^2-18*beta*amplitude1*amplitude2, -9*beta*amplitude2^2-4*k2+18*beta*amplitude2*amplitude1-9*beta*amplitude1^2+4*w^2*m2];

end