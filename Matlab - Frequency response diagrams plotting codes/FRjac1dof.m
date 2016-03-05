function J = FRjac1dof(m,c,k,beta,w,A,B)

% This function returns the jacobian matrix J of the 1dof algebraic system
% for the forced response curve

J = [4*k-4*m*w^2+3*beta*B^2+9*beta*A^2, -4*c*w+6*beta*A*B;
     6*beta*A*B+4*c*w, 3*beta*A^2-4*m*w^2+4*k+9*beta*B^2];

end
