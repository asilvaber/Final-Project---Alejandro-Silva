function E = Energy_nl(obj,x)
% Computation of the nonlinear energy relating to NL_LAW_POLY
% object:
% [Energy_nl] = Energy_nl(obj,x)
% - obj: NL_LAW_POLY object
% - x: function argument
%
% Maxime Peeters
% 2011

E=1/(obj.expnl+1)*obj.coeffnl*(abs(x))^(obj.expnl+1);