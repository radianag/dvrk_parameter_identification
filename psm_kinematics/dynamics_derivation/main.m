clear all

%% Options 
traj.iter = 60;
traj.tf = 2;
traj.ts = 0.01;

traj.point_num=14;

traj.limit_pos=[1.4, 0.8, 0.23, 1.5, 1.5, 1.5];
traj.limit_vel=[2, 2, 0.4, 0.4, 0.4, 0.4];
traj.scale_p = 0.7;
traj.scale_v = 0.4;

gen.filename='july_3dof';

%Degrees of Freedom of robot
gen.dof = 3; 


%% Dynamics Derivation
%[gen, dyn,map] = bary_psm_dynamics_f(gen);

[gen, dyn,map] = psm_dynamics_f(gen);

%% Trajectory Optimization 
gen.condfun=matlabFunction(gen.Ys2);

[gen,traj]=new_brute_trajectory(gen,traj);


%% Optimal Trajectory
[gen,traj]=new_optimization(gen,traj);

% Visualize data
for i=1:gen.dof
   [opt(i,:),optd(i,:),optdd(i,:)]=Trajectory_f(traj.opt_pos(i,:),traj.opt_vel(i,:),traj.tf,traj.ts,1);
end

savename=strcat('data/',gen.filename,'/_optimized.mat');
save(savename);

%%  Fourier Trajectory Optimization
%[fs,gen]=fourier_trajectory(gen,ident,traj);
gen.fourfilename = 'fourier_test';

[fs,gen]=fourier_trajectory_run(gen,traj);

[fs,gen,test] = check_fourier(gen,traj,fs);

savename=strcat('data/',gen.filename,'/',gen.fourfilename,'.mat');
save(savename);

%% Parameter Identification

clear all
close all
load('data/test_3dof_svd/fourier_test.mat');
gen.csvfilename=gen.fourfilename;

%gen_fr = gen;
 
%---------------------For PSM2 -----------------------
%gen.filename = 'new_test_3dof_svd';
%-----------------------------------------------------
 %% The Par Ident
 
 %Try to delete Ke1 _Ke2 ---------------
  m = find (gen.Par2 == 'Ke_1');
  gen.Par2(m) = [];
  gen.Ys2(:,m)=[];
  
  m = find (gen.Par2 == 'Ke_2');
   gen.Par2(m) = [];
  gen.Ys2(:,m)=[];
  gen.condfun=matlabFunction(gen.Ys2);

  %--------------------------------------
  
[gen,traj,ident]=new_par_ident(gen,traj,fs,1);
%[gen_fr,traj_fr,ident_fr]=new_par_ident(gen_fr,traj,fs,1);

savename      = strcat('data/',gen.filename,'/',gen.csvfilename,'_compare.mat');
compare       = ident;
compare.W     = [];
compare.wtau  = [];
compare.wls_G = [];

save(savename,'compare');

%% SDP OLS
[gen] = SDP_OLS(gen,ident,dyn,map);
% 
savename=strcat('data/',gen.filename,'/',gen.csvfilename,'_results.mat');
save(savename);

%% Change to sigmoid function as suggested by Yan
 for i = 1:gen.dof
    term = sprintf('Fs_%d',i);
    m=find(gen.Par2==term);
    gen.Ys2(i,m) = -2*sigmf(gen.qd(i),[400 0])+1;
 end
 
%  syms Fco_3 Fso_3 Fc_3 Fs_3  delta_s  vs
%  m = find (gen.Par2 == 'Fc_3');
%  gen.Y2(:,:)=[];
%  m = find(gen.Par2 == 'Fs_3');
%  
% [gen,traj,ident]=new_par_ident(gen,traj,fs,1);



%% Compare Simulated Effort Solutions
scale = 1;
x=find(gen.Par2=='Fs_3');
gen.ls_par2(x)=gen.ls_par2(x)*scale ;
y = find(gen.Par2=='Fv_3');
gen.ls_par2(y)=gen.ls_par2(y)*scale;

[test]=compare_effort_simulated(gen,ident,test); 

%% Get Coefficients and Test Positive Semidefiniteness
 [ctrl] = controller_check(gen,dyn);
 [ctrl] = pos_check(gen,ctrl,traj);
 
 %% Save
 %ident.W=[];
 %ident.wls_G=[];
savename=strcat('data/',gen.filename,'/',gen.csvfilename,'_results.mat');
save(savename);
 
%% Curve fitting stribeck third joint
clear all
load('data/stribeck_3dof_svd/fourier_test4_results.mat');

constant_velocity_test(gen);
%gen.filename = 'stribeck_test_3dof_svd';

[gen,ctrl] = friction_fitting(gen,ctrl);

[gen,ctrl] = br_fitting(gen,ctrl);

%% Test Parameter Identification force 
eff.traj_p = [0 0.2 0 ; 0 0.2 0; 0 0.1 0.15];
eff.traj_v = zeros(3);
eff.traj_a = zeros(3);
eff.tf = 2;
eff.ts = 0.01;  
[eff] = make_effort(gen,eff);

%% Compare effort
%Compare effort of open loop effort to desired trajectory using identified
%parameters 
[eff] = compare_effort(gen,eff);

%% Fourier Trajectory Identification
gen.fstestname = 'test1';
[gen,fs,ident]=fs_par_ident(gen,fs,ident,1);

%% Make force Controllers 
[gen,traj,dyn,ctrl,init]=impedance_control_run(gen,traj,dyn);


