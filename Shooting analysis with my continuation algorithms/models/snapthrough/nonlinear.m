%--------------------------------------------------------------------------
% THIS FUNCTION RETURNS THE NONLINEAR STIFFNESS FUNCTION OF THE SNAPTHROUGH
% ABSORBER MODEL

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function Fnl = nonlinear(Y,ModelPar)

k   = ModelPar(5);
L   = ModelPar(6);
phi = ModelPar(7);

u  = Y(1);
w1 = Y(2);
   
Fnl = [k*u-k*L*cos(phi)+k*L/sqrt(1+w1^2/(L*cos(phi)-u)^2+2*w1*L*sin(phi)/(L*cos(phi)-u)^2+L^2*sin(phi)^2/(L*cos(phi)-u)^2)-k*cos(phi)^2*u+k*sin(phi)*cos(phi)*w1;
       2*k*w1-k*w1*L/sqrt(L^2-2*L*cos(phi)*u+u^2+w1^2+2*w1*L*sin(phi))-k*w1*L/sqrt(L^2+w1^2+2*w1*L*sin(phi))+2*k*L*sin(phi)-k*L^2*sin(phi)/sqrt(L^2-2*L*cos(phi)*u+u^2+w1^2+2*w1*L*sin(phi))-k*L^2*sin(phi)/sqrt(L^2+w1^2+2*w1*L*sin(phi))-2*k*sin(phi)^2*w1+k*sin(phi)*cos(phi)*u];
   
end
