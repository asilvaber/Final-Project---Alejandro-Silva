function [nlobj] = NL_SPRING(pos1,pos2,nl_law)
% Constructor of nonlinear spring objects (NL_SPRING class)
% [nlobj] = NL_SPRING(pos1,pos2,nl_law)
% - pos1: 1st dof of the spring [use 0 for the ground]
% - pos2: 2nd dof of the spring [use 0 for the ground]
% - nl_law: object defining the nonlinear law of the spring (NL_LAW class)
%
% Maxime Peeters
% 2011
m=length(pos1);
for i=1:m
    nlobj(i).pos1=pos1(i);
    nlobj(i).pos2=pos2(i);
    nlobj(i).law=nl_law(i);
end
nlobj=class(nlobj,'NL_SPRING');