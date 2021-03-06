function [x,v,ac,T]=Trajectory_f(theta,dtheta,tf,ts,plot_set)% theta = [qa, qb, ... qn] , dtheta = [ qa', qb', ..., qc'] , minimal 2 values. 

if nargin > 4
    plot_on = plot_set; 
else 
    plot_on = 0;
end 
    
%plot_on = 1;

Q=[theta;
   dtheta];

t=0:ts:tf;
r=length(Q)-1;

for i=1:r
qa=Q(1,i);
qb=Q(1,i+1);
dqa=Q(2,i);
dqb=Q(2,i+1);

%Fifth Polynomial trajectory based on paper
A= qb-qa;
a(1,i)=qa;
a(2,i)=dqa;
a(3,i)=0;
a(4,i)=10*A*tf^-3-(6*dqa+4*dqb)*tf^-2;
a(5,i)=-15*A*tf^-4+(8*dqa+7*dqb)*tf^-3; 
a(6,i)=6*A*tf^-5-3*(dqa+dqb)*tf^-4;

end

for i=1:1:r
for k=1:length(t) 
%this is the constraints to fmincon
x(k+length(t)*(i-1))=a(1,i)+a(2,i)*t(k)+ a(3,i)*t(k).^2+a(4,i)*t(k).^3+a(5,i)*t(k).^4+a(6,i)*t(k).^5;
v(k+length(t)*(i-1))=a(2,i)+ 2*a(3,i)*t(k) +3*a(4,i)*t(k).^2+4*a(5,i)*t(k).^3+5*a(6,i)*t(k).^4;
ac(k+length(t)*(i-1))=2*a(3,i) +6*a(4,i)*t(k)+12*a(5,i)*t(k).^2+20*a(6,i)*t(k).^3;
end
end

%Deleting extra value at interval
 for i=r-1:-1:1
 x(length(t)*(i))=[];
 v(length(t)*(i))=[];
 ac(length(t)*(i))=[];
 end

%Plotting

T=0:ts:tf*r;
if plot_on == 1

 figure('Name','Position');
 subplot(3,1,1)
 plot(T,x,'LineWidth',3);
 title('Position (rad)')
 grid
 
 subplot(3,1,2)
 plot(T,v,'LineWidth',3);
 title('Velocity (rad/s)')
  grid
  
 subplot(3,1,3)
 plot(T,ac,'LineWidth',3);
 title('Acceleration (rad/s^2)')
 grid
end 

end