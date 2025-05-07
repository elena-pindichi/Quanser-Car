#define S_FUNCTION_NAME  mpc_sfunc
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"
#include "f_mpc_c.h" // CasADi-generated header

/* Define the number of input and output ports */
#define N_IN 3  // Number of input ports
#define N_OUT 1 // Number of output ports

/* Function declaration */
int f_mpc(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);


/* Function: mdlInitializeSizes ===============================================*/
static void mdlInitializeSizes(SimStruct *S)
{
    ssSetNumSFcnParams(S, 0);
    if (!ssSetNumInputPorts(S, N_IN)) return;

    // Inputs: x0, xref, uref
    ssSetInputPortMatrixDimensions(S, 0, 4, 1);        // x0
    ssSetInputPortMatrixDimensions(S, 1, 4, 11);       // xref
    ssSetInputPortMatrixDimensions(S, 2, 2, 10);       // uref
    for (int i = 0; i < N_IN; ++i) {
        ssSetInputPortDirectFeedThrough(S, i, 1);
    }

    if (!ssSetNumOutputPorts(S, N_OUT)) return;
    ssSetOutputPortMatrixDimensions(S, 0, 2, 1);       // u_opt

    ssSetNumSampleTimes(S, 1);
}

/* Function: mdlInitializeSampleTimes =========================================*/
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, 0.1); // 100 ms sample time
    ssSetOffsetTime(S, 0, 0.0);
}

/* Function: mdlOutputs =======================================================*/
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const real_T *x0    = (const real_T*) ssGetInputPortRealSignal(S,0);
    const real_T *xref  = (const real_T*) ssGetInputPortRealSignal(S,1);
    const real_T *uref  = (const real_T*) ssGetInputPortRealSignal(S,2);
    real_T       *y     = (real_T*) ssGetOutputPortRealSignal(S,0);

    const casadi_real *arg[3];
    casadi_real *res[1];

    arg[0] = (const casadi_real*)x0;
    arg[1] = (const casadi_real*)xref;
    arg[2] = (const casadi_real*)uref;
    res[0] = (casadi_real*)y;

    /* You will need to provide 'iw', 'w', and 'mem' */
    casadi_int iw[100];   // example size, adjust as needed
    casadi_real w[100];   // example size, adjust as needed
    int mem = 0;          // or set to the appropriate memory value

    f_mpc(arg, res, iw, w, mem);
}

/* Function: mdlTerminate =====================================================*/
static void mdlTerminate(SimStruct *S)
{
}

#include "mex.h" // Include the header for the MEX API

/* Entry point for the MEX file */
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // Input and Output variables
    const real_T *x0 = (const real_T*) mxGetPr(prhs[0]); // x0
    const real_T *xref = (const real_T*) mxGetPr(prhs[1]); // xref
    const real_T *uref = (const real_T*) mxGetPr(prhs[2]); // uref
    real_T *y = (real_T*) mxGetPr(plhs[0]); // Output u_opt

    // The function `f_mpc` expects a specific format for the arguments.
    // Make sure to convert the inputs as needed (e.g., from mxArray to casadi_real).

    const casadi_real *arg[3];
    casadi_real *res[1];

    arg[0] = (const casadi_real*)x0;
    arg[1] = (const casadi_real*)xref;
    arg[2] = (const casadi_real*)uref;
    res[0] = (casadi_real*)y;

    casadi_int iw[100];   // example size, adjust as needed
    casadi_real w[100];   // example size, adjust as needed
    int mem = 0;          // or set to the appropriate memory value

    // Call the CasADi-based f_mpc function
    f_mpc(arg, res, iw, w, mem);
}
