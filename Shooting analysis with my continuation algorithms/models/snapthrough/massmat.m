%--------------------------------------------------------------------------
% THIS IS THE EXECUTABLE M-FILE FOR THE COMPUTATION OF THE FRD PLOTS OF THE
% SINGLE DEGREE OF FREEDOM NONLINEAR OSCILLATOR

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function M = massmat(ModelPar)

M    = ModelPar(2);
m    = ModelPar(3);

M = diag([M m]);

end
