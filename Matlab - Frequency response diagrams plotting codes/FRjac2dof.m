function J = FRjac2dof(m1,m2,c1,c2,k1,k2,beta,w,A1,B1,A2,B2)

% This function returns the jacobian matrix J of the 2dofs algebraic system
% for the forced response curve

J = [4*k1+9*beta*A1^2+3*beta*B1^2+3*beta*B2^2-6*beta*B2*B1-18*beta*A2*A1+9*beta*A2^2+4*k2-4*w^2*m1, 6*beta*A1*B1-6*beta*A2*B1-6*beta*B2*A1+6*beta*A2*B2-4*w*c2-4*w*c1, -9*beta*A2^2-4*k2-3*beta*B1^2-3*beta*B2^2+6*beta*B2*B1-9*beta*A1^2+18*beta*A2*A1, -6*beta*A2*B2+6*beta*B2*A1-6*beta*A1*B1+6*beta*A2*B1+4*w*c2;
     4*w*c1+4*w*c2-6*beta*B2*A1+6*beta*A1*B1-6*beta*A2*B1+6*beta*A2*B2, -4*w^2*m1+9*beta*B2^2-18*beta*B2*B1+3*beta*A2^2+3*beta*A1^2+9*beta*B1^2+4*k1+4*k2-6*beta*A2*A1, -4*w*c2-6*beta*A2*B2+6*beta*A2*B1-6*beta*A1*B1+6*beta*B2*A1, 18*beta*B2*B1-9*beta*B1^2-3*beta*A2^2-3*beta*A1^2-4*k2-9*beta*B2^2+6*beta*A2*A1;
     9*beta*A1^2+3*beta*B1^2+3*beta*B2^2-6*beta*B2*B1-18*beta*A2*A1+9*beta*A2^2+4*k2, 6*beta*A1*B1-6*beta*A2*B1-6*beta*B2*A1+6*beta*A2*B2-4*w*c2, -9*beta*A2^2-4*k2-3*beta*B2^2-3*beta*B1^2+6*beta*B2*B1-9*beta*A1^2+18*beta*A2*A1+4*w^2*m2, -6*beta*A2*B2+6*beta*B2*A1-6*beta*A1*B1+6*beta*A2*B1+4*w*c2;
     -6*beta*B2*A1+6*beta*A1*B1+4*w*c2-6*beta*A2*B1+6*beta*A2*B2, -18*beta*B2*B1+3*beta*A2^2+3*beta*A1^2+9*beta*B1^2+4*k2+9*beta*B2^2-6*beta*A2*A1, -6*beta*A2*B2+6*beta*A2*B1-4*w*c2-6*beta*A1*B1+6*beta*B2*A1, -9*beta*B1^2-3*beta*A2^2-3*beta*A1^2-4*k2-9*beta*B2^2+18*beta*B2*B1+4*w^2*m2+6*beta*A2*A1];

end
