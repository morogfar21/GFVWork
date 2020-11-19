data = importdata('capture.txt',',');
data2 = importdata('capture8kp.txt',',');
data3 = importdata('capture2kp2ki.txt',',');
data4 = importdata('capture8kp2ki.txt',',');
data5 = importdata('capture10kp3ki.txt',',');
data6 = importdata('capture10kp5ki.txt',',');
xakse = 0:1/3:length(data)/3-1/3
xakse2 = 0:1/3:length(data2)/3-1/3
xakse3 = 0:1/3:length(data3)/3-1/3
xakse4 = 0:1/3:length(data4)/3-1/3
xakse5 = 0:1/3:length(data5)/3-1/3
xakse6 = 0:1/3:length(data6)/3-1/3
figure;
%plot(xakse2,data2(:,1),'c')
%xlabel('tid i sekunder')
%ylabel('temperatur i C')
%hold on
plot(xakse,data(:,2),'b')
xlabel('tid i sekunder')
ylabel('temperatur i C')
hold on
%plot(xakse2,data2(:,2),'g')
%xlabel('tid i sekunder')
%ylabel('temperatur i C')
%hold on
plot(xakse3,data3(:,2),'y')
xlabel('tid i sekunder')
ylabel('temperatur i C')
%hold on
%plot(xakse4,data4(:,2),'r')
%xlabel('tid i sekunder')
%ylabel('temperatur i C')
%hold on
%plot(xakse5,data5(:,2),'k')
%xlabel('tid i sekunder')
%ylabel('temperatur i C')
%hold on
%plot(xakse6,data6(:,2),'m')
%xlabel('tid i sekunder')
%ylabel('temperatur i C')
hold off
legend({'Måling med 8kp og 1/30 ki','Måling med 8kp og 2/30 ki'})
%legend({'Måling med 10kp og 3/30 ki','Måling med 10kp og 5/30 ki'})
%legend({'Måling med 2kp og 1/30 ki', 'Måling med 8kp og 1/30 ki','Måling med 2kp og 2/30 ki','Måling med 8kp og 2/30 ki','Måling med 10kp og 3/30 ki','Måling med 10kp og 5/30 ki'})
