/*
 * MPC_fmincon_types.h
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "MPC_fmincon".
 *
 * Model version              : 15.61
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Mon May 26 13:34:15 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MPC_fmincon_types_h_
#define RTW_HEADER_MPC_fmincon_types_h_
#include "rtwtypes.h"

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function2' */
#ifndef struct_tag_sG8JZ69axY52WWR6RKyApQC
#define struct_tag_sG8JZ69axY52WWR6RKyApQC

struct tag_sG8JZ69axY52WWR6RKyApQC
{
  real_T penaltyParam;
  real_T threshold;
  int32_T nPenaltyDecreases;
  real_T linearizedConstrViol;
  real_T initFval;
  real_T initConstrViolationEq;
  real_T initConstrViolationIneq;
  real_T phi;
  real_T phiPrimePlus;
  real_T phiFullStep;
  real_T feasRelativeFactor;
  real_T nlpPrimalFeasError;
  real_T nlpDualFeasError;
  real_T nlpComplError;
  real_T firstOrderOpt;
  boolean_T hasObjective;
};

#endif                                 /* struct_tag_sG8JZ69axY52WWR6RKyApQC */

#ifndef typedef_sG8JZ69axY52WWR6RKyApQC_MPC_f_T
#define typedef_sG8JZ69axY52WWR6RKyApQC_MPC_f_T

typedef struct tag_sG8JZ69axY52WWR6RKyApQC sG8JZ69axY52WWR6RKyApQC_MPC_f_T;

#endif                             /* typedef_sG8JZ69axY52WWR6RKyApQC_MPC_f_T */

#ifndef struct_tag_s7RdrPWkr8UPAUyTdDJkLaG
#define struct_tag_s7RdrPWkr8UPAUyTdDJkLaG

struct tag_s7RdrPWkr8UPAUyTdDJkLaG
{
  boolean_T gradOK;
  boolean_T fevalOK;
  boolean_T done;
  boolean_T stepAccepted;
  boolean_T failedLineSearch;
  int32_T stepType;
};

#endif                                 /* struct_tag_s7RdrPWkr8UPAUyTdDJkLaG */

#ifndef typedef_s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T
#define typedef_s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T

typedef struct tag_s7RdrPWkr8UPAUyTdDJkLaG s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T;

#endif                             /* typedef_s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T */

#ifndef struct_tag_somzaGboVhDG7PNQS6E98jD
#define struct_tag_somzaGboVhDG7PNQS6E98jD

struct tag_somzaGboVhDG7PNQS6E98jD
{
  char_T SolverName[7];
  int32_T MaxIterations;
  real_T StepTolerance;
  real_T OptimalityTolerance;
  real_T ConstraintTolerance;
  real_T ObjectiveLimit;
  real_T PricingTolerance;
  real_T ConstrRelTolFactor;
  real_T ProbRelTolFactor;
  boolean_T RemainFeasible;
  boolean_T IterDisplayQP;
};

#endif                                 /* struct_tag_somzaGboVhDG7PNQS6E98jD */

#ifndef typedef_somzaGboVhDG7PNQS6E98jD_MPC_f_T
#define typedef_somzaGboVhDG7PNQS6E98jD_MPC_f_T

typedef struct tag_somzaGboVhDG7PNQS6E98jD somzaGboVhDG7PNQS6E98jD_MPC_f_T;

#endif                             /* typedef_somzaGboVhDG7PNQS6E98jD_MPC_f_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_real_T */

#ifndef typedef_emxArray_real_T_MPC_fmincon_T
#define typedef_emxArray_real_T_MPC_fmincon_T

typedef struct emxArray_real_T emxArray_real_T_MPC_fmincon_T;

#endif                               /* typedef_emxArray_real_T_MPC_fmincon_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_int32_T */

#ifndef typedef_emxArray_int32_T_MPC_fmincon_T
#define typedef_emxArray_int32_T_MPC_fmincon_T

typedef struct emxArray_int32_T emxArray_int32_T_MPC_fmincon_T;

#endif                              /* typedef_emxArray_int32_T_MPC_fmincon_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function2' */
#ifndef struct_tag_0Mw3d4AlMrOoSnA1Aci4tH
#define struct_tag_0Mw3d4AlMrOoSnA1Aci4tH

