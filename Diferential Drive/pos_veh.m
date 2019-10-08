%Implementation of the equations (10) (11) (12) (13) (14) of the article
% A Primer on Odometry and Motor Control - Edwin Olson December 4, 2004
%avaliable https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-186-mobile-autonomous-systems-laboratory-january-iap-2005/study-materials/odomtutorial.pdf

% r is the ray of the wheel;

function [thetaFinal,xFinal,yFinal] = pos_veh( r,theta_inicial, var_theta_r, var_theta_l, xInicial,yInicial,distWheel)
dright= r*var_theta_r;
dleft = r*var_theta_l;


dcenter = (dleft + dright)/2;

phi =   (dleft - dright)/distWheel;

thetaFinal = theta_inicial+ phi;
xFinal = xInicial + dcenter*cos(thetaFinal); 
yFinal = yInicial + dcenter*sin(thetaFinal);

end