function E_nl = Energy_nl(obj,x)
% Computation of the energy of nonlinear springs (NL_SPRING objects)
% E_nl = Energy_nl(obj,x)
% - obj: NL_SPRING object
% - x: state vector
%
% Maxime Peeters
% 2011

E_nl=0;
nddl=length(x)/2;
dep=x(1:nddl);
for inl=1:length(obj)
    if (obj(inl).pos1~=0) && (obj(inl).pos2~=0)
        E_nl=E_nl+Energy_nl(obj(inl).law,dep(obj(inl).pos1,1)-dep(obj(inl).pos2,1));
    else
        if obj(inl).pos2==0
            E_nl=E_nl+Energy_nl(obj(inl).law,dep(obj(inl).pos1,1)); 
        else
            E_nl=E_nl+Energy_nl(obj(inl).law,-dep(obj(inl).pos2,1)); 
        end
    end
end