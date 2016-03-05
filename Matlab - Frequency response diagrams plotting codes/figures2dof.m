
% This m-file commands the plotting of the frequency response curves,
% modal backbones and phase angle of the forced response of the 2dofs 
% system from the numeric data contained in the arrays and matrices

% Plotting of the modal backbones of the oscillation of the first mass 
% from the data contained in the array Amplitude1NMB and on the FRD
figure
for i=1:length(W)
    if abs(Amplitude1NMB(i))>tol && abs(Amplitude1NMB(i))<=figVertLim,
        if Amplitude1NMB(i)*Amplitude2NMB(i)<0, plot(W(i)/(2*pi),abs(Amplitude1NMB(i)),'bx'); hold on;
        elseif Amplitude1NMB(i)*Amplitude2NMB(i)>0, plot(W(i)/(2*pi),abs(Amplitude1NMB(i)),'bo'); hold on; end
    end
end

% Plotting of the frequency response curves of the oscillation of the
% first mass from the data contained in the matrices A1amplitudeFR,
% A2amplitudeFR, B1amplitudeFR, B2amplitudeFR and Amplitude1FR on 
% the same FRD
for i=1:length(W)
    for j=1:numAmplSamples
        if j==1,
            if abs(Amplitude1FR(j,i))>tol && abs(Amplitude1FR(j,i))<=figVertLim, 
                if A1amplitudeFR(j,i)>0 && B1amplitudeFR(j,i)<=0, plot(W(i)/(2*pi),Amplitude1FR(j,i),'r.'); hold on;
                elseif A1amplitudeFR(j,i)<=0 && B1amplitudeFR(j,i)<0, plot(W(i)/(2*pi),Amplitude1FR(j,i),'m.'); hold on;
                elseif A1amplitudeFR(j,i)<0 && B1amplitudeFR(j,i)>=0, plot(W(i)/(2*pi)/(2*pi),Amplitude1FR(j,i),'g.'); hold on;
                elseif A1amplitudeFR(j,i)>=0 && B1amplitudeFR(j,i)>0, plot(W(i)/(2*pi)/(2*pi),Amplitude1FR(j,i),'c.'); hold on;
                end
            end
        elseif j~=1,
            if abs(Amplitude1FR(j,i))>tol && abs(Amplitude1FR(j,i))<=figVertLim && abs(Amplitude1FR(j,i)-Amplitude1FR(j-1,i))>tol, 
                if A1amplitudeFR(j,i)>0 && B1amplitudeFR(j,i)<=0, plot(W(i)/(2*pi),Amplitude1FR(j,i),'r.'); hold on;
                elseif A1amplitudeFR(j,i)<=0 && B1amplitudeFR(j,i)<0, plot(W(i)/(2*pi),Amplitude1FR(j,i),'m.'); hold on;
                elseif A1amplitudeFR(j,i)<0 && B1amplitudeFR(j,i)>=0, plot(W(i)/(2*pi),Amplitude1FR(j,i),'g.'); hold on;
                elseif A1amplitudeFR(j,i)>=0 && B1amplitudeFR(j,i)>0, plot(W(i)/(2*pi),Amplitude1FR(j,i),'c.'); hold on;
                end
            end
        end        
    end
end
for i=1:length(natPuls),
    if natPuls(i)/(2*pi)<=fMax && natPuls(i)/(2*pi)>=fMin, plot([natPuls(i)/(2*pi),natPuls(i)/(2*pi)],[0,figVertLim],'k-'); hold on; end
end
title(['M1 = ' num2str(m1) ', K1 = ' num2str(k1) ', C1 = ' num2str(c1) ', M2 = ' num2str(m2) ', K2 = ' num2str(k2) ', C2 = ' num2str(c2) ', \beta = ' num2str(beta) ', fc11 = ' num2str(fc11) ', fc12 = ' num2str(fc12) ', fc21 = ' num2str(fc21) ', fc22 = ' num2str(fc22)'])
xlabel('frequency dof 1 (Hz)')
ylabel('oscillation amplitude dof 1 (m)')

% Plotting of the modal backbones of the oscillation of the second mass 
% from the data contained in the array Amplitude2NMB on a new FRD
figure
for i=1:length(W)
    if abs(Amplitude2NMB(i))>tol && abs(Amplitude2NMB(i))<=figVertLim,
        if Amplitude1NMB(i)*Amplitude2NMB(i)>0, plot(W(i)/(2*pi),abs(Amplitude2NMB(i)),'bo'); hold on;
        elseif Amplitude1NMB(i)*Amplitude2NMB(i)<0, plot(W(i)/(2*pi),abs(Amplitude2NMB(i)),'bx'); hold on; end
    end
end

% Plotting of the frequency response curves of the oscillation of the
% second mass from the data contained in the matrices A1amplitudeFR,
% A2amplitudeFR, B1amplitudeFR, B2amplitudeFR and Amplitude2FR on 
% the same FRD
for i=1:length(W)
    for j=1:numAmplSamples
        if j==1,
            if abs(Amplitude2FR(j,i))>tol && abs(Amplitude2FR(j,i))<=figVertLim, 
                if A2amplitudeFR(j,i)>0 && B2amplitudeFR(j,i)<=0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'r.'); hold on;
                elseif A2amplitudeFR(j,i)<=0 && B2amplitudeFR(j,i)<0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'m.'); hold on;
                elseif A2amplitudeFR(j,i)<0 && B2amplitudeFR(j,i)>=0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'g.'); hold on;
                elseif A2amplitudeFR(j,i)>=0 && B2amplitudeFR(j,i)>0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'c.'); hold on;
                end
            end
        elseif j~=1,
            if abs(Amplitude2FR(j,i))>tol && abs(Amplitude2FR(j,i))<=figVertLim && abs(Amplitude2FR(j,i)-Amplitude2FR(j-1,i))>tol, 
                if A2amplitudeFR(j,i)>0 && B2amplitudeFR(j,i)<=0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'r.'); hold on;
                elseif A2amplitudeFR(j,i)<=0 && B2amplitudeFR(j,i)<0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'m.'); hold on;
                elseif A2amplitudeFR(j,i)<0 && B2amplitudeFR(j,i)>=0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'g.'); hold on;
                elseif A2amplitudeFR(j,i)>=0 && B2amplitudeFR(j,i)>0, plot(W(i)/(2*pi),Amplitude2FR(j,i),'c.'); hold on;
                end
            end
        end        
    end
end
for i=1:length(natPuls),
    if natPuls(i)/(2*pi)<=fMax && natPuls(i)/(2*pi)>=fMin, plot([natPuls(i)/(2*pi),natPuls(i)/(2*pi)],[0,figVertLim],'k-'); hold on; end
end
title(['M1 = ' num2str(m1) ', K1 = ' num2str(k1) ', C1 = ' num2str(c1) ', M2 = ' num2str(m2) ', K2 = ' num2str(k2) ', C2 = ' num2str(c2) ', \beta = ' num2str(beta) ', fc11 = ' num2str(fc11) ', fc12 = ' num2str(fc12) ', fc21 = ' num2str(fc21) ', fc22 = ' num2str(fc22)'])
xlabel('frequency dof 2 (Hz)')
ylabel('oscillation amplitude dof 2 (m)')
