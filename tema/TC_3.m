%%
clear all
close all
clc
a=15*[-1 1 -1 1];%
%% dynamics
Ts= ;
A=[];% TO DO  
B=[];
[d,du]=size(B); % space dimension and input dimension
 
% %  magnitude constraints on input
% umin=-.5*ones(du,1);
% umax=.5*ones(du,1);


%% load the path
load('path.mat','path'); % the reference path 
xinit=[path(1,:)';0;0]; % can and should be modified !!!!
xf=[path(end,:)';0;0]; %fixed

%% MPC parameters
% prediction horizon
Npred=10;

%weighting matrices -> need to be tuned 
P=1e4*eye(d); Q=1e5*eye(d); 
R=1e4*eye(du); 

Nsim=700; % length of the simulation horizon -> can be modified 
tol=1e-3; % epsilon/tolerance value 

%% write the optimization problem

%define the optimization variables, constraints and cost
u = sdpvar(repmat(du,1,Npred),ones(1,Npred));  % creates a collection of Npred vectors of dimensions du times 1          
x = sdpvar(repmat(d,1,Npred+1),ones(1,Npred+1));  

xref=sdpvar(d,1); % the reference path can be given as a parameter

constraints=[];

objective=; % TO DO Hint: consider the  P-,Q-,R-norm
for k = 1:Npred
    objective=objective+  ; % TO DO Hint: consider the  P-,Q-,R-norm
    constraints = [constraints,... 
      ... % dynamics
     ...    % state magnitude constraints
       ... % input magnitude constraints, if 
        ];  %TO DO
end
% compute the controller
options=sdpsettings('verbose',1); % not necessary
controller = optimizer(constraints,objective,options,[x{1}' xref']',[u{1}' x{Npred+1}' objective]');  %define here the parameters and inputs

%% run over the simulation horizon

figure 
hold on
scatter(path(:,1),path(:,2),'filled','b');% illustrate the path
axis(a);

%store the trajectory and the input along the simulation horizon
x_sim=[xinit]; 
u_sim=[]; 
hh=[scatter(x_sim(1,end),x_sim(2,end),'filled','r') ];

% run the simulation for as long as there are less than Nsim steps  
 i=0; 
 rf=[path(2,:)';0;0]; 
 kmax=size(path,1);

 while (i<=Nsim)
     title(['step ' num2str(i)]);
     i=i+1;
     
     
     [uu,errorcode]=controller{[x_sim(:,end); rf]};
     


     if errorcode
         errorcode
         break; %get out if you had any error
     end
     
     % extract from uu all the interesting info
     u_sim=[u_sim uu(1:du)];
     xfpred=uu(du+1:du+d);
     x_sim=[x_sim A*x_sim(:,end)+B*u_sim(:,end)];         % update the dynamics
    
     
     %
     if (norm(xf(1:2)-x_sim(1:2,end))<= tol)
         N_goal=i;
         break
     end

     hh=[hh scatter(x_sim(1,end),x_sim(2,end),'filled','r') ]; % plot the current state
     drawnow
     
      %set the new reference point on the path 
      k=min(i+2,kmax);
      rf=[path(k,:)';0;0];  
 end
 
 figure
 plot(u_sim(1,:))
 hold on
 plot(u_sim(2,:))
 legend('first input (x)','second input (y)')

 figure
 plot(x_sim(1,:))
 hold on
 plot(x_sim(2,:))
 legend('position (x)','position (y)')
