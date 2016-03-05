function F = FReq2dof(m1,m2,c1,c2,k1,k2,beta,fc11,fc12,fc21,fc22,w,A1,B1,A2,B2)

% This function returns the value of the 2dofs algebraic system
% G(A1,B1,A2,B2,w), represented here by double array F, for the forced response
% curve

F = [-3*beta*A2*B1^2-4*fc11-3*beta*A2*B2^2+9*beta*A2^2*A1-6*beta*B2*A1*B1+6*beta*A2*B2*B1-4*c1*B1*w-4*c2*B1*w-4*m1*A1*w^2+4*c2*B2*w-4*k2*A2-3*beta*A2^3+3*beta*A1^3+4*k2*A1+4*k1*A1+3*beta*A1*B1^2-9*beta*A2*A1^2+3*beta*B2^2*A1;
     -6*beta*A2*A1*B1+6*beta*A2*B2*A1+4*c1*A1*w+4*c2*A1*w-4*m1*B1*w^2-4*c2*A2*w+9*beta*B2^2*B1-9*beta*B2*B1^2-3*beta*A2^2*B2+3*beta*A2^2*B1-3*beta*B2*A1^2+3*beta*A1^2*B1+4*k2*B1+4*k1*B1+3*beta*B1^3-3*beta*B2^3-4*k2*B2-4*fc12;
     -3*beta*A2*B1^2-3*beta*A2*B2^2+9*beta*A2^2*A1-6*beta*B2*A1*B1+6*beta*A2*B2*B1-4*c2*B1*w+4*m2*A2*w^2+4*c2*B2*w-4*k2*A2-3*beta*A2^3+3*beta*A1^3+4*fc21+4*k2*A1+3*beta*A1*B1^2-9*beta*A2*A1^2+3*beta*B2^2*A1;
     3*beta*B1^3-6*beta*A2*A1*B1+6*beta*A2*B2*A1+4*fc22-3*beta*B2^3-4*k2*B2+4*k2*B1-3*beta*A2^2*B2+9*beta*B2^2*B1-9*beta*B2*B1^2-4*c2*A2*w+4*m2*B2*w^2+4*c2*A1*w-3*beta*B2*A1^2+3*beta*A1^2*B1+3*beta*A2^2*B1];

end
