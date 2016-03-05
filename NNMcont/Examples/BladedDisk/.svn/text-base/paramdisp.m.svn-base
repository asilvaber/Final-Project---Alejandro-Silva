% User Display for "NNM Plot" button:
% Inputs:
% - x is the response (state vector) of the system over one time period
% x(1:end/2,:), displacements (time evolution);
% x(end/2+1:end,:), velocities (time evolution);
% - t, time vector.

figure;
bar([x(1:2:end/2,1) x(2:2:end/2,1)],'Group')
colormap([0 0 0 ;0.7 0.7 0.7])
set(gca,'FontSize',16)
box on
set(gca,'XLim',[0 31],'XTick',[1 5 10 15 20 25 30])
xlabel('Sector')
