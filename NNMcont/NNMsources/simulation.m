function [x,t,Phi]=simulation(sys,x0,tf,dh,meth,iplot)
% Simulation of periodic solutions with ODE/Newmark

n=length(x0);

if strcmp(meth,'ODE')==1    % Runge-Kutta:
    
    er=1e-9;
    options = odeset('RelTol',er,'AbsTol',er);
    [t,x]=ode45(@state_syst,[0 tf],x0,options);
    x=x';Phi=[];
    
elseif strcmp(meth,'NEWMARK')==1  % Newmark:
   
    [dep,vit,acc,t,Phi]=Newmark_gen_sa_genl(x0(1:n/2),x0(n/2+1:n),tf,dh,[],[],sys.Klin,sys.Mlin,[],sys.nl);
    x=[dep;vit];
    
    
end

if nargin == 6 & ~iplot,
 return
end

figure
subplot(2,1,1)
legtext=[];
textcolor=['  b';'  r';'  k';'  g';'  c';'--b';'--r';'--k';'--g';'--c';'  b';'  r';'  k';'  g';'  c';'--b';'--r';'--k';'--g';'--c';'  b';'  r';'  k';'  g';'  c';'--b';'--r';'--k';'--g';'--c';'  b';'  r';'  k';'  g';'  c';'--b';'--r';'--k';'--g';'--c';'  b';'  r';'  k';'  g';'  c';'--b';'--r';'--k';'--g';'--c';'  b';'  r';'  k';'  g';'  c';'--b';'--r';'--k';'--g';'--c';'  b';'  r';'  k';'  g';'  c';'--b';'--r';'--k';'--g';'--c'];
for k=1:n/2                            % x_k
    hold on
    plot(t,x(k,:),textcolor(k,:))
    xlabel('Time (s)')
    legtext=[legtext,'''',['x_',num2str(mod(k,10))],''','];
end
eval(['legend(',legtext(1:end-1),')']);

subplot(2,1,2)
bar(x0(1:n/2))
xlabel('i')
ylabel('x_i')

% % Representation of Floquet multipliers in the unit circle
% figure
% Floquet=eig(Phi);
% plot(real(Floquet),imag(Floquet),'sr','MarkerSize',16,'LineWidth',3)
% hold on
% xc=[-1:0.05:1];yc=sqrt(1-xc.^2);
% plot(xc,yc,'k--',xc,-yc,'k--')
% axis equal



%------------------------------------------------------------------------

function f=state_syst(t,X)
% f=state_syst(t,X)
% f = state system functions

global sys
    
    n=length(X);
    f=zeros(n,1);
    f_int_l=sys.Klin*X(1:n/2);
    f_int_nl=fint_nl(sys.nl,X);
    % State system functions :
    f(n/2+1:n)=-sys.invMl*(f_int_l+f_int_nl);
    f(1:n/2)=X(n/2+1:n);