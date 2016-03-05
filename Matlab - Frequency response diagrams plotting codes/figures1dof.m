
% This m-file commands the plotting of the frequency response curves,
% modal backbones and phase angle of the forced response of the 1dof 
% system from the numeric data contained in the arrays and matrices

% Plotting of the modal backbones from the data contained in the matrix
% AmplitudeNMB on the FRD
figure
for i=1:length(W)
    if abs(AmplitudeNMB(i))>tol && abs(AmplitudeNMB(i))<=figVertLim, plot(W(i)/(2*pi),abs(AmplitudeNMB(i)),'bo'); hold on; end
end

% Plotting of the frequency response curves from the data contained in the
% matrix AmplitudeFR on the same FRD
for i=1:length(W)
    for j=1:numAmplSamples
        if j==1,
            if abs(AmplitudeFR(j,i))>tol && abs(AmplitudeFR(j,i))<=figVertLim, plot(W(i)/(2*pi),AmplitudeFR(j,i),'r.'); hold on; end
        elseif j~=1,
            if abs(AmplitudeFR(j,i))>tol && abs(AmplitudeFR(j,i))<=figVertLim && abs(AmplitudeFR(j,i)-AmplitudeFR(j-1,i))>tol, plot(W(i)/(2*pi),AmplitudeFR(j,i),'r.'); hold on; end
        end
    end
end
for i=1:length(natPuls),
    if natPuls(i)/(2*pi)<=fMax && natPuls(i)/(2*pi)>=fMin, plot([natPuls(i)/(2*pi),natPuls(i)/(2*pi)],[0,figVertLim],'k-'); hold on; end
end
title(['M = ' num2str(m) ', K = ' num2str(k) ', C = ' num2str(c) ', \beta = ' num2str(beta) ', fc = ' num2str(fc)])
xlabel('frequency (Hz)')
ylabel('oscillation amplitude (m)')

% Plotting of the phase angle curves of the frequency response from the
% data contained in the matrix PhaseangleFR on a new diagram
figure
for i=1:length(W)
    for j=1:numAmplSamples
        if j==1,
            if abs(PhaseAngleFR(j,i))>tol, plot(W(i)/(2*pi),PhaseAngleFR(j,i),'r.'); hold on; end
        elseif j~=1,
            if abs(PhaseAngleFR(j,i))>tol && abs(PhaseAngleFR(j,i)-PhaseAngleFR(j-1,i))>tol, plot(W(i)/(2*pi),PhaseAngleFR(j,i),'r.'); hold on; end
        end
    end
end
for i=1:length(natPuls),
    if natPuls(i)/(2*pi)<=fMax && natPuls(i)/(2*pi)>=fMin, plot([natPuls(i)/(2*pi),natPuls(i)/(2*pi)],[0,-pi],'k-'); hold on; end
end
title(['M = ' num2str(m) ', K = ' num2str(k) ', C = ' num2str(c) ', \beta = ' num2str(beta) ', fc = ' num2str(fc)])
xlabel('frequency (Hz)')
ylabel('phase angle (rad)')
