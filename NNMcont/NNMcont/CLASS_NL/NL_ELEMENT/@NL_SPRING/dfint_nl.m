function [J] = dfint_nl(obj,dep)
% Computation of the firt derivative of the internal forces, with
% respect to the displacements J = d(fint_nl(q))/d(q), of nonlinear springs
% (NL_SPRING object).
% [J] = dfint_nl(obj,dep)
% - obj: NL_SPRING object
% - x: state vector 
%
% Maxime Peeters
% 2011
nddl=length(dep);
J=zeros(nddl,nddl);
for nl=1:length(obj)
    if (obj(nl).pos1~=0) && (obj(nl).pos2~=0)
        df=df_nl(obj(nl).law,dep(obj(nl).pos1,1)-dep(obj(nl).pos2,1));
        %ind=[obj(nl).pos1 obj(nl).pos2];
        %J(ind,ind)=J(ind,ind)+[df -df;-df df];
        J(obj(nl).pos1,obj(nl).pos1)=J(obj(nl).pos1,obj(nl).pos1)+df;
        J(obj(nl).pos1,obj(nl).pos2)=J(obj(nl).pos1,obj(nl).pos2)-df;
        J(obj(nl).pos2,obj(nl).pos1)=J(obj(nl).pos2,obj(nl).pos1)-df;
        J(obj(nl).pos2,obj(nl).pos2)=J(obj(nl).pos2,obj(nl).pos2)+df;
    else
        if obj(nl).pos2==0
            J(obj(nl).pos1,obj(nl).pos1)=J(obj(nl).pos1,obj(nl).pos1)+df_nl(obj(nl).law,dep(obj(nl).pos1,1));
        else
            J(obj(nl).pos2,obj(nl).pos2)=J(obj(nl).pos2,obj(nl).pos2)+df_nl(obj(nl).law,-dep(obj(nl).pos2,1));
        end
    end
end