struct tag_0Mw3d4AlMrOoSnA1Aci4tH
{
  int32_T nVarMax;
  int32_T mNonlinIneq;
  int32_T mNonlinEq;
  int32_T mIneq;
  int32_T mEq;
  int32_T iNonIneq0;
  int32_T iNonEq0;
  real_T sqpFval;
  real_T sqpFval_old;
  emxArray_real_T_MPC_fmincon_T *xstarsqp;
  emxArray_real_T_MPC_fmincon_T *xstarsqp_old;
  emxArray_real_T_MPC_fmincon_T *cIneq;
  emxArray_real_T_MPC_fmincon_T *cIneq_old;
  emxArray_real_T_MPC_fmincon_T *cEq;
  emxArray_real_T_MPC_fmincon_T *cEq_old;
  emxArray_real_T_MPC_fmincon_T *grad;
  emxArray_real_T_MPC_fmincon_T *grad_old;
  int32_T FunctionEvaluations;
  int32_T sqpIterations;
  int32_T sqpExitFlag;
  emxArray_real_T_MPC_fmincon_T *lambdasqp;
  emxArray_real_T_MPC_fmincon_T *lambdaStopTest;
  emxArray_real_T_MPC_fmincon_T *lambdaStopTestPrev;
  real_T steplength;
  emxArray_real_T_MPC_fmincon_T *delta_x;
  emxArray_real_T_MPC_fmincon_T *socDirection;
  emxArray_int32_T_MPC_fmincon_T *workingset_old;
  emxArray_real_T_MPC_fmincon_T *JacCineqTrans_old;
  emxArray_real_T_MPC_fmincon_T *JacCeqTrans_old;
  emxArray_real_T_MPC_fmincon_T *gradLag;
  emxArray_real_T_MPC_fmincon_T *delta_gradLag;
  emxArray_real_T_MPC_fmincon_T *xstar;
  real_T fstar;
  real_T firstorderopt;
  emxArray_real_T_MPC_fmincon_T *lambda;
  int32_T state;
  real_T maxConstr;
  int32_T iterations;
  emxArray_real_T_MPC_fmincon_T *searchDir;
};

#endif                                 /* struct_tag_0Mw3d4AlMrOoSnA1Aci4tH */

#ifndef typedef_s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
#define typedef_s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T

typedef struct tag_0Mw3d4AlMrOoSnA1Aci4tH s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T;

#endif                             /* typedef_s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_boolean_T */

#ifndef typedef_emxArray_boolean_T_MPC_fminco_T
#define typedef_emxArray_boolean_T_MPC_fminco_T

typedef struct emxArray_boolean_T emxArray_boolean_T_MPC_fminco_T;

#endif                             /* typedef_emxArray_boolean_T_MPC_fminco_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function2' */
#ifndef struct_tag_l1Gll5dfO9DpqQrvRqAf7E
#define struct_tag_l1Gll5dfO9DpqQrvRqAf7E

struct tag_l1Gll5dfO9DpqQrvRqAf7E
{
  int32_T ldq;
  emxArray_real_T_MPC_fmincon_T *QR;
  emxArray_real_T_MPC_fmincon_T *Q;
  emxArray_int32_T_MPC_fmincon_T *jpvt;
  int32_T mrows;
  int32_T ncols;
  emxArray_real_T_MPC_fmincon_T *tau;
  int32_T minRowCol;
  boolean_T usedPivoting;
};

#endif                                 /* struct_tag_l1Gll5dfO9DpqQrvRqAf7E */

#ifndef typedef_s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
#define typedef_s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T

typedef struct tag_l1Gll5dfO9DpqQrvRqAf7E s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T;

#endif                             /* typedef_s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T */

#ifndef struct_tag_vdGXtauKr5HuLAqoxBLhXH
#define struct_tag_vdGXtauKr5HuLAqoxBLhXH

struct tag_vdGXtauKr5HuLAqoxBLhXH
{
  emxArray_real_T_MPC_fmincon_T *FMat;
  int32_T ldm;
  int32_T ndims;
  int32_T info;
  real_T scaleFactor;
  boolean_T ConvexCheck;
  real_T regTol_;
  real_T workspace_;
  real_T workspace2_;
};

#endif                                 /* struct_tag_vdGXtauKr5HuLAqoxBLhXH */

#ifndef typedef_s_vdGXtauKr5HuLAqoxBLhXH_MPC__T
#define typedef_s_vdGXtauKr5HuLAqoxBLhXH_MPC__T

typedef struct tag_vdGXtauKr5HuLAqoxBLhXH s_vdGXtauKr5HuLAqoxBLhXH_MPC__T;

#endif                             /* typedef_s_vdGXtauKr5HuLAqoxBLhXH_MPC__T */

