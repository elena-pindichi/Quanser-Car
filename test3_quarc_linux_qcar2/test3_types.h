/*
 * test3_types.h
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "test3".
 *
 * Model version              : 15.44
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Thu Apr 24 16:07:37 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test3_types_h_
#define RTW_HEADER_test3_types_h_
#include "rtwtypes.h"

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function' */
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

#ifndef typedef_sG8JZ69axY52WWR6RKyApQC_test3_T
#define typedef_sG8JZ69axY52WWR6RKyApQC_test3_T

typedef struct tag_sG8JZ69axY52WWR6RKyApQC sG8JZ69axY52WWR6RKyApQC_test3_T;

#endif                             /* typedef_sG8JZ69axY52WWR6RKyApQC_test3_T */

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

#ifndef typedef_s7RdrPWkr8UPAUyTdDJkLaG_test3_T
#define typedef_s7RdrPWkr8UPAUyTdDJkLaG_test3_T

typedef struct tag_s7RdrPWkr8UPAUyTdDJkLaG s7RdrPWkr8UPAUyTdDJkLaG_test3_T;

#endif                             /* typedef_s7RdrPWkr8UPAUyTdDJkLaG_test3_T */

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

#ifndef typedef_somzaGboVhDG7PNQS6E98jD_test3_T
#define typedef_somzaGboVhDG7PNQS6E98jD_test3_T

typedef struct tag_somzaGboVhDG7PNQS6E98jD somzaGboVhDG7PNQS6E98jD_test3_T;

#endif                             /* typedef_somzaGboVhDG7PNQS6E98jD_test3_T */

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

#ifndef typedef_emxArray_real_T_test3_T
#define typedef_emxArray_real_T_test3_T

typedef struct emxArray_real_T emxArray_real_T_test3_T;

#endif                                 /* typedef_emxArray_real_T_test3_T */

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

#ifndef typedef_emxArray_int32_T_test3_T
#define typedef_emxArray_int32_T_test3_T

typedef struct emxArray_int32_T emxArray_int32_T_test3_T;

#endif                                 /* typedef_emxArray_int32_T_test3_T */

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

#ifndef typedef_emxArray_boolean_T_test3_T
#define typedef_emxArray_boolean_T_test3_T

typedef struct emxArray_boolean_T emxArray_boolean_T_test3_T;

#endif                                 /* typedef_emxArray_boolean_T_test3_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function' */
#ifndef struct_tag_l1Gll5dfO9DpqQrvRqAf7E
#define struct_tag_l1Gll5dfO9DpqQrvRqAf7E

struct tag_l1Gll5dfO9DpqQrvRqAf7E
{
  int32_T ldq;
  emxArray_real_T_test3_T *QR;
  emxArray_real_T_test3_T *Q;
  emxArray_int32_T_test3_T *jpvt;
  int32_T mrows;
  int32_T ncols;
  emxArray_real_T_test3_T *tau;
  int32_T minRowCol;
  boolean_T usedPivoting;
};

#endif                                 /* struct_tag_l1Gll5dfO9DpqQrvRqAf7E */

#ifndef typedef_s_l1Gll5dfO9DpqQrvRqAf7E_test_T
#define typedef_s_l1Gll5dfO9DpqQrvRqAf7E_test_T

typedef struct tag_l1Gll5dfO9DpqQrvRqAf7E s_l1Gll5dfO9DpqQrvRqAf7E_test_T;

#endif                             /* typedef_s_l1Gll5dfO9DpqQrvRqAf7E_test_T */

#ifndef struct_tag_vdGXtauKr5HuLAqoxBLhXH
#define struct_tag_vdGXtauKr5HuLAqoxBLhXH

