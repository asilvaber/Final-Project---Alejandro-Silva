%--------------------------------------------------------------------------
% THIS FUNCTION RETURNS AN INITIAL POINT FOR THE NNMS COMPUTATION FROM THE
% LINEAR MODES OF THE LINEARIZED MODEL AROUND THE EQUILIBRIUM POINT

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function [y0,freq] = initpoint(mode,factor)

disp(['Calculating initial point (normal mode ',num2str(mode),')...'])

ModelPar = modelpar();

ndof = ModelPar(1);

M = massmat(ModelPar);
K = stiffmat(ModelPar);

[Normalmodes,Omegasq] = eig(K,M,'chol','vector');
Natfreqs = sqrt(Omegasq)/(2*pi);

y0 = factor*[  zeros(1,ndof)  Normalmodes(:,mode)'  ];
freq = Natfreqs(mode);

disp(['INITIAL POINT (NORMAL MODE ',num2str(mode),') CALCULATED'])

end