#ifndef struct_tag_saWPFfMboRdWeRqIEJ4x8C
#define struct_tag_saWPFfMboRdWeRqIEJ4x8C

struct tag_saWPFfMboRdWeRqIEJ4x8C
{
  emxArray_real_T_MPC_fmincon_T *grad;
  emxArray_real_T_MPC_fmincon_T *Hx;
  boolean_T hasLinear;
  int32_T nvar;
  int32_T maxVar;
  real_T beta;
  real_T rho;
  int32_T objtype;
  int32_T prev_objtype;
  int32_T prev_nvar;
  boolean_T prev_hasLinear;
  real_T gammaScalar;
};

#endif                                 /* struct_tag_saWPFfMboRdWeRqIEJ4x8C */

#ifndef typedef_s_saWPFfMboRdWeRqIEJ4x8C_MPC__T
#define typedef_s_saWPFfMboRdWeRqIEJ4x8C_MPC__T

typedef struct tag_saWPFfMboRdWeRqIEJ4x8C s_saWPFfMboRdWeRqIEJ4x8C_MPC__T;

#endif                             /* typedef_s_saWPFfMboRdWeRqIEJ4x8C_MPC__T */

#ifndef struct_tag_pIaUYPkQBTqVmAKxFPiGQF
#define struct_tag_pIaUYPkQBTqVmAKxFPiGQF

struct tag_pIaUYPkQBTqVmAKxFPiGQF
{
  emxArray_real_T_MPC_fmincon_T *workspace_double;
  emxArray_int32_T_MPC_fmincon_T *workspace_int;
  emxArray_int32_T_MPC_fmincon_T *workspace_sort;
};

#endif                                 /* struct_tag_pIaUYPkQBTqVmAKxFPiGQF */

#ifndef typedef_s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T
#define typedef_s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T

typedef struct tag_pIaUYPkQBTqVmAKxFPiGQF s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T;

#endif                             /* typedef_s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T */

#ifndef struct_tag_Wd0eYcEyLXg48EJ7pCjsH
#define struct_tag_Wd0eYcEyLXg48EJ7pCjsH

struct tag_Wd0eYcEyLXg48EJ7pCjsH
{
  int32_T mConstr;
  int32_T mConstrOrig;
  int32_T mConstrMax;
  int32_T nVar;
  int32_T nVarOrig;
  int32_T nVarMax;
  int32_T ldA;
  emxArray_real_T_MPC_fmincon_T *Aineq;
  emxArray_real_T_MPC_fmincon_T *bineq;
  emxArray_real_T_MPC_fmincon_T *Aeq;
  emxArray_real_T_MPC_fmincon_T *beq;
  emxArray_real_T_MPC_fmincon_T *lb;
  emxArray_real_T_MPC_fmincon_T *ub;
  emxArray_int32_T_MPC_fmincon_T *indexLB;
  emxArray_int32_T_MPC_fmincon_T *indexUB;
  emxArray_int32_T_MPC_fmincon_T *indexFixed;
  int32_T mEqRemoved;
  emxArray_int32_T_MPC_fmincon_T *indexEqRemoved;
  emxArray_real_T_MPC_fmincon_T *ATwset;
  emxArray_real_T_MPC_fmincon_T *bwset;
  int32_T nActiveConstr;
  emxArray_real_T_MPC_fmincon_T *maxConstrWorkspace;
  int32_T sizes[5];
  int32_T sizesNormal[5];
  int32_T sizesPhaseOne[5];
  int32_T sizesRegularized[5];
  int32_T sizesRegPhaseOne[5];
  int32_T isActiveIdx[6];
  int32_T isActiveIdxNormal[6];
  int32_T isActiveIdxPhaseOne[6];
  int32_T isActiveIdxRegularized[6];
  int32_T isActiveIdxRegPhaseOne[6];
  emxArray_boolean_T_MPC_fminco_T *isActiveConstr;
  emxArray_int32_T_MPC_fmincon_T *Wid;
  emxArray_int32_T_MPC_fmincon_T *Wlocalidx;
  int32_T nWConstr[5];
  int32_T probType;
  real_T SLACK0;
};

#endif                                 /* struct_tag_Wd0eYcEyLXg48EJ7pCjsH */

#ifndef typedef_s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
#define typedef_s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T

typedef struct tag_Wd0eYcEyLXg48EJ7pCjsH s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T;

#endif                             /* typedef_s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function' */
#ifndef struct_tag_s6lIrH89xwD47fl4e1dZNiE
#define struct_tag_s6lIrH89xwD47fl4e1dZNiE

