import casadi
import numpy as np
import matplotlib.pyplot as plt
import scipy.io

def fdynamics(x, u, l):
   return casadi.vertcat(u[0] * casadi.cos(x[2]),
                         u[0] * casadi.sin(x[2]),
                         u[0] * casadi.tan(x[3]) / l,
                         u[1])

# Parameters
NPRED = 15
Q_VAL = 10000
R_VAL = 2
P_VAL = 1000
L = 0.256
DELTA = 0.35

# Simulation steps and sampling time
TS = 0.1
NSIM = 400

# System dimensions
DX = 4
DU = 2

# Weight matrices and linear matrices
Q = Q_VAL * np.eye(DX)
R = R_VAL * np.eye(DU)
P = P_VAL * Q

# Initial condition and references
x0 = np.array([0.3, 0.2, -np.pi / 2, np.pi / 3])

####################################
# Line reference
# Time
t       = np.arange(0, 50, 0.1)

# Line reference
alpha   = 0.5
beta    = 0.8

xr      = alpha * t
dxr     = np.full_like(t, alpha)
ddxr    = np.zeros_like(t)
dddxr   = np.zeros_like(t)

yr      = beta * t
dyr     = np.full_like(t, beta)
ddyr    = np.zeros_like(t)
dddyr   = np.zeros_like(t)

# Circle reference
# alpha   = 5
# beta    = 5
# ang     = 0.2
# xr      = alpha*np.cos(ang*t)      
# dxr     = -alpha*ang*np.sin(ang*t)    
# ddxr    = -alpha*ang*ang*np.cos(ang*t)       
# dddxr   = alpha*ang*ang*ang*np.sin(ang*t)

# yr      = beta*np.sin(ang*t)       
# dyr     = beta*ang*np.cos(ang*t)      
# ddyr    = -beta*ang*ang*np.sin(ang*t)        
# dddyr   = -beta*ang*ang*ang*np.cos(ang*t)
#####################################

# Computing real input reference
Vr      = np.sqrt(dxr**2 + dyr**2)
omegar  = L * Vr * ((dddyr * dxr - dddxr * dyr) * Vr**2 - 3 * (ddyr * dxr - ddxr * dyr) * (dxr * ddxr + dyr * ddyr)) \
          / (Vr**6 + L**2 * (ddyr * dxr - ddxr * dyr)**2)
UREF    = np.array([Vr, omegar])

# Computing angle reference
thetar  = np.arctan2(dyr / Vr, dxr / Vr)
phir    = np.arctan((L * (ddyr * dxr - ddxr * dyr)) / Vr**3)

XREF = np.array([xr, yr, thetar, phir])

# Constraints
XMIN = -1 * 0.1 * np.array([1.0 ,1.0, 1.0, 1.0])    
XMAX =  1 * 0.1 * np.array([1.0 ,1.0, 1.0, 1.0]) 

VMIN = -1
VMAX =  1

WMIN = -1
WMAX =  5
PHIMAX = np.pi/2

# CasADI solver
solver = casadi.Opti()

# Define variables
X = solver.variable(DX, NPRED)
U = solver.variable(DU, NPRED)

# Define initial state as parameter
XINIT = solver.parameter(DX, 1)

# Initial state constraint
solver.subject_to(X[:, 0] == XINIT)

# Dynamics constraints
for k in range(0, NPRED-1):
    solver.subject_to(X[:, k+1] == X[:, k] + TS * fdynamics(X[:, k], U[:, k], L))
    solver.subject_to(X[3, k+1] >= -PHIMAX)
    solver.subject_to(X[3, k+1] <=  PHIMAX)
    solver.subject_to(U[0, k] >= -VMAX)
    solver.subject_to(U[0, k] <=  VMAX)
    solver.subject_to(U[1, k] >= -WMAX)
    solver.subject_to(U[1, k] <=  WMAX)

options = {'ipopt' : {'print_level': 0, 'sb': 'yes'}, 'print_time': 0}

# Simulation loop
XSIM = np.zeros((DX, NSIM+1))
USIM = np.zeros((DU, NSIM))

XSIM[:, 0] = x0

for i in range(0, NSIM):
    objective = 0
    for k in range(0, NPRED-1):
        objective += casadi.mtimes([(X[:, k] - XREF[:, i + k]).T, Q, (X[:, k] - XREF[:, i + k])]) + \
                     casadi.mtimes([(U[:, k] - UREF[:, i + k]).T, R, (U[:, k] - UREF[:, i + k])])
    k=NPRED-1
    objective += casadi.mtimes([(X[:, k] - XREF[:, i + k]).T, P, (X[:, k] - XREF[:, i + k])])

    solver.minimize(objective)
    solver.solver('ipopt', options)
    solver.set_value(XINIT, XSIM[:, i])
    sol = solver.solve()

    USOL = sol.value(U)
    USIM[:, i] = USOL[:, 0]

    XSIM[:, [i + 1]] = XSIM[:, i] + TS * fdynamics(XSIM[:, i], USIM[:, i], L)


# Plots
plt.figure()
plt.plot(XSIM[0, :], XSIM[1, :])
plt.title('x_{sim}')
plt.xlabel('x_1')
plt.ylabel('x_2')
plt.grid()

plt.figure()
plt.subplot(2,1,1)
plt.plot(XSIM[0, :])
plt.plot(XREF[0, :NSIM], '--')
plt.legend(['x_1', 'ref x_1'])
plt.grid()

plt.subplot(2,1,2)
plt.plot(XSIM[1, :])
plt.plot(XREF[1, :NSIM], '--')
plt.legend(['x_2', 'ref x_2'])
plt.grid()

plt.figure()
plt.subplot(4,1,1)
plt.plot(range(1, NSIM+1), XSIM[0, :-1])
plt.legend(['x'])
plt.xlabel('time (s)')
plt.grid()

plt.subplot(4,1,2)
plt.plot(range(1, NSIM+1), XSIM[1, :-1])
plt.legend(['y'])
plt.xlabel('time (s)')
plt.grid()

plt.subplot(4,1,3)
plt.plot(range(1, NSIM+1), XSIM[2, :-1])
plt.legend(['$\\theta$'])
plt.xlabel('time (s)')
plt.grid()

plt.subplot(4,1,4)
plt.plot(range(1, NSIM+1), XSIM[3, :-1])
plt.legend(['$\\varphi$'])
plt.xlabel('time (s)')
plt.grid()

plt.figure()
plt.subplot(2,1,1)
plt.plot(USIM[0, :])
plt.legend(['V'])
plt.xlabel('Nsim')
plt.grid()

plt.subplot(2,1,2)
plt.plot(USIM[1, :])
plt.legend(['\\omega'])
plt.xlabel('Nsim')
plt.grid()

plt.figure()
plt.plot(XREF[0,:], XREF[1,:])
plt.grid()

plt.show()
