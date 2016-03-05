function F = FReq1dof(m,c,k,beta,fc,w,A,B)

% This function returns the value of the 1dof algebraic system
% G(A,B,w), represented here by double array F, for the forced response
% curve

F = [4*k*A-4*m*A*w^2-4*c*B*w+3*beta*A*B^2-4*fc+3*beta*A^3;
     3*beta*A^2*B-4*w^2*m*B+4*k*B+3*beta*B^3+4*c*A*w];

end
