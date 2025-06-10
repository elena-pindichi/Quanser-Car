clc, close all, clear;
import casadi.*

x = MX.sym('x',2);
f = Function('f',{x},...
      {x});
opts = struct('main', true,...
              'mex', true);
f.generate('gen.c',opts);
f.save('f.casadi')
mex gen.c