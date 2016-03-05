function F = NMBeq2dof(m1,m2,k1,k2,beta,w,amplitude1,amplitude2)

% This function returns the value of the 2dofs algebraic system
% G(amplitude1,amplitude2,w), represented here by double scalar F, for the 
% modal backbone curve

F = [-3*beta*amplitude2^3-4*k2*amplitude2+4*k1*amplitude1+3*beta*amplitude1^3-9*beta*amplitude2*amplitude1^2+9*beta*amplitude2^2*amplitude1+4*k2*amplitude1-4*m1*amplitude1*w^2;
     -3*beta*amplitude2^3-4*k2*amplitude2+3*beta*amplitude1^3-9*beta*amplitude2*amplitude1^2+9*beta*amplitude2^2*amplitude1+4*k2*amplitude1+4*m2*amplitude2*w^2];
    
end