struct tag_s6lIrH89xwD47fl4e1dZNiE
{
  real_T x0[4];
  real_T N;
};

#endif                                 /* struct_tag_s6lIrH89xwD47fl4e1dZNiE */

#ifndef typedef_s6lIrH89xwD47fl4e1dZNiE_MPC_f_T
#define typedef_s6lIrH89xwD47fl4e1dZNiE_MPC_f_T

typedef struct tag_s6lIrH89xwD47fl4e1dZNiE s6lIrH89xwD47fl4e1dZNiE_MPC_f_T;

#endif                             /* typedef_s6lIrH89xwD47fl4e1dZNiE_MPC_f_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function2' */
#ifndef struct_tag_sU0htoGcxTaPV5C2NLIldmB
#define struct_tag_sU0htoGcxTaPV5C2NLIldmB

struct tag_sU0htoGcxTaPV5C2NLIldmB
{
  real_T x0[4];
  real_T N;
};

#endif                                 /* struct_tag_sU0htoGcxTaPV5C2NLIldmB */

#ifndef typedef_sU0htoGcxTaPV5C2NLIldmB_MPC_f_T
#define typedef_sU0htoGcxTaPV5C2NLIldmB_MPC_f_T

typedef struct tag_sU0htoGcxTaPV5C2NLIldmB sU0htoGcxTaPV5C2NLIldmB_MPC_f_T;

#endif                             /* typedef_sU0htoGcxTaPV5C2NLIldmB_MPC_f_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function' */
#ifndef struct_tag_lEH3FrOxyyhckl9xmvL2m
#define struct_tag_lEH3FrOxyyhckl9xmvL2m

struct tag_lEH3FrOxyyhckl9xmvL2m
{
  s6lIrH89xwD47fl4e1dZNiE_MPC_f_T workspace;
};

#endif                                 /* struct_tag_lEH3FrOxyyhckl9xmvL2m */

#ifndef typedef_anonymous_function_1_MPC_fmin_T
#define typedef_anonymous_function_1_MPC_fmin_T

typedef struct tag_lEH3FrOxyyhckl9xmvL2m anonymous_function_1_MPC_fmin_T;

#endif                             /* typedef_anonymous_function_1_MPC_fmin_T */

#ifndef struct_tag_orfxVcOir3wnnUkquctgqH
#define struct_tag_orfxVcOir3wnnUkquctgqH

struct tag_orfxVcOir3wnnUkquctgqH
{
  real_T x0[4];
  emxArray_real_T_MPC_fmincon_T *xref;
  emxArray_real_T_MPC_fmincon_T *uref;
  real_T N;
};

#endif                                 /* struct_tag_orfxVcOir3wnnUkquctgqH */

#ifndef typedef_s_orfxVcOir3wnnUkquctgqH_MPC__T
#define typedef_s_orfxVcOir3wnnUkquctgqH_MPC__T

typedef struct tag_orfxVcOir3wnnUkquctgqH s_orfxVcOir3wnnUkquctgqH_MPC__T;

#endif                             /* typedef_s_orfxVcOir3wnnUkquctgqH_MPC__T */

#ifndef struct_tag_CWi4mtoJwsMyTk4ETNHAZB
#define struct_tag_CWi4mtoJwsMyTk4ETNHAZB

struct tag_CWi4mtoJwsMyTk4ETNHAZB
{
  s_orfxVcOir3wnnUkquctgqH_MPC__T workspace;
};

#endif                                 /* struct_tag_CWi4mtoJwsMyTk4ETNHAZB */

#ifndef typedef_anonymous_function_MPC_fminco_T
#define typedef_anonymous_function_MPC_fminco_T

typedef struct tag_CWi4mtoJwsMyTk4ETNHAZB anonymous_function_MPC_fminco_T;

#endif                             /* typedef_anonymous_function_MPC_fminco_T */

#ifndef struct_tag_BHfKGlQpt8H50ITj9VlMhB
#define struct_tag_BHfKGlQpt8H50ITj9VlMhB

struct tag_BHfKGlQpt8H50ITj9VlMhB
{
  anonymous_function_MPC_fminco_T b_value;
};

#endif                                 /* struct_tag_BHfKGlQpt8H50ITj9VlMhB */

#ifndef typedef_coder_internal_stickyStruct_1_T
#define typedef_coder_internal_stickyStruct_1_T

typedef struct tag_BHfKGlQpt8H50ITj9VlMhB coder_internal_stickyStruct_1_T;

