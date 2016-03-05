function obj = NL_USER()
%NL_USER Class
%   obj = NL_USER()
%   Definition of the nonlinear terms by means of user functions
%   (fint_nl_user.m, dfint_nl_user.m and Energy_nl_user.m) in the working directory.

obj.type='USER DEFINITION';
obj=class(obj,'NL_USER');

end