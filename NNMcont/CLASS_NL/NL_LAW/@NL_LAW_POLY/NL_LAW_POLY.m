function [obj] = NL_LAW_POLY(coeffnl,expnl)
% Constructor of polynomial nonlinear law objects (NL_LAW_PLOY)
% [obj] = NL_LAW_POLY(coeffnl,expnl)
% - coeffnl: coefficient of the polynomial law
% - expnl: exponent of the polynamial law
%  f(x)=coeffnl*x^(expnl)
%
% M. Peeters, 2011

m=length(coeffnl);
for i=1:m
    obj(i).coeffnl=coeffnl(i);
    obj(i).expnl=expnl(i);
end

obj=class(obj,'NL_LAW_POLY'); 