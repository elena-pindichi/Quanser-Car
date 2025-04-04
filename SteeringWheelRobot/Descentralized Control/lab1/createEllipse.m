function [xxquad, yyquad] = createEllipse(H,f,F)
% Ax^2+Bxy+Cy^2+Dx+Ey+F=0
A = H(1,1)/2;
B = H(1,2);
C = H(2,2)/2;
D = f(1);
E = f(2);
F = -F;
%%
x0 = (2*C*D-B*E)/(B^2-4*A*C);
y0 = (2*A*E-B*D)/(B^2-4*A*C);
%%
if B ~= 0
    theta = atan((C - A - sqrt((A-C)^2 + B^2)) / B);
elseif B == 0
    if A<C
        theta = 0;
    elseif A>C
        theta = pi;
    end
end
a = -sqrt(2 * (A*E^2 + C*D^2 - B*D*E + (B^2-4*A*C)*F) * ((A+C) + sqrt((A-C)^2 + B^2)))/(B^2-4*A*C);
b = -sqrt(2 * (A*E^2 + C*D^2 - B*D*E + (B^2-4*A*C)*F) * ((A+C) - sqrt((A-C)^2 + B^2)))/(B^2-4*A*C);
%%
t = linspace(0,2*pi,100);
xqt = a*cos(t);
yqt = b*sin(t);
%% output
xxquad = x0 + xqt*cos(theta) - yqt*sin(theta);
yyquad = y0 + xqt*sin(theta) + yqt*cos(theta);
end