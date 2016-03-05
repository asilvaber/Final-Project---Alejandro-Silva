%--------------------------------------------------------------------------
% THIS FUNCTION PRODUCES THE TIME-SERIES PLOTS AND MODAL CURVES WITH THE 
% TRAJECTORIES OF EACH OF THE NNMS PREVIOUSLY COMPUTED

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

function trajectories(freq11,y11,numPt)

% INPUTS

% y11: state vector with displacement 'x' and velocity 'v', (x, v), of each
% NNM calculated by the algorithm, under a certain phase condition
% freq11: frequency of each NNMs
% numPt: index of the NNM in 'y11' and 'freq11' whose trajectory will be
% computed

ModelPar = modelpar();

Klin = stiffmat(ModelPar); 
Mlin = massmat(ModelPar);

T  = 1/freq11(numPt);
z0 = y11(numPt,:);

% [t,Y] = ode45(@eqs,[0 T],z0);
[t,Y] = ode15s(@eqs,[0 T],z0);

figure
plot(Y(:,1),Y(:,2));
hold on
plot(Y(1,1),Y(1,2),'bo');
hold on
plot(Y(length(t),1),Y(length(t),2),'bo');
grid on
title('Phase portrait')
xlabel('Main mass displacement u')
ylabel('Damping mass displacement w1')
figure
plot(Y(:,1),Y(:,3));
hold on
plot(Y(1,1),Y(1,3),'bo');
hold on
plot(Y(length(t),1),Y(length(t),3),'bo');
grid on
title('Phase portrait')
xlabel('Main mass displacement u')
ylabel('Main mass velocity u')
figure
plot(Y(:,2),Y(:,4));
hold on
plot(Y(1,2),Y(1,4),'bo');
hold on
plot(Y(length(t),2),Y(length(t),4),'bo');
grid on
title('Phase portrait')
xlabel('Damping mass displacement w1')
ylabel('Damping mass velocity w1')
figure
plot(t,Y(:,1));
grid on
title('Main mass time-series plot')
xlabel('time')
ylabel('Main mass displacement u')
figure
plot(t,Y(:,2));
grid on
title('Damping mass time-series plot')
xlabel('time')
ylabel('Damping mass displacement w1')


function dydt = eqs(~,y)

dydt(1:length(y)/2,1)   = y(length(y)/2+1:length(y),1);
dydt(length(y)/2+1:length(y),1) = Klin*y(1:length(y)/2,1) + nonlinear(y,ModelPar);
dydt(length(y)/2+1:length(y),1) = -Mlin\dydt(length(y)/2+1:length(y),1);

end

end
