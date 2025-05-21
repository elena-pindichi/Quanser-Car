import casadi
import numpy as np
import matplotlib.pyplot as plt
import scipy.io

def LinOutput(x, Delta, l):
    return np.array([x[0] + l*casadi.cos(x[2]) + Delta*casadi.cos(x[2] + x[3]),
                     x[1] + l*casadi.sin(x[2]) + Delta*casadi.sin(x[2] + x[3])])

def fdynamics(x, u, l):
   return casadi.vertcat(u[0] * casadi.cos(x[2]),
                         u[0] * casadi.sin(x[2]),
                         u[0] * casadi.tan(x[3]) / l,
                         u[1])

def LinMatrix(eta, Delta, l):
    s1 = np.sin(eta[0]+eta[1])
    c1 = np.cos(eta[0]+eta[1])
    return np.array([[casadi.cos(eta[0])-casadi.tan(eta[1])*(casadi.sin(eta[0])+Delta*s1/l), -Delta*s1],
                     [casadi.sin(eta[0])+casadi.tan(eta[1])*(casadi.cos(eta[0])+Delta*c1/l),  Delta*c1]])

# Parameters
NPRED = 5
Q_VAL = 20
R_VAL = 1
P_VAL = 100
L = 0.256
DELTA = 0.35

# Simulation steps and sampling time
TS = 0.3
NSIM = 400

# System dimensions
DX = 4
DU = 2
DZ = 2

# Weight matrices and linear matrices
Q = Q_VAL * np.eye(DZ)
R = R_VAL * np.eye(DU)
P = P_VAL * Q
A = np.eye(DZ)
B = TS * np.eye(DU)

# Initial condition and references
x0 = np.array([0.0, 2.5, 0.0, np.pi / 3])
z0 = LinOutput(x0, DELTA, L)

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
alpha   = 5
beta    = 5
ang     = 0.2
xr      = alpha*np.cos(ang*t)      
dxr     = -alpha*ang*np.sin(ang*t)    
ddxr    = -alpha*ang*ang*np.cos(ang*t)       
dddxr   = alpha*ang*ang*ang*np.sin(ang*t)

yr      = beta*np.sin(ang*t)       
dyr     = beta*ang*np.cos(ang*t)      
ddyr    = -beta*ang*ang*np.sin(ang*t)        
dddyr   = -beta*ang*ang*ang*np.cos(ang*t)
####################################

# Computing real input reference
Vr      = np.sqrt(dxr**2 + dyr**2)
omegar  = L * Vr * ((dddyr * dxr - dddxr * dyr) * Vr**2 - 3 * (ddyr * dxr - ddxr * dyr) * (dxr * ddxr + dyr * ddyr)) \
          / (Vr**6 + L**2 * (ddyr * dxr - ddxr * dyr)**2)
ur      = np.array([Vr, omegar])

# Computing angle reference
thetar  = np.arctan2(dyr / Vr, dxr / Vr)
phir    = np.arctan((L * (ddyr * dxr - ddxr * dyr)) / Vr**3)

# Computing references on z and virtual input w
ZREF = np.array([xr + L * np.cos(thetar) + DELTA * np.cos(thetar + phir),
                 yr + L * np.sin(thetar) + DELTA * np.sin(thetar + phir)])

WREF = np.zeros((2, len(t)))
lenref = len(t)
for i in range(lenref):
    s1 = np.sin(thetar[i] + phir[i])
    c1 = np.cos(thetar[i] + phir[i])
    M  = np.array([[np.cos(thetar[i]) - np.tan(phir[i]) * (np.sin(thetar[i]) + DELTA * s1 / L), -DELTA * s1],
                   [np.sin(thetar[i]) + np.tan(phir[i]) * (np.cos(thetar[i]) + DELTA * c1 / L),  DELTA * c1]])
    WREF[:, i] = M @ ur[:, i]

# Constraints
rhat = min(DELTA*L*10/np.sqrt(DELTA**2 + L**2), 1)

# CasADI solver
solver = casadi.Opti()

# Define variables
Z = solver.variable(DZ, NPRED)
W = solver.variable(DU, NPRED)

# Define initial state as parameter
ZINIT = solver.parameter(DZ, 1)

# Initial state constraint
solver.subject_to(Z[:, 0] == ZINIT)

# Dynamics constraints
for k in range(0, NPRED-1):
    solver.subject_to(Z[:, k+1] == A @ Z[:, k] + B @ W[:, k])
    solver.subject_to(casadi.mtimes(W[:, k].T, W[:, k]) <= rhat)

options = {'ipopt' : {'print_level': 0, 'sb': 'yes'}, 'print_time': 0}

# Simulation loop
WSIM = np.zeros((DU, NSIM))
ZSIM = np.zeros((DZ, NSIM+1))
XSIM = np.zeros((DX, NSIM+1))
USIM = np.zeros((DU, NSIM))

ZSIM[:, 0] = z0
XSIM[:, 0] = x0

for i in range(0, NSIM):
    objective = 0
    for k in range(0, NPRED-1):
        objective += casadi.mtimes([(Z[:, k] - ZREF[:, i + k]).T, Q, (Z[:, k] - ZREF[:, i + k])]) + \
                     casadi.mtimes([(W[:, k] - WREF[:, i + k]).T, R, (W[:, k] - WREF[:, i + k])])
    k=NPRED-1
    objective += casadi.mtimes([(Z[:, k] - ZREF[:, i + k]).T, P, (Z[:, k] - ZREF[:, i + k])])

    solver.minimize(objective)
    solver.solver('ipopt', options)
    solver.set_value(ZINIT, ZSIM[:, i])
    sol = solver.solve()

    WSOL = sol.value(W)
    M = LinMatrix(XSIM[2:4:, i], DELTA, L)

    USIM[:, i] = np.linalg.pinv(M) @ WSOL[:, 0]
    WSIM[:, i] = WSOL[:, 0]

    XSIM[:, [i + 1]] = XSIM[:, i] + TS * fdynamics(XSIM[:, i], USIM[:, i], L)
    ZSIM[:, i + 1]   = LinOutput(XSIM[:, i + 1], DELTA, L)


# Plots
plt.figure()
plt.plot(XSIM[0, :], XSIM[1, :])
plt.title('x_{sim}')
plt.xlabel('x_1')
plt.ylabel('x_2')
plt.grid()

plt.figure()
plt.plot(ZSIM[0, :], ZSIM[1, :])
plt.title('z_{sim}')
plt.xlabel('z_1')
plt.ylabel('z_2')
plt.grid()

plt.figure()
plt.subplot(2,1,1)
plt.plot(ZSIM[0, :])
plt.plot(ZREF[0, :NSIM], '--')
plt.legend(['z_1', 'ref z_1'])
plt.grid()

plt.subplot(2,1,2)
plt.plot(ZSIM[1, :])
plt.plot(ZREF[1, :NSIM], '--')
plt.legend(['z_2', 'ref z_2'])
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
plt.subplot(2,1,1)
plt.plot(WSIM[0, :])
plt.legend(['w1_{virtual}'])
plt.xlabel('Nsim')
plt.grid()

plt.subplot(2,1,2)
plt.plot(WSIM[1, :])
plt.legend(['w2_{virtual}'])
plt.xlabel('Nsim')
plt.grid()

plt.figure()
plt.plot(ZREF[0,:], ZREF[1,:])
plt.grid()

plt.show()
