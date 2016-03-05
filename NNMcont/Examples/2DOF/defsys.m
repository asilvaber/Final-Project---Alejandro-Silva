function sys = defsys()

% Linear system:
%-----------------
sys.Klin=[2 -1;-1 2]; 
sys.Mlin=diag([1 1]);

% Nonlinearities:
%----------------

% nonlinear law object:
coeffnl=0.5;expnl=3;
nl_law=NL_LAW_POLY(coeffnl,expnl); % polynomial law

% nonlinear object:
pos1=0;pos2=1;
nl_spring=NL_SPRING(pos1,pos2,nl_law); % nonlinear spring

sys.nl(1)=[nl_spring];

% Optional fields:
%-------------------

sys.norm=0.5*1e-3;

%sys.invMl=inv(sys.Ml);

% sys.IGcont=[];

%sys.vitfix=[2];

%sys.TFS=300;
%sys.NumMeth='NEWMARK';


