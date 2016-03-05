function [J] = df_nl(obj,x)
% Computation of the first derivative of the nonlinear function relating to NL_LAW_POLY
% object:
% [J] = df_nl(obj,x)
% - obj: NL_LAW_POLY object
% - x: function argument
%
% Maxime Peeters
% 2011

J=obj.coeffnl*obj.expnl*(abs(x))^(obj.expnl-1);