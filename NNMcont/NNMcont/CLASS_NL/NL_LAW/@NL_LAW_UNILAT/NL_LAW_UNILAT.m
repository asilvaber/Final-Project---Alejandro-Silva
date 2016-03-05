function obj = NL_LAW_UNILAT(obj_nl_law)
%   Constructor of unilateral law objects (NL_LAW_UNILAT class) 
%   deriving from the nonlinear law class of input object obj_nl_law
%   (f(x)= f_nl_law(x) if x>0, = 0 if x <=0)
%   obj = NL_LAW_UNILAT(obj_nl_law)

obj.nl_law=obj_nl_law;
obj=class(obj,'NL_LAW_UNILAT');

end