#endif                             /* typedef_coder_internal_stickyStruct_1_T */

#ifndef struct_tag_cw9k1JKm2MZVdh1iY6u60D
#define struct_tag_cw9k1JKm2MZVdh1iY6u60D

struct tag_cw9k1JKm2MZVdh1iY6u60D
{
  anonymous_function_1_MPC_fmin_T b_value;
  coder_internal_stickyStruct_1_T next;
};

#endif                                 /* struct_tag_cw9k1JKm2MZVdh1iY6u60D */

#ifndef typedef_coder_internal_stickyStruct_2_T
#define typedef_coder_internal_stickyStruct_2_T

typedef struct tag_cw9k1JKm2MZVdh1iY6u60D coder_internal_stickyStruct_2_T;

#endif                             /* typedef_coder_internal_stickyStruct_2_T */

#ifndef struct_tag_fB9QmqhLXtg8IMsU3HQzM
#define struct_tag_fB9QmqhLXtg8IMsU3HQzM

struct tag_fB9QmqhLXtg8IMsU3HQzM
{
  coder_internal_stickyStruct_2_T next;
};

#endif                                 /* struct_tag_fB9QmqhLXtg8IMsU3HQzM */

#ifndef typedef_coder_internal_stickyStruct_3_T
#define typedef_coder_internal_stickyStruct_3_T

typedef struct tag_fB9QmqhLXtg8IMsU3HQzM coder_internal_stickyStruct_3_T;

#endif                             /* typedef_coder_internal_stickyStruct_3_T */

#ifndef struct_tag_YFDgxaui1XnWiPQK197QnB
#define struct_tag_YFDgxaui1XnWiPQK197QnB

struct tag_YFDgxaui1XnWiPQK197QnB
{
  int32_T b_value;
  coder_internal_stickyStruct_3_T next;
};

#endif                                 /* struct_tag_YFDgxaui1XnWiPQK197QnB */

#ifndef typedef_coder_internal_stickyStruct_4_T
#define typedef_coder_internal_stickyStruct_4_T

typedef struct tag_YFDgxaui1XnWiPQK197QnB coder_internal_stickyStruct_4_T;

#endif                             /* typedef_coder_internal_stickyStruct_4_T */

#ifndef struct_tag_YX2QeST1vuADktRYFaRpiD
#define struct_tag_YX2QeST1vuADktRYFaRpiD

struct tag_YX2QeST1vuADktRYFaRpiD
{
  int32_T b_value;
  coder_internal_stickyStruct_4_T next;
};

#endif                                 /* struct_tag_YX2QeST1vuADktRYFaRpiD */

#ifndef typedef_coder_internal_stickyStruct_5_T
#define typedef_coder_internal_stickyStruct_5_T

typedef struct tag_YX2QeST1vuADktRYFaRpiD coder_internal_stickyStruct_5_T;

#endif                             /* typedef_coder_internal_stickyStruct_5_T */

#ifndef struct_tag_Db8n6VDfRNyDU7JCkMAAhE
#define struct_tag_Db8n6VDfRNyDU7JCkMAAhE

struct tag_Db8n6VDfRNyDU7JCkMAAhE
{
  coder_internal_stickyStruct_5_T next;
};

#endif                                 /* struct_tag_Db8n6VDfRNyDU7JCkMAAhE */

#ifndef typedef_coder_internal_stickyStruct_6_T
#define typedef_coder_internal_stickyStruct_6_T

typedef struct tag_Db8n6VDfRNyDU7JCkMAAhE coder_internal_stickyStruct_6_T;

#endif                             /* typedef_coder_internal_stickyStruct_6_T */

#ifndef struct_tag_kSmV1GebGl5x0BXUFO9KVB
#define struct_tag_kSmV1GebGl5x0BXUFO9KVB

struct tag_kSmV1GebGl5x0BXUFO9KVB
{
  coder_internal_stickyStruct_6_T next;
};

#endif                                 /* struct_tag_kSmV1GebGl5x0BXUFO9KVB */

#ifndef typedef_coder_internal_stickyStruct_7_T
#define typedef_coder_internal_stickyStruct_7_T

typedef struct tag_kSmV1GebGl5x0BXUFO9KVB coder_internal_stickyStruct_7_T;

#endif                             /* typedef_coder_internal_stickyStruct_7_T */

#ifndef struct_tag_5fZdirw4i8b3LXP1VaK9GE
#define struct_tag_5fZdirw4i8b3LXP1VaK9GE