struct tag_vdGXtauKr5HuLAqoxBLhXH
{
  emxArray_real_T_test3_T *FMat;
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

#ifndef typedef_s_vdGXtauKr5HuLAqoxBLhXH_test_T
#define typedef_s_vdGXtauKr5HuLAqoxBLhXH_test_T

typedef struct tag_vdGXtauKr5HuLAqoxBLhXH s_vdGXtauKr5HuLAqoxBLhXH_test_T;

#endif                             /* typedef_s_vdGXtauKr5HuLAqoxBLhXH_test_T */

#ifndef struct_tag_saWPFfMboRdWeRqIEJ4x8C
#define struct_tag_saWPFfMboRdWeRqIEJ4x8C

struct tag_saWPFfMboRdWeRqIEJ4x8C
{
  emxArray_real_T_test3_T *grad;
  emxArray_real_T_test3_T *Hx;
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

#ifndef typedef_s_saWPFfMboRdWeRqIEJ4x8C_test_T
#define typedef_s_saWPFfMboRdWeRqIEJ4x8C_test_T

typedef struct tag_saWPFfMboRdWeRqIEJ4x8C s_saWPFfMboRdWeRqIEJ4x8C_test_T;

#endif                             /* typedef_s_saWPFfMboRdWeRqIEJ4x8C_test_T */

#ifndef struct_tag_pIaUYPkQBTqVmAKxFPiGQF
#define struct_tag_pIaUYPkQBTqVmAKxFPiGQF

struct tag_pIaUYPkQBTqVmAKxFPiGQF
{
  emxArray_real_T_test3_T *workspace_double;
  emxArray_int32_T_test3_T *workspace_int;
  emxArray_int32_T_test3_T *workspace_sort;
};

#endif                                 /* struct_tag_pIaUYPkQBTqVmAKxFPiGQF */

#ifndef typedef_s_pIaUYPkQBTqVmAKxFPiGQF_test_T
#define typedef_s_pIaUYPkQBTqVmAKxFPiGQF_test_T

typedef struct tag_pIaUYPkQBTqVmAKxFPiGQF s_pIaUYPkQBTqVmAKxFPiGQF_test_T;

#endif                             /* typedef_s_pIaUYPkQBTqVmAKxFPiGQF_test_T */

#ifndef struct_tag_PLLLBDg14rHiR3qEakQweE
#define struct_tag_PLLLBDg14rHiR3qEakQweE

struct tag_PLLLBDg14rHiR3qEakQweE
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
  emxArray_real_T_test3_T *xstarsqp;
  emxArray_real_T_test3_T *xstarsqp_old;
  emxArray_real_T_test3_T *grad;
  emxArray_real_T_test3_T *grad_old;
  int32_T FunctionEvaluations;
  int32_T sqpIterations;
  int32_T sqpExitFlag;
  emxArray_real_T_test3_T *lambdasqp;
  emxArray_real_T_test3_T *lambdaStopTest;
  emxArray_real_T_test3_T *lambdaStopTestPrev;
  real_T steplength;
  emxArray_real_T_test3_T *delta_x;
  emxArray_real_T_test3_T *socDirection;
  emxArray_int32_T_test3_T *workingset_old;
  emxArray_real_T_test3_T *gradLag;
  emxArray_real_T_test3_T *delta_gradLag;
  emxArray_real_T_test3_T *xstar;
  real_T fstar;
  real_T firstorderopt;
  emxArray_real_T_test3_T *lambda;
  int32_T state;
  real_T maxConstr;
  int32_T iterations;
  emxArray_real_T_test3_T *searchDir;
};

#endif                                 /* struct_tag_PLLLBDg14rHiR3qEakQweE */

#ifndef typedef_s_PLLLBDg14rHiR3qEakQweE_test_T
#define typedef_s_PLLLBDg14rHiR3qEakQweE_test_T

typedef struct tag_PLLLBDg14rHiR3qEakQweE s_PLLLBDg14rHiR3qEakQweE_test_T;

#endif                             /* typedef_s_PLLLBDg14rHiR3qEakQweE_test_T */

#ifndef struct_tag_IhzSggsSakhYrqTLyRPh4
#define struct_tag_IhzSggsSakhYrqTLyRPh4

struct tag_IhzSggsSakhYrqTLyRPh4
{
  real_T x0[3];
  emxArray_real_T_test3_T *xref;
  emxArray_real_T_test3_T *uref;
  real_T N;
};

#endif                                 /* struct_tag_IhzSggsSakhYrqTLyRPh4 */

#ifndef typedef_s_IhzSggsSakhYrqTLyRPh4_test3_T
#define typedef_s_IhzSggsSakhYrqTLyRPh4_test3_T

typedef struct tag_IhzSggsSakhYrqTLyRPh4 s_IhzSggsSakhYrqTLyRPh4_test3_T;

#endif                             /* typedef_s_IhzSggsSakhYrqTLyRPh4_test3_T */

#ifndef struct_tag_XUKrep5gYdlDqi2AZc1RdB
#define struct_tag_XUKrep5gYdlDqi2AZc1RdB

struct tag_XUKrep5gYdlDqi2AZc1RdB
{
  s_IhzSggsSakhYrqTLyRPh4_test3_T workspace;
};

#endif                                 /* struct_tag_XUKrep5gYdlDqi2AZc1RdB */

#ifndef typedef_anonymous_function_test3_T
#define typedef_anonymous_function_test3_T

typedef struct tag_XUKrep5gYdlDqi2AZc1RdB anonymous_function_test3_T;

#endif                                 /* typedef_anonymous_function_test3_T */

#ifndef struct_tag_2PRYoCjgKB130RE12wMdUF
#define struct_tag_2PRYoCjgKB130RE12wMdUF

struct tag_2PRYoCjgKB130RE12wMdUF
{
  anonymous_function_test3_T b_value;
};

#endif                                 /* struct_tag_2PRYoCjgKB130RE12wMdUF */

#ifndef typedef_coder_internal_stickyStruct_1_T
#define typedef_coder_internal_stickyStruct_1_T

typedef struct tag_2PRYoCjgKB130RE12wMdUF coder_internal_stickyStruct_1_T;

#endif                             /* typedef_coder_internal_stickyStruct_1_T */

#ifndef struct_tag_2oAYgGoyMhsoabPZFUiy8E
#define struct_tag_2oAYgGoyMhsoabPZFUiy8E

struct tag_2oAYgGoyMhsoabPZFUiy8E
{
  coder_internal_stickyStruct_1_T next;
};

#endif                                 /* struct_tag_2oAYgGoyMhsoabPZFUiy8E */

#ifndef typedef_coder_internal_stickyStruct_2_T
#define typedef_coder_internal_stickyStruct_2_T

typedef struct tag_2oAYgGoyMhsoabPZFUiy8E coder_internal_stickyStruct_2_T;

#endif                             /* typedef_coder_internal_stickyStruct_2_T */

#ifndef struct_tag_5U3nDybsVBPjb0k8uQ7NdF
#define struct_tag_5U3nDybsVBPjb0k8uQ7NdF

struct tag_5U3nDybsVBPjb0k8uQ7NdF
{
  coder_internal_stickyStruct_2_T next;
};

#endif                                 /* struct_tag_5U3nDybsVBPjb0k8uQ7NdF */

#ifndef typedef_coder_internal_stickyStruct_3_T
#define typedef_coder_internal_stickyStruct_3_T

typedef struct tag_5U3nDybsVBPjb0k8uQ7NdF coder_internal_stickyStruct_3_T;

#endif                             /* typedef_coder_internal_stickyStruct_3_T */

#ifndef struct_tag_HG2842ZCVp4kueYTIIzInC
#define struct_tag_HG2842ZCVp4kueYTIIzInC

struct tag_HG2842ZCVp4kueYTIIzInC
{
  coder_internal_stickyStruct_3_T next;
};

#endif                                 /* struct_tag_HG2842ZCVp4kueYTIIzInC */

#ifndef typedef_coder_internal_stickyStruct_4_T
#define typedef_coder_internal_stickyStruct_4_T

typedef struct tag_HG2842ZCVp4kueYTIIzInC coder_internal_stickyStruct_4_T;

#endif                             /* typedef_coder_internal_stickyStruct_4_T */

#ifndef struct_tag_jWZ3oB09OJ2qYTeFi4WxdD
#define struct_tag_jWZ3oB09OJ2qYTeFi4WxdD

struct tag_jWZ3oB09OJ2qYTeFi4WxdD
{
  coder_internal_stickyStruct_4_T next;
};

#endif                                 /* struct_tag_jWZ3oB09OJ2qYTeFi4WxdD */

#ifndef typedef_coder_internal_stickyStruct_5_T
#define typedef_coder_internal_stickyStruct_5_T

typedef struct tag_jWZ3oB09OJ2qYTeFi4WxdD coder_internal_stickyStruct_5_T;

#endif                             /* typedef_coder_internal_stickyStruct_5_T */

#ifndef struct_tag_xOfErVP6acFqpp8DX9YmxB
#define struct_tag_xOfErVP6acFqpp8DX9YmxB

struct tag_xOfErVP6acFqpp8DX9YmxB
{
  coder_internal_stickyStruct_5_T next;
};

#endif                                 /* struct_tag_xOfErVP6acFqpp8DX9YmxB */

#ifndef typedef_coder_internal_stickyStruct_6_T
#define typedef_coder_internal_stickyStruct_6_T

typedef struct tag_xOfErVP6acFqpp8DX9YmxB coder_internal_stickyStruct_6_T;

#endif                             /* typedef_coder_internal_stickyStruct_6_T */

#ifndef struct_tag_xjuDI8Su4NLEknSQsKL8qF
#define struct_tag_xjuDI8Su4NLEknSQsKL8qF

struct tag_xjuDI8Su4NLEknSQsKL8qF
{
  coder_internal_stickyStruct_6_T next;
};

#endif                                 /* struct_tag_xjuDI8Su4NLEknSQsKL8qF */

#ifndef typedef_coder_internal_stickyStruct_7_T
#define typedef_coder_internal_stickyStruct_7_T

typedef struct tag_xjuDI8Su4NLEknSQsKL8qF coder_internal_stickyStruct_7_T;

#endif                             /* typedef_coder_internal_stickyStruct_7_T */

#ifndef struct_tag_HsdThpNRV9t1UCax29PgKH
#define struct_tag_HsdThpNRV9t1UCax29PgKH

struct tag_HsdThpNRV9t1UCax29PgKH
{
  coder_internal_stickyStruct_7_T next;
};

#endif                                 /* struct_tag_HsdThpNRV9t1UCax29PgKH */

#ifndef typedef_coder_internal_stickyStruct_8_T
#define typedef_coder_internal_stickyStruct_8_T

typedef struct tag_HsdThpNRV9t1UCax29PgKH coder_internal_stickyStruct_8_T;

#endif                             /* typedef_coder_internal_stickyStruct_8_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function' */
#ifndef struct_tag_4tjeM4310gildRMRSRSpND
#define struct_tag_4tjeM4310gildRMRSRSpND

struct tag_4tjeM4310gildRMRSRSpND
{
  coder_internal_stickyStruct_8_T next;
};

#endif                                 /* struct_tag_4tjeM4310gildRMRSRSpND */

#ifndef typedef_coder_internal_stickyStruct_9_T
#define typedef_coder_internal_stickyStruct_9_T

typedef struct tag_4tjeM4310gildRMRSRSpND coder_internal_stickyStruct_9_T;

#endif                             /* typedef_coder_internal_stickyStruct_9_T */

#ifndef struct_tag_ZbRibKlg6CoahmaZOjRYjD
#define struct_tag_ZbRibKlg6CoahmaZOjRYjD

struct tag_ZbRibKlg6CoahmaZOjRYjD
{
  anonymous_function_test3_T objfun;
  real_T f_1;
  real_T f_2;
  int32_T nVar;
  int32_T mIneq;
  int32_T mEq;
  int32_T numEvals;
  boolean_T SpecifyObjectiveGradient;
  boolean_T SpecifyConstraintGradient;
  boolean_T isEmptyNonlcon;
  emxArray_boolean_T_test3_T *hasLB;
  emxArray_boolean_T_test3_T *hasUB;
  boolean_T hasBounds;
  int32_T FiniteDifferenceType;
};

#endif                                 /* struct_tag_ZbRibKlg6CoahmaZOjRYjD */

#ifndef typedef_s_ZbRibKlg6CoahmaZOjRYjD_test_T
#define typedef_s_ZbRibKlg6CoahmaZOjRYjD_test_T

typedef struct tag_ZbRibKlg6CoahmaZOjRYjD s_ZbRibKlg6CoahmaZOjRYjD_test_T;

#endif                             /* typedef_s_ZbRibKlg6CoahmaZOjRYjD_test_T */

#ifndef struct_emxArray_real_T_0
#define struct_emxArray_real_T_0

struct emxArray_real_T_0
{
  int32_T size;
};

#endif                                 /* struct_emxArray_real_T_0 */

#ifndef typedef_emxArray_real_T_0_test3_T
#define typedef_emxArray_real_T_0_test3_T

typedef struct emxArray_real_T_0 emxArray_real_T_0_test3_T;

#endif                                 /* typedef_emxArray_real_T_0_test3_T */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function' */
#ifndef struct_tag_k8kXP0ntDjd4qxsrByEVbG
#define struct_tag_k8kXP0ntDjd4qxsrByEVbG

struct tag_k8kXP0ntDjd4qxsrByEVbG
{
  int32_T mConstr;
  int32_T mConstrOrig;
  int32_T mConstrMax;
  int32_T nVar;
  int32_T nVarOrig;
  int32_T nVarMax;
  int32_T ldA;
  emxArray_real_T_0_test3_T Aineq;
  emxArray_real_T_0_test3_T Aeq;
  emxArray_real_T_test3_T *lb;
  emxArray_real_T_test3_T *ub;
  emxArray_int32_T_test3_T *indexLB;
  emxArray_int32_T_test3_T *indexUB;
  emxArray_int32_T_test3_T *indexFixed;
  int32_T mEqRemoved;
  emxArray_real_T_test3_T *ATwset;
  emxArray_real_T_test3_T *bwset;
  int32_T nActiveConstr;
  emxArray_real_T_test3_T *maxConstrWorkspace;
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
  emxArray_boolean_T_test3_T *isActiveConstr;
  emxArray_int32_T_test3_T *Wid;
  emxArray_int32_T_test3_T *Wlocalidx;
  int32_T nWConstr[5];
  int32_T probType;
  real_T SLACK0;
};

#endif                                 /* struct_tag_k8kXP0ntDjd4qxsrByEVbG */

#ifndef typedef_s_k8kXP0ntDjd4qxsrByEVbG_test_T
#define typedef_s_k8kXP0ntDjd4qxsrByEVbG_test_T

typedef struct tag_k8kXP0ntDjd4qxsrByEVbG s_k8kXP0ntDjd4qxsrByEVbG_test_T;

#endif                             /* typedef_s_k8kXP0ntDjd4qxsrByEVbG_test_T */

/* Parameters (default storage) */
typedef struct P_test3_T_ P_test3_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_test3_T RT_MODEL_test3_T;

#endif                                 /* RTW_HEADER_test3_types_h_ */
