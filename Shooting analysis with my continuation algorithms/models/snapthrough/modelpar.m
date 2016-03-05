%--------------------------------------------------------------------------
% THIS M-FILE CONTAINS THE PARAMETER VALUES OF THE SNAPTHROUGH ABSORBER
% MODEL

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function ModelPar = modelpar()

% Number of degrees of freedom of the model
ndof = 2;

% Main mass (of mass on first dof)
M   = 100;
% Absorber mass (of mass on second dof)
m   = 1;
% Stiffness of the attachments of the main mass to the ground
k1  = 100;
% Stiffness of the absorber springs/beams
k   = 1;
% Length of the absorber springs/beams under no deformation
L   = 1;
% Angle of the absorber springs/beams with respect to the direction of the
% first dof under no deformation
phi = 0.15;

ModelPar = [ndof,M,m,k1,k,L,phi];

end
