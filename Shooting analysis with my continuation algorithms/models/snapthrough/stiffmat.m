%--------------------------------------------------------------------------
% THIS FUNCTION RETURNS THE LINEAR STIFFNESS MATRIX OF THE SNAPTHROUGH
% ABSORBER MODEL

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function K = stiffmat(ModelPar)

k1  = ModelPar(4);
k   = ModelPar(5);
phi = ModelPar(7);

K = [k*cos(phi)^2+k1 -k*sin(phi)*cos(phi); -k*sin(phi)*cos(phi) 2*k*sin(phi)^2]; 

end
