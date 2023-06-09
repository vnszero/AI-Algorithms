close;
clear;
clc;

x=linspace(0,1,100)';

mf_value=min(0.3, trimf(x,[0 0.2 0.4]));
plot2d(x,mf_value);

mf_value1=min(0.5, trimf(x,[0.3 0.6 0.9]));
plot2d(x,mf_value1);

figure(1);
mf_valuef=max(mf_value, mf_value1);
plot2d(x,mf_valuef);

y_centroide=defuzzm(x,mf_valuef,"centroide")
y_bisector=defuzzm(x,mf_valuef,"bisector")
