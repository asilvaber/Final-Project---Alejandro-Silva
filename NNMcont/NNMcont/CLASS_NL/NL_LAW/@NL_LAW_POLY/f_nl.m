function f = f_nl(obj,x)
% Computation of the nonlinear function relating to NL_LAW_POLY
% object:
% [f_nl] = f_nl(obj,x)
% - obj: NL_LAW_POLY object
% - x: function argument
%
% Maxime Peeters
% 2011
f=obj.coeffnl*sign(x)*(abs(x))^obj.expnl;