struct tag_5fZdirw4i8b3LXP1VaK9GE
{
  coder_internal_stickyStruct_7_T next;
};

#endif                                 /* struct_tag_5fZdirw4i8b3LXP1VaK9GE */

#ifndef typedef_coder_internal_stickyStruct_8_T
#define typedef_coder_internal_stickyStruct_8_T

typedef struct tag_5fZdirw4i8b3LXP1VaK9GE coder_internal_stickyStruct_8_T;

#endif                             /* typedef_coder_internal_stickyStruct_8_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function' */
#ifndef struct_tag_ubRgV3XvjOC86U3gunYX7E
#define struct_tag_ubRgV3XvjOC86U3gunYX7E

struct tag_ubRgV3XvjOC86U3gunYX7E
{
  coder_internal_stickyStruct_8_T next;
};

#endif                                 /* struct_tag_ubRgV3XvjOC86U3gunYX7E */

#ifndef typedef_coder_internal_stickyStruct_9_T
#define typedef_coder_internal_stickyStruct_9_T

typedef struct tag_ubRgV3XvjOC86U3gunYX7E coder_internal_stickyStruct_9_T;

#endif                             /* typedef_coder_internal_stickyStruct_9_T */

#ifndef struct_tag_tzdJIwhhx1jgWYIJOPrjUD
#define struct_tag_tzdJIwhhx1jgWYIJOPrjUD

struct tag_tzdJIwhhx1jgWYIJOPrjUD
{
  anonymous_function_MPC_fminco_T objfun;
  anonymous_function_1_MPC_fmin_T nonlin;
  real_T f_1;
  emxArray_real_T_MPC_fmincon_T *cIneq_1;
  emxArray_real_T_MPC_fmincon_T *cEq_1;
  real_T f_2;
  emxArray_real_T_MPC_fmincon_T *cIneq_2;
  emxArray_real_T_MPC_fmincon_T *cEq_2;
  int32_T nVar;
  int32_T mIneq;
  int32_T mEq;
  int32_T numEvals;
  boolean_T SpecifyObjectiveGradient;
  boolean_T SpecifyConstraintGradient;
  boolean_T isEmptyNonlcon;
  emxArray_boolean_T_MPC_fminco_T *hasLB;
  emxArray_boolean_T_MPC_fminco_T *hasUB;
  boolean_T hasBounds;
  int32_T FiniteDifferenceType;
};

#endif                                 /* struct_tag_tzdJIwhhx1jgWYIJOPrjUD */

#ifndef typedef_s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T
#define typedef_s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T

typedef struct tag_tzdJIwhhx1jgWYIJOPrjUD s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T;

#endif                             /* typedef_s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function2' */
#ifndef struct_tag_sI4PqhRHPgAqOzFKp1KxiG
#define struct_tag_sI4PqhRHPgAqOzFKp1KxiG

struct tag_sI4PqhRHPgAqOzFKp1KxiG
{
  sU0htoGcxTaPV5C2NLIldmB_MPC_f_T workspace;
};

#endif                                 /* struct_tag_sI4PqhRHPgAqOzFKp1KxiG */

#ifndef typedef_anonymous_function_1_MPC_fm_p_T
#define typedef_anonymous_function_1_MPC_fm_p_T

typedef struct tag_sI4PqhRHPgAqOzFKp1KxiG anonymous_function_1_MPC_fm_p_T;

#endif                             /* typedef_anonymous_function_1_MPC_fm_p_T */

#ifndef struct_tag_lZflMU9sVqxC63IejQkKIC
#define struct_tag_lZflMU9sVqxC63IejQkKIC

struct tag_lZflMU9sVqxC63IejQkKIC
{
  real_T x0[4];
  emxArray_real_T_MPC_fmincon_T *zref;
  emxArray_real_T_MPC_fmincon_T *wref;
  real_T N;
};

#endif                                 /* struct_tag_lZflMU9sVqxC63IejQkKIC */

#ifndef typedef_s_lZflMU9sVqxC63IejQkKIC_MPC__T
#define typedef_s_lZflMU9sVqxC63IejQkKIC_MPC__T

typedef struct tag_lZflMU9sVqxC63IejQkKIC s_lZflMU9sVqxC63IejQkKIC_MPC__T;

#endif                             /* typedef_s_lZflMU9sVqxC63IejQkKIC_MPC__T */

#ifndef struct_tag_TGBDlgxqIgzHMbRjaMp2FC
#define struct_tag_TGBDlgxqIgzHMbRjaMp2FC

