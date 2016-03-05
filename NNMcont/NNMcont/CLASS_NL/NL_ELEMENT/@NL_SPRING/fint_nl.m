function [f_int_nl] = fint_nl(obj,x)
% Computation of the internal forces of nonlinear springs (NL_SPRING
% object)
% [f_int_nl] = fint_nl(obj,x)
% - obj: NL_SPRING object
% - x: state vector 
%
% Maxime Peeters
% 2011
nddl=length(x)/2;
dep=x(1:nddl);
f_int_nl=zeros(nddl,1);
for inl=1:length(obj)
    if (obj(inl).pos1~=0) && (obj(inl).pos2~=0)
        f=f_nl(obj(inl).law,dep(obj(inl).pos1)-dep(obj(inl).pos2));
        f_int_nl(obj(inl).pos1,1)=f_int_nl(obj(inl).pos1,1)+f;
        f_int_nl(obj(inl).pos2,1)=f_int_nl(obj(inl).pos2,1)-f;
    else
        if obj(inl).pos2==0
            f_int_nl(obj(inl).pos1,1)=f_int_nl(obj(inl).pos1,1)+f_nl(obj(inl).law,dep(obj(inl).pos1));
        else 
            f_int_nl(obj(inl).pos2,1)=f_int_nl(obj(inl).pos2,1)-f_nl(obj(inl).law,-dep(obj(inl).pos2));
        end
    end    
end