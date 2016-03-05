function sys=defsys()

% Definition of the system


% Parameters of the system:
Nsect=30;
nddl=Nsect*2; % 30 sectors of 2 masses

M=1;
m=0.3;
K=1;
k_l=1;
k_nl=0.1;

% Structural matrices
Ml=zeros(nddl,nddl);
for i=1:Nsect
    Ml(2*(i-1)+1:2*(i-1)+2,2*(i-1)+1:2*(i-1)+2)=diag([m M]);
end

loc=zeros(2*Nsect,3);
for i=1:Nsect
    loc(i,:)=[2*(i-1)+1 2*(i-1)+2 k_l];
    loc(i+Nsect,:)=[2*i 2*i+2 K];
end
loc(2*Nsect,:)=[2*Nsect 2 K];

Kl=zeros(nddl,nddl);
for i=1:size(loc,1)
    Kl(loc(i,1:2),loc(i,1:2))=Kl(loc(i,1:2),loc(i,1:2))+[loc(i,3) -loc(i,3) ; -loc(i,3) loc(i,3)];
end

coeffnl=[k_nl*ones(1,Nsect)];
expnl=[3*ones(1,Nsect)];
pos1=zeros(1,Nsect);
pos2=zeros(1,Nsect);
pos1=[1:2:2*Nsect];
pos2=pos1+ones(1,Nsect);

nl_law=NL_LAW_POLY(coeffnl,expnl);
nl_spring=NL_SPRING(pos1,pos2,nl_law);

sys.Mlin=Ml;sys.Klin=Kl;
sys.nl=nl_spring;

sys.norm=0.5e-3;