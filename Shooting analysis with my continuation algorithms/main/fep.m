%--------------------------------------------------------------------------
% THIS EXECUTABLE M-FILE PRODUCES THE FREQUENCY-ENERGY PLOTS FROM THE
% OUTPUTS OF THE NNMS BRANCHES COMPUTATION

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

figure
labels = cellstr(num2str([1:length(freq11)]'));
stableModes = [];
unstableModes = [];
allStable = 1;
for i=1:length(freq11)
    if (abs(real(FloqMult(i,1)))<=1 && abs(real(FloqMult(i,2)))<=1)
        stableModes = [stableModes, i];
    else
        unstableModes = [unstableModes, i];
    end
end
if ~isempty(unstableModes), allStable = 0; end
plot(log10(Energy(stableModes,1)),freq11(stableModes),'bo')
hold on
plot(log10(Energy(unstableModes,1)),freq11(unstableModes),'ro')
text(log10(Energy(:,1)),freq11,labels,'VerticalAlignment','bottom','HorizontalAlignment','left')
grid on
title('Frequency-energy plot')
if allStable==0
    legend('stable mode','unstable mode')
end
xlabel('log10(Energy)')
ylabel('Frequency (Hz)')
