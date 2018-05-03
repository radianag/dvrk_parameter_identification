function [fs, gen] = fourier_trajectory_run(gen,ident,traj)

%% Options
fs.Nl = 5; 
fs.w = 0.1 ;%rad/s

fs.ts = 0.02;
fs.period = 15;%s.

%% 

fs.disc_num = fs.period/fs.ts;
fs.time = linspace(0,fs.period-fs.ts,fs.disc_num);


%% Filter torque
T=linspace(1,length(ident.tau),length(ident.tau));

windowSize = ident.window; 
b = (1/windowSize)*ones(1,windowSize);
a = ident.a;
x1= ident.tau(:,1).';
%zi = zeros(1,max(length(a),length(b))-1);

fs.tau_filter(:,1) = filter(b,a,ident.tau(:,1))';
fs.tau_filter(:,2) = filter(b,a,ident.tau(:,2))';
fs.tau_filter(:,3) = filter(b,a,ident.tau(:,3))';


% figure()
% subplot(3,1,1)
% plot(T,ident.tau(:,1).',T,fs.tau_filter(:,1).');
% hold on
% subplot(3,1,2)
% plot(T,ident.tau(:,2).',T,fs.tau_filter(:,2).');
% subplot(3,1,3)
% plot(T,ident.tau(:,3).',T,fs.tau_filter(:,3).');

fs.tau_noise = ident.tau(:,:)-fs.tau_filter(:,:);
fs.scale_noise = std(fs.tau_noise);

%fs.cov = cov(ident.tau);
fs.cov=cov(ident.tau(1:fs.disc_num*gen.dof,:).');

%% Cost Function Variables
four.cov = fs.cov;
four.dof=gen.dof;
four.scale_noise=fs.scale_noise;

four.N = fs.Nl;
four.time = fs.time;
four.disc_num =fs.disc_num;
four.size = length(gen.Par2);

four.fun=gen.condfun;

four.w = fs.w; %rad/s


%% Initial Condition
z0 = 0.5*ones(1,(2*fs.Nl+1)*gen.dof);

%% Make bounds
for j = 1:gen.dof
    
for i = 1:fs.Nl
    a = traj.limit_pos(j)/fs.w/i;
    b = traj.limit_vel(j);
    
    x = min(abs([a,b]));
    
lb_arr(j,i)       = -x;
lb_arr(j,i+fs.Nl) = -x;
ub_arr(j,i)       = x;
ub_arr(j,i+fs.Nl) = x;

% Ae(j,i)=1/(fs.w*i);
% Ae(j,i+fs.Nl) = 1/(fs.w*i);
% Ae(j,1+2*fs.Nl) = 1;

end
lb_arr(j,1+fs.Nl*2)   = -traj.limit_pos(j);
ub_arr(j,1+fs.Nl*2)   = traj.limit_pos(j);

% b(j)=traj.limit_pos(j);
% b(j+gen.dof)=-traj.limit_pos(j);

end


lb = reshape(lb_arr,1,[]);
ub = reshape(ub_arr,1,[]);

A=[];
b=[];
Ae=[];
be=[];

%% Run Optimization

fun = @(z) fourier_function(z,four);
nonloncon = @(z) max_fourier(z,four,traj.limit_pos(1:gen.dof),traj.limit_vel(1:gen.dof));
options = optimoptions('fmincon','MaxIterations',3000,'MaxFunctionEvaluations',6000);
[fs.vars, fs.opt_cond]=fmincon(fun,z0,A,b,Ae,be,lb,ub,nonloncon,options);


%% Make Cost Function
%fs.F=simplify(fs.F);





end