struct tag_TGBDlgxqIgzHMbRjaMp2FC
{
  s_lZflMU9sVqxC63IejQkKIC_MPC__T workspace;
};

#endif                                 /* struct_tag_TGBDlgxqIgzHMbRjaMp2FC */

#ifndef typedef_anonymous_function_MPC_fmin_a_T
#define typedef_anonymous_function_MPC_fmin_a_T

typedef struct tag_TGBDlgxqIgzHMbRjaMp2FC anonymous_function_MPC_fmin_a_T;

#endif                             /* typedef_anonymous_function_MPC_fmin_a_T */

#ifndef struct_tag_o85INdeDlc3kCNyxnAbQ2F
#define struct_tag_o85INdeDlc3kCNyxnAbQ2F

struct tag_o85INdeDlc3kCNyxnAbQ2F
{
  anonymous_function_MPC_fmin_a_T b_value;
};

#endif                                 /* struct_tag_o85INdeDlc3kCNyxnAbQ2F */

#ifndef typedef_coder_internal_stickyStruct_a_T
#define typedef_coder_internal_stickyStruct_a_T

typedef struct tag_o85INdeDlc3kCNyxnAbQ2F coder_internal_stickyStruct_a_T;

#endif                             /* typedef_coder_internal_stickyStruct_a_T */

#ifndef struct_tag_zljci4bPrdx2wRfeerrJZ
#define struct_tag_zljci4bPrdx2wRfeerrJZ

struct tag_zljci4bPrdx2wRfeerrJZ
{
  anonymous_function_1_MPC_fm_p_T b_value;
  coder_internal_stickyStruct_a_T next;
};

#endif                                 /* struct_tag_zljci4bPrdx2wRfeerrJZ */

#ifndef typedef_coder_internal_stickyStruc_ad_T
#define typedef_coder_internal_stickyStruc_ad_T

typedef struct tag_zljci4bPrdx2wRfeerrJZ coder_internal_stickyStruc_ad_T;

#endif                             /* typedef_coder_internal_stickyStruc_ad_T */

#ifndef struct_tag_74eHbZzTnJ3rVgwlXVq3dD
#define struct_tag_74eHbZzTnJ3rVgwlXVq3dD

struct tag_74eHbZzTnJ3rVgwlXVq3dD
{
  coder_internal_stickyStruc_ad_T next;
};

#endif                                 /* struct_tag_74eHbZzTnJ3rVgwlXVq3dD */

#ifndef typedef_coder_internal_stickyStru_add_T
#define typedef_coder_internal_stickyStru_add_T

typedef struct tag_74eHbZzTnJ3rVgwlXVq3dD coder_internal_stickyStru_add_T;

#endif                             /* typedef_coder_internal_stickyStru_add_T */

#ifndef struct_tag_spvvhQETZ5gPSGTX3YMxOB
#define struct_tag_spvvhQETZ5gPSGTX3YMxOB

struct tag_spvvhQETZ5gPSGTX3YMxOB
{
  int32_T b_value;
  coder_internal_stickyStru_add_T next;
};

#endif                                 /* struct_tag_spvvhQETZ5gPSGTX3YMxOB */

#ifndef typedef_coder_internal_stickyStr_add4_T
#define typedef_coder_internal_stickyStr_add4_T

typedef struct tag_spvvhQETZ5gPSGTX3YMxOB coder_internal_stickyStr_add4_T;

#endif                             /* typedef_coder_internal_stickyStr_add4_T */

#ifndef struct_tag_Y9WofiVbo1E2aV3KMIaR3
#define struct_tag_Y9WofiVbo1E2aV3KMIaR3

struct tag_Y9WofiVbo1E2aV3KMIaR3
{
  int32_T b_value;
  coder_internal_stickyStr_add4_T next;
};

#endif                                 /* struct_tag_Y9WofiVbo1E2aV3KMIaR3 */

#ifndef typedef_coder_internal_stickySt_add4i_T
#define typedef_coder_internal_stickySt_add4i_T

typedef struct tag_Y9WofiVbo1E2aV3KMIaR3 coder_internal_stickySt_add4i_T;

#endif                             /* typedef_coder_internal_stickySt_add4i_T */

#ifndef struct_tag_ZDR9JjvK0piX6rgKxhFr5D
#define struct_tag_ZDR9JjvK0piX6rgKxhFr5D

struct tag_ZDR9JjvK0piX6rgKxhFr5D
{
  coder_internal_stickySt_add4i_T next;
};

