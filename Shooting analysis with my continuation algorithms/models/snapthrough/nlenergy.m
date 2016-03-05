%--------------------------------------------------------------------------
% THIS FUNCTION RETURNS THE NONLINEAR STIFFNESS ENERGY OF THE SNAPTHROUGH 
% ABSORBER AT POSITION (Y(1), Y(2))

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function Lnl = nlenergy(Y,ModelPar)

k   = ModelPar(5);
L   = ModelPar(6);
phi = ModelPar(7);

u  = Y(1);
w1 = Y(2);

A0 = 2*L^2*sign(L);
A1 = L*cos(phi)*sign(cos(phi)) -L*sign(L)*cos(phi) -L*cos(phi);

Lnl = k * (-L*sqrt(L^2-2*L*cos(phi)*u+u^2+w1^2+2*w1*L*sin(phi)) -L*sqrt(L^2+w1^2+2*w1*L*sin(phi)) +2*w1*L*sin(phi) +w1^2*cos(phi)^2 +sin(phi)*cos(phi)*w1*u +A0 +A1*u);
   
end