#endif                                 /* struct_tag_ZDR9JjvK0piX6rgKxhFr5D */

#ifndef typedef_coder_internal_stickyS_add4ib_T
#define typedef_coder_internal_stickyS_add4ib_T

typedef struct tag_ZDR9JjvK0piX6rgKxhFr5D coder_internal_stickyS_add4ib_T;

#endif                             /* typedef_coder_internal_stickyS_add4ib_T */

#ifndef struct_tag_2hjmIh3getjRJeC7ohO3HC
#define struct_tag_2hjmIh3getjRJeC7ohO3HC

struct tag_2hjmIh3getjRJeC7ohO3HC
{
  coder_internal_stickyS_add4ib_T next;
};

#endif                                 /* struct_tag_2hjmIh3getjRJeC7ohO3HC */

#ifndef typedef_coder_internal_sticky_add4ibr_T
#define typedef_coder_internal_sticky_add4ibr_T

typedef struct tag_2hjmIh3getjRJeC7ohO3HC coder_internal_sticky_add4ibr_T;

#endif                             /* typedef_coder_internal_sticky_add4ibr_T */

#ifndef struct_tag_AFDYfHf9EcgJjajsHpQdxD
#define struct_tag_AFDYfHf9EcgJjajsHpQdxD

struct tag_AFDYfHf9EcgJjajsHpQdxD
{
  coder_internal_sticky_add4ibr_T next;
};

#endif                                 /* struct_tag_AFDYfHf9EcgJjajsHpQdxD */

#ifndef typedef_coder_internal_stick_add4ibr2_T
#define typedef_coder_internal_stick_add4ibr2_T

typedef struct tag_AFDYfHf9EcgJjajsHpQdxD coder_internal_stick_add4ibr2_T;

#endif                             /* typedef_coder_internal_stick_add4ibr2_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function2' */
#ifndef struct_tag_PXANmPDhIY92bPyzeKLF4B
#define struct_tag_PXANmPDhIY92bPyzeKLF4B

struct tag_PXANmPDhIY92bPyzeKLF4B
{
  coder_internal_stick_add4ibr2_T next;
};

#endif                                 /* struct_tag_PXANmPDhIY92bPyzeKLF4B */

#ifndef typedef_coder_internal_stickyStruct_c_T
#define typedef_coder_internal_stickyStruct_c_T

typedef struct tag_PXANmPDhIY92bPyzeKLF4B coder_internal_stickyStruct_c_T;

#endif                             /* typedef_coder_internal_stickyStruct_c_T */

#ifndef struct_tag_9imJcZ2iwk426vK9Q2bBEG
#define struct_tag_9imJcZ2iwk426vK9Q2bBEG

struct tag_9imJcZ2iwk426vK9Q2bBEG
{
  anonymous_function_MPC_fmin_a_T objfun;
  anonymous_function_1_MPC_fm_p_T nonlin;
  real_T f_1;
  emxArray_real_T_MPC_fmincon_T *cIneq_1;
  emxArray_real_T_MPC_fmincon_T *cEq_1;
  real_T f_2;
  emxArray_real_T_MPC_fmincon_T *cIneq_2;
  emxArray_real_T_MPC_fmincon_T *cEq_2;
  int32_T nVar;
  int32_T mIneq;
  int32_T mEq;
  int32_T numEvals;
  boolean_T SpecifyObjectiveGradient;
  boolean_T SpecifyConstraintGradient;
  boolean_T isEmptyNonlcon;
  emxArray_boolean_T_MPC_fminco_T *hasLB;
  emxArray_boolean_T_MPC_fminco_T *hasUB;
  boolean_T hasBounds;
  int32_T FiniteDifferenceType;
};

#endif                                 /* struct_tag_9imJcZ2iwk426vK9Q2bBEG */

#ifndef typedef_s_9imJcZ2iwk426vK9Q2bBEG_MPC__T
#define typedef_s_9imJcZ2iwk426vK9Q2bBEG_MPC__T

typedef struct tag_9imJcZ2iwk426vK9Q2bBEG s_9imJcZ2iwk426vK9Q2bBEG_MPC__T;

#endif                             /* typedef_s_9imJcZ2iwk426vK9Q2bBEG_MPC__T */

/* Parameters (default storage) */
typedef struct P_MPC_fmincon_T_ P_MPC_fmincon_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_MPC_fmincon_T RT_MODEL_MPC_fmincon_T;

#endif                                 /* RTW_HEADER_MPC_fmincon_types_h_ */
