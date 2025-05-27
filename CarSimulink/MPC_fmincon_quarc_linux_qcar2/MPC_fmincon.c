/*
 * MPC_fmincon.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "MPC_fmincon".
 *
 * Model version              : 15.62
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Tue May 27 11:16:39 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MPC_fmincon.h"
#include "rtwtypes.h"
#include "MPC_fmincon_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>
#include "MPC_fmincon_private.h"
#include "rt_defines.h"
#include <stdlib.h>
#include <stddef.h>
#include "zero_crossing_types.h"
#include "MPC_fmincon_dt.h"

/* Named constants for MATLAB Function: '<Root>/MATLAB Function' */
#define MPC_fmincon_CALL_EVENT         (-1)

/* Block signals (default storage) */
B_MPC_fmincon_T MPC_fmincon_B;

/* Continuous states */
X_MPC_fmincon_T MPC_fmincon_X;

/* Block states (default storage) */
DW_MPC_fmincon_T MPC_fmincon_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_MPC_fmincon_T MPC_fmincon_PrevZCX;

/* Real-time model */
static RT_MODEL_MPC_fmincon_T MPC_fmincon_M_;
RT_MODEL_MPC_fmincon_T *const MPC_fmincon_M = &MPC_fmincon_M_;

/* Forward declaration for local functions */
static void MPC_fmincon_emxInit_real_T(emxArray_real_T_MPC_fmincon_T **pEmxArray,
  int32_T numDimensions);
static void MPC_fm_emxEnsureCapacity_real_T(emxArray_real_T_MPC_fmincon_T
  *emxArray, int32_T oldNumel);
static void MPC_fmincon_emxFree_real_T(emxArray_real_T_MPC_fmincon_T **pEmxArray);
static void MPC_fmi_eML_blk_kernel_anonFcn2(const real_T x0[4], real_T N, const
  emxArray_real_T_MPC_fmincon_T *u, emxArray_real_T_MPC_fmincon_T *varargout_1,
  emxArray_real_T_MPC_fmincon_T *varargout_2);
static void MPC_fmincon_emxInit_int32_T(emxArray_int32_T_MPC_fmincon_T
  **pEmxArray, int32_T numDimensions);
static void emxInitStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *pStruct);
static void MPC_f_emxEnsureCapacity_int32_T(emxArray_int32_T_MPC_fmincon_T
  *emxArray, int32_T oldNumel);
static void MPC_fmincon_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
  int32_T mIneq, int32_T mEq, const emxArray_real_T_MPC_fmincon_T *x0, int32_T
  mNonlinIneq, int32_T mNonlinEq, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *obj);
static void emxInitStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_MPC__T
  *pStruct);
static void emxInitStruct_anonymous_functio(anonymous_function_MPC_fminco_T
  *pStruct);
static void emxInitStruct_coder_in_add4ibr2(coder_internal_stickyStruct_1_T
  *pStruct);
static void emxInitStruct_coder_int_add4ibr(coder_internal_stickyStruct_2_T
  *pStruct);
static void emxInitStruct_coder_inte_add4ib(coder_internal_stickyStruct_3_T
  *pStruct);
static void emxInitStruct_coder_inter_add4i(coder_internal_stickyStruct_4_T
  *pStruct);
static void emxInitStruct_coder_intern_add4(coder_internal_stickyStruct_5_T
  *pStruct);
static void emxInitStruct_coder_interna_add(coder_internal_stickyStruct_6_T
  *pStruct);
static void emxInitStruct_coder_internal_ad(coder_internal_stickyStruct_7_T
  *pStruct);
static void emxInitStruct_coder_internal__a(coder_internal_stickyStruct_8_T
  *pStruct);
static void emxInitStruct_coder_internal_st(coder_internal_stickyStruct_9_T
  *pStruct);
static void MPC_fmincon_emxInit_boolean_T(emxArray_boolean_T_MPC_fminco_T
  **pEmxArray, int32_T numDimensions);
static void emxInitStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T
  *pStruct);
static void MPC_emxEnsureCapacity_boolean_T(emxArray_boolean_T_MPC_fminco_T
  *emxArray, int32_T oldNumel);
static void MPC_fmincon_factoryConstruct_i(const real_T objfun_workspace_x0[4],
  const emxArray_real_T_MPC_fmincon_T *objfun_workspace_xref, const
  emxArray_real_T_MPC_fmincon_T *objfun_workspace_uref, real_T
  objfun_workspace_N, const s6lIrH89xwD47fl4e1dZNiE_MPC_f_T nonlin_workspace,
  int32_T nVar, int32_T mCineq, int32_T mCeq, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T *obj);
static void emxInitStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *pStruct);
static void emxInitStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T
  *pStruct);
static void emxInitStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_MPC__T
  *pStruct);
static void emxInitStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T
  *pStruct);
static void emxInitStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *pStruct);
static void MPC_fmincon_factoryConstruct_ir(int32_T mIneqMax, int32_T mEqMax,
  int32_T nVar, int32_T nVarMax, int32_T mConstrMax,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj);
static void MPC_fmincon_compressBounds(int32_T nVar,
  emxArray_int32_T_MPC_fmincon_T *indexLB, emxArray_int32_T_MPC_fmincon_T
  *indexUB, emxArray_int32_T_MPC_fmincon_T *indexFixed, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  int32_T *mLB, int32_T *mUB, int32_T *mFixed);
static void MPC_fmincon_binary_expand_op(real_T in1[2], const
  emxArray_real_T_MPC_fmincon_T *in2, int32_T in3, int32_T in4, const
  emxArray_real_T_MPC_fmincon_T *in5, int32_T in6);
static real_T MPC_fmi_eML_blk_kernel_anonFcn1(const real_T x0[4], const
  emxArray_real_T_MPC_fmincon_T *xref, const emxArray_real_T_MPC_fmincon_T *uref,
  real_T N, const emxArray_real_T_MPC_fmincon_T *u);
static void MPC_fmincon_emxFree_int32_T(emxArray_int32_T_MPC_fmincon_T
  **pEmxArray);
static int32_T MPC_fminco_checkVectorNonFinite(int32_T N, const
  emxArray_real_T_MPC_fmincon_T *vec, int32_T iv0);
static int32_T MPC_fmincon_computeConstraints_(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const emxArray_real_T_MPC_fmincon_T *x,
  emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T eq0);
static boolean_T MPC_fminco_finDiffEvalAndChkErr(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_xref, const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_uref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_MPC_fmincon_T *cIneqPlus,
  emxArray_real_T_MPC_fmincon_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_MPC_fmincon_T *xk);
static boolean_T MPC_fm_computeFiniteDifferences(s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T
  *obj, real_T fCurrent, const emxArray_real_T_MPC_fmincon_T *cIneqCurrent,
  int32_T ineq0, const emxArray_real_T_MPC_fmincon_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_MPC_fmincon_T *xk, emxArray_real_T_MPC_fmincon_T *gradf,
  emxArray_real_T_MPC_fmincon_T *JacCineqTrans, int32_T CineqColStart, int32_T
  ldJI, emxArray_real_T_MPC_fmincon_T *JacCeqTrans, int32_T CeqColStart, int32_T
  ldJE, const emxArray_real_T_MPC_fmincon_T *lb, const
  emxArray_real_T_MPC_fmincon_T *ub);
static void MPC_fm_updateWorkingSetForNewQP(const emxArray_real_T_MPC_fmincon_T *
  xk, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, int32_T mIneq, int32_T
  mNonlinIneq, const emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mEq, int32_T
  mNonlinEq, const emxArray_real_T_MPC_fmincon_T *cEq, int32_T mLB, const
  emxArray_real_T_MPC_fmincon_T *lb, int32_T mUB, const
  emxArray_real_T_MPC_fmincon_T *ub, int32_T mFixed);
static void MPC_fmi_modifyOverheadPhaseOne_(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj);
static void MPC_fmincon_setProblemType(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T PROBLEM_TYPE);
static void MPC_fmincon_xgemv(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y);
static void MPC_fmincon_computeGradLag(emxArray_real_T_MPC_fmincon_T *workspace,
  int32_T ldA, int32_T nVar, const emxArray_real_T_MPC_fmincon_T *grad, int32_T
  mIneq, const emxArray_real_T_MPC_fmincon_T *AineqTrans, int32_T mEq, const
  emxArray_real_T_MPC_fmincon_T *AeqTrans, const emxArray_int32_T_MPC_fmincon_T *
  finiteFixed, int32_T mFixed, const emxArray_int32_T_MPC_fmincon_T *finiteLB,
  int32_T mLB, const emxArray_int32_T_MPC_fmincon_T *finiteUB, int32_T mUB,
  const emxArray_real_T_MPC_fmincon_T *lambda);
static real_T MPC_fmin_computePrimalFeasError(const
  emxArray_real_T_MPC_fmincon_T *x, int32_T mLinIneq, int32_T mNonlinIneq, const
  emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mLinEq, int32_T mNonlinEq, const
  emxArray_real_T_MPC_fmincon_T *cEq, const emxArray_int32_T_MPC_fmincon_T
  *finiteLB, int32_T mLB, const emxArray_real_T_MPC_fmincon_T *lb, const
  emxArray_int32_T_MPC_fmincon_T *finiteUB, int32_T mUB, const
  emxArray_real_T_MPC_fmincon_T *ub);
static void MPC_fminco_computeDualFeasError(int32_T nVar, const
  emxArray_real_T_MPC_fmincon_T *gradLag, boolean_T *gradOK, real_T *val);
static void MPC_fmincon_test_exit(sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  const s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  int32_T runTimeOptions_MaxFunctionEvalu, boolean_T *Flags_gradOK, boolean_T
  *Flags_fevalOK, boolean_T *Flags_done, boolean_T *Flags_stepAccepted,
  boolean_T *Flags_failedLineSearch, int32_T *Flags_stepType);
static void MPC_fmincon_saveJacobian(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *obj,
  int32_T nVar, int32_T mIneq, const emxArray_real_T_MPC_fmincon_T
  *JacCineqTrans, int32_T ineqCol0, int32_T mEq, const
  emxArray_real_T_MPC_fmincon_T *JacCeqTrans, int32_T eqCol0, int32_T ldJ);
static real_T MPC_fmincon_computeComplError(const emxArray_real_T_MPC_fmincon_T *
  fscales_cineq_constraint, const emxArray_real_T_MPC_fmincon_T *xCurrent,
  int32_T mIneq, const emxArray_real_T_MPC_fmincon_T *cIneq, const
  emxArray_int32_T_MPC_fmincon_T *finiteLB, int32_T mLB, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_int32_T_MPC_fmincon_T
  *finiteUB, int32_T mUB, const emxArray_real_T_MPC_fmincon_T *ub, const
  emxArray_real_T_MPC_fmincon_T *lambda, int32_T iL0);
static void MPC_fmincon_xgemv_b(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y);
static void MPC_fmincon_computeGradLag_l(emxArray_real_T_MPC_fmincon_T
  *workspace, int32_T ldA, int32_T nVar, const emxArray_real_T_MPC_fmincon_T
  *grad, int32_T mIneq, const emxArray_real_T_MPC_fmincon_T *AineqTrans, int32_T
  mEq, const emxArray_real_T_MPC_fmincon_T *AeqTrans, const
  emxArray_int32_T_MPC_fmincon_T *finiteFixed, int32_T mFixed, const
  emxArray_int32_T_MPC_fmincon_T *finiteLB, int32_T mLB, const
  emxArray_int32_T_MPC_fmincon_T *finiteUB, int32_T mUB, const
  emxArray_real_T_MPC_fmincon_T *lambda);
static real_T MPC_fmincon_xnrm2(int32_T n, const emxArray_real_T_MPC_fmincon_T
  *x, int32_T ix0);
static real_T MPC_fmincon_xzlarfg(int32_T n, real_T *alpha1,
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0);
static void MPC_fmincon_xgemv_bu(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y);
static void MPC_fmincon_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const emxArray_real_T_MPC_fmincon_T *y, emxArray_real_T_MPC_fmincon_T *A,
  int32_T ia0, int32_T lda);
static void MPC_fmincon_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  emxArray_real_T_MPC_fmincon_T *C, int32_T ic0, int32_T ldc,
  emxArray_real_T_MPC_fmincon_T *work);
static void MPC_fmincon_qrf(emxArray_real_T_MPC_fmincon_T *A, int32_T m, int32_T
  n, int32_T nfxd, emxArray_real_T_MPC_fmincon_T *tau);
static void MPC_fmincon_xgeqp3(emxArray_real_T_MPC_fmincon_T *A, int32_T m,
  int32_T n, emxArray_int32_T_MPC_fmincon_T *jpvt, emxArray_real_T_MPC_fmincon_T
  *tau);
static void MPC_fmincon_computeQ_(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *obj, int32_T
  nrows);
static void MPC_fmincon_xgemv_buj(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y);
static void MPC_fmincon_sortLambdaQP(emxArray_real_T_MPC_fmincon_T *lambda,
  int32_T WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const
  int32_T WorkingSet_isActiveIdx[6], const emxArray_int32_T_MPC_fmincon_T
  *WorkingSet_Wid, const emxArray_int32_T_MPC_fmincon_T *WorkingSet_Wlocalidx,
  emxArray_real_T_MPC_fmincon_T *workspace);
static void MPC_fmincon_test_exit_k(s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  int32_T runTimeOptions_MaxFunctionEvalu);
static boolean_T MPC_fmincon_BFGSUpdate(int32_T nvar,
  emxArray_real_T_MPC_fmincon_T *Bk, const emxArray_real_T_MPC_fmincon_T *sk,
  emxArray_real_T_MPC_fmincon_T *yk, emxArray_real_T_MPC_fmincon_T *workspace);
static void MPC_fmincon_xgemv_bujmjslzp1(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y);
static void MPC_fmincon_countsort(emxArray_int32_T_MPC_fmincon_T *x, int32_T
  xLen, emxArray_int32_T_MPC_fmincon_T *workspace, int32_T xMin, int32_T xMax);
static void MPC_fmincon_removeConstr(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T idx_global);
static void MPC_fmincon_factorQR(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *obj, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T mrows, int32_T ncols, int32_T ldA);
static void MPC_fmincon_xgemv_bujm(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y);
static void MPC_fmincon_xgemv_bujmj(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y);
static real_T MPC_fmin_maxConstraintViolation(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *obj, const emxArray_real_T_MPC_fmincon_T *x, int32_T ix0);
static boolean_T MPC_fmi_feasibleX0ForWorkingSet(emxArray_real_T_MPC_fmincon_T
  *workspace, emxArray_real_T_MPC_fmincon_T *xCurrent,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager);
static void MPC_fmincon_xgemv_bujmjs(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y);
static real_T MPC_fm_maxConstraintViolation_h(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *obj, const emxArray_real_T_MPC_fmincon_T *x);
static void MPC_fmincon_PresolveWorkingSet(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *solution, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager);
static void MPC_fmincon_emxCopy_real_T(emxArray_real_T_MPC_fmincon_T **dst,
  emxArray_real_T_MPC_fmincon_T * const *src);
static void MPC_fmincon_emxCopy_int32_T(emxArray_int32_T_MPC_fmincon_T **dst,
  emxArray_int32_T_MPC_fmincon_T * const *src);
static void MPC_fminc_emxCopyMatrix_int32_T(int32_T dst[5], const int32_T src[5]);
static void MPC_fmin_emxCopyMatrix_int32_T1(int32_T dst[6], const int32_T src[6]);
static void MPC_fmincon_emxCopy_boolean_T(emxArray_boolean_T_MPC_fminco_T **dst,
  emxArray_boolean_T_MPC_fminco_T * const *src);
static void emxCopyStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *dst,
  const s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *src);
static void MPC_fmincon_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
  emxArray_real_T_MPC_fmincon_T *workspace, const emxArray_real_T_MPC_fmincon_T *
  H, const emxArray_real_T_MPC_fmincon_T *f, const emxArray_real_T_MPC_fmincon_T
  *x);
static real_T MPC_fmincon_computeFval(const s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *obj,
  emxArray_real_T_MPC_fmincon_T *workspace, const emxArray_real_T_MPC_fmincon_T *
  H, const emxArray_real_T_MPC_fmincon_T *f, const emxArray_real_T_MPC_fmincon_T
  *x);
static void MPC_fmincon_xgemv_bujmjsl(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y);
static void MPC_fmincon_computeGrad_StoreHx(s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *obj,
  const emxArray_real_T_MPC_fmincon_T *H, const emxArray_real_T_MPC_fmincon_T *f,
  const emxArray_real_T_MPC_fmincon_T *x);
static real_T MPC_fmincon_computeFval_ReuseHx(const
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *obj, emxArray_real_T_MPC_fmincon_T *workspace,
  const emxArray_real_T_MPC_fmincon_T *f, const emxArray_real_T_MPC_fmincon_T *x);
static void MPC_fmincon_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void MPC_fmincon_deleteColMoveEnd(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *obj,
  int32_T idx);
static void MPC_fmincon_xgemm(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *B, int32_T ib0, int32_T ldb,
  emxArray_real_T_MPC_fmincon_T *C, int32_T ldc);
static void MPC_fmincon_xgemm_b(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *B, int32_T ldb, emxArray_real_T_MPC_fmincon_T
  *C, int32_T ldc);
static void MPC_fmincon_fullColLDL2_(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  int32_T LD_offset, int32_T NColsRemain);
static void MPC_fmincon_partialColLDL3_(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  int32_T LD_offset, int32_T NColsRemain);
static int32_T MPC_fmincon_xpotrf(int32_T n, emxArray_real_T_MPC_fmincon_T *A,
  int32_T lda);
static void MPC_fmincon_xgemv_bujmjslz(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y);
static void MPC_fmincon_solve(const s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  emxArray_real_T_MPC_fmincon_T *rhs);
static void MPC_fmincon_factor(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ndims, int32_T ldA);
static void MPC_fmincon_solve_k(const s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  emxArray_real_T_MPC_fmincon_T *rhs);
static void MPC_fmincon_compute_deltax(const emxArray_real_T_MPC_fmincon_T *H,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T
  *memspace, const s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, const
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *objective, boolean_T alwaysPositiveDef);
static real_T MPC_fmincon_xnrm2_a(int32_T n, const emxArray_real_T_MPC_fmincon_T
  *x);
static void MPC_fmincon_xgemv_bujmjslzp(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y);
static void MPC_fmincon_feasibleratiotest(const emxArray_real_T_MPC_fmincon_T
  *solution_xstar, const emxArray_real_T_MPC_fmincon_T *solution_searchDir,
  emxArray_real_T_MPC_fmincon_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_MPC_fmincon_T *workingset_Aineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_bineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_lb, const
  emxArray_real_T_MPC_fmincon_T *workingset_ub, const
  emxArray_int32_T_MPC_fmincon_T *workingset_indexLB, const
  emxArray_int32_T_MPC_fmincon_T *workingset_indexUB, const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_MPC_fminco_T *workingset_isActiveConstr, const int32_T
  workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
  *newBlocking, int32_T *constrType, int32_T *constrIdx);
static void MPC__addBoundToActiveSetMatrix_(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T TYPE, int32_T idx_local);
static void MPC_fmincon_addAineqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T idx_local);
static void MPC_fmincon_iterate(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, const char_T options_SolverName[7], real_T options_StepTolerance,
  real_T options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
static void MPC_fmincon_emxFree_boolean_T(emxArray_boolean_T_MPC_fminco_T
  **pEmxArray);
static void emxFreeStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *pStruct);
static void MPC_fmincon_driver_d(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *options, int32_T
  runTimeOptions_MaxIterations);
static void MPC_fmincon_addAeqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T idx_local);
static boolean_T MPC_fmincon_soc(const emxArray_real_T_MPC_fmincon_T *Hessian,
  const emxArray_real_T_MPC_fmincon_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *QRManager, s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager,
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *QPObjective, const
  somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions);
static void MPC_fmincon_relaxed(const emxArray_real_T_MPC_fmincon_T *Hessian,
  const emxArray_real_T_MPC_fmincon_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions);
static boolean_T MPC_fmincon_step_o(int32_T *STEP_TYPE,
  emxArray_real_T_MPC_fmincon_T *Hessian, const emxArray_real_T_MPC_fmincon_T
  *lb, const emxArray_real_T_MPC_fmincon_T *ub, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *
  TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions);
static void MPC_fmincon_evalObjAndConstr(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const s_orfxVcOir3wnnUkquctgqH_MPC__T obj_next_next_next_next_next__1, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T
  *Cineq_workspace, int32_T ineq0, emxArray_real_T_MPC_fmincon_T *Ceq_workspace,
  int32_T eq0, real_T *fval, int32_T *status);
static real_T MPC_fmincon_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
  const emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T mIneq, const
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T mEq, boolean_T
  evalWellDefined);
static void MPC_fmincon_driver(emxArray_real_T_MPC_fmincon_T *Hessian, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const coder_internal_stickyStruct_9_T *FcnEvaluator,
  s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  int32_T runTimeOptions_MaxFunctionEvalu);
static void emxFreeStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T
  *pStruct);
static void emxFreeStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_MPC__T
  *pStruct);
static void emxFreeStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T
  *pStruct);
static void emxFreeStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *pStruct);
static void emxFreeStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_MPC__T
  *pStruct);
static void emxFreeStruct_anonymous_functio(anonymous_function_MPC_fminco_T
  *pStruct);
static void emxFreeStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T
  *pStruct);
static void emxFreeStruct_coder_internal_st(coder_internal_stickyStruct_1_T
  *pStruct);
static void emxFreeStruct_coder_internal__a(coder_internal_stickyStruct_2_T
  *pStruct);
static void emxFreeStruct_coder_internal_ad(coder_internal_stickyStruct_3_T
  *pStruct);
static void emxFreeStruct_coder_interna_add(coder_internal_stickyStruct_4_T
  *pStruct);
static void emxFreeStruct_coder_intern_add4(coder_internal_stickyStruct_5_T
  *pStruct);
static void emxFreeStruct_coder_inter_add4i(coder_internal_stickyStruct_6_T
  *pStruct);
static void emxFreeStruct_coder_inte_add4ib(coder_internal_stickyStruct_7_T
  *pStruct);
static void emxFreeStruct_coder_int_add4ibr(coder_internal_stickyStruct_8_T
  *pStruct);
static void emxFreeStruct_coder_in_add4ibr2(coder_internal_stickyStruct_9_T
  *pStruct);
static void emxFreeStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *pStruct);
static void MPC_fmincon_fmincon(const real_T fun_workspace_x0[4], const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_xref, const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_uref, real_T fun_workspace_N,
  const emxArray_real_T_MPC_fmincon_T *x0, const emxArray_real_T_MPC_fmincon_T
  *lb, const emxArray_real_T_MPC_fmincon_T *ub, const
  s6lIrH89xwD47fl4e1dZNiE_MPC_f_T nonlcon_workspace,
  emxArray_real_T_MPC_fmincon_T *x);
static void MPC_f_eML_blk_kernel_anonFcn2_m(const real_T x0[4], real_T N, const
  emxArray_real_T_MPC_fmincon_T *w, emxArray_real_T_MPC_fmincon_T *varargout_1,
  emxArray_real_T_MPC_fmincon_T *varargout_2);
static void emxInitStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_MPC__T
  *pStruct);
static void emxInitStruct_anonymous_funct_a(anonymous_function_MPC_fmin_a_T
  *pStruct);
static void emxInitStruct_coder_internal_n1(coder_internal_stickyStruct_a_T
  *pStruct);
static void emxInitStruct_coder_internal__n(coder_internal_stickyStruc_ad_T
  *pStruct);
static void emxInitStruct_c_add4ibr2wkltdn1(coder_internal_stickyStru_add_T
  *pStruct);
static void emxInitStruct_co_add4ibr2wkltdn(coder_internal_stickyStr_add4_T
  *pStruct);
static void emxInitStruct_cod_add4ibr2wkltd(coder_internal_stickySt_add4i_T
  *pStruct);
static void emxInitStruct_code_add4ibr2wklt(coder_internal_stickyS_add4ib_T
  *pStruct);
static void emxInitStruct_coder_add4ibr2wkl(coder_internal_sticky_add4ibr_T
  *pStruct);
static void emxInitStruct_coder__add4ibr2wk(coder_internal_stick_add4ibr2_T
  *pStruct);
static void emxInitStruct_coder_i_add4ibr2w(coder_internal_stickyStruct_c_T
  *pStruct);
static void emxInitStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_MPC__T
  *pStruct);
static real_T MPC_f_eML_blk_kernel_anonFcn1_e(const real_T x0[4], const
  emxArray_real_T_MPC_fmincon_T *zref, const emxArray_real_T_MPC_fmincon_T *wref,
  real_T N, const emxArray_real_T_MPC_fmincon_T *w);
static int32_T MPC_fminc_computeConstraints__c(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const emxArray_real_T_MPC_fmincon_T *x,
  emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T eq0);
static boolean_T MPC_fmin_finDiffEvalAndChkErr_p(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_zref, const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_wref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_MPC_fmincon_T *cIneqPlus,
  emxArray_real_T_MPC_fmincon_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_MPC_fmincon_T *xk);
static boolean_T MPC__computeFiniteDifferences_k(s_9imJcZ2iwk426vK9Q2bBEG_MPC__T
  *obj, real_T fCurrent, const emxArray_real_T_MPC_fmincon_T *cIneqCurrent,
  int32_T ineq0, const emxArray_real_T_MPC_fmincon_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_MPC_fmincon_T *xk, emxArray_real_T_MPC_fmincon_T *gradf,
  emxArray_real_T_MPC_fmincon_T *JacCineqTrans, int32_T CineqColStart, int32_T
  ldJI, emxArray_real_T_MPC_fmincon_T *JacCeqTrans, int32_T CeqColStart, int32_T
  ldJE);
static void MPC_f_modifyOverheadPhaseOne__h(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj);
static void MPC_fmincon_setProblemType_g(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T PROBLEM_TYPE);
static real_T MPC_fm_computePrimalFeasError_d(int32_T mLinIneq, int32_T
  mNonlinIneq, const emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mLinEq,
  int32_T mNonlinEq, const emxArray_real_T_MPC_fmincon_T *cEq);
static void MPC_fmincon_test_exit_ks(sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, int32_T
  runTimeOptions_MaxFunctionEvalu, boolean_T *Flags_gradOK, boolean_T
  *Flags_fevalOK, boolean_T *Flags_done, boolean_T *Flags_stepAccepted,
  boolean_T *Flags_failedLineSearch, int32_T *Flags_stepType);
static real_T MPC_fmincon_computeComplError_c(const
  emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint, int32_T mIneq, const
  emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mLB, const
  emxArray_real_T_MPC_fmincon_T *lambda, int32_T iL0);
static void MPC__updateWorkingSetForNewQP_b(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, int32_T mIneq, int32_T mNonlinIneq, const
  emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mEq, int32_T mNonlinEq, const
  emxArray_real_T_MPC_fmincon_T *cEq);
static void MPC_fmincon_sortLambdaQP_e(emxArray_real_T_MPC_fmincon_T *lambda,
  int32_T WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const
  int32_T WorkingSet_isActiveIdx[6], const emxArray_int32_T_MPC_fmincon_T
  *WorkingSet_Wid, const emxArray_int32_T_MPC_fmincon_T *WorkingSet_Wlocalidx,
  emxArray_real_T_MPC_fmincon_T *workspace);
static void MPC_fmincon_test_exit_ksj(s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager, int32_T
  runTimeOptions_MaxFunctionEvalu);
static boolean_T MPC_f_feasibleX0ForWorkingSet_n(emxArray_real_T_MPC_fmincon_T
  *workspace, emxArray_real_T_MPC_fmincon_T *xCurrent,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager);
static real_T MPC_fm_maxConstraintViolation_f(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *obj, const emxArray_real_T_MPC_fmincon_T *x);
static void MPC_fminco_PresolveWorkingSet_p(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *solution, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager);
static void MPC_fmincon_feasibleratiotest_e(const emxArray_real_T_MPC_fmincon_T *
  solution_xstar, const emxArray_real_T_MPC_fmincon_T *solution_searchDir,
  emxArray_real_T_MPC_fmincon_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_MPC_fmincon_T *workingset_Aineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_bineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_lb, const
  emxArray_int32_T_MPC_fmincon_T *workingset_indexLB, const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_MPC_fminco_T *workingset_isActiveConstr, const int32_T
  workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
  *newBlocking, int32_T *constrType, int32_T *constrIdx);
static void MPC_fmincon_iterate_b(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, const char_T options_SolverName[7], real_T options_StepTolerance,
  real_T options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
static void MPC_fmincon_driver_hb(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *options, int32_T
  runTimeOptions_MaxIterations);
static void MPC_fmincon_relaxed_i(const emxArray_real_T_MPC_fmincon_T *Hessian,
  const emxArray_real_T_MPC_fmincon_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions);
static boolean_T MPC_fmincon_step_p(int32_T *STEP_TYPE,
  emxArray_real_T_MPC_fmincon_T *Hessian, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions);
static void MPC_fmincon_evalObjAndConstr_f(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const s_lZflMU9sVqxC63IejQkKIC_MPC__T
  obj_next_next_next_next_next__1, const emxArray_real_T_MPC_fmincon_T *x,
  emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T eq0, real_T *fval,
  int32_T *status);
static void MPC_fmincon_driver_h(emxArray_real_T_MPC_fmincon_T *Hessian,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const coder_internal_stickyStruct_c_T *FcnEvaluator,
  s_9imJcZ2iwk426vK9Q2bBEG_MPC__T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  int32_T runTimeOptions_MaxFunctionEvalu);
static void emxFreeStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_MPC__T
  *pStruct);
static void emxFreeStruct_anonymous_funct_a(anonymous_function_MPC_fmin_a_T
  *pStruct);
static void emxFreeStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_MPC__T
  *pStruct);
static void emxFreeStruct_coder_i_add4ibr2w(coder_internal_stickyStruct_a_T
  *pStruct);
static void emxFreeStruct_coder__add4ibr2wk(coder_internal_stickyStruc_ad_T
  *pStruct);
static void emxFreeStruct_coder_add4ibr2wkl(coder_internal_stickyStru_add_T
  *pStruct);
static void emxFreeStruct_code_add4ibr2wklt(coder_internal_stickyStr_add4_T
  *pStruct);
static void emxFreeStruct_cod_add4ibr2wkltd(coder_internal_stickySt_add4i_T
  *pStruct);
static void emxFreeStruct_co_add4ibr2wkltdn(coder_internal_stickyS_add4ib_T
  *pStruct);
static void emxFreeStruct_c_add4ibr2wkltdn1(coder_internal_sticky_add4ibr_T
  *pStruct);
static void emxFreeStruct_coder_internal__n(coder_internal_stick_add4ibr2_T
  *pStruct);
static void emxFreeStruct_coder_internal_n1(coder_internal_stickyStruct_c_T
  *pStruct);
static void MPC_fmincon_fmincon_l(const real_T fun_workspace_x0[4], const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_zref, const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_wref, real_T fun_workspace_N,
  const emxArray_real_T_MPC_fmincon_T *x0, const sU0htoGcxTaPV5C2NLIldmB_MPC_f_T
  nonlcon_workspace, emxArray_real_T_MPC_fmincon_T *x);

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 19;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  MPC_fmincon_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void MPC_fmincon_emxInit_real_T(emxArray_real_T_MPC_fmincon_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_real_T_MPC_fmincon_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_MPC_fmincon_T *)malloc(sizeof
    (emxArray_real_T_MPC_fmincon_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void MPC_fm_emxEnsureCapacity_real_T(emxArray_real_T_MPC_fmincon_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void MPC_fmincon_emxFree_real_T(emxArray_real_T_MPC_fmincon_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_MPC_fmincon_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_MPC_fmincon_T *)NULL;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmi_eML_blk_kernel_anonFcn2(const real_T x0[4], real_T N, const
  emxArray_real_T_MPC_fmincon_T *u, emxArray_real_T_MPC_fmincon_T *varargout_1,
  emxArray_real_T_MPC_fmincon_T *varargout_2)
{
  emxArray_real_T_MPC_fmincon_T *varargout_1_tmp;
  emxArray_real_T_MPC_fmincon_T *x;
  real_T x_next_idx_0;
  real_T x_next_idx_1;
  real_T x_next_idx_2;
  real_T x_next_idx_3;
  int32_T b;
  int32_T d;
  int32_T loop_ub;
  int32_T tmp;
  uint32_T c;

  /* '<S2>:1:128' */
  /* '<S2>:1:122' */
  MPC_fmincon_emxInit_real_T(&x, 2);
  tmp = x->size[0] * x->size[1];
  x->size[0] = 4;
  x->size[1] = (int32_T)(N + 1.0);
  MPC_fm_emxEnsureCapacity_real_T(x, tmp);
  loop_ub = (int32_T)(N + 1.0) << 2;
  if (loop_ub - 1 >= 0) {
    memset(&x->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S2>:1:123' */
  x->data[0] = x0[0];
  x->data[1] = x0[1];
  x->data[2] = x0[2];
  x->data[3] = x0[3];

  /* '<S2>:1:124' */
  varargout_2->size[0] = 0;
  b = (int32_T)N;

  /* '<S2>:1:126' */
  for (loop_ub = 0; loop_ub < b; loop_ub++) {
    c = ((uint32_T)loop_ub << 1) + 1U;
    if (c > ((real_T)loop_ub + 1.0) * 2.0) {
      d = 0;
    } else {
      d = (int32_T)c - 1;
    }

    /* '<S2>:1:127' */
    /* '<S2>:1:128' */
    /* '<S2>:1:140' */
    x_next_idx_2 = x->data[(loop_ub << 2) + 2];
    x_next_idx_3 = x->data[(loop_ub << 2) + 3];
    x_next_idx_0 = u->data[d] * cos(x_next_idx_2) * 0.1 + x->data[loop_ub << 2];
    x_next_idx_1 = u->data[d] * sin(x_next_idx_2) * 0.1 + x->data[(loop_ub << 2)
      + 1];
    x_next_idx_2 += u->data[d] / 0.256 * tan(x_next_idx_3) * 0.1;
    x_next_idx_3 += u->data[d + 1] * 0.1;

    /* '<S2>:1:129' */
    /* '<S2>:1:130' */
    d = varargout_2->size[0];
    tmp = varargout_2->size[0];
    varargout_2->size[0] += 4;
    MPC_fm_emxEnsureCapacity_real_T(varargout_2, tmp);
    x->data[(loop_ub + 1) << 2] = x_next_idx_0;
    varargout_2->data[d] = x_next_idx_0 - x_next_idx_0;
    tmp = (loop_ub + 1) << 2;
    x->data[1 + tmp] = x_next_idx_1;
    varargout_2->data[d + 1] = x_next_idx_1 - x_next_idx_1;
    x->data[2 + tmp] = x_next_idx_2;
    varargout_2->data[d + 2] = x_next_idx_2 - x_next_idx_2;
    x->data[3 + tmp] = x_next_idx_3;
    varargout_2->data[d + 3] = x_next_idx_3 - x_next_idx_3;
  }

  if (x->size[1] < 2) {
    b = 0;
    loop_ub = 0;
  } else {
    b = 1;
    loop_ub = x->size[1];
  }

  /* '<S2>:1:134' */
  /* '<S2>:1:135' */
  MPC_fmincon_emxInit_real_T(&varargout_1_tmp, 1);
  loop_ub -= b;
  tmp = varargout_1_tmp->size[0];
  varargout_1_tmp->size[0] = loop_ub;
  MPC_fm_emxEnsureCapacity_real_T(varargout_1_tmp, tmp);
  for (d = 0; d < loop_ub; d++) {
    varargout_1_tmp->data[d] = x->data[((b + d) << 2) + 3];
  }

  MPC_fmincon_emxFree_real_T(&x);
  tmp = varargout_1->size[0];
  varargout_1->size[0] = varargout_1_tmp->size[0] + varargout_1_tmp->size[0];
  MPC_fm_emxEnsureCapacity_real_T(varargout_1, tmp);
  loop_ub = varargout_1_tmp->size[0];
  for (d = 0; d < loop_ub; d++) {
    varargout_1->data[d] = varargout_1_tmp->data[d] - 1.5707963267948966;
  }

  loop_ub = varargout_1_tmp->size[0];
  for (d = 0; d < loop_ub; d++) {
    varargout_1->data[d + varargout_1_tmp->size[0]] = -varargout_1_tmp->data[d]
      - 1.5707963267948966;
  }

  MPC_fmincon_emxFree_real_T(&varargout_1_tmp);
}

static void MPC_fmincon_emxInit_int32_T(emxArray_int32_T_MPC_fmincon_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_int32_T_MPC_fmincon_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T_MPC_fmincon_T *)malloc(sizeof
    (emxArray_int32_T_MPC_fmincon_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->xstarsqp, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->xstarsqp_old, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cIneq, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cIneq_old, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cEq, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cEq_old, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->grad, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->grad_old, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->lambdasqp, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->lambdaStopTest, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->lambdaStopTestPrev, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->delta_x, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->socDirection, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->workingset_old, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->JacCineqTrans_old, 2);
  MPC_fmincon_emxInit_real_T(&pStruct->JacCeqTrans_old, 2);
  MPC_fmincon_emxInit_real_T(&pStruct->gradLag, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->delta_gradLag, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->xstar, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->lambda, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->searchDir, 1);
}

static void MPC_f_emxEnsureCapacity_int32_T(emxArray_int32_T_MPC_fmincon_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
  int32_T mIneq, int32_T mEq, const emxArray_real_T_MPC_fmincon_T *x0, int32_T
  mNonlinIneq, int32_T mNonlinEq, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *obj)
{
  int32_T i;
  obj->nVarMax = nVarMax;
  obj->mNonlinIneq = mNonlinIneq;
  obj->mNonlinEq = mNonlinEq;
  obj->mIneq = mIneq;
  obj->mEq = mEq;
  obj->iNonIneq0 = (mIneq - mNonlinIneq) + 1;
  obj->iNonEq0 = (mEq - mNonlinEq) + 1;
  obj->sqpFval = 0.0;
  obj->sqpFval_old = 0.0;
  i = obj->xstarsqp->size[0];
  obj->xstarsqp->size[0] = x0->size[0];
  MPC_fm_emxEnsureCapacity_real_T(obj->xstarsqp, i);
  i = obj->xstarsqp_old->size[0];
  obj->xstarsqp_old->size[0] = x0->size[0];
  MPC_fm_emxEnsureCapacity_real_T(obj->xstarsqp_old, i);
  i = obj->cIneq->size[0];
  obj->cIneq->size[0] = mIneq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cIneq, i);
  i = obj->cIneq_old->size[0];
  obj->cIneq_old->size[0] = mIneq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cIneq_old, i);
  i = obj->cEq->size[0];
  obj->cEq->size[0] = mEq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cEq, i);
  i = obj->cEq_old->size[0];
  obj->cEq_old->size[0] = mEq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cEq_old, i);
  i = obj->grad->size[0];
  obj->grad->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->grad, i);
  i = obj->grad_old->size[0];
  obj->grad_old->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->grad_old, i);
  obj->FunctionEvaluations = 0;
  obj->sqpIterations = 0;
  obj->sqpExitFlag = 0;
  i = obj->lambdasqp->size[0];
  obj->lambdasqp->size[0] = mConstrMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->lambdasqp, i);
  for (i = 0; i < mConstrMax; i++) {
    obj->lambdasqp->data[i] = 0.0;
  }

  i = obj->lambdaStopTest->size[0];
  obj->lambdaStopTest->size[0] = mConstrMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->lambdaStopTest, i);
  i = obj->lambdaStopTestPrev->size[0];
  obj->lambdaStopTestPrev->size[0] = mConstrMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->lambdaStopTestPrev, i);
  obj->steplength = 1.0;
  i = obj->delta_x->size[0];
  obj->delta_x->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->delta_x, i);
  for (i = 0; i < nVarMax; i++) {
    obj->delta_x->data[i] = 0.0;
  }

  i = obj->socDirection->size[0];
  obj->socDirection->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->socDirection, i);
  i = obj->workingset_old->size[0];
  obj->workingset_old->size[0] = mConstrMax;
  MPC_f_emxEnsureCapacity_int32_T(obj->workingset_old, i);
  if (mNonlinIneq > 0) {
    i = obj->JacCineqTrans_old->size[0] * obj->JacCineqTrans_old->size[1];
    obj->JacCineqTrans_old->size[0] = nVarMax;
    obj->JacCineqTrans_old->size[1] = mNonlinIneq;
    MPC_fm_emxEnsureCapacity_real_T(obj->JacCineqTrans_old, i);
  } else {
    obj->JacCineqTrans_old->size[0] = 0;
    obj->JacCineqTrans_old->size[1] = 0;
  }

  if (mNonlinEq > 0) {
    i = obj->JacCeqTrans_old->size[0] * obj->JacCeqTrans_old->size[1];
    obj->JacCeqTrans_old->size[0] = nVarMax;
    obj->JacCeqTrans_old->size[1] = mNonlinEq;
    MPC_fm_emxEnsureCapacity_real_T(obj->JacCeqTrans_old, i);
  } else {
    obj->JacCeqTrans_old->size[0] = 0;
    obj->JacCeqTrans_old->size[1] = 0;
  }

  i = obj->gradLag->size[0];
  obj->gradLag->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->gradLag, i);
  i = obj->delta_gradLag->size[0];
  obj->delta_gradLag->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->delta_gradLag, i);
  i = obj->xstar->size[0];
  obj->xstar->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->xstar, i);
  obj->fstar = 0.0;
  obj->firstorderopt = 0.0;
  i = obj->lambda->size[0];
  obj->lambda->size[0] = mConstrMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->lambda, i);
  for (i = 0; i < mConstrMax; i++) {
    obj->lambda->data[i] = 0.0;
  }

  obj->state = 0;
  obj->maxConstr = 0.0;
  obj->iterations = 0;
  i = obj->searchDir->size[0];
  obj->searchDir->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->searchDir, i);
}

static void emxInitStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_MPC__T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->xref, 2);
  MPC_fmincon_emxInit_real_T(&pStruct->uref, 2);
}

static void emxInitStruct_anonymous_functio(anonymous_function_MPC_fminco_T
  *pStruct)
{
  emxInitStruct_s_orfxVcOir3wnnUk(&pStruct->workspace);
}

static void emxInitStruct_coder_in_add4ibr2(coder_internal_stickyStruct_1_T
  *pStruct)
{
  emxInitStruct_anonymous_functio(&pStruct->b_value);
}

static void emxInitStruct_coder_int_add4ibr(coder_internal_stickyStruct_2_T
  *pStruct)
{
  emxInitStruct_coder_in_add4ibr2(&pStruct->next);
}

static void emxInitStruct_coder_inte_add4ib(coder_internal_stickyStruct_3_T
  *pStruct)
{
  emxInitStruct_coder_int_add4ibr(&pStruct->next);
}

static void emxInitStruct_coder_inter_add4i(coder_internal_stickyStruct_4_T
  *pStruct)
{
  emxInitStruct_coder_inte_add4ib(&pStruct->next);
}

static void emxInitStruct_coder_intern_add4(coder_internal_stickyStruct_5_T
  *pStruct)
{
  emxInitStruct_coder_inter_add4i(&pStruct->next);
}

static void emxInitStruct_coder_interna_add(coder_internal_stickyStruct_6_T
  *pStruct)
{
  emxInitStruct_coder_intern_add4(&pStruct->next);
}

static void emxInitStruct_coder_internal_ad(coder_internal_stickyStruct_7_T
  *pStruct)
{
  emxInitStruct_coder_interna_add(&pStruct->next);
}

static void emxInitStruct_coder_internal__a(coder_internal_stickyStruct_8_T
  *pStruct)
{
  emxInitStruct_coder_internal_ad(&pStruct->next);
}

static void emxInitStruct_coder_internal_st(coder_internal_stickyStruct_9_T
  *pStruct)
{
  emxInitStruct_coder_internal__a(&pStruct->next);
}

static void MPC_fmincon_emxInit_boolean_T(emxArray_boolean_T_MPC_fminco_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_boolean_T_MPC_fminco_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T_MPC_fminco_T *)malloc(sizeof
    (emxArray_boolean_T_MPC_fminco_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T
  *pStruct)
{
  emxInitStruct_anonymous_functio(&pStruct->objfun);
  MPC_fmincon_emxInit_real_T(&pStruct->cIneq_1, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cEq_1, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cIneq_2, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cEq_2, 1);
  MPC_fmincon_emxInit_boolean_T(&pStruct->hasLB, 1);
  MPC_fmincon_emxInit_boolean_T(&pStruct->hasUB, 1);
}

static void MPC_emxEnsureCapacity_boolean_T(emxArray_boolean_T_MPC_fminco_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_factoryConstruct_i(const real_T objfun_workspace_x0[4],
  const emxArray_real_T_MPC_fmincon_T *objfun_workspace_xref, const
  emxArray_real_T_MPC_fmincon_T *objfun_workspace_uref, real_T
  objfun_workspace_N, const s6lIrH89xwD47fl4e1dZNiE_MPC_f_T nonlin_workspace,
  int32_T nVar, int32_T mCineq, int32_T mCeq, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T *obj)
{
  int32_T idx;
  int32_T loop_ub;
  boolean_T d;
  obj->objfun.workspace.x0[0] = objfun_workspace_x0[0];
  obj->objfun.workspace.x0[1] = objfun_workspace_x0[1];
  obj->objfun.workspace.x0[2] = objfun_workspace_x0[2];
  obj->objfun.workspace.x0[3] = objfun_workspace_x0[3];
  idx = obj->objfun.workspace.xref->size[0] * obj->objfun.workspace.xref->size[1];
  obj->objfun.workspace.xref->size[0] = 4;
  obj->objfun.workspace.xref->size[1] = objfun_workspace_xref->size[1];
  MPC_fm_emxEnsureCapacity_real_T(obj->objfun.workspace.xref, idx);
  loop_ub = objfun_workspace_xref->size[1] << 2;
  for (idx = 0; idx < loop_ub; idx++) {
    obj->objfun.workspace.xref->data[idx] = objfun_workspace_xref->data[idx];
  }

  idx = obj->objfun.workspace.uref->size[0] * obj->objfun.workspace.uref->size[1];
  obj->objfun.workspace.uref->size[0] = 2;
  obj->objfun.workspace.uref->size[1] = objfun_workspace_uref->size[1];
  MPC_fm_emxEnsureCapacity_real_T(obj->objfun.workspace.uref, idx);
  loop_ub = objfun_workspace_uref->size[1] << 1;
  for (idx = 0; idx < loop_ub; idx++) {
    obj->objfun.workspace.uref->data[idx] = objfun_workspace_uref->data[idx];
  }

  obj->objfun.workspace.N = objfun_workspace_N;
  obj->nonlin.workspace = nonlin_workspace;
  obj->f_1 = 0.0;
  idx = obj->cIneq_1->size[0];
  obj->cIneq_1->size[0] = mCineq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cIneq_1, idx);
  idx = obj->cEq_1->size[0];
  obj->cEq_1->size[0] = mCeq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cEq_1, idx);
  obj->f_2 = 0.0;
  idx = obj->cIneq_2->size[0];
  obj->cIneq_2->size[0] = mCineq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cIneq_2, idx);
  idx = obj->cEq_2->size[0];
  obj->cEq_2->size[0] = mCeq;
  MPC_fm_emxEnsureCapacity_real_T(obj->cEq_2, idx);
  obj->nVar = nVar;
  obj->mIneq = mCineq;
  obj->mEq = mCeq;
  obj->numEvals = 0;
  obj->SpecifyObjectiveGradient = false;
  obj->SpecifyConstraintGradient = false;
  obj->isEmptyNonlcon = (mCeq + mCineq == 0);
  idx = obj->hasLB->size[0];
  obj->hasLB->size[0] = nVar;
  MPC_emxEnsureCapacity_boolean_T(obj->hasLB, idx);
  idx = obj->hasUB->size[0];
  obj->hasUB->size[0] = nVar;
  MPC_emxEnsureCapacity_boolean_T(obj->hasUB, idx);
  obj->FiniteDifferenceType = 0;
  d = false;
  idx = 0;
  switch ((uint32_T)(ub->size[0] == 0) << 1 | (uint32_T)(lb->size[0] == 0)) {
   case 0U:
    while ((!d) && (idx + 1 <= nVar)) {
      obj->hasLB->data[idx] = true;
      obj->hasUB->data[idx] = true;
      d = true;
      idx++;
    }

    while (idx + 1 <= nVar) {
      obj->hasLB->data[idx] = true;
      obj->hasUB->data[idx] = true;
      idx++;
    }
    break;

   case 1U:
    while ((!d) && (idx + 1 <= nVar)) {
      obj->hasLB->data[idx] = false;
      obj->hasUB->data[idx] = true;
      d = true;
      idx++;
    }

    while (idx + 1 <= nVar) {
      obj->hasLB->data[idx] = false;
      obj->hasUB->data[idx] = true;
      idx++;
    }
    break;

   case 2U:
    while ((!d) && (idx + 1 <= nVar)) {
      obj->hasLB->data[idx] = true;
      obj->hasUB->data[idx] = false;
      d = true;
      idx++;
    }

    while (idx + 1 <= nVar) {
      obj->hasLB->data[idx] = true;
      obj->hasUB->data[idx] = false;
      idx++;
    }
    break;

   default:
    for (idx = 0; idx < nVar; idx++) {
      obj->hasLB->data[idx] = false;
      obj->hasUB->data[idx] = false;
    }
    break;
  }

  obj->hasBounds = d;
}

static void emxInitStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->QR, 2);
  MPC_fmincon_emxInit_real_T(&pStruct->Q, 2);
  MPC_fmincon_emxInit_int32_T(&pStruct->jpvt, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->tau, 1);
}

static void emxInitStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->FMat, 2);
}

static void emxInitStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_MPC__T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->grad, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->Hx, 1);
}

static void emxInitStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->workspace_double, 2);
  MPC_fmincon_emxInit_int32_T(&pStruct->workspace_int, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->workspace_sort, 1);
}

static void emxInitStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->Aineq, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->bineq, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->Aeq, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->beq, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->lb, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->ub, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->indexLB, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->indexUB, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->indexFixed, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->indexEqRemoved, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->ATwset, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->bwset, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->maxConstrWorkspace, 1);
  MPC_fmincon_emxInit_boolean_T(&pStruct->isActiveConstr, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->Wid, 1);
  MPC_fmincon_emxInit_int32_T(&pStruct->Wlocalidx, 1);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_factoryConstruct_ir(int32_T mIneqMax, int32_T mEqMax,
  int32_T nVar, int32_T nVarMax, int32_T mConstrMax,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj)
{
  int32_T i;
  obj->mConstr = 0;
  obj->mConstrOrig = 0;
  obj->mConstrMax = mConstrMax;
  obj->nVar = nVar;
  obj->nVarOrig = nVar;
  obj->nVarMax = nVarMax;
  obj->ldA = nVarMax;
  i = obj->Aineq->size[0];
  obj->Aineq->size[0] = mIneqMax * nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->Aineq, i);
  i = obj->bineq->size[0];
  obj->bineq->size[0] = mIneqMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->bineq, i);
  i = obj->Aeq->size[0];
  obj->Aeq->size[0] = mEqMax * nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->Aeq, i);
  i = obj->beq->size[0];
  obj->beq->size[0] = mEqMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->beq, i);
  i = obj->lb->size[0];
  obj->lb->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->lb, i);
  i = obj->ub->size[0];
  obj->ub->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->ub, i);
  i = obj->indexLB->size[0];
  obj->indexLB->size[0] = nVarMax;
  MPC_f_emxEnsureCapacity_int32_T(obj->indexLB, i);
  i = obj->indexUB->size[0];
  obj->indexUB->size[0] = nVarMax;
  MPC_f_emxEnsureCapacity_int32_T(obj->indexUB, i);
  i = obj->indexFixed->size[0];
  obj->indexFixed->size[0] = nVarMax;
  MPC_f_emxEnsureCapacity_int32_T(obj->indexFixed, i);
  obj->mEqRemoved = 0;
  i = obj->indexEqRemoved->size[0];
  obj->indexEqRemoved->size[0] = mEqMax;
  MPC_f_emxEnsureCapacity_int32_T(obj->indexEqRemoved, i);
  i = obj->ATwset->size[0];
  obj->ATwset->size[0] = nVarMax * mConstrMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->ATwset, i);
  i = obj->bwset->size[0];
  obj->bwset->size[0] = mConstrMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->bwset, i);
  obj->nActiveConstr = 0;
  i = obj->maxConstrWorkspace->size[0];
  obj->maxConstrWorkspace->size[0] = mConstrMax;
  MPC_fm_emxEnsureCapacity_real_T(obj->maxConstrWorkspace, i);
  for (i = 0; i < 5; i++) {
    obj->sizes[i] = 0;
    obj->sizesNormal[i] = 0;
    obj->sizesPhaseOne[i] = 0;
    obj->sizesRegularized[i] = 0;
    obj->sizesRegPhaseOne[i] = 0;
  }

  for (i = 0; i < 6; i++) {
    obj->isActiveIdx[i] = 0;
    obj->isActiveIdxNormal[i] = 0;
    obj->isActiveIdxPhaseOne[i] = 0;
    obj->isActiveIdxRegularized[i] = 0;
    obj->isActiveIdxRegPhaseOne[i] = 0;
  }

  i = obj->isActiveConstr->size[0];
  obj->isActiveConstr->size[0] = mConstrMax;
  MPC_emxEnsureCapacity_boolean_T(obj->isActiveConstr, i);
  i = obj->Wid->size[0];
  obj->Wid->size[0] = mConstrMax;
  MPC_f_emxEnsureCapacity_int32_T(obj->Wid, i);
  i = obj->Wlocalidx->size[0];
  obj->Wlocalidx->size[0] = mConstrMax;
  MPC_f_emxEnsureCapacity_int32_T(obj->Wlocalidx, i);
  for (i = 0; i < 5; i++) {
    obj->nWConstr[i] = 0;
  }

  obj->probType = 3;
  obj->SLACK0 = 1.0E-5;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_compressBounds(int32_T nVar,
  emxArray_int32_T_MPC_fmincon_T *indexLB, emxArray_int32_T_MPC_fmincon_T
  *indexUB, emxArray_int32_T_MPC_fmincon_T *indexFixed, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  int32_T *mLB, int32_T *mUB, int32_T *mFixed)
{
  int32_T c_idx;
  *mLB = 0;
  *mUB = 0;
  *mFixed = 0;
  if (ub->size[0] != 0) {
    if (lb->size[0] != 0) {
      for (c_idx = 0; c_idx < nVar; c_idx++) {
        real_T lb_0;
        boolean_T guard1;
        lb_0 = lb->data[c_idx];
        guard1 = false;
        if ((!rtIsInf(lb_0)) && (!rtIsNaN(lb_0))) {
          if (fabs(lb_0 - ub->data[c_idx]) < 1.0E-6) {
            (*mFixed)++;
            indexFixed->data[*mFixed - 1] = c_idx + 1;
          } else {
            (*mLB)++;
            indexLB->data[*mLB - 1] = c_idx + 1;
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          lb_0 = ub->data[c_idx];
          if ((!rtIsInf(lb_0)) && (!rtIsNaN(lb_0))) {
            (*mUB)++;
            indexUB->data[*mUB - 1] = c_idx + 1;
          }
        }
      }
    } else {
      for (c_idx = 0; c_idx < nVar; c_idx++) {
        real_T lb_0;
        lb_0 = ub->data[c_idx];
        if ((!rtIsInf(lb_0)) && (!rtIsNaN(lb_0))) {
          (*mUB)++;
          indexUB->data[*mUB - 1] = c_idx + 1;
        }
      }
    }
  } else if (lb->size[0] != 0) {
    for (c_idx = 0; c_idx < nVar; c_idx++) {
      real_T lb_0;
      lb_0 = lb->data[c_idx];
      if ((!rtIsInf(lb_0)) && (!rtIsNaN(lb_0))) {
        (*mLB)++;
        indexLB->data[*mLB - 1] = c_idx + 1;
      }
    }
  }
}

static void MPC_fmincon_binary_expand_op(real_T in1[2], const
  emxArray_real_T_MPC_fmincon_T *in2, int32_T in3, int32_T in4, const
  emxArray_real_T_MPC_fmincon_T *in5, int32_T in6)
{
  in1[0] = in2->data[in3] - in5->data[in6 << 1];
  in1[1] = in2->data[((in4 - in3) + 1 != 1) + in3] - in5->data[(in6 << 1) + 1];
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmi_eML_blk_kernel_anonFcn1(const real_T x0[4], const
  emxArray_real_T_MPC_fmincon_T *xref, const emxArray_real_T_MPC_fmincon_T *uref,
  real_T N, const emxArray_real_T_MPC_fmincon_T *u)
{
  emxArray_real_T_MPC_fmincon_T *x;
  real_T err_x[4];
  real_T err_u[2];
  real_T d;
  real_T varargout_1;
  real_T x_0;
  real_T x_1;
  real_T x_2;
  int32_T b;
  int32_T e;
  int32_T f;
  int32_T k;
  int32_T loop_ub;
  uint32_T c;
  static const int16_T y[16] = { 1000, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 50 };

  static const int8_T b_y[16] = { 100, 0, 0, 0, 0, 100, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 5 };

  int32_T d_tmp;
  int32_T x_tmp;
  int32_T x_tmp_0;
  int32_T x_tmp_1;

  /* '<S2>:1:108' */
  /* '<S2>:1:112' */
  /* '<S2>:1:116' */
  /* '<S2>:1:102' */
  MPC_fmincon_emxInit_real_T(&x, 2);
  loop_ub = x->size[0] * x->size[1];
  x->size[0] = 4;
  x->size[1] = (int32_T)(N + 1.0);
  MPC_fm_emxEnsureCapacity_real_T(x, loop_ub);
  loop_ub = (int32_T)(N + 1.0) << 2;
  if (loop_ub - 1 >= 0) {
    memset(&x->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S2>:1:103' */
  x->data[0] = x0[0];
  x->data[1] = x0[1];
  x->data[2] = x0[2];
  x->data[3] = x0[3];

  /* '<S2>:1:104' */
  varargout_1 = 0.0;
  b = (int32_T)N;

  /* '<S2>:1:106' */
  for (k = 0; k < b; k++) {
    c = ((uint32_T)k << 1) + 1U;
    d = ((real_T)k + 1.0) * 2.0;
    if (c > d) {
      f = 0;
      e = 0;
    } else {
      f = (int32_T)c - 1;
      e = (int32_T)d;
    }

    /* '<S2>:1:107' */
    /* '<S2>:1:108' */
    /* '<S2>:1:140' */
    d_tmp = (k << 2) + 2;
    d = x->data[d_tmp];
    x_tmp_0 = (k << 2) + 1;
    x_0 = x->data[x_tmp_0];
    x_tmp_1 = (k << 2) + 3;
    x_1 = x->data[x_tmp_1];
    x_tmp = k << 2;
    x_2 = x->data[x_tmp];
    loop_ub = (k + 1) << 2;
    x->data[loop_ub] = u->data[f] * cos(d) * 0.1 + x_2;
    x->data[1 + loop_ub] = u->data[f] * sin(d) * 0.1 + x_0;
    x->data[2 + loop_ub] = u->data[f] / 0.256 * tan(x_1) * 0.1 + d;
    x->data[3 + loop_ub] = u->data[f + 1] * 0.1 + x_1;

    /* '<S2>:1:110' */
    err_x[0] = x_2 - xref->data[x_tmp];
    err_x[1] = x_0 - xref->data[x_tmp_0];
    err_x[2] = d - xref->data[d_tmp];
    err_x[3] = x_1 - xref->data[x_tmp_1];

    /* '<S2>:1:111' */
    loop_ub = e - f;
    if (loop_ub == 2) {
      for (e = 0; e < loop_ub; e++) {
        err_u[e] = u->data[f + e] - uref->data[(k << 1) + e];
      }
    } else {
      MPC_fmincon_binary_expand_op(err_u, u, f, e - 1, uref, k);
    }

    /* '<S2>:1:112' */
    d = 0.0;
    for (e = 0; e < 4; e++) {
      loop_ub = e << 2;
      d += ((((real_T)b_y[loop_ub + 1] * err_x[1] + (real_T)b_y[loop_ub] *
              err_x[0]) + (real_T)b_y[loop_ub + 2] * err_x[2]) + (real_T)
            b_y[loop_ub + 3] * err_x[3]) * err_x[e];
    }

    varargout_1 = ((err_u[0] * 2.0 + err_u[1] * 0.0) * err_u[0] + (err_u[0] *
      0.0 + err_u[1] * 2.0) * err_u[1]) + (varargout_1 + d);
  }

  /* '<S2>:1:115' */
  err_x[0] = x->data[(x->size[1] - 1) << 2] - xref->data[(xref->size[1] - 1) <<
    2];
  err_x[1] = x->data[((x->size[1] - 1) << 2) + 1] - xref->data[((xref->size[1] -
    1) << 2) + 1];
  err_x[2] = x->data[((x->size[1] - 1) << 2) + 2] - xref->data[((xref->size[1] -
    1) << 2) + 2];
  err_x[3] = x->data[((x->size[1] - 1) << 2) + 3] - xref->data[((xref->size[1] -
    1) << 2) + 3];
  MPC_fmincon_emxFree_real_T(&x);

  /* '<S2>:1:116' */
  d = 0.0;
  for (e = 0; e < 4; e++) {
    loop_ub = e << 2;
    d += ((((real_T)y[loop_ub + 1] * err_x[1] + (real_T)y[loop_ub] * err_x[0]) +
           (real_T)y[loop_ub + 2] * err_x[2]) + (real_T)y[loop_ub + 3] * err_x[3])
      * err_x[e];
  }

  varargout_1 += d;
  return varargout_1;
}

static void MPC_fmincon_emxFree_int32_T(emxArray_int32_T_MPC_fmincon_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T_MPC_fmincon_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T_MPC_fmincon_T *)NULL;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int32_T MPC_fminco_checkVectorNonFinite(int32_T N, const
  emxArray_real_T_MPC_fmincon_T *vec, int32_T iv0)
{
  int32_T idx_current;
  int32_T idx_end;
  int32_T status;
  boolean_T allFinite;
  status = 1;
  allFinite = true;
  idx_current = iv0 - 2;
  idx_end = (iv0 + N) - 1;
  while (allFinite && (idx_current + 2 <= idx_end)) {
    real_T allFinite_tmp;
    allFinite_tmp = vec->data[idx_current + 1];
    allFinite = ((!rtIsInf(allFinite_tmp)) && (!rtIsNaN(allFinite_tmp)));
    idx_current++;
  }

  if (!allFinite) {
    if (rtIsNaN(vec->data[idx_current])) {
      status = -3;
    } else if (vec->data[idx_current] < 0.0) {
      status = -1;
    } else {
      status = -2;
    }
  }

  return status;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int32_T MPC_fmincon_computeConstraints_(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const emxArray_real_T_MPC_fmincon_T *x,
  emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T eq0)
{
  emxArray_int32_T_MPC_fmincon_T *eqRange;
  emxArray_int32_T_MPC_fmincon_T *ineqRange;
  emxArray_real_T_MPC_fmincon_T *b;
  emxArray_real_T_MPC_fmincon_T *c;
  int32_T k;
  int32_T n;
  int32_T status;
  int32_T yk;
  if (obj_next_next_next_next_next_b_ - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_next_b_;
  }

  MPC_fmincon_emxInit_int32_T(&ineqRange, 2);
  k = ineqRange->size[0] * ineqRange->size[1];
  ineqRange->size[0] = 1;
  ineqRange->size[1] = n;
  MPC_f_emxEnsureCapacity_int32_T(ineqRange, k);
  if (n > 0) {
    ineqRange->data[0] = 0;
    yk = 0;
    for (k = 2; k <= n; k++) {
      yk++;
      ineqRange->data[k - 1] = yk;
    }
  }

  k = ineqRange->size[0] * ineqRange->size[1];
  ineqRange->size[0] = 1;
  MPC_f_emxEnsureCapacity_int32_T(ineqRange, k);
  n = ineqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    ineqRange->data[k] += ineq0;
  }

  if (obj_next_next_next_next_b_value - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_b_value;
  }

  MPC_fmincon_emxInit_int32_T(&eqRange, 2);
  k = eqRange->size[0] * eqRange->size[1];
  eqRange->size[0] = 1;
  eqRange->size[1] = n;
  MPC_f_emxEnsureCapacity_int32_T(eqRange, k);
  if (n > 0) {
    eqRange->data[0] = 0;
    yk = 0;
    for (k = 2; k <= n; k++) {
      yk++;
      eqRange->data[k - 1] = yk;
    }
  }

  k = eqRange->size[0] * eqRange->size[1];
  eqRange->size[0] = 1;
  MPC_f_emxEnsureCapacity_int32_T(eqRange, k);
  n = eqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    eqRange->data[k] += eq0;
  }

  MPC_fmincon_emxInit_real_T(&b, 1);
  MPC_fmincon_emxInit_real_T(&c, 1);
  MPC_fmi_eML_blk_kernel_anonFcn2(obj_next_next_next_next_next_ne,
    obj_next_next_next_next_next__0, x, b, c);
  n = ineqRange->size[1];
  for (k = 0; k < n; k++) {
    Cineq_workspace->data[ineqRange->data[k] - 1] = b->data[k];
  }

  MPC_fmincon_emxFree_real_T(&b);
  MPC_fmincon_emxFree_int32_T(&ineqRange);
  n = eqRange->size[1];
  for (k = 0; k < n; k++) {
    Ceq_workspace->data[eqRange->data[k] - 1] = c->data[k];
  }

  MPC_fmincon_emxFree_real_T(&c);
  MPC_fmincon_emxFree_int32_T(&eqRange);
  status = MPC_fminco_checkVectorNonFinite(obj_next_next_next_next_next_b_,
    Cineq_workspace, ineq0);
  if (status == 1) {
    status = MPC_fminco_checkVectorNonFinite(obj_next_next_next_next_b_value,
      Ceq_workspace, eq0);
  }

  return status;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T MPC_fminco_finDiffEvalAndChkErr(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_xref, const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_uref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_MPC_fmincon_T *cIneqPlus,
  emxArray_real_T_MPC_fmincon_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_MPC_fmincon_T *xk)
{
  real_T temp_tmp;
  int32_T idx;
  boolean_T evalOK;
  temp_tmp = xk->data[dim - 1];
  xk->data[dim - 1] = temp_tmp + delta;
  *fplus = MPC_fmi_eML_blk_kernel_anonFcn1(obj_objfun_workspace_x0,
    obj_objfun_workspace_xref, obj_objfun_workspace_uref, obj_objfun_workspace_N,
    xk);
  evalOK = ((!rtIsInf(*fplus)) && (!rtIsNaN(*fplus)));
  if (evalOK) {
    MPC_fmi_eML_blk_kernel_anonFcn2(obj_nonlin_workspace_x0,
      obj_nonlin_workspace_N, xk, cIneqPlus, cEqPlus);
    idx = 0;
    while (evalOK && (idx + 1 <= obj_mIneq)) {
      evalOK = ((!rtIsInf(cIneqPlus->data[idx])) && (!rtIsNaN(cIneqPlus->
                  data[idx])));
      idx++;
    }

    if (evalOK) {
      idx = 0;
      while (evalOK && (idx + 1 <= obj_mEq)) {
        evalOK = ((!rtIsInf(cEqPlus->data[idx])) && (!rtIsNaN(cEqPlus->data[idx])));
        idx++;
      }

      xk->data[dim - 1] = temp_tmp;
    }
  }

  return evalOK;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T MPC_fm_computeFiniteDifferences(s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T
  *obj, real_T fCurrent, const emxArray_real_T_MPC_fmincon_T *cIneqCurrent,
  int32_T ineq0, const emxArray_real_T_MPC_fmincon_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_MPC_fmincon_T *xk, emxArray_real_T_MPC_fmincon_T *gradf,
  emxArray_real_T_MPC_fmincon_T *JacCineqTrans, int32_T CineqColStart, int32_T
  ldJI, emxArray_real_T_MPC_fmincon_T *JacCeqTrans, int32_T CeqColStart, int32_T
  ldJE, const emxArray_real_T_MPC_fmincon_T *lb, const
  emxArray_real_T_MPC_fmincon_T *ub)
{
  real_T deltaX;
  real_T tmp;
  real_T ubDiff;
  int32_T b;
  int32_T b_idx;
  int32_T b_idx_row;
  boolean_T evalOK;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T modifiedStep;
  evalOK = true;
  obj->numEvals = 0;
  b_idx = 0;
  exitg1 = false;
  while ((!exitg1) && (b_idx <= obj->nVar - 1)) {
    modifiedStep = false;
    deltaX = (1.0 - (real_T)(xk->data[b_idx] < 0.0) * 2.0) *
      1.4901161193847656E-8 * fmax(fabs(xk->data[b_idx]), 1.0);
    if (obj->hasLB->data[b_idx] || obj->hasUB->data[b_idx]) {
      if (obj->hasLB->data[b_idx] && obj->hasUB->data[b_idx]) {
        ubDiff = deltaX;
        if ((xk->data[b_idx] >= lb->data[b_idx]) && (xk->data[b_idx] <= ub->
             data[b_idx])) {
          tmp = xk->data[b_idx] + deltaX;
          if ((tmp > ub->data[b_idx]) || (tmp < lb->data[b_idx])) {
            ubDiff = -deltaX;
            modifiedStep = true;
            tmp = xk->data[b_idx] - deltaX;
            if ((tmp > ub->data[b_idx]) || (tmp < lb->data[b_idx])) {
              deltaX = xk->data[b_idx] - lb->data[b_idx];
              ubDiff = ub->data[b_idx] - xk->data[b_idx];
              if (deltaX <= ubDiff) {
                ubDiff = -deltaX;
              }
            }
          }
        }

        deltaX = ubDiff;
      } else if (obj->hasUB->data[b_idx]) {
        if ((xk->data[b_idx] <= ub->data[b_idx]) && (xk->data[b_idx] + deltaX >
             ub->data[b_idx])) {
          deltaX = -deltaX;
          modifiedStep = true;
        }
      } else if ((xk->data[b_idx] >= lb->data[b_idx]) && (xk->data[b_idx] +
                  deltaX < lb->data[b_idx])) {
        deltaX = -deltaX;
        modifiedStep = true;
      }
    }

    evalOK = MPC_fminco_finDiffEvalAndChkErr(obj->objfun.workspace.x0,
      obj->objfun.workspace.xref, obj->objfun.workspace.uref,
      obj->objfun.workspace.N, obj->nonlin.workspace.x0, obj->nonlin.workspace.N,
      obj->mIneq, obj->mEq, &obj->f_1, obj->cIneq_1, obj->cEq_1, b_idx + 1,
      deltaX, xk);
    obj->numEvals++;
    guard1 = false;
    if (!evalOK) {
      if (!modifiedStep) {
        deltaX = -deltaX;
        if (obj->hasLB->data[b_idx]) {
          tmp = xk->data[b_idx] + deltaX;
          if ((tmp >= lb->data[b_idx]) && obj->hasUB->data[b_idx] && (tmp <=
               ub->data[b_idx])) {
            modifiedStep = true;
          }
        }

        if ((!obj->hasBounds) || modifiedStep) {
          evalOK = MPC_fminco_finDiffEvalAndChkErr(obj->objfun.workspace.x0,
            obj->objfun.workspace.xref, obj->objfun.workspace.uref,
            obj->objfun.workspace.N, obj->nonlin.workspace.x0,
            obj->nonlin.workspace.N, obj->mIneq, obj->mEq, &obj->f_1,
            obj->cIneq_1, obj->cEq_1, b_idx + 1, deltaX, xk);
          obj->numEvals++;
        }
      }

      if (!evalOK) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      gradf->data[b_idx] = (obj->f_1 - fCurrent) / deltaX;
      b = obj->mIneq;
      for (b_idx_row = 0; b_idx_row < b; b_idx_row++) {
        JacCineqTrans->data[b_idx + ldJI * ((CineqColStart + b_idx_row) - 1)] =
          (obj->cIneq_1->data[b_idx_row] - cIneqCurrent->data[(ineq0 + b_idx_row)
           - 1]) / deltaX;
      }

      b = obj->mEq;
      for (b_idx_row = 0; b_idx_row < b; b_idx_row++) {
        JacCeqTrans->data[b_idx + ldJE * ((CeqColStart + b_idx_row) - 1)] =
          (obj->cEq_1->data[b_idx_row] - cEqCurrent->data[(eq0 + b_idx_row) - 1])
          / deltaX;
      }

      b_idx++;
    }
  }

  return evalOK;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fm_updateWorkingSetForNewQP(const emxArray_real_T_MPC_fmincon_T *
  xk, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, int32_T mIneq, int32_T
  mNonlinIneq, const emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mEq, int32_T
  mNonlinEq, const emxArray_real_T_MPC_fmincon_T *cEq, int32_T mLB, const
  emxArray_real_T_MPC_fmincon_T *lb, int32_T mUB, const
  emxArray_real_T_MPC_fmincon_T *ub, int32_T mFixed)
{
  real_T WorkingSet_0;
  int32_T iEq0;
  int32_T ineqStart;
  int32_T iw0;
  int32_T mLinEq;
  int32_T nVar;
  boolean_T hasLB;
  boolean_T hasUB;
  nVar = WorkingSet->nVar - 1;
  for (iw0 = 0; iw0 < mEq; iw0++) {
    WorkingSet_0 = -cEq->data[iw0];
    WorkingSet->beq->data[iw0] = WorkingSet_0;
    WorkingSet->bwset->data[mFixed + iw0] = WorkingSet_0;
  }

  mLinEq = mEq - mNonlinEq;
  iw0 = (mFixed + mLinEq) * WorkingSet->ldA;
  iEq0 = WorkingSet->ldA * mLinEq;
  for (mLinEq = 0; mLinEq < mNonlinEq; mLinEq++) {
    for (ineqStart = 0; ineqStart <= nVar; ineqStart++) {
      WorkingSet->ATwset->data[iw0 + ineqStart] = WorkingSet->Aeq->data[iEq0 +
        ineqStart];
    }

    iw0 += WorkingSet->ldA;
    iEq0 += WorkingSet->ldA;
  }

  for (iw0 = 0; iw0 < mIneq; iw0++) {
    WorkingSet->bineq->data[iw0] = -cIneq->data[iw0];
  }

  hasLB = (lb->size[0] != 0);
  hasUB = (ub->size[0] != 0);
  if (hasLB) {
    for (iw0 = 0; iw0 < mLB; iw0++) {
      WorkingSet->lb->data[WorkingSet->indexLB->data[iw0] - 1] = -lb->
        data[WorkingSet->indexLB->data[iw0] - 1] + xk->data[WorkingSet->
        indexLB->data[iw0] - 1];
    }
  }

  if (hasUB) {
    for (iw0 = 0; iw0 < mUB; iw0++) {
      WorkingSet->ub->data[WorkingSet->indexUB->data[iw0] - 1] = ub->
        data[WorkingSet->indexUB->data[iw0] - 1] - xk->data[WorkingSet->
        indexUB->data[iw0] - 1];
    }
  }

  if (hasLB && hasUB) {
    for (iw0 = 0; iw0 < mFixed; iw0++) {
      WorkingSet_0 = ub->data[WorkingSet->indexFixed->data[iw0] - 1] - xk->
        data[WorkingSet->indexFixed->data[iw0] - 1];
      WorkingSet->ub->data[WorkingSet->indexFixed->data[iw0] - 1] = WorkingSet_0;
      WorkingSet->bwset->data[iw0] = WorkingSet_0;
    }
  }

  mLinEq = mFixed + mEq;
  if (WorkingSet->nActiveConstr > mLinEq) {
    if (mLinEq + 1 >= 1) {
      ineqStart = mLinEq + 1;
    } else {
      ineqStart = 1;
    }

    iEq0 = WorkingSet->nActiveConstr;
    for (iw0 = ineqStart; iw0 <= iEq0; iw0++) {
      switch (WorkingSet->Wid->data[iw0 - 1]) {
       case 4:
        WorkingSet->bwset->data[iw0 - 1] = WorkingSet->lb->data
          [WorkingSet->indexLB->data[WorkingSet->Wlocalidx->data[iw0 - 1] - 1] -
          1];
        break;

       case 5:
        WorkingSet->bwset->data[iw0 - 1] = WorkingSet->ub->data
          [WorkingSet->indexUB->data[WorkingSet->Wlocalidx->data[iw0 - 1] - 1] -
          1];
        break;

       default:
        {
          mLinEq = WorkingSet->Wlocalidx->data[iw0 - 1];
          WorkingSet->bwset->data[iw0 - 1] = WorkingSet->bineq->data[mLinEq - 1];
          if ((mNonlinIneq > 0) && (mLinEq >= mNonlinIneq)) {
            int32_T ix0;
            int32_T iy0;
            iy0 = (iw0 - 1) * WorkingSet->ldA;
            ix0 = (mLinEq - 1) * WorkingSet->ldA;
            for (mLinEq = 0; mLinEq <= nVar; mLinEq++) {
              WorkingSet->ATwset->data[iy0 + mLinEq] = WorkingSet->Aineq->
                data[mLinEq + ix0];
            }
          }
        }
        break;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmi_modifyOverheadPhaseOne_(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj)
{
  int32_T idx;
  int32_T idxEq;
  int32_T idxStartIneq;
  idxStartIneq = obj->sizes[0];
  for (idx = 0; idx < idxStartIneq; idx++) {
    obj->ATwset->data[(obj->nVar + obj->ldA * idx) - 1] = 0.0;
  }

  idxStartIneq = obj->sizes[1];
  for (idx = 0; idx < idxStartIneq; idx++) {
    idxEq = (obj->ldA * idx + obj->nVar) - 1;
    obj->Aeq->data[idxEq] = 0.0;
    obj->ATwset->data[idxEq + obj->ldA * (obj->isActiveIdx[1] - 1)] = 0.0;
  }

  idxStartIneq = obj->sizes[2];
  for (idx = 0; idx < idxStartIneq; idx++) {
    obj->Aineq->data[(obj->nVar + obj->ldA * idx) - 1] = -1.0;
  }

  obj->indexLB->data[obj->sizes[3] - 1] = obj->nVar;
  obj->lb->data[obj->nVar - 1] = 1.0E-5;
  idxStartIneq = obj->isActiveIdx[2];
  idxEq = obj->nActiveConstr;
  for (idx = idxStartIneq; idx <= idxEq; idx++) {
    obj->ATwset->data[(obj->nVar + obj->ldA * (idx - 1)) - 1] = -1.0;
  }

  if (obj->nWConstr[4] > 0) {
    idxStartIneq = obj->sizesNormal[4];
    for (idx = 0; idx <= idxStartIneq; idx++) {
      obj->isActiveConstr->data[(obj->isActiveIdx[4] + idx) - 1] = false;
    }
  }

  obj->isActiveConstr->data[obj->isActiveIdx[4] - 2] = false;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_setProblemType(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T PROBLEM_TYPE)
{
  int32_T b_idx_col;
  int32_T colOffsetATw;
  int32_T colOffsetAineq;
  int32_T e;
  int32_T mEq;
  int32_T offsetEq1;
  int32_T offsetEq1_tmp;
  int32_T offsetEq2;
  int32_T offsetIneq;
  int32_T offsetIneq_tmp;
  switch (PROBLEM_TYPE) {
   case 3:
    obj->nVar = obj->nVarOrig;
    obj->mConstr = obj->mConstrOrig;
    if (obj->nWConstr[4] > 0) {
      colOffsetATw = obj->sizesNormal[4];
      for (offsetIneq = 0; offsetIneq < colOffsetATw; offsetIneq++) {
        obj->isActiveConstr->data[(obj->isActiveIdxNormal[4] + offsetIneq) - 1] =
          obj->isActiveConstr->data[(offsetIneq + obj->isActiveIdx[4]) - 1];
      }
    }

    for (colOffsetATw = 0; colOffsetATw < 5; colOffsetATw++) {
      obj->sizes[colOffsetATw] = obj->sizesNormal[colOffsetATw];
    }

    for (colOffsetATw = 0; colOffsetATw < 6; colOffsetATw++) {
      obj->isActiveIdx[colOffsetATw] = obj->isActiveIdxNormal[colOffsetATw];
    }
    break;

   case 1:
    obj->nVar = obj->nVarOrig + 1;
    obj->mConstr = obj->mConstrOrig + 1;
    for (colOffsetATw = 0; colOffsetATw < 5; colOffsetATw++) {
      obj->sizes[colOffsetATw] = obj->sizesPhaseOne[colOffsetATw];
    }

    for (colOffsetATw = 0; colOffsetATw < 6; colOffsetATw++) {
      obj->isActiveIdx[colOffsetATw] = obj->isActiveIdxPhaseOne[colOffsetATw];
    }

    MPC_fmi_modifyOverheadPhaseOne_(obj);
    break;

   case 2:
    obj->nVar = obj->nVarMax - 1;
    obj->mConstr = obj->mConstrMax - 1;
    for (colOffsetATw = 0; colOffsetATw < 5; colOffsetATw++) {
      obj->sizes[colOffsetATw] = obj->sizesRegularized[colOffsetATw];
    }

    if (obj->probType != 4) {
      offsetIneq = obj->sizes[2];
      mEq = obj->sizes[1];
      offsetIneq_tmp = obj->nVarOrig + 1;
      offsetEq1_tmp = obj->nVarOrig + obj->sizes[2];
      offsetEq2 = offsetEq1_tmp + obj->sizes[1];
      offsetEq1 = obj->sizes[0];
      for (b_idx_col = 0; b_idx_col < offsetEq1; b_idx_col++) {
        colOffsetATw = obj->ldA * b_idx_col;
        e = obj->nVar;
        for (colOffsetAineq = offsetIneq_tmp; colOffsetAineq <= e;
             colOffsetAineq++) {
          obj->ATwset->data[(colOffsetAineq + colOffsetATw) - 1] = 0.0;
        }
      }

      for (colOffsetATw = 0; colOffsetATw < offsetIneq; colOffsetATw++) {
        colOffsetAineq = obj->ldA * colOffsetATw - 1;
        b_idx_col = offsetIneq_tmp + colOffsetATw;
        e = b_idx_col - 1;
        for (offsetEq1 = offsetIneq_tmp; offsetEq1 <= e; offsetEq1++) {
          obj->Aineq->data[offsetEq1 + colOffsetAineq] = 0.0;
        }

        obj->Aineq->data[b_idx_col + colOffsetAineq] = -1.0;
        offsetEq1 = b_idx_col + 1;
        e = obj->nVar;
        for (b_idx_col = offsetEq1; b_idx_col <= e; b_idx_col++) {
          obj->Aineq->data[b_idx_col + colOffsetAineq] = 0.0;
        }
      }

      for (offsetIneq = 0; offsetIneq < mEq; offsetIneq++) {
        colOffsetAineq = offsetIneq * obj->ldA - 1;
        colOffsetATw = (obj->isActiveIdx[1] - 1) * obj->ldA + colOffsetAineq;
        for (offsetEq1 = offsetIneq_tmp; offsetEq1 <= offsetEq1_tmp; offsetEq1++)
        {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        b_idx_col = offsetIneq + offsetEq1_tmp;
        for (offsetEq1 = offsetEq1_tmp + 1; offsetEq1 <= b_idx_col; offsetEq1++)
        {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        obj->Aeq->data[(b_idx_col + colOffsetAineq) + 1] = -1.0;
        obj->ATwset->data[(b_idx_col + colOffsetATw) + 1] = -1.0;
        e = b_idx_col + 2;
        for (offsetEq1 = e; offsetEq1 <= offsetEq2; offsetEq1++) {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        b_idx_col = offsetIneq + offsetEq2;
        for (offsetEq1 = offsetEq2 + 1; offsetEq1 <= b_idx_col; offsetEq1++) {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        obj->Aeq->data[(b_idx_col + colOffsetAineq) + 1] = 1.0;
        obj->ATwset->data[(b_idx_col + colOffsetATw) + 1] = 1.0;
        offsetEq1 = b_idx_col + 2;
        e = obj->nVar;
        for (b_idx_col = offsetEq1; b_idx_col <= e; b_idx_col++) {
          obj->Aeq->data[b_idx_col + colOffsetAineq] = 0.0;
          obj->ATwset->data[b_idx_col + colOffsetATw] = 0.0;
        }
      }

      mEq = obj->nVarOrig;
      offsetEq1 = obj->sizesNormal[3] + 1;
      offsetEq2 = obj->sizesRegularized[3];
      for (colOffsetATw = offsetEq1; colOffsetATw <= offsetEq2; colOffsetATw++)
      {
        mEq++;
        obj->indexLB->data[colOffsetATw - 1] = mEq;
      }

      if (obj->nWConstr[4] > 0) {
        mEq = obj->sizesRegularized[4];
        for (colOffsetATw = 0; colOffsetATw < mEq; colOffsetATw++) {
          obj->isActiveConstr->data[obj->isActiveIdxRegularized[4] +
            colOffsetATw] = obj->isActiveConstr->data[(obj->isActiveIdx[4] +
            colOffsetATw) - 1];
        }
      }

      mEq = obj->isActiveIdx[4];
      offsetEq1 = obj->isActiveIdxRegularized[4] - 1;
      for (colOffsetATw = mEq; colOffsetATw <= offsetEq1; colOffsetATw++) {
        obj->isActiveConstr->data[colOffsetATw - 1] = false;
      }

      offsetEq1 = (obj->sizes[1] << 1) + offsetEq1_tmp;
      for (colOffsetATw = offsetIneq_tmp; colOffsetATw <= offsetEq1;
           colOffsetATw++) {
        obj->lb->data[colOffsetATw - 1] = 0.0;
      }

      offsetEq1 = obj->isActiveIdx[2];
      offsetEq2 = obj->nActiveConstr;
      for (mEq = offsetEq1; mEq <= offsetEq2; mEq++) {
        colOffsetATw = (mEq - 1) * obj->ldA - 1;
        if (obj->Wid->data[mEq - 1] == 3) {
          offsetEq1_tmp = obj->Wlocalidx->data[mEq - 1] + offsetIneq_tmp;
          offsetIneq = offsetEq1_tmp - 2;
          for (b_idx_col = offsetIneq_tmp; b_idx_col <= offsetIneq; b_idx_col++)
          {
            obj->ATwset->data[b_idx_col + colOffsetATw] = 0.0;
          }

          obj->ATwset->data[(offsetEq1_tmp + colOffsetATw) - 1] = -1.0;
          colOffsetAineq = obj->nVar;
          for (b_idx_col = offsetEq1_tmp; b_idx_col <= colOffsetAineq; b_idx_col
               ++) {
            obj->ATwset->data[b_idx_col + colOffsetATw] = 0.0;
          }
        } else {
          offsetIneq = obj->nVar;
          for (b_idx_col = offsetIneq_tmp; b_idx_col <= offsetIneq; b_idx_col++)
          {
            obj->ATwset->data[b_idx_col + colOffsetATw] = 0.0;
          }
        }
      }
    }

    for (colOffsetATw = 0; colOffsetATw < 6; colOffsetATw++) {
      obj->isActiveIdx[colOffsetATw] = obj->isActiveIdxRegularized[colOffsetATw];
    }
    break;

   default:
    obj->nVar = obj->nVarMax;
    obj->mConstr = obj->mConstrMax;
    for (colOffsetATw = 0; colOffsetATw < 5; colOffsetATw++) {
      obj->sizes[colOffsetATw] = obj->sizesRegPhaseOne[colOffsetATw];
    }

    for (colOffsetATw = 0; colOffsetATw < 6; colOffsetATw++) {
      obj->isActiveIdx[colOffsetATw] = obj->isActiveIdxRegPhaseOne[colOffsetATw];
    }

    MPC_fmi_modifyOverheadPhaseOne_(obj);
    break;
  }

  obj->probType = PROBLEM_TYPE;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y)
{
  int32_T ia;
  int32_T iac;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T ix;
    ix = ix0;
    b = (n - 1) * lda + 1;
    for (iac = 1; lda < 0 ? iac >= b : iac <= b; iac += lda) {
      int32_T c;
      c = (iac + m) - 1;
      for (ia = iac; ia <= c; ia++) {
        int32_T tmp;
        tmp = ia - iac;
        y->data[tmp] += A->data[ia - 1] * x->data[ix - 1];
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_computeGradLag(emxArray_real_T_MPC_fmincon_T *workspace,
  int32_T ldA, int32_T nVar, const emxArray_real_T_MPC_fmincon_T *grad, int32_T
  mIneq, const emxArray_real_T_MPC_fmincon_T *AineqTrans, int32_T mEq, const
  emxArray_real_T_MPC_fmincon_T *AeqTrans, const emxArray_int32_T_MPC_fmincon_T *
  finiteFixed, int32_T mFixed, const emxArray_int32_T_MPC_fmincon_T *finiteLB,
  int32_T mLB, const emxArray_int32_T_MPC_fmincon_T *finiteUB, int32_T mUB,
  const emxArray_real_T_MPC_fmincon_T *lambda)
{
  int32_T finiteFixed_0;
  int32_T finiteLB_0;
  int32_T iL0;
  if (nVar - 1 >= 0) {
    memcpy(&workspace->data[0], &grad->data[0], (uint32_T)nVar * sizeof(real_T));
  }

  for (iL0 = 0; iL0 < mFixed; iL0++) {
    finiteFixed_0 = finiteFixed->data[iL0];
    workspace->data[finiteFixed_0 - 1] += lambda->data[iL0];
  }

  MPC_fmincon_xgemv(nVar, mEq, AeqTrans, ldA, lambda, mFixed + 1, workspace);
  iL0 = mFixed + mEq;
  MPC_fmincon_xgemv(nVar, mIneq, AineqTrans, ldA, lambda, iL0 + 1, workspace);
  iL0 += mIneq;
  for (finiteFixed_0 = 0; finiteFixed_0 < mLB; finiteFixed_0++) {
    finiteLB_0 = finiteLB->data[finiteFixed_0];
    workspace->data[finiteLB_0 - 1] -= lambda->data[iL0 + finiteFixed_0];
  }

  iL0 = mLB - 1 < 0 ? iL0 : iL0 + mLB;
  for (finiteFixed_0 = 0; finiteFixed_0 < mUB; finiteFixed_0++) {
    finiteLB_0 = finiteUB->data[finiteFixed_0];
    workspace->data[finiteLB_0 - 1] += lambda->data[iL0 + finiteFixed_0];
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmin_computePrimalFeasError(const
  emxArray_real_T_MPC_fmincon_T *x, int32_T mLinIneq, int32_T mNonlinIneq, const
  emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mLinEq, int32_T mNonlinEq, const
  emxArray_real_T_MPC_fmincon_T *cEq, const emxArray_int32_T_MPC_fmincon_T
  *finiteLB, int32_T mLB, const emxArray_real_T_MPC_fmincon_T *lb, const
  emxArray_int32_T_MPC_fmincon_T *finiteUB, int32_T mUB, const
  emxArray_real_T_MPC_fmincon_T *ub)
{
  real_T feasError;
  int32_T idx;
  int32_T mEq;
  int32_T mIneq;
  feasError = 0.0;
  mEq = mNonlinEq + mLinEq;
  mIneq = mNonlinIneq + mLinIneq;
  for (idx = 0; idx < mEq; idx++) {
    feasError = fmax(feasError, fabs(cEq->data[idx]));
  }

  for (mEq = 0; mEq < mIneq; mEq++) {
    feasError = fmax(feasError, cIneq->data[mEq]);
  }

  for (mIneq = 0; mIneq < mLB; mIneq++) {
    mEq = finiteLB->data[mIneq];
    feasError = fmax(feasError, lb->data[mEq - 1] - x->data[mEq - 1]);
  }

  for (mIneq = 0; mIneq < mUB; mIneq++) {
    mEq = finiteUB->data[mIneq];
    feasError = fmax(feasError, x->data[mEq - 1] - ub->data[mEq - 1]);
  }

  return feasError;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fminco_computeDualFeasError(int32_T nVar, const
  emxArray_real_T_MPC_fmincon_T *gradLag, boolean_T *gradOK, real_T *val)
{
  int32_T b_idx;
  boolean_T exitg1;
  *gradOK = true;
  *val = 0.0;
  b_idx = 0;
  exitg1 = false;
  while ((!exitg1) && (b_idx <= nVar - 1)) {
    *gradOK = ((!rtIsInf(gradLag->data[b_idx])) && (!rtIsNaN(gradLag->data[b_idx])));
    if (!*gradOK) {
      exitg1 = true;
    } else {
      *val = fmax(*val, fabs(gradLag->data[b_idx]));
      b_idx++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_test_exit(sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  const s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  int32_T runTimeOptions_MaxFunctionEvalu, boolean_T *Flags_gradOK, boolean_T
  *Flags_fevalOK, boolean_T *Flags_done, boolean_T *Flags_stepAccepted,
  boolean_T *Flags_failedLineSearch, int32_T *Flags_stepType)
{
  real_T s;
  real_T smax;
  int32_T idx_max;
  int32_T k;
  int32_T mLambda;
  int32_T nVar;
  boolean_T isFeasible;
  *Flags_fevalOK = true;
  *Flags_stepAccepted = false;
  *Flags_failedLineSearch = false;
  *Flags_stepType = 1;
  nVar = WorkingSet->nVar;
  mLambda = ((((WorkingSet->sizes[0] + WorkingSet->sizes[1]) + WorkingSet->
               sizes[2]) + WorkingSet->sizes[3]) + WorkingSet->sizes[4]) - 1;
  for (k = 0; k <= mLambda; k++) {
    TrialState->lambdaStopTest->data[k] = TrialState->lambdasqp->data[k];
  }

  MPC_fmincon_computeGradLag(TrialState->gradLag, WorkingSet->ldA,
    WorkingSet->nVar, TrialState->grad, WorkingSet->sizes[2], WorkingSet->Aineq,
    WorkingSet->sizes[1], WorkingSet->Aeq, WorkingSet->indexFixed,
    WorkingSet->sizes[0], WorkingSet->indexLB, WorkingSet->sizes[3],
    WorkingSet->indexUB, WorkingSet->sizes[4], TrialState->lambdaStopTest);
  if (WorkingSet->nVar < 1) {
    idx_max = 0;
  } else {
    idx_max = 1;
    if (WorkingSet->nVar > 1) {
      smax = fabs(TrialState->grad->data[0]);
      for (k = 2; k <= nVar; k++) {
        s = fabs(TrialState->grad->data[k - 1]);
        if (s > smax) {
          idx_max = k;
          smax = s;
        }
      }
    }
  }

  smax = fmax(1.0, fabs(TrialState->grad->data[idx_max - 1]));
  if (rtIsInf(smax)) {
    smax = 1.0;
  }

  MeritFunction->nlpPrimalFeasError = MPC_fmin_computePrimalFeasError
    (TrialState->xstarsqp, WorkingSet->sizes[2] - TrialState->mNonlinIneq,
     TrialState->mNonlinIneq, TrialState->cIneq, WorkingSet->sizes[1] -
     TrialState->mNonlinEq, TrialState->mNonlinEq, TrialState->cEq,
     WorkingSet->indexLB, WorkingSet->sizes[3], lb, WorkingSet->indexUB,
     WorkingSet->sizes[4], ub);
  MeritFunction->feasRelativeFactor = fmax(1.0,
    MeritFunction->nlpPrimalFeasError);
  isFeasible = (MeritFunction->nlpPrimalFeasError <= 1.0E-6 *
                MeritFunction->feasRelativeFactor);
  MPC_fminco_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag,
    Flags_gradOK, &MeritFunction->nlpDualFeasError);
  if (!*Flags_gradOK) {
    *Flags_done = true;
    if (isFeasible) {
      TrialState->sqpExitFlag = 2;
    } else {
      TrialState->sqpExitFlag = -2;
    }
  } else {
    MeritFunction->nlpComplError = 0.0;
    MeritFunction->firstOrderOpt = fmax(MeritFunction->nlpDualFeasError, 0.0);
    for (k = 0; k <= mLambda; k++) {
      TrialState->lambdaStopTestPrev->data[k] = TrialState->lambdaStopTest->
        data[k];
    }

    if (isFeasible && (MeritFunction->nlpDualFeasError <= 1.0E-6 * smax)) {
      *Flags_done = true;
      TrialState->sqpExitFlag = 1;
    } else {
      *Flags_done = false;
      if (isFeasible && (TrialState->sqpFval < -1.0E+20)) {
        *Flags_done = true;
        TrialState->sqpExitFlag = -3;
      } else if (TrialState->FunctionEvaluations >=
                 runTimeOptions_MaxFunctionEvalu) {
        *Flags_done = true;
        TrialState->sqpExitFlag = 0;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_saveJacobian(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *obj,
  int32_T nVar, int32_T mIneq, const emxArray_real_T_MPC_fmincon_T
  *JacCineqTrans, int32_T ineqCol0, int32_T mEq, const
  emxArray_real_T_MPC_fmincon_T *JacCeqTrans, int32_T eqCol0, int32_T ldJ)
{
  int32_T b;
  int32_T b_k;
  int32_T iCol;
  int32_T iCol_old;
  int32_T idx_col;
  iCol = (ineqCol0 - 1) * ldJ;
  iCol_old = -1;
  b = mIneq - ineqCol0;
  for (idx_col = 0; idx_col <= b; idx_col++) {
    for (b_k = 0; b_k < nVar; b_k++) {
      obj->JacCineqTrans_old->data[(iCol_old + b_k) + 1] = JacCineqTrans->
        data[b_k + iCol];
    }

    iCol += ldJ;
    iCol_old += ldJ;
  }

  iCol = (eqCol0 - 1) * ldJ;
  iCol_old = -1;
  b = mEq - eqCol0;
  for (idx_col = 0; idx_col <= b; idx_col++) {
    for (b_k = 0; b_k < nVar; b_k++) {
      obj->JacCeqTrans_old->data[(iCol_old + b_k) + 1] = JacCeqTrans->data[b_k +
        iCol];
    }

    iCol += ldJ;
    iCol_old += ldJ;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmincon_computeComplError(const emxArray_real_T_MPC_fmincon_T *
  fscales_cineq_constraint, const emxArray_real_T_MPC_fmincon_T *xCurrent,
  int32_T mIneq, const emxArray_real_T_MPC_fmincon_T *cIneq, const
  emxArray_int32_T_MPC_fmincon_T *finiteLB, int32_T mLB, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_int32_T_MPC_fmincon_T
  *finiteUB, int32_T mUB, const emxArray_real_T_MPC_fmincon_T *ub, const
  emxArray_real_T_MPC_fmincon_T *lambda, int32_T iL0)
{
  real_T nlpComplError;
  int32_T b_idx;
  int32_T lbOffset;
  int32_T mNonlinIneq;
  nlpComplError = 0.0;
  mNonlinIneq = fscales_cineq_constraint->size[0];
  if ((mIneq + mLB) + mUB > 0) {
    real_T lbDelta;
    real_T lbLambda;
    for (lbOffset = 0; lbOffset < mNonlinIneq; lbOffset++) {
      lbDelta = cIneq->data[lbOffset];
      lbLambda = lambda->data[(iL0 + lbOffset) - 1];
      nlpComplError = fmax(nlpComplError, fmin(fabs(lbDelta * lbLambda), fmin
        (fabs(lbDelta), lbLambda)));
    }

    lbOffset = (iL0 + mIneq) - 1;
    mNonlinIneq = lbOffset + mLB;
    for (b_idx = 0; b_idx < mLB; b_idx++) {
      int32_T finiteLB_0;
      finiteLB_0 = finiteLB->data[b_idx];
      lbDelta = xCurrent->data[finiteLB_0 - 1] - lb->data[finiteLB_0 - 1];
      lbLambda = lambda->data[lbOffset + b_idx];
      nlpComplError = fmax(nlpComplError, fmin(fabs(lbDelta * lbLambda), fmin
        (fabs(lbDelta), lbLambda)));
    }

    for (lbOffset = 0; lbOffset < mUB; lbOffset++) {
      b_idx = finiteUB->data[lbOffset];
      lbDelta = ub->data[b_idx - 1] - xCurrent->data[b_idx - 1];
      lbLambda = lambda->data[mNonlinIneq + lbOffset];
      nlpComplError = fmax(nlpComplError, fmin(fabs(lbDelta * lbLambda), fmin
        (fabs(lbDelta), lbLambda)));
    }
  }

  return nlpComplError;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_b(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y)
{
  int32_T ia;
  int32_T iac;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T ix;
    ix = ix0;
    b = (n - 1) * lda + 1;
    for (iac = 1; lda < 0 ? iac >= b : iac <= b; iac += lda) {
      int32_T c;
      c = (iac + m) - 1;
      for (ia = iac; ia <= c; ia++) {
        int32_T tmp;
        tmp = ia - iac;
        y->data[tmp] += A->data[ia - 1] * x->data[ix - 1];
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_computeGradLag_l(emxArray_real_T_MPC_fmincon_T
  *workspace, int32_T ldA, int32_T nVar, const emxArray_real_T_MPC_fmincon_T
  *grad, int32_T mIneq, const emxArray_real_T_MPC_fmincon_T *AineqTrans, int32_T
  mEq, const emxArray_real_T_MPC_fmincon_T *AeqTrans, const
  emxArray_int32_T_MPC_fmincon_T *finiteFixed, int32_T mFixed, const
  emxArray_int32_T_MPC_fmincon_T *finiteLB, int32_T mLB, const
  emxArray_int32_T_MPC_fmincon_T *finiteUB, int32_T mUB, const
  emxArray_real_T_MPC_fmincon_T *lambda)
{
  int32_T finiteFixed_0;
  int32_T finiteLB_0;
  int32_T iL0;
  if (nVar - 1 >= 0) {
    memcpy(&workspace->data[0], &grad->data[0], (uint32_T)nVar * sizeof(real_T));
  }

  for (iL0 = 0; iL0 < mFixed; iL0++) {
    finiteFixed_0 = finiteFixed->data[iL0];
    workspace->data[finiteFixed_0 - 1] += lambda->data[iL0];
  }

  MPC_fmincon_xgemv_b(nVar, mEq, AeqTrans, ldA, lambda, mFixed + 1, workspace);
  iL0 = mFixed + mEq;
  MPC_fmincon_xgemv_b(nVar, mIneq, AineqTrans, ldA, lambda, iL0 + 1, workspace);
  iL0 += mIneq;
  for (finiteFixed_0 = 0; finiteFixed_0 < mLB; finiteFixed_0++) {
    finiteLB_0 = finiteLB->data[finiteFixed_0];
    workspace->data[finiteLB_0 - 1] -= lambda->data[iL0 + finiteFixed_0];
  }

  iL0 = mLB - 1 < 0 ? iL0 : iL0 + mLB;
  for (finiteFixed_0 = 0; finiteFixed_0 < mUB; finiteFixed_0++) {
    finiteLB_0 = finiteUB->data[finiteFixed_0];
    workspace->data[finiteLB_0 - 1] += lambda->data[iL0 + finiteFixed_0];
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmincon_xnrm2(int32_T n, const emxArray_real_T_MPC_fmincon_T
  *x, int32_T ix0)
{
  real_T y;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x->data[ix0 - 1]);
    } else {
      real_T scale;
      int32_T kend;
      scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        real_T absxk;
        absxk = fabs(x->data[k - 1]);
        if (absxk > scale) {
          real_T t;
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          real_T t;
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt(a * a + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt(b * b + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmincon_xzlarfg(int32_T n, real_T *alpha1,
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0)
{
  real_T a;
  real_T tau;
  real_T xnorm;
  int32_T c;
  int32_T d_tmp;
  int32_T knt;
  tau = 0.0;
  if (n > 0) {
    xnorm = MPC_fmincon_xnrm2(n - 1, x, ix0);
    if (xnorm != 0.0) {
      xnorm = rt_hypotd_snf(*alpha1, xnorm);
      if (*alpha1 >= 0.0) {
        xnorm = -xnorm;
      }

      if (fabs(xnorm) < 1.0020841800044864E-292) {
        knt = 0;
        do {
          knt++;
          d_tmp = (ix0 + n) - 2;
          for (c = ix0; c <= d_tmp; c++) {
            x->data[c - 1] *= 9.9792015476736E+291;
          }

          xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

        xnorm = rt_hypotd_snf(*alpha1, MPC_fmincon_xnrm2(n - 1, x, ix0));
        if (*alpha1 >= 0.0) {
          xnorm = -xnorm;
        }

        tau = (xnorm - *alpha1) / xnorm;
        a = 1.0 / (*alpha1 - xnorm);
        for (c = ix0; c <= d_tmp; c++) {
          x->data[c - 1] *= a;
        }

        for (c = 0; c < knt; c++) {
          xnorm *= 1.0020841800044864E-292;
        }

        *alpha1 = xnorm;
      } else {
        tau = (xnorm - *alpha1) / xnorm;
        a = 1.0 / (*alpha1 - xnorm);
        c = (ix0 + n) - 2;
        for (knt = ix0; knt <= c; knt++) {
          x->data[knt - 1] *= a;
        }

        *alpha1 = xnorm;
      }
    }
  }

  return tau;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bu(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y)
{
  int32_T b_iy;
  int32_T iyend;
  if (n != 0) {
    int32_T b;
    int32_T iy;
    if (n - 1 >= 0) {
      memset(&y->data[0], 0, (uint32_T)n * sizeof(real_T));
    }

    iy = 0;
    b = (n - 1) * lda + ia0;
    for (b_iy = ia0; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      real_T c;
      int32_T d;
      c = 0.0;
      d = (b_iy + m) - 1;
      for (iyend = b_iy; iyend <= d; iyend++) {
        c += x->data[((ix0 + iyend) - b_iy) - 1] * A->data[iyend - 1];
      }

      y->data[iy] += c;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const emxArray_real_T_MPC_fmincon_T *y, emxArray_real_T_MPC_fmincon_T *A,
  int32_T ia0, int32_T lda)
{
  int32_T ijA;
  int32_T j;
  if (!(alpha1 == 0.0)) {
    int32_T jA;
    jA = ia0;
    for (j = 0; j < n; j++) {
      real_T temp;
      temp = y->data[j];
      if (temp != 0.0) {
        int32_T b;
        temp *= alpha1;
        b = m + jA;
        for (ijA = jA; ijA < b; ijA++) {
          A->data[ijA - 1] += A->data[((ix0 + ijA) - jA) - 1] * temp;
        }
      }

      jA += lda;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  emxArray_real_T_MPC_fmincon_T *C, int32_T ic0, int32_T ldc,
  emxArray_real_T_MPC_fmincon_T *work)
{
  int32_T coltop;
  int32_T exitg1;
  int32_T ia;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C->data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      coltop = (lastc - 1) * ldc + ic0;
      ia = coltop;
      do {
        exitg1 = 0;
        if (ia <= (coltop + lastv) - 1) {
          if (C->data[ia - 1] != 0.0) {
            exitg1 = 1;
          } else {
            ia++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    MPC_fmincon_xgemv_bu(lastv, lastc, C, ic0, ldc, C, iv0, work);
    MPC_fmincon_xgerc(lastv, lastc, -tau, iv0, work, C, ic0, ldc);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_qrf(emxArray_real_T_MPC_fmincon_T *A, int32_T m, int32_T
  n, int32_T nfxd, emxArray_real_T_MPC_fmincon_T *tau)
{
  emxArray_real_T_MPC_fmincon_T *work;
  real_T b_atmp;
  real_T tau_0;
  int32_T i;
  int32_T ii;
  int32_T lda;
  int32_T mmi;
  lda = A->size[0];
  MPC_fmincon_emxInit_real_T(&work, 1);
  i = work->size[0];
  work->size[0] = A->size[1];
  MPC_fm_emxEnsureCapacity_real_T(work, i);
  ii = A->size[1];
  if (ii - 1 >= 0) {
    memset(&work->data[0], 0, (uint32_T)ii * sizeof(real_T));
  }

  for (i = 0; i < nfxd; i++) {
    ii = i * lda + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A->data[ii];
      tau_0 = MPC_fmincon_xzlarfg(mmi, &b_atmp, A, ii + 2);
      tau->data[i] = tau_0;
      A->data[ii] = b_atmp;
    } else {
      tau_0 = 0.0;
      tau->data[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A->data[ii];
      A->data[ii] = 1.0;
      MPC_fmincon_xzlarf(mmi, (n - i) - 1, ii + 1, tau_0, A, (ii + lda) + 1, lda,
                         work);
      A->data[ii] = b_atmp;
    }
  }

  MPC_fmincon_emxFree_real_T(&work);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgeqp3(emxArray_real_T_MPC_fmincon_T *A, int32_T m,
  int32_T n, emxArray_int32_T_MPC_fmincon_T *jpvt, emxArray_real_T_MPC_fmincon_T
  *tau)
{
  emxArray_real_T_MPC_fmincon_T *vn1;
  emxArray_real_T_MPC_fmincon_T *vn2;
  emxArray_real_T_MPC_fmincon_T *work;
  real_T s;
  real_T temp;
  real_T vn1_0;
  int32_T b_ix;
  int32_T b_j;
  int32_T b_ma;
  int32_T c_ix;
  int32_T idxmax;
  int32_T itemp;
  int32_T ix;
  int32_T ix_tmp;
  int32_T iy;
  int32_T ma;
  int32_T minmana;
  int32_T minmn_tmp;
  int32_T temp_tmp;
  ma = A->size[0];
  if (A->size[0] <= A->size[1]) {
    minmana = A->size[0];
  } else {
    minmana = A->size[1];
  }

  if (m <= n) {
    minmn_tmp = m;
  } else {
    minmn_tmp = n;
  }

  itemp = tau->size[0];
  tau->size[0] = minmana;
  MPC_fm_emxEnsureCapacity_real_T(tau, itemp);
  if (minmana - 1 >= 0) {
    memset(&tau->data[0], 0, (uint32_T)minmana * sizeof(real_T));
  }

  if (minmn_tmp < 1) {
    for (minmn_tmp = 0; minmn_tmp < n; minmn_tmp++) {
      jpvt->data[minmn_tmp] = minmn_tmp + 1;
    }
  } else {
    minmana = -1;
    for (b_j = 0; b_j < n; b_j++) {
      if (jpvt->data[b_j] != 0) {
        minmana++;
        if (b_j + 1 != minmana + 1) {
          ix = b_j * ma;
          iy = minmana * ma;
          for (b_ma = 0; b_ma < m; b_ma++) {
            temp_tmp = ix + b_ma;
            temp = A->data[temp_tmp];
            itemp = iy + b_ma;
            A->data[temp_tmp] = A->data[itemp];
            A->data[itemp] = temp;
          }

          jpvt->data[b_j] = jpvt->data[minmana];
          jpvt->data[minmana] = b_j + 1;
        } else {
          jpvt->data[b_j] = b_j + 1;
        }
      } else {
        jpvt->data[b_j] = b_j + 1;
      }
    }

    if (minmana + 1 <= minmn_tmp) {
      minmana++;
    } else {
      minmana = minmn_tmp;
    }

    MPC_fmincon_qrf(A, m, n, minmana, tau);
    if (minmana < minmn_tmp) {
      b_ma = A->size[0];
      MPC_fmincon_emxInit_real_T(&work, 1);
      itemp = work->size[0];
      work->size[0] = A->size[1];
      MPC_fm_emxEnsureCapacity_real_T(work, itemp);
      b_j = A->size[1];
      MPC_fmincon_emxInit_real_T(&vn1, 1);
      itemp = vn1->size[0];
      vn1->size[0] = A->size[1];
      MPC_fm_emxEnsureCapacity_real_T(vn1, itemp);
      MPC_fmincon_emxInit_real_T(&vn2, 1);
      itemp = vn2->size[0];
      vn2->size[0] = A->size[1];
      MPC_fm_emxEnsureCapacity_real_T(vn2, itemp);
      if (b_j - 1 >= 0) {
        memset(&work->data[0], 0, (uint32_T)b_j * sizeof(real_T));
      }

      if (b_j - 1 >= 0) {
        memset(&vn1->data[0], 0, (uint32_T)b_j * sizeof(real_T));
      }

      if (b_j - 1 >= 0) {
        memset(&vn2->data[0], 0, (uint32_T)b_j * sizeof(real_T));
      }

      for (b_j = minmana + 1; b_j <= n; b_j++) {
        vn1_0 = MPC_fmincon_xnrm2(m - minmana, A, ((b_j - 1) * b_ma + minmana) +
          1);
        vn1->data[b_j - 1] = vn1_0;
        vn2->data[b_j - 1] = vn1_0;
      }

      for (b_j = minmana + 1; b_j <= minmn_tmp; b_j++) {
        ix_tmp = (b_j - 1) * b_ma;
        ix = (ix_tmp + b_j) - 1;
        iy = (n - b_j) + 1;
        ma = m - b_j;
        if (iy < 1) {
          idxmax = -2;
        } else {
          idxmax = -1;
          if (iy > 1) {
            b_ix = b_j;
            temp = fabs(vn1->data[b_j - 1]);
            for (itemp = 2; itemp <= iy; itemp++) {
              b_ix++;
              s = fabs(vn1->data[b_ix - 1]);
              if (s > temp) {
                idxmax = itemp - 2;
                temp = s;
              }
            }
          }
        }

        b_ix = b_j + idxmax;
        if (b_ix + 1 != b_j) {
          c_ix = b_ix * b_ma;
          for (idxmax = 0; idxmax < m; idxmax++) {
            temp_tmp = c_ix + idxmax;
            temp = A->data[temp_tmp];
            itemp = ix_tmp + idxmax;
            A->data[temp_tmp] = A->data[itemp];
            A->data[itemp] = temp;
          }

          itemp = jpvt->data[b_ix];
          jpvt->data[b_ix] = jpvt->data[b_j - 1];
          jpvt->data[b_j - 1] = itemp;
          vn1->data[b_ix] = vn1->data[b_j - 1];
          vn2->data[b_ix] = vn2->data[b_j - 1];
        }

        if (b_j < m) {
          temp = A->data[ix];
          vn1_0 = MPC_fmincon_xzlarfg(ma + 1, &temp, A, ix + 2);
          tau->data[b_j - 1] = vn1_0;
          A->data[ix] = temp;
        } else {
          vn1_0 = 0.0;
          tau->data[b_j - 1] = 0.0;
        }

        if (b_j < n) {
          temp = A->data[ix];
          A->data[ix] = 1.0;
          MPC_fmincon_xzlarf(ma + 1, iy - 1, ix + 1, vn1_0, A, (ix + b_ma) + 1,
                             b_ma, work);
          A->data[ix] = temp;
        }

        for (itemp = b_j + 1; itemp <= n; itemp++) {
          ix = (itemp - 1) * b_ma + b_j;
          vn1_0 = vn1->data[itemp - 1];
          if (vn1_0 != 0.0) {
            temp = fabs(A->data[ix - 1]) / vn1_0;
            temp = 1.0 - temp * temp;
            if (temp < 0.0) {
              temp = 0.0;
            }

            s = vn1_0 / vn2->data[itemp - 1];
            s = s * s * temp;
            if (s <= 1.4901161193847656E-8) {
              if (b_j < m) {
                vn1_0 = MPC_fmincon_xnrm2(ma, A, ix + 1);
                vn1->data[itemp - 1] = vn1_0;
                vn2->data[itemp - 1] = vn1_0;
              } else {
                vn1->data[itemp - 1] = 0.0;
                vn2->data[itemp - 1] = 0.0;
              }
            } else {
              vn1->data[itemp - 1] = vn1_0 * sqrt(temp);
            }
          }
        }
      }

      MPC_fmincon_emxFree_real_T(&vn2);
      MPC_fmincon_emxFree_real_T(&vn1);
      MPC_fmincon_emxFree_real_T(&work);
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_computeQ_(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *obj, int32_T
  nrows)
{
  emxArray_real_T_MPC_fmincon_T *work;
  int32_T b_ia;
  int32_T b_k;
  int32_T coltop;
  int32_T exitg1;
  int32_T iQR0;
  int32_T ia;
  int32_T iaii;
  int32_T idx;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  lastv = obj->minRowCol;
  for (idx = 0; idx < lastv; idx++) {
    iQR0 = obj->ldq * idx + idx;
    iaii = obj->mrows - idx;
    for (b_k = 0; b_k <= iaii - 2; b_k++) {
      ia = b_k + iQR0;
      obj->Q->data[ia + 1] = obj->QR->data[ia + 1];
    }
  }

  idx = obj->mrows;
  b_k = obj->ldq;
  if (nrows >= 1) {
    for (itau = lastv; itau < nrows; itau++) {
      ia = itau * b_k;
      for (iQR0 = 0; iQR0 < idx; iQR0++) {
        obj->Q->data[ia + iQR0] = 0.0;
      }

      obj->Q->data[ia + itau] = 1.0;
    }

    itau = obj->minRowCol - 1;
    MPC_fmincon_emxInit_real_T(&work, 1);
    lastv = work->size[0];
    work->size[0] = obj->Q->size[1];
    MPC_fm_emxEnsureCapacity_real_T(work, lastv);
    iQR0 = obj->Q->size[1];
    if (iQR0 - 1 >= 0) {
      memset(&work->data[0], 0, (uint32_T)iQR0 * sizeof(real_T));
    }

    for (iQR0 = obj->minRowCol; iQR0 >= 1; iQR0--) {
      iaii = (iQR0 - 1) * b_k + iQR0;
      if (iQR0 < nrows) {
        obj->Q->data[iaii - 1] = 1.0;
        lastc = (idx - iQR0) - 1;
        ia = iaii + b_k;
        if (obj->tau->data[itau] != 0.0) {
          lastv = lastc + 2;
          lastc += iaii;
          while ((lastv > 0) && (obj->Q->data[lastc] == 0.0)) {
            lastv--;
            lastc--;
          }

          lastc = nrows - iQR0;
          exitg2 = false;
          while ((!exitg2) && (lastc > 0)) {
            coltop = (lastc - 1) * b_k + ia;
            b_ia = coltop;
            do {
              exitg1 = 0;
              if (b_ia <= (coltop + lastv) - 1) {
                if (obj->Q->data[b_ia - 1] != 0.0) {
                  exitg1 = 1;
                } else {
                  b_ia++;
                }
              } else {
                lastc--;
                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        } else {
          lastv = 0;
          lastc = 0;
        }

        if (lastv > 0) {
          MPC_fmincon_xgemv_bu(lastv, lastc, obj->Q, ia, b_k, obj->Q, iaii, work);
          MPC_fmincon_xgerc(lastv, lastc, -obj->tau->data[itau], iaii, work,
                            obj->Q, ia, b_k);
        }
      }

      if (iQR0 < idx) {
        lastc = (iaii + idx) - iQR0;
        for (lastv = iaii + 1; lastv <= lastc; lastv++) {
          obj->Q->data[lastv - 1] *= -obj->tau->data[itau];
        }
      }

      obj->Q->data[iaii - 1] = 1.0 - obj->tau->data[itau];
      for (ia = 0; ia <= iQR0 - 2; ia++) {
        obj->Q->data[(iaii - ia) - 2] = 0.0;
      }

      itau--;
    }

    MPC_fmincon_emxFree_real_T(&work);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_buj(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y)
{
  int32_T b_iy;
  int32_T iyend;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T iy;
    memset(&y->data[0], 0, (uint32_T)n * sizeof(real_T));
    iy = 0;
    b = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      real_T c;
      int32_T d;
      c = 0.0;
      d = (b_iy + m) - 1;
      for (iyend = b_iy; iyend <= d; iyend++) {
        c += A->data[iyend - 1] * x->data[iyend - b_iy];
      }

      y->data[iy] += c;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_sortLambdaQP(emxArray_real_T_MPC_fmincon_T *lambda,
  int32_T WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const
  int32_T WorkingSet_isActiveIdx[6], const emxArray_int32_T_MPC_fmincon_T
  *WorkingSet_Wid, const emxArray_int32_T_MPC_fmincon_T *WorkingSet_Wlocalidx,
  emxArray_real_T_MPC_fmincon_T *workspace)
{
  int32_T currentMplier;
  if (WorkingSet_nActiveConstr != 0) {
    int32_T idxOffset;
    int32_T mAll;
    mAll = ((((WorkingSet_sizes[0] + WorkingSet_sizes[1]) + WorkingSet_sizes[3])
             + WorkingSet_sizes[4]) + WorkingSet_sizes[2]) - 1;
    for (currentMplier = 0; currentMplier <= mAll; currentMplier++) {
      workspace->data[currentMplier] = lambda->data[currentMplier];
      lambda->data[currentMplier] = 0.0;
    }

    currentMplier = 0;
    mAll = 0;
    while ((mAll + 1 <= WorkingSet_nActiveConstr) && (WorkingSet_Wid->data[mAll]
            <= 2)) {
      if (WorkingSet_Wid->data[mAll] == 1) {
        idxOffset = 1;
      } else {
        idxOffset = WorkingSet_isActiveIdx[1];
      }

      lambda->data[(idxOffset + WorkingSet_Wlocalidx->data[mAll]) - 2] =
        workspace->data[currentMplier];
      currentMplier++;
      mAll++;
    }

    while (mAll + 1 <= WorkingSet_nActiveConstr) {
      switch (WorkingSet_Wid->data[mAll]) {
       case 3:
        idxOffset = WorkingSet_isActiveIdx[2];
        break;

       case 4:
        idxOffset = WorkingSet_isActiveIdx[3];
        break;

       default:
        idxOffset = WorkingSet_isActiveIdx[4];
        break;
      }

      lambda->data[(idxOffset + WorkingSet_Wlocalidx->data[mAll]) - 2] =
        workspace->data[currentMplier];
      currentMplier++;
      mAll++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_test_exit_k(s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  int32_T runTimeOptions_MaxFunctionEvalu)
{
  real_T nlpComplErrorLSQ;
  real_T nlpComplErrorTmp;
  real_T s;
  real_T smax;
  real_T tmp;
  int32_T b_ix;
  int32_T idx_max;
  int32_T ix;
  int32_T jjA;
  int32_T mFixed;
  int32_T mLambda;
  int32_T mLambda_tmp;
  int32_T minDim;
  int32_T nVar;
  boolean_T dxTooSmall;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T isFeasible;
  nVar = WorkingSet->nVar - 1;
  mFixed = WorkingSet->sizes[0] + 1;
  mLambda_tmp = WorkingSet->sizes[0] + WorkingSet->sizes[1];
  mLambda = (((mLambda_tmp + WorkingSet->sizes[2]) + WorkingSet->sizes[3]) +
             WorkingSet->sizes[4]) - 1;
  for (minDim = 0; minDim <= mLambda; minDim++) {
    TrialState->lambdaStopTest->data[minDim] = TrialState->lambdasqp->
      data[minDim];
  }

  MPC_fmincon_computeGradLag(TrialState->gradLag, WorkingSet->ldA,
    WorkingSet->nVar, TrialState->grad, WorkingSet->sizes[2], WorkingSet->Aineq,
    WorkingSet->sizes[1], WorkingSet->Aeq, WorkingSet->indexFixed,
    WorkingSet->sizes[0], WorkingSet->indexLB, WorkingSet->sizes[3],
    WorkingSet->indexUB, WorkingSet->sizes[4], TrialState->lambdaStopTest);
  if (WorkingSet->nVar < 1) {
    idx_max = 0;
  } else {
    idx_max = 1;
    if (WorkingSet->nVar > 1) {
      smax = fabs(TrialState->grad->data[0]);
      for (minDim = 2; minDim <= nVar + 1; minDim++) {
        s = fabs(TrialState->grad->data[minDim - 1]);
        if (s > smax) {
          idx_max = minDim;
          smax = s;
        }
      }
    }
  }

  smax = fmax(1.0, fabs(TrialState->grad->data[idx_max - 1]));
  if (rtIsInf(smax)) {
    smax = 1.0;
  }

  MeritFunction->nlpPrimalFeasError = MPC_fmin_computePrimalFeasError
    (TrialState->xstarsqp, WorkingSet->sizes[2] - TrialState->mNonlinIneq,
     TrialState->mNonlinIneq, TrialState->cIneq, WorkingSet->sizes[1] -
     TrialState->mNonlinEq, TrialState->mNonlinEq, TrialState->cEq,
     WorkingSet->indexLB, WorkingSet->sizes[3], lb, WorkingSet->indexUB,
     WorkingSet->sizes[4], ub);
  if (TrialState->sqpIterations == 0) {
    MeritFunction->feasRelativeFactor = fmax(1.0,
      MeritFunction->nlpPrimalFeasError);
  }

  isFeasible = (MeritFunction->nlpPrimalFeasError <= 1.0E-6 *
                MeritFunction->feasRelativeFactor);
  MPC_fminco_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag,
    &Flags->gradOK, &MeritFunction->nlpDualFeasError);
  if (!Flags->gradOK) {
    Flags->done = true;
    if (isFeasible) {
      TrialState->sqpExitFlag = 2;
    } else {
      TrialState->sqpExitFlag = -2;
    }
  } else {
    MeritFunction->nlpComplError = MPC_fmincon_computeComplError
      (fscales_cineq_constraint, TrialState->xstarsqp, WorkingSet->sizes[2],
       TrialState->cIneq, WorkingSet->indexLB, WorkingSet->sizes[3], lb,
       WorkingSet->indexUB, WorkingSet->sizes[4], ub, TrialState->lambdaStopTest,
       mLambda_tmp + 1);
    s = fmax(MeritFunction->nlpDualFeasError, MeritFunction->nlpComplError);
    MeritFunction->firstOrderOpt = s;
    if (TrialState->sqpIterations > 1) {
      MPC_fmincon_computeGradLag_l(memspace->workspace_double, WorkingSet->ldA,
        WorkingSet->nVar, TrialState->grad, WorkingSet->sizes[2],
        WorkingSet->Aineq, WorkingSet->sizes[1], WorkingSet->Aeq,
        WorkingSet->indexFixed, WorkingSet->sizes[0], WorkingSet->indexLB,
        WorkingSet->sizes[3], WorkingSet->indexUB, WorkingSet->sizes[4],
        TrialState->lambdaStopTestPrev);
      MPC_fminco_computeDualFeasError(WorkingSet->nVar,
        memspace->workspace_double, &dxTooSmall, &nlpComplErrorLSQ);
      nlpComplErrorTmp = MPC_fmincon_computeComplError(fscales_cineq_constraint,
        TrialState->xstarsqp, WorkingSet->sizes[2], TrialState->cIneq,
        WorkingSet->indexLB, WorkingSet->sizes[3], lb, WorkingSet->indexUB,
        WorkingSet->sizes[4], ub, TrialState->lambdaStopTestPrev, mLambda_tmp +
        1);
      tmp = fmax(nlpComplErrorLSQ, nlpComplErrorTmp);
      if (tmp < s) {
        MeritFunction->nlpDualFeasError = nlpComplErrorLSQ;
        MeritFunction->nlpComplError = nlpComplErrorTmp;
        MeritFunction->firstOrderOpt = tmp;
        for (minDim = 0; minDim <= mLambda; minDim++) {
          TrialState->lambdaStopTest->data[minDim] =
            TrialState->lambdaStopTestPrev->data[minDim];
        }
      } else {
        for (minDim = 0; minDim <= mLambda; minDim++) {
          TrialState->lambdaStopTestPrev->data[minDim] =
            TrialState->lambdaStopTest->data[minDim];
        }
      }
    } else {
      for (minDim = 0; minDim <= mLambda; minDim++) {
        TrialState->lambdaStopTestPrev->data[minDim] =
          TrialState->lambdaStopTest->data[minDim];
      }
    }

    if (isFeasible && (MeritFunction->nlpDualFeasError <= 1.0E-6 * smax) &&
        (MeritFunction->nlpComplError <= 1.0E-6 * smax)) {
      Flags->done = true;
      TrialState->sqpExitFlag = 1;
    } else {
      Flags->done = false;
      if (isFeasible && (TrialState->sqpFval < -1.0E+20)) {
        Flags->done = true;
        TrialState->sqpExitFlag = -3;
      } else {
        guard1 = false;
        if (TrialState->sqpIterations > 0) {
          dxTooSmall = true;
          minDim = 0;
          exitg1 = false;
          while ((!exitg1) && (minDim <= nVar)) {
            if (1.0E-6 * fmax(1.0, fabs(TrialState->xstarsqp->data[minDim])) <=
                fabs(TrialState->delta_x->data[minDim])) {
              dxTooSmall = false;
              exitg1 = true;
            } else {
              minDim++;
            }
          }

          if (dxTooSmall) {
            if (!isFeasible) {
              if (Flags->stepType != 2) {
                Flags->stepType = 2;
                Flags->failedLineSearch = false;
                Flags->stepAccepted = false;
                guard1 = true;
              } else {
                Flags->done = true;
                TrialState->sqpExitFlag = -2;
              }
            } else {
              ix = WorkingSet->nActiveConstr - 1;
              if (WorkingSet->nActiveConstr > 0) {
                if (TrialState->mNonlinEq + TrialState->mNonlinIneq > 0) {
                  MPC_fm_updateWorkingSetForNewQP(TrialState->xstarsqp,
                    WorkingSet, WorkingSet->sizes[2], TrialState->mNonlinIneq,
                    TrialState->cIneq, WorkingSet->sizes[1],
                    TrialState->mNonlinEq, TrialState->cEq, WorkingSet->sizes[3],
                    lb, WorkingSet->sizes[4], ub, WorkingSet->sizes[0]);
                }

                for (minDim = 0; minDim <= ix; minDim++) {
                  TrialState->lambda->data[minDim] = 0.0;
                }

                minDim = WorkingSet->nVar * WorkingSet->nActiveConstr;
                guard2 = false;
                if (minDim > 0) {
                  for (minDim = 0; minDim <= ix; minDim++) {
                    jjA = WorkingSet->ldA * minDim;
                    b_ix = QRManager->ldq * minDim;
                    for (idx_max = 0; idx_max <= nVar; idx_max++) {
                      QRManager->QR->data[b_ix + idx_max] = WorkingSet->
                        ATwset->data[idx_max + jjA];
                    }
                  }

                  guard2 = true;
                } else if (minDim == 0) {
                  QRManager->mrows = WorkingSet->nVar;
                  QRManager->ncols = WorkingSet->nActiveConstr;
                  QRManager->minRowCol = 0;
                } else {
                  guard2 = true;
                }

                if (guard2) {
                  QRManager->usedPivoting = true;
                  QRManager->mrows = WorkingSet->nVar;
                  QRManager->ncols = WorkingSet->nActiveConstr;
                  if (WorkingSet->nVar <= WorkingSet->nActiveConstr) {
                    QRManager->minRowCol = WorkingSet->nVar;
                  } else {
                    QRManager->minRowCol = WorkingSet->nActiveConstr;
                  }

                  MPC_fmincon_xgeqp3(QRManager->QR, WorkingSet->nVar,
                                     WorkingSet->nActiveConstr, QRManager->jpvt,
                                     QRManager->tau);
                }

                MPC_fmincon_computeQ_(QRManager, QRManager->mrows);
                MPC_fmincon_xgemv_buj(WorkingSet->nVar, WorkingSet->nVar,
                                      QRManager->Q, QRManager->ldq,
                                      TrialState->grad,
                                      memspace->workspace_double);
                if (WorkingSet->nVar >= WorkingSet->nActiveConstr) {
                  minDim = WorkingSet->nVar;
                } else {
                  minDim = WorkingSet->nActiveConstr;
                }

                s = fmin(1.4901161193847656E-8, (real_T)minDim *
                         2.2204460492503131E-16) * fabs(QRManager->QR->data[0]);
                if (WorkingSet->nVar <= WorkingSet->nActiveConstr) {
                  idx_max = WorkingSet->nVar;
                } else {
                  idx_max = WorkingSet->nActiveConstr;
                }

                ix = 0;
                nVar = 0;
                while ((ix < idx_max) && (fabs(QRManager->QR->data[nVar]) > s))
                {
                  ix++;
                  nVar = (nVar + QRManager->ldq) + 1;
                }

                if (ix != 0) {
                  for (nVar = ix; nVar >= 1; nVar--) {
                    jjA = ((nVar - 1) * QRManager->ldq + nVar) - 2;
                    memspace->workspace_double->data[nVar - 1] /= QRManager->
                      QR->data[jjA + 1];
                    for (minDim = 0; minDim <= nVar - 2; minDim++) {
                      b_ix = (nVar - minDim) - 2;
                      memspace->workspace_double->data[b_ix] -=
                        memspace->workspace_double->data[nVar - 1] *
                        QRManager->QR->data[jjA - minDim];
                    }
                  }
                }

                if (WorkingSet->nActiveConstr <= idx_max) {
                  minDim = WorkingSet->nActiveConstr;
                } else {
                  minDim = idx_max;
                }

                for (nVar = 0; nVar < minDim; nVar++) {
                  TrialState->lambda->data[QRManager->jpvt->data[nVar] - 1] =
                    memspace->workspace_double->data[nVar];
                }

                for (nVar = mFixed; nVar <= mLambda_tmp; nVar++) {
                  TrialState->lambda->data[nVar - 1] = -TrialState->lambda->
                    data[nVar - 1];
                }

                MPC_fmincon_sortLambdaQP(TrialState->lambda,
                  WorkingSet->nActiveConstr, WorkingSet->sizes,
                  WorkingSet->isActiveIdx, WorkingSet->Wid,
                  WorkingSet->Wlocalidx, memspace->workspace_double);
                MPC_fmincon_computeGradLag_l(memspace->workspace_double,
                  WorkingSet->ldA, WorkingSet->nVar, TrialState->grad,
                  WorkingSet->sizes[2], WorkingSet->Aineq, WorkingSet->sizes[1],
                  WorkingSet->Aeq, WorkingSet->indexFixed, WorkingSet->sizes[0],
                  WorkingSet->indexLB, WorkingSet->sizes[3], WorkingSet->indexUB,
                  WorkingSet->sizes[4], TrialState->lambda);
                MPC_fminco_computeDualFeasError(WorkingSet->nVar,
                  memspace->workspace_double, &isFeasible, &s);
                nlpComplErrorLSQ = MPC_fmincon_computeComplError
                  (fscales_cineq_constraint, TrialState->xstarsqp,
                   WorkingSet->sizes[2], TrialState->cIneq, WorkingSet->indexLB,
                   WorkingSet->sizes[3], lb, WorkingSet->indexUB,
                   WorkingSet->sizes[4], ub, TrialState->lambda,
                   WorkingSet->sizes[0] + 1);
                if ((s <= 1.0E-6 * smax) && (nlpComplErrorLSQ <= 1.0E-6 * smax))
                {
                  MeritFunction->nlpDualFeasError = s;
                  MeritFunction->nlpComplError = nlpComplErrorLSQ;
                  MeritFunction->firstOrderOpt = fmax(s, nlpComplErrorLSQ);
                  for (mFixed = 0; mFixed <= mLambda; mFixed++) {
                    TrialState->lambdaStopTest->data[mFixed] =
                      TrialState->lambda->data[mFixed];
                  }

                  Flags->done = true;
                  TrialState->sqpExitFlag = 1;
                } else {
                  Flags->done = true;
                  TrialState->sqpExitFlag = 2;
                }
              } else {
                Flags->done = true;
                TrialState->sqpExitFlag = 2;
              }
            }
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          if (TrialState->sqpIterations >= 100) {
            Flags->done = true;
            TrialState->sqpExitFlag = 0;
          } else if (TrialState->FunctionEvaluations >=
                     runTimeOptions_MaxFunctionEvalu) {
            Flags->done = true;
            TrialState->sqpExitFlag = 0;
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T MPC_fmincon_BFGSUpdate(int32_T nvar,
  emxArray_real_T_MPC_fmincon_T *Bk, const emxArray_real_T_MPC_fmincon_T *sk,
  emxArray_real_T_MPC_fmincon_T *yk, emxArray_real_T_MPC_fmincon_T *workspace)
{
  real_T curvatureS;
  real_T dotSY;
  int32_T b_ixlast;
  int32_T b_jA;
  int32_T c;
  int32_T ix;
  int32_T jy;
  int32_T ldBk;
  boolean_T success;
  ldBk = Bk->size[0];
  dotSY = 0.0;
  if (nvar >= 1) {
    for (b_ixlast = 0; b_ixlast < nvar; b_ixlast++) {
      dotSY += sk->data[b_ixlast] * yk->data[b_ixlast];
    }
  }

  if (nvar != 0) {
    memset(&workspace->data[0], 0, (uint32_T)nvar * sizeof(real_T));
    ix = 0;
    jy = (nvar - 1) * Bk->size[0] + 1;
    for (b_ixlast = 1; ldBk < 0 ? b_ixlast >= jy : b_ixlast <= jy; b_ixlast +=
         ldBk) {
      c = (b_ixlast + nvar) - 1;
      for (b_jA = b_ixlast; b_jA <= c; b_jA++) {
        int32_T tmp;
        tmp = b_jA - b_ixlast;
        workspace->data[tmp] += Bk->data[b_jA - 1] * sk->data[ix];
      }

      ix++;
    }
  }

  curvatureS = 0.0;
  if (nvar >= 1) {
    for (ix = 0; ix < nvar; ix++) {
      curvatureS += workspace->data[ix] * sk->data[ix];
    }
  }

  if (dotSY < 0.2 * curvatureS) {
    dotSY = 0.8 * curvatureS / (curvatureS - dotSY);
    for (b_ixlast = 0; b_ixlast < nvar; b_ixlast++) {
      yk->data[b_ixlast] *= dotSY;
    }

    if ((nvar >= 1) && (!(1.0 - dotSY == 0.0))) {
      for (ix = 0; ix < nvar; ix++) {
        yk->data[ix] += (1.0 - dotSY) * workspace->data[ix];
      }
    }

    dotSY = 0.0;
    if (nvar >= 1) {
      for (b_ixlast = 0; b_ixlast < nvar; b_ixlast++) {
        dotSY += sk->data[b_ixlast] * yk->data[b_ixlast];
      }
    }
  }

  success = ((curvatureS > 2.2204460492503131E-16) && (dotSY >
              2.2204460492503131E-16));
  if (success) {
    curvatureS = -1.0 / curvatureS;
    if (!(curvatureS == 0.0)) {
      ix = 1;
      for (b_ixlast = 0; b_ixlast < nvar; b_ixlast++) {
        if (workspace->data[b_ixlast] != 0.0) {
          real_T temp;
          temp = workspace->data[b_ixlast] * curvatureS;
          c = nvar + ix;
          for (b_jA = ix; b_jA < c; b_jA++) {
            Bk->data[b_jA - 1] += workspace->data[b_jA - ix] * temp;
          }
        }

        ix += ldBk;
      }
    }

    dotSY = 1.0 / dotSY;
    if (!(dotSY == 0.0)) {
      b_jA = 1;
      for (ix = 0; ix < nvar; ix++) {
        curvatureS = yk->data[ix];
        if (curvatureS != 0.0) {
          curvatureS *= dotSY;
          jy = nvar + b_jA;
          for (b_ixlast = b_jA; b_ixlast < jy; b_ixlast++) {
            Bk->data[b_ixlast - 1] += yk->data[b_ixlast - b_jA] * curvatureS;
          }
        }

        b_jA += ldBk;
      }
    }
  }

  return success;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bujmjslzp1(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y)
{
  int32_T ia;
  int32_T iac;
  if (m != 0) {
    int32_T b;
    int32_T iy;
    iy = 0;
    b = (n - 1) * lda + 1;
    for (iac = 1; lda < 0 ? iac >= b : iac <= b; iac += lda) {
      real_T c;
      int32_T d;
      c = 0.0;
      d = (iac + m) - 1;
      for (ia = iac; ia <= d; ia++) {
        c += A->data[ia - 1] * x->data[ia - iac];
      }

      y->data[iy] += c;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_countsort(emxArray_int32_T_MPC_fmincon_T *x, int32_T
  xLen, emxArray_int32_T_MPC_fmincon_T *workspace, int32_T xMin, int32_T xMax)
{
  int32_T idxEnd_tmp;
  int32_T idxStart;
  int32_T maxOffset;
  if ((xLen > 1) && (xMax > xMin)) {
    int32_T idxEnd;
    int32_T maxOffset_tmp;
    idxEnd_tmp = xMax - xMin;
    if (idxEnd_tmp >= 0) {
      memset(&workspace->data[0], 0, (uint32_T)(idxEnd_tmp + 1) * sizeof(int32_T));
    }

    maxOffset_tmp = idxEnd_tmp - 1;
    for (idxStart = 0; idxStart < xLen; idxStart++) {
      idxEnd = x->data[idxStart] - xMin;
      workspace->data[idxEnd]++;
    }

    for (idxStart = 2; idxStart <= maxOffset_tmp + 2; idxStart++) {
      workspace->data[idxStart - 1] += workspace->data[idxStart - 2];
    }

    idxStart = 1;
    idxEnd = workspace->data[0];
    for (maxOffset = 0; maxOffset <= maxOffset_tmp; maxOffset++) {
      for (idxEnd_tmp = idxStart; idxEnd_tmp <= idxEnd; idxEnd_tmp++) {
        x->data[idxEnd_tmp - 1] = maxOffset + xMin;
      }

      idxStart = workspace->data[maxOffset] + 1;
      idxEnd = workspace->data[maxOffset + 1];
    }

    for (maxOffset = idxStart; maxOffset <= idxEnd; maxOffset++) {
      x->data[maxOffset - 1] = xMax;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_removeConstr(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T idx_global)
{
  int32_T TYPE_tmp;
  int32_T b;
  int32_T idx;
  TYPE_tmp = obj->Wid->data[idx_global - 1] - 1;
  obj->isActiveConstr->data[(obj->isActiveIdx[TYPE_tmp] + obj->Wlocalidx->
    data[idx_global - 1]) - 2] = false;
  obj->Wid->data[idx_global - 1] = obj->Wid->data[obj->nActiveConstr - 1];
  obj->Wlocalidx->data[idx_global - 1] = obj->Wlocalidx->data[obj->nActiveConstr
    - 1];
  b = obj->nVar;
  for (idx = 0; idx < b; idx++) {
    obj->ATwset->data[idx + obj->ldA * (idx_global - 1)] = obj->ATwset->data
      [(obj->nActiveConstr - 1) * obj->ldA + idx];
  }

  obj->bwset->data[idx_global - 1] = obj->bwset->data[obj->nActiveConstr - 1];
  obj->nActiveConstr--;
  obj->nWConstr[TYPE_tmp]--;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_factorQR(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *obj, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T mrows, int32_T ncols, int32_T ldA)
{
  int32_T idx;
  int32_T ix0;
  int32_T iy0;
  int32_T minmana;
  boolean_T guard1;
  ix0 = mrows * ncols;
  guard1 = false;
  if (ix0 > 0) {
    for (idx = 0; idx < ncols; idx++) {
      ix0 = ldA * idx;
      iy0 = obj->ldq * idx;
      for (minmana = 0; minmana < mrows; minmana++) {
        obj->QR->data[iy0 + minmana] = A->data[minmana + ix0];
      }
    }

    guard1 = true;
  } else if (ix0 == 0) {
    obj->mrows = mrows;
    obj->ncols = ncols;
    obj->minRowCol = 0;
  } else {
    guard1 = true;
  }

  if (guard1) {
    obj->usedPivoting = false;
    obj->mrows = mrows;
    obj->ncols = ncols;
    for (idx = 0; idx < ncols; idx++) {
      obj->jpvt->data[idx] = idx + 1;
    }

    if (mrows <= ncols) {
      idx = mrows;
    } else {
      idx = ncols;
    }

    obj->minRowCol = idx;
    if (obj->QR->size[0] <= obj->QR->size[1]) {
      minmana = obj->QR->size[0];
    } else {
      minmana = obj->QR->size[1];
    }

    ix0 = obj->tau->size[0];
    obj->tau->size[0] = minmana;
    MPC_fm_emxEnsureCapacity_real_T(obj->tau, ix0);
    for (ix0 = 0; ix0 < minmana; ix0++) {
      obj->tau->data[ix0] = 0.0;
    }

    if (idx >= 1) {
      MPC_fmincon_qrf(obj->QR, mrows, ncols, idx, obj->tau);
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bujm(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y)
{
  int32_T b_iy;
  int32_T iyend;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T iy;
    for (b_iy = 0; b_iy < n; b_iy++) {
      y->data[b_iy] = -y->data[b_iy];
    }

    iy = 0;
    b = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      real_T c;
      int32_T d;
      c = 0.0;
      d = (b_iy + m) - 1;
      for (iyend = b_iy; iyend <= d; iyend++) {
        c += x->data[iyend - b_iy] * A->data[iyend - 1];
      }

      y->data[iy] += c;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bujmj(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, int32_T ix0, emxArray_real_T_MPC_fmincon_T
  *y)
{
  int32_T b_iy;
  int32_T iyend;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T iy;
    for (b_iy = 0; b_iy < n; b_iy++) {
      y->data[b_iy] = -y->data[b_iy];
    }

    iy = 0;
    b = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      real_T c;
      int32_T d;
      c = 0.0;
      d = (b_iy + m) - 1;
      for (iyend = b_iy; iyend <= d; iyend++) {
        c += x->data[((ix0 + iyend) - b_iy) - 1] * A->data[iyend - 1];
      }

      y->data[iy] += c;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmin_maxConstraintViolation(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *obj, const emxArray_real_T_MPC_fmincon_T *x, int32_T ix0)
{
  real_T obj_0;
  real_T v;
  int32_T b_mIneq;
  int32_T mEq;
  int32_T mFixed;
  int32_T mIneq;
  int32_T mLB;
  int32_T mUB;
  int32_T offsetEq2;
  mLB = obj->sizes[3] - 1;
  mUB = obj->sizes[4] - 1;
  mFixed = obj->sizes[0] - 1;
  if (obj->probType == 2) {
    v = 0.0;
    b_mIneq = obj->sizes[2] - 1;
    mIneq = obj->sizes[1] - 1;
    if (obj->Aineq->size[0] != 0) {
      for (mEq = 0; mEq <= b_mIneq; mEq++) {
        obj->maxConstrWorkspace->data[mEq] = obj->bineq->data[mEq];
      }

      MPC_fmincon_xgemv_bujmj(obj->nVarOrig, obj->sizes[2], obj->Aineq, obj->ldA,
        x, ix0, obj->maxConstrWorkspace);
      for (mEq = 0; mEq <= b_mIneq; mEq++) {
        obj->maxConstrWorkspace->data[mEq] -= x->data[((ix0 + obj->nVarOrig) +
          mEq) - 1];
        v = fmax(v, obj->maxConstrWorkspace->data[mEq]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mEq = 0; mEq <= mIneq; mEq++) {
        obj->maxConstrWorkspace->data[mEq] = obj->beq->data[mEq];
      }

      MPC_fmincon_xgemv_bujmj(obj->nVarOrig, obj->sizes[1], obj->Aeq, obj->ldA,
        x, ix0, obj->maxConstrWorkspace);
      mEq = (obj->nVarOrig + obj->sizes[2]) - 1;
      offsetEq2 = mEq + obj->sizes[1];
      for (b_mIneq = 0; b_mIneq <= mIneq; b_mIneq++) {
        obj_0 = (obj->maxConstrWorkspace->data[b_mIneq] - x->data[(ix0 + mEq) +
                 b_mIneq]) + x->data[(ix0 + offsetEq2) + b_mIneq];
        obj->maxConstrWorkspace->data[b_mIneq] = obj_0;
        v = fmax(v, fabs(obj_0));
      }
    }
  } else {
    v = 0.0;
    mIneq = obj->sizes[2] - 1;
    mEq = obj->sizes[1] - 1;
    if (obj->Aineq->size[0] != 0) {
      for (b_mIneq = 0; b_mIneq <= mIneq; b_mIneq++) {
        obj->maxConstrWorkspace->data[b_mIneq] = obj->bineq->data[b_mIneq];
      }

      MPC_fmincon_xgemv_bujmj(obj->nVar, obj->sizes[2], obj->Aineq, obj->ldA, x,
        ix0, obj->maxConstrWorkspace);
      for (b_mIneq = 0; b_mIneq <= mIneq; b_mIneq++) {
        v = fmax(v, obj->maxConstrWorkspace->data[b_mIneq]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      MPC_fmincon_xgemv_bujmj(obj->nVar, obj->sizes[1], obj->Aeq, obj->ldA, x,
        ix0, obj->maxConstrWorkspace);
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        v = fmax(v, fabs(obj->maxConstrWorkspace->data[mIneq]));
      }
    }
  }

  if (obj->sizes[3] > 0) {
    for (mIneq = 0; mIneq <= mLB; mIneq++) {
      v = fmax(v, -x->data[(ix0 + obj->indexLB->data[mIneq]) - 2] - obj->
               lb->data[obj->indexLB->data[mIneq] - 1]);
    }
  }

  if (obj->sizes[4] > 0) {
    for (mLB = 0; mLB <= mUB; mLB++) {
      v = fmax(v, x->data[(ix0 + obj->indexUB->data[mLB]) - 2] - obj->ub->
               data[obj->indexUB->data[mLB] - 1]);
    }
  }

  if (obj->sizes[0] > 0) {
    for (mUB = 0; mUB <= mFixed; mUB++) {
      v = fmax(v, fabs(x->data[(ix0 + obj->indexFixed->data[mUB]) - 2] - obj->
                       ub->data[obj->indexFixed->data[mUB] - 1]));
    }
  }

  return v;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T MPC_fmi_feasibleX0ForWorkingSet(emxArray_real_T_MPC_fmincon_T
  *workspace, emxArray_real_T_MPC_fmincon_T *xCurrent,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager)
{
  emxArray_real_T_MPC_fmincon_T *B;
  real_T c;
  real_T workingset_0;
  int32_T ar;
  int32_T exitg1;
  int32_T h;
  int32_T ix;
  int32_T iy;
  int32_T jBcol;
  int32_T ldq;
  int32_T mIneq;
  int32_T mWConstr;
  int32_T minmana;
  int32_T nVar_tmp_tmp;
  int32_T offsetEq1;
  boolean_T nonDegenerateWset;
  mWConstr = workingset->nActiveConstr - 1;
  nVar_tmp_tmp = workingset->nVar;
  nonDegenerateWset = true;
  if (workingset->nActiveConstr != 0) {
    for (jBcol = 0; jBcol <= mWConstr; jBcol++) {
      workspace->data[jBcol] = workingset->bwset->data[jBcol];
      workspace->data[jBcol + workspace->size[0]] = workingset->bwset->
        data[jBcol];
    }

    ldq = workingset->ldA;
    if ((workingset->nVar != 0) && (workingset->nActiveConstr != 0)) {
      iy = 0;
      mIneq = (workingset->nActiveConstr - 1) * workingset->ldA + 1;
      for (minmana = 1; ldq < 0 ? minmana >= mIneq : minmana <= mIneq; minmana +=
           ldq) {
        c = 0.0;
        offsetEq1 = (minmana + nVar_tmp_tmp) - 1;
        for (jBcol = minmana; jBcol <= offsetEq1; jBcol++) {
          c += workingset->ATwset->data[jBcol - 1] * xCurrent->data[jBcol -
            minmana];
        }

        workspace->data[iy] -= c;
        iy++;
      }
    }

    MPC_fmincon_emxInit_real_T(&B, 2);
    if (workingset->nActiveConstr >= workingset->nVar) {
      for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
        ldq = qrmanager->ldq * jBcol;
        for (minmana = 0; minmana <= mWConstr; minmana++) {
          qrmanager->QR->data[minmana + ldq] = workingset->ATwset->
            data[workingset->ldA * minmana + jBcol];
        }
      }

      if (workingset->nActiveConstr * workingset->nVar == 0) {
        qrmanager->mrows = workingset->nActiveConstr;
        qrmanager->ncols = workingset->nVar;
        qrmanager->minRowCol = 0;
      } else {
        qrmanager->usedPivoting = false;
        qrmanager->mrows = workingset->nActiveConstr;
        qrmanager->ncols = workingset->nVar;
        for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
          qrmanager->jpvt->data[jBcol] = jBcol + 1;
        }

        if (workingset->nActiveConstr <= workingset->nVar) {
          jBcol = workingset->nActiveConstr;
        } else {
          jBcol = workingset->nVar;
        }

        qrmanager->minRowCol = jBcol;
        mIneq = B->size[0] * B->size[1];
        B->size[0] = qrmanager->QR->size[0];
        B->size[1] = qrmanager->QR->size[1];
        MPC_fm_emxEnsureCapacity_real_T(B, mIneq);
        ldq = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        for (mIneq = 0; mIneq < ldq; mIneq++) {
          B->data[mIneq] = qrmanager->QR->data[mIneq];
        }

        if (qrmanager->QR->size[0] <= qrmanager->QR->size[1]) {
          minmana = qrmanager->QR->size[0];
        } else {
          minmana = qrmanager->QR->size[1];
        }

        mIneq = qrmanager->tau->size[0];
        qrmanager->tau->size[0] = minmana;
        MPC_fm_emxEnsureCapacity_real_T(qrmanager->tau, mIneq);
        for (mIneq = 0; mIneq < minmana; mIneq++) {
          qrmanager->tau->data[mIneq] = 0.0;
        }

        if (jBcol >= 1) {
          MPC_fmincon_qrf(B, workingset->nActiveConstr, workingset->nVar, jBcol,
                          qrmanager->tau);
        }

        mIneq = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        qrmanager->QR->size[0] = B->size[0];
        qrmanager->QR->size[1] = B->size[1];
        MPC_fm_emxEnsureCapacity_real_T(qrmanager->QR, mIneq);
        ldq = B->size[0] * B->size[1];
        for (mIneq = 0; mIneq < ldq; mIneq++) {
          qrmanager->QR->data[mIneq] = B->data[mIneq];
        }
      }

      MPC_fmincon_computeQ_(qrmanager, qrmanager->mrows);
      ldq = qrmanager->ldq;
      iy = workspace->size[0];
      mIneq = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      MPC_fm_emxEnsureCapacity_real_T(B, mIneq);
      ar = workspace->size[0] * workspace->size[1];
      if (ar - 1 >= 0) {
        memcpy(&B->data[0], &workspace->data[0], (uint32_T)ar * sizeof(real_T));
      }

      if (workingset->nVar != 0) {
        for (jBcol = 0; iy < 0 ? jBcol >= iy : jBcol <= iy; jBcol += iy) {
          mIneq = jBcol + nVar_tmp_tmp;
          for (minmana = jBcol + 1; minmana <= mIneq; minmana++) {
            workspace->data[minmana - 1] = 0.0;
          }
        }

        jBcol = -1;
        for (mIneq = 0; iy < 0 ? mIneq >= iy : mIneq <= iy; mIneq += iy) {
          minmana = -1;
          ar = mIneq + nVar_tmp_tmp;
          for (ix = mIneq + 1; ix <= ar; ix++) {
            c = 0.0;
            for (offsetEq1 = 0; offsetEq1 <= mWConstr; offsetEq1++) {
              c += qrmanager->Q->data[(offsetEq1 + minmana) + 1] * B->data
                [(offsetEq1 + jBcol) + 1];
            }

            workspace->data[ix - 1] += c;
            minmana += ldq;
          }

          jBcol += iy;
        }
      }

      for (mWConstr = 0; mWConstr < 2; mWConstr++) {
        jBcol = iy * mWConstr - 1;
        for (ix = nVar_tmp_tmp; ix >= 1; ix--) {
          minmana = (ix - 1) * ldq;
          mIneq = ix + jBcol;
          c = workspace->data[mIneq];
          if (c != 0.0) {
            workspace->data[mIneq] = c / qrmanager->QR->data[(ix + minmana) - 1];
            for (offsetEq1 = 0; offsetEq1 <= ix - 2; offsetEq1++) {
              ar = (offsetEq1 + jBcol) + 1;
              workspace->data[ar] -= qrmanager->QR->data[offsetEq1 + minmana] *
                workspace->data[mIneq];
            }
          }
        }
      }
    } else {
      MPC_fmincon_factorQR(qrmanager, workingset->ATwset, workingset->nVar,
                           workingset->nActiveConstr, workingset->ldA);
      MPC_fmincon_computeQ_(qrmanager, qrmanager->minRowCol);
      ldq = qrmanager->ldq;
      iy = workspace->size[0];
      for (mIneq = 0; mIneq < 2; mIneq++) {
        jBcol = iy * mIneq;
        for (ix = 0; ix <= mWConstr; ix++) {
          minmana = ldq * ix;
          ar = ix + jBcol;
          c = workspace->data[ar];
          for (offsetEq1 = 0; offsetEq1 < ix; offsetEq1++) {
            c -= qrmanager->QR->data[offsetEq1 + minmana] * workspace->
              data[offsetEq1 + jBcol];
          }

          workspace->data[ar] = c / qrmanager->QR->data[ix + minmana];
        }
      }

      mIneq = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      MPC_fm_emxEnsureCapacity_real_T(B, mIneq);
      ar = workspace->size[0] * workspace->size[1];
      if (ar - 1 >= 0) {
        memcpy(&B->data[0], &workspace->data[0], (uint32_T)ar * sizeof(real_T));
      }

      if (workingset->nVar != 0) {
        for (jBcol = 0; iy < 0 ? jBcol >= iy : jBcol <= iy; jBcol += iy) {
          mIneq = jBcol + nVar_tmp_tmp;
          for (minmana = jBcol + 1; minmana <= mIneq; minmana++) {
            workspace->data[minmana - 1] = 0.0;
          }
        }

        minmana = 1;
        for (ix = 0; iy < 0 ? ix >= iy : ix <= iy; ix += iy) {
          ar = -1;
          mIneq = minmana + mWConstr;
          for (offsetEq1 = minmana; offsetEq1 <= mIneq; offsetEq1++) {
            h = ix + nVar_tmp_tmp;
            for (jBcol = ix + 1; jBcol <= h; jBcol++) {
              workspace->data[jBcol - 1] += qrmanager->Q->data[(ar + jBcol) - ix]
                * B->data[offsetEq1 - 1];
            }

            ar += ldq;
          }

          minmana += iy;
        }
      }
    }

    MPC_fmincon_emxFree_real_T(&B);
    jBcol = 0;
    do {
      exitg1 = 0;
      if (jBcol <= nVar_tmp_tmp - 1) {
        c = workspace->data[jBcol];
        if (rtIsInf(c) || rtIsNaN(c)) {
          nonDegenerateWset = false;
          exitg1 = 1;
        } else {
          c = workspace->data[jBcol + workspace->size[0]];
          if (rtIsInf(c) || rtIsNaN(c)) {
            nonDegenerateWset = false;
            exitg1 = 1;
          } else {
            jBcol++;
          }
        }
      } else {
        if (nVar_tmp_tmp >= 1) {
          for (mWConstr = 0; mWConstr < nVar_tmp_tmp; mWConstr++) {
            workspace->data[mWConstr] += xCurrent->data[mWConstr];
          }
        }

        iy = workingset->sizes[3];
        ldq = workingset->sizes[4];
        mWConstr = workingset->sizes[0];
        if (workingset->probType == 2) {
          c = 0.0;
          ix = workingset->sizes[2] - 1;
          mIneq = workingset->sizes[1] - 1;
          if (workingset->Aineq->size[0] != 0) {
            for (jBcol = 0; jBcol <= ix; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                bineq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVarOrig, workingset->sizes[2],
              workingset->Aineq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            for (minmana = 0; minmana <= ix; minmana++) {
              workingset->maxConstrWorkspace->data[minmana] -= workspace->
                data[workingset->nVarOrig + minmana];
              c = fmax(c, workingset->maxConstrWorkspace->data[minmana]);
            }
          }

          if (workingset->Aeq->size[0] != 0) {
            for (jBcol = 0; jBcol <= mIneq; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                beq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVarOrig, workingset->sizes[1],
              workingset->Aeq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            offsetEq1 = workingset->nVarOrig + workingset->sizes[2];
            jBcol = offsetEq1 + workingset->sizes[1];
            for (ix = 0; ix <= mIneq; ix++) {
              workingset_0 = (workingset->maxConstrWorkspace->data[ix] -
                              workspace->data[offsetEq1 + ix]) + workspace->
                data[jBcol + ix];
              workingset->maxConstrWorkspace->data[ix] = workingset_0;
              c = fmax(c, fabs(workingset_0));
            }
          }
        } else {
          c = 0.0;
          mIneq = workingset->sizes[2] - 1;
          minmana = workingset->sizes[1] - 1;
          if (workingset->Aineq->size[0] != 0) {
            for (jBcol = 0; jBcol <= mIneq; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                bineq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVar, workingset->sizes[2],
              workingset->Aineq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            for (jBcol = 0; jBcol <= mIneq; jBcol++) {
              c = fmax(c, workingset->maxConstrWorkspace->data[jBcol]);
            }
          }

          if (workingset->Aeq->size[0] != 0) {
            for (jBcol = 0; jBcol <= minmana; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                beq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVar, workingset->sizes[1],
              workingset->Aeq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            for (jBcol = 0; jBcol <= minmana; jBcol++) {
              c = fmax(c, fabs(workingset->maxConstrWorkspace->data[jBcol]));
            }
          }
        }

        if (workingset->sizes[3] > 0) {
          for (minmana = 0; minmana < iy; minmana++) {
            c = fmax(c, -workspace->data[workingset->indexLB->data[minmana] - 1]
                     - workingset->lb->data[workingset->indexLB->data[minmana] -
                     1]);
          }
        }

        if (workingset->sizes[4] > 0) {
          for (minmana = 0; minmana < ldq; minmana++) {
            c = fmax(c, workspace->data[workingset->indexUB->data[minmana] - 1]
                     - workingset->ub->data[workingset->indexUB->data[minmana] -
                     1]);
          }
        }

        if (workingset->sizes[0] > 0) {
          for (minmana = 0; minmana < mWConstr; minmana++) {
            c = fmax(c, fabs(workspace->data[workingset->indexFixed->
                             data[minmana] - 1] - workingset->ub->
                             data[workingset->indexFixed->data[minmana] - 1]));
          }
        }

        workingset_0 = MPC_fmin_maxConstraintViolation(workingset, workspace,
          workspace->size[0] + 1);
        for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
          if ((c <= 2.2204460492503131E-16) || (c < workingset_0)) {
            xCurrent->data[jBcol] = workspace->data[jBcol];
          } else {
            xCurrent->data[jBcol] = workspace->data[workspace->size[0] + jBcol];
          }
        }

        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return nonDegenerateWset;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bujmjs(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y)
{
  int32_T b_iy;
  int32_T iyend;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T iy;
    for (b_iy = 0; b_iy < n; b_iy++) {
      y->data[b_iy] = -y->data[b_iy];
    }

    iy = 0;
    b = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      real_T c;
      int32_T d;
      c = 0.0;
      d = (b_iy + m) - 1;
      for (iyend = b_iy; iyend <= d; iyend++) {
        c += A->data[iyend - 1] * x->data[iyend - b_iy];
      }

      y->data[iy] += c;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fm_maxConstraintViolation_h(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *obj, const emxArray_real_T_MPC_fmincon_T *x)
{
  real_T obj_0;
  real_T v;
  int32_T mEq;
  int32_T mFixed;
  int32_T mIneq;
  int32_T mLB;
  int32_T mUB;
  int32_T offsetEq1;
  int32_T offsetEq2;
  mLB = obj->sizes[3] - 1;
  mUB = obj->sizes[4] - 1;
  mFixed = obj->sizes[0] - 1;
  if (obj->probType == 2) {
    v = 0.0;
    mIneq = obj->sizes[2] - 1;
    mEq = obj->sizes[1] - 1;
    if (obj->Aineq->size[0] != 0) {
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        obj->maxConstrWorkspace->data[offsetEq1] = obj->bineq->data[offsetEq1];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVarOrig, obj->sizes[2], obj->Aineq,
        obj->ldA, x, obj->maxConstrWorkspace);
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        obj->maxConstrWorkspace->data[offsetEq1] -= x->data[obj->nVarOrig +
          offsetEq1];
        v = fmax(v, obj->maxConstrWorkspace->data[offsetEq1]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVarOrig, obj->sizes[1], obj->Aeq, obj->ldA,
        x, obj->maxConstrWorkspace);
      offsetEq1 = obj->nVarOrig + obj->sizes[2];
      offsetEq2 = offsetEq1 + obj->sizes[1];
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj_0 = (obj->maxConstrWorkspace->data[mIneq] - x->data[offsetEq1 +
                 mIneq]) + x->data[offsetEq2 + mIneq];
        obj->maxConstrWorkspace->data[mIneq] = obj_0;
        v = fmax(v, fabs(obj_0));
      }
    }
  } else {
    v = 0.0;
    mIneq = obj->sizes[2] - 1;
    mEq = obj->sizes[1] - 1;
    if (obj->Aineq->size[0] != 0) {
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        obj->maxConstrWorkspace->data[offsetEq1] = obj->bineq->data[offsetEq1];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVar, obj->sizes[2], obj->Aineq, obj->ldA, x,
        obj->maxConstrWorkspace);
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        v = fmax(v, obj->maxConstrWorkspace->data[offsetEq1]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVar, obj->sizes[1], obj->Aeq, obj->ldA, x,
        obj->maxConstrWorkspace);
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        v = fmax(v, fabs(obj->maxConstrWorkspace->data[mIneq]));
      }
    }
  }

  if (obj->sizes[3] > 0) {
    for (mEq = 0; mEq <= mLB; mEq++) {
      v = fmax(v, -x->data[obj->indexLB->data[mEq] - 1] - obj->lb->data
               [obj->indexLB->data[mEq] - 1]);
    }
  }

  if (obj->sizes[4] > 0) {
    for (mLB = 0; mLB <= mUB; mLB++) {
      v = fmax(v, x->data[obj->indexUB->data[mLB] - 1] - obj->ub->data
               [obj->indexUB->data[mLB] - 1]);
    }
  }

  if (obj->sizes[0] > 0) {
    for (mUB = 0; mUB <= mFixed; mUB++) {
      v = fmax(v, fabs(x->data[obj->indexFixed->data[mUB] - 1] - obj->ub->
                       data[obj->indexFixed->data[mUB] - 1]));
    }
  }

  return v;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_PresolveWorkingSet(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *solution, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager)
{
  real_T c_tol;
  real_T qtb;
  int32_T TYPE;
  int32_T c_idxDiag;
  int32_T ix;
  int32_T iy;
  int32_T k_idx;
  int32_T mTotalWorkingEq;
  int32_T mWorkingFixed;
  int32_T nFixedConstr;
  int32_T nVar;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T okWorkingSet;
  solution->state = 82;
  nVar = workingset->nVar - 1;
  mWorkingFixed = workingset->nWConstr[0];
  mTotalWorkingEq = workingset->nWConstr[0] + workingset->nWConstr[1];
  nFixedConstr = 0;
  if (mTotalWorkingEq > 0) {
    for (nFixedConstr = 0; nFixedConstr < mTotalWorkingEq; nFixedConstr++) {
      for (TYPE = 0; TYPE <= nVar; TYPE++) {
        qrmanager->QR->data[nFixedConstr + qrmanager->ldq * TYPE] =
          workingset->ATwset->data[workingset->ldA * nFixedConstr + TYPE];
      }
    }

    nFixedConstr = mTotalWorkingEq - workingset->nVar;
    if (nFixedConstr <= 0) {
      nFixedConstr = 0;
    }

    for (TYPE = 0; TYPE <= nVar; TYPE++) {
      qrmanager->jpvt->data[TYPE] = 0;
    }

    if (mTotalWorkingEq * workingset->nVar == 0) {
      qrmanager->mrows = mTotalWorkingEq;
      qrmanager->ncols = workingset->nVar;
      qrmanager->minRowCol = 0;
    } else {
      qrmanager->usedPivoting = true;
      qrmanager->mrows = mTotalWorkingEq;
      qrmanager->ncols = workingset->nVar;
      if (mTotalWorkingEq <= workingset->nVar) {
        qrmanager->minRowCol = mTotalWorkingEq;
      } else {
        qrmanager->minRowCol = workingset->nVar;
      }

      MPC_fmincon_xgeqp3(qrmanager->QR, mTotalWorkingEq, workingset->nVar,
                         qrmanager->jpvt, qrmanager->tau);
    }

    c_tol = 100.0 * (real_T)workingset->nVar * 2.2204460492503131E-16;
    if (workingset->nVar <= mTotalWorkingEq) {
      TYPE = workingset->nVar;
    } else {
      TYPE = mTotalWorkingEq;
    }

    c_idxDiag = (TYPE - 1) * qrmanager->ldq + TYPE;
    while ((c_idxDiag > 0) && (fabs(qrmanager->QR->data[c_idxDiag - 1]) < c_tol))
    {
      c_idxDiag = (c_idxDiag - qrmanager->ldq) - 1;
      nFixedConstr++;
    }

    if (nFixedConstr > 0) {
      MPC_fmincon_computeQ_(qrmanager, qrmanager->mrows);
      k_idx = 0;
      exitg1 = false;
      while ((!exitg1) && (k_idx <= nFixedConstr - 1)) {
        ix = ((mTotalWorkingEq - k_idx) - 1) * qrmanager->ldq;
        qtb = 0.0;
        for (c_idxDiag = 0; c_idxDiag < mTotalWorkingEq; c_idxDiag++) {
          qtb += qrmanager->Q->data[ix + c_idxDiag] * workingset->bwset->
            data[c_idxDiag];
        }

        if (fabs(qtb) >= c_tol) {
          nFixedConstr = -1;
          exitg1 = true;
        } else {
          k_idx++;
        }
      }
    }

    if (nFixedConstr > 0) {
      for (c_idxDiag = 0; c_idxDiag < mTotalWorkingEq; c_idxDiag++) {
        ix = qrmanager->ldq * c_idxDiag;
        iy = workingset->ldA * c_idxDiag;
        for (k_idx = 0; k_idx <= nVar; k_idx++) {
          qrmanager->QR->data[ix + k_idx] = workingset->ATwset->data[k_idx + iy];
        }
      }

      for (nVar = 0; nVar < mWorkingFixed; nVar++) {
        qrmanager->jpvt->data[nVar] = 1;
      }

      nVar = workingset->nWConstr[0] + 1;
      for (mWorkingFixed = nVar; mWorkingFixed <= mTotalWorkingEq; mWorkingFixed
           ++) {
        qrmanager->jpvt->data[mWorkingFixed - 1] = 0;
      }

      if (workingset->nVar * mTotalWorkingEq == 0) {
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = mTotalWorkingEq;
        qrmanager->minRowCol = 0;
      } else {
        qrmanager->usedPivoting = true;
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = mTotalWorkingEq;
        qrmanager->minRowCol = TYPE;
        MPC_fmincon_xgeqp3(qrmanager->QR, workingset->nVar, mTotalWorkingEq,
                           qrmanager->jpvt, qrmanager->tau);
      }

      for (mWorkingFixed = 0; mWorkingFixed < nFixedConstr; mWorkingFixed++) {
        memspace->workspace_int->data[mWorkingFixed] = qrmanager->jpvt->data
          [(mTotalWorkingEq - nFixedConstr) + mWorkingFixed];
      }

      MPC_fmincon_countsort(memspace->workspace_int, nFixedConstr,
                            memspace->workspace_sort, 1, mTotalWorkingEq);
      for (mTotalWorkingEq = nFixedConstr; mTotalWorkingEq >= 1; mTotalWorkingEq
           --) {
        ix = workingset->nWConstr[0] + workingset->nWConstr[1];
        if (ix != 0) {
          nVar = memspace->workspace_int->data[mTotalWorkingEq - 1];
          if (nVar <= ix) {
            if ((ix == workingset->nActiveConstr) || (ix == nVar)) {
              workingset->mEqRemoved++;
              workingset->indexEqRemoved->data[workingset->mEqRemoved - 1] =
                workingset->Wlocalidx->data[nVar - 1];
              MPC_fmincon_removeConstr(workingset, nVar);
            } else {
              workingset->mEqRemoved++;
              TYPE = workingset->Wid->data[nVar - 1] - 1;
              workingset->indexEqRemoved->data[workingset->mEqRemoved - 1] =
                workingset->Wlocalidx->data[nVar - 1];
              workingset->isActiveConstr->data[(workingset->
                isActiveIdx[workingset->Wid->data[nVar - 1] - 1] +
                workingset->Wlocalidx->data[nVar - 1]) - 2] = false;
              workingset->Wid->data[nVar - 1] = workingset->Wid->data[ix - 1];
              workingset->Wlocalidx->data[nVar - 1] = workingset->
                Wlocalidx->data[ix - 1];
              c_idxDiag = workingset->nVar;
              for (mWorkingFixed = 0; mWorkingFixed < c_idxDiag; mWorkingFixed++)
              {
                workingset->ATwset->data[mWorkingFixed + workingset->ldA * (nVar
                  - 1)] = workingset->ATwset->data[(ix - 1) * workingset->ldA +
                  mWorkingFixed];
              }

              workingset->bwset->data[nVar - 1] = workingset->bwset->data[ix - 1];
              workingset->Wid->data[ix - 1] = workingset->Wid->data
                [workingset->nActiveConstr - 1];
              workingset->Wlocalidx->data[ix - 1] = workingset->Wlocalidx->
                data[workingset->nActiveConstr - 1];
              c_idxDiag = workingset->nVar;
              for (mWorkingFixed = 0; mWorkingFixed < c_idxDiag; mWorkingFixed++)
              {
                workingset->ATwset->data[mWorkingFixed + workingset->ldA * (ix -
                  1)] = workingset->ATwset->data[(workingset->nActiveConstr - 1)
                  * workingset->ldA + mWorkingFixed];
              }

              workingset->bwset->data[ix - 1] = workingset->bwset->
                data[workingset->nActiveConstr - 1];
              workingset->nActiveConstr--;
              workingset->nWConstr[TYPE]--;
            }
          }
        }
      }
    }
  }

  if ((nFixedConstr != -1) && (workingset->nActiveConstr <= qrmanager->ldq)) {
    nVar = workingset->nActiveConstr;
    ix = workingset->nWConstr[0] + workingset->nWConstr[1];
    mTotalWorkingEq = workingset->nVar;
    if ((workingset->nWConstr[2] + workingset->nWConstr[3]) +
        workingset->nWConstr[4] > 0) {
      c_tol = 100.0 * (real_T)workingset->nVar * 2.2204460492503131E-16;
      for (mWorkingFixed = 0; mWorkingFixed < ix; mWorkingFixed++) {
        qrmanager->jpvt->data[mWorkingFixed] = 1;
      }

      for (mWorkingFixed = ix + 1; mWorkingFixed <= nVar; mWorkingFixed++) {
        qrmanager->jpvt->data[mWorkingFixed - 1] = 0;
      }

      TYPE = workingset->nActiveConstr;
      for (mWorkingFixed = 0; mWorkingFixed < TYPE; mWorkingFixed++) {
        c_idxDiag = qrmanager->ldq * mWorkingFixed;
        k_idx = workingset->ldA * mWorkingFixed;
        for (nVar = 0; nVar < mTotalWorkingEq; nVar++) {
          qrmanager->QR->data[c_idxDiag + nVar] = workingset->ATwset->data[nVar
            + k_idx];
        }
      }

      if (workingset->nVar * workingset->nActiveConstr == 0) {
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = workingset->nActiveConstr;
        qrmanager->minRowCol = 0;
      } else {
        qrmanager->usedPivoting = true;
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = workingset->nActiveConstr;
        if (workingset->nVar <= workingset->nActiveConstr) {
          qrmanager->minRowCol = workingset->nVar;
        } else {
          qrmanager->minRowCol = workingset->nActiveConstr;
        }

        MPC_fmincon_xgeqp3(qrmanager->QR, workingset->nVar,
                           workingset->nActiveConstr, qrmanager->jpvt,
                           qrmanager->tau);
      }

      mWorkingFixed = 0;
      for (nVar = workingset->nActiveConstr - 1; nVar + 1 > mTotalWorkingEq;
           nVar--) {
        mWorkingFixed++;
        memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->jpvt->
          data[nVar];
      }

      if (nVar + 1 <= workingset->nVar) {
        mTotalWorkingEq = qrmanager->ldq * nVar + nVar;
        while ((nVar + 1 > ix) && (fabs(qrmanager->QR->data[mTotalWorkingEq]) <
                c_tol)) {
          mWorkingFixed++;
          memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->
            jpvt->data[nVar];
          nVar--;
          mTotalWorkingEq = (mTotalWorkingEq - qrmanager->ldq) - 1;
        }
      }

      MPC_fmincon_countsort(memspace->workspace_int, mWorkingFixed,
                            memspace->workspace_sort, ix + 1,
                            workingset->nActiveConstr);
      for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
        MPC_fmincon_removeConstr(workingset, memspace->workspace_int->
          data[nFixedConstr - 1]);
      }
    }

    okWorkingSet = MPC_fmi_feasibleX0ForWorkingSet(memspace->workspace_double,
      solution->xstar, workingset, qrmanager);
    guard1 = false;
    if (!okWorkingSet) {
      nVar = workingset->nActiveConstr;
      ix = workingset->nWConstr[0] + workingset->nWConstr[1];
      mTotalWorkingEq = workingset->nVar;
      if ((workingset->nWConstr[2] + workingset->nWConstr[3]) +
          workingset->nWConstr[4] > 0) {
        c_tol = 1000.0 * (real_T)workingset->nVar * 2.2204460492503131E-16;
        for (mWorkingFixed = 0; mWorkingFixed < ix; mWorkingFixed++) {
          qrmanager->jpvt->data[mWorkingFixed] = 1;
        }

        for (mWorkingFixed = ix + 1; mWorkingFixed <= nVar; mWorkingFixed++) {
          qrmanager->jpvt->data[mWorkingFixed - 1] = 0;
        }

        TYPE = workingset->nActiveConstr;
        for (mWorkingFixed = 0; mWorkingFixed < TYPE; mWorkingFixed++) {
          c_idxDiag = qrmanager->ldq * mWorkingFixed;
          k_idx = workingset->ldA * mWorkingFixed;
          for (nVar = 0; nVar < mTotalWorkingEq; nVar++) {
            qrmanager->QR->data[c_idxDiag + nVar] = workingset->ATwset->
              data[nVar + k_idx];
          }
        }

        if (workingset->nVar * workingset->nActiveConstr == 0) {
          qrmanager->mrows = workingset->nVar;
          qrmanager->ncols = workingset->nActiveConstr;
          qrmanager->minRowCol = 0;
        } else {
          qrmanager->usedPivoting = true;
          qrmanager->mrows = workingset->nVar;
          qrmanager->ncols = workingset->nActiveConstr;
          if (workingset->nVar <= workingset->nActiveConstr) {
            qrmanager->minRowCol = workingset->nVar;
          } else {
            qrmanager->minRowCol = workingset->nActiveConstr;
          }

          MPC_fmincon_xgeqp3(qrmanager->QR, workingset->nVar,
                             workingset->nActiveConstr, qrmanager->jpvt,
                             qrmanager->tau);
        }

        mWorkingFixed = 0;
        for (nVar = workingset->nActiveConstr - 1; nVar + 1 > mTotalWorkingEq;
             nVar--) {
          mWorkingFixed++;
          memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->
            jpvt->data[nVar];
        }

        if (nVar + 1 <= workingset->nVar) {
          mTotalWorkingEq = qrmanager->ldq * nVar + nVar;
          while ((nVar + 1 > ix) && (fabs(qrmanager->QR->data[mTotalWorkingEq]) <
                  c_tol)) {
            mWorkingFixed++;
            memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->
              jpvt->data[nVar];
            nVar--;
            mTotalWorkingEq = (mTotalWorkingEq - qrmanager->ldq) - 1;
          }
        }

        MPC_fmincon_countsort(memspace->workspace_int, mWorkingFixed,
                              memspace->workspace_sort, ix + 1,
                              workingset->nActiveConstr);
        for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
          MPC_fmincon_removeConstr(workingset, memspace->workspace_int->
            data[nFixedConstr - 1]);
        }
      }

      okWorkingSet = MPC_fmi_feasibleX0ForWorkingSet(memspace->workspace_double,
        solution->xstar, workingset, qrmanager);
      if (!okWorkingSet) {
        solution->state = -7;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (workingset->nWConstr[0] + workingset->nWConstr[1] == workingset->nVar)
      {
        c_tol = MPC_fm_maxConstraintViolation_h(workingset, solution->xstar);
        if (c_tol > 1.0E-6) {
          solution->state = -2;
        }
      }
    }
  } else {
    solution->state = -3;
    mTotalWorkingEq = (workingset->nWConstr[0] + workingset->nWConstr[1]) + 1;
    mWorkingFixed = workingset->nActiveConstr;
    for (nFixedConstr = mTotalWorkingEq; nFixedConstr <= mWorkingFixed;
         nFixedConstr++) {
      workingset->isActiveConstr->data[(workingset->isActiveIdx[workingset->
        Wid->data[nFixedConstr - 1] - 1] + workingset->Wlocalidx->
        data[nFixedConstr - 1]) - 2] = false;
    }

    workingset->nWConstr[2] = 0;
    workingset->nWConstr[3] = 0;
    workingset->nWConstr[4] = 0;
    workingset->nActiveConstr = workingset->nWConstr[0] + workingset->nWConstr[1];
  }
}

static void MPC_fmincon_emxCopy_real_T(emxArray_real_T_MPC_fmincon_T **dst,
  emxArray_real_T_MPC_fmincon_T * const *src)
{
  int32_T i;
  int32_T numElDst;
  int32_T numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  MPC_fm_emxEnsureCapacity_real_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void MPC_fmincon_emxCopy_int32_T(emxArray_int32_T_MPC_fmincon_T **dst,
  emxArray_int32_T_MPC_fmincon_T * const *src)
{
  int32_T i;
  int32_T numElDst;
  int32_T numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  MPC_f_emxEnsureCapacity_int32_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void MPC_fminc_emxCopyMatrix_int32_T(int32_T dst[5], const int32_T src[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    dst[i] = src[i];
  }
}

static void MPC_fmin_emxCopyMatrix_int32_T1(int32_T dst[6], const int32_T src[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    dst[i] = src[i];
  }
}

static void MPC_fmincon_emxCopy_boolean_T(emxArray_boolean_T_MPC_fminco_T **dst,
  emxArray_boolean_T_MPC_fminco_T * const *src)
{
  int32_T i;
  int32_T numElDst;
  int32_T numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  MPC_emxEnsureCapacity_boolean_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxCopyStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *dst,
  const s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *src)
{
  dst->mConstr = src->mConstr;
  dst->mConstrOrig = src->mConstrOrig;
  dst->mConstrMax = src->mConstrMax;
  dst->nVar = src->nVar;
  dst->nVarOrig = src->nVarOrig;
  dst->nVarMax = src->nVarMax;
  dst->ldA = src->ldA;
  MPC_fmincon_emxCopy_real_T(&dst->Aineq, &src->Aineq);
  MPC_fmincon_emxCopy_real_T(&dst->bineq, &src->bineq);
  MPC_fmincon_emxCopy_real_T(&dst->Aeq, &src->Aeq);
  MPC_fmincon_emxCopy_real_T(&dst->beq, &src->beq);
  MPC_fmincon_emxCopy_real_T(&dst->lb, &src->lb);
  MPC_fmincon_emxCopy_real_T(&dst->ub, &src->ub);
  MPC_fmincon_emxCopy_int32_T(&dst->indexLB, &src->indexLB);
  MPC_fmincon_emxCopy_int32_T(&dst->indexUB, &src->indexUB);
  MPC_fmincon_emxCopy_int32_T(&dst->indexFixed, &src->indexFixed);
  dst->mEqRemoved = src->mEqRemoved;
  MPC_fmincon_emxCopy_int32_T(&dst->indexEqRemoved, &src->indexEqRemoved);
  MPC_fmincon_emxCopy_real_T(&dst->ATwset, &src->ATwset);
  MPC_fmincon_emxCopy_real_T(&dst->bwset, &src->bwset);
  dst->nActiveConstr = src->nActiveConstr;
  MPC_fmincon_emxCopy_real_T(&dst->maxConstrWorkspace, &src->maxConstrWorkspace);
  MPC_fminc_emxCopyMatrix_int32_T(dst->sizes, src->sizes);
  MPC_fminc_emxCopyMatrix_int32_T(dst->sizesNormal, src->sizesNormal);
  MPC_fminc_emxCopyMatrix_int32_T(dst->sizesPhaseOne, src->sizesPhaseOne);
  MPC_fminc_emxCopyMatrix_int32_T(dst->sizesRegularized, src->sizesRegularized);
  MPC_fminc_emxCopyMatrix_int32_T(dst->sizesRegPhaseOne, src->sizesRegPhaseOne);
  MPC_fmin_emxCopyMatrix_int32_T1(dst->isActiveIdx, src->isActiveIdx);
  MPC_fmin_emxCopyMatrix_int32_T1(dst->isActiveIdxNormal, src->isActiveIdxNormal);
  MPC_fmin_emxCopyMatrix_int32_T1(dst->isActiveIdxPhaseOne,
    src->isActiveIdxPhaseOne);
  MPC_fmin_emxCopyMatrix_int32_T1(dst->isActiveIdxRegularized,
    src->isActiveIdxRegularized);
  MPC_fmin_emxCopyMatrix_int32_T1(dst->isActiveIdxRegPhaseOne,
    src->isActiveIdxRegPhaseOne);
  MPC_fmincon_emxCopy_boolean_T(&dst->isActiveConstr, &src->isActiveConstr);
  MPC_fmincon_emxCopy_int32_T(&dst->Wid, &src->Wid);
  MPC_fmincon_emxCopy_int32_T(&dst->Wlocalidx, &src->Wlocalidx);
  MPC_fminc_emxCopyMatrix_int32_T(dst->nWConstr, src->nWConstr);
  dst->probType = src->probType;
  dst->SLACK0 = src->SLACK0;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
  emxArray_real_T_MPC_fmincon_T *workspace, const emxArray_real_T_MPC_fmincon_T *
  H, const emxArray_real_T_MPC_fmincon_T *f, const emxArray_real_T_MPC_fmincon_T
  *x)
{
  int32_T beta1;
  int32_T iyend;
  beta1 = 0;
  if (obj_hasLinear) {
    if (obj_nvar - 1 >= 0) {
      memcpy(&workspace->data[0], &f->data[0], (uint32_T)obj_nvar * sizeof
             (real_T));
    }

    beta1 = 1;
  }

  if (obj_nvar != 0) {
    int32_T d;
    int32_T ix;
    if (beta1 != 1) {
      memset(&workspace->data[0], 0, (uint32_T)obj_nvar * sizeof(real_T));
    }

    ix = 0;
    d = (obj_nvar - 1) * obj_nvar + 1;
    for (iyend = 1; obj_nvar < 0 ? iyend >= d : iyend <= d; iyend += obj_nvar) {
      real_T c;
      int32_T e;
      c = 0.5 * x->data[ix];
      e = (iyend + obj_nvar) - 1;
      for (beta1 = iyend; beta1 <= e; beta1++) {
        int32_T tmp;
        tmp = beta1 - iyend;
        workspace->data[tmp] += H->data[beta1 - 1] * c;
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmincon_computeFval(const s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *obj,
  emxArray_real_T_MPC_fmincon_T *workspace, const emxArray_real_T_MPC_fmincon_T *
  H, const emxArray_real_T_MPC_fmincon_T *f, const emxArray_real_T_MPC_fmincon_T
  *x)
{
  real_T val;
  int32_T b_ixlast;
  int32_T b_ixlast_tmp_tmp;
  int32_T idx;
  switch (obj->objtype) {
   case 5:
    val = x->data[obj->nvar - 1] * obj->gammaScalar;
    break;

   case 3:
    MPC_fmincon_linearForm_(obj->hasLinear, obj->nvar, workspace, H, f, x);
    val = 0.0;
    if (obj->nvar >= 1) {
      b_ixlast = obj->nvar;
      for (idx = 0; idx < b_ixlast; idx++) {
        val += workspace->data[idx] * x->data[idx];
      }
    }
    break;

   default:
    MPC_fmincon_linearForm_(obj->hasLinear, obj->nvar, workspace, H, f, x);
    b_ixlast = obj->nvar + 1;
    b_ixlast_tmp_tmp = obj->maxVar - 1;
    for (idx = b_ixlast; idx <= b_ixlast_tmp_tmp; idx++) {
      workspace->data[idx - 1] = 0.5 * obj->beta * x->data[idx - 1] + obj->rho;
    }

    val = 0.0;
    if (obj->maxVar - 1 >= 1) {
      b_ixlast = obj->maxVar;
      for (idx = 0; idx <= b_ixlast - 2; idx++) {
        val += workspace->data[idx] * x->data[idx];
      }
    }
    break;
  }

  return val;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bujmjsl(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y)
{
  int32_T b_iy;
  int32_T iyend;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T ix;
    memset(&y->data[0], 0, (uint32_T)m * sizeof(real_T));
    ix = 0;
    b = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      int32_T c;
      c = (b_iy + m) - 1;
      for (iyend = b_iy; iyend <= c; iyend++) {
        int32_T tmp;
        tmp = iyend - b_iy;
        y->data[tmp] += A->data[iyend - 1] * x->data[ix];
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_computeGrad_StoreHx(s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *obj,
  const emxArray_real_T_MPC_fmincon_T *H, const emxArray_real_T_MPC_fmincon_T *f,
  const emxArray_real_T_MPC_fmincon_T *x)
{
  int32_T b_ixlast;
  int32_T iy;
  int32_T maxRegVar;
  switch (obj->objtype) {
   case 5:
    b_ixlast = obj->nvar;
    for (maxRegVar = 0; maxRegVar <= b_ixlast - 2; maxRegVar++) {
      obj->grad->data[maxRegVar] = 0.0;
    }

    obj->grad->data[obj->nvar - 1] = obj->gammaScalar;
    break;

   case 3:
    MPC_fmincon_xgemv_bujmjsl(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
    b_ixlast = obj->nvar;
    for (maxRegVar = 0; maxRegVar < b_ixlast; maxRegVar++) {
      obj->grad->data[maxRegVar] = obj->Hx->data[maxRegVar];
    }

    if (obj->hasLinear && (obj->nvar >= 1)) {
      b_ixlast = obj->nvar - 1;
      for (maxRegVar = 0; maxRegVar <= b_ixlast; maxRegVar++) {
        obj->grad->data[maxRegVar] += f->data[maxRegVar];
      }
    }
    break;

   default:
    maxRegVar = obj->maxVar - 1;
    MPC_fmincon_xgemv_bujmjsl(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
    iy = obj->nvar + 1;
    for (b_ixlast = iy; b_ixlast <= maxRegVar; b_ixlast++) {
      obj->Hx->data[b_ixlast - 1] = x->data[b_ixlast - 1] * obj->beta;
    }

    for (b_ixlast = 0; b_ixlast < maxRegVar; b_ixlast++) {
      obj->grad->data[b_ixlast] = obj->Hx->data[b_ixlast];
    }

    if (obj->hasLinear && (obj->nvar >= 1)) {
      b_ixlast = obj->nvar - 1;
      for (maxRegVar = 0; maxRegVar <= b_ixlast; maxRegVar++) {
        obj->grad->data[maxRegVar] += f->data[maxRegVar];
      }
    }

    b_ixlast = (obj->maxVar - obj->nvar) - 1;
    if (b_ixlast >= 1) {
      for (maxRegVar = 0; maxRegVar < b_ixlast; maxRegVar++) {
        iy = obj->nvar + maxRegVar;
        obj->grad->data[iy] += obj->rho;
      }
    }
    break;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmincon_computeFval_ReuseHx(const
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *obj, emxArray_real_T_MPC_fmincon_T *workspace,
  const emxArray_real_T_MPC_fmincon_T *f, const emxArray_real_T_MPC_fmincon_T *x)
{
  real_T val;
  int32_T b_ixlast;
  int32_T ixlast;
  int32_T maxRegVar;
  switch (obj->objtype) {
   case 5:
    val = x->data[obj->nvar - 1] * obj->gammaScalar;
    break;

   case 3:
    if (obj->hasLinear) {
      ixlast = obj->nvar;
      for (maxRegVar = 0; maxRegVar < ixlast; maxRegVar++) {
        workspace->data[maxRegVar] = 0.5 * obj->Hx->data[maxRegVar] + f->
          data[maxRegVar];
      }

      val = 0.0;
      if (obj->nvar >= 1) {
        b_ixlast = obj->nvar;
        for (maxRegVar = 0; maxRegVar < b_ixlast; maxRegVar++) {
          val += workspace->data[maxRegVar] * x->data[maxRegVar];
        }
      }
    } else {
      val = 0.0;
      if (obj->nvar >= 1) {
        ixlast = obj->nvar;
        for (maxRegVar = 0; maxRegVar < ixlast; maxRegVar++) {
          val += x->data[maxRegVar] * obj->Hx->data[maxRegVar];
        }
      }

      val *= 0.5;
    }
    break;

   default:
    maxRegVar = obj->maxVar - 1;
    if (obj->hasLinear) {
      if (obj->nvar - 1 >= 0) {
        memcpy(&workspace->data[0], &f->data[0], (uint32_T)obj->nvar * sizeof
               (real_T));
      }

      b_ixlast = obj->maxVar - obj->nvar;
      for (ixlast = 0; ixlast <= b_ixlast - 2; ixlast++) {
        workspace->data[obj->nvar + ixlast] = obj->rho;
      }

      for (b_ixlast = 0; b_ixlast < maxRegVar; b_ixlast++) {
        workspace->data[b_ixlast] += 0.5 * obj->Hx->data[b_ixlast];
      }

      val = 0.0;
      if (obj->maxVar - 1 >= 1) {
        b_ixlast = obj->maxVar;
        for (maxRegVar = 0; maxRegVar <= b_ixlast - 2; maxRegVar++) {
          val += workspace->data[maxRegVar] * x->data[maxRegVar];
        }
      }
    } else {
      val = 0.0;
      if (obj->maxVar - 1 >= 1) {
        b_ixlast = obj->maxVar;
        for (ixlast = 0; ixlast <= b_ixlast - 2; ixlast++) {
          val += x->data[ixlast] * obj->Hx->data[ixlast];
        }
      }

      val *= 0.5;
      b_ixlast = obj->nvar + 1;
      for (ixlast = b_ixlast; ixlast <= maxRegVar; ixlast++) {
        val += x->data[ixlast - 1] * obj->rho;
      }
    }
    break;
  }

  return val;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T roe;
  real_T scale;
  roe = *b;
  absa = fabs(*a);
  absb = fabs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *a = 0.0;
    *b = 0.0;
  } else {
    real_T ads;
    real_T bds;
    ads = absa / scale;
    bds = absb / scale;
    scale *= sqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (absa > absb) {
      *b = *s;
    } else if (*c != 0.0) {
      *b = 1.0 / *c;
    } else {
      *b = 1.0;
    }

    *a = scale;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_deleteColMoveEnd(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *obj,
  int32_T idx)
{
  real_T b_s;
  real_T b_temp;
  real_T c_c;
  int32_T QRk0;
  int32_T b_ix;
  int32_T b_temp_tmp;
  int32_T b_temp_tmp_0;
  int32_T e;
  int32_T endIdx;
  int32_T i;
  int32_T idxRotGCol;
  int32_T ix;
  if (obj->usedPivoting) {
    i = 1;
    while ((i <= obj->ncols) && (obj->jpvt->data[i - 1] != idx)) {
      i++;
    }

    idx = i;
  }

  if (idx >= obj->ncols) {
    obj->ncols--;
  } else {
    obj->jpvt->data[idx - 1] = obj->jpvt->data[obj->ncols - 1];
    e = obj->minRowCol;
    for (endIdx = 0; endIdx < e; endIdx++) {
      obj->QR->data[endIdx + obj->ldq * (idx - 1)] = obj->QR->data[(obj->ncols -
        1) * obj->ldq + endIdx];
    }

    obj->ncols--;
    if (obj->mrows <= obj->ncols) {
      obj->minRowCol = obj->mrows;
    } else {
      obj->minRowCol = obj->ncols;
    }

    if (idx < obj->mrows) {
      if (obj->mrows - 1 <= obj->ncols) {
        endIdx = obj->mrows - 1;
      } else {
        endIdx = obj->ncols;
      }

      e = endIdx;
      idxRotGCol = (idx - 1) * obj->ldq;
      while (e >= idx) {
        b_temp_tmp = e + idxRotGCol;
        b_temp = obj->QR->data[b_temp_tmp];
        MPC_fmincon_xrotg(&obj->QR->data[b_temp_tmp - 1], &b_temp, &c_c, &b_s);
        obj->QR->data[b_temp_tmp] = b_temp;
        obj->QR->data[e + obj->ldq * (e - 1)] = 0.0;
        QRk0 = obj->ldq * idx + e;
        b_ix = obj->ncols - idx;
        if (b_ix >= 1) {
          ix = QRk0 - 1;
          for (i = 0; i < b_ix; i++) {
            b_temp = obj->QR->data[ix] * c_c + obj->QR->data[QRk0] * b_s;
            obj->QR->data[QRk0] = obj->QR->data[QRk0] * c_c - obj->QR->data[ix] *
              b_s;
            obj->QR->data[ix] = b_temp;
            QRk0 += obj->ldq;
            ix += obj->ldq;
          }
        }

        i = (e - 1) * obj->ldq;
        QRk0 = obj->mrows;
        if (obj->mrows >= 1) {
          ix = obj->ldq + i;
          for (b_ix = 0; b_ix < QRk0; b_ix++) {
            b_temp_tmp = ix + b_ix;
            b_temp_tmp_0 = i + b_ix;
            b_temp = obj->Q->data[b_temp_tmp_0] * c_c + obj->Q->data[b_temp_tmp]
              * b_s;
            obj->Q->data[b_temp_tmp] = obj->Q->data[b_temp_tmp] * c_c - obj->
              Q->data[b_temp_tmp_0] * b_s;
            obj->Q->data[b_temp_tmp_0] = b_temp;
          }
        }

        e--;
      }

      for (e = idx + 1; e <= endIdx; e++) {
        ix = (e - 1) * obj->ldq;
        b_temp_tmp = e + ix;
        b_temp = obj->QR->data[b_temp_tmp];
        MPC_fmincon_xrotg(&obj->QR->data[b_temp_tmp - 1], &b_temp, &c_c, &b_s);
        obj->QR->data[b_temp_tmp] = b_temp;
        QRk0 = (obj->ldq + 1) * e;
        i = obj->ncols - e;
        if (i >= 1) {
          b_ix = QRk0 - 1;
          for (idxRotGCol = 0; idxRotGCol < i; idxRotGCol++) {
            b_temp = obj->QR->data[b_ix] * c_c + obj->QR->data[QRk0] * b_s;
            obj->QR->data[QRk0] = obj->QR->data[QRk0] * c_c - obj->QR->data[b_ix]
              * b_s;
            obj->QR->data[b_ix] = b_temp;
            QRk0 += obj->ldq;
            b_ix += obj->ldq;
          }
        }

        idxRotGCol = obj->mrows;
        if (obj->mrows >= 1) {
          b_ix = obj->ldq + ix;
          for (i = 0; i < idxRotGCol; i++) {
            b_temp_tmp = b_ix + i;
            b_temp_tmp_0 = ix + i;
            b_temp = obj->Q->data[b_temp_tmp_0] * c_c + obj->Q->data[b_temp_tmp]
              * b_s;
            obj->Q->data[b_temp_tmp] = obj->Q->data[b_temp_tmp] * c_c - obj->
              Q->data[b_temp_tmp_0] * b_s;
            obj->Q->data[b_temp_tmp_0] = b_temp;
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemm(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *B, int32_T ib0, int32_T ldb,
  emxArray_real_T_MPC_fmincon_T *C, int32_T ldc)
{
  int32_T b;
  int32_T cr;
  int32_T ic;
  if ((m != 0) && (n != 0)) {
    int32_T br;
    int32_T lastColC;
    br = ib0;
    lastColC = (n - 1) * ldc;
    for (cr = 0; ldc < 0 ? cr >= lastColC : cr <= lastColC; cr += ldc) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C->data[ic - 1] = 0.0;
      }
    }

    for (cr = 0; ldc < 0 ? cr >= lastColC : cr <= lastColC; cr += ldc) {
      int32_T ar;
      int32_T c;
      ar = -1;
      c = br + k;
      for (ic = br; ic < c; ic++) {
        int32_T d;
        d = cr + m;
        for (b = cr + 1; b <= d; b++) {
          C->data[b - 1] += A->data[(ar + b) - cr] * B->data[ic - 1];
        }

        ar += lda;
      }

      br += ldb;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemm_b(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *B, int32_T ldb, emxArray_real_T_MPC_fmincon_T
  *C, int32_T ldc)
{
  int32_T b;
  int32_T cr;
  int32_T ic;
  if ((m != 0) && (n != 0)) {
    int32_T br;
    int32_T lastColC;
    lastColC = (n - 1) * ldc;
    for (cr = 0; ldc < 0 ? cr >= lastColC : cr <= lastColC; cr += ldc) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C->data[ic - 1] = 0.0;
      }
    }

    br = -1;
    for (cr = 0; ldc < 0 ? cr >= lastColC : cr <= lastColC; cr += ldc) {
      int32_T ar;
      int32_T c;
      ar = ia0;
      c = cr + m;
      for (ic = cr + 1; ic <= c; ic++) {
        real_T temp;
        temp = 0.0;
        for (b = 0; b < k; b++) {
          temp += A->data[(b + ar) - 1] * B->data[(b + br) + 1];
        }

        C->data[ic - 1] += temp;
        ar += lda;
      }

      br += ldb;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_fullColLDL2_(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  int32_T LD_offset, int32_T NColsRemain)
{
  int32_T LDimSizeP1;
  int32_T b_k;
  int32_T ijA;
  int32_T k;
  int32_T subMatrixDim;
  LDimSizeP1 = obj->ldm;
  for (k = 0; k < NColsRemain; k++) {
    real_T alpha1;
    real_T y;
    int32_T LD_diagOffset;
    LD_diagOffset = (LDimSizeP1 + 1) * k + LD_offset;
    alpha1 = -1.0 / obj->FMat->data[LD_diagOffset - 1];
    subMatrixDim = (NColsRemain - k) - 2;
    for (b_k = 0; b_k <= subMatrixDim; b_k++) {
      obj->workspace_ = obj->FMat->data[LD_diagOffset + b_k];
    }

    y = obj->workspace_;
    if (!(alpha1 == 0.0)) {
      int32_T jA;
      jA = LD_diagOffset + LDimSizeP1;
      for (b_k = 0; b_k <= subMatrixDim; b_k++) {
        if (y != 0.0) {
          real_T temp;
          int32_T b;
          temp = y * alpha1;
          b = (subMatrixDim + jA) + 1;
          for (ijA = jA + 1; ijA <= b; ijA++) {
            obj->FMat->data[ijA - 1] += obj->workspace_ * temp;
          }
        }

        jA += obj->ldm;
      }
    }

    alpha1 = 1.0 / obj->FMat->data[LD_diagOffset - 1];
    b_k = (LD_diagOffset + subMatrixDim) + 1;
    for (subMatrixDim = LD_diagOffset + 1; subMatrixDim <= b_k; subMatrixDim++)
    {
      obj->FMat->data[subMatrixDim - 1] *= alpha1;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_partialColLDL3_(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  int32_T LD_offset, int32_T NColsRemain)
{
  int32_T LD_diagOffset;
  int32_T LDimSizeP1;
  int32_T c;
  int32_T idx;
  int32_T ix;
  int32_T k;
  int32_T lastColC;
  int32_T lda;
  int32_T numStrictLowerRows;
  int32_T subRows;
  int32_T tmp;
  LDimSizeP1 = obj->ldm + 1;
  for (k = 0; k < 48; k++) {
    real_T y;
    subRows = (NColsRemain - k) - 1;
    LD_diagOffset = (LDimSizeP1 * k + LD_offset) - 1;
    for (numStrictLowerRows = 0; numStrictLowerRows <= subRows;
         numStrictLowerRows++) {
      obj->workspace_ = obj->FMat->data[LD_diagOffset + numStrictLowerRows];
    }

    for (numStrictLowerRows = 0; numStrictLowerRows < NColsRemain;
         numStrictLowerRows++) {
      obj->workspace2_ = obj->workspace_;
    }

    lda = obj->ldm;
    y = obj->workspace2_;
    if ((NColsRemain != 0) && (k != 0)) {
      ix = LD_offset + k;
      c = (k - 1) * obj->ldm + 1;
      for (numStrictLowerRows = 1; lda < 0 ? numStrictLowerRows >= c :
           numStrictLowerRows <= c; numStrictLowerRows += lda) {
        lastColC = (numStrictLowerRows + NColsRemain) - 1;
        for (idx = numStrictLowerRows; idx <= lastColC; idx++) {
          y += -obj->FMat->data[ix - 1] * obj->workspace_;
        }

        ix += obj->ldm;
      }
    }

    obj->workspace2_ = y;
    for (numStrictLowerRows = 0; numStrictLowerRows < NColsRemain;
         numStrictLowerRows++) {
      obj->workspace_ = y;
    }

    for (numStrictLowerRows = 0; numStrictLowerRows <= subRows;
         numStrictLowerRows++) {
      obj->FMat->data[LD_diagOffset + numStrictLowerRows] = obj->workspace_;
    }

    numStrictLowerRows = subRows;
    for (subRows = 0; subRows < numStrictLowerRows; subRows++) {
      tmp = (subRows + LD_diagOffset) + 1;
      obj->FMat->data[tmp] /= obj->FMat->data[LD_diagOffset];
    }
  }

  for (k = 48; k <= NColsRemain - 1; k += 48) {
    int32_T br;
    int32_T f;
    int32_T numStrictLowerRows_tmp;
    int32_T u1_tmp;
    u1_tmp = NColsRemain - k;
    if (u1_tmp >= 48) {
      LD_diagOffset = 48;
    } else {
      LD_diagOffset = u1_tmp;
    }

    numStrictLowerRows_tmp = k + LD_diagOffset;
    numStrictLowerRows = numStrictLowerRows_tmp - 1;
    for (subRows = k; subRows <= numStrictLowerRows; subRows++) {
      idx = numStrictLowerRows_tmp - subRows;
      lda = (LDimSizeP1 * subRows + LD_offset) - 1;
      for (ix = 0; ix < 48; ix++) {
        obj->workspace2_ = obj->FMat->data[((LD_offset + subRows) + ix *
          obj->ldm) - 1];
      }

      lastColC = obj->ldm;
      if (idx != 0) {
        br = (obj->ldm * 47 + subRows) + 1;
        for (ix = subRows + 1; lastColC < 0 ? ix >= br : ix <= br; ix +=
             lastColC) {
          f = (ix + idx) - 1;
          for (c = ix; c <= f; c++) {
            tmp = (lda + c) - ix;
            obj->FMat->data[tmp] += obj->workspace_ * -obj->workspace2_;
          }
        }
      }
    }

    if (numStrictLowerRows_tmp < NColsRemain) {
      subRows = u1_tmp - LD_diagOffset;
      numStrictLowerRows = ((LD_offset + LD_diagOffset) + LDimSizeP1 * k) - 1;
      for (idx = 0; idx < 48; idx++) {
        ix = (LD_offset + k) + idx * obj->ldm;
        for (lda = 0; lda < LD_diagOffset; lda++) {
          obj->workspace2_ = obj->FMat->data[(ix + lda) - 1];
        }
      }

      lda = obj->ldm;
      if ((subRows != 0) && (LD_diagOffset != 0)) {
        lastColC = (LD_diagOffset - 1) * obj->ldm + numStrictLowerRows;
        br = 0;
        for (LD_diagOffset = numStrictLowerRows; lda < 0 ? LD_diagOffset >=
             lastColC : LD_diagOffset <= lastColC; LD_diagOffset += lda) {
          br++;
          idx = lda * 47 + br;
          for (ix = br; lda < 0 ? ix >= idx : ix <= idx; ix += lda) {
            f = LD_diagOffset + subRows;
            for (c = LD_diagOffset + 1; c <= f; c++) {
              obj->FMat->data[c - 1] += -obj->workspace2_ * obj->workspace_;
            }
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int32_T MPC_fmincon_xpotrf(int32_T n, emxArray_real_T_MPC_fmincon_T *A,
  int32_T lda)
{
  int32_T b_ix;
  int32_T b_iy;
  int32_T b_j;
  int32_T info;
  int32_T nmj;
  boolean_T exitg1;
  info = 0;
  b_j = 0;
  exitg1 = false;
  while ((!exitg1) && (b_j <= n - 1)) {
    real_T c;
    real_T ssq;
    int32_T idxA1j;
    int32_T idxAjj;
    idxA1j = b_j * lda;
    idxAjj = idxA1j + b_j;
    ssq = 0.0;
    if (b_j >= 1) {
      for (nmj = 0; nmj < b_j; nmj++) {
        c = A->data[idxA1j + nmj];
        ssq += c * c;
      }
    }

    ssq = A->data[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = sqrt(ssq);
      A->data[idxAjj] = ssq;
      if (b_j + 1 < n) {
        int32_T jm1;
        nmj = (n - b_j) - 2;
        jm1 = (idxA1j + lda) + 1;
        idxAjj += lda;
        if ((b_j != 0) && (nmj + 1 != 0)) {
          int32_T b;
          int32_T iy;
          iy = idxAjj;
          b = lda * nmj + jm1;
          for (b_ix = jm1; lda < 0 ? b_ix >= b : b_ix <= b; b_ix += lda) {
            int32_T d;
            c = 0.0;
            d = (b_ix + b_j) - 1;
            for (b_iy = b_ix; b_iy <= d; b_iy++) {
              c += A->data[(idxA1j + b_iy) - b_ix] * A->data[b_iy - 1];
            }

            A->data[iy] -= c;
            iy += lda;
          }
        }

        ssq = 1.0 / ssq;
        idxA1j = (lda * nmj + idxAjj) + 1;
        for (nmj = idxAjj + 1; lda < 0 ? nmj >= idxA1j : nmj <= idxA1j; nmj +=
             lda) {
          A->data[nmj - 1] *= ssq;
        }
      }

      b_j++;
    } else {
      A->data[idxAjj] = ssq;
      info = b_j + 1;
      exitg1 = true;
    }
  }

  return info;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bujmjslz(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y)
{
  int32_T b_iy;
  int32_T iyend;
  if (m != 0) {
    int32_T b;
    int32_T ix;
    memset(&y->data[0], 0, (uint32_T)m * sizeof(real_T));
    ix = 0;
    b = (n - 1) * lda + ia0;
    for (b_iy = ia0; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      int32_T c;
      c = (b_iy + m) - 1;
      for (iyend = b_iy; iyend <= c; iyend++) {
        int32_T tmp;
        tmp = iyend - b_iy;
        y->data[tmp] += A->data[iyend - 1] * x->data[ix];
      }

      ix++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_solve(const s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  emxArray_real_T_MPC_fmincon_T *rhs)
{
  int32_T i;
  int32_T j;
  int32_T n_tmp;
  n_tmp = obj->ndims;
  if (obj->ndims != 0) {
    int32_T jA;
    for (j = 0; j < n_tmp; j++) {
      real_T temp;
      jA = j * obj->ldm;
      temp = rhs->data[j];
      for (i = 0; i < j; i++) {
        temp -= obj->FMat->data[jA + i] * rhs->data[i];
      }

      rhs->data[j] = temp / obj->FMat->data[jA + j];
    }

    for (j = n_tmp; j >= 1; j--) {
      jA = ((j - 1) * obj->ldm + j) - 2;
      rhs->data[j - 1] /= obj->FMat->data[jA + 1];
      for (i = 0; i <= j - 2; i++) {
        int32_T ix;
        ix = (j - i) - 2;
        rhs->data[ix] -= obj->FMat->data[jA - i] * rhs->data[j - 1];
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_factor(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T ndims, int32_T ldA)
{
  real_T s;
  real_T smax;
  int32_T A_maxDiag_idx;
  int32_T LD_diagOffset;
  int32_T LDimSizeP1;
  int32_T exitg2;
  int32_T ix;
  int32_T iy0;
  boolean_T exitg1;
  LDimSizeP1 = obj->ldm + 1;
  obj->ndims = ndims;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    for (A_maxDiag_idx = 0; A_maxDiag_idx < ndims; A_maxDiag_idx++) {
      ix = ldA * A_maxDiag_idx;
      iy0 = obj->ldm * A_maxDiag_idx;
      for (LD_diagOffset = 0; LD_diagOffset < ndims; LD_diagOffset++) {
        obj->FMat->data[iy0 + LD_diagOffset] = A->data[LD_diagOffset + ix];
      }
    }
  }

  if (ndims < 1) {
    A_maxDiag_idx = -1;
  } else {
    A_maxDiag_idx = 0;
    if (ndims > 1) {
      smax = fabs(obj->FMat->data[0]);
      for (LD_diagOffset = 2; LD_diagOffset <= ndims; LD_diagOffset++) {
        s = fabs(obj->FMat->data[(LD_diagOffset - 1) * LDimSizeP1]);
        if (s > smax) {
          A_maxDiag_idx = LD_diagOffset - 1;
          smax = s;
        }
      }
    }
  }

  obj->regTol_ = fmax(fabs(obj->FMat->data[obj->ldm * A_maxDiag_idx +
    A_maxDiag_idx]) * 2.2204460492503131E-16, 0.0);
  if ((obj->FMat->size[0] * obj->FMat->size[1] > 16384) && (ndims > 128)) {
    A_maxDiag_idx = 0;
    exitg1 = false;
    while ((!exitg1) && (A_maxDiag_idx < ndims)) {
      LD_diagOffset = LDimSizeP1 * A_maxDiag_idx + 1;
      ix = ndims - A_maxDiag_idx;
      if (A_maxDiag_idx + 48 <= ndims) {
        MPC_fmincon_partialColLDL3_(obj, LD_diagOffset, ix);
        A_maxDiag_idx += 48;
      } else {
        MPC_fmincon_fullColLDL2_(obj, LD_diagOffset, ix);
        exitg1 = true;
      }
    }
  } else {
    MPC_fmincon_fullColLDL2_(obj, 1, ndims);
  }

  if (obj->ConvexCheck) {
    LDimSizeP1 = 0;
    do {
      exitg2 = 0;
      if (LDimSizeP1 <= ndims - 1) {
        if (obj->FMat->data[obj->ldm * LDimSizeP1 + LDimSizeP1] <= 0.0) {
          obj->info = -LDimSizeP1 - 1;
          exitg2 = 1;
        } else {
          LDimSizeP1++;
        }
      } else {
        obj->ConvexCheck = false;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_solve_k(const s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *obj,
  emxArray_real_T_MPC_fmincon_T *rhs)
{
  int32_T b_i;
  int32_T b_j;
  int32_T jjA;
  int32_T n;
  n = obj->ndims - 1;
  if (obj->ndims != 0) {
    for (b_j = 0; b_j <= n; b_j++) {
      int32_T c;
      jjA = b_j * obj->ldm + b_j;
      c = n - b_j;
      for (b_i = 0; b_i < c; b_i++) {
        int32_T ix;
        ix = (b_i + b_j) + 1;
        rhs->data[ix] -= obj->FMat->data[(b_i + jjA) + 1] * rhs->data[b_j];
      }
    }
  }

  n = obj->ndims;
  for (b_j = 0; b_j < n; b_j++) {
    rhs->data[b_j] /= obj->FMat->data[obj->ldm * b_j + b_j];
  }

  if (obj->ndims != 0) {
    for (b_j = n; b_j >= 1; b_j--) {
      real_T temp;
      jjA = (b_j - 1) * obj->ldm;
      temp = rhs->data[b_j - 1];
      for (b_i = n; b_i >= b_j + 1; b_i--) {
        temp -= obj->FMat->data[(jjA + b_i) - 1] * rhs->data[b_i - 1];
      }

      rhs->data[b_j - 1] = temp;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_compute_deltax(const emxArray_real_T_MPC_fmincon_T *H,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T
  *memspace, const s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, const
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *objective, boolean_T alwaysPositiveDef)
{
  real_T s;
  real_T smax;
  int32_T b_jjA;
  int32_T b_mNull;
  int32_T d_ix;
  int32_T exitg2;
  int32_T mNull;
  int32_T nVar;
  int32_T nVars;
  int32_T nullStart;
  int32_T nullStartIdx;
  int32_T nullStartIdx_tmp;
  boolean_T exitg1;
  nVar = qrmanager->mrows - 1;
  mNull = qrmanager->mrows - qrmanager->ncols;
  if (mNull <= 0) {
    for (mNull = 0; mNull <= nVar; mNull++) {
      solution->searchDir->data[mNull] = 0.0;
    }
  } else {
    for (nullStartIdx = 0; nullStartIdx <= nVar; nullStartIdx++) {
      solution->searchDir->data[nullStartIdx] = -objective->grad->
        data[nullStartIdx];
    }

    if (qrmanager->ncols <= 0) {
      switch (objective->objtype) {
       case 5:
        break;

       case 3:
        if (alwaysPositiveDef) {
          cholmanager->ndims = qrmanager->mrows;
          if ((H->size[0] != 0) && (H->size[1] != 0)) {
            for (mNull = 0; mNull <= nVar; mNull++) {
              nullStart = (nVar + 1) * mNull;
              nVars = cholmanager->ldm * mNull;
              for (nullStartIdx = 0; nullStartIdx <= nVar; nullStartIdx++) {
                cholmanager->FMat->data[nVars + nullStartIdx] = H->
                  data[nullStartIdx + nullStart];
              }
            }
          }

          cholmanager->info = MPC_fmincon_xpotrf(qrmanager->mrows,
            cholmanager->FMat, cholmanager->ldm);
        } else {
          MPC_fmincon_factor(cholmanager, H, qrmanager->mrows, qrmanager->mrows);
        }

        if (cholmanager->info != 0) {
          solution->state = -6;
        } else if (alwaysPositiveDef) {
          MPC_fmincon_solve(cholmanager, solution->searchDir);
        } else {
          MPC_fmincon_solve_k(cholmanager, solution->searchDir);
        }
        break;

       default:
        if (alwaysPositiveDef) {
          nVar = objective->nvar;
          cholmanager->ndims = objective->nvar;
          if ((H->size[0] != 0) && (H->size[1] != 0)) {
            for (mNull = 0; mNull < nVar; mNull++) {
              nullStart = nVar * mNull;
              nVars = cholmanager->ldm * mNull;
              for (nullStartIdx = 0; nullStartIdx < nVar; nullStartIdx++) {
                cholmanager->FMat->data[nVars + nullStartIdx] = H->
                  data[nullStartIdx + nullStart];
              }
            }
          }

          cholmanager->info = MPC_fmincon_xpotrf(objective->nvar,
            cholmanager->FMat, cholmanager->ldm);
          if (cholmanager->info != 0) {
            solution->state = -6;
          } else {
            MPC_fmincon_solve(cholmanager, solution->searchDir);
            smax = 1.0 / objective->beta;
            nullStartIdx = objective->nvar + 1;
            b_mNull = qrmanager->mrows;
            for (mNull = nullStartIdx; mNull <= b_mNull; mNull++) {
              solution->searchDir->data[mNull - 1] *= smax;
            }
          }
        }
        break;
      }
    } else {
      nullStartIdx_tmp = qrmanager->ldq * qrmanager->ncols + 1;
      if (objective->objtype == 5) {
        for (nullStart = 0; nullStart < mNull; nullStart++) {
          memspace->workspace_double->data[nullStart] = -qrmanager->Q->data
            [(qrmanager->ncols + nullStart) * qrmanager->ldq + nVar];
        }

        MPC_fmincon_xgemv_bujmjslz(qrmanager->mrows, mNull, qrmanager->Q,
          nullStartIdx_tmp, qrmanager->ldq, memspace->workspace_double,
          solution->searchDir);
      } else {
        if (objective->objtype == 3) {
          MPC_fmincon_xgemm(qrmanager->mrows, mNull, qrmanager->mrows, H,
                            qrmanager->mrows, qrmanager->Q, nullStartIdx_tmp,
                            qrmanager->ldq, memspace->workspace_double,
                            memspace->workspace_double->size[0]);
          MPC_fmincon_xgemm_b(mNull, mNull, qrmanager->mrows, qrmanager->Q,
                              nullStartIdx_tmp, qrmanager->ldq,
                              memspace->workspace_double,
                              memspace->workspace_double->size[0],
                              cholmanager->FMat, cholmanager->ldm);
        } else if (alwaysPositiveDef) {
          nVars = qrmanager->mrows;
          MPC_fmincon_xgemm(objective->nvar, mNull, objective->nvar, H,
                            objective->nvar, qrmanager->Q, nullStartIdx_tmp,
                            qrmanager->ldq, memspace->workspace_double,
                            memspace->workspace_double->size[0]);
          for (b_mNull = 0; b_mNull < mNull; b_mNull++) {
            b_jjA = objective->nvar + 1;
            for (nullStart = b_jjA; nullStart <= nVars; nullStart++) {
              memspace->workspace_double->data[(nullStart +
                memspace->workspace_double->size[0] * b_mNull) - 1] =
                qrmanager->Q->data[((b_mNull + qrmanager->ncols) * qrmanager->
                                    Q->size[0] + nullStart) - 1] *
                objective->beta;
            }
          }

          MPC_fmincon_xgemm_b(mNull, mNull, qrmanager->mrows, qrmanager->Q,
                              nullStartIdx_tmp, qrmanager->ldq,
                              memspace->workspace_double,
                              memspace->workspace_double->size[0],
                              cholmanager->FMat, cholmanager->ldm);
        }

        if (alwaysPositiveDef) {
          cholmanager->ndims = mNull;
          cholmanager->info = MPC_fmincon_xpotrf(mNull, cholmanager->FMat,
            cholmanager->ldm);
        } else {
          nullStart = cholmanager->ldm + 1;
          cholmanager->ndims = mNull;
          nVars = 0;
          if (mNull > 1) {
            smax = fabs(cholmanager->FMat->data[0]);
            for (b_mNull = 2; b_mNull <= mNull; b_mNull++) {
              s = fabs(cholmanager->FMat->data[(b_mNull - 1) * nullStart]);
              if (s > smax) {
                nVars = b_mNull - 1;
                smax = s;
              }
            }
          }

          cholmanager->regTol_ = fmax(fabs(cholmanager->FMat->data
            [cholmanager->ldm * nVars + nVars]) * 2.2204460492503131E-16, 0.0);
          if ((cholmanager->FMat->size[0] * cholmanager->FMat->size[1] > 16384) &&
              (mNull > 128)) {
            b_mNull = 0;
            exitg1 = false;
            while ((!exitg1) && (b_mNull < mNull)) {
              nVars = nullStart * b_mNull + 1;
              nullStartIdx = mNull - b_mNull;
              if (b_mNull + 48 <= mNull) {
                MPC_fmincon_partialColLDL3_(cholmanager, nVars, nullStartIdx);
                b_mNull += 48;
              } else {
                MPC_fmincon_fullColLDL2_(cholmanager, nVars, nullStartIdx);
                exitg1 = true;
              }
            }
          } else {
            MPC_fmincon_fullColLDL2_(cholmanager, 1, mNull);
          }

          if (cholmanager->ConvexCheck) {
            b_mNull = 0;
            do {
              exitg2 = 0;
              if (b_mNull <= mNull - 1) {
                if (cholmanager->FMat->data[cholmanager->ldm * b_mNull + b_mNull]
                    <= 0.0) {
                  cholmanager->info = -b_mNull - 1;
                  exitg2 = 1;
                } else {
                  b_mNull++;
                }
              } else {
                cholmanager->ConvexCheck = false;
                exitg2 = 1;
              }
            } while (exitg2 == 0);
          }
        }

        if (cholmanager->info != 0) {
          solution->state = -6;
        } else {
          nullStartIdx = qrmanager->ldq;
          if (qrmanager->mrows != 0) {
            for (b_mNull = 0; b_mNull < mNull; b_mNull++) {
              memspace->workspace_double->data[b_mNull] = 0.0;
            }

            b_mNull = 0;
            b_jjA = (mNull - 1) * qrmanager->ldq + nullStartIdx_tmp;
            for (nullStart = nullStartIdx_tmp; nullStartIdx < 0 ? nullStart >=
                 b_jjA : nullStart <= b_jjA; nullStart += nullStartIdx) {
              smax = 0.0;
              d_ix = nullStart + nVar;
              for (nVars = nullStart; nVars <= d_ix; nVars++) {
                smax += qrmanager->Q->data[nVars - 1] * objective->grad->
                  data[nVars - nullStart];
              }

              memspace->workspace_double->data[b_mNull] -= smax;
              b_mNull++;
            }
          }

          if (alwaysPositiveDef) {
            nullStartIdx = cholmanager->ndims;
            if (cholmanager->ndims != 0) {
              for (nullStart = 0; nullStart < nullStartIdx; nullStart++) {
                b_mNull = nullStart * cholmanager->ldm;
                smax = memspace->workspace_double->data[nullStart];
                for (nVars = 0; nVars < nullStart; nVars++) {
                  smax -= cholmanager->FMat->data[b_mNull + nVars] *
                    memspace->workspace_double->data[nVars];
                }

                memspace->workspace_double->data[nullStart] = smax /
                  cholmanager->FMat->data[b_mNull + nullStart];
              }
            }

            b_mNull = cholmanager->ndims;
            if (cholmanager->ndims != 0) {
              for (nVars = b_mNull; nVars >= 1; nVars--) {
                b_jjA = ((nVars - 1) * cholmanager->ldm + nVars) - 2;
                memspace->workspace_double->data[nVars - 1] /= cholmanager->
                  FMat->data[b_jjA + 1];
                for (nullStartIdx = 0; nullStartIdx <= nVars - 2; nullStartIdx++)
                {
                  d_ix = (nVars - nullStartIdx) - 2;
                  memspace->workspace_double->data[d_ix] -=
                    memspace->workspace_double->data[nVars - 1] *
                    cholmanager->FMat->data[b_jjA - nullStartIdx];
                }
              }
            }
          } else {
            b_mNull = cholmanager->ndims - 1;
            if (cholmanager->ndims != 0) {
              for (nVars = 0; nVars <= b_mNull; nVars++) {
                nullStart = nVars * cholmanager->ldm + nVars;
                d_ix = b_mNull - nVars;
                for (nullStartIdx = 0; nullStartIdx < d_ix; nullStartIdx++) {
                  nVar = (nullStartIdx + nVars) + 1;
                  memspace->workspace_double->data[nVar] -= cholmanager->
                    FMat->data[(nullStartIdx + nullStart) + 1] *
                    memspace->workspace_double->data[nVars];
                }
              }
            }

            nVars = cholmanager->ndims;
            for (nullStart = 0; nullStart < nVars; nullStart++) {
              memspace->workspace_double->data[nullStart] /= cholmanager->
                FMat->data[cholmanager->ldm * nullStart + nullStart];
            }

            nullStartIdx = cholmanager->ndims;
            if (cholmanager->ndims != 0) {
              for (nullStart = nullStartIdx; nullStart >= 1; nullStart--) {
                b_mNull = (nullStart - 1) * cholmanager->ldm;
                smax = memspace->workspace_double->data[nullStart - 1];
                for (nVars = nullStartIdx; nVars >= nullStart + 1; nVars--) {
                  smax -= cholmanager->FMat->data[(b_mNull + nVars) - 1] *
                    memspace->workspace_double->data[nVars - 1];
                }

                memspace->workspace_double->data[nullStart - 1] = smax;
              }
            }
          }

          MPC_fmincon_xgemv_bujmjslz(qrmanager->mrows, mNull, qrmanager->Q,
            nullStartIdx_tmp, qrmanager->ldq, memspace->workspace_double,
            solution->searchDir);
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmincon_xnrm2_a(int32_T n, const emxArray_real_T_MPC_fmincon_T
  *x)
{
  real_T y;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x->data[0]);
    } else {
      real_T scale;
      scale = 3.3121686421112381E-170;
      for (k = 0; k < n; k++) {
        real_T absxk;
        absxk = fabs(x->data[k]);
        if (absxk > scale) {
          real_T t;
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          real_T t;
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_xgemv_bujmjslzp(int32_T m, int32_T n, const
  emxArray_real_T_MPC_fmincon_T *A, int32_T lda, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T *y)
{
  int32_T b_iy;
  int32_T ia;
  if ((m != 0) && (n != 0)) {
    int32_T b;
    int32_T iyend;
    for (b_iy = 0; b_iy < n; b_iy++) {
      y->data[b_iy] = -y->data[b_iy];
    }

    iyend = 0;
    b = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      real_T c;
      int32_T d;
      c = 0.0;
      d = (b_iy + m) - 1;
      for (ia = b_iy; ia <= d; ia++) {
        c += A->data[ia - 1] * x->data[ia - b_iy];
      }

      y->data[iyend] += c;
      iyend++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_feasibleratiotest(const emxArray_real_T_MPC_fmincon_T
  *solution_xstar, const emxArray_real_T_MPC_fmincon_T *solution_searchDir,
  emxArray_real_T_MPC_fmincon_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_MPC_fmincon_T *workingset_Aineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_bineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_lb, const
  emxArray_real_T_MPC_fmincon_T *workingset_ub, const
  emxArray_int32_T_MPC_fmincon_T *workingset_indexLB, const
  emxArray_int32_T_MPC_fmincon_T *workingset_indexUB, const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_MPC_fminco_T *workingset_isActiveConstr, const int32_T
  workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
  *newBlocking, int32_T *constrType, int32_T *constrIdx)
{
  real_T alphaTemp;
  real_T c;
  real_T denomTol;
  real_T phaseOneCorrectionP;
  real_T ratio;
  int32_T b_iy;
  int32_T d;
  int32_T e;
  int32_T ia;
  int32_T iyend;
  int32_T ldw;
  int32_T totalIneq;
  int32_T totalUB;
  totalIneq = workingset_sizes[2] - 1;
  totalUB = workingset_sizes[4];
  *alpha = 1.0E+30;
  *newBlocking = false;
  *constrType = 0;
  *constrIdx = 0;
  denomTol = 2.2204460492503131E-13 * MPC_fmincon_xnrm2_a(workingset_nVar,
    solution_searchDir);
  if (workingset_nWConstr[2] < workingset_sizes[2]) {
    if (totalIneq >= 0) {
      memcpy(&workspace->data[0], &workingset_bineq->data[0], (uint32_T)
             (totalIneq + 1) * sizeof(real_T));
    }

    MPC_fmincon_xgemv_bujmjslzp(workingset_nVar, workingset_sizes[2],
      workingset_Aineq, workingset_ldA, solution_xstar, workspace);
    ldw = workspace->size[0];
    if ((workingset_nVar != 0) && (workingset_sizes[2] != 0)) {
      iyend = workspace->size[0] + workingset_sizes[2];
      if (ldw + 1 <= iyend) {
        memset(&workspace->data[ldw], 0, (uint32_T)(iyend - ldw) * sizeof(real_T));
      }

      iyend = workspace->size[0];
      d = (workingset_sizes[2] - 1) * workingset_ldA + 1;
      for (b_iy = 1; workingset_ldA < 0 ? b_iy >= d : b_iy <= d; b_iy +=
           workingset_ldA) {
        c = 0.0;
        e = (b_iy + workingset_nVar) - 1;
        for (ia = b_iy; ia <= e; ia++) {
          c += workingset_Aineq->data[ia - 1] * solution_searchDir->data[ia -
            b_iy];
        }

        workspace->data[iyend] += c;
        iyend++;
      }
    }

    for (b_iy = 0; b_iy <= totalIneq; b_iy++) {
      c = workspace->data[ldw + b_iy];
      if ((c > denomTol) && (!workingset_isActiveConstr->data
                             [(workingset_isActiveIdx[2] + b_iy) - 1])) {
        alphaTemp = fmin(fabs(workspace->data[b_iy]), 1.0E-6 - workspace->
                         data[b_iy]) / c;
        if (alphaTemp < *alpha) {
          *alpha = alphaTemp;
          *constrType = 3;
          *constrIdx = b_iy + 1;
          *newBlocking = true;
        }
      }
    }
  }

  if (workingset_nWConstr[3] < workingset_sizes[3]) {
    c = solution_xstar->data[workingset_nVar - 1] * (real_T)isPhaseOne;
    phaseOneCorrectionP = solution_searchDir->data[workingset_nVar - 1] *
      (real_T)isPhaseOne;
    ldw = workingset_sizes[3];
    for (totalIneq = 0; totalIneq <= ldw - 2; totalIneq++) {
      b_iy = workingset_indexLB->data[totalIneq];
      alphaTemp = -solution_searchDir->data[b_iy - 1] - phaseOneCorrectionP;
      if ((alphaTemp > denomTol) && (!workingset_isActiveConstr->data
           [(workingset_isActiveIdx[3] + totalIneq) - 1])) {
        ratio = (-solution_xstar->data[b_iy - 1] - workingset_lb->data[b_iy - 1])
          - c;
        alphaTemp = fmin(fabs(ratio), 1.0E-6 - ratio) / alphaTemp;
        if (alphaTemp < *alpha) {
          *alpha = alphaTemp;
          *constrType = 4;
          *constrIdx = totalIneq + 1;
          *newBlocking = true;
        }
      }
    }

    totalIneq = workingset_indexLB->data[workingset_sizes[3] - 1] - 1;
    c = -solution_searchDir->data[totalIneq];
    if ((c > denomTol) && (!workingset_isActiveConstr->data
                           [(workingset_isActiveIdx[3] + workingset_sizes[3]) -
                           2])) {
      ratio = -solution_xstar->data[totalIneq] - workingset_lb->data[totalIneq];
      alphaTemp = fmin(fabs(ratio), 1.0E-6 - ratio) / c;
      if (alphaTemp < *alpha) {
        *alpha = alphaTemp;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
      }
    }
  }

  if (workingset_nWConstr[4] < workingset_sizes[4]) {
    c = solution_xstar->data[workingset_nVar - 1] * (real_T)isPhaseOne;
    phaseOneCorrectionP = solution_searchDir->data[workingset_nVar - 1] *
      (real_T)isPhaseOne;
    for (totalIneq = 0; totalIneq < totalUB; totalIneq++) {
      ldw = workingset_indexUB->data[totalIneq];
      alphaTemp = solution_searchDir->data[ldw - 1] - phaseOneCorrectionP;
      if ((alphaTemp > denomTol) && (!workingset_isActiveConstr->data
           [(workingset_isActiveIdx[4] + totalIneq) - 1])) {
        ratio = (solution_xstar->data[ldw - 1] - workingset_ub->data[ldw - 1]) -
          c;
        alphaTemp = fmin(fabs(ratio), 1.0E-6 - ratio) / alphaTemp;
        if (alphaTemp < *alpha) {
          *alpha = alphaTemp;
          *constrType = 5;
          *constrIdx = totalIneq + 1;
          *newBlocking = true;
        }
      }
    }
  }

  if (!isPhaseOne) {
    *newBlocking = (((!*newBlocking) || (!(*alpha > 1.0))) && (*newBlocking));
    *alpha = fmin(*alpha, 1.0);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC__addBoundToActiveSetMatrix_(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T TYPE, int32_T idx_local)
{
  int32_T b;
  int32_T colOffset;
  int32_T idx;
  int32_T idx_bnd_local;
  obj->nWConstr[TYPE - 1]++;
  obj->isActiveConstr->data[(obj->isActiveIdx[TYPE - 1] + idx_local) - 2] = true;
  obj->nActiveConstr++;
  obj->Wid->data[obj->nActiveConstr - 1] = TYPE;
  obj->Wlocalidx->data[obj->nActiveConstr - 1] = idx_local;
  colOffset = (obj->nActiveConstr - 1) * obj->ldA - 1;
  if (TYPE == 5) {
    idx_bnd_local = obj->indexUB->data[idx_local - 1];
    obj->bwset->data[obj->nActiveConstr - 1] = obj->ub->data[idx_bnd_local - 1];
  } else {
    idx_bnd_local = obj->indexLB->data[idx_local - 1];
    obj->bwset->data[obj->nActiveConstr - 1] = obj->lb->data[idx_bnd_local - 1];
  }

  for (idx = 0; idx <= idx_bnd_local - 2; idx++) {
    obj->ATwset->data[(idx + colOffset) + 1] = 0.0;
  }

  obj->ATwset->data[idx_bnd_local + colOffset] = (real_T)(TYPE == 5) * 2.0 - 1.0;
  b = obj->nVar;
  for (idx = idx_bnd_local + 1; idx <= b; idx++) {
    obj->ATwset->data[idx + colOffset] = 0.0;
  }

  switch (obj->probType) {
   case 3:
   case 2:
    break;

   default:
    obj->ATwset->data[obj->nVar + colOffset] = -1.0;
    break;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_addAineqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T idx_local)
{
  int32_T b;
  int32_T iAineq0;
  int32_T iAw0;
  int32_T idx;
  obj->nWConstr[2]++;
  obj->isActiveConstr->data[(obj->isActiveIdx[2] + idx_local) - 2] = true;
  obj->nActiveConstr++;
  obj->Wid->data[obj->nActiveConstr - 1] = 3;
  obj->Wlocalidx->data[obj->nActiveConstr - 1] = idx_local;
  iAineq0 = (idx_local - 1) * obj->ldA;
  iAw0 = (obj->nActiveConstr - 1) * obj->ldA;
  b = obj->nVar - 1;
  for (idx = 0; idx <= b; idx++) {
    obj->ATwset->data[iAw0 + idx] = obj->Aineq->data[iAineq0 + idx];
  }

  obj->bwset->data[obj->nActiveConstr - 1] = obj->bineq->data[idx_local - 1];
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_iterate(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, const char_T options_SolverName[7], real_T options_StepTolerance,
  real_T options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations)
{
  real_T normDelta;
  real_T s;
  real_T temp;
  int32_T activeSetChangeID;
  int32_T globalActiveConstrIdx;
  int32_T idx;
  int32_T idxRotGCol;
  int32_T iy;
  int32_T nVar;
  boolean_T subProblemChanged;
  boolean_T updateFval;
  static const char_T b_b[7] = { 'f', 'm', 'i', 'n', 'c', 'o', 'n' };

  int32_T b_iy;
  int32_T exitg1;
  int32_T ix0;
  int32_T iyend;
  int32_T nActiveConstr;
  boolean_T guard1;
  boolean_T guard11;
  boolean_T guard2;
  boolean_T nonDegenerateWset;
  subProblemChanged = true;
  updateFval = true;
  activeSetChangeID = 0;
  nVar = workingset->nVar;
  globalActiveConstrIdx = 0;
  MPC_fmincon_computeGrad_StoreHx(objective, H, f, solution->xstar);
  solution->fstar = MPC_fmincon_computeFval_ReuseHx(objective,
    memspace->workspace_double, f, solution->xstar);
  if (solution->iterations < runTimeOptions_MaxIterations) {
    solution->state = -5;
  } else {
    solution->state = 0;
  }

  iyend = workingset->mConstrMax;
  for (idxRotGCol = 0; idxRotGCol < iyend; idxRotGCol++) {
    solution->lambda->data[idxRotGCol] = 0.0;
  }

  do {
    exitg1 = 0;
    if (solution->state == -5) {
      guard11 = false;
      if (subProblemChanged) {
        switch (activeSetChangeID) {
         case 1:
          ix0 = (workingset->nActiveConstr - 1) * workingset->ldA;
          if (qrmanager->mrows <= qrmanager->ncols + 1) {
            qrmanager->minRowCol = qrmanager->mrows;
          } else {
            qrmanager->minRowCol = qrmanager->ncols + 1;
          }

          b_iy = qrmanager->ldq * qrmanager->ncols;
          nActiveConstr = qrmanager->ldq;
          if (qrmanager->mrows != 0) {
            iyend = b_iy + qrmanager->mrows;
            for (idxRotGCol = b_iy + 1; idxRotGCol <= iyend; idxRotGCol++) {
              qrmanager->QR->data[idxRotGCol - 1] = 0.0;
            }

            iy = (qrmanager->mrows - 1) * qrmanager->ldq + 1;
            for (iyend = 1; nActiveConstr < 0 ? iyend >= iy : iyend <= iy; iyend
                 += nActiveConstr) {
              normDelta = 0.0;
              idxRotGCol = (iyend + qrmanager->mrows) - 1;
              for (idx = iyend; idx <= idxRotGCol; idx++) {
                normDelta += workingset->ATwset->data[(ix0 + idx) - iyend] *
                  qrmanager->Q->data[idx - 1];
              }

              qrmanager->QR->data[b_iy] += normDelta;
              b_iy++;
            }
          }

          qrmanager->ncols++;
          qrmanager->jpvt->data[qrmanager->ncols - 1] = qrmanager->ncols;
          for (idx = qrmanager->mrows - 2; idx + 2 > qrmanager->ncols; idx--) {
            b_iy = (qrmanager->ncols - 1) * qrmanager->ldq + idx;
            temp = qrmanager->QR->data[b_iy + 1];
            MPC_fmincon_xrotg(&qrmanager->QR->data[b_iy], &temp, &normDelta, &s);
            qrmanager->QR->data[b_iy + 1] = temp;
            idxRotGCol = qrmanager->ldq * idx;
            nActiveConstr = qrmanager->mrows;
            if (qrmanager->mrows >= 1) {
              iy = qrmanager->ldq + idxRotGCol;
              for (iyend = 0; iyend < nActiveConstr; iyend++) {
                b_iy = iy + iyend;
                ix0 = idxRotGCol + iyend;
                temp = qrmanager->Q->data[ix0] * normDelta + qrmanager->Q->
                  data[b_iy] * s;
                qrmanager->Q->data[b_iy] = qrmanager->Q->data[b_iy] * normDelta
                  - qrmanager->Q->data[ix0] * s;
                qrmanager->Q->data[ix0] = temp;
              }
            }
          }
          break;

         case -1:
          MPC_fmincon_deleteColMoveEnd(qrmanager, globalActiveConstrIdx);
          break;

         default:
          MPC_fmincon_factorQR(qrmanager, workingset->ATwset, nVar,
                               workingset->nActiveConstr, workingset->ldA);
          MPC_fmincon_computeQ_(qrmanager, qrmanager->mrows);
          break;
        }

        idxRotGCol = memcmp(&options_SolverName[0], &b_b[0], 7);
        MPC_fmincon_compute_deltax(H, solution, memspace, qrmanager, cholmanager,
          objective, (idxRotGCol == 0));
        if (solution->state != -5) {
          exitg1 = 1;
        } else {
          normDelta = MPC_fmincon_xnrm2_a(nVar, solution->searchDir);
          guard11 = true;
        }
      } else {
        for (idxRotGCol = 0; idxRotGCol < nVar; idxRotGCol++) {
          solution->searchDir->data[idxRotGCol] = 0.0;
        }

        normDelta = 0.0;
        guard11 = true;
      }

      if (guard11) {
        if ((!subProblemChanged) || (normDelta < options_StepTolerance) ||
            (workingset->nActiveConstr >= nVar)) {
          nActiveConstr = qrmanager->ncols;
          if (qrmanager->ncols > 0) {
            guard1 = false;
            if (objective->objtype != 4) {
              normDelta = 100.0 * (real_T)qrmanager->mrows *
                2.2204460492503131E-16;
              updateFval = ((qrmanager->mrows > 0) && (qrmanager->ncols > 0));
              if (updateFval) {
                idxRotGCol = qrmanager->ncols;
                guard2 = false;
                if (qrmanager->mrows < qrmanager->ncols) {
                  iyend = (qrmanager->ncols - 1) * qrmanager->ldq +
                    qrmanager->mrows;
                  while ((idxRotGCol > qrmanager->mrows) && (fabs(qrmanager->
                           QR->data[iyend - 1]) >= normDelta)) {
                    idxRotGCol--;
                    iyend -= qrmanager->ldq;
                  }

                  updateFval = (idxRotGCol == qrmanager->mrows);
                  if (!updateFval) {
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }

                if (guard2) {
                  iyend = (idxRotGCol - 1) * qrmanager->ldq + idxRotGCol;
                  while ((idxRotGCol >= 1) && (fabs(qrmanager->QR->data[iyend -
                           1]) >= normDelta)) {
                    idxRotGCol--;
                    iyend = (iyend - qrmanager->ldq) - 1;
                  }

                  updateFval = (idxRotGCol == 0);
                }
              }

              if (!updateFval) {
                solution->state = -7;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              MPC_fmincon_xgemv_buj(qrmanager->mrows, qrmanager->ncols,
                                    qrmanager->Q, qrmanager->ldq,
                                    objective->grad, memspace->workspace_double);
              if (qrmanager->ncols != 0) {
                for (iyend = nActiveConstr; iyend >= 1; iyend--) {
                  b_iy = ((iyend - 1) * qrmanager->ldq + iyend) - 2;
                  memspace->workspace_double->data[iyend - 1] /= qrmanager->
                    QR->data[b_iy + 1];
                  for (idx = 0; idx <= iyend - 2; idx++) {
                    idxRotGCol = (iyend - idx) - 2;
                    memspace->workspace_double->data[idxRotGCol] -=
                      memspace->workspace_double->data[iyend - 1] *
                      qrmanager->QR->data[b_iy - idx];
                  }
                }
              }

              for (idxRotGCol = 0; idxRotGCol < nActiveConstr; idxRotGCol++) {
                solution->lambda->data[idxRotGCol] = -memspace->
                  workspace_double->data[idxRotGCol];
              }
            }
          }

          if ((solution->state != -7) || (workingset->nActiveConstr > nVar)) {
            iyend = 0;
            normDelta = 0.0;
            idx = (workingset->nWConstr[0] + workingset->nWConstr[1]) + 1;
            ix0 = workingset->nActiveConstr;
            for (idxRotGCol = idx; idxRotGCol <= ix0; idxRotGCol++) {
              temp = solution->lambda->data[idxRotGCol - 1];
              if (temp < normDelta) {
                normDelta = temp;
                iyend = idxRotGCol;
              }
            }

            if (iyend == 0) {
              solution->state = 1;
            } else {
              activeSetChangeID = -1;
              globalActiveConstrIdx = iyend;
              subProblemChanged = true;
              MPC_fmincon_removeConstr(workingset, iyend);
              solution->lambda->data[iyend - 1] = 0.0;
            }
          } else {
            iyend = workingset->nActiveConstr;
            activeSetChangeID = 0;
            globalActiveConstrIdx = workingset->nActiveConstr;
            subProblemChanged = true;
            MPC_fmincon_removeConstr(workingset, workingset->nActiveConstr);
            solution->lambda->data[iyend - 1] = 0.0;
          }

          updateFval = false;
        } else {
          MPC_fmincon_feasibleratiotest(solution->xstar, solution->searchDir,
            memspace->workspace_double, workingset->nVar, workingset->ldA,
            workingset->Aineq, workingset->bineq, workingset->lb, workingset->ub,
            workingset->indexLB, workingset->indexUB, workingset->sizes,
            workingset->isActiveIdx, workingset->isActiveConstr,
            workingset->nWConstr, (objective->objtype == 5), &normDelta,
            &updateFval, &idxRotGCol, &iyend);
          if (updateFval) {
            switch (idxRotGCol) {
             case 3:
              MPC_fmincon_addAineqConstr(workingset, iyend);
              break;

             case 4:
              MPC__addBoundToActiveSetMatrix_(workingset, 4, iyend);
              break;

             default:
              MPC__addBoundToActiveSetMatrix_(workingset, 5, iyend);
              break;
            }

            activeSetChangeID = 1;
          } else {
            if (objective->objtype == 5) {
              if (MPC_fmincon_xnrm2_a(objective->nvar, solution->searchDir) >
                  100.0 * (real_T)objective->nvar * 1.4901161193847656E-8) {
                solution->state = 3;
              } else {
                solution->state = 4;
              }
            }

            subProblemChanged = false;
            if (workingset->nActiveConstr == 0) {
              solution->state = 1;
            }
          }

          if ((nVar >= 1) && (!(normDelta == 0.0))) {
            for (idxRotGCol = 0; idxRotGCol < nVar; idxRotGCol++) {
              solution->xstar->data[idxRotGCol] += normDelta *
                solution->searchDir->data[idxRotGCol];
            }
          }

          MPC_fmincon_computeGrad_StoreHx(objective, H, f, solution->xstar);
          updateFval = true;
        }

        solution->iterations++;
        iyend = objective->nvar - 1;
        if ((solution->iterations >= runTimeOptions_MaxIterations) &&
            ((solution->state != 1) || (objective->objtype == 5))) {
          solution->state = 0;
        }

        if (solution->iterations - solution->iterations / 50 * 50 == 0) {
          solution->maxConstr = MPC_fm_maxConstraintViolation_h(workingset,
            solution->xstar);
          normDelta = solution->maxConstr;
          if (objective->objtype == 5) {
            normDelta = solution->maxConstr - solution->xstar->data
              [objective->nvar - 1];
          }

          if (normDelta > 1.0E-6) {
            for (activeSetChangeID = 0; activeSetChangeID <= iyend;
                 activeSetChangeID++) {
              solution->searchDir->data[activeSetChangeID] = solution->
                xstar->data[activeSetChangeID];
            }

            nonDegenerateWset = MPC_fmi_feasibleX0ForWorkingSet
              (memspace->workspace_double, solution->searchDir, workingset,
               qrmanager);
            if ((!nonDegenerateWset) && (solution->state != 0)) {
              solution->state = -2;
            }

            activeSetChangeID = 0;
            normDelta = MPC_fm_maxConstraintViolation_h(workingset,
              solution->searchDir);
            if (normDelta < solution->maxConstr) {
              for (idxRotGCol = 0; idxRotGCol <= iyend; idxRotGCol++) {
                solution->xstar->data[idxRotGCol] = solution->searchDir->
                  data[idxRotGCol];
              }

              solution->maxConstr = normDelta;
            }
          }
        }

        if (updateFval && (options_ObjectiveLimit > (rtMinusInf))) {
          solution->fstar = MPC_fmincon_computeFval_ReuseHx(objective,
            memspace->workspace_double, f, solution->xstar);
          if ((solution->fstar < options_ObjectiveLimit) && ((solution->state !=
                0) || (objective->objtype != 5))) {
            solution->state = 2;
          }
        }
      }
    } else {
      if (!updateFval) {
        solution->fstar = MPC_fmincon_computeFval_ReuseHx(objective,
          memspace->workspace_double, f, solution->xstar);
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

static void MPC_fmincon_emxFree_boolean_T(emxArray_boolean_T_MPC_fminco_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T_MPC_fminco_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T_MPC_fminco_T *)NULL;
  }
}

static void emxFreeStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->Aineq);
  MPC_fmincon_emxFree_real_T(&pStruct->bineq);
  MPC_fmincon_emxFree_real_T(&pStruct->Aeq);
  MPC_fmincon_emxFree_real_T(&pStruct->beq);
  MPC_fmincon_emxFree_real_T(&pStruct->lb);
  MPC_fmincon_emxFree_real_T(&pStruct->ub);
  MPC_fmincon_emxFree_int32_T(&pStruct->indexLB);
  MPC_fmincon_emxFree_int32_T(&pStruct->indexUB);
  MPC_fmincon_emxFree_int32_T(&pStruct->indexFixed);
  MPC_fmincon_emxFree_int32_T(&pStruct->indexEqRemoved);
  MPC_fmincon_emxFree_real_T(&pStruct->ATwset);
  MPC_fmincon_emxFree_real_T(&pStruct->bwset);
  MPC_fmincon_emxFree_real_T(&pStruct->maxConstrWorkspace);
  MPC_fmincon_emxFree_boolean_T(&pStruct->isActiveConstr);
  MPC_fmincon_emxFree_int32_T(&pStruct->Wid);
  MPC_fmincon_emxFree_int32_T(&pStruct->Wlocalidx);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_driver_d(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *options, int32_T
  runTimeOptions_MaxIterations)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T b_workingset;
  real_T maxConstr_new;
  int32_T idxEndIneq;
  int32_T idxStartIneq;
  int32_T mConstr;
  int32_T nVar;
  boolean_T exitg1;
  boolean_T guard1;
  solution->iterations = 0;
  nVar = workingset->nVar - 1;
  emxInitStruct_s_Wd0eYcEyLXg48EJ(&b_workingset);
  guard1 = false;
  if (workingset->probType == 3) {
    idxStartIneq = workingset->sizes[0];
    for (mConstr = 0; mConstr < idxStartIneq; mConstr++) {
      solution->xstar->data[workingset->indexFixed->data[mConstr] - 1] =
        workingset->ub->data[workingset->indexFixed->data[mConstr] - 1];
    }

    idxStartIneq = workingset->sizes[3];
    for (mConstr = 0; mConstr < idxStartIneq; mConstr++) {
      if (workingset->isActiveConstr->data[(workingset->isActiveIdx[3] + mConstr)
          - 1]) {
        solution->xstar->data[workingset->indexLB->data[mConstr] - 1] =
          -workingset->lb->data[workingset->indexLB->data[mConstr] - 1];
      }
    }

    idxStartIneq = workingset->sizes[4];
    for (mConstr = 0; mConstr < idxStartIneq; mConstr++) {
      if (workingset->isActiveConstr->data[(workingset->isActiveIdx[4] + mConstr)
          - 1]) {
        solution->xstar->data[workingset->indexUB->data[mConstr] - 1] =
          workingset->ub->data[workingset->indexUB->data[mConstr] - 1];
      }
    }

    MPC_fmincon_PresolveWorkingSet(solution, memspace, workingset, qrmanager);
    if (solution->state < 0) {
    } else {
      guard1 = true;
    }
  } else {
    solution->state = 82;
    guard1 = true;
  }

  if (guard1) {
    solution->iterations = 0;
    solution->maxConstr = MPC_fm_maxConstraintViolation_h(workingset,
      solution->xstar);
    if (solution->maxConstr > 1.0E-6) {
      solution->xstar->data[workingset->nVar] = solution->maxConstr + 1.0;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(&b_workingset, workingset);
      if (workingset->probType == 3) {
        mConstr = 1;
      } else {
        mConstr = 4;
      }

      MPC_fmincon_setProblemType(&b_workingset, mConstr);
      idxStartIneq = (b_workingset.nWConstr[0] + b_workingset.nWConstr[1]) + 1;
      idxEndIneq = b_workingset.nActiveConstr;
      for (mConstr = idxStartIneq; mConstr <= idxEndIneq; mConstr++) {
        b_workingset.isActiveConstr->data
          [(b_workingset.isActiveIdx[b_workingset.Wid->data[mConstr - 1] - 1] +
            b_workingset.Wlocalidx->data[mConstr - 1]) - 2] = false;
      }

      b_workingset.nWConstr[2] = 0;
      b_workingset.nWConstr[3] = 0;
      b_workingset.nWConstr[4] = 0;
      b_workingset.nActiveConstr = b_workingset.nWConstr[0] +
        b_workingset.nWConstr[1];
      objective->prev_objtype = objective->objtype;
      objective->prev_nvar = objective->nvar;
      objective->prev_hasLinear = objective->hasLinear;
      objective->objtype = 5;
      objective->nvar = workingset->nVar + 1;
      objective->gammaScalar = 1.0;
      objective->hasLinear = true;
      solution->fstar = MPC_fmincon_computeFval(objective,
        memspace->workspace_double, H, f, solution->xstar);
      solution->state = 5;
      MPC_fmincon_iterate(H, f, solution, memspace, &b_workingset, qrmanager,
                          cholmanager, objective, options->SolverName,
                          1.4901161193847657E-10, 1.0E-6,
                          runTimeOptions_MaxIterations);
      if (b_workingset.isActiveConstr->data[(b_workingset.isActiveIdx[3] +
           b_workingset.sizes[3]) - 2]) {
        mConstr = b_workingset.sizes[0] + b_workingset.sizes[1];
        exitg1 = false;
        while ((!exitg1) && (mConstr + 1 <= b_workingset.nActiveConstr)) {
          if ((b_workingset.Wid->data[mConstr] == 4) &&
              (b_workingset.Wlocalidx->data[mConstr] == b_workingset.sizes[3]))
          {
            MPC_fmincon_removeConstr(&b_workingset, mConstr + 1);
            exitg1 = true;
          } else {
            mConstr++;
          }
        }
      }

      mConstr = b_workingset.nActiveConstr;
      idxStartIneq = b_workingset.sizes[0] + b_workingset.sizes[1];
      while ((mConstr > idxStartIneq) && (mConstr > workingset->nVar)) {
        MPC_fmincon_removeConstr(&b_workingset, mConstr);
        mConstr--;
      }

      solution->maxConstr = solution->xstar->data[workingset->nVar];
      MPC_fmincon_setProblemType(&b_workingset, workingset->probType);
      objective->objtype = objective->prev_objtype;
      objective->nvar = objective->prev_nvar;
      objective->hasLinear = objective->prev_hasLinear;
      options->ObjectiveLimit = (rtMinusInf);
      options->StepTolerance = 1.0E-6;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
      if (solution->state == 0) {
      } else {
        solution->maxConstr = MPC_fm_maxConstraintViolation_h(&b_workingset,
          solution->xstar);
        emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
        if (solution->maxConstr > 1.0E-6) {
          mConstr = b_workingset.mConstrMax;
          for (nVar = 0; nVar < mConstr; nVar++) {
            solution->lambda->data[nVar] = 0.0;
          }

          solution->fstar = MPC_fmincon_computeFval(objective,
            memspace->workspace_double, H, f, solution->xstar);
          solution->state = -2;
        } else {
          if (solution->maxConstr > 0.0) {
            for (mConstr = 0; mConstr <= nVar; mConstr++) {
              solution->searchDir->data[mConstr] = solution->xstar->data[mConstr];
            }

            MPC_fmincon_PresolveWorkingSet(solution, memspace, &b_workingset,
              qrmanager);
            emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
            maxConstr_new = MPC_fm_maxConstraintViolation_h(workingset,
              solution->xstar);
            if (maxConstr_new >= solution->maxConstr) {
              solution->maxConstr = maxConstr_new;
              for (mConstr = 0; mConstr <= nVar; mConstr++) {
                solution->xstar->data[mConstr] = solution->searchDir->
                  data[mConstr];
              }
            }
          }

          MPC_fmincon_iterate(H, f, solution, memspace, workingset, qrmanager,
                              cholmanager, objective, options->SolverName,
                              options->StepTolerance, options->ObjectiveLimit,
                              runTimeOptions_MaxIterations);
        }
      }
    } else {
      MPC_fmincon_iterate(H, f, solution, memspace, workingset, qrmanager,
                          cholmanager, objective, options->SolverName,
                          options->StepTolerance, options->ObjectiveLimit,
                          runTimeOptions_MaxIterations);
    }
  }

  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&b_workingset);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_addAeqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T idx_local)
{
  int32_T c_idx;
  int32_T iAeq0;
  int32_T totalEq;
  totalEq = obj->nWConstr[0] + obj->nWConstr[1];
  if ((obj->nActiveConstr == totalEq) && (idx_local > obj->nWConstr[1])) {
    int32_T iAw0;
    obj->nWConstr[1]++;
    obj->isActiveConstr->data[(obj->isActiveIdx[1] + idx_local) - 2] = true;
    obj->nActiveConstr++;
    obj->Wid->data[obj->nActiveConstr - 1] = 2;
    obj->Wlocalidx->data[obj->nActiveConstr - 1] = idx_local;
    iAeq0 = (idx_local - 1) * obj->ldA;
    iAw0 = (obj->nActiveConstr - 1) * obj->ldA;
    c_idx = obj->nVar;
    for (totalEq = 0; totalEq < c_idx; totalEq++) {
      obj->ATwset->data[iAw0 + totalEq] = obj->Aeq->data[totalEq + iAeq0];
    }

    obj->bwset->data[obj->nActiveConstr - 1] = obj->beq->data[idx_local - 1];
  } else {
    int32_T iAw0;
    int32_T iAw0_tmp;
    obj->nActiveConstr++;
    obj->Wid->data[obj->nActiveConstr - 1] = obj->Wid->data[totalEq];
    obj->Wlocalidx->data[obj->nActiveConstr - 1] = obj->Wlocalidx->data[totalEq];
    iAw0_tmp = obj->nVar;
    for (iAeq0 = 0; iAeq0 < iAw0_tmp; iAeq0++) {
      obj->ATwset->data[iAeq0 + obj->ldA * (obj->nActiveConstr - 1)] =
        obj->ATwset->data[obj->ldA * totalEq + iAeq0];
    }

    obj->bwset->data[obj->nActiveConstr - 1] = obj->bwset->data[totalEq];
    obj->nWConstr[1]++;
    obj->isActiveConstr->data[(obj->isActiveIdx[1] + idx_local) - 2] = true;
    obj->Wid->data[totalEq] = 2;
    obj->Wlocalidx->data[totalEq] = idx_local;
    iAeq0 = (idx_local - 1) * obj->ldA;
    iAw0 = obj->ldA * totalEq;
    for (c_idx = 0; c_idx < iAw0_tmp; c_idx++) {
      obj->ATwset->data[iAw0 + c_idx] = obj->Aeq->data[c_idx + iAeq0];
    }

    obj->bwset->data[totalEq] = obj->beq->data[idx_local - 1];
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T MPC_fmincon_soc(const emxArray_real_T_MPC_fmincon_T *Hessian,
  const emxArray_real_T_MPC_fmincon_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *QRManager, s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager,
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *QPObjective, const
  somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions)
{
  somzaGboVhDG7PNQS6E98jD_MPC_f_T qpoptions_0;
  real_T TrialState_0;
  int32_T b_mIneq;
  int32_T c;
  int32_T idxIneqOffset;
  int32_T idx_Partition;
  int32_T idx_upper;
  int32_T mConstrMax;
  int32_T mEq;
  int32_T mIneq;
  int32_T nVar;
  int32_T nWIneq_old;
  int32_T nWLower_old;
  int32_T nWUpper_old;
  boolean_T success;
  nWIneq_old = WorkingSet->nWConstr[2];
  nWLower_old = WorkingSet->nWConstr[3];
  nWUpper_old = WorkingSet->nWConstr[4];
  nVar = WorkingSet->nVar - 1;
  mConstrMax = WorkingSet->mConstrMax - 1;
  for (b_mIneq = 0; b_mIneq <= nVar; b_mIneq++) {
    TrialState->xstarsqp->data[b_mIneq] = TrialState->xstarsqp_old->data[b_mIneq];
    TrialState->socDirection->data[b_mIneq] = TrialState->xstar->data[b_mIneq];
  }

  for (b_mIneq = 0; b_mIneq <= mConstrMax; b_mIneq++) {
    TrialState->lambdaStopTest->data[b_mIneq] = TrialState->lambda->data[b_mIneq];
  }

  mEq = WorkingSet->sizes[1] - 1;
  mIneq = WorkingSet->sizes[2];
  idxIneqOffset = WorkingSet->isActiveIdx[2];
  if (WorkingSet->sizes[1] > 0) {
    for (b_mIneq = 0; b_mIneq <= mEq; b_mIneq++) {
      WorkingSet->beq->data[b_mIneq] = -TrialState->cEq->data[b_mIneq];
    }

    MPC_fmincon_xgemv_bujmjslzp1(WorkingSet->nVar, WorkingSet->sizes[1],
      WorkingSet->Aeq, WorkingSet->ldA, TrialState->searchDir, WorkingSet->beq);
    for (b_mIneq = 0; b_mIneq <= mEq; b_mIneq++) {
      WorkingSet->bwset->data[WorkingSet->sizes[0] + b_mIneq] = WorkingSet->
        beq->data[b_mIneq];
    }
  }

  if (WorkingSet->sizes[2] > 0) {
    for (b_mIneq = 0; b_mIneq < mIneq; b_mIneq++) {
      WorkingSet->bineq->data[b_mIneq] = -TrialState->cIneq->data[b_mIneq];
    }

    MPC_fmincon_xgemv_bujmjslzp1(WorkingSet->nVar, WorkingSet->sizes[2],
      WorkingSet->Aineq, WorkingSet->ldA, TrialState->searchDir,
      WorkingSet->bineq);
    mIneq = 1;
    mEq = WorkingSet->sizes[2] + 1;
    idx_upper = (WorkingSet->sizes[2] + WorkingSet->sizes[3]) + 1;
    c = WorkingSet->nActiveConstr;
    for (b_mIneq = idxIneqOffset; b_mIneq <= c; b_mIneq++) {
      switch (WorkingSet->Wid->data[b_mIneq - 1]) {
       case 3:
        idx_Partition = mIneq;
        mIneq++;
        WorkingSet->bwset->data[b_mIneq - 1] = WorkingSet->bineq->
          data[WorkingSet->Wlocalidx->data[b_mIneq - 1] - 1];
        break;

       case 4:
        idx_Partition = mEq;
        mEq++;
        break;

       default:
        idx_Partition = idx_upper;
        idx_upper++;
        break;
      }

      TrialState->workingset_old->data[idx_Partition - 1] =
        WorkingSet->Wlocalidx->data[b_mIneq - 1];
    }
  }

  for (b_mIneq = 0; b_mIneq <= nVar; b_mIneq++) {
    TrialState->xstar->data[b_mIneq] = TrialState->xstarsqp->data[b_mIneq];
  }

  qpoptions_0 = *qpoptions;
  MPC_fmincon_driver_d(Hessian, grad, TrialState, memspace, WorkingSet,
                       QRManager, CholManager, QPObjective, &qpoptions_0,
                       qpoptions->MaxIterations);
  if (WorkingSet->indexEqRemoved->size[0] > 0) {
    while ((WorkingSet->mEqRemoved > 0) && (WorkingSet->indexEqRemoved->
            data[WorkingSet->mEqRemoved - 1] >= TrialState->iNonEq0)) {
      MPC_fmincon_addAeqConstr(WorkingSet, WorkingSet->indexEqRemoved->
        data[WorkingSet->mEqRemoved - 1]);
      WorkingSet->mEqRemoved--;
    }
  }

  for (b_mIneq = 0; b_mIneq <= nVar; b_mIneq++) {
    TrialState_0 = TrialState->socDirection->data[b_mIneq];
    TrialState->socDirection->data[b_mIneq] = TrialState->xstar->data[b_mIneq] -
      TrialState_0;
    TrialState->xstar->data[b_mIneq] = TrialState_0;
  }

  success = (MPC_fmincon_xnrm2_a(nVar + 1, TrialState->socDirection) <=
             MPC_fmincon_xnrm2_a(nVar + 1, TrialState->xstar) * 2.0);
  mIneq = WorkingSet->sizes[1] - 1;
  b_mIneq = WorkingSet->sizes[2];
  if (WorkingSet->sizes[1] > 0) {
    for (nVar = 0; nVar <= mIneq; nVar++) {
      WorkingSet->beq->data[nVar] = -TrialState->cEq->data[nVar];
    }

    for (nVar = 0; nVar <= mIneq; nVar++) {
      WorkingSet->bwset->data[WorkingSet->sizes[0] + nVar] = WorkingSet->
        beq->data[nVar];
    }
  }

  if (WorkingSet->sizes[2] > 0) {
    for (nVar = 0; nVar < b_mIneq; nVar++) {
      WorkingSet->bineq->data[nVar] = -TrialState->cIneq->data[nVar];
    }

    if (!success) {
      mEq = WorkingSet->nWConstr[0] + WorkingSet->nWConstr[1];
      idxIneqOffset = mEq + 1;
      mIneq = WorkingSet->nActiveConstr;
      for (nVar = idxIneqOffset; nVar <= mIneq; nVar++) {
        WorkingSet->isActiveConstr->data[(WorkingSet->isActiveIdx
          [WorkingSet->Wid->data[nVar - 1] - 1] + WorkingSet->Wlocalidx->
          data[nVar - 1]) - 2] = false;
      }

      WorkingSet->nWConstr[2] = 0;
      WorkingSet->nWConstr[3] = 0;
      WorkingSet->nWConstr[4] = 0;
      WorkingSet->nActiveConstr = mEq;
      for (nVar = 0; nVar < nWIneq_old; nVar++) {
        MPC_fmincon_addAineqConstr(WorkingSet, TrialState->workingset_old->
          data[nVar]);
      }

      for (nWIneq_old = 0; nWIneq_old < nWLower_old; nWIneq_old++) {
        MPC__addBoundToActiveSetMatrix_(WorkingSet, 4,
          TrialState->workingset_old->data[nWIneq_old + b_mIneq]);
      }

      for (nWLower_old = 0; nWLower_old < nWUpper_old; nWLower_old++) {
        MPC__addBoundToActiveSetMatrix_(WorkingSet, 5,
          TrialState->workingset_old->data[(nWLower_old + b_mIneq) +
          WorkingSet->sizes[3]]);
      }
    }
  }

  if (!success) {
    for (nWUpper_old = 0; nWUpper_old <= mConstrMax; nWUpper_old++) {
      TrialState->lambda->data[nWUpper_old] = TrialState->lambdaStopTest->
        data[nWUpper_old];
    }
  } else {
    MPC_fmincon_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
      WorkingSet->sizes, WorkingSet->isActiveIdx, WorkingSet->Wid,
      WorkingSet->Wlocalidx, memspace->workspace_double);
  }

  return success;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_relaxed(const emxArray_real_T_MPC_fmincon_T *Hessian,
  const emxArray_real_T_MPC_fmincon_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T b_WorkingSet;
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T c_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_MPC_f_T qpoptions_0;
  real_T beta;
  real_T qpfvalQuadExcess;
  real_T qpfvalQuadExcess_tmp;
  real_T s;
  real_T smax;
  int32_T b_kend;
  int32_T b_mEq;
  int32_T idx_max;
  int32_T idx_negative;
  int32_T idx_positive;
  int32_T ix;
  int32_T mEq;
  int32_T mIneq;
  int32_T nVarOrig;
  int32_T tf_tmp;
  boolean_T b_tf;
  boolean_T tf;
  nVarOrig = WorkingSet->nVar - 1;
  mIneq = WorkingSet->sizes[2];
  mEq = WorkingSet->sizes[1];
  beta = 0.0;
  for (b_kend = 0; b_kend <= nVarOrig; b_kend++) {
    beta += Hessian->data[Hessian->size[0] * b_kend + b_kend];
  }

  beta /= (real_T)WorkingSet->nVar;
  if (TrialState->sqpIterations <= 1) {
    b_mEq = QPObjective->nvar;
    if (QPObjective->nvar < 1) {
      idx_max = 0;
    } else {
      idx_max = 1;
      if (QPObjective->nvar > 1) {
        smax = fabs(grad->data[0]);
        for (b_kend = 2; b_kend <= b_mEq; b_kend++) {
          s = fabs(grad->data[b_kend - 1]);
          if (s > smax) {
            idx_max = b_kend;
            smax = s;
          }
        }
      }
    }

    smax = fmax(1.0, fabs(grad->data[idx_max - 1])) * 100.0;
  } else {
    b_mEq = WorkingSet->mConstr;
    if (WorkingSet->mConstr < 1) {
      idx_max = 0;
    } else {
      idx_max = 1;
      if (WorkingSet->mConstr > 1) {
        smax = fabs(TrialState->lambdasqp->data[0]);
        for (b_kend = 2; b_kend <= b_mEq; b_kend++) {
          s = fabs(TrialState->lambdasqp->data[b_kend - 1]);
          if (s > smax) {
            idx_max = b_kend;
            smax = s;
          }
        }
      }
    }

    smax = fabs(TrialState->lambdasqp->data[idx_max - 1]);
  }

  QPObjective->nvar = WorkingSet->nVar;
  QPObjective->beta = beta;
  QPObjective->rho = smax;
  QPObjective->hasLinear = true;
  QPObjective->objtype = 4;
  emxInitStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet);
  emxCopyStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet, WorkingSet);
  MPC_fmincon_setProblemType(&b_WorkingSet, 2);
  idx_max = b_WorkingSet.sizes[2] - 1;
  b_mEq = b_WorkingSet.sizes[1] - 1;
  ix = (b_WorkingSet.sizes[3] - (b_WorkingSet.sizes[1] << 1)) -
    b_WorkingSet.sizes[2];
  for (b_kend = 0; b_kend <= idx_max; b_kend++) {
    memspace->workspace_double->data[b_kend] = b_WorkingSet.bineq->data[b_kend];
  }

  MPC_fmincon_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[2],
    b_WorkingSet.Aineq, b_WorkingSet.ldA, TrialState->xstar,
    memspace->workspace_double);
  for (b_kend = 0; b_kend <= idx_max; b_kend++) {
    TrialState->xstar->data[(nVarOrig + b_kend) + 1] = (real_T)
      (memspace->workspace_double->data[b_kend] > 0.0) *
      memspace->workspace_double->data[b_kend];
  }

  for (b_kend = 0; b_kend <= b_mEq; b_kend++) {
    memspace->workspace_double->data[b_kend] = b_WorkingSet.beq->data[b_kend];
  }

  MPC_fmincon_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[1],
    b_WorkingSet.Aeq, b_WorkingSet.ldA, TrialState->xstar,
    memspace->workspace_double);
  for (b_kend = 0; b_kend <= b_mEq; b_kend++) {
    idx_positive = (idx_max + b_kend) + 2;
    idx_negative = ((idx_max + b_mEq) + b_kend) + 3;
    if (memspace->workspace_double->data[b_kend] <= 0.0) {
      TrialState->xstar->data[nVarOrig + idx_positive] = 0.0;
      TrialState->xstar->data[nVarOrig + idx_negative] =
        -memspace->workspace_double->data[b_kend];
      MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      if (memspace->workspace_double->data[b_kend] >= -1.0E-6) {
        MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      }
    } else {
      TrialState->xstar->data[nVarOrig + idx_positive] =
        memspace->workspace_double->data[b_kend];
      TrialState->xstar->data[nVarOrig + idx_negative] = 0.0;
      MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      if (memspace->workspace_double->data[b_kend] <= 1.0E-6) {
        MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      }
    }
  }

  nVarOrig = qpoptions->MaxIterations;
  qpoptions->MaxIterations = (qpoptions->MaxIterations + b_WorkingSet.nVar) -
    WorkingSet->nVar;
  qpoptions_0 = *qpoptions;
  MPC_fmincon_driver_d(Hessian, grad, TrialState, memspace, &b_WorkingSet,
                       QRManager, CholManager, QPObjective, &qpoptions_0,
                       qpoptions->MaxIterations);
  qpoptions->MaxIterations = nVarOrig;
  idx_max = b_WorkingSet.sizes[2];
  b_mEq = b_WorkingSet.sizes[1];
  idx_negative = b_WorkingSet.sizes[1] << 1;
  ix = (idx_negative + b_WorkingSet.sizes[2]) - 1;
  idx_positive = b_WorkingSet.sizes[3] - 1;
  nVarOrig = 0;
  for (b_kend = 0; b_kend < b_mEq; b_kend++) {
    tf_tmp = b_WorkingSet.isActiveIdx[3] + idx_positive;
    tf = b_WorkingSet.isActiveConstr->data[(tf_tmp - idx_negative) + b_kend];
    b_tf = b_WorkingSet.isActiveConstr->data[(tf_tmp - b_mEq) + b_kend];
    memspace->workspace_int->data[b_kend] = tf;
    memspace->workspace_int->data[b_kend + b_mEq] = b_tf;
    nVarOrig = (nVarOrig + tf) + b_tf;
  }

  for (b_kend = 0; b_kend < idx_max; b_kend++) {
    tf = b_WorkingSet.isActiveConstr->data[(((b_WorkingSet.isActiveIdx[3] +
      idx_positive) - ix) + b_kend) - 1];
    memspace->workspace_int->data[b_kend + idx_negative] = tf;
    nVarOrig += tf;
  }

  if (TrialState->state != -6) {
    idx_max = (b_WorkingSet.nVarMax - WorkingSet->nVar) - 1;
    idx_positive = WorkingSet->nVar + 1;
    s = 0.0;
    qpfvalQuadExcess = 0.0;
    if (idx_max >= 1) {
      ix = WorkingSet->nVar + idx_max;
      for (b_kend = idx_positive; b_kend <= ix; b_kend++) {
        s += fabs(TrialState->xstar->data[b_kend - 1]);
      }

      for (b_kend = 0; b_kend < idx_max; b_kend++) {
        qpfvalQuadExcess_tmp = TrialState->xstar->data[WorkingSet->nVar + b_kend];
        qpfvalQuadExcess += qpfvalQuadExcess_tmp * qpfvalQuadExcess_tmp;
      }
    }

    beta = (TrialState->fstar - smax * s) - beta / 2.0 * qpfvalQuadExcess;
    b_mEq = (WorkingSet->nVarMax - WorkingSet->nVar) - 1;
    smax = MeritFunction->penaltyParam;
    s = 0.0;
    if (WorkingSet->sizes[1] >= 1) {
      ix = WorkingSet->sizes[1];
      for (b_kend = 0; b_kend < ix; b_kend++) {
        s += fabs(TrialState->cEq->data[b_kend]);
      }
    }

    qpfvalQuadExcess = 0.0;
    for (b_kend = 0; b_kend < mIneq; b_kend++) {
      qpfvalQuadExcess_tmp = TrialState->cIneq->data[b_kend];
      if (qpfvalQuadExcess_tmp > 0.0) {
        qpfvalQuadExcess += qpfvalQuadExcess_tmp;
      }
    }

    s += qpfvalQuadExcess;
    qpfvalQuadExcess = MeritFunction->linearizedConstrViol;
    qpfvalQuadExcess_tmp = 0.0;
    if (b_mEq >= 1) {
      b_kend = WorkingSet->nVar + b_mEq;
      for (mIneq = idx_positive; mIneq <= b_kend; mIneq++) {
        qpfvalQuadExcess_tmp += fabs(TrialState->xstar->data[mIneq - 1]);
      }
    }

    MeritFunction->linearizedConstrViol = qpfvalQuadExcess_tmp;
    qpfvalQuadExcess = (s + qpfvalQuadExcess) - qpfvalQuadExcess_tmp;
    if ((qpfvalQuadExcess > 2.2204460492503131E-16) && (beta > 0.0)) {
      if (TrialState->sqpFval == 0.0) {
        smax = 1.0;
      } else {
        smax = 1.5;
      }

      smax = smax * beta / qpfvalQuadExcess;
    }

    if (smax < MeritFunction->penaltyParam) {
      MeritFunction->phi = smax * s + TrialState->sqpFval;
      if (((MeritFunction->initConstrViolationEq +
            MeritFunction->initConstrViolationIneq) * smax +
           MeritFunction->initFval) - MeritFunction->phi > (real_T)
          MeritFunction->nPenaltyDecreases * MeritFunction->threshold) {
        MeritFunction->nPenaltyDecreases++;
        if ((MeritFunction->nPenaltyDecreases << 1) > TrialState->sqpIterations)
        {
          MeritFunction->threshold *= 10.0;
        }

        MeritFunction->penaltyParam = fmax(smax, 1.0E-10);
      } else {
        MeritFunction->phi = MeritFunction->penaltyParam * s +
          TrialState->sqpFval;
      }
    } else {
      MeritFunction->penaltyParam = fmax(smax, 1.0E-10);
      MeritFunction->phi = MeritFunction->penaltyParam * s + TrialState->sqpFval;
    }

    MeritFunction->phiPrimePlus = fmin(beta - MeritFunction->penaltyParam * s,
      0.0);
    b_kend = b_WorkingSet.isActiveIdx[1] - 2;
    for (mIneq = 0; mIneq < mEq; mIneq++) {
      if ((memspace->workspace_int->data[mIneq] != 0) &&
          (memspace->workspace_int->data[mIneq + mEq] != 0)) {
        tf = true;
      } else {
        tf = false;
      }

      b_mEq = (mIneq + b_kend) + 1;
      TrialState->lambda->data[b_mEq] *= (real_T)tf;
    }

    b_kend = b_WorkingSet.isActiveIdx[2];
    idx_max = b_WorkingSet.nActiveConstr;
    for (mIneq = b_kend; mIneq <= idx_max; mIneq++) {
      if (b_WorkingSet.Wid->data[mIneq - 1] == 3) {
        TrialState->lambda->data[mIneq - 1] *= (real_T)memspace->
          workspace_int->data[(b_WorkingSet.Wlocalidx->data[mIneq - 1] + (mEq <<
          1)) - 1];
      }
    }
  }

  emxInitStruct_s_Wd0eYcEyLXg48EJ(&c_WorkingSet);
  emxCopyStruct_s_Wd0eYcEyLXg48EJ(&c_WorkingSet, &b_WorkingSet);
  mEq = (b_WorkingSet.sizes[3] - idx_negative) - b_WorkingSet.sizes[2];
  mIneq = b_WorkingSet.nActiveConstr;
  while ((mIneq > b_WorkingSet.sizes[0] + b_WorkingSet.sizes[1]) && (nVarOrig >
          0)) {
    if ((c_WorkingSet.Wid->data[mIneq - 1] == 4) &&
        (c_WorkingSet.Wlocalidx->data[mIneq - 1] > mEq)) {
      beta = TrialState->lambda->data[c_WorkingSet.nActiveConstr - 1];
      TrialState->lambda->data[c_WorkingSet.nActiveConstr - 1] = 0.0;
      TrialState->lambda->data[mIneq - 1] = beta;
      MPC_fmincon_removeConstr(&c_WorkingSet, mIneq);
      nVarOrig--;
    }

    mIneq--;
  }

  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet);
  QPObjective->nvar = WorkingSet->nVar;
  QPObjective->hasLinear = true;
  QPObjective->objtype = 3;
  emxCopyStruct_s_Wd0eYcEyLXg48EJ(WorkingSet, &c_WorkingSet);
  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&c_WorkingSet);
  MPC_fmincon_setProblemType(WorkingSet, 3);
  MPC_fmincon_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
    WorkingSet->sizes, WorkingSet->isActiveIdx, WorkingSet->Wid,
    WorkingSet->Wlocalidx, memspace->workspace_double);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T MPC_fmincon_step_o(int32_T *STEP_TYPE,
  emxArray_real_T_MPC_fmincon_T *Hessian, const emxArray_real_T_MPC_fmincon_T
  *lb, const emxArray_real_T_MPC_fmincon_T *ub, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *
  TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions)
{
  emxArray_real_T_MPC_fmincon_T *d;
  somzaGboVhDG7PNQS6E98jD_MPC_f_T qpoptions_0;
  real_T TrialState_0;
  real_T constrViolationEq;
  real_T constrViolationIneq;
  real_T penaltyParamTrial;
  int32_T eqNonLinStart;
  int32_T exitg1;
  int32_T iH0;
  int32_T k;
  int32_T kend;
  int32_T nVar;
  boolean_T checkBoundViolation;
  boolean_T guard1;
  boolean_T nonlinEqRemoved;
  boolean_T stepSuccess;
  stepSuccess = true;
  checkBoundViolation = true;
  nVar = WorkingSet->nVar - 1;
  for (k = 0; k <= nVar; k++) {
    if (*STEP_TYPE != 3) {
      TrialState->xstar->data[k] = TrialState->xstarsqp->data[k];
    } else {
      TrialState->searchDir->data[k] = TrialState->xstar->data[k];
    }
  }

  MPC_fmincon_emxInit_real_T(&d, 1);
  do {
    exitg1 = 0;
    guard1 = false;
    switch (*STEP_TYPE) {
     case 1:
      qpoptions_0 = *qpoptions;
      MPC_fmincon_driver_d(Hessian, TrialState->grad, TrialState, memspace,
                           WorkingSet, QRManager, CholManager, QPObjective,
                           &qpoptions_0, qpoptions->MaxIterations);
      if (TrialState->state > 0) {
        eqNonLinStart = WorkingSet->sizes[2];
        penaltyParamTrial = MeritFunction->penaltyParam;
        constrViolationEq = 0.0;
        if (WorkingSet->sizes[1] >= 1) {
          kend = WorkingSet->sizes[1];
          for (k = 0; k < kend; k++) {
            constrViolationEq += fabs(TrialState->cEq->data[k]);
          }
        }

        constrViolationIneq = 0.0;
        for (k = 0; k < eqNonLinStart; k++) {
          TrialState_0 = TrialState->cIneq->data[k];
          if (TrialState_0 > 0.0) {
            constrViolationIneq += TrialState_0;
          }
        }

        constrViolationEq += constrViolationIneq;
        constrViolationIneq = MeritFunction->linearizedConstrViol;
        MeritFunction->linearizedConstrViol = 0.0;
        constrViolationIneq += constrViolationEq;
        if ((constrViolationIneq > 2.2204460492503131E-16) && (TrialState->fstar
             > 0.0)) {
          if (TrialState->sqpFval == 0.0) {
            penaltyParamTrial = 1.0;
          } else {
            penaltyParamTrial = 1.5;
          }

          penaltyParamTrial = penaltyParamTrial * TrialState->fstar /
            constrViolationIneq;
        }

        if (penaltyParamTrial < MeritFunction->penaltyParam) {
          MeritFunction->phi = penaltyParamTrial * constrViolationEq +
            TrialState->sqpFval;
          if (((MeritFunction->initConstrViolationEq +
                MeritFunction->initConstrViolationIneq) * penaltyParamTrial +
               MeritFunction->initFval) - MeritFunction->phi > (real_T)
              MeritFunction->nPenaltyDecreases * MeritFunction->threshold) {
            MeritFunction->nPenaltyDecreases++;
            if ((MeritFunction->nPenaltyDecreases << 1) >
                TrialState->sqpIterations) {
              MeritFunction->threshold *= 10.0;
            }

            MeritFunction->penaltyParam = fmax(penaltyParamTrial, 1.0E-10);
          } else {
            MeritFunction->phi = MeritFunction->penaltyParam * constrViolationEq
              + TrialState->sqpFval;
          }
        } else {
          MeritFunction->penaltyParam = fmax(penaltyParamTrial, 1.0E-10);
          MeritFunction->phi = MeritFunction->penaltyParam * constrViolationEq +
            TrialState->sqpFval;
        }

        MeritFunction->phiPrimePlus = fmin(TrialState->fstar -
          MeritFunction->penaltyParam * constrViolationEq, 0.0);
      }

      MPC_fmincon_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
        WorkingSet->sizes, WorkingSet->isActiveIdx, WorkingSet->Wid,
        WorkingSet->Wlocalidx, memspace->workspace_double);
      nonlinEqRemoved = (WorkingSet->mEqRemoved > 0);
      if (WorkingSet->indexEqRemoved->size[0] > 0) {
        while ((WorkingSet->mEqRemoved > 0) && (WorkingSet->indexEqRemoved->
                data[WorkingSet->mEqRemoved - 1] >= TrialState->iNonEq0)) {
          MPC_fmincon_addAeqConstr(WorkingSet, WorkingSet->indexEqRemoved->
            data[WorkingSet->mEqRemoved - 1]);
          WorkingSet->mEqRemoved--;
        }
      }

      if (nonlinEqRemoved) {
        eqNonLinStart = (WorkingSet->sizes[0] + TrialState->iNonEq0) - 1;
        kend = TrialState->mNonlinEq;
        for (k = 0; k < kend; k++) {
          WorkingSet->Wlocalidx->data[eqNonLinStart + k] = TrialState->iNonEq0 +
            k;
        }
      }

      if ((TrialState->state <= 0) && (TrialState->state != -6)) {
        *STEP_TYPE = 2;
      } else {
        for (k = 0; k <= nVar; k++) {
          TrialState->delta_x->data[k] = TrialState->xstar->data[k];
        }

        guard1 = true;
      }
      break;

     case 2:
      iH0 = WorkingSet->nWConstr[0] + WorkingSet->nWConstr[1];
      eqNonLinStart = iH0 + 1;
      kend = WorkingSet->nActiveConstr;
      for (k = eqNonLinStart; k <= kend; k++) {
        WorkingSet->isActiveConstr->data[(WorkingSet->isActiveIdx
          [WorkingSet->Wid->data[k - 1] - 1] + WorkingSet->Wlocalidx->data[k - 1])
          - 2] = false;
      }

      WorkingSet->nWConstr[2] = 0;
      WorkingSet->nWConstr[3] = 0;
      WorkingSet->nWConstr[4] = 0;
      WorkingSet->nActiveConstr = iH0;
      kend = d->size[0];
      d->size[0] = TrialState->xstar->size[0];
      MPC_fm_emxEnsureCapacity_real_T(d, kend);
      iH0 = TrialState->xstar->size[0];
      for (kend = 0; kend < iH0; kend++) {
        d->data[kend] = TrialState->xstar->data[kend];
      }

      kend = WorkingSet->sizes[3] - 1;
      eqNonLinStart = WorkingSet->sizes[4] - 1;
      if (lb->size[0] != 0) {
        if (ub->size[0] == 0) {
          for (k = 0; k <= kend; k++) {
            penaltyParamTrial = WorkingSet->lb->data[WorkingSet->indexLB->data[k]
              - 1];
            if (-d->data[WorkingSet->indexLB->data[k] - 1] > penaltyParamTrial)
            {
              d->data[WorkingSet->indexLB->data[k] - 1] = -penaltyParamTrial +
                fabs(penaltyParamTrial);
            }
          }
        } else {
          for (k = 0; k <= kend; k++) {
            penaltyParamTrial = WorkingSet->lb->data[WorkingSet->indexLB->data[k]
              - 1];
            if (-d->data[WorkingSet->indexLB->data[k] - 1] > penaltyParamTrial)
            {
              if (rtIsInf(ub->data[WorkingSet->indexLB->data[k] - 1])) {
                d->data[WorkingSet->indexLB->data[k] - 1] = -WorkingSet->
                  lb->data[WorkingSet->indexLB->data[k] - 1] + fabs
                  (WorkingSet->lb->data[WorkingSet->indexLB->data[k] - 1]);
              } else {
                d->data[WorkingSet->indexLB->data[k] - 1] = (WorkingSet->
                  ub->data[WorkingSet->indexLB->data[k] - 1] - penaltyParamTrial)
                  / 2.0;
              }
            }
          }
        }
      }

      if (ub->size[0] != 0) {
        if (lb->size[0] == 0) {
          for (k = 0; k <= eqNonLinStart; k++) {
            penaltyParamTrial = WorkingSet->ub->data[WorkingSet->indexUB->data[k]
              - 1];
            if (d->data[WorkingSet->indexUB->data[k] - 1] > penaltyParamTrial) {
              d->data[WorkingSet->indexUB->data[k] - 1] = penaltyParamTrial -
                fabs(penaltyParamTrial);
            }
          }
        } else {
          for (k = 0; k <= eqNonLinStart; k++) {
            penaltyParamTrial = WorkingSet->ub->data[WorkingSet->indexUB->data[k]
              - 1];
            if (d->data[WorkingSet->indexUB->data[k] - 1] > penaltyParamTrial) {
              if (rtIsInf(lb->data[WorkingSet->indexUB->data[k] - 1])) {
                d->data[WorkingSet->indexUB->data[k] - 1] = WorkingSet->ub->
                  data[WorkingSet->indexUB->data[k] - 1] - fabs(WorkingSet->
                  ub->data[WorkingSet->indexUB->data[k] - 1]);
              } else {
                d->data[WorkingSet->indexUB->data[k] - 1] = (penaltyParamTrial -
                  WorkingSet->lb->data[WorkingSet->indexUB->data[k] - 1]) / 2.0;
              }
            }
          }
        }
      }

      kend = TrialState->xstar->size[0];
      TrialState->xstar->size[0] = d->size[0];
      MPC_fm_emxEnsureCapacity_real_T(TrialState->xstar, kend);
      iH0 = d->size[0];
      for (kend = 0; kend < iH0; kend++) {
        TrialState->xstar->data[kend] = d->data[kend];
      }

      MPC_fmincon_relaxed(Hessian, TrialState->grad, TrialState, MeritFunction,
                          memspace, WorkingSet, QRManager, CholManager,
                          QPObjective, qpoptions);
      for (k = 0; k <= nVar; k++) {
        TrialState->delta_x->data[k] = TrialState->xstar->data[k];
      }

      guard1 = true;
      break;

     default:
      stepSuccess = MPC_fmincon_soc(Hessian, TrialState->grad, TrialState,
        memspace, WorkingSet, QRManager, CholManager, QPObjective, qpoptions);
      checkBoundViolation = stepSuccess;
      if (stepSuccess && (TrialState->state != -6)) {
        for (k = 0; k <= nVar; k++) {
          TrialState->delta_x->data[k] = TrialState->xstar->data[k] +
            TrialState->socDirection->data[k];
        }
      }

      guard1 = true;
      break;
    }

    if (guard1) {
      if (TrialState->state != -6) {
        exitg1 = 1;
      } else {
        kend = Hessian->size[0] - 1;
        penaltyParamTrial = 0.0;
        constrViolationEq = 1.0;
        for (k = 0; k <= kend; k++) {
          penaltyParamTrial = fmax(penaltyParamTrial, fabs(TrialState->
            grad->data[k]));
          constrViolationEq = fmax(constrViolationEq, fabs(TrialState->
            xstar->data[k]));
        }

        penaltyParamTrial = fmax(2.2204460492503131E-16, penaltyParamTrial /
          constrViolationEq);
        for (k = 0; k <= kend; k++) {
          iH0 = (kend + 1) * k;
          for (eqNonLinStart = 0; eqNonLinStart < k; eqNonLinStart++) {
            Hessian->data[iH0 + eqNonLinStart] = 0.0;
          }

          Hessian->data[k + Hessian->size[0] * k] = penaltyParamTrial;
          iH0 += k;
          eqNonLinStart = kend - k;
          if (eqNonLinStart - 1 >= 0) {
            memset(&Hessian->data[iH0 + 1], 0, (uint32_T)((eqNonLinStart + iH0)
                    - iH0) * sizeof(real_T));
          }
        }
      }
    }
  } while (exitg1 == 0);

  if (checkBoundViolation) {
    eqNonLinStart = WorkingSet->sizes[3];
    k = WorkingSet->sizes[4];
    kend = d->size[0];
    d->size[0] = TrialState->delta_x->size[0];
    MPC_fm_emxEnsureCapacity_real_T(d, kend);
    iH0 = TrialState->delta_x->size[0];
    for (kend = 0; kend < iH0; kend++) {
      d->data[kend] = TrialState->delta_x->data[kend];
    }

    if (lb->size[0] != 0) {
      for (nVar = 0; nVar < eqNonLinStart; nVar++) {
        constrViolationEq = d->data[WorkingSet->indexLB->data[nVar] - 1];
        penaltyParamTrial = (TrialState->xstarsqp->data[WorkingSet->
                             indexLB->data[nVar] - 1] + constrViolationEq) -
          lb->data[WorkingSet->indexLB->data[nVar] - 1];
        if (penaltyParamTrial < 0.0) {
          d->data[WorkingSet->indexLB->data[nVar] - 1] = constrViolationEq -
            penaltyParamTrial;
          TrialState->xstar->data[WorkingSet->indexLB->data[nVar] - 1] -=
            penaltyParamTrial;
        }
      }
    }

    if (ub->size[0] != 0) {
      for (nVar = 0; nVar < k; nVar++) {
        constrViolationEq = d->data[WorkingSet->indexUB->data[nVar] - 1];
        penaltyParamTrial = (ub->data[WorkingSet->indexUB->data[nVar] - 1] -
                             TrialState->xstarsqp->data[WorkingSet->
                             indexUB->data[nVar] - 1]) - constrViolationEq;
        if (penaltyParamTrial < 0.0) {
          d->data[WorkingSet->indexUB->data[nVar] - 1] = constrViolationEq +
            penaltyParamTrial;
          TrialState->xstar->data[WorkingSet->indexUB->data[nVar] - 1] +=
            penaltyParamTrial;
        }
      }
    }

    kend = TrialState->delta_x->size[0];
    TrialState->delta_x->size[0] = d->size[0];
    MPC_fm_emxEnsureCapacity_real_T(TrialState->delta_x, kend);
    iH0 = d->size[0];
    for (kend = 0; kend < iH0; kend++) {
      TrialState->delta_x->data[kend] = d->data[kend];
    }
  }

  MPC_fmincon_emxFree_real_T(&d);
  return stepSuccess;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_evalObjAndConstr(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const s_orfxVcOir3wnnUkquctgqH_MPC__T obj_next_next_next_next_next__1, const
  emxArray_real_T_MPC_fmincon_T *x, emxArray_real_T_MPC_fmincon_T
  *Cineq_workspace, int32_T ineq0, emxArray_real_T_MPC_fmincon_T *Ceq_workspace,
  int32_T eq0, real_T *fval, int32_T *status)
{
  boolean_T tmp;
  *fval = MPC_fmi_eML_blk_kernel_anonFcn1(obj_next_next_next_next_next__1.x0,
    obj_next_next_next_next_next__1.xref, obj_next_next_next_next_next__1.uref,
    obj_next_next_next_next_next__1.N, x);
  tmp = rtIsNaN(*fval);
  if (rtIsInf(*fval) || tmp) {
    if (tmp) {
      *status = -3;
    } else if (*fval < 0.0) {
      *status = -1;
    } else {
      *status = -2;
    }
  } else {
    *status = MPC_fmincon_computeConstraints_(obj_next_next_next_next_b_value,
      obj_next_next_next_next_next_b_, obj_next_next_next_next_next_ne,
      obj_next_next_next_next_next__0, x, Cineq_workspace, ineq0, Ceq_workspace,
      eq0);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T MPC_fmincon_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
  const emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T mIneq, const
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T mEq, boolean_T
  evalWellDefined)
{
  real_T val;
  int32_T kend;
  if (evalWellDefined) {
    real_T constrViolationEq;
    real_T constrViolationIneq;
    constrViolationEq = 0.0;
    if (mEq >= 1) {
      for (kend = 0; kend < mEq; kend++) {
        constrViolationEq += fabs(Ceq_workspace->data[kend]);
      }
    }

    constrViolationIneq = 0.0;
    for (kend = 0; kend < mIneq; kend++) {
      real_T Cineq_workspace_0;
      Cineq_workspace_0 = Cineq_workspace->data[kend];
      if (Cineq_workspace_0 > 0.0) {
        constrViolationIneq += Cineq_workspace_0;
      }
    }

    val = (constrViolationEq + constrViolationIneq) * obj_penaltyParam + fval;
  } else {
    val = (rtInf);
  }

  return val;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_driver(emxArray_real_T_MPC_fmincon_T *Hessian, const
  emxArray_real_T_MPC_fmincon_T *lb, const emxArray_real_T_MPC_fmincon_T *ub,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const coder_internal_stickyStruct_9_T *FcnEvaluator,
  s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  int32_T runTimeOptions_MaxFunctionEvalu)
{
  s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T Flags;
  somzaGboVhDG7PNQS6E98jD_MPC_f_T expl_temp;
  real_T TrialState_0;
  real_T phi_alpha;
  int32_T b_ix;
  int32_T b_iy;
  int32_T b_mLinIneq;
  int32_T b_nVar;
  int32_T b_nVar_tmp;
  int32_T b_nVar_tmp_0;
  int32_T d_ix;
  int32_T eqL0;
  int32_T g;
  int32_T i;
  int32_T ix;
  int32_T iy;
  int32_T k;
  int32_T mConstr;
  int32_T mConstr_tmp;
  int32_T mEq;
  int32_T mFixed;
  int32_T mIneq;
  int32_T mLB;
  int32_T mLinEq;
  int32_T mLinIneq;
  int32_T mUB;
  int32_T qpoptions_MaxIterations;
  boolean_T b;
  boolean_T tooSmallX;
  static const char_T q[7] = { 'f', 'm', 'i', 'n', 'c', 'o', 'n' };

  somzaGboVhDG7PNQS6E98jD_MPC_f_T expl_temp_0;
  int32_T exitg1;
  int32_T exitg2;
  int32_T nVar_tmp_tmp;
  boolean_T exitg3;
  boolean_T socTaken;
  nVar_tmp_tmp = WorkingSet->nVar;
  mFixed = WorkingSet->sizes[0];
  mEq = WorkingSet->sizes[1];
  mIneq = WorkingSet->sizes[2];
  mLB = WorkingSet->sizes[3];
  mUB = WorkingSet->sizes[4];
  mConstr_tmp = WorkingSet->sizes[0] + WorkingSet->sizes[1];
  mConstr = ((mConstr_tmp + WorkingSet->sizes[2]) + WorkingSet->sizes[3]) +
    WorkingSet->sizes[4];
  mLinIneq = WorkingSet->sizes[2] - TrialState->mNonlinIneq;
  mLinEq = WorkingSet->sizes[1] - TrialState->mNonlinEq;
  b_nVar = ((WorkingSet->sizes[2] + WorkingSet->sizes[3]) + WorkingSet->sizes[4])
    + (WorkingSet->sizes[0] << 1);
  if (WorkingSet->nVar >= b_nVar) {
    b_nVar = WorkingSet->nVar;
  }

  qpoptions_MaxIterations = 10 * b_nVar;
  TrialState->steplength = 1.0;
  MPC_fmincon_test_exit(MeritFunction, WorkingSet, TrialState, lb, ub,
                        runTimeOptions_MaxFunctionEvalu, &Flags.gradOK,
                        &Flags.fevalOK, &Flags.done, &Flags.stepAccepted,
                        &Flags.failedLineSearch, &Flags.stepType);
  MPC_fmincon_saveJacobian(TrialState, WorkingSet->nVar, WorkingSet->sizes[2],
    WorkingSet->Aineq, TrialState->iNonIneq0, WorkingSet->sizes[1],
    WorkingSet->Aeq, TrialState->iNonEq0, WorkingSet->ldA);
  TrialState->sqpFval_old = TrialState->sqpFval;
  b_nVar = TrialState->xstarsqp->size[0] - 1;
  for (k = 0; k <= b_nVar; k++) {
    TrialState->xstarsqp_old->data[k] = TrialState->xstarsqp->data[k];
    TrialState->grad_old->data[k] = TrialState->grad->data[k];
  }

  b_nVar_tmp = TrialState->mIneq;
  for (k = 0; k < b_nVar_tmp; k++) {
    TrialState->cIneq_old->data[k] = TrialState->cIneq->data[k];
  }

  b_nVar_tmp_0 = TrialState->mEq;
  for (k = 0; k < b_nVar_tmp_0; k++) {
    TrialState->cEq_old->data[k] = TrialState->cEq->data[k];
  }

  if (!Flags.done) {
    TrialState->sqpIterations = 1;
  }

  while (!Flags.done) {
    if ((!Flags.stepAccepted) && (!Flags.failedLineSearch)) {
      expl_temp.IterDisplayQP = false;
      expl_temp.RemainFeasible = false;
      expl_temp.ProbRelTolFactor = 1.0;
      expl_temp.ConstrRelTolFactor = 1.0;
      expl_temp.PricingTolerance = 0.0;
      expl_temp.ObjectiveLimit = (rtMinusInf);
      expl_temp.ConstraintTolerance = 1.0E-6;
      expl_temp.OptimalityTolerance = 2.2204460492503131E-14;
      expl_temp.StepTolerance = 1.0E-6;
      expl_temp.MaxIterations = qpoptions_MaxIterations;
      for (i = 0; i < 7; i++) {
        expl_temp.SolverName[i] = q[i];
      }
    }

    do {
      exitg1 = 0;
      socTaken = !Flags.failedLineSearch;
      if ((!Flags.stepAccepted) && socTaken) {
        if (Flags.stepType != 3) {
          MPC_fm_updateWorkingSetForNewQP(TrialState->xstarsqp, WorkingSet,
            mIneq, TrialState->mNonlinIneq, TrialState->cIneq, mEq,
            TrialState->mNonlinEq, TrialState->cEq, mLB, lb, mUB, ub, mFixed);
        }

        expl_temp_0 = expl_temp;
        Flags.stepAccepted = MPC_fmincon_step_o(&Flags.stepType, Hessian, lb, ub,
          TrialState, MeritFunction, memspace, WorkingSet, QRManager,
          CholManager, QPObjective, &expl_temp_0);
        if (Flags.stepAccepted) {
          for (k = 0; k < nVar_tmp_tmp; k++) {
            TrialState->xstarsqp->data[k] += TrialState->delta_x->data[k];
          }

          MPC_fmincon_evalObjAndConstr(FcnEvaluator->next.next.next.next.b_value,
            FcnEvaluator->next.next.next.next.next.b_value,
            FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
            FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
            FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
            TrialState->xstarsqp, TrialState->cIneq, TrialState->iNonIneq0,
            TrialState->cEq, TrialState->iNonEq0, &TrialState->sqpFval, &k);
          Flags.fevalOK = (k == 1);
          TrialState->FunctionEvaluations++;
          if (mLinIneq > 0) {
            MPC_fmincon_xgemv_bujmjs(nVar_tmp_tmp, mLinIneq, WorkingSet->Aineq,
              WorkingSet->ldA, TrialState->xstarsqp, TrialState->cIneq);
          }

          if (mLinEq > 0) {
            MPC_fmincon_xgemv_bujmjs(nVar_tmp_tmp, mLinEq, WorkingSet->Aeq,
              WorkingSet->ldA, TrialState->xstarsqp, TrialState->cEq);
          }

          MeritFunction->phiFullStep = MPC_fmincon_computeMeritFcn
            (MeritFunction->penaltyParam, TrialState->sqpFval, TrialState->cIneq,
             mIneq, TrialState->cEq, mEq, Flags.fevalOK);
        }

        if ((Flags.stepType == 1) && Flags.stepAccepted && Flags.fevalOK &&
            (MeritFunction->phi < MeritFunction->phiFullStep) &&
            (TrialState->sqpFval < TrialState->sqpFval_old)) {
          Flags.stepType = 3;
          Flags.stepAccepted = false;
        } else {
          socTaken = ((Flags.stepType == 3) && Flags.stepAccepted);
          b = Flags.fevalOK;
          b_nVar = WorkingSet->nVar - 1;
          b_mLinIneq = TrialState->mIneq - TrialState->mNonlinIneq;
          d_ix = TrialState->mEq - TrialState->mNonlinEq;
          TrialState_0 = 1.0;
          eqL0 = 1;
          phi_alpha = MeritFunction->phiFullStep;
          for (k = 0; k <= b_nVar; k++) {
            TrialState->searchDir->data[k] = TrialState->delta_x->data[k];
          }

          do {
            exitg2 = 0;
            if (TrialState->FunctionEvaluations <
                runTimeOptions_MaxFunctionEvalu) {
              if (b && (phi_alpha <= TrialState_0 * 0.0001 *
                        MeritFunction->phiPrimePlus + MeritFunction->phi)) {
                exitg2 = 1;
              } else {
                TrialState_0 *= 0.7;
                for (k = 0; k <= b_nVar; k++) {
                  TrialState->delta_x->data[k] = TrialState_0 *
                    TrialState->xstar->data[k];
                }

                if (socTaken) {
                  phi_alpha = TrialState_0 * TrialState_0;
                  if ((b_nVar + 1 >= 1) && (!(phi_alpha == 0.0))) {
                    for (k = 0; k <= b_nVar; k++) {
                      TrialState->delta_x->data[k] += phi_alpha *
                        TrialState->socDirection->data[k];
                    }
                  }
                }

                tooSmallX = true;
                k = 0;
                exitg3 = false;
                while ((!exitg3) && (k <= b_nVar)) {
                  if (1.0E-6 * fmax(1.0, fabs(TrialState->xstarsqp->data[k])) <=
                      fabs(TrialState->delta_x->data[k])) {
                    tooSmallX = false;
                    exitg3 = true;
                  } else {
                    k++;
                  }
                }

                if (tooSmallX) {
                  eqL0 = -2;
                  exitg2 = 1;
                } else {
                  for (k = 0; k <= b_nVar; k++) {
                    TrialState->xstarsqp->data[k] = TrialState->
                      xstarsqp_old->data[k] + TrialState->delta_x->data[k];
                  }

                  MPC_fmincon_evalObjAndConstr
                    (FcnEvaluator->next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
                     FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
                     TrialState->xstarsqp, TrialState->cIneq,
                     TrialState->iNonIneq0, TrialState->cEq, TrialState->iNonEq0,
                     &TrialState->sqpFval, &k);
                  if (b_mLinIneq > 0) {
                    MPC_fmincon_xgemv_bujmjs(b_nVar + 1, b_mLinIneq,
                      WorkingSet->Aineq, WorkingSet->ldA, TrialState->xstarsqp,
                      TrialState->cIneq);
                  }

                  if (d_ix > 0) {
                    MPC_fmincon_xgemv_bujmjs(b_nVar + 1, d_ix, WorkingSet->Aeq,
                      WorkingSet->ldA, TrialState->xstarsqp, TrialState->cEq);
                  }

                  TrialState->FunctionEvaluations++;
                  b = (k == 1);
                  phi_alpha = MPC_fmincon_computeMeritFcn
                    (MeritFunction->penaltyParam, TrialState->sqpFval,
                     TrialState->cIneq, TrialState->mIneq, TrialState->cEq,
                     TrialState->mEq, b);
                }
              }
            } else {
              eqL0 = 0;
              exitg2 = 1;
            }
          } while (exitg2 == 0);

          Flags.fevalOK = b;
          TrialState->steplength = TrialState_0;
          if (eqL0 > 0) {
            Flags.stepAccepted = true;
          } else {
            Flags.failedLineSearch = true;
          }
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (Flags.stepAccepted && socTaken) {
      for (k = 0; k < nVar_tmp_tmp; k++) {
        TrialState->xstarsqp->data[k] = TrialState->xstarsqp_old->data[k] +
          TrialState->delta_x->data[k];
      }

      for (k = 0; k < mConstr; k++) {
        TrialState_0 = TrialState->lambdasqp->data[k];
        TrialState->lambdasqp->data[k] = (TrialState->lambda->data[k] -
          TrialState_0) * TrialState->steplength + TrialState_0;
      }

      TrialState->sqpFval_old = TrialState->sqpFval;
      b_nVar = TrialState->xstarsqp->size[0] - 1;
      for (k = 0; k <= b_nVar; k++) {
        TrialState->xstarsqp_old->data[k] = TrialState->xstarsqp->data[k];
        TrialState->grad_old->data[k] = TrialState->grad->data[k];
      }

      for (k = 0; k < b_nVar_tmp; k++) {
        TrialState->cIneq_old->data[k] = TrialState->cIneq->data[k];
      }

      for (k = 0; k < b_nVar_tmp_0; k++) {
        TrialState->cEq_old->data[k] = TrialState->cEq->data[k];
      }

      Flags.gradOK = MPC_fm_computeFiniteDifferences(FiniteDifferences,
        TrialState->sqpFval, TrialState->cIneq, TrialState->iNonIneq0,
        TrialState->cEq, TrialState->iNonEq0, TrialState->xstarsqp,
        TrialState->grad, WorkingSet->Aineq, TrialState->iNonIneq0,
        WorkingSet->ldA, WorkingSet->Aeq, TrialState->iNonEq0, WorkingSet->ldA,
        lb, ub);
      TrialState->FunctionEvaluations += FiniteDifferences->numEvals;
    } else {
      TrialState->sqpFval = TrialState->sqpFval_old;
      b_nVar = TrialState->xstarsqp->size[0];
      for (k = 0; k < b_nVar; k++) {
        TrialState->xstarsqp->data[k] = TrialState->xstarsqp_old->data[k];
      }

      for (k = 0; k < b_nVar_tmp; k++) {
        TrialState->cIneq->data[k] = TrialState->cIneq_old->data[k];
      }

      for (k = 0; k < b_nVar_tmp_0; k++) {
        TrialState->cEq->data[k] = TrialState->cEq_old->data[k];
      }
    }

    MPC_fmincon_test_exit_k(&Flags, memspace, MeritFunction,
      fscales_cineq_constraint, WorkingSet, TrialState, QRManager, lb, ub,
      runTimeOptions_MaxFunctionEvalu);
    if ((!Flags.done) && Flags.stepAccepted) {
      Flags.stepAccepted = false;
      Flags.stepType = 1;
      Flags.failedLineSearch = false;
      eqL0 = (mFixed + TrialState->iNonEq0) - 1;
      b_nVar = (mConstr_tmp + TrialState->iNonIneq0) - 1;
      k = WorkingSet->ldA;
      for (b_mLinIneq = 0; b_mLinIneq < nVar_tmp_tmp; b_mLinIneq++) {
        TrialState_0 = TrialState->grad->data[b_mLinIneq];
        TrialState->delta_gradLag->data[b_mLinIneq] = TrialState_0;
        if (nVar_tmp_tmp >= 1) {
          TrialState->delta_gradLag->data[b_mLinIneq] = TrialState_0 -
            TrialState->grad_old->data[b_mLinIneq];
        }
      }

      if (TrialState->mNonlinEq > 0) {
        b_ix = (TrialState->iNonEq0 - 1) * WorkingSet->ldA + 1;
        if (nVar_tmp_tmp != 0) {
          ix = eqL0;
          iy = (TrialState->mNonlinEq - 1) * WorkingSet->ldA;
          b_iy = iy + b_ix;
          for (b_mLinIneq = b_ix; k < 0 ? b_mLinIneq >= b_iy : b_mLinIneq <=
               b_iy; b_mLinIneq += k) {
            g = (b_mLinIneq + nVar_tmp_tmp) - 1;
            for (d_ix = b_mLinIneq; d_ix <= g; d_ix++) {
              i = d_ix - b_mLinIneq;
              TrialState->delta_gradLag->data[i] += WorkingSet->Aeq->data[d_ix -
                1] * TrialState->lambdasqp->data[ix];
            }

            ix++;
          }

          b_ix = eqL0;
          ix = iy + 1;
          for (b_mLinIneq = 1; k < 0 ? b_mLinIneq >= ix : b_mLinIneq <= ix;
               b_mLinIneq += k) {
            iy = (b_mLinIneq + nVar_tmp_tmp) - 1;
            for (d_ix = b_mLinIneq; d_ix <= iy; d_ix++) {
              i = d_ix - b_mLinIneq;
              TrialState->delta_gradLag->data[i] += TrialState->
                JacCeqTrans_old->data[d_ix - 1] * -TrialState->lambdasqp->
                data[b_ix];
            }

            b_ix++;
          }
        }
      }

      if (TrialState->mNonlinIneq > 0) {
        eqL0 = (TrialState->iNonIneq0 - 1) * WorkingSet->ldA + 1;
        if (nVar_tmp_tmp != 0) {
          b_ix = b_nVar;
          b_iy = (TrialState->mNonlinIneq - 1) * WorkingSet->ldA;
          ix = b_iy + eqL0;
          for (b_mLinIneq = eqL0; k < 0 ? b_mLinIneq >= ix : b_mLinIneq <= ix;
               b_mLinIneq += k) {
            iy = (b_mLinIneq + nVar_tmp_tmp) - 1;
            for (d_ix = b_mLinIneq; d_ix <= iy; d_ix++) {
              i = d_ix - b_mLinIneq;
              TrialState->delta_gradLag->data[i] += WorkingSet->Aineq->data[d_ix
                - 1] * TrialState->lambdasqp->data[b_ix];
            }

            b_ix++;
          }

          d_ix = b_nVar;
          b_ix = b_iy + 1;
          for (b_nVar = 1; k < 0 ? b_nVar >= b_ix : b_nVar <= b_ix; b_nVar += k)
          {
            b_iy = (b_nVar + nVar_tmp_tmp) - 1;
            for (b_mLinIneq = b_nVar; b_mLinIneq <= b_iy; b_mLinIneq++) {
              i = b_mLinIneq - b_nVar;
              TrialState->delta_gradLag->data[i] +=
                TrialState->JacCineqTrans_old->data[b_mLinIneq - 1] *
                -TrialState->lambdasqp->data[d_ix];
            }

            d_ix++;
          }
        }
      }

      MPC_fmincon_saveJacobian(TrialState, nVar_tmp_tmp, mIneq,
        WorkingSet->Aineq, TrialState->iNonIneq0, mEq, WorkingSet->Aeq,
        TrialState->iNonEq0, WorkingSet->ldA);
      MPC_fmincon_BFGSUpdate(nVar_tmp_tmp, Hessian, TrialState->delta_x,
        TrialState->delta_gradLag, memspace->workspace_double);
      TrialState->sqpIterations++;
    }
  }
}

static void emxFreeStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->workspace_double);
  MPC_fmincon_emxFree_int32_T(&pStruct->workspace_int);
  MPC_fmincon_emxFree_int32_T(&pStruct->workspace_sort);
}

static void emxFreeStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_MPC__T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->grad);
  MPC_fmincon_emxFree_real_T(&pStruct->Hx);
}

static void emxFreeStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_MPC__T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->FMat);
}

static void emxFreeStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->QR);
  MPC_fmincon_emxFree_real_T(&pStruct->Q);
  MPC_fmincon_emxFree_int32_T(&pStruct->jpvt);
  MPC_fmincon_emxFree_real_T(&pStruct->tau);
}

static void emxFreeStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_MPC__T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->xref);
  MPC_fmincon_emxFree_real_T(&pStruct->uref);
}

static void emxFreeStruct_anonymous_functio(anonymous_function_MPC_fminco_T
  *pStruct)
{
  emxFreeStruct_s_orfxVcOir3wnnUk(&pStruct->workspace);
}

static void emxFreeStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T
  *pStruct)
{
  emxFreeStruct_anonymous_functio(&pStruct->objfun);
  MPC_fmincon_emxFree_real_T(&pStruct->cIneq_1);
  MPC_fmincon_emxFree_real_T(&pStruct->cEq_1);
  MPC_fmincon_emxFree_real_T(&pStruct->cIneq_2);
  MPC_fmincon_emxFree_real_T(&pStruct->cEq_2);
  MPC_fmincon_emxFree_boolean_T(&pStruct->hasLB);
  MPC_fmincon_emxFree_boolean_T(&pStruct->hasUB);
}

static void emxFreeStruct_coder_internal_st(coder_internal_stickyStruct_1_T
  *pStruct)
{
  emxFreeStruct_anonymous_functio(&pStruct->b_value);
}

static void emxFreeStruct_coder_internal__a(coder_internal_stickyStruct_2_T
  *pStruct)
{
  emxFreeStruct_coder_internal_st(&pStruct->next);
}

static void emxFreeStruct_coder_internal_ad(coder_internal_stickyStruct_3_T
  *pStruct)
{
  emxFreeStruct_coder_internal__a(&pStruct->next);
}

static void emxFreeStruct_coder_interna_add(coder_internal_stickyStruct_4_T
  *pStruct)
{
  emxFreeStruct_coder_internal_ad(&pStruct->next);
}

static void emxFreeStruct_coder_intern_add4(coder_internal_stickyStruct_5_T
  *pStruct)
{
  emxFreeStruct_coder_interna_add(&pStruct->next);
}

static void emxFreeStruct_coder_inter_add4i(coder_internal_stickyStruct_6_T
  *pStruct)
{
  emxFreeStruct_coder_intern_add4(&pStruct->next);
}

static void emxFreeStruct_coder_inte_add4ib(coder_internal_stickyStruct_7_T
  *pStruct)
{
  emxFreeStruct_coder_inter_add4i(&pStruct->next);
}

static void emxFreeStruct_coder_int_add4ibr(coder_internal_stickyStruct_8_T
  *pStruct)
{
  emxFreeStruct_coder_inte_add4ib(&pStruct->next);
}

static void emxFreeStruct_coder_in_add4ibr2(coder_internal_stickyStruct_9_T
  *pStruct)
{
  emxFreeStruct_coder_int_add4ibr(&pStruct->next);
}

static void emxFreeStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->xstarsqp);
  MPC_fmincon_emxFree_real_T(&pStruct->xstarsqp_old);
  MPC_fmincon_emxFree_real_T(&pStruct->cIneq);
  MPC_fmincon_emxFree_real_T(&pStruct->cIneq_old);
  MPC_fmincon_emxFree_real_T(&pStruct->cEq);
  MPC_fmincon_emxFree_real_T(&pStruct->cEq_old);
  MPC_fmincon_emxFree_real_T(&pStruct->grad);
  MPC_fmincon_emxFree_real_T(&pStruct->grad_old);
  MPC_fmincon_emxFree_real_T(&pStruct->lambdasqp);
  MPC_fmincon_emxFree_real_T(&pStruct->lambdaStopTest);
  MPC_fmincon_emxFree_real_T(&pStruct->lambdaStopTestPrev);
  MPC_fmincon_emxFree_real_T(&pStruct->delta_x);
  MPC_fmincon_emxFree_real_T(&pStruct->socDirection);
  MPC_fmincon_emxFree_int32_T(&pStruct->workingset_old);
  MPC_fmincon_emxFree_real_T(&pStruct->JacCineqTrans_old);
  MPC_fmincon_emxFree_real_T(&pStruct->JacCeqTrans_old);
  MPC_fmincon_emxFree_real_T(&pStruct->gradLag);
  MPC_fmincon_emxFree_real_T(&pStruct->delta_gradLag);
  MPC_fmincon_emxFree_real_T(&pStruct->xstar);
  MPC_fmincon_emxFree_real_T(&pStruct->lambda);
  MPC_fmincon_emxFree_real_T(&pStruct->searchDir);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void MPC_fmincon_fmincon(const real_T fun_workspace_x0[4], const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_xref, const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_uref, real_T fun_workspace_N,
  const emxArray_real_T_MPC_fmincon_T *x0, const emxArray_real_T_MPC_fmincon_T
  *lb, const emxArray_real_T_MPC_fmincon_T *ub, const
  s6lIrH89xwD47fl4e1dZNiE_MPC_f_T nonlcon_workspace,
  emxArray_real_T_MPC_fmincon_T *x)
{
  coder_internal_stickyStruct_9_T FcnEvaluator;
  emxArray_real_T_MPC_fmincon_T *Ceq;
  emxArray_real_T_MPC_fmincon_T *Cineq;
  emxArray_real_T_MPC_fmincon_T *Hessian;
  sG8JZ69axY52WWR6RKyApQC_MPC_f_T MeritFunction;
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T TrialState;
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T WorkingSet;
  s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T QRManager;
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T memspace;
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T QPObjective;
  s_tzdJIwhhx1jgWYIJOPrjUD_MPC__T FiniteDifferences;
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T CholManager;
  real_T TrialState_0;
  real_T fval;
  int32_T iATw0;
  int32_T iAeq0;
  int32_T loop_ub;
  int32_T mConstrMax;
  int32_T mConstrMax_tmp;
  int32_T mNonlinIneq;
  int32_T maxDims;
  int32_T nVar;
  int32_T nVarMax;
  boolean_T tmp;
  MPC_fmincon_emxInit_real_T(&Cineq, 1);
  MPC_fmincon_emxInit_real_T(&Ceq, 1);
  MPC_fmi_eML_blk_kernel_anonFcn2(nonlcon_workspace.x0, nonlcon_workspace.N, x0,
    Cineq, Ceq);
  mNonlinIneq = Cineq->size[0];
  nVar = x0->size[0] - 1;
  iATw0 = Ceq->size[0] << 1;
  mConstrMax_tmp = Cineq->size[0] + Ceq->size[0];
  mConstrMax = ((((mConstrMax_tmp + lb->size[0]) + ub->size[0]) + iATw0) +
                Cineq->size[0]) + 1;
  nVarMax = ((iATw0 + x0->size[0]) + Cineq->size[0]) + 1;
  if (nVarMax >= mConstrMax) {
    maxDims = nVarMax;
  } else {
    maxDims = mConstrMax;
  }

  MPC_fmincon_emxInit_real_T(&Hessian, 2);
  loop_ub = Hessian->size[0] * Hessian->size[1];
  Hessian->size[0] = x0->size[0];
  Hessian->size[1] = x0->size[0];
  MPC_fm_emxEnsureCapacity_real_T(Hessian, loop_ub);
  loop_ub = x0->size[0] * x0->size[0];
  if (loop_ub - 1 >= 0) {
    memset(&Hessian->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  if (x0->size[0] > 0) {
    for (iAeq0 = 0; iAeq0 <= nVar; iAeq0++) {
      Hessian->data[iAeq0 + Hessian->size[0] * iAeq0] = 1.0;
    }
  }

  emxInitStruct_s_0Mw3d4AlMrOoSnA(&TrialState);
  MPC_fmincon_factoryConstruct(nVarMax, mConstrMax, Cineq->size[0], Ceq->size[0],
    x0, Cineq->size[0], Ceq->size[0], &TrialState);
  for (iAeq0 = 0; iAeq0 <= nVar; iAeq0++) {
    TrialState.xstarsqp->data[iAeq0] = x0->data[iAeq0];
  }

  emxInitStruct_coder_internal_st(&FcnEvaluator);
  FcnEvaluator.next.next.next.next.b_value = Ceq->size[0];
  FcnEvaluator.next.next.next.next.next.b_value = Cineq->size[0];
  FcnEvaluator.next.next.next.next.next.next.next.b_value.workspace =
    nonlcon_workspace;
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[0] =
    fun_workspace_x0[0];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[1] =
    fun_workspace_x0[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[2] =
    fun_workspace_x0[2];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[3] =
    fun_workspace_x0[3];
  loop_ub =
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->
    size[0] *
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->
    size[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->size
    [0] = 4;
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->size
    [1] = fun_workspace_xref->size[1];
  MPC_fm_emxEnsureCapacity_real_T
    (FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref,
     loop_ub);
  loop_ub = fun_workspace_xref->size[1] << 2;
  for (iAeq0 = 0; iAeq0 < loop_ub; iAeq0++) {
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->
      data[iAeq0] = fun_workspace_xref->data[iAeq0];
  }

  loop_ub =
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.uref->
    size[0] *
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.uref->
    size[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.uref->size
    [0] = 2;
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.uref->size
    [1] = fun_workspace_uref->size[1];
  MPC_fm_emxEnsureCapacity_real_T
    (FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.uref,
     loop_ub);
  loop_ub = fun_workspace_uref->size[1] << 1;
  for (iAeq0 = 0; iAeq0 < loop_ub; iAeq0++) {
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.uref->
      data[iAeq0] = fun_workspace_uref->data[iAeq0];
  }

  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.N =
    fun_workspace_N;
  emxInitStruct_s_tzdJIwhhx1jgWYI(&FiniteDifferences);
  MPC_fmincon_factoryConstruct_i(fun_workspace_x0, fun_workspace_xref,
    fun_workspace_uref, fun_workspace_N, nonlcon_workspace, x0->size[0],
    Cineq->size[0], Ceq->size[0], lb, ub, &FiniteDifferences);
  emxInitStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  QRManager.ldq = maxDims;
  loop_ub = QRManager.QR->size[0] * QRManager.QR->size[1];
  QRManager.QR->size[0] = maxDims;
  QRManager.QR->size[1] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(QRManager.QR, loop_ub);
  loop_ub = QRManager.Q->size[0] * QRManager.Q->size[1];
  QRManager.Q->size[0] = maxDims;
  QRManager.Q->size[1] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(QRManager.Q, loop_ub);
  loop_ub = maxDims * maxDims;
  for (iAeq0 = 0; iAeq0 < loop_ub; iAeq0++) {
    QRManager.Q->data[iAeq0] = 0.0;
  }

  loop_ub = QRManager.jpvt->size[0];
  QRManager.jpvt->size[0] = maxDims;
  MPC_f_emxEnsureCapacity_int32_T(QRManager.jpvt, loop_ub);
  for (iAeq0 = 0; iAeq0 < maxDims; iAeq0++) {
    QRManager.jpvt->data[iAeq0] = 0;
  }

  QRManager.mrows = 0;
  QRManager.ncols = 0;
  loop_ub = QRManager.tau->size[0];
  QRManager.tau->size[0] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(QRManager.tau, loop_ub);
  QRManager.minRowCol = 0;
  QRManager.usedPivoting = false;
  emxInitStruct_s_vdGXtauKr5HuLAq(&CholManager);
  loop_ub = CholManager.FMat->size[0] * CholManager.FMat->size[1];
  CholManager.FMat->size[0] = maxDims;
  CholManager.FMat->size[1] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(CholManager.FMat, loop_ub);
  CholManager.ldm = maxDims;
  CholManager.ndims = 0;
  CholManager.info = 0;
  CholManager.scaleFactor = 0.0;
  CholManager.ConvexCheck = true;
  CholManager.regTol_ = (rtInf);
  CholManager.workspace_ = (rtInf);
  CholManager.workspace2_ = (rtInf);
  emxInitStruct_s_saWPFfMboRdWeRq(&QPObjective);
  loop_ub = QPObjective.grad->size[0];
  QPObjective.grad->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(QPObjective.grad, loop_ub);
  loop_ub = QPObjective.Hx->size[0];
  QPObjective.Hx->size[0] = nVarMax - 1;
  MPC_fm_emxEnsureCapacity_real_T(QPObjective.Hx, loop_ub);
  QPObjective.maxVar = nVarMax;
  QPObjective.beta = 0.0;
  QPObjective.rho = 0.0;
  QPObjective.prev_objtype = 3;
  QPObjective.prev_nvar = 0;
  QPObjective.prev_hasLinear = false;
  QPObjective.gammaScalar = 0.0;
  QPObjective.nvar = x0->size[0];
  QPObjective.hasLinear = true;
  QPObjective.objtype = 3;
  emxInitStruct_s_pIaUYPkQBTqVmAK(&memspace);
  loop_ub = memspace.workspace_double->size[0] * memspace.workspace_double->
    size[1];
  memspace.workspace_double->size[0] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(memspace.workspace_double, loop_ub);
  if (nVarMax >= 2) {
    loop_ub = memspace.workspace_double->size[0] *
      memspace.workspace_double->size[1];
    memspace.workspace_double->size[1] = nVarMax;
    MPC_fm_emxEnsureCapacity_real_T(memspace.workspace_double, loop_ub);
  } else {
    loop_ub = memspace.workspace_double->size[0] *
      memspace.workspace_double->size[1];
    memspace.workspace_double->size[1] = 2;
    MPC_fm_emxEnsureCapacity_real_T(memspace.workspace_double, loop_ub);
  }

  loop_ub = memspace.workspace_int->size[0];
  memspace.workspace_int->size[0] = maxDims;
  MPC_f_emxEnsureCapacity_int32_T(memspace.workspace_int, loop_ub);
  loop_ub = memspace.workspace_sort->size[0];
  memspace.workspace_sort->size[0] = maxDims;
  MPC_f_emxEnsureCapacity_int32_T(memspace.workspace_sort, loop_ub);
  emxInitStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  MPC_fmincon_factoryConstruct_ir(Cineq->size[0], Ceq->size[0], x0->size[0],
    nVarMax, mConstrMax, &WorkingSet);
  MPC_fmincon_compressBounds(x0->size[0], WorkingSet.indexLB, WorkingSet.indexUB,
    WorkingSet.indexFixed, lb, ub, &nVar, &nVarMax, &maxDims);
  WorkingSet.mConstrMax = mConstrMax;
  mConstrMax = ((mConstrMax_tmp + nVar) + nVarMax) + maxDims;
  WorkingSet.mConstr = mConstrMax;
  WorkingSet.mConstrOrig = mConstrMax;
  WorkingSet.sizes[0] = maxDims;
  WorkingSet.sizes[1] = Ceq->size[0];
  WorkingSet.sizes[2] = Cineq->size[0];
  WorkingSet.sizes[3] = nVar;
  WorkingSet.sizes[4] = nVarMax;
  for (iAeq0 = 0; iAeq0 < 5; iAeq0++) {
    WorkingSet.sizesNormal[iAeq0] = WorkingSet.sizes[iAeq0];
  }

  WorkingSet.sizesPhaseOne[0] = maxDims;
  WorkingSet.sizesPhaseOne[1] = Ceq->size[0];
  WorkingSet.sizesPhaseOne[2] = Cineq->size[0];
  WorkingSet.sizesPhaseOne[3] = nVar + 1;
  WorkingSet.sizesPhaseOne[4] = nVarMax;
  WorkingSet.sizesRegularized[0] = maxDims;
  WorkingSet.sizesRegularized[1] = Ceq->size[0];
  WorkingSet.sizesRegularized[2] = Cineq->size[0];
  iAeq0 = (nVar + Cineq->size[0]) + iATw0;
  WorkingSet.sizesRegularized[3] = iAeq0;
  WorkingSet.sizesRegularized[4] = nVarMax;
  WorkingSet.sizesRegPhaseOne[0] = maxDims;
  WorkingSet.sizesRegPhaseOne[1] = Ceq->size[0];
  WorkingSet.sizesRegPhaseOne[2] = Cineq->size[0];
  WorkingSet.sizesRegPhaseOne[3] = iAeq0 + 1;
  WorkingSet.sizesRegPhaseOne[4] = nVarMax;
  WorkingSet.isActiveIdxNormal[0] = 1;
  WorkingSet.isActiveIdxNormal[1] = maxDims;
  WorkingSet.isActiveIdxNormal[2] = Ceq->size[0];
  WorkingSet.isActiveIdxNormal[3] = Cineq->size[0];
  WorkingSet.isActiveIdxNormal[4] = nVar;
  WorkingSet.isActiveIdxNormal[5] = nVarMax;
  for (mConstrMax = 0; mConstrMax < 6; mConstrMax++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax] =
      WorkingSet.isActiveIdxNormal[mConstrMax];
  }

  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  for (mConstrMax = 0; mConstrMax < 6; mConstrMax++) {
    WorkingSet.isActiveIdx[mConstrMax] =
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[1] = maxDims;
  WorkingSet.isActiveIdxRegPhaseOne[2] = Ceq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[3] = Cineq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[4] = nVar + 1;
  WorkingSet.isActiveIdxRegPhaseOne[5] = nVarMax;
  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxNormal[mConstrMax + 1] +=
      WorkingSet.isActiveIdxNormal[mConstrMax];
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  for (mConstrMax = 0; mConstrMax < 6; mConstrMax++) {
    WorkingSet.isActiveIdxPhaseOne[mConstrMax] =
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[1] = maxDims;
  WorkingSet.isActiveIdxRegPhaseOne[2] = Ceq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[3] = Cineq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[4] = iAeq0;
  WorkingSet.isActiveIdxRegPhaseOne[5] = nVarMax;
  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  for (mConstrMax = 0; mConstrMax < 6; mConstrMax++) {
    WorkingSet.isActiveIdxRegularized[mConstrMax] =
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[1] = maxDims;
  WorkingSet.isActiveIdxRegPhaseOne[2] = Ceq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[3] = Cineq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[4] = iAeq0 + 1;
  WorkingSet.isActiveIdxRegPhaseOne[5] = nVarMax;
  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  if (lb->size[0] != 0) {
    for (mConstrMax = 0; mConstrMax < nVar; mConstrMax++) {
      TrialState.xstarsqp->data[WorkingSet.indexLB->data[mConstrMax] - 1] = 0.0;
    }
  }

  if (ub->size[0] != 0) {
    for (mConstrMax = 0; mConstrMax < nVarMax; mConstrMax++) {
      TrialState.xstarsqp->data[WorkingSet.indexUB->data[mConstrMax] - 1] = 0.0;
    }

    for (mConstrMax = 0; mConstrMax < maxDims; mConstrMax++) {
      iATw0 = WorkingSet.indexFixed->data[mConstrMax];
      TrialState.xstarsqp->data[iATw0 - 1] = ub->data[iATw0 - 1];
    }
  }

  fval = MPC_fmi_eML_blk_kernel_anonFcn1(fun_workspace_x0, fun_workspace_xref,
    fun_workspace_uref, fun_workspace_N, TrialState.xstarsqp);
  mConstrMax = 1;
  tmp = rtIsNaN(fval);
  if (rtIsInf(fval) || tmp) {
    if (tmp) {
      mConstrMax = -3;
    } else if (fval < 0.0) {
      mConstrMax = -1;
    } else {
      mConstrMax = -2;
    }
  }

  TrialState.sqpFval = fval;
  if (mConstrMax == 1) {
    MPC_fmincon_computeConstraints_(Ceq->size[0], Cineq->size[0],
      nonlcon_workspace.x0, nonlcon_workspace.N, TrialState.xstarsqp,
      TrialState.cIneq, TrialState.iNonIneq0, TrialState.cEq, TrialState.iNonEq0);
  }

  MPC_fm_computeFiniteDifferences(&FiniteDifferences, fval, TrialState.cIneq,
    TrialState.iNonIneq0, TrialState.cEq, TrialState.iNonEq0,
    TrialState.xstarsqp, TrialState.grad, WorkingSet.Aineq, TrialState.iNonIneq0,
    WorkingSet.ldA, WorkingSet.Aeq, TrialState.iNonEq0, WorkingSet.ldA, lb, ub);
  TrialState.FunctionEvaluations = FiniteDifferences.numEvals + 1;
  MPC_fm_updateWorkingSetForNewQP(x0, &WorkingSet, Cineq->size[0],
    TrialState.mNonlinIneq, TrialState.cIneq, Ceq->size[0], TrialState.mNonlinEq,
    TrialState.cEq, nVar, lb, nVarMax, ub, maxDims);
  MPC_fmincon_setProblemType(&WorkingSet, 3);
  nVar = WorkingSet.isActiveIdx[2];
  nVarMax = WorkingSet.mConstrMax;
  for (maxDims = nVar; maxDims <= nVarMax; maxDims++) {
    WorkingSet.isActiveConstr->data[maxDims - 1] = false;
  }

  WorkingSet.nWConstr[0] = WorkingSet.sizes[0];
  WorkingSet.nWConstr[1] = WorkingSet.sizes[1];
  WorkingSet.nWConstr[2] = 0;
  WorkingSet.nWConstr[3] = 0;
  WorkingSet.nWConstr[4] = 0;
  WorkingSet.nActiveConstr = WorkingSet.nWConstr[0] + WorkingSet.nWConstr[1];
  nVar = WorkingSet.sizes[0];
  for (nVarMax = 0; nVarMax < nVar; nVarMax++) {
    WorkingSet.Wid->data[nVarMax] = 1;
    WorkingSet.Wlocalidx->data[nVarMax] = nVarMax + 1;
    WorkingSet.isActiveConstr->data[nVarMax] = true;
    maxDims = WorkingSet.ldA * nVarMax;
    mConstrMax = WorkingSet.indexFixed->data[nVarMax];
    for (iAeq0 = 0; iAeq0 <= mConstrMax - 2; iAeq0++) {
      WorkingSet.ATwset->data[iAeq0 + maxDims] = 0.0;
    }

    WorkingSet.ATwset->data[(WorkingSet.indexFixed->data[nVarMax] + maxDims) - 1]
      = 1.0;
    mConstrMax = WorkingSet.indexFixed->data[nVarMax] + 1;
    iAeq0 = WorkingSet.nVar;
    for (iATw0 = mConstrMax; iATw0 <= iAeq0; iATw0++) {
      WorkingSet.ATwset->data[(iATw0 + maxDims) - 1] = 0.0;
    }

    WorkingSet.bwset->data[nVarMax] = WorkingSet.ub->data
      [WorkingSet.indexFixed->data[nVarMax] - 1];
  }

  nVarMax = WorkingSet.sizes[1];
  for (maxDims = 0; maxDims < nVarMax; maxDims++) {
    mConstrMax = nVar + maxDims;
    WorkingSet.Wid->data[mConstrMax] = 2;
    WorkingSet.Wlocalidx->data[mConstrMax] = maxDims + 1;
    WorkingSet.isActiveConstr->data[mConstrMax] = true;
    iAeq0 = WorkingSet.ldA * maxDims;
    iATw0 = WorkingSet.ldA * mConstrMax;
    mConstrMax_tmp = WorkingSet.nVar - 1;
    for (loop_ub = 0; loop_ub <= mConstrMax_tmp; loop_ub++) {
      WorkingSet.ATwset->data[iATw0 + loop_ub] = WorkingSet.Aeq->data[iAeq0 +
        loop_ub];
    }

    WorkingSet.bwset->data[mConstrMax] = WorkingSet.beq->data[maxDims];
  }

  MeritFunction.initFval = fval;
  MeritFunction.penaltyParam = 1.0;
  MeritFunction.threshold = 0.0001;
  MeritFunction.nPenaltyDecreases = 0;
  MeritFunction.linearizedConstrViol = 0.0;
  fval = 0.0;
  if (Ceq->size[0] >= 1) {
    nVar = Ceq->size[0];
    for (nVarMax = 0; nVarMax < nVar; nVarMax++) {
      fval += fabs(TrialState.cEq->data[nVarMax]);
    }
  }

  MPC_fmincon_emxFree_real_T(&Ceq);
  MeritFunction.initConstrViolationEq = fval;
  fval = 0.0;
  for (nVar = 0; nVar < mNonlinIneq; nVar++) {
    TrialState_0 = TrialState.cIneq->data[nVar];
    if (TrialState_0 > 0.0) {
      fval += TrialState_0;
    }
  }

  MeritFunction.initConstrViolationIneq = fval;
  MeritFunction.phi = 0.0;
  MeritFunction.phiPrimePlus = 0.0;
  MeritFunction.phiFullStep = 0.0;
  MeritFunction.feasRelativeFactor = 0.0;
  MeritFunction.nlpPrimalFeasError = 0.0;
  MeritFunction.nlpDualFeasError = 0.0;
  MeritFunction.nlpComplError = 0.0;
  MeritFunction.firstOrderOpt = 0.0;
  MeritFunction.hasObjective = true;
  mNonlinIneq = Cineq->size[0];
  for (iAeq0 = 0; iAeq0 < mNonlinIneq; iAeq0++) {
    Cineq->data[iAeq0] = 1.0;
  }

  MPC_fmincon_driver(Hessian, lb, ub, &TrialState, &MeritFunction, &FcnEvaluator,
                     &FiniteDifferences, &memspace, &WorkingSet, &QRManager,
                     &CholManager, &QPObjective, Cineq, 100 * x0->size[0]);
  MPC_fmincon_emxFree_real_T(&Cineq);
  MPC_fmincon_emxFree_real_T(&Hessian);
  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  emxFreeStruct_s_pIaUYPkQBTqVmAK(&memspace);
  emxFreeStruct_s_saWPFfMboRdWeRq(&QPObjective);
  emxFreeStruct_s_vdGXtauKr5HuLAq(&CholManager);
  emxFreeStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  emxFreeStruct_s_tzdJIwhhx1jgWYI(&FiniteDifferences);
  emxFreeStruct_coder_in_add4ibr2(&FcnEvaluator);
  loop_ub = x->size[0];
  x->size[0] = TrialState.xstarsqp->size[0];
  MPC_fm_emxEnsureCapacity_real_T(x, loop_ub);
  loop_ub = TrialState.xstarsqp->size[0];
  for (iAeq0 = 0; iAeq0 < loop_ub; iAeq0++) {
    x->data[iAeq0] = TrialState.xstarsqp->data[iAeq0];
  }

  emxFreeStruct_s_0Mw3d4AlMrOoSnA(&TrialState);
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_f_eML_blk_kernel_anonFcn2_m(const real_T x0[4], real_T N, const
  emxArray_real_T_MPC_fmincon_T *w, emxArray_real_T_MPC_fmincon_T *varargout_1,
  emxArray_real_T_MPC_fmincon_T *varargout_2)
{
  emxArray_real_T_MPC_fmincon_T *eta;
  emxArray_real_T_MPC_fmincon_T *z;
  real_T c1;
  real_T eta_0;
  real_T eta_next;
  real_T eta_next_idx_0;
  real_T eta_next_tmp_tmp;
  real_T s1;
  real_T z_next_idx_0;
  real_T z_next_idx_1;
  real_T z_tmp;
  int32_T e;
  int32_T f;
  int32_T k;
  int32_T loop_ub_tmp;
  int32_T s1_tmp;
  int32_T z_next_idx_1_tmp;
  uint32_T c;

  /* '<S3>:1:175' */
  /* '<S3>:1:165' */
  MPC_fmincon_emxInit_real_T(&z, 2);
  z_next_idx_1_tmp = z->size[0] * z->size[1];
  z->size[0] = 2;
  z->size[1] = (int32_T)(N + 1.0);
  MPC_fm_emxEnsureCapacity_real_T(z, z_next_idx_1_tmp);
  loop_ub_tmp = (int32_T)(N + 1.0) << 1;

  /* '<S3>:1:166' */
  MPC_fmincon_emxInit_real_T(&eta, 2);
  z_next_idx_1_tmp = eta->size[0] * eta->size[1];
  eta->size[0] = 2;
  eta->size[1] = (int32_T)(N + 1.0);
  MPC_fm_emxEnsureCapacity_real_T(eta, z_next_idx_1_tmp);
  if (loop_ub_tmp - 1 >= 0) {
    memset(&z->data[0], 0, (uint32_T)loop_ub_tmp * sizeof(real_T));
  }

  if (loop_ub_tmp - 1 >= 0) {
    memset(&eta->data[0], 0, (uint32_T)loop_ub_tmp * sizeof(real_T));
  }

  /* '<S3>:1:167' */
  /* '<S3>:1:168' */
  /* '<S3>:1:125' */
  z_tmp = x0[2] + x0[3];
  z->data[0] = (0.256 * cos(x0[2]) + x0[0]) + cos(z_tmp) * 0.35;
  z->data[1] = (0.256 * sin(x0[2]) + x0[1]) + sin(z_tmp) * 0.35;

  /* '<S3>:1:169' */
  eta->data[0] = x0[2];
  eta->data[1] = rt_atan2d_snf(w->data[1], w->data[0]);

  /* '<S3>:1:170' */
  varargout_2->size[0] = 0;

  /* '<S3>:1:171' */
  varargout_1->size[0] = 0;
  loop_ub_tmp = (int32_T)N;

  /* '<S3>:1:173' */
  for (k = 0; k < loop_ub_tmp; k++) {
    c = ((uint32_T)k << 1) + 1U;
    s1 = ((real_T)k + 1.0) * 2.0;
    if (c > s1) {
      f = 0;
      e = 0;
    } else {
      f = (int32_T)c - 1;
      e = (int32_T)s1;
    }

    /* '<S3>:1:174' */
    /* '<S3>:1:175' */
    s1_tmp = (k << 1) + 1;
    s1 = z->data[s1_tmp];
    z_next_idx_1_tmp = k << 1;
    z_next_idx_1 = z->data[z_next_idx_1_tmp];
    z_tmp = w->data[f + 1];
    z_next_idx_0 = (z_tmp * 0.0 + 0.3 * w->data[f]) + (0.0 * s1 + z_next_idx_1);
    z_next_idx_1 = (z_tmp * 0.3 + 0.0 * w->data[f]) + (0.0 * z_next_idx_1 + s1);

    /* '<S3>:1:176' */
    /* '<S3>:1:178' */
    /* '<S3>:1:136' */
    eta_next_idx_0 = eta->data[z_next_idx_1_tmp];
    eta_0 = eta->data[s1_tmp];
    c1 = eta_next_idx_0 + eta_0;
    s1 = sin(c1);

    /* '<S3>:1:136' */
    c1 = cos(c1);

    /* '<S3>:1:137' */
    /* '<S3>:1:179' */
    eta_next_tmp_tmp = sin(eta_0);

    /* '<S3>:1:180' */
    /* '<S3>:1:182' */
    z_next_idx_1_tmp = varargout_2->size[0];
    s1_tmp = varargout_2->size[0];
    varargout_2->size[0] += 4;
    MPC_fm_emxEnsureCapacity_real_T(varargout_2, s1_tmp);
    s1_tmp = (k + 1) << 1;
    z->data[s1_tmp] = z_next_idx_0;
    eta_next = (eta_next_tmp_tmp * c1 / 0.256 * 0.3 * w->data[f] +
                eta_next_tmp_tmp * s1 / 0.256 * 0.3 * z_tmp) + eta_next_idx_0;
    eta_next_idx_0 = eta_next;
    eta->data[s1_tmp] = eta_next;
    varargout_2->data[z_next_idx_1_tmp] = z_next_idx_0 - z_next_idx_0;
    z->data[1 + s1_tmp] = z_next_idx_1;
    eta_next = ((-eta_next_tmp_tmp * c1 / 0.256 - s1 / 0.35) * 0.3 * w->data[f]
                + (-eta_next_tmp_tmp * s1 / 0.256 - c1 / 0.35) * 0.3 * z_tmp) +
      eta_0;
    eta->data[1 + s1_tmp] = eta_next;
    varargout_2->data[z_next_idx_1_tmp + 1] = z_next_idx_1 - z_next_idx_1;
    varargout_2->data[z_next_idx_1_tmp + 2] = eta_next_idx_0 - eta_next_idx_0;
    varargout_2->data[z_next_idx_1_tmp + 3] = eta_next - eta_next;

    /* '<S3>:1:183' */
    z_next_idx_1_tmp = varargout_1->size[0];
    s1_tmp = varargout_1->size[0];
    varargout_1->size[0]++;
    MPC_fm_emxEnsureCapacity_real_T(varargout_1, s1_tmp);
    z_tmp = 0.0;
    e -= f;
    for (s1_tmp = 0; s1_tmp < e; s1_tmp++) {
      z_next_idx_0 = w->data[f + s1_tmp];
      z_tmp += z_next_idx_0 * z_next_idx_0;
    }

    varargout_1->data[z_next_idx_1_tmp] = z_tmp - 0.5;
  }

  MPC_fmincon_emxFree_real_T(&eta);
  MPC_fmincon_emxFree_real_T(&z);
}

static void emxInitStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_MPC__T
  *pStruct)
{
  MPC_fmincon_emxInit_real_T(&pStruct->zref, 2);
  MPC_fmincon_emxInit_real_T(&pStruct->wref, 2);
}

static void emxInitStruct_anonymous_funct_a(anonymous_function_MPC_fmin_a_T
  *pStruct)
{
  emxInitStruct_s_lZflMU9sVqxC63I(&pStruct->workspace);
}

static void emxInitStruct_coder_internal_n1(coder_internal_stickyStruct_a_T
  *pStruct)
{
  emxInitStruct_anonymous_funct_a(&pStruct->b_value);
}

static void emxInitStruct_coder_internal__n(coder_internal_stickyStruc_ad_T
  *pStruct)
{
  emxInitStruct_coder_internal_n1(&pStruct->next);
}

static void emxInitStruct_c_add4ibr2wkltdn1(coder_internal_stickyStru_add_T
  *pStruct)
{
  emxInitStruct_coder_internal__n(&pStruct->next);
}

static void emxInitStruct_co_add4ibr2wkltdn(coder_internal_stickyStr_add4_T
  *pStruct)
{
  emxInitStruct_c_add4ibr2wkltdn1(&pStruct->next);
}

static void emxInitStruct_cod_add4ibr2wkltd(coder_internal_stickySt_add4i_T
  *pStruct)
{
  emxInitStruct_co_add4ibr2wkltdn(&pStruct->next);
}

static void emxInitStruct_code_add4ibr2wklt(coder_internal_stickyS_add4ib_T
  *pStruct)
{
  emxInitStruct_cod_add4ibr2wkltd(&pStruct->next);
}

static void emxInitStruct_coder_add4ibr2wkl(coder_internal_sticky_add4ibr_T
  *pStruct)
{
  emxInitStruct_code_add4ibr2wklt(&pStruct->next);
}

static void emxInitStruct_coder__add4ibr2wk(coder_internal_stick_add4ibr2_T
  *pStruct)
{
  emxInitStruct_coder_add4ibr2wkl(&pStruct->next);
}

static void emxInitStruct_coder_i_add4ibr2w(coder_internal_stickyStruct_c_T
  *pStruct)
{
  emxInitStruct_coder__add4ibr2wk(&pStruct->next);
}

static void emxInitStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_MPC__T
  *pStruct)
{
  emxInitStruct_anonymous_funct_a(&pStruct->objfun);
  MPC_fmincon_emxInit_real_T(&pStruct->cIneq_1, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cEq_1, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cIneq_2, 1);
  MPC_fmincon_emxInit_real_T(&pStruct->cEq_2, 1);
  MPC_fmincon_emxInit_boolean_T(&pStruct->hasLB, 1);
  MPC_fmincon_emxInit_boolean_T(&pStruct->hasUB, 1);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T MPC_f_eML_blk_kernel_anonFcn1_e(const real_T x0[4], const
  emxArray_real_T_MPC_fmincon_T *zref, const emxArray_real_T_MPC_fmincon_T *wref,
  real_T N, const emxArray_real_T_MPC_fmincon_T *w)
{
  emxArray_real_T_MPC_fmincon_T *z;
  real_T err_w[2];
  real_T err_z_idx_0;
  real_T err_z_idx_1;
  real_T varargout_1;
  real_T z_0;
  real_T z_1;
  int32_T b;
  int32_T e;
  int32_T f;
  int32_T k;
  int32_T loop_ub;
  int32_T z_tmp;
  int32_T z_tmp_0;
  uint32_T c;

  /* '<S3>:1:151' */
  /* '<S3>:1:155' */
  /* '<S3>:1:144' */
  MPC_fmincon_emxInit_real_T(&z, 2);
  loop_ub = z->size[0] * z->size[1];
  z->size[0] = 2;
  z->size[1] = (int32_T)(N + 1.0);
  MPC_fm_emxEnsureCapacity_real_T(z, loop_ub);
  loop_ub = (int32_T)(N + 1.0) << 1;
  if (loop_ub - 1 >= 0) {
    memset(&z->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S3>:1:146' */
  /* '<S3>:1:125' */
  err_z_idx_1 = x0[2] + x0[3];
  z->data[0] = (0.256 * cos(x0[2]) + x0[0]) + cos(err_z_idx_1) * 0.35;
  z->data[1] = (0.256 * sin(x0[2]) + x0[1]) + sin(err_z_idx_1) * 0.35;

  /* '<S3>:1:147' */
  varargout_1 = 0.0;
  b = (int32_T)N;

  /* '<S3>:1:149' */
  for (k = 0; k < b; k++) {
    c = ((uint32_T)k << 1) + 1U;
    err_z_idx_0 = ((real_T)k + 1.0) * 2.0;
    if (c > err_z_idx_0) {
      f = 0;
      e = 0;
    } else {
      f = (int32_T)c - 1;
      e = (int32_T)err_z_idx_0;
    }

    /* '<S3>:1:150' */
    /* '<S3>:1:151' */
    z_tmp = k << 1;
    z_0 = z->data[z_tmp];
    z_tmp_0 = (k << 1) + 1;
    z_1 = z->data[z_tmp_0];

    /* '<S3>:1:153' */
    err_z_idx_1 = w->data[f + 1];
    loop_ub = (k + 1) << 1;
    z->data[loop_ub] = (err_z_idx_1 * 0.0 + 0.3 * w->data[f]) + (0.0 * z_1 + z_0);
    err_z_idx_0 = z_0 - zref->data[z_tmp];
    z->data[1 + loop_ub] = (err_z_idx_1 * 0.3 + 0.0 * w->data[f]) + (0.0 * z_0 +
      z_1);
    err_z_idx_1 = z_1 - zref->data[z_tmp_0];

    /* '<S3>:1:154' */
    loop_ub = e - f;
    if (loop_ub == 2) {
      for (e = 0; e < loop_ub; e++) {
        err_w[e] = w->data[f + e] - wref->data[(k << 1) + e];
      }
    } else {
      MPC_fmincon_binary_expand_op(err_w, w, f, e - 1, wref, k);
    }

    /* '<S3>:1:155' */
    varargout_1 = (((err_z_idx_0 * 10.0 + err_z_idx_1 * 0.0) * err_z_idx_0 +
                    (err_z_idx_0 * 0.0 + err_z_idx_1 * 10.0) * err_z_idx_1) +
                   varargout_1) + ((err_w[1] * 0.0 + err_w[0]) * err_w[0] +
      (err_w[0] * 0.0 + err_w[1]) * err_w[1]);
  }

  /* '<S3>:1:158' */
  err_z_idx_0 = z->data[(z->size[1] - 1) << 1] - zref->data[(zref->size[1] - 1) <<
    1];
  err_z_idx_1 = z->data[((z->size[1] - 1) << 1) + 1] - zref->data[((zref->size[1]
    - 1) << 1) + 1];
  MPC_fmincon_emxFree_real_T(&z);

  /* '<S3>:1:159' */
  varargout_1 += (err_z_idx_0 * 10.0 + err_z_idx_1 * 0.0) * err_z_idx_0 +
    (err_z_idx_0 * 0.0 + err_z_idx_1 * 10.0) * err_z_idx_1;
  return varargout_1;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static int32_T MPC_fminc_computeConstraints__c(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const emxArray_real_T_MPC_fmincon_T *x,
  emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T eq0)
{
  emxArray_int32_T_MPC_fmincon_T *eqRange;
  emxArray_int32_T_MPC_fmincon_T *ineqRange;
  emxArray_real_T_MPC_fmincon_T *b;
  emxArray_real_T_MPC_fmincon_T *c;
  int32_T k;
  int32_T n;
  int32_T status;
  int32_T yk;
  if (obj_next_next_next_next_next_b_ - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_next_b_;
  }

  MPC_fmincon_emxInit_int32_T(&ineqRange, 2);
  k = ineqRange->size[0] * ineqRange->size[1];
  ineqRange->size[0] = 1;
  ineqRange->size[1] = n;
  MPC_f_emxEnsureCapacity_int32_T(ineqRange, k);
  if (n > 0) {
    ineqRange->data[0] = 0;
    yk = 0;
    for (k = 2; k <= n; k++) {
      yk++;
      ineqRange->data[k - 1] = yk;
    }
  }

  k = ineqRange->size[0] * ineqRange->size[1];
  ineqRange->size[0] = 1;
  MPC_f_emxEnsureCapacity_int32_T(ineqRange, k);
  n = ineqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    ineqRange->data[k] += ineq0;
  }

  if (obj_next_next_next_next_b_value - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_b_value;
  }

  MPC_fmincon_emxInit_int32_T(&eqRange, 2);
  k = eqRange->size[0] * eqRange->size[1];
  eqRange->size[0] = 1;
  eqRange->size[1] = n;
  MPC_f_emxEnsureCapacity_int32_T(eqRange, k);
  if (n > 0) {
    eqRange->data[0] = 0;
    yk = 0;
    for (k = 2; k <= n; k++) {
      yk++;
      eqRange->data[k - 1] = yk;
    }
  }

  k = eqRange->size[0] * eqRange->size[1];
  eqRange->size[0] = 1;
  MPC_f_emxEnsureCapacity_int32_T(eqRange, k);
  n = eqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    eqRange->data[k] += eq0;
  }

  MPC_fmincon_emxInit_real_T(&b, 1);
  MPC_fmincon_emxInit_real_T(&c, 1);
  MPC_f_eML_blk_kernel_anonFcn2_m(obj_next_next_next_next_next_ne,
    obj_next_next_next_next_next__0, x, b, c);
  n = ineqRange->size[1];
  for (k = 0; k < n; k++) {
    Cineq_workspace->data[ineqRange->data[k] - 1] = b->data[k];
  }

  MPC_fmincon_emxFree_real_T(&b);
  MPC_fmincon_emxFree_int32_T(&ineqRange);
  n = eqRange->size[1];
  for (k = 0; k < n; k++) {
    Ceq_workspace->data[eqRange->data[k] - 1] = c->data[k];
  }

  MPC_fmincon_emxFree_real_T(&c);
  MPC_fmincon_emxFree_int32_T(&eqRange);
  status = MPC_fminco_checkVectorNonFinite(obj_next_next_next_next_next_b_,
    Cineq_workspace, ineq0);
  if (status == 1) {
    status = MPC_fminco_checkVectorNonFinite(obj_next_next_next_next_b_value,
      Ceq_workspace, eq0);
  }

  return status;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static boolean_T MPC_fmin_finDiffEvalAndChkErr_p(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_zref, const emxArray_real_T_MPC_fmincon_T
  *obj_objfun_workspace_wref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_MPC_fmincon_T *cIneqPlus,
  emxArray_real_T_MPC_fmincon_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_MPC_fmincon_T *xk)
{
  real_T temp_tmp;
  int32_T idx;
  boolean_T evalOK;
  temp_tmp = xk->data[dim - 1];
  xk->data[dim - 1] = temp_tmp + delta;
  *fplus = MPC_f_eML_blk_kernel_anonFcn1_e(obj_objfun_workspace_x0,
    obj_objfun_workspace_zref, obj_objfun_workspace_wref, obj_objfun_workspace_N,
    xk);
  evalOK = ((!rtIsInf(*fplus)) && (!rtIsNaN(*fplus)));
  if (evalOK) {
    MPC_f_eML_blk_kernel_anonFcn2_m(obj_nonlin_workspace_x0,
      obj_nonlin_workspace_N, xk, cIneqPlus, cEqPlus);
    idx = 0;
    while (evalOK && (idx + 1 <= obj_mIneq)) {
      evalOK = ((!rtIsInf(cIneqPlus->data[idx])) && (!rtIsNaN(cIneqPlus->
                  data[idx])));
      idx++;
    }

    if (evalOK) {
      idx = 0;
      while (evalOK && (idx + 1 <= obj_mEq)) {
        evalOK = ((!rtIsInf(cEqPlus->data[idx])) && (!rtIsNaN(cEqPlus->data[idx])));
        idx++;
      }

      xk->data[dim - 1] = temp_tmp;
    }
  }

  return evalOK;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static boolean_T MPC__computeFiniteDifferences_k(s_9imJcZ2iwk426vK9Q2bBEG_MPC__T
  *obj, real_T fCurrent, const emxArray_real_T_MPC_fmincon_T *cIneqCurrent,
  int32_T ineq0, const emxArray_real_T_MPC_fmincon_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_MPC_fmincon_T *xk, emxArray_real_T_MPC_fmincon_T *gradf,
  emxArray_real_T_MPC_fmincon_T *JacCineqTrans, int32_T CineqColStart, int32_T
  ldJI, emxArray_real_T_MPC_fmincon_T *JacCeqTrans, int32_T CeqColStart, int32_T
  ldJE)
{
  real_T deltaX;
  int32_T b;
  int32_T b_idx;
  int32_T b_idx_row;
  boolean_T evalOK;
  boolean_T exitg1;
  boolean_T guard1;
  evalOK = true;
  obj->numEvals = 0;
  b_idx = 0;
  exitg1 = false;
  while ((!exitg1) && (b_idx <= obj->nVar - 1)) {
    deltaX = (1.0 - (real_T)(xk->data[b_idx] < 0.0) * 2.0) *
      1.4901161193847656E-8 * fmax(fabs(xk->data[b_idx]), 1.0);
    evalOK = MPC_fmin_finDiffEvalAndChkErr_p(obj->objfun.workspace.x0,
      obj->objfun.workspace.zref, obj->objfun.workspace.wref,
      obj->objfun.workspace.N, obj->nonlin.workspace.x0, obj->nonlin.workspace.N,
      obj->mIneq, obj->mEq, &obj->f_1, obj->cIneq_1, obj->cEq_1, b_idx + 1,
      deltaX, xk);
    obj->numEvals++;
    guard1 = false;
    if (!evalOK) {
      deltaX = -deltaX;
      evalOK = MPC_fmin_finDiffEvalAndChkErr_p(obj->objfun.workspace.x0,
        obj->objfun.workspace.zref, obj->objfun.workspace.wref,
        obj->objfun.workspace.N, obj->nonlin.workspace.x0,
        obj->nonlin.workspace.N, obj->mIneq, obj->mEq, &obj->f_1, obj->cIneq_1,
        obj->cEq_1, b_idx + 1, deltaX, xk);
      obj->numEvals++;
      if (!evalOK) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      gradf->data[b_idx] = (obj->f_1 - fCurrent) / deltaX;
      b = obj->mIneq;
      for (b_idx_row = 0; b_idx_row < b; b_idx_row++) {
        JacCineqTrans->data[b_idx + ldJI * ((CineqColStart + b_idx_row) - 1)] =
          (obj->cIneq_1->data[b_idx_row] - cIneqCurrent->data[(ineq0 + b_idx_row)
           - 1]) / deltaX;
      }

      b = obj->mEq;
      for (b_idx_row = 0; b_idx_row < b; b_idx_row++) {
        JacCeqTrans->data[b_idx + ldJE * ((CeqColStart + b_idx_row) - 1)] =
          (obj->cEq_1->data[b_idx_row] - cEqCurrent->data[(eq0 + b_idx_row) - 1])
          / deltaX;
      }

      b_idx++;
    }
  }

  return evalOK;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_f_modifyOverheadPhaseOne__h(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj)
{
  int32_T idx;
  int32_T idxEq;
  int32_T idxStartIneq;
  idxStartIneq = obj->sizes[1];
  for (idx = 0; idx < idxStartIneq; idx++) {
    idxEq = (obj->ldA * idx + obj->nVar) - 1;
    obj->Aeq->data[idxEq] = 0.0;
    obj->ATwset->data[idxEq + obj->ldA * (obj->isActiveIdx[1] - 1)] = 0.0;
  }

  idxStartIneq = obj->sizes[2];
  for (idx = 0; idx < idxStartIneq; idx++) {
    obj->Aineq->data[(obj->nVar + obj->ldA * idx) - 1] = -1.0;
  }

  obj->indexLB->data[obj->sizes[3] - 1] = obj->nVar;
  obj->lb->data[obj->nVar - 1] = 1.0E-5;
  idxStartIneq = obj->isActiveIdx[2];
  idxEq = obj->nActiveConstr;
  for (idx = idxStartIneq; idx <= idxEq; idx++) {
    obj->ATwset->data[(obj->nVar + obj->ldA * (idx - 1)) - 1] = -1.0;
  }

  if (obj->nWConstr[4] > 0) {
    obj->isActiveConstr->data[obj->isActiveIdx[4] - 1] = false;
  }

  obj->isActiveConstr->data[obj->isActiveIdx[4] - 2] = false;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_setProblemType_g(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *obj,
  int32_T PROBLEM_TYPE)
{
  int32_T b;
  int32_T b_tmp;
  int32_T colOffsetATw;
  int32_T colOffsetAineq;
  int32_T mEq;
  int32_T mIneq;
  int32_T offsetEq1;
  int32_T offsetEq1_tmp;
  int32_T offsetEq2;
  int32_T offsetIneq_tmp;
  switch (PROBLEM_TYPE) {
   case 3:
    obj->nVar = obj->nVarOrig;
    obj->mConstr = obj->mConstrOrig;
    for (mIneq = 0; mIneq < 5; mIneq++) {
      obj->sizes[mIneq] = obj->sizesNormal[mIneq];
    }

    for (mIneq = 0; mIneq < 6; mIneq++) {
      obj->isActiveIdx[mIneq] = obj->isActiveIdxNormal[mIneq];
    }
    break;

   case 1:
    obj->nVar = obj->nVarOrig + 1;
    obj->mConstr = obj->mConstrOrig + 1;
    for (mIneq = 0; mIneq < 5; mIneq++) {
      obj->sizes[mIneq] = obj->sizesPhaseOne[mIneq];
    }

    for (mIneq = 0; mIneq < 6; mIneq++) {
      obj->isActiveIdx[mIneq] = obj->isActiveIdxPhaseOne[mIneq];
    }

    MPC_f_modifyOverheadPhaseOne__h(obj);
    break;

   case 2:
    obj->nVar = obj->nVarMax - 1;
    obj->mConstr = obj->mConstrMax - 1;
    for (mIneq = 0; mIneq < 5; mIneq++) {
      obj->sizes[mIneq] = obj->sizesRegularized[mIneq];
    }

    if (obj->probType != 4) {
      mIneq = obj->sizes[2];
      mEq = obj->sizes[1];
      offsetIneq_tmp = obj->nVarOrig + 1;
      offsetEq1_tmp = obj->nVarOrig + obj->sizes[2];
      offsetEq2 = offsetEq1_tmp + obj->sizes[1];
      for (colOffsetATw = 0; colOffsetATw < mIneq; colOffsetATw++) {
        colOffsetAineq = obj->ldA * colOffsetATw - 1;
        b_tmp = offsetIneq_tmp + colOffsetATw;
        b = b_tmp - 1;
        for (offsetEq1 = offsetIneq_tmp; offsetEq1 <= b; offsetEq1++) {
          obj->Aineq->data[offsetEq1 + colOffsetAineq] = 0.0;
        }

        obj->Aineq->data[b_tmp + colOffsetAineq] = -1.0;
        offsetEq1 = b_tmp + 1;
        b = obj->nVar;
        for (b_tmp = offsetEq1; b_tmp <= b; b_tmp++) {
          obj->Aineq->data[b_tmp + colOffsetAineq] = 0.0;
        }
      }

      for (mIneq = 0; mIneq < mEq; mIneq++) {
        colOffsetAineq = mIneq * obj->ldA - 1;
        colOffsetATw = (obj->isActiveIdx[1] - 1) * obj->ldA + colOffsetAineq;
        for (offsetEq1 = offsetIneq_tmp; offsetEq1 <= offsetEq1_tmp; offsetEq1++)
        {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        b_tmp = mIneq + offsetEq1_tmp;
        for (offsetEq1 = offsetEq1_tmp + 1; offsetEq1 <= b_tmp; offsetEq1++) {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        obj->Aeq->data[(b_tmp + colOffsetAineq) + 1] = -1.0;
        obj->ATwset->data[(b_tmp + colOffsetATw) + 1] = -1.0;
        b = b_tmp + 2;
        for (offsetEq1 = b; offsetEq1 <= offsetEq2; offsetEq1++) {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        b_tmp = mIneq + offsetEq2;
        for (offsetEq1 = offsetEq2 + 1; offsetEq1 <= b_tmp; offsetEq1++) {
          obj->Aeq->data[offsetEq1 + colOffsetAineq] = 0.0;
          obj->ATwset->data[offsetEq1 + colOffsetATw] = 0.0;
        }

        obj->Aeq->data[(b_tmp + colOffsetAineq) + 1] = 1.0;
        obj->ATwset->data[(b_tmp + colOffsetATw) + 1] = 1.0;
        offsetEq1 = b_tmp + 2;
        b = obj->nVar;
        for (b_tmp = offsetEq1; b_tmp <= b; b_tmp++) {
          obj->Aeq->data[b_tmp + colOffsetAineq] = 0.0;
          obj->ATwset->data[b_tmp + colOffsetATw] = 0.0;
        }
      }

      mEq = obj->nVarOrig;
      offsetEq1 = obj->sizesRegularized[3];
      for (colOffsetATw = 1; colOffsetATw <= offsetEq1; colOffsetATw++) {
        mEq++;
        obj->indexLB->data[colOffsetATw - 1] = mEq;
      }

      mEq = obj->isActiveIdx[4];
      offsetEq1 = obj->isActiveIdxRegularized[4] - 1;
      for (colOffsetATw = mEq; colOffsetATw <= offsetEq1; colOffsetATw++) {
        obj->isActiveConstr->data[colOffsetATw - 1] = false;
      }

      offsetEq1 = (obj->sizes[1] << 1) + offsetEq1_tmp;
      for (colOffsetATw = offsetIneq_tmp; colOffsetATw <= offsetEq1;
           colOffsetATw++) {
        obj->lb->data[colOffsetATw - 1] = 0.0;
      }

      offsetEq1 = obj->isActiveIdx[2];
      offsetEq2 = obj->nActiveConstr;
      for (mEq = offsetEq1; mEq <= offsetEq2; mEq++) {
        colOffsetATw = (mEq - 1) * obj->ldA - 1;
        if (obj->Wid->data[mEq - 1] == 3) {
          offsetEq1_tmp = obj->Wlocalidx->data[mEq - 1] + offsetIneq_tmp;
          mIneq = offsetEq1_tmp - 2;
          for (b_tmp = offsetIneq_tmp; b_tmp <= mIneq; b_tmp++) {
            obj->ATwset->data[b_tmp + colOffsetATw] = 0.0;
          }

          obj->ATwset->data[(offsetEq1_tmp + colOffsetATw) - 1] = -1.0;
          colOffsetAineq = obj->nVar;
          for (b_tmp = offsetEq1_tmp; b_tmp <= colOffsetAineq; b_tmp++) {
            obj->ATwset->data[b_tmp + colOffsetATw] = 0.0;
          }
        } else {
          mIneq = obj->nVar;
          for (b_tmp = offsetIneq_tmp; b_tmp <= mIneq; b_tmp++) {
            obj->ATwset->data[b_tmp + colOffsetATw] = 0.0;
          }
        }
      }
    }

    for (mIneq = 0; mIneq < 6; mIneq++) {
      obj->isActiveIdx[mIneq] = obj->isActiveIdxRegularized[mIneq];
    }
    break;

   default:
    obj->nVar = obj->nVarMax;
    obj->mConstr = obj->mConstrMax;
    for (mIneq = 0; mIneq < 5; mIneq++) {
      obj->sizes[mIneq] = obj->sizesRegPhaseOne[mIneq];
    }

    for (mIneq = 0; mIneq < 6; mIneq++) {
      obj->isActiveIdx[mIneq] = obj->isActiveIdxRegPhaseOne[mIneq];
    }

    MPC_f_modifyOverheadPhaseOne__h(obj);
    break;
  }

  obj->probType = PROBLEM_TYPE;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T MPC_fm_computePrimalFeasError_d(int32_T mLinIneq, int32_T
  mNonlinIneq, const emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mLinEq,
  int32_T mNonlinEq, const emxArray_real_T_MPC_fmincon_T *cEq)
{
  real_T feasError;
  int32_T idx;
  int32_T mEq;
  int32_T mIneq;
  feasError = 0.0;
  mEq = mNonlinEq + mLinEq;
  mIneq = mNonlinIneq + mLinIneq;
  for (idx = 0; idx < mEq; idx++) {
    feasError = fmax(feasError, fabs(cEq->data[idx]));
  }

  for (mEq = 0; mEq < mIneq; mEq++) {
    feasError = fmax(feasError, cIneq->data[mEq]);
  }

  return feasError;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_test_exit_ks(sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, int32_T
  runTimeOptions_MaxFunctionEvalu, boolean_T *Flags_gradOK, boolean_T
  *Flags_fevalOK, boolean_T *Flags_done, boolean_T *Flags_stepAccepted,
  boolean_T *Flags_failedLineSearch, int32_T *Flags_stepType)
{
  real_T s;
  real_T smax;
  int32_T k;
  int32_T mLB;
  int32_T mLambda;
  int32_T mLambda_tmp;
  int32_T nVar;
  boolean_T isFeasible;
  *Flags_fevalOK = true;
  *Flags_stepAccepted = false;
  *Flags_failedLineSearch = false;
  *Flags_stepType = 1;
  nVar = WorkingSet->nVar - 1;
  mLB = WorkingSet->sizes[3];
  mLambda_tmp = WorkingSet->sizes[1] + WorkingSet->sizes[2];
  mLambda = (mLambda_tmp + WorkingSet->sizes[3]) - 1;
  for (k = 0; k <= mLambda; k++) {
    TrialState->lambdaStopTest->data[k] = TrialState->lambdasqp->data[k];
  }

  for (k = 0; k <= nVar; k++) {
    TrialState->gradLag->data[k] = TrialState->grad->data[k];
  }

  MPC_fmincon_xgemv(WorkingSet->nVar, WorkingSet->sizes[1], WorkingSet->Aeq,
                    WorkingSet->ldA, TrialState->lambdaStopTest, 1,
                    TrialState->gradLag);
  MPC_fmincon_xgemv(WorkingSet->nVar, WorkingSet->sizes[2], WorkingSet->Aineq,
                    WorkingSet->ldA, TrialState->lambdaStopTest,
                    WorkingSet->sizes[1] + 1, TrialState->gradLag);
  for (k = 0; k < mLB; k++) {
    TrialState->gradLag->data[WorkingSet->indexLB->data[k] - 1] -=
      TrialState->lambdaStopTest->data[mLambda_tmp + k];
  }

  if (WorkingSet->nVar < 1) {
    mLB = 0;
  } else {
    mLB = 1;
    if (WorkingSet->nVar > 1) {
      smax = fabs(TrialState->grad->data[0]);
      for (k = 2; k <= nVar + 1; k++) {
        s = fabs(TrialState->grad->data[k - 1]);
        if (s > smax) {
          mLB = k;
          smax = s;
        }
      }
    }
  }

  smax = fmax(1.0, fabs(TrialState->grad->data[mLB - 1]));
  if (rtIsInf(smax)) {
    smax = 1.0;
  }

  MeritFunction->nlpPrimalFeasError = MPC_fm_computePrimalFeasError_d
    (WorkingSet->sizes[2] - TrialState->mNonlinIneq, TrialState->mNonlinIneq,
     TrialState->cIneq, WorkingSet->sizes[1] - TrialState->mNonlinEq,
     TrialState->mNonlinEq, TrialState->cEq);
  MeritFunction->feasRelativeFactor = fmax(1.0,
    MeritFunction->nlpPrimalFeasError);
  isFeasible = (MeritFunction->nlpPrimalFeasError <= 1.0E-6 *
                MeritFunction->feasRelativeFactor);
  MPC_fminco_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag,
    Flags_gradOK, &MeritFunction->nlpDualFeasError);
  if (!*Flags_gradOK) {
    *Flags_done = true;
    if (isFeasible) {
      TrialState->sqpExitFlag = 2;
    } else {
      TrialState->sqpExitFlag = -2;
    }
  } else {
    MeritFunction->nlpComplError = 0.0;
    MeritFunction->firstOrderOpt = fmax(MeritFunction->nlpDualFeasError, 0.0);
    for (nVar = 0; nVar <= mLambda; nVar++) {
      TrialState->lambdaStopTestPrev->data[nVar] = TrialState->
        lambdaStopTest->data[nVar];
    }

    if (isFeasible && (MeritFunction->nlpDualFeasError <= 1.0E-6 * smax)) {
      *Flags_done = true;
      TrialState->sqpExitFlag = 1;
    } else {
      *Flags_done = false;
      if (isFeasible && (TrialState->sqpFval < -1.0E+20)) {
        *Flags_done = true;
        TrialState->sqpExitFlag = -3;
      } else if (TrialState->FunctionEvaluations >=
                 runTimeOptions_MaxFunctionEvalu) {
        *Flags_done = true;
        TrialState->sqpExitFlag = 0;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T MPC_fmincon_computeComplError_c(const
  emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint, int32_T mIneq, const
  emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mLB, const
  emxArray_real_T_MPC_fmincon_T *lambda, int32_T iL0)
{
  real_T nlpComplError;
  int32_T idx;
  int32_T mNonlinIneq;
  nlpComplError = 0.0;
  mNonlinIneq = fscales_cineq_constraint->size[0];
  if (mIneq + mLB > 0) {
    for (idx = 0; idx < mNonlinIneq; idx++) {
      real_T cIneq_0;
      real_T lambda_0;
      cIneq_0 = cIneq->data[idx];
      lambda_0 = lambda->data[(iL0 + idx) - 1];
      nlpComplError = fmax(nlpComplError, fmin(fabs(cIneq_0 * lambda_0), fmin
        (fabs(cIneq_0), lambda_0)));
    }
  }

  return nlpComplError;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC__updateWorkingSetForNewQP_b(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, int32_T mIneq, int32_T mNonlinIneq, const
  emxArray_real_T_MPC_fmincon_T *cIneq, int32_T mEq, int32_T mNonlinEq, const
  emxArray_real_T_MPC_fmincon_T *cEq)
{
  int32_T iEq0;
  int32_T ineqStart;
  int32_T iw0;
  int32_T mLinEq;
  int32_T nVar;
  nVar = WorkingSet->nVar - 1;
  for (iw0 = 0; iw0 < mEq; iw0++) {
    real_T WorkingSet_0;
    WorkingSet_0 = -cEq->data[iw0];
    WorkingSet->beq->data[iw0] = WorkingSet_0;
    WorkingSet->bwset->data[iw0] = WorkingSet_0;
  }

  iw0 = (mEq - mNonlinEq) * WorkingSet->ldA;
  iEq0 = iw0;
  for (mLinEq = 0; mLinEq < mNonlinEq; mLinEq++) {
    for (ineqStart = 0; ineqStart <= nVar; ineqStart++) {
      WorkingSet->ATwset->data[iw0 + ineqStart] = WorkingSet->Aeq->data[iEq0 +
        ineqStart];
    }

    iw0 += WorkingSet->ldA;
    iEq0 += WorkingSet->ldA;
  }

  for (iw0 = 0; iw0 < mIneq; iw0++) {
    WorkingSet->bineq->data[iw0] = -cIneq->data[iw0];
  }

  if (WorkingSet->nActiveConstr > mEq) {
    if (mEq + 1 > 1) {
      mLinEq = mEq;
    } else {
      mLinEq = 0;
    }

    ineqStart = mLinEq + 1;
    iEq0 = WorkingSet->nActiveConstr;
    for (iw0 = ineqStart; iw0 <= iEq0; iw0++) {
      switch (WorkingSet->Wid->data[iw0 - 1]) {
       case 4:
        WorkingSet->bwset->data[iw0 - 1] = WorkingSet->lb->data
          [WorkingSet->indexLB->data[WorkingSet->Wlocalidx->data[iw0 - 1] - 1] -
          1];
        break;

       case 5:
        WorkingSet->bwset->data[iw0 - 1] = WorkingSet->ub->data
          [WorkingSet->indexUB->data[WorkingSet->Wlocalidx->data[iw0 - 1] - 1] -
          1];
        break;

       default:
        {
          mLinEq = WorkingSet->Wlocalidx->data[iw0 - 1];
          WorkingSet->bwset->data[iw0 - 1] = WorkingSet->bineq->data[mLinEq - 1];
          if ((mNonlinIneq > 0) && (mLinEq >= mNonlinIneq)) {
            int32_T ix0;
            int32_T iy0;
            iy0 = (iw0 - 1) * WorkingSet->ldA;
            ix0 = (mLinEq - 1) * WorkingSet->ldA;
            for (mLinEq = 0; mLinEq <= nVar; mLinEq++) {
              WorkingSet->ATwset->data[iy0 + mLinEq] = WorkingSet->Aineq->
                data[mLinEq + ix0];
            }
          }
        }
        break;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_sortLambdaQP_e(emxArray_real_T_MPC_fmincon_T *lambda,
  int32_T WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const
  int32_T WorkingSet_isActiveIdx[6], const emxArray_int32_T_MPC_fmincon_T
  *WorkingSet_Wid, const emxArray_int32_T_MPC_fmincon_T *WorkingSet_Wlocalidx,
  emxArray_real_T_MPC_fmincon_T *workspace)
{
  int32_T currentMplier;
  if (WorkingSet_nActiveConstr != 0) {
    int32_T idxOffset;
    int32_T mAll;
    mAll = ((WorkingSet_sizes[1] + WorkingSet_sizes[3]) + WorkingSet_sizes[2]) -
      1;
    for (currentMplier = 0; currentMplier <= mAll; currentMplier++) {
      workspace->data[currentMplier] = lambda->data[currentMplier];
      lambda->data[currentMplier] = 0.0;
    }

    currentMplier = 0;
    mAll = 0;
    while ((mAll + 1 <= WorkingSet_nActiveConstr) && (WorkingSet_Wid->data[mAll]
            <= 2)) {
      if (WorkingSet_Wid->data[mAll] == 1) {
        idxOffset = 1;
      } else {
        idxOffset = WorkingSet_isActiveIdx[1];
      }

      lambda->data[(idxOffset + WorkingSet_Wlocalidx->data[mAll]) - 2] =
        workspace->data[currentMplier];
      currentMplier++;
      mAll++;
    }

    while (mAll + 1 <= WorkingSet_nActiveConstr) {
      switch (WorkingSet_Wid->data[mAll]) {
       case 3:
        idxOffset = WorkingSet_isActiveIdx[2];
        break;

       case 4:
        idxOffset = WorkingSet_isActiveIdx[3];
        break;

       default:
        idxOffset = WorkingSet_isActiveIdx[4];
        break;
      }

      lambda->data[(idxOffset + WorkingSet_Wlocalidx->data[mAll]) - 2] =
        workspace->data[currentMplier];
      currentMplier++;
      mAll++;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_test_exit_ksj(s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager, int32_T
  runTimeOptions_MaxFunctionEvalu)
{
  real_T nlpComplErrorLSQ;
  real_T nlpComplErrorTmp;
  real_T s;
  real_T smax;
  real_T tmp;
  int32_T b_ix;
  int32_T fullRank_R;
  int32_T iL0;
  int32_T iQR_diag;
  int32_T ix;
  int32_T mEq;
  int32_T mLB;
  int32_T mLambda;
  int32_T mLambda_tmp;
  int32_T nVar;
  int32_T rankR;
  boolean_T dxTooSmall;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T isFeasible;
  nVar = WorkingSet->nVar - 1;
  mEq = WorkingSet->sizes[1];
  mLB = WorkingSet->sizes[3] - 1;
  mLambda_tmp = WorkingSet->sizes[1] + WorkingSet->sizes[2];
  mLambda = (mLambda_tmp + WorkingSet->sizes[3]) - 1;
  for (iQR_diag = 0; iQR_diag <= mLambda; iQR_diag++) {
    TrialState->lambdaStopTest->data[iQR_diag] = TrialState->lambdasqp->
      data[iQR_diag];
  }

  for (iQR_diag = 0; iQR_diag <= nVar; iQR_diag++) {
    TrialState->gradLag->data[iQR_diag] = TrialState->grad->data[iQR_diag];
  }

  MPC_fmincon_xgemv(WorkingSet->nVar, WorkingSet->sizes[1], WorkingSet->Aeq,
                    WorkingSet->ldA, TrialState->lambdaStopTest, 1,
                    TrialState->gradLag);
  MPC_fmincon_xgemv(WorkingSet->nVar, WorkingSet->sizes[2], WorkingSet->Aineq,
                    WorkingSet->ldA, TrialState->lambdaStopTest,
                    WorkingSet->sizes[1] + 1, TrialState->gradLag);
  for (iQR_diag = 0; iQR_diag <= mLB; iQR_diag++) {
    TrialState->gradLag->data[WorkingSet->indexLB->data[iQR_diag] - 1] -=
      TrialState->lambdaStopTest->data[mLambda_tmp + iQR_diag];
  }

  if (WorkingSet->nVar < 1) {
    iL0 = 0;
  } else {
    iL0 = 1;
    if (WorkingSet->nVar > 1) {
      smax = fabs(TrialState->grad->data[0]);
      for (iQR_diag = 2; iQR_diag <= nVar + 1; iQR_diag++) {
        s = fabs(TrialState->grad->data[iQR_diag - 1]);
        if (s > smax) {
          iL0 = iQR_diag;
          smax = s;
        }
      }
    }
  }

  smax = fmax(1.0, fabs(TrialState->grad->data[iL0 - 1]));
  if (rtIsInf(smax)) {
    smax = 1.0;
  }

  MeritFunction->nlpPrimalFeasError = MPC_fm_computePrimalFeasError_d
    (WorkingSet->sizes[2] - TrialState->mNonlinIneq, TrialState->mNonlinIneq,
     TrialState->cIneq, WorkingSet->sizes[1] - TrialState->mNonlinEq,
     TrialState->mNonlinEq, TrialState->cEq);
  if (TrialState->sqpIterations == 0) {
    MeritFunction->feasRelativeFactor = fmax(1.0,
      MeritFunction->nlpPrimalFeasError);
  }

  isFeasible = (MeritFunction->nlpPrimalFeasError <= 1.0E-6 *
                MeritFunction->feasRelativeFactor);
  MPC_fminco_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag,
    &Flags->gradOK, &MeritFunction->nlpDualFeasError);
  if (!Flags->gradOK) {
    Flags->done = true;
    if (isFeasible) {
      TrialState->sqpExitFlag = 2;
    } else {
      TrialState->sqpExitFlag = -2;
    }
  } else {
    MeritFunction->nlpComplError = MPC_fmincon_computeComplError_c
      (fscales_cineq_constraint, WorkingSet->sizes[2], TrialState->cIneq,
       WorkingSet->sizes[3], TrialState->lambdaStopTest, WorkingSet->sizes[1] +
       1);
    s = fmax(MeritFunction->nlpDualFeasError, MeritFunction->nlpComplError);
    MeritFunction->firstOrderOpt = s;
    if (TrialState->sqpIterations > 1) {
      for (iQR_diag = 0; iQR_diag <= nVar; iQR_diag++) {
        memspace->workspace_double->data[iQR_diag] = TrialState->grad->
          data[iQR_diag];
      }

      MPC_fmincon_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[1],
                          WorkingSet->Aeq, WorkingSet->ldA,
                          TrialState->lambdaStopTestPrev, 1,
                          memspace->workspace_double);
      MPC_fmincon_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[2],
                          WorkingSet->Aineq, WorkingSet->ldA,
                          TrialState->lambdaStopTestPrev, WorkingSet->sizes[1] +
                          1, memspace->workspace_double);
      for (iQR_diag = 0; iQR_diag <= mLB; iQR_diag++) {
        memspace->workspace_double->data[WorkingSet->indexLB->data[iQR_diag] - 1]
          -= TrialState->lambdaStopTestPrev->data[mLambda_tmp + iQR_diag];
      }

      MPC_fminco_computeDualFeasError(WorkingSet->nVar,
        memspace->workspace_double, &dxTooSmall, &nlpComplErrorLSQ);
      nlpComplErrorTmp = MPC_fmincon_computeComplError_c
        (fscales_cineq_constraint, WorkingSet->sizes[2], TrialState->cIneq,
         WorkingSet->sizes[3], TrialState->lambdaStopTestPrev, WorkingSet->
         sizes[1] + 1);
      tmp = fmax(nlpComplErrorLSQ, nlpComplErrorTmp);
      if (tmp < s) {
        MeritFunction->nlpDualFeasError = nlpComplErrorLSQ;
        MeritFunction->nlpComplError = nlpComplErrorTmp;
        MeritFunction->firstOrderOpt = tmp;
        for (iQR_diag = 0; iQR_diag <= mLambda; iQR_diag++) {
          TrialState->lambdaStopTest->data[iQR_diag] =
            TrialState->lambdaStopTestPrev->data[iQR_diag];
        }
      } else {
        for (iQR_diag = 0; iQR_diag <= mLambda; iQR_diag++) {
          TrialState->lambdaStopTestPrev->data[iQR_diag] =
            TrialState->lambdaStopTest->data[iQR_diag];
        }
      }
    } else {
      for (iQR_diag = 0; iQR_diag <= mLambda; iQR_diag++) {
        TrialState->lambdaStopTestPrev->data[iQR_diag] =
          TrialState->lambdaStopTest->data[iQR_diag];
      }
    }

    if (isFeasible && (MeritFunction->nlpDualFeasError <= 1.0E-6 * smax) &&
        (MeritFunction->nlpComplError <= 1.0E-6 * smax)) {
      Flags->done = true;
      TrialState->sqpExitFlag = 1;
    } else {
      Flags->done = false;
      if (isFeasible && (TrialState->sqpFval < -1.0E+20)) {
        Flags->done = true;
        TrialState->sqpExitFlag = -3;
      } else {
        guard1 = false;
        if (TrialState->sqpIterations > 0) {
          dxTooSmall = true;
          iQR_diag = 0;
          exitg1 = false;
          while ((!exitg1) && (iQR_diag <= nVar)) {
            if (1.0E-6 * fmax(1.0, fabs(TrialState->xstarsqp->data[iQR_diag])) <=
                fabs(TrialState->delta_x->data[iQR_diag])) {
              dxTooSmall = false;
              exitg1 = true;
            } else {
              iQR_diag++;
            }
          }

          if (dxTooSmall) {
            if (!isFeasible) {
              if (Flags->stepType != 2) {
                Flags->stepType = 2;
                Flags->failedLineSearch = false;
                Flags->stepAccepted = false;
                guard1 = true;
              } else {
                Flags->done = true;
                TrialState->sqpExitFlag = -2;
              }
            } else {
              ix = WorkingSet->nActiveConstr - 1;
              if (WorkingSet->nActiveConstr > 0) {
                if (TrialState->mNonlinEq + TrialState->mNonlinIneq > 0) {
                  MPC__updateWorkingSetForNewQP_b(WorkingSet, WorkingSet->sizes
                    [2], TrialState->mNonlinIneq, TrialState->cIneq,
                    WorkingSet->sizes[1], TrialState->mNonlinEq, TrialState->cEq);
                }

                for (iQR_diag = 0; iQR_diag <= ix; iQR_diag++) {
                  TrialState->lambda->data[iQR_diag] = 0.0;
                }

                iQR_diag = WorkingSet->nVar * WorkingSet->nActiveConstr;
                guard2 = false;
                if (iQR_diag > 0) {
                  for (iQR_diag = 0; iQR_diag <= ix; iQR_diag++) {
                    fullRank_R = WorkingSet->ldA * iQR_diag;
                    rankR = QRManager->ldq * iQR_diag;
                    for (iL0 = 0; iL0 <= nVar; iL0++) {
                      QRManager->QR->data[rankR + iL0] = WorkingSet->
                        ATwset->data[iL0 + fullRank_R];
                    }
                  }

                  guard2 = true;
                } else if (iQR_diag == 0) {
                  QRManager->mrows = WorkingSet->nVar;
                  QRManager->ncols = WorkingSet->nActiveConstr;
                  QRManager->minRowCol = 0;
                } else {
                  guard2 = true;
                }

                if (guard2) {
                  QRManager->usedPivoting = true;
                  QRManager->mrows = WorkingSet->nVar;
                  QRManager->ncols = WorkingSet->nActiveConstr;
                  if (WorkingSet->nVar <= WorkingSet->nActiveConstr) {
                    QRManager->minRowCol = WorkingSet->nVar;
                  } else {
                    QRManager->minRowCol = WorkingSet->nActiveConstr;
                  }

                  MPC_fmincon_xgeqp3(QRManager->QR, WorkingSet->nVar,
                                     WorkingSet->nActiveConstr, QRManager->jpvt,
                                     QRManager->tau);
                }

                MPC_fmincon_computeQ_(QRManager, QRManager->mrows);
                MPC_fmincon_xgemv_buj(WorkingSet->nVar, WorkingSet->nVar,
                                      QRManager->Q, QRManager->ldq,
                                      TrialState->grad,
                                      memspace->workspace_double);
                if (WorkingSet->nVar >= WorkingSet->nActiveConstr) {
                  iQR_diag = WorkingSet->nVar;
                } else {
                  iQR_diag = WorkingSet->nActiveConstr;
                }

                s = fmin(1.4901161193847656E-8, (real_T)iQR_diag *
                         2.2204460492503131E-16) * fabs(QRManager->QR->data[0]);
                if (WorkingSet->nVar <= WorkingSet->nActiveConstr) {
                  fullRank_R = WorkingSet->nVar;
                } else {
                  fullRank_R = WorkingSet->nActiveConstr;
                }

                rankR = 0;
                iQR_diag = 0;
                while ((rankR < fullRank_R) && (fabs(QRManager->QR->
                         data[iQR_diag]) > s)) {
                  rankR++;
                  iQR_diag = (iQR_diag + QRManager->ldq) + 1;
                }

                if (rankR != 0) {
                  for (iQR_diag = rankR; iQR_diag >= 1; iQR_diag--) {
                    ix = ((iQR_diag - 1) * QRManager->ldq + iQR_diag) - 2;
                    memspace->workspace_double->data[iQR_diag - 1] /=
                      QRManager->QR->data[ix + 1];
                    for (iL0 = 0; iL0 <= iQR_diag - 2; iL0++) {
                      b_ix = (iQR_diag - iL0) - 2;
                      memspace->workspace_double->data[b_ix] -=
                        memspace->workspace_double->data[iQR_diag - 1] *
                        QRManager->QR->data[ix - iL0];
                    }
                  }
                }

                if (WorkingSet->nActiveConstr <= fullRank_R) {
                  iL0 = WorkingSet->nActiveConstr;
                } else {
                  iL0 = fullRank_R;
                }

                for (iQR_diag = 0; iQR_diag < iL0; iQR_diag++) {
                  TrialState->lambda->data[QRManager->jpvt->data[iQR_diag] - 1] =
                    memspace->workspace_double->data[iQR_diag];
                }

                for (iQR_diag = 1; iQR_diag <= mEq; iQR_diag++) {
                  TrialState->lambda->data[iQR_diag - 1] = -TrialState->
                    lambda->data[iQR_diag - 1];
                }

                MPC_fmincon_sortLambdaQP_e(TrialState->lambda,
                  WorkingSet->nActiveConstr, WorkingSet->sizes,
                  WorkingSet->isActiveIdx, WorkingSet->Wid,
                  WorkingSet->Wlocalidx, memspace->workspace_double);
                for (mEq = 0; mEq <= nVar; mEq++) {
                  memspace->workspace_double->data[mEq] = TrialState->grad->
                    data[mEq];
                }

                MPC_fmincon_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[1],
                                    WorkingSet->Aeq, WorkingSet->ldA,
                                    TrialState->lambda, 1,
                                    memspace->workspace_double);
                MPC_fmincon_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[2],
                                    WorkingSet->Aineq, WorkingSet->ldA,
                                    TrialState->lambda, WorkingSet->sizes[1] + 1,
                                    memspace->workspace_double);
                for (nVar = 0; nVar <= mLB; nVar++) {
                  memspace->workspace_double->data[WorkingSet->indexLB->
                    data[nVar] - 1] -= TrialState->lambda->data[mLambda_tmp +
                    nVar];
                }

                MPC_fminco_computeDualFeasError(WorkingSet->nVar,
                  memspace->workspace_double, &isFeasible, &s);
                nlpComplErrorLSQ = MPC_fmincon_computeComplError_c
                  (fscales_cineq_constraint, WorkingSet->sizes[2],
                   TrialState->cIneq, WorkingSet->sizes[3], TrialState->lambda,
                   1);
                if ((s <= 1.0E-6 * smax) && (nlpComplErrorLSQ <= 1.0E-6 * smax))
                {
                  MeritFunction->nlpDualFeasError = s;
                  MeritFunction->nlpComplError = nlpComplErrorLSQ;
                  MeritFunction->firstOrderOpt = fmax(s, nlpComplErrorLSQ);
                  for (mLB = 0; mLB <= mLambda; mLB++) {
                    TrialState->lambdaStopTest->data[mLB] = TrialState->
                      lambda->data[mLB];
                  }

                  Flags->done = true;
                  TrialState->sqpExitFlag = 1;
                } else {
                  Flags->done = true;
                  TrialState->sqpExitFlag = 2;
                }
              } else {
                Flags->done = true;
                TrialState->sqpExitFlag = 2;
              }
            }
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          if (TrialState->sqpIterations >= 100) {
            Flags->done = true;
            TrialState->sqpExitFlag = 0;
          } else if (TrialState->FunctionEvaluations >=
                     runTimeOptions_MaxFunctionEvalu) {
            Flags->done = true;
            TrialState->sqpExitFlag = 0;
          }
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static boolean_T MPC_f_feasibleX0ForWorkingSet_n(emxArray_real_T_MPC_fmincon_T
  *workspace, emxArray_real_T_MPC_fmincon_T *xCurrent,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager)
{
  emxArray_real_T_MPC_fmincon_T *B;
  real_T c;
  real_T d_v;
  real_T workingset_0;
  int32_T ar;
  int32_T b_mIneq;
  int32_T exitg1;
  int32_T h;
  int32_T iAcol;
  int32_T iy;
  int32_T jBcol;
  int32_T ldq;
  int32_T mWConstr;
  int32_T minmana;
  int32_T nVar_tmp_tmp;
  int32_T offsetEq2;
  boolean_T nonDegenerateWset;
  mWConstr = workingset->nActiveConstr - 1;
  nVar_tmp_tmp = workingset->nVar;
  nonDegenerateWset = true;
  if (workingset->nActiveConstr != 0) {
    for (jBcol = 0; jBcol <= mWConstr; jBcol++) {
      workspace->data[jBcol] = workingset->bwset->data[jBcol];
      workspace->data[jBcol + workspace->size[0]] = workingset->bwset->
        data[jBcol];
    }

    ldq = workingset->ldA;
    if ((workingset->nVar != 0) && (workingset->nActiveConstr != 0)) {
      iy = 0;
      b_mIneq = (workingset->nActiveConstr - 1) * workingset->ldA + 1;
      for (minmana = 1; ldq < 0 ? minmana >= b_mIneq : minmana <= b_mIneq;
           minmana += ldq) {
        c = 0.0;
        offsetEq2 = (minmana + nVar_tmp_tmp) - 1;
        for (jBcol = minmana; jBcol <= offsetEq2; jBcol++) {
          c += workingset->ATwset->data[jBcol - 1] * xCurrent->data[jBcol -
            minmana];
        }

        workspace->data[iy] -= c;
        iy++;
      }
    }

    MPC_fmincon_emxInit_real_T(&B, 2);
    if (workingset->nActiveConstr >= workingset->nVar) {
      for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
        ldq = qrmanager->ldq * jBcol;
        for (minmana = 0; minmana <= mWConstr; minmana++) {
          qrmanager->QR->data[minmana + ldq] = workingset->ATwset->
            data[workingset->ldA * minmana + jBcol];
        }
      }

      if (workingset->nActiveConstr * workingset->nVar == 0) {
        qrmanager->mrows = workingset->nActiveConstr;
        qrmanager->ncols = workingset->nVar;
        qrmanager->minRowCol = 0;
      } else {
        qrmanager->usedPivoting = false;
        qrmanager->mrows = workingset->nActiveConstr;
        qrmanager->ncols = workingset->nVar;
        for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
          qrmanager->jpvt->data[jBcol] = jBcol + 1;
        }

        if (workingset->nActiveConstr <= workingset->nVar) {
          jBcol = workingset->nActiveConstr;
        } else {
          jBcol = workingset->nVar;
        }

        qrmanager->minRowCol = jBcol;
        b_mIneq = B->size[0] * B->size[1];
        B->size[0] = qrmanager->QR->size[0];
        B->size[1] = qrmanager->QR->size[1];
        MPC_fm_emxEnsureCapacity_real_T(B, b_mIneq);
        ldq = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        for (b_mIneq = 0; b_mIneq < ldq; b_mIneq++) {
          B->data[b_mIneq] = qrmanager->QR->data[b_mIneq];
        }

        if (qrmanager->QR->size[0] <= qrmanager->QR->size[1]) {
          minmana = qrmanager->QR->size[0];
        } else {
          minmana = qrmanager->QR->size[1];
        }

        b_mIneq = qrmanager->tau->size[0];
        qrmanager->tau->size[0] = minmana;
        MPC_fm_emxEnsureCapacity_real_T(qrmanager->tau, b_mIneq);
        for (b_mIneq = 0; b_mIneq < minmana; b_mIneq++) {
          qrmanager->tau->data[b_mIneq] = 0.0;
        }

        if (jBcol >= 1) {
          MPC_fmincon_qrf(B, workingset->nActiveConstr, workingset->nVar, jBcol,
                          qrmanager->tau);
        }

        b_mIneq = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        qrmanager->QR->size[0] = B->size[0];
        qrmanager->QR->size[1] = B->size[1];
        MPC_fm_emxEnsureCapacity_real_T(qrmanager->QR, b_mIneq);
        ldq = B->size[0] * B->size[1];
        for (b_mIneq = 0; b_mIneq < ldq; b_mIneq++) {
          qrmanager->QR->data[b_mIneq] = B->data[b_mIneq];
        }
      }

      MPC_fmincon_computeQ_(qrmanager, qrmanager->mrows);
      ldq = qrmanager->ldq;
      iy = workspace->size[0];
      b_mIneq = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      MPC_fm_emxEnsureCapacity_real_T(B, b_mIneq);
      ar = workspace->size[0] * workspace->size[1];
      if (ar - 1 >= 0) {
        memcpy(&B->data[0], &workspace->data[0], (uint32_T)ar * sizeof(real_T));
      }

      if (workingset->nVar != 0) {
        for (jBcol = 0; iy < 0 ? jBcol >= iy : jBcol <= iy; jBcol += iy) {
          b_mIneq = jBcol + nVar_tmp_tmp;
          for (minmana = jBcol + 1; minmana <= b_mIneq; minmana++) {
            workspace->data[minmana - 1] = 0.0;
          }
        }

        jBcol = -1;
        for (b_mIneq = 0; iy < 0 ? b_mIneq >= iy : b_mIneq <= iy; b_mIneq += iy)
        {
          iAcol = -1;
          ar = b_mIneq + nVar_tmp_tmp;
          for (minmana = b_mIneq + 1; minmana <= ar; minmana++) {
            c = 0.0;
            for (offsetEq2 = 0; offsetEq2 <= mWConstr; offsetEq2++) {
              c += qrmanager->Q->data[(offsetEq2 + iAcol) + 1] * B->data
                [(offsetEq2 + jBcol) + 1];
            }

            workspace->data[minmana - 1] += c;
            iAcol += ldq;
          }

          jBcol += iy;
        }
      }

      for (mWConstr = 0; mWConstr < 2; mWConstr++) {
        jBcol = iy * mWConstr - 1;
        for (minmana = nVar_tmp_tmp; minmana >= 1; minmana--) {
          iAcol = (minmana - 1) * ldq;
          b_mIneq = minmana + jBcol;
          c = workspace->data[b_mIneq];
          if (c != 0.0) {
            workspace->data[b_mIneq] = c / qrmanager->QR->data[(minmana + iAcol)
              - 1];
            for (offsetEq2 = 0; offsetEq2 <= minmana - 2; offsetEq2++) {
              ar = (offsetEq2 + jBcol) + 1;
              workspace->data[ar] -= qrmanager->QR->data[offsetEq2 + iAcol] *
                workspace->data[b_mIneq];
            }
          }
        }
      }
    } else {
      MPC_fmincon_factorQR(qrmanager, workingset->ATwset, workingset->nVar,
                           workingset->nActiveConstr, workingset->ldA);
      MPC_fmincon_computeQ_(qrmanager, qrmanager->minRowCol);
      ldq = qrmanager->ldq;
      iy = workspace->size[0];
      for (b_mIneq = 0; b_mIneq < 2; b_mIneq++) {
        jBcol = iy * b_mIneq;
        for (minmana = 0; minmana <= mWConstr; minmana++) {
          iAcol = ldq * minmana;
          ar = minmana + jBcol;
          c = workspace->data[ar];
          for (offsetEq2 = 0; offsetEq2 < minmana; offsetEq2++) {
            c -= qrmanager->QR->data[offsetEq2 + iAcol] * workspace->
              data[offsetEq2 + jBcol];
          }

          workspace->data[ar] = c / qrmanager->QR->data[minmana + iAcol];
        }
      }

      b_mIneq = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      MPC_fm_emxEnsureCapacity_real_T(B, b_mIneq);
      ar = workspace->size[0] * workspace->size[1];
      if (ar - 1 >= 0) {
        memcpy(&B->data[0], &workspace->data[0], (uint32_T)ar * sizeof(real_T));
      }

      if (workingset->nVar != 0) {
        for (jBcol = 0; iy < 0 ? jBcol >= iy : jBcol <= iy; jBcol += iy) {
          b_mIneq = jBcol + nVar_tmp_tmp;
          for (minmana = jBcol + 1; minmana <= b_mIneq; minmana++) {
            workspace->data[minmana - 1] = 0.0;
          }
        }

        iAcol = 1;
        for (minmana = 0; iy < 0 ? minmana >= iy : minmana <= iy; minmana += iy)
        {
          ar = -1;
          b_mIneq = iAcol + mWConstr;
          for (offsetEq2 = iAcol; offsetEq2 <= b_mIneq; offsetEq2++) {
            h = minmana + nVar_tmp_tmp;
            for (jBcol = minmana + 1; jBcol <= h; jBcol++) {
              workspace->data[jBcol - 1] += qrmanager->Q->data[(ar + jBcol) -
                minmana] * B->data[offsetEq2 - 1];
            }

            ar += ldq;
          }

          iAcol += iy;
        }
      }
    }

    MPC_fmincon_emxFree_real_T(&B);
    jBcol = 0;
    do {
      exitg1 = 0;
      if (jBcol <= nVar_tmp_tmp - 1) {
        c = workspace->data[jBcol];
        if (rtIsInf(c) || rtIsNaN(c)) {
          nonDegenerateWset = false;
          exitg1 = 1;
        } else {
          c = workspace->data[jBcol + workspace->size[0]];
          if (rtIsInf(c) || rtIsNaN(c)) {
            nonDegenerateWset = false;
            exitg1 = 1;
          } else {
            jBcol++;
          }
        }
      } else {
        if (nVar_tmp_tmp >= 1) {
          for (mWConstr = 0; mWConstr < nVar_tmp_tmp; mWConstr++) {
            workspace->data[mWConstr] += xCurrent->data[mWConstr];
          }
        }

        mWConstr = workspace->size[0];
        ldq = workingset->sizes[3];
        if (workingset->probType == 2) {
          c = 0.0;
          b_mIneq = workingset->sizes[2] - 1;
          iy = workingset->sizes[1] - 1;
          if (workingset->Aineq->size[0] != 0) {
            for (jBcol = 0; jBcol <= b_mIneq; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                bineq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVarOrig, workingset->sizes[2],
              workingset->Aineq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            for (minmana = 0; minmana <= b_mIneq; minmana++) {
              workingset->maxConstrWorkspace->data[minmana] -= workspace->
                data[workingset->nVarOrig + minmana];
              c = fmax(c, workingset->maxConstrWorkspace->data[minmana]);
            }
          }

          if (workingset->Aeq->size[0] != 0) {
            for (jBcol = 0; jBcol <= iy; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                beq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVarOrig, workingset->sizes[1],
              workingset->Aeq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            minmana = workingset->nVarOrig + workingset->sizes[2];
            offsetEq2 = minmana + workingset->sizes[1];
            for (b_mIneq = 0; b_mIneq <= iy; b_mIneq++) {
              workingset_0 = (workingset->maxConstrWorkspace->data[b_mIneq] -
                              workspace->data[minmana + b_mIneq]) +
                workspace->data[offsetEq2 + b_mIneq];
              workingset->maxConstrWorkspace->data[b_mIneq] = workingset_0;
              c = fmax(c, fabs(workingset_0));
            }
          }
        } else {
          c = 0.0;
          iy = workingset->sizes[2] - 1;
          minmana = workingset->sizes[1] - 1;
          if (workingset->Aineq->size[0] != 0) {
            for (jBcol = 0; jBcol <= iy; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                bineq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVar, workingset->sizes[2],
              workingset->Aineq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            for (jBcol = 0; jBcol <= iy; jBcol++) {
              c = fmax(c, workingset->maxConstrWorkspace->data[jBcol]);
            }
          }

          if (workingset->Aeq->size[0] != 0) {
            for (jBcol = 0; jBcol <= minmana; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                beq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujm(workingset->nVar, workingset->sizes[1],
              workingset->Aeq, workingset->ldA, workspace,
              workingset->maxConstrWorkspace);
            for (jBcol = 0; jBcol <= minmana; jBcol++) {
              c = fmax(c, fabs(workingset->maxConstrWorkspace->data[jBcol]));
            }
          }
        }

        if (workingset->sizes[3] > 0) {
          for (minmana = 0; minmana < ldq; minmana++) {
            c = fmax(c, -workspace->data[workingset->indexLB->data[minmana] - 1]
                     - workingset->lb->data[workingset->indexLB->data[minmana] -
                     1]);
          }
        }

        ldq = workingset->sizes[3];
        if (workingset->probType == 2) {
          d_v = 0.0;
          b_mIneq = workingset->sizes[2] - 1;
          iy = workingset->sizes[1] - 1;
          if (workingset->Aineq->size[0] != 0) {
            for (jBcol = 0; jBcol <= b_mIneq; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                bineq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujmj(workingset->nVarOrig, workingset->sizes[2],
              workingset->Aineq, workingset->ldA, workspace, workspace->size[0]
              + 1, workingset->maxConstrWorkspace);
            for (minmana = 0; minmana <= b_mIneq; minmana++) {
              workingset->maxConstrWorkspace->data[minmana] -= workspace->data
                [(mWConstr + workingset->nVarOrig) + minmana];
              d_v = fmax(d_v, workingset->maxConstrWorkspace->data[minmana]);
            }
          }

          if (workingset->Aeq->size[0] != 0) {
            for (jBcol = 0; jBcol <= iy; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                beq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujmj(workingset->nVarOrig, workingset->sizes[1],
              workingset->Aeq, workingset->ldA, workspace, workspace->size[0] +
              1, workingset->maxConstrWorkspace);
            minmana = workingset->nVarOrig + workingset->sizes[2];
            offsetEq2 = minmana + workingset->sizes[1];
            for (b_mIneq = 0; b_mIneq <= iy; b_mIneq++) {
              workingset_0 = (workingset->maxConstrWorkspace->data[b_mIneq] -
                              workspace->data[(mWConstr + minmana) + b_mIneq]) +
                workspace->data[(mWConstr + offsetEq2) + b_mIneq];
              workingset->maxConstrWorkspace->data[b_mIneq] = workingset_0;
              d_v = fmax(d_v, fabs(workingset_0));
            }
          }
        } else {
          d_v = 0.0;
          iy = workingset->sizes[2] - 1;
          minmana = workingset->sizes[1] - 1;
          if (workingset->Aineq->size[0] != 0) {
            for (jBcol = 0; jBcol <= iy; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                bineq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujmj(workingset->nVar, workingset->sizes[2],
              workingset->Aineq, workingset->ldA, workspace, workspace->size[0]
              + 1, workingset->maxConstrWorkspace);
            for (jBcol = 0; jBcol <= iy; jBcol++) {
              d_v = fmax(d_v, workingset->maxConstrWorkspace->data[jBcol]);
            }
          }

          if (workingset->Aeq->size[0] != 0) {
            for (jBcol = 0; jBcol <= minmana; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                beq->data[jBcol];
            }

            MPC_fmincon_xgemv_bujmj(workingset->nVar, workingset->sizes[1],
              workingset->Aeq, workingset->ldA, workspace, workspace->size[0] +
              1, workingset->maxConstrWorkspace);
            for (jBcol = 0; jBcol <= minmana; jBcol++) {
              d_v = fmax(d_v, fabs(workingset->maxConstrWorkspace->data[jBcol]));
            }
          }
        }

        if (workingset->sizes[3] > 0) {
          for (minmana = 0; minmana < ldq; minmana++) {
            d_v = fmax(d_v, -workspace->data[(mWConstr + workingset->
                        indexLB->data[minmana]) - 1] - workingset->lb->
                       data[workingset->indexLB->data[minmana] - 1]);
          }
        }

        for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
          if ((c <= 2.2204460492503131E-16) || (c < d_v)) {
            xCurrent->data[jBcol] = workspace->data[jBcol];
          } else {
            xCurrent->data[jBcol] = workspace->data[mWConstr + jBcol];
          }
        }

        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return nonDegenerateWset;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T MPC_fm_maxConstraintViolation_f(s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *obj, const emxArray_real_T_MPC_fmincon_T *x)
{
  real_T obj_0;
  real_T v;
  int32_T mEq;
  int32_T mIneq;
  int32_T mLB;
  int32_T offsetEq1;
  int32_T offsetEq2;
  mLB = obj->sizes[3] - 1;
  if (obj->probType == 2) {
    v = 0.0;
    mIneq = obj->sizes[2] - 1;
    mEq = obj->sizes[1] - 1;
    if (obj->Aineq->size[0] != 0) {
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        obj->maxConstrWorkspace->data[offsetEq1] = obj->bineq->data[offsetEq1];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVarOrig, obj->sizes[2], obj->Aineq,
        obj->ldA, x, obj->maxConstrWorkspace);
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        obj->maxConstrWorkspace->data[offsetEq1] -= x->data[obj->nVarOrig +
          offsetEq1];
        v = fmax(v, obj->maxConstrWorkspace->data[offsetEq1]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVarOrig, obj->sizes[1], obj->Aeq, obj->ldA,
        x, obj->maxConstrWorkspace);
      offsetEq1 = obj->nVarOrig + obj->sizes[2];
      offsetEq2 = offsetEq1 + obj->sizes[1];
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj_0 = (obj->maxConstrWorkspace->data[mIneq] - x->data[offsetEq1 +
                 mIneq]) + x->data[offsetEq2 + mIneq];
        obj->maxConstrWorkspace->data[mIneq] = obj_0;
        v = fmax(v, fabs(obj_0));
      }
    }
  } else {
    v = 0.0;
    mIneq = obj->sizes[2] - 1;
    mEq = obj->sizes[1] - 1;
    if (obj->Aineq->size[0] != 0) {
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        obj->maxConstrWorkspace->data[offsetEq1] = obj->bineq->data[offsetEq1];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVar, obj->sizes[2], obj->Aineq, obj->ldA, x,
        obj->maxConstrWorkspace);
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        v = fmax(v, obj->maxConstrWorkspace->data[offsetEq1]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      MPC_fmincon_xgemv_bujmjs(obj->nVar, obj->sizes[1], obj->Aeq, obj->ldA, x,
        obj->maxConstrWorkspace);
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        v = fmax(v, fabs(obj->maxConstrWorkspace->data[mIneq]));
      }
    }
  }

  if (obj->sizes[3] > 0) {
    for (mEq = 0; mEq <= mLB; mEq++) {
      v = fmax(v, -x->data[obj->indexLB->data[mEq] - 1] - obj->lb->data
               [obj->indexLB->data[mEq] - 1]);
    }
  }

  return v;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fminco_PresolveWorkingSet_p(s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *solution, s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T
  *qrmanager)
{
  real_T c_tol;
  real_T qtb;
  int32_T TYPE;
  int32_T c_idxDiag;
  int32_T ix;
  int32_T iy;
  int32_T k_idx;
  int32_T mTotalWorkingEq;
  int32_T mWorkingFixed;
  int32_T nFixedConstr;
  int32_T nVar;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T okWorkingSet;
  solution->state = 82;
  nVar = workingset->nVar - 1;
  mWorkingFixed = workingset->nWConstr[0];
  mTotalWorkingEq = workingset->nWConstr[0] + workingset->nWConstr[1];
  nFixedConstr = 0;
  if (mTotalWorkingEq > 0) {
    for (nFixedConstr = 0; nFixedConstr < mTotalWorkingEq; nFixedConstr++) {
      for (TYPE = 0; TYPE <= nVar; TYPE++) {
        qrmanager->QR->data[nFixedConstr + qrmanager->ldq * TYPE] =
          workingset->ATwset->data[workingset->ldA * nFixedConstr + TYPE];
      }
    }

    nFixedConstr = mTotalWorkingEq - workingset->nVar;
    if (nFixedConstr <= 0) {
      nFixedConstr = 0;
    }

    for (TYPE = 0; TYPE <= nVar; TYPE++) {
      qrmanager->jpvt->data[TYPE] = 0;
    }

    if (mTotalWorkingEq * workingset->nVar == 0) {
      qrmanager->mrows = mTotalWorkingEq;
      qrmanager->ncols = workingset->nVar;
      qrmanager->minRowCol = 0;
    } else {
      qrmanager->usedPivoting = true;
      qrmanager->mrows = mTotalWorkingEq;
      qrmanager->ncols = workingset->nVar;
      if (mTotalWorkingEq <= workingset->nVar) {
        qrmanager->minRowCol = mTotalWorkingEq;
      } else {
        qrmanager->minRowCol = workingset->nVar;
      }

      MPC_fmincon_xgeqp3(qrmanager->QR, mTotalWorkingEq, workingset->nVar,
                         qrmanager->jpvt, qrmanager->tau);
    }

    c_tol = 100.0 * (real_T)workingset->nVar * 2.2204460492503131E-16;
    if (workingset->nVar <= mTotalWorkingEq) {
      TYPE = workingset->nVar;
    } else {
      TYPE = mTotalWorkingEq;
    }

    c_idxDiag = (TYPE - 1) * qrmanager->ldq + TYPE;
    while ((c_idxDiag > 0) && (fabs(qrmanager->QR->data[c_idxDiag - 1]) < c_tol))
    {
      c_idxDiag = (c_idxDiag - qrmanager->ldq) - 1;
      nFixedConstr++;
    }

    if (nFixedConstr > 0) {
      MPC_fmincon_computeQ_(qrmanager, qrmanager->mrows);
      k_idx = 0;
      exitg1 = false;
      while ((!exitg1) && (k_idx <= nFixedConstr - 1)) {
        ix = ((mTotalWorkingEq - k_idx) - 1) * qrmanager->ldq;
        qtb = 0.0;
        for (c_idxDiag = 0; c_idxDiag < mTotalWorkingEq; c_idxDiag++) {
          qtb += qrmanager->Q->data[ix + c_idxDiag] * workingset->bwset->
            data[c_idxDiag];
        }

        if (fabs(qtb) >= c_tol) {
          nFixedConstr = -1;
          exitg1 = true;
        } else {
          k_idx++;
        }
      }
    }

    if (nFixedConstr > 0) {
      for (c_idxDiag = 0; c_idxDiag < mTotalWorkingEq; c_idxDiag++) {
        ix = qrmanager->ldq * c_idxDiag;
        iy = workingset->ldA * c_idxDiag;
        for (k_idx = 0; k_idx <= nVar; k_idx++) {
          qrmanager->QR->data[ix + k_idx] = workingset->ATwset->data[k_idx + iy];
        }
      }

      for (nVar = 0; nVar < mWorkingFixed; nVar++) {
        qrmanager->jpvt->data[nVar] = 1;
      }

      nVar = workingset->nWConstr[0] + 1;
      for (mWorkingFixed = nVar; mWorkingFixed <= mTotalWorkingEq; mWorkingFixed
           ++) {
        qrmanager->jpvt->data[mWorkingFixed - 1] = 0;
      }

      if (workingset->nVar * mTotalWorkingEq == 0) {
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = mTotalWorkingEq;
        qrmanager->minRowCol = 0;
      } else {
        qrmanager->usedPivoting = true;
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = mTotalWorkingEq;
        qrmanager->minRowCol = TYPE;
        MPC_fmincon_xgeqp3(qrmanager->QR, workingset->nVar, mTotalWorkingEq,
                           qrmanager->jpvt, qrmanager->tau);
      }

      for (mWorkingFixed = 0; mWorkingFixed < nFixedConstr; mWorkingFixed++) {
        memspace->workspace_int->data[mWorkingFixed] = qrmanager->jpvt->data
          [(mTotalWorkingEq - nFixedConstr) + mWorkingFixed];
      }

      MPC_fmincon_countsort(memspace->workspace_int, nFixedConstr,
                            memspace->workspace_sort, 1, mTotalWorkingEq);
      for (mTotalWorkingEq = nFixedConstr; mTotalWorkingEq >= 1; mTotalWorkingEq
           --) {
        ix = workingset->nWConstr[0] + workingset->nWConstr[1];
        if (ix != 0) {
          nVar = memspace->workspace_int->data[mTotalWorkingEq - 1];
          if (nVar <= ix) {
            if ((ix == workingset->nActiveConstr) || (ix == nVar)) {
              workingset->mEqRemoved++;
              workingset->indexEqRemoved->data[workingset->mEqRemoved - 1] =
                workingset->Wlocalidx->data[nVar - 1];
              MPC_fmincon_removeConstr(workingset, nVar);
            } else {
              workingset->mEqRemoved++;
              TYPE = workingset->Wid->data[nVar - 1] - 1;
              workingset->indexEqRemoved->data[workingset->mEqRemoved - 1] =
                workingset->Wlocalidx->data[nVar - 1];
              workingset->isActiveConstr->data[(workingset->
                isActiveIdx[workingset->Wid->data[nVar - 1] - 1] +
                workingset->Wlocalidx->data[nVar - 1]) - 2] = false;
              workingset->Wid->data[nVar - 1] = workingset->Wid->data[ix - 1];
              workingset->Wlocalidx->data[nVar - 1] = workingset->
                Wlocalidx->data[ix - 1];
              c_idxDiag = workingset->nVar;
              for (mWorkingFixed = 0; mWorkingFixed < c_idxDiag; mWorkingFixed++)
              {
                workingset->ATwset->data[mWorkingFixed + workingset->ldA * (nVar
                  - 1)] = workingset->ATwset->data[(ix - 1) * workingset->ldA +
                  mWorkingFixed];
              }

              workingset->bwset->data[nVar - 1] = workingset->bwset->data[ix - 1];
              workingset->Wid->data[ix - 1] = workingset->Wid->data
                [workingset->nActiveConstr - 1];
              workingset->Wlocalidx->data[ix - 1] = workingset->Wlocalidx->
                data[workingset->nActiveConstr - 1];
              c_idxDiag = workingset->nVar;
              for (mWorkingFixed = 0; mWorkingFixed < c_idxDiag; mWorkingFixed++)
              {
                workingset->ATwset->data[mWorkingFixed + workingset->ldA * (ix -
                  1)] = workingset->ATwset->data[(workingset->nActiveConstr - 1)
                  * workingset->ldA + mWorkingFixed];
              }

              workingset->bwset->data[ix - 1] = workingset->bwset->
                data[workingset->nActiveConstr - 1];
              workingset->nActiveConstr--;
              workingset->nWConstr[TYPE]--;
            }
          }
        }
      }
    }
  }

  if ((nFixedConstr != -1) && (workingset->nActiveConstr <= qrmanager->ldq)) {
    nVar = workingset->nActiveConstr;
    ix = workingset->nWConstr[0] + workingset->nWConstr[1];
    mTotalWorkingEq = workingset->nVar;
    if ((workingset->nWConstr[2] + workingset->nWConstr[3]) +
        workingset->nWConstr[4] > 0) {
      c_tol = 100.0 * (real_T)workingset->nVar * 2.2204460492503131E-16;
      for (mWorkingFixed = 0; mWorkingFixed < ix; mWorkingFixed++) {
        qrmanager->jpvt->data[mWorkingFixed] = 1;
      }

      for (mWorkingFixed = ix + 1; mWorkingFixed <= nVar; mWorkingFixed++) {
        qrmanager->jpvt->data[mWorkingFixed - 1] = 0;
      }

      TYPE = workingset->nActiveConstr;
      for (mWorkingFixed = 0; mWorkingFixed < TYPE; mWorkingFixed++) {
        c_idxDiag = qrmanager->ldq * mWorkingFixed;
        k_idx = workingset->ldA * mWorkingFixed;
        for (nVar = 0; nVar < mTotalWorkingEq; nVar++) {
          qrmanager->QR->data[c_idxDiag + nVar] = workingset->ATwset->data[nVar
            + k_idx];
        }
      }

      if (workingset->nVar * workingset->nActiveConstr == 0) {
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = workingset->nActiveConstr;
        qrmanager->minRowCol = 0;
      } else {
        qrmanager->usedPivoting = true;
        qrmanager->mrows = workingset->nVar;
        qrmanager->ncols = workingset->nActiveConstr;
        if (workingset->nVar <= workingset->nActiveConstr) {
          qrmanager->minRowCol = workingset->nVar;
        } else {
          qrmanager->minRowCol = workingset->nActiveConstr;
        }

        MPC_fmincon_xgeqp3(qrmanager->QR, workingset->nVar,
                           workingset->nActiveConstr, qrmanager->jpvt,
                           qrmanager->tau);
      }

      mWorkingFixed = 0;
      for (nVar = workingset->nActiveConstr - 1; nVar + 1 > mTotalWorkingEq;
           nVar--) {
        mWorkingFixed++;
        memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->jpvt->
          data[nVar];
      }

      if (nVar + 1 <= workingset->nVar) {
        mTotalWorkingEq = qrmanager->ldq * nVar + nVar;
        while ((nVar + 1 > ix) && (fabs(qrmanager->QR->data[mTotalWorkingEq]) <
                c_tol)) {
          mWorkingFixed++;
          memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->
            jpvt->data[nVar];
          nVar--;
          mTotalWorkingEq = (mTotalWorkingEq - qrmanager->ldq) - 1;
        }
      }

      MPC_fmincon_countsort(memspace->workspace_int, mWorkingFixed,
                            memspace->workspace_sort, ix + 1,
                            workingset->nActiveConstr);
      for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
        MPC_fmincon_removeConstr(workingset, memspace->workspace_int->
          data[nFixedConstr - 1]);
      }
    }

    okWorkingSet = MPC_f_feasibleX0ForWorkingSet_n(memspace->workspace_double,
      solution->xstar, workingset, qrmanager);
    guard1 = false;
    if (!okWorkingSet) {
      nVar = workingset->nActiveConstr;
      ix = workingset->nWConstr[0] + workingset->nWConstr[1];
      mTotalWorkingEq = workingset->nVar;
      if ((workingset->nWConstr[2] + workingset->nWConstr[3]) +
          workingset->nWConstr[4] > 0) {
        c_tol = 1000.0 * (real_T)workingset->nVar * 2.2204460492503131E-16;
        for (mWorkingFixed = 0; mWorkingFixed < ix; mWorkingFixed++) {
          qrmanager->jpvt->data[mWorkingFixed] = 1;
        }

        for (mWorkingFixed = ix + 1; mWorkingFixed <= nVar; mWorkingFixed++) {
          qrmanager->jpvt->data[mWorkingFixed - 1] = 0;
        }

        TYPE = workingset->nActiveConstr;
        for (mWorkingFixed = 0; mWorkingFixed < TYPE; mWorkingFixed++) {
          c_idxDiag = qrmanager->ldq * mWorkingFixed;
          k_idx = workingset->ldA * mWorkingFixed;
          for (nVar = 0; nVar < mTotalWorkingEq; nVar++) {
            qrmanager->QR->data[c_idxDiag + nVar] = workingset->ATwset->
              data[nVar + k_idx];
          }
        }

        if (workingset->nVar * workingset->nActiveConstr == 0) {
          qrmanager->mrows = workingset->nVar;
          qrmanager->ncols = workingset->nActiveConstr;
          qrmanager->minRowCol = 0;
        } else {
          qrmanager->usedPivoting = true;
          qrmanager->mrows = workingset->nVar;
          qrmanager->ncols = workingset->nActiveConstr;
          if (workingset->nVar <= workingset->nActiveConstr) {
            qrmanager->minRowCol = workingset->nVar;
          } else {
            qrmanager->minRowCol = workingset->nActiveConstr;
          }

          MPC_fmincon_xgeqp3(qrmanager->QR, workingset->nVar,
                             workingset->nActiveConstr, qrmanager->jpvt,
                             qrmanager->tau);
        }

        mWorkingFixed = 0;
        for (nVar = workingset->nActiveConstr - 1; nVar + 1 > mTotalWorkingEq;
             nVar--) {
          mWorkingFixed++;
          memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->
            jpvt->data[nVar];
        }

        if (nVar + 1 <= workingset->nVar) {
          mTotalWorkingEq = qrmanager->ldq * nVar + nVar;
          while ((nVar + 1 > ix) && (fabs(qrmanager->QR->data[mTotalWorkingEq]) <
                  c_tol)) {
            mWorkingFixed++;
            memspace->workspace_int->data[mWorkingFixed - 1] = qrmanager->
              jpvt->data[nVar];
            nVar--;
            mTotalWorkingEq = (mTotalWorkingEq - qrmanager->ldq) - 1;
          }
        }

        MPC_fmincon_countsort(memspace->workspace_int, mWorkingFixed,
                              memspace->workspace_sort, ix + 1,
                              workingset->nActiveConstr);
        for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
          MPC_fmincon_removeConstr(workingset, memspace->workspace_int->
            data[nFixedConstr - 1]);
        }
      }

      okWorkingSet = MPC_f_feasibleX0ForWorkingSet_n(memspace->workspace_double,
        solution->xstar, workingset, qrmanager);
      if (!okWorkingSet) {
        solution->state = -7;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (workingset->nWConstr[0] + workingset->nWConstr[1] == workingset->nVar)
      {
        c_tol = MPC_fm_maxConstraintViolation_f(workingset, solution->xstar);
        if (c_tol > 1.0E-6) {
          solution->state = -2;
        }
      }
    }
  } else {
    solution->state = -3;
    mTotalWorkingEq = (workingset->nWConstr[0] + workingset->nWConstr[1]) + 1;
    mWorkingFixed = workingset->nActiveConstr;
    for (nFixedConstr = mTotalWorkingEq; nFixedConstr <= mWorkingFixed;
         nFixedConstr++) {
      workingset->isActiveConstr->data[(workingset->isActiveIdx[workingset->
        Wid->data[nFixedConstr - 1] - 1] + workingset->Wlocalidx->
        data[nFixedConstr - 1]) - 2] = false;
    }

    workingset->nWConstr[2] = 0;
    workingset->nWConstr[3] = 0;
    workingset->nWConstr[4] = 0;
    workingset->nActiveConstr = workingset->nWConstr[0] + workingset->nWConstr[1];
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_feasibleratiotest_e(const emxArray_real_T_MPC_fmincon_T *
  solution_xstar, const emxArray_real_T_MPC_fmincon_T *solution_searchDir,
  emxArray_real_T_MPC_fmincon_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_MPC_fmincon_T *workingset_Aineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_bineq, const
  emxArray_real_T_MPC_fmincon_T *workingset_lb, const
  emxArray_int32_T_MPC_fmincon_T *workingset_indexLB, const int32_T
  workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_MPC_fminco_T *workingset_isActiveConstr, const int32_T
  workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
  *newBlocking, int32_T *constrType, int32_T *constrIdx)
{
  real_T alphaTemp;
  real_T c;
  real_T denomTol;
  real_T phaseOneCorrectionP;
  real_T ratio;
  int32_T b_iy;
  int32_T d;
  int32_T e;
  int32_T ia;
  int32_T iyend;
  int32_T ldw;
  int32_T totalIneq;
  totalIneq = workingset_sizes[2] - 1;
  *alpha = 1.0E+30;
  *newBlocking = false;
  *constrType = 0;
  *constrIdx = 0;
  denomTol = 2.2204460492503131E-13 * MPC_fmincon_xnrm2_a(workingset_nVar,
    solution_searchDir);
  if (workingset_nWConstr[2] < workingset_sizes[2]) {
    if (totalIneq >= 0) {
      memcpy(&workspace->data[0], &workingset_bineq->data[0], (uint32_T)
             (totalIneq + 1) * sizeof(real_T));
    }

    MPC_fmincon_xgemv_bujmjslzp(workingset_nVar, workingset_sizes[2],
      workingset_Aineq, workingset_ldA, solution_xstar, workspace);
    ldw = workspace->size[0];
    if ((workingset_nVar != 0) && (workingset_sizes[2] != 0)) {
      iyend = workspace->size[0] + workingset_sizes[2];
      if (ldw + 1 <= iyend) {
        memset(&workspace->data[ldw], 0, (uint32_T)(iyend - ldw) * sizeof(real_T));
      }

      iyend = workspace->size[0];
      d = (workingset_sizes[2] - 1) * workingset_ldA + 1;
      for (b_iy = 1; workingset_ldA < 0 ? b_iy >= d : b_iy <= d; b_iy +=
           workingset_ldA) {
        c = 0.0;
        e = (b_iy + workingset_nVar) - 1;
        for (ia = b_iy; ia <= e; ia++) {
          c += workingset_Aineq->data[ia - 1] * solution_searchDir->data[ia -
            b_iy];
        }

        workspace->data[iyend] += c;
        iyend++;
      }
    }

    for (b_iy = 0; b_iy <= totalIneq; b_iy++) {
      c = workspace->data[ldw + b_iy];
      if ((c > denomTol) && (!workingset_isActiveConstr->data
                             [(workingset_isActiveIdx[2] + b_iy) - 1])) {
        alphaTemp = fmin(fabs(workspace->data[b_iy]), 1.0E-6 - workspace->
                         data[b_iy]) / c;
        if (alphaTemp < *alpha) {
          *alpha = alphaTemp;
          *constrType = 3;
          *constrIdx = b_iy + 1;
          *newBlocking = true;
        }
      }
    }
  }

  if (workingset_nWConstr[3] < workingset_sizes[3]) {
    c = solution_xstar->data[workingset_nVar - 1] * (real_T)isPhaseOne;
    phaseOneCorrectionP = solution_searchDir->data[workingset_nVar - 1] *
      (real_T)isPhaseOne;
    ldw = workingset_sizes[3];
    for (totalIneq = 0; totalIneq <= ldw - 2; totalIneq++) {
      b_iy = workingset_indexLB->data[totalIneq];
      alphaTemp = -solution_searchDir->data[b_iy - 1] - phaseOneCorrectionP;
      if ((alphaTemp > denomTol) && (!workingset_isActiveConstr->data
           [(workingset_isActiveIdx[3] + totalIneq) - 1])) {
        ratio = (-solution_xstar->data[b_iy - 1] - workingset_lb->data[b_iy - 1])
          - c;
        alphaTemp = fmin(fabs(ratio), 1.0E-6 - ratio) / alphaTemp;
        if (alphaTemp < *alpha) {
          *alpha = alphaTemp;
          *constrType = 4;
          *constrIdx = totalIneq + 1;
          *newBlocking = true;
        }
      }
    }

    totalIneq = workingset_indexLB->data[workingset_sizes[3] - 1] - 1;
    c = -solution_searchDir->data[totalIneq];
    if ((c > denomTol) && (!workingset_isActiveConstr->data
                           [(workingset_isActiveIdx[3] + workingset_sizes[3]) -
                           2])) {
      ratio = -solution_xstar->data[totalIneq] - workingset_lb->data[totalIneq];
      alphaTemp = fmin(fabs(ratio), 1.0E-6 - ratio) / c;
      if (alphaTemp < *alpha) {
        *alpha = alphaTemp;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
      }
    }
  }

  if (!isPhaseOne) {
    *newBlocking = (((!*newBlocking) || (!(*alpha > 1.0))) && (*newBlocking));
    *alpha = fmin(*alpha, 1.0);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_iterate_b(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, const char_T options_SolverName[7], real_T options_StepTolerance,
  real_T options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations)
{
  real_T normDelta;
  real_T s;
  real_T temp;
  int32_T activeSetChangeID;
  int32_T globalActiveConstrIdx;
  int32_T idx;
  int32_T idxRotGCol;
  int32_T iy;
  int32_T nVar;
  boolean_T subProblemChanged;
  boolean_T updateFval;
  static const char_T b_b[7] = { 'f', 'm', 'i', 'n', 'c', 'o', 'n' };

  int32_T b_iy;
  int32_T exitg1;
  int32_T ix0;
  int32_T iyend;
  int32_T nActiveConstr;
  boolean_T guard1;
  boolean_T guard11;
  boolean_T guard2;
  boolean_T nonDegenerateWset;
  subProblemChanged = true;
  updateFval = true;
  activeSetChangeID = 0;
  nVar = workingset->nVar;
  globalActiveConstrIdx = 0;
  MPC_fmincon_computeGrad_StoreHx(objective, H, f, solution->xstar);
  solution->fstar = MPC_fmincon_computeFval_ReuseHx(objective,
    memspace->workspace_double, f, solution->xstar);
  if (solution->iterations < runTimeOptions_MaxIterations) {
    solution->state = -5;
  } else {
    solution->state = 0;
  }

  iyend = workingset->mConstrMax;
  for (idxRotGCol = 0; idxRotGCol < iyend; idxRotGCol++) {
    solution->lambda->data[idxRotGCol] = 0.0;
  }

  do {
    exitg1 = 0;
    if (solution->state == -5) {
      guard11 = false;
      if (subProblemChanged) {
        switch (activeSetChangeID) {
         case 1:
          ix0 = (workingset->nActiveConstr - 1) * workingset->ldA;
          if (qrmanager->mrows <= qrmanager->ncols + 1) {
            qrmanager->minRowCol = qrmanager->mrows;
          } else {
            qrmanager->minRowCol = qrmanager->ncols + 1;
          }

          b_iy = qrmanager->ldq * qrmanager->ncols;
          nActiveConstr = qrmanager->ldq;
          if (qrmanager->mrows != 0) {
            iyend = b_iy + qrmanager->mrows;
            for (idxRotGCol = b_iy + 1; idxRotGCol <= iyend; idxRotGCol++) {
              qrmanager->QR->data[idxRotGCol - 1] = 0.0;
            }

            iy = (qrmanager->mrows - 1) * qrmanager->ldq + 1;
            for (iyend = 1; nActiveConstr < 0 ? iyend >= iy : iyend <= iy; iyend
                 += nActiveConstr) {
              normDelta = 0.0;
              idxRotGCol = (iyend + qrmanager->mrows) - 1;
              for (idx = iyend; idx <= idxRotGCol; idx++) {
                normDelta += workingset->ATwset->data[(ix0 + idx) - iyend] *
                  qrmanager->Q->data[idx - 1];
              }

              qrmanager->QR->data[b_iy] += normDelta;
              b_iy++;
            }
          }

          qrmanager->ncols++;
          qrmanager->jpvt->data[qrmanager->ncols - 1] = qrmanager->ncols;
          for (idx = qrmanager->mrows - 2; idx + 2 > qrmanager->ncols; idx--) {
            b_iy = (qrmanager->ncols - 1) * qrmanager->ldq + idx;
            temp = qrmanager->QR->data[b_iy + 1];
            MPC_fmincon_xrotg(&qrmanager->QR->data[b_iy], &temp, &normDelta, &s);
            qrmanager->QR->data[b_iy + 1] = temp;
            idxRotGCol = qrmanager->ldq * idx;
            nActiveConstr = qrmanager->mrows;
            if (qrmanager->mrows >= 1) {
              iy = qrmanager->ldq + idxRotGCol;
              for (iyend = 0; iyend < nActiveConstr; iyend++) {
                b_iy = iy + iyend;
                ix0 = idxRotGCol + iyend;
                temp = qrmanager->Q->data[ix0] * normDelta + qrmanager->Q->
                  data[b_iy] * s;
                qrmanager->Q->data[b_iy] = qrmanager->Q->data[b_iy] * normDelta
                  - qrmanager->Q->data[ix0] * s;
                qrmanager->Q->data[ix0] = temp;
              }
            }
          }
          break;

         case -1:
          MPC_fmincon_deleteColMoveEnd(qrmanager, globalActiveConstrIdx);
          break;

         default:
          MPC_fmincon_factorQR(qrmanager, workingset->ATwset, nVar,
                               workingset->nActiveConstr, workingset->ldA);
          MPC_fmincon_computeQ_(qrmanager, qrmanager->mrows);
          break;
        }

        idxRotGCol = memcmp(&options_SolverName[0], &b_b[0], 7);
        MPC_fmincon_compute_deltax(H, solution, memspace, qrmanager, cholmanager,
          objective, (idxRotGCol == 0));
        if (solution->state != -5) {
          exitg1 = 1;
        } else {
          normDelta = MPC_fmincon_xnrm2_a(nVar, solution->searchDir);
          guard11 = true;
        }
      } else {
        for (idxRotGCol = 0; idxRotGCol < nVar; idxRotGCol++) {
          solution->searchDir->data[idxRotGCol] = 0.0;
        }

        normDelta = 0.0;
        guard11 = true;
      }

      if (guard11) {
        if ((!subProblemChanged) || (normDelta < options_StepTolerance) ||
            (workingset->nActiveConstr >= nVar)) {
          nActiveConstr = qrmanager->ncols;
          if (qrmanager->ncols > 0) {
            guard1 = false;
            if (objective->objtype != 4) {
              normDelta = 100.0 * (real_T)qrmanager->mrows *
                2.2204460492503131E-16;
              updateFval = ((qrmanager->mrows > 0) && (qrmanager->ncols > 0));
              if (updateFval) {
                idxRotGCol = qrmanager->ncols;
                guard2 = false;
                if (qrmanager->mrows < qrmanager->ncols) {
                  iyend = (qrmanager->ncols - 1) * qrmanager->ldq +
                    qrmanager->mrows;
                  while ((idxRotGCol > qrmanager->mrows) && (fabs(qrmanager->
                           QR->data[iyend - 1]) >= normDelta)) {
                    idxRotGCol--;
                    iyend -= qrmanager->ldq;
                  }

                  updateFval = (idxRotGCol == qrmanager->mrows);
                  if (!updateFval) {
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }

                if (guard2) {
                  iyend = (idxRotGCol - 1) * qrmanager->ldq + idxRotGCol;
                  while ((idxRotGCol >= 1) && (fabs(qrmanager->QR->data[iyend -
                           1]) >= normDelta)) {
                    idxRotGCol--;
                    iyend = (iyend - qrmanager->ldq) - 1;
                  }

                  updateFval = (idxRotGCol == 0);
                }
              }

              if (!updateFval) {
                solution->state = -7;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              MPC_fmincon_xgemv_buj(qrmanager->mrows, qrmanager->ncols,
                                    qrmanager->Q, qrmanager->ldq,
                                    objective->grad, memspace->workspace_double);
              if (qrmanager->ncols != 0) {
                for (iyend = nActiveConstr; iyend >= 1; iyend--) {
                  b_iy = ((iyend - 1) * qrmanager->ldq + iyend) - 2;
                  memspace->workspace_double->data[iyend - 1] /= qrmanager->
                    QR->data[b_iy + 1];
                  for (idx = 0; idx <= iyend - 2; idx++) {
                    idxRotGCol = (iyend - idx) - 2;
                    memspace->workspace_double->data[idxRotGCol] -=
                      memspace->workspace_double->data[iyend - 1] *
                      qrmanager->QR->data[b_iy - idx];
                  }
                }
              }

              for (idxRotGCol = 0; idxRotGCol < nActiveConstr; idxRotGCol++) {
                solution->lambda->data[idxRotGCol] = -memspace->
                  workspace_double->data[idxRotGCol];
              }
            }
          }

          if ((solution->state != -7) || (workingset->nActiveConstr > nVar)) {
            iyend = 0;
            normDelta = 0.0;
            idx = (workingset->nWConstr[0] + workingset->nWConstr[1]) + 1;
            ix0 = workingset->nActiveConstr;
            for (idxRotGCol = idx; idxRotGCol <= ix0; idxRotGCol++) {
              temp = solution->lambda->data[idxRotGCol - 1];
              if (temp < normDelta) {
                normDelta = temp;
                iyend = idxRotGCol;
              }
            }

            if (iyend == 0) {
              solution->state = 1;
            } else {
              activeSetChangeID = -1;
              globalActiveConstrIdx = iyend;
              subProblemChanged = true;
              MPC_fmincon_removeConstr(workingset, iyend);
              solution->lambda->data[iyend - 1] = 0.0;
            }
          } else {
            iyend = workingset->nActiveConstr;
            activeSetChangeID = 0;
            globalActiveConstrIdx = workingset->nActiveConstr;
            subProblemChanged = true;
            MPC_fmincon_removeConstr(workingset, workingset->nActiveConstr);
            solution->lambda->data[iyend - 1] = 0.0;
          }

          updateFval = false;
        } else {
          MPC_fmincon_feasibleratiotest_e(solution->xstar, solution->searchDir,
            memspace->workspace_double, workingset->nVar, workingset->ldA,
            workingset->Aineq, workingset->bineq, workingset->lb,
            workingset->indexLB, workingset->sizes, workingset->isActiveIdx,
            workingset->isActiveConstr, workingset->nWConstr,
            (objective->objtype == 5), &normDelta, &updateFval, &idxRotGCol,
            &iyend);
          if (updateFval) {
            switch (idxRotGCol) {
             case 3:
              MPC_fmincon_addAineqConstr(workingset, iyend);
              break;

             case 4:
              MPC__addBoundToActiveSetMatrix_(workingset, 4, iyend);
              break;

             default:
              MPC__addBoundToActiveSetMatrix_(workingset, 5, iyend);
              break;
            }

            activeSetChangeID = 1;
          } else {
            if (objective->objtype == 5) {
              if (MPC_fmincon_xnrm2_a(objective->nvar, solution->searchDir) >
                  100.0 * (real_T)objective->nvar * 1.4901161193847656E-8) {
                solution->state = 3;
              } else {
                solution->state = 4;
              }
            }

            subProblemChanged = false;
            if (workingset->nActiveConstr == 0) {
              solution->state = 1;
            }
          }

          if ((nVar >= 1) && (!(normDelta == 0.0))) {
            for (idxRotGCol = 0; idxRotGCol < nVar; idxRotGCol++) {
              solution->xstar->data[idxRotGCol] += normDelta *
                solution->searchDir->data[idxRotGCol];
            }
          }

          MPC_fmincon_computeGrad_StoreHx(objective, H, f, solution->xstar);
          updateFval = true;
        }

        solution->iterations++;
        iyend = objective->nvar - 1;
        if ((solution->iterations >= runTimeOptions_MaxIterations) &&
            ((solution->state != 1) || (objective->objtype == 5))) {
          solution->state = 0;
        }

        if (solution->iterations - solution->iterations / 50 * 50 == 0) {
          solution->maxConstr = MPC_fm_maxConstraintViolation_f(workingset,
            solution->xstar);
          normDelta = solution->maxConstr;
          if (objective->objtype == 5) {
            normDelta = solution->maxConstr - solution->xstar->data
              [objective->nvar - 1];
          }

          if (normDelta > 1.0E-6) {
            for (activeSetChangeID = 0; activeSetChangeID <= iyend;
                 activeSetChangeID++) {
              solution->searchDir->data[activeSetChangeID] = solution->
                xstar->data[activeSetChangeID];
            }

            nonDegenerateWset = MPC_f_feasibleX0ForWorkingSet_n
              (memspace->workspace_double, solution->searchDir, workingset,
               qrmanager);
            if ((!nonDegenerateWset) && (solution->state != 0)) {
              solution->state = -2;
            }

            activeSetChangeID = 0;
            normDelta = MPC_fm_maxConstraintViolation_f(workingset,
              solution->searchDir);
            if (normDelta < solution->maxConstr) {
              for (idxRotGCol = 0; idxRotGCol <= iyend; idxRotGCol++) {
                solution->xstar->data[idxRotGCol] = solution->searchDir->
                  data[idxRotGCol];
              }

              solution->maxConstr = normDelta;
            }
          }
        }

        if (updateFval && (options_ObjectiveLimit > (rtMinusInf))) {
          solution->fstar = MPC_fmincon_computeFval_ReuseHx(objective,
            memspace->workspace_double, f, solution->xstar);
          if ((solution->fstar < options_ObjectiveLimit) && ((solution->state !=
                0) || (objective->objtype != 5))) {
            solution->state = 2;
          }
        }
      }
    } else {
      if (!updateFval) {
        solution->fstar = MPC_fmincon_computeFval_ReuseHx(objective,
          memspace->workspace_double, f, solution->xstar);
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_driver_hb(const emxArray_real_T_MPC_fmincon_T *H, const
  emxArray_real_T_MPC_fmincon_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  objective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *options, int32_T
  runTimeOptions_MaxIterations)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T b_workingset;
  real_T maxConstr_new;
  int32_T idxEndIneq;
  int32_T idxStartIneq;
  int32_T mConstr;
  int32_T nVar;
  boolean_T exitg1;
  boolean_T guard1;
  solution->iterations = 0;
  nVar = workingset->nVar - 1;
  emxInitStruct_s_Wd0eYcEyLXg48EJ(&b_workingset);
  guard1 = false;
  if (workingset->probType == 3) {
    idxStartIneq = workingset->sizes[3];
    for (mConstr = 0; mConstr < idxStartIneq; mConstr++) {
      if (workingset->isActiveConstr->data[(workingset->isActiveIdx[3] + mConstr)
          - 1]) {
        solution->xstar->data[workingset->indexLB->data[mConstr] - 1] =
          -workingset->lb->data[workingset->indexLB->data[mConstr] - 1];
      }
    }

    MPC_fminco_PresolveWorkingSet_p(solution, memspace, workingset, qrmanager);
    if (solution->state < 0) {
    } else {
      guard1 = true;
    }
  } else {
    solution->state = 82;
    guard1 = true;
  }

  if (guard1) {
    solution->iterations = 0;
    solution->maxConstr = MPC_fm_maxConstraintViolation_f(workingset,
      solution->xstar);
    if (solution->maxConstr > 1.0E-6) {
      solution->xstar->data[workingset->nVar] = solution->maxConstr + 1.0;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(&b_workingset, workingset);
      if (workingset->probType == 3) {
        mConstr = 1;
      } else {
        mConstr = 4;
      }

      MPC_fmincon_setProblemType_g(&b_workingset, mConstr);
      idxStartIneq = (b_workingset.nWConstr[0] + b_workingset.nWConstr[1]) + 1;
      idxEndIneq = b_workingset.nActiveConstr;
      for (mConstr = idxStartIneq; mConstr <= idxEndIneq; mConstr++) {
        b_workingset.isActiveConstr->data
          [(b_workingset.isActiveIdx[b_workingset.Wid->data[mConstr - 1] - 1] +
            b_workingset.Wlocalidx->data[mConstr - 1]) - 2] = false;
      }

      b_workingset.nWConstr[2] = 0;
      b_workingset.nWConstr[3] = 0;
      b_workingset.nWConstr[4] = 0;
      b_workingset.nActiveConstr = b_workingset.nWConstr[0] +
        b_workingset.nWConstr[1];
      objective->prev_objtype = objective->objtype;
      objective->prev_nvar = objective->nvar;
      objective->prev_hasLinear = objective->hasLinear;
      objective->objtype = 5;
      objective->nvar = workingset->nVar + 1;
      objective->gammaScalar = 1.0;
      objective->hasLinear = true;
      solution->fstar = MPC_fmincon_computeFval(objective,
        memspace->workspace_double, H, f, solution->xstar);
      solution->state = 5;
      MPC_fmincon_iterate_b(H, f, solution, memspace, &b_workingset, qrmanager,
                            cholmanager, objective, options->SolverName,
                            1.4901161193847657E-10, 1.0E-6,
                            runTimeOptions_MaxIterations);
      if (b_workingset.isActiveConstr->data[(b_workingset.isActiveIdx[3] +
           b_workingset.sizes[3]) - 2]) {
        mConstr = b_workingset.sizes[1];
        exitg1 = false;
        while ((!exitg1) && (mConstr + 1 <= b_workingset.nActiveConstr)) {
          if ((b_workingset.Wid->data[mConstr] == 4) &&
              (b_workingset.Wlocalidx->data[mConstr] == b_workingset.sizes[3]))
          {
            MPC_fmincon_removeConstr(&b_workingset, mConstr + 1);
            exitg1 = true;
          } else {
            mConstr++;
          }
        }
      }

      mConstr = b_workingset.nActiveConstr;
      while ((mConstr > b_workingset.sizes[1]) && (mConstr > workingset->nVar))
      {
        MPC_fmincon_removeConstr(&b_workingset, mConstr);
        mConstr--;
      }

      solution->maxConstr = solution->xstar->data[workingset->nVar];
      MPC_fmincon_setProblemType_g(&b_workingset, workingset->probType);
      objective->objtype = objective->prev_objtype;
      objective->nvar = objective->prev_nvar;
      objective->hasLinear = objective->prev_hasLinear;
      options->ObjectiveLimit = (rtMinusInf);
      options->StepTolerance = 1.0E-6;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
      if (solution->state == 0) {
      } else {
        solution->maxConstr = MPC_fm_maxConstraintViolation_f(&b_workingset,
          solution->xstar);
        emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
        if (solution->maxConstr > 1.0E-6) {
          mConstr = b_workingset.mConstrMax;
          for (nVar = 0; nVar < mConstr; nVar++) {
            solution->lambda->data[nVar] = 0.0;
          }

          solution->fstar = MPC_fmincon_computeFval(objective,
            memspace->workspace_double, H, f, solution->xstar);
          solution->state = -2;
        } else {
          if (solution->maxConstr > 0.0) {
            for (mConstr = 0; mConstr <= nVar; mConstr++) {
              solution->searchDir->data[mConstr] = solution->xstar->data[mConstr];
            }

            MPC_fminco_PresolveWorkingSet_p(solution, memspace, &b_workingset,
              qrmanager);
            emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
            maxConstr_new = MPC_fm_maxConstraintViolation_f(workingset,
              solution->xstar);
            if (maxConstr_new >= solution->maxConstr) {
              solution->maxConstr = maxConstr_new;
              for (mConstr = 0; mConstr <= nVar; mConstr++) {
                solution->xstar->data[mConstr] = solution->searchDir->
                  data[mConstr];
              }
            }
          }

          MPC_fmincon_iterate_b(H, f, solution, memspace, workingset, qrmanager,
                                cholmanager, objective, options->SolverName,
                                options->StepTolerance, options->ObjectiveLimit,
                                runTimeOptions_MaxIterations);
        }
      }
    } else {
      MPC_fmincon_iterate_b(H, f, solution, memspace, workingset, qrmanager,
                            cholmanager, objective, options->SolverName,
                            options->StepTolerance, options->ObjectiveLimit,
                            runTimeOptions_MaxIterations);
    }
  }

  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&b_workingset);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_relaxed_i(const emxArray_real_T_MPC_fmincon_T *Hessian,
  const emxArray_real_T_MPC_fmincon_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T b_WorkingSet;
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T c_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_MPC_f_T qpoptions_0;
  real_T beta;
  real_T qpfvalQuadExcess;
  real_T qpfvalQuadExcess_tmp;
  real_T s;
  real_T smax;
  int32_T b_kend;
  int32_T b_mEq;
  int32_T idx_max;
  int32_T idx_negative;
  int32_T idx_positive;
  int32_T ix;
  int32_T mEq;
  int32_T mIneq;
  int32_T nVarOrig;
  int32_T tf_tmp;
  boolean_T b_tf;
  boolean_T tf;
  nVarOrig = WorkingSet->nVar - 1;
  mIneq = WorkingSet->sizes[2];
  mEq = WorkingSet->sizes[1];
  beta = 0.0;
  for (b_kend = 0; b_kend <= nVarOrig; b_kend++) {
    beta += Hessian->data[Hessian->size[0] * b_kend + b_kend];
  }

  beta /= (real_T)WorkingSet->nVar;
  if (TrialState->sqpIterations <= 1) {
    b_mEq = QPObjective->nvar;
    if (QPObjective->nvar < 1) {
      idx_max = 0;
    } else {
      idx_max = 1;
      if (QPObjective->nvar > 1) {
        smax = fabs(grad->data[0]);
        for (b_kend = 2; b_kend <= b_mEq; b_kend++) {
          s = fabs(grad->data[b_kend - 1]);
          if (s > smax) {
            idx_max = b_kend;
            smax = s;
          }
        }
      }
    }

    smax = fmax(1.0, fabs(grad->data[idx_max - 1])) * 100.0;
  } else {
    b_mEq = WorkingSet->mConstr;
    if (WorkingSet->mConstr < 1) {
      idx_max = 0;
    } else {
      idx_max = 1;
      if (WorkingSet->mConstr > 1) {
        smax = fabs(TrialState->lambdasqp->data[0]);
        for (b_kend = 2; b_kend <= b_mEq; b_kend++) {
          s = fabs(TrialState->lambdasqp->data[b_kend - 1]);
          if (s > smax) {
            idx_max = b_kend;
            smax = s;
          }
        }
      }
    }

    smax = fabs(TrialState->lambdasqp->data[idx_max - 1]);
  }

  QPObjective->nvar = WorkingSet->nVar;
  QPObjective->beta = beta;
  QPObjective->rho = smax;
  QPObjective->hasLinear = true;
  QPObjective->objtype = 4;
  emxInitStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet);
  emxCopyStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet, WorkingSet);
  MPC_fmincon_setProblemType_g(&b_WorkingSet, 2);
  idx_max = b_WorkingSet.sizes[2] - 1;
  b_mEq = b_WorkingSet.sizes[1] - 1;
  ix = (b_WorkingSet.sizes[3] - (b_WorkingSet.sizes[1] << 1)) -
    b_WorkingSet.sizes[2];
  for (b_kend = 0; b_kend <= idx_max; b_kend++) {
    memspace->workspace_double->data[b_kend] = b_WorkingSet.bineq->data[b_kend];
  }

  MPC_fmincon_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[2],
    b_WorkingSet.Aineq, b_WorkingSet.ldA, TrialState->xstar,
    memspace->workspace_double);
  for (b_kend = 0; b_kend <= idx_max; b_kend++) {
    TrialState->xstar->data[(nVarOrig + b_kend) + 1] = (real_T)
      (memspace->workspace_double->data[b_kend] > 0.0) *
      memspace->workspace_double->data[b_kend];
  }

  for (b_kend = 0; b_kend <= b_mEq; b_kend++) {
    memspace->workspace_double->data[b_kend] = b_WorkingSet.beq->data[b_kend];
  }

  MPC_fmincon_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[1],
    b_WorkingSet.Aeq, b_WorkingSet.ldA, TrialState->xstar,
    memspace->workspace_double);
  for (b_kend = 0; b_kend <= b_mEq; b_kend++) {
    idx_positive = (idx_max + b_kend) + 2;
    idx_negative = ((idx_max + b_mEq) + b_kend) + 3;
    if (memspace->workspace_double->data[b_kend] <= 0.0) {
      TrialState->xstar->data[nVarOrig + idx_positive] = 0.0;
      TrialState->xstar->data[nVarOrig + idx_negative] =
        -memspace->workspace_double->data[b_kend];
      MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      if (memspace->workspace_double->data[b_kend] >= -1.0E-6) {
        MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      }
    } else {
      TrialState->xstar->data[nVarOrig + idx_positive] =
        memspace->workspace_double->data[b_kend];
      TrialState->xstar->data[nVarOrig + idx_negative] = 0.0;
      MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      if (memspace->workspace_double->data[b_kend] <= 1.0E-6) {
        MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      }
    }
  }

  nVarOrig = qpoptions->MaxIterations;
  qpoptions->MaxIterations = (qpoptions->MaxIterations + b_WorkingSet.nVar) -
    WorkingSet->nVar;
  qpoptions_0 = *qpoptions;
  MPC_fmincon_driver_hb(Hessian, grad, TrialState, memspace, &b_WorkingSet,
                        QRManager, CholManager, QPObjective, &qpoptions_0,
                        qpoptions->MaxIterations);
  qpoptions->MaxIterations = nVarOrig;
  idx_max = b_WorkingSet.sizes[2];
  b_mEq = b_WorkingSet.sizes[1];
  idx_negative = b_WorkingSet.sizes[1] << 1;
  ix = (idx_negative + b_WorkingSet.sizes[2]) - 1;
  idx_positive = b_WorkingSet.sizes[3] - 1;
  nVarOrig = 0;
  for (b_kend = 0; b_kend < b_mEq; b_kend++) {
    tf_tmp = b_WorkingSet.isActiveIdx[3] + idx_positive;
    tf = b_WorkingSet.isActiveConstr->data[(tf_tmp - idx_negative) + b_kend];
    b_tf = b_WorkingSet.isActiveConstr->data[(tf_tmp - b_mEq) + b_kend];
    memspace->workspace_int->data[b_kend] = tf;
    memspace->workspace_int->data[b_kend + b_mEq] = b_tf;
    nVarOrig = (nVarOrig + tf) + b_tf;
  }

  for (b_kend = 0; b_kend < idx_max; b_kend++) {
    tf = b_WorkingSet.isActiveConstr->data[(((b_WorkingSet.isActiveIdx[3] +
      idx_positive) - ix) + b_kend) - 1];
    memspace->workspace_int->data[b_kend + idx_negative] = tf;
    nVarOrig += tf;
  }

  if (TrialState->state != -6) {
    idx_max = (b_WorkingSet.nVarMax - WorkingSet->nVar) - 1;
    idx_positive = WorkingSet->nVar + 1;
    s = 0.0;
    qpfvalQuadExcess = 0.0;
    if (idx_max >= 1) {
      ix = WorkingSet->nVar + idx_max;
      for (b_kend = idx_positive; b_kend <= ix; b_kend++) {
        s += fabs(TrialState->xstar->data[b_kend - 1]);
      }

      for (b_kend = 0; b_kend < idx_max; b_kend++) {
        qpfvalQuadExcess_tmp = TrialState->xstar->data[WorkingSet->nVar + b_kend];
        qpfvalQuadExcess += qpfvalQuadExcess_tmp * qpfvalQuadExcess_tmp;
      }
    }

    beta = (TrialState->fstar - smax * s) - beta / 2.0 * qpfvalQuadExcess;
    b_mEq = (WorkingSet->nVarMax - WorkingSet->nVar) - 1;
    smax = MeritFunction->penaltyParam;
    s = 0.0;
    if (WorkingSet->sizes[1] >= 1) {
      ix = WorkingSet->sizes[1];
      for (b_kend = 0; b_kend < ix; b_kend++) {
        s += fabs(TrialState->cEq->data[b_kend]);
      }
    }

    qpfvalQuadExcess = 0.0;
    for (b_kend = 0; b_kend < mIneq; b_kend++) {
      qpfvalQuadExcess_tmp = TrialState->cIneq->data[b_kend];
      if (qpfvalQuadExcess_tmp > 0.0) {
        qpfvalQuadExcess += qpfvalQuadExcess_tmp;
      }
    }

    s += qpfvalQuadExcess;
    qpfvalQuadExcess = MeritFunction->linearizedConstrViol;
    qpfvalQuadExcess_tmp = 0.0;
    if (b_mEq >= 1) {
      b_kend = WorkingSet->nVar + b_mEq;
      for (mIneq = idx_positive; mIneq <= b_kend; mIneq++) {
        qpfvalQuadExcess_tmp += fabs(TrialState->xstar->data[mIneq - 1]);
      }
    }

    MeritFunction->linearizedConstrViol = qpfvalQuadExcess_tmp;
    qpfvalQuadExcess = (s + qpfvalQuadExcess) - qpfvalQuadExcess_tmp;
    if ((qpfvalQuadExcess > 2.2204460492503131E-16) && (beta > 0.0)) {
      if (TrialState->sqpFval == 0.0) {
        smax = 1.0;
      } else {
        smax = 1.5;
      }

      smax = smax * beta / qpfvalQuadExcess;
    }

    if (smax < MeritFunction->penaltyParam) {
      MeritFunction->phi = smax * s + TrialState->sqpFval;
      if (((MeritFunction->initConstrViolationEq +
            MeritFunction->initConstrViolationIneq) * smax +
           MeritFunction->initFval) - MeritFunction->phi > (real_T)
          MeritFunction->nPenaltyDecreases * MeritFunction->threshold) {
        MeritFunction->nPenaltyDecreases++;
        if ((MeritFunction->nPenaltyDecreases << 1) > TrialState->sqpIterations)
        {
          MeritFunction->threshold *= 10.0;
        }

        MeritFunction->penaltyParam = fmax(smax, 1.0E-10);
      } else {
        MeritFunction->phi = MeritFunction->penaltyParam * s +
          TrialState->sqpFval;
      }
    } else {
      MeritFunction->penaltyParam = fmax(smax, 1.0E-10);
      MeritFunction->phi = MeritFunction->penaltyParam * s + TrialState->sqpFval;
    }

    MeritFunction->phiPrimePlus = fmin(beta - MeritFunction->penaltyParam * s,
      0.0);
    b_kend = b_WorkingSet.isActiveIdx[1] - 2;
    for (mIneq = 0; mIneq < mEq; mIneq++) {
      if ((memspace->workspace_int->data[mIneq] != 0) &&
          (memspace->workspace_int->data[mIneq + mEq] != 0)) {
        tf = true;
      } else {
        tf = false;
      }

      b_mEq = (mIneq + b_kend) + 1;
      TrialState->lambda->data[b_mEq] *= (real_T)tf;
    }

    b_kend = b_WorkingSet.isActiveIdx[2];
    idx_max = b_WorkingSet.nActiveConstr;
    for (mIneq = b_kend; mIneq <= idx_max; mIneq++) {
      if (b_WorkingSet.Wid->data[mIneq - 1] == 3) {
        TrialState->lambda->data[mIneq - 1] *= (real_T)memspace->
          workspace_int->data[(b_WorkingSet.Wlocalidx->data[mIneq - 1] + (mEq <<
          1)) - 1];
      }
    }
  }

  emxInitStruct_s_Wd0eYcEyLXg48EJ(&c_WorkingSet);
  emxCopyStruct_s_Wd0eYcEyLXg48EJ(&c_WorkingSet, &b_WorkingSet);
  mEq = (b_WorkingSet.sizes[3] - idx_negative) - b_WorkingSet.sizes[2];
  mIneq = b_WorkingSet.nActiveConstr;
  while ((mIneq > b_WorkingSet.sizes[1]) && (nVarOrig > 0)) {
    if ((c_WorkingSet.Wid->data[mIneq - 1] == 4) &&
        (c_WorkingSet.Wlocalidx->data[mIneq - 1] > mEq)) {
      beta = TrialState->lambda->data[c_WorkingSet.nActiveConstr - 1];
      TrialState->lambda->data[c_WorkingSet.nActiveConstr - 1] = 0.0;
      TrialState->lambda->data[mIneq - 1] = beta;
      MPC_fmincon_removeConstr(&c_WorkingSet, mIneq);
      nVarOrig--;
    }

    mIneq--;
  }

  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet);
  QPObjective->nvar = WorkingSet->nVar;
  QPObjective->hasLinear = true;
  QPObjective->objtype = 3;
  emxCopyStruct_s_Wd0eYcEyLXg48EJ(WorkingSet, &c_WorkingSet);
  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&c_WorkingSet);
  MPC_fmincon_setProblemType_g(WorkingSet, 3);
  MPC_fmincon_sortLambdaQP_e(TrialState->lambda, WorkingSet->nActiveConstr,
    WorkingSet->sizes, WorkingSet->isActiveIdx, WorkingSet->Wid,
    WorkingSet->Wlocalidx, memspace->workspace_double);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static boolean_T MPC_fmincon_step_p(int32_T *STEP_TYPE,
  emxArray_real_T_MPC_fmincon_T *Hessian, s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T
  *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_MPC_f_T *qpoptions)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T b_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_MPC_f_T qpoptions_0;
  real_T TrialState_0;
  real_T constrViolationEq;
  real_T constrViolationIneq;
  real_T oldDirIdx;
  int32_T b_mIneq;
  int32_T b_nVar;
  int32_T d;
  int32_T exitg1;
  int32_T iH0;
  int32_T idxIneqOffset;
  int32_T idxStartIneq;
  int32_T idx_Partition;
  int32_T idx_upper;
  int32_T kend;
  int32_T mConstrMax;
  int32_T mEq;
  int32_T mIneq;
  int32_T nVar_tmp_tmp;
  boolean_T exitg2;
  boolean_T guard1;
  boolean_T nonlinEqRemoved;
  boolean_T stepSuccess;
  stepSuccess = true;
  nVar_tmp_tmp = WorkingSet->nVar - 1;
  for (mConstrMax = 0; mConstrMax <= nVar_tmp_tmp; mConstrMax++) {
    if (*STEP_TYPE != 3) {
      TrialState->xstar->data[mConstrMax] = TrialState->xstarsqp->
        data[mConstrMax];
    } else {
      TrialState->searchDir->data[mConstrMax] = TrialState->xstar->
        data[mConstrMax];
    }
  }

  emxInitStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet);
  do {
    exitg1 = 0;
    guard1 = false;
    switch (*STEP_TYPE) {
     case 1:
      qpoptions_0 = *qpoptions;
      MPC_fmincon_driver_hb(Hessian, TrialState->grad, TrialState, memspace,
                            WorkingSet, QRManager, CholManager, QPObjective,
                            &qpoptions_0, qpoptions->MaxIterations);
      if (TrialState->state > 0) {
        idxStartIneq = WorkingSet->sizes[2];
        oldDirIdx = MeritFunction->penaltyParam;
        constrViolationEq = 0.0;
        if (WorkingSet->sizes[1] >= 1) {
          kend = WorkingSet->sizes[1];
          for (mConstrMax = 0; mConstrMax < kend; mConstrMax++) {
            constrViolationEq += fabs(TrialState->cEq->data[mConstrMax]);
          }
        }

        constrViolationIneq = 0.0;
        for (mConstrMax = 0; mConstrMax < idxStartIneq; mConstrMax++) {
          TrialState_0 = TrialState->cIneq->data[mConstrMax];
          if (TrialState_0 > 0.0) {
            constrViolationIneq += TrialState_0;
          }
        }

        constrViolationEq += constrViolationIneq;
        constrViolationIneq = MeritFunction->linearizedConstrViol;
        MeritFunction->linearizedConstrViol = 0.0;
        constrViolationIneq += constrViolationEq;
        if ((constrViolationIneq > 2.2204460492503131E-16) && (TrialState->fstar
             > 0.0)) {
          if (TrialState->sqpFval == 0.0) {
            TrialState_0 = 1.0;
          } else {
            TrialState_0 = 1.5;
          }

          oldDirIdx = TrialState_0 * TrialState->fstar / constrViolationIneq;
        }

        if (oldDirIdx < MeritFunction->penaltyParam) {
          MeritFunction->phi = oldDirIdx * constrViolationEq +
            TrialState->sqpFval;
          if (((MeritFunction->initConstrViolationEq +
                MeritFunction->initConstrViolationIneq) * oldDirIdx +
               MeritFunction->initFval) - MeritFunction->phi > (real_T)
              MeritFunction->nPenaltyDecreases * MeritFunction->threshold) {
            MeritFunction->nPenaltyDecreases++;
            if ((MeritFunction->nPenaltyDecreases << 1) >
                TrialState->sqpIterations) {
              MeritFunction->threshold *= 10.0;
            }

            MeritFunction->penaltyParam = fmax(oldDirIdx, 1.0E-10);
          } else {
            MeritFunction->phi = MeritFunction->penaltyParam * constrViolationEq
              + TrialState->sqpFval;
          }
        } else {
          MeritFunction->penaltyParam = fmax(oldDirIdx, 1.0E-10);
          MeritFunction->phi = MeritFunction->penaltyParam * constrViolationEq +
            TrialState->sqpFval;
        }

        MeritFunction->phiPrimePlus = fmin(TrialState->fstar -
          MeritFunction->penaltyParam * constrViolationEq, 0.0);
      }

      MPC_fmincon_sortLambdaQP_e(TrialState->lambda, WorkingSet->nActiveConstr,
        WorkingSet->sizes, WorkingSet->isActiveIdx, WorkingSet->Wid,
        WorkingSet->Wlocalidx, memspace->workspace_double);
      nonlinEqRemoved = (WorkingSet->mEqRemoved > 0);
      if (WorkingSet->indexEqRemoved->size[0] > 0) {
        while ((WorkingSet->mEqRemoved > 0) && (WorkingSet->indexEqRemoved->
                data[WorkingSet->mEqRemoved - 1] >= TrialState->iNonEq0)) {
          MPC_fmincon_addAeqConstr(WorkingSet, WorkingSet->indexEqRemoved->
            data[WorkingSet->mEqRemoved - 1]);
          WorkingSet->mEqRemoved--;
        }
      }

      if (nonlinEqRemoved) {
        idxStartIneq = TrialState->mNonlinEq;
        for (mConstrMax = 0; mConstrMax < idxStartIneq; mConstrMax++) {
          b_nVar = TrialState->iNonEq0 + mConstrMax;
          WorkingSet->Wlocalidx->data[b_nVar - 1] = b_nVar;
        }
      }

      if ((TrialState->state <= 0) && (TrialState->state != -6)) {
        *STEP_TYPE = 2;
      } else {
        for (mConstrMax = 0; mConstrMax <= nVar_tmp_tmp; mConstrMax++) {
          TrialState->delta_x->data[mConstrMax] = TrialState->xstar->
            data[mConstrMax];
        }

        guard1 = true;
      }
      break;

     case 2:
      iH0 = WorkingSet->nWConstr[0] + WorkingSet->nWConstr[1];
      idxStartIneq = iH0 + 1;
      kend = WorkingSet->nActiveConstr;
      for (mConstrMax = idxStartIneq; mConstrMax <= kend; mConstrMax++) {
        WorkingSet->isActiveConstr->data[(WorkingSet->isActiveIdx
          [WorkingSet->Wid->data[mConstrMax - 1] - 1] + WorkingSet->
          Wlocalidx->data[mConstrMax - 1]) - 2] = false;
      }

      WorkingSet->nWConstr[2] = 0;
      WorkingSet->nWConstr[3] = 0;
      WorkingSet->nWConstr[4] = 0;
      WorkingSet->nActiveConstr = iH0;
      MPC_fmincon_relaxed_i(Hessian, TrialState->grad, TrialState, MeritFunction,
                            memspace, WorkingSet, QRManager, CholManager,
                            QPObjective, qpoptions);
      for (mConstrMax = 0; mConstrMax <= nVar_tmp_tmp; mConstrMax++) {
        TrialState->delta_x->data[mConstrMax] = TrialState->xstar->
          data[mConstrMax];
      }

      guard1 = true;
      break;

     default:
      iH0 = WorkingSet->nWConstr[2];
      kend = WorkingSet->nWConstr[3];
      idxStartIneq = WorkingSet->nWConstr[4];
      b_nVar = WorkingSet->nVar - 1;
      mConstrMax = WorkingSet->mConstrMax - 1;
      for (b_mIneq = 0; b_mIneq <= b_nVar; b_mIneq++) {
        TrialState->xstarsqp->data[b_mIneq] = TrialState->xstarsqp_old->
          data[b_mIneq];
        TrialState->socDirection->data[b_mIneq] = TrialState->xstar->
          data[b_mIneq];
      }

      for (b_mIneq = 0; b_mIneq <= mConstrMax; b_mIneq++) {
        TrialState->lambdaStopTest->data[b_mIneq] = TrialState->lambda->
          data[b_mIneq];
      }

      emxCopyStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet, WorkingSet);
      mEq = WorkingSet->sizes[1] - 1;
      mIneq = WorkingSet->sizes[2];
      idxIneqOffset = WorkingSet->isActiveIdx[2];
      if (WorkingSet->sizes[1] > 0) {
        for (b_mIneq = 0; b_mIneq <= mEq; b_mIneq++) {
          b_WorkingSet.beq->data[b_mIneq] = -TrialState->cEq->data[b_mIneq];
        }

        MPC_fmincon_xgemv_bujmjslzp1(WorkingSet->nVar, WorkingSet->sizes[1],
          WorkingSet->Aeq, WorkingSet->ldA, TrialState->searchDir,
          b_WorkingSet.beq);
        for (b_mIneq = 0; b_mIneq <= mEq; b_mIneq++) {
          b_WorkingSet.bwset->data[b_mIneq] = b_WorkingSet.beq->data[b_mIneq];
        }
      }

      if (b_WorkingSet.sizes[2] > 0) {
        for (b_mIneq = 0; b_mIneq < mIneq; b_mIneq++) {
          b_WorkingSet.bineq->data[b_mIneq] = -TrialState->cIneq->data[b_mIneq];
        }

        MPC_fmincon_xgemv_bujmjslzp1(b_WorkingSet.nVar, b_WorkingSet.sizes[2],
          b_WorkingSet.Aineq, b_WorkingSet.ldA, TrialState->searchDir,
          b_WorkingSet.bineq);
        mIneq = 1;
        mEq = b_WorkingSet.sizes[2] + 1;
        idx_upper = (b_WorkingSet.sizes[2] + b_WorkingSet.sizes[3]) + 1;
        d = b_WorkingSet.nActiveConstr;
        for (b_mIneq = idxIneqOffset; b_mIneq <= d; b_mIneq++) {
          switch (b_WorkingSet.Wid->data[b_mIneq - 1]) {
           case 3:
            idx_Partition = mIneq;
            mIneq++;
            b_WorkingSet.bwset->data[b_mIneq - 1] = b_WorkingSet.bineq->
              data[b_WorkingSet.Wlocalidx->data[b_mIneq - 1] - 1];
            break;

           case 4:
            idx_Partition = mEq;
            mEq++;
            break;

           default:
            idx_Partition = idx_upper;
            idx_upper++;
            break;
          }

          TrialState->workingset_old->data[idx_Partition - 1] =
            b_WorkingSet.Wlocalidx->data[b_mIneq - 1];
        }
      }

      for (b_mIneq = 0; b_mIneq <= b_nVar; b_mIneq++) {
        TrialState->xstar->data[b_mIneq] = TrialState->xstarsqp->data[b_mIneq];
      }

      qpoptions_0 = *qpoptions;
      MPC_fmincon_driver_hb(Hessian, TrialState->grad, TrialState, memspace,
                            &b_WorkingSet, QRManager, CholManager, QPObjective,
                            &qpoptions_0, qpoptions->MaxIterations);
      if (b_WorkingSet.indexEqRemoved->size[0] > 0) {
        exitg2 = false;
        while ((!exitg2) && (b_WorkingSet.mEqRemoved > 0)) {
          b_mIneq = b_WorkingSet.indexEqRemoved->data[b_WorkingSet.mEqRemoved -
            1];
          if (b_mIneq >= TrialState->iNonEq0) {
            MPC_fmincon_addAeqConstr(&b_WorkingSet, b_mIneq);
            b_WorkingSet.mEqRemoved--;
          } else {
            exitg2 = true;
          }
        }
      }

      for (b_mIneq = 0; b_mIneq <= b_nVar; b_mIneq++) {
        TrialState_0 = TrialState->socDirection->data[b_mIneq];
        TrialState->socDirection->data[b_mIneq] = TrialState->xstar->
          data[b_mIneq] - TrialState_0;
        TrialState->xstar->data[b_mIneq] = TrialState_0;
      }

      stepSuccess = (MPC_fmincon_xnrm2_a(WorkingSet->nVar,
        TrialState->socDirection) <= 2.0 * MPC_fmincon_xnrm2_a(WorkingSet->nVar,
        TrialState->xstar));
      idxIneqOffset = b_WorkingSet.sizes[1] - 1;
      b_mIneq = b_WorkingSet.sizes[2];
      if (b_WorkingSet.sizes[1] > 0) {
        for (b_nVar = 0; b_nVar <= idxIneqOffset; b_nVar++) {
          constrViolationEq = -TrialState->cEq->data[b_nVar];
          b_WorkingSet.beq->data[b_nVar] = constrViolationEq;
          b_WorkingSet.bwset->data[b_nVar] = constrViolationEq;
        }
      }

      if (b_WorkingSet.sizes[2] > 0) {
        for (b_nVar = 0; b_nVar < b_mIneq; b_nVar++) {
          b_WorkingSet.bineq->data[b_nVar] = -TrialState->cIneq->data[b_nVar];
        }

        if (!stepSuccess) {
          mEq = b_WorkingSet.nWConstr[0] + b_WorkingSet.nWConstr[1];
          idxIneqOffset = mEq + 1;
          mIneq = b_WorkingSet.nActiveConstr;
          for (b_nVar = idxIneqOffset; b_nVar <= mIneq; b_nVar++) {
            b_WorkingSet.isActiveConstr->data
              [(b_WorkingSet.isActiveIdx[b_WorkingSet.Wid->data[b_nVar - 1] - 1]
                + b_WorkingSet.Wlocalidx->data[b_nVar - 1]) - 2] = false;
          }

          b_WorkingSet.nWConstr[2] = 0;
          b_WorkingSet.nWConstr[3] = 0;
          b_WorkingSet.nWConstr[4] = 0;
          b_WorkingSet.nActiveConstr = mEq;
          for (b_nVar = 0; b_nVar < iH0; b_nVar++) {
            MPC_fmincon_addAineqConstr(&b_WorkingSet, TrialState->
              workingset_old->data[b_nVar]);
          }

          for (iH0 = 0; iH0 < kend; iH0++) {
            MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 4,
              TrialState->workingset_old->data[iH0 + b_mIneq]);
          }

          for (kend = 0; kend < idxStartIneq; kend++) {
            MPC__addBoundToActiveSetMatrix_(&b_WorkingSet, 5,
              TrialState->workingset_old->data[(kend + b_mIneq) +
              b_WorkingSet.sizes[3]]);
          }
        }
      }

      if (!stepSuccess) {
        for (idxStartIneq = 0; idxStartIneq <= mConstrMax; idxStartIneq++) {
          TrialState->lambda->data[idxStartIneq] = TrialState->
            lambdaStopTest->data[idxStartIneq];
        }
      } else {
        MPC_fmincon_sortLambdaQP_e(TrialState->lambda,
          b_WorkingSet.nActiveConstr, b_WorkingSet.sizes,
          b_WorkingSet.isActiveIdx, b_WorkingSet.Wid, b_WorkingSet.Wlocalidx,
          memspace->workspace_double);
      }

      emxCopyStruct_s_Wd0eYcEyLXg48EJ(WorkingSet, &b_WorkingSet);
      if (stepSuccess && (TrialState->state != -6)) {
        for (mConstrMax = 0; mConstrMax <= nVar_tmp_tmp; mConstrMax++) {
          TrialState->delta_x->data[mConstrMax] = TrialState->xstar->
            data[mConstrMax] + TrialState->socDirection->data[mConstrMax];
        }
      }

      guard1 = true;
      break;
    }

    if (guard1) {
      if (TrialState->state != -6) {
        exitg1 = 1;
      } else {
        kend = Hessian->size[0] - 1;
        oldDirIdx = 0.0;
        constrViolationEq = 1.0;
        for (mConstrMax = 0; mConstrMax <= kend; mConstrMax++) {
          oldDirIdx = fmax(oldDirIdx, fabs(TrialState->grad->data[mConstrMax]));
          constrViolationEq = fmax(constrViolationEq, fabs(TrialState->
            xstar->data[mConstrMax]));
        }

        oldDirIdx = fmax(2.2204460492503131E-16, oldDirIdx / constrViolationEq);
        for (mConstrMax = 0; mConstrMax <= kend; mConstrMax++) {
          iH0 = (kend + 1) * mConstrMax;
          for (idxStartIneq = 0; idxStartIneq < mConstrMax; idxStartIneq++) {
            Hessian->data[iH0 + idxStartIneq] = 0.0;
          }

          Hessian->data[mConstrMax + Hessian->size[0] * mConstrMax] = oldDirIdx;
          iH0 += mConstrMax;
          b_nVar = kend - mConstrMax;
          if (b_nVar - 1 >= 0) {
            memset(&Hessian->data[iH0 + 1], 0, (uint32_T)((b_nVar + iH0) - iH0) *
                   sizeof(real_T));
          }
        }
      }
    }
  } while (exitg1 == 0);

  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&b_WorkingSet);
  return stepSuccess;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_evalObjAndConstr_f(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const s_lZflMU9sVqxC63IejQkKIC_MPC__T
  obj_next_next_next_next_next__1, const emxArray_real_T_MPC_fmincon_T *x,
  emxArray_real_T_MPC_fmincon_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_MPC_fmincon_T *Ceq_workspace, int32_T eq0, real_T *fval,
  int32_T *status)
{
  boolean_T tmp;
  *fval = MPC_f_eML_blk_kernel_anonFcn1_e(obj_next_next_next_next_next__1.x0,
    obj_next_next_next_next_next__1.zref, obj_next_next_next_next_next__1.wref,
    obj_next_next_next_next_next__1.N, x);
  tmp = rtIsNaN(*fval);
  if (rtIsInf(*fval) || tmp) {
    if (tmp) {
      *status = -3;
    } else if (*fval < 0.0) {
      *status = -1;
    } else {
      *status = -2;
    }
  } else {
    *status = MPC_fminc_computeConstraints__c(obj_next_next_next_next_b_value,
      obj_next_next_next_next_next_b_, obj_next_next_next_next_next_ne,
      obj_next_next_next_next_next__0, x, Cineq_workspace, ineq0, Ceq_workspace,
      eq0);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_driver_h(emxArray_real_T_MPC_fmincon_T *Hessian,
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T *TrialState, sG8JZ69axY52WWR6RKyApQC_MPC_f_T
  *MeritFunction, const coder_internal_stickyStruct_c_T *FcnEvaluator,
  s_9imJcZ2iwk426vK9Q2bBEG_MPC__T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_MPC__T *
  QPObjective, const emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint,
  int32_T runTimeOptions_MaxFunctionEvalu)
{
  s7RdrPWkr8UPAUyTdDJkLaG_MPC_f_T Flags;
  somzaGboVhDG7PNQS6E98jD_MPC_f_T expl_temp;
  real_T TrialState_0;
  real_T phi_alpha;
  int32_T b_mLinIneq;
  int32_T b_nVar;
  int32_T b_nVar_tmp;
  int32_T b_nVar_tmp_0;
  int32_T d_ix;
  int32_T d_iy;
  int32_T d_iy_tmp;
  int32_T g;
  int32_T i;
  int32_T ix;
  int32_T iy;
  int32_T k;
  int32_T mConstr;
  int32_T mEq;
  int32_T mIneq;
  int32_T mLinEq;
  int32_T mLinIneq;
  int32_T qpoptions_MaxIterations;
  boolean_T b;
  boolean_T tooSmallX;
  static const char_T q[7] = { 'f', 'm', 'i', 'n', 'c', 'o', 'n' };

  somzaGboVhDG7PNQS6E98jD_MPC_f_T expl_temp_0;
  int32_T exitg1;
  int32_T exitg2;
  int32_T nVar_tmp_tmp;
  boolean_T exitg3;
  boolean_T socTaken;
  nVar_tmp_tmp = WorkingSet->nVar;
  mEq = WorkingSet->sizes[1];
  mIneq = WorkingSet->sizes[2];
  mConstr = (WorkingSet->sizes[1] + WorkingSet->sizes[2]) + WorkingSet->sizes[3];
  mLinIneq = WorkingSet->sizes[2] - TrialState->mNonlinIneq;
  mLinEq = WorkingSet->sizes[1] - TrialState->mNonlinEq;
  b_nVar = WorkingSet->sizes[2] + WorkingSet->sizes[3];
  if (WorkingSet->nVar >= b_nVar) {
    b_nVar = WorkingSet->nVar;
  }

  qpoptions_MaxIterations = 10 * b_nVar;
  TrialState->steplength = 1.0;
  MPC_fmincon_test_exit_ks(MeritFunction, WorkingSet, TrialState,
    runTimeOptions_MaxFunctionEvalu, &Flags.gradOK, &Flags.fevalOK, &Flags.done,
    &Flags.stepAccepted, &Flags.failedLineSearch, &Flags.stepType);
  MPC_fmincon_saveJacobian(TrialState, WorkingSet->nVar, WorkingSet->sizes[2],
    WorkingSet->Aineq, TrialState->iNonIneq0, WorkingSet->sizes[1],
    WorkingSet->Aeq, TrialState->iNonEq0, WorkingSet->ldA);
  TrialState->sqpFval_old = TrialState->sqpFval;
  b_nVar = TrialState->xstarsqp->size[0] - 1;
  for (k = 0; k <= b_nVar; k++) {
    TrialState->xstarsqp_old->data[k] = TrialState->xstarsqp->data[k];
    TrialState->grad_old->data[k] = TrialState->grad->data[k];
  }

  b_nVar_tmp = TrialState->mIneq;
  for (k = 0; k < b_nVar_tmp; k++) {
    TrialState->cIneq_old->data[k] = TrialState->cIneq->data[k];
  }

  b_nVar_tmp_0 = TrialState->mEq;
  for (k = 0; k < b_nVar_tmp_0; k++) {
    TrialState->cEq_old->data[k] = TrialState->cEq->data[k];
  }

  if (!Flags.done) {
    TrialState->sqpIterations = 1;
  }

  while (!Flags.done) {
    if ((!Flags.stepAccepted) && (!Flags.failedLineSearch)) {
      expl_temp.IterDisplayQP = false;
      expl_temp.RemainFeasible = false;
      expl_temp.ProbRelTolFactor = 1.0;
      expl_temp.ConstrRelTolFactor = 1.0;
      expl_temp.PricingTolerance = 0.0;
      expl_temp.ObjectiveLimit = (rtMinusInf);
      expl_temp.ConstraintTolerance = 1.0E-6;
      expl_temp.OptimalityTolerance = 2.2204460492503131E-14;
      expl_temp.StepTolerance = 1.0E-6;
      expl_temp.MaxIterations = qpoptions_MaxIterations;
      for (i = 0; i < 7; i++) {
        expl_temp.SolverName[i] = q[i];
      }
    }

    do {
      exitg1 = 0;
      socTaken = !Flags.failedLineSearch;
      if ((!Flags.stepAccepted) && socTaken) {
        if (Flags.stepType != 3) {
          MPC__updateWorkingSetForNewQP_b(WorkingSet, mIneq,
            TrialState->mNonlinIneq, TrialState->cIneq, mEq,
            TrialState->mNonlinEq, TrialState->cEq);
        }

        expl_temp_0 = expl_temp;
        Flags.stepAccepted = MPC_fmincon_step_p(&Flags.stepType, Hessian,
          TrialState, MeritFunction, memspace, WorkingSet, QRManager,
          CholManager, QPObjective, &expl_temp_0);
        if (Flags.stepAccepted) {
          for (k = 0; k < nVar_tmp_tmp; k++) {
            TrialState->xstarsqp->data[k] += TrialState->delta_x->data[k];
          }

          MPC_fmincon_evalObjAndConstr_f
            (FcnEvaluator->next.next.next.next.b_value,
             FcnEvaluator->next.next.next.next.next.b_value,
             FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
             FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
             FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
             TrialState->xstarsqp, TrialState->cIneq, TrialState->iNonIneq0,
             TrialState->cEq, TrialState->iNonEq0, &TrialState->sqpFval, &k);
          Flags.fevalOK = (k == 1);
          TrialState->FunctionEvaluations++;
          if (mLinIneq > 0) {
            MPC_fmincon_xgemv_bujmjs(nVar_tmp_tmp, mLinIneq, WorkingSet->Aineq,
              WorkingSet->ldA, TrialState->xstarsqp, TrialState->cIneq);
          }

          if (mLinEq > 0) {
            MPC_fmincon_xgemv_bujmjs(nVar_tmp_tmp, mLinEq, WorkingSet->Aeq,
              WorkingSet->ldA, TrialState->xstarsqp, TrialState->cEq);
          }

          MeritFunction->phiFullStep = MPC_fmincon_computeMeritFcn
            (MeritFunction->penaltyParam, TrialState->sqpFval, TrialState->cIneq,
             mIneq, TrialState->cEq, mEq, Flags.fevalOK);
        }

        if ((Flags.stepType == 1) && Flags.stepAccepted && Flags.fevalOK &&
            (MeritFunction->phi < MeritFunction->phiFullStep) &&
            (TrialState->sqpFval < TrialState->sqpFval_old)) {
          Flags.stepType = 3;
          Flags.stepAccepted = false;
        } else {
          socTaken = ((Flags.stepType == 3) && Flags.stepAccepted);
          b = Flags.fevalOK;
          b_nVar = WorkingSet->nVar - 1;
          b_mLinIneq = TrialState->mIneq - TrialState->mNonlinIneq;
          d_ix = TrialState->mEq - TrialState->mNonlinEq;
          TrialState_0 = 1.0;
          iy = 1;
          phi_alpha = MeritFunction->phiFullStep;
          for (k = 0; k <= b_nVar; k++) {
            TrialState->searchDir->data[k] = TrialState->delta_x->data[k];
          }

          do {
            exitg2 = 0;
            if (TrialState->FunctionEvaluations <
                runTimeOptions_MaxFunctionEvalu) {
              if (b && (phi_alpha <= TrialState_0 * 0.0001 *
                        MeritFunction->phiPrimePlus + MeritFunction->phi)) {
                exitg2 = 1;
              } else {
                TrialState_0 *= 0.7;
                for (k = 0; k <= b_nVar; k++) {
                  TrialState->delta_x->data[k] = TrialState_0 *
                    TrialState->xstar->data[k];
                }

                if (socTaken) {
                  phi_alpha = TrialState_0 * TrialState_0;
                  if ((b_nVar + 1 >= 1) && (!(phi_alpha == 0.0))) {
                    for (k = 0; k <= b_nVar; k++) {
                      TrialState->delta_x->data[k] += phi_alpha *
                        TrialState->socDirection->data[k];
                    }
                  }
                }

                tooSmallX = true;
                k = 0;
                exitg3 = false;
                while ((!exitg3) && (k <= b_nVar)) {
                  if (1.0E-6 * fmax(1.0, fabs(TrialState->xstarsqp->data[k])) <=
                      fabs(TrialState->delta_x->data[k])) {
                    tooSmallX = false;
                    exitg3 = true;
                  } else {
                    k++;
                  }
                }

                if (tooSmallX) {
                  iy = -2;
                  exitg2 = 1;
                } else {
                  for (k = 0; k <= b_nVar; k++) {
                    TrialState->xstarsqp->data[k] = TrialState->
                      xstarsqp_old->data[k] + TrialState->delta_x->data[k];
                  }

                  MPC_fmincon_evalObjAndConstr_f
                    (FcnEvaluator->next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
                     FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
                     TrialState->xstarsqp, TrialState->cIneq,
                     TrialState->iNonIneq0, TrialState->cEq, TrialState->iNonEq0,
                     &TrialState->sqpFval, &k);
                  if (b_mLinIneq > 0) {
                    MPC_fmincon_xgemv_bujmjs(b_nVar + 1, b_mLinIneq,
                      WorkingSet->Aineq, WorkingSet->ldA, TrialState->xstarsqp,
                      TrialState->cIneq);
                  }

                  if (d_ix > 0) {
                    MPC_fmincon_xgemv_bujmjs(b_nVar + 1, d_ix, WorkingSet->Aeq,
                      WorkingSet->ldA, TrialState->xstarsqp, TrialState->cEq);
                  }

                  TrialState->FunctionEvaluations++;
                  b = (k == 1);
                  phi_alpha = MPC_fmincon_computeMeritFcn
                    (MeritFunction->penaltyParam, TrialState->sqpFval,
                     TrialState->cIneq, TrialState->mIneq, TrialState->cEq,
                     TrialState->mEq, b);
                }
              }
            } else {
              iy = 0;
              exitg2 = 1;
            }
          } while (exitg2 == 0);

          Flags.fevalOK = b;
          TrialState->steplength = TrialState_0;
          if (iy > 0) {
            Flags.stepAccepted = true;
          } else {
            Flags.failedLineSearch = true;
          }
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (Flags.stepAccepted && socTaken) {
      for (k = 0; k < nVar_tmp_tmp; k++) {
        TrialState->xstarsqp->data[k] = TrialState->xstarsqp_old->data[k] +
          TrialState->delta_x->data[k];
      }

      for (k = 0; k < mConstr; k++) {
        TrialState_0 = TrialState->lambdasqp->data[k];
        TrialState->lambdasqp->data[k] = (TrialState->lambda->data[k] -
          TrialState_0) * TrialState->steplength + TrialState_0;
      }

      TrialState->sqpFval_old = TrialState->sqpFval;
      b_nVar = TrialState->xstarsqp->size[0] - 1;
      for (k = 0; k <= b_nVar; k++) {
        TrialState->xstarsqp_old->data[k] = TrialState->xstarsqp->data[k];
        TrialState->grad_old->data[k] = TrialState->grad->data[k];
      }

      for (k = 0; k < b_nVar_tmp; k++) {
        TrialState->cIneq_old->data[k] = TrialState->cIneq->data[k];
      }

      for (k = 0; k < b_nVar_tmp_0; k++) {
        TrialState->cEq_old->data[k] = TrialState->cEq->data[k];
      }

      Flags.gradOK = MPC__computeFiniteDifferences_k(FiniteDifferences,
        TrialState->sqpFval, TrialState->cIneq, TrialState->iNonIneq0,
        TrialState->cEq, TrialState->iNonEq0, TrialState->xstarsqp,
        TrialState->grad, WorkingSet->Aineq, TrialState->iNonIneq0,
        WorkingSet->ldA, WorkingSet->Aeq, TrialState->iNonEq0, WorkingSet->ldA);
      TrialState->FunctionEvaluations += FiniteDifferences->numEvals;
    } else {
      TrialState->sqpFval = TrialState->sqpFval_old;
      b_nVar = TrialState->xstarsqp->size[0];
      for (k = 0; k < b_nVar; k++) {
        TrialState->xstarsqp->data[k] = TrialState->xstarsqp_old->data[k];
      }

      for (k = 0; k < b_nVar_tmp; k++) {
        TrialState->cIneq->data[k] = TrialState->cIneq_old->data[k];
      }

      for (k = 0; k < b_nVar_tmp_0; k++) {
        TrialState->cEq->data[k] = TrialState->cEq_old->data[k];
      }
    }

    MPC_fmincon_test_exit_ksj(&Flags, memspace, MeritFunction,
      fscales_cineq_constraint, WorkingSet, TrialState, QRManager,
      runTimeOptions_MaxFunctionEvalu);
    if ((!Flags.done) && Flags.stepAccepted) {
      Flags.stepAccepted = false;
      Flags.stepType = 1;
      Flags.failedLineSearch = false;
      b_nVar = (mEq + TrialState->iNonIneq0) - 1;
      k = WorkingSet->ldA;
      for (b_mLinIneq = 0; b_mLinIneq < nVar_tmp_tmp; b_mLinIneq++) {
        TrialState_0 = TrialState->grad->data[b_mLinIneq];
        TrialState->delta_gradLag->data[b_mLinIneq] = TrialState_0;
        if (nVar_tmp_tmp >= 1) {
          TrialState->delta_gradLag->data[b_mLinIneq] = TrialState_0 -
            TrialState->grad_old->data[b_mLinIneq];
        }
      }

      if (TrialState->mNonlinEq > 0) {
        iy = (TrialState->iNonEq0 - 1) * WorkingSet->ldA + 1;
        if (nVar_tmp_tmp != 0) {
          ix = TrialState->iNonEq0;
          d_iy_tmp = (TrialState->mNonlinEq - 1) * WorkingSet->ldA;
          d_iy = d_iy_tmp + iy;
          for (b_mLinIneq = iy; k < 0 ? b_mLinIneq >= d_iy : b_mLinIneq <= d_iy;
               b_mLinIneq += k) {
            g = (b_mLinIneq + nVar_tmp_tmp) - 1;
            for (d_ix = b_mLinIneq; d_ix <= g; d_ix++) {
              i = d_ix - b_mLinIneq;
              TrialState->delta_gradLag->data[i] += WorkingSet->Aeq->data[d_ix -
                1] * TrialState->lambdasqp->data[ix - 1];
            }

            ix++;
          }

          ix = TrialState->iNonEq0;
          d_iy = d_iy_tmp + 1;
          for (b_mLinIneq = 1; k < 0 ? b_mLinIneq >= d_iy : b_mLinIneq <= d_iy;
               b_mLinIneq += k) {
            g = (b_mLinIneq + nVar_tmp_tmp) - 1;
            for (d_ix = b_mLinIneq; d_ix <= g; d_ix++) {
              i = d_ix - b_mLinIneq;
              TrialState->delta_gradLag->data[i] += TrialState->
                JacCeqTrans_old->data[d_ix - 1] * -TrialState->lambdasqp->
                data[ix - 1];
            }

            ix++;
          }
        }
      }

      if (TrialState->mNonlinIneq > 0) {
        iy = (TrialState->iNonIneq0 - 1) * WorkingSet->ldA + 1;
        if (nVar_tmp_tmp != 0) {
          ix = b_nVar;
          d_iy_tmp = (TrialState->mNonlinIneq - 1) * WorkingSet->ldA;
          d_iy = d_iy_tmp + iy;
          for (b_mLinIneq = iy; k < 0 ? b_mLinIneq >= d_iy : b_mLinIneq <= d_iy;
               b_mLinIneq += k) {
            g = (b_mLinIneq + nVar_tmp_tmp) - 1;
            for (d_ix = b_mLinIneq; d_ix <= g; d_ix++) {
              i = d_ix - b_mLinIneq;
              TrialState->delta_gradLag->data[i] += WorkingSet->Aineq->data[d_ix
                - 1] * TrialState->lambdasqp->data[ix];
            }

            ix++;
          }

          d_ix = b_nVar;
          ix = d_iy_tmp + 1;
          for (b_nVar = 1; k < 0 ? b_nVar >= ix : b_nVar <= ix; b_nVar += k) {
            iy = (b_nVar + nVar_tmp_tmp) - 1;
            for (b_mLinIneq = b_nVar; b_mLinIneq <= iy; b_mLinIneq++) {
              i = b_mLinIneq - b_nVar;
              TrialState->delta_gradLag->data[i] +=
                TrialState->JacCineqTrans_old->data[b_mLinIneq - 1] *
                -TrialState->lambdasqp->data[d_ix];
            }

            d_ix++;
          }
        }
      }

      MPC_fmincon_saveJacobian(TrialState, nVar_tmp_tmp, mIneq,
        WorkingSet->Aineq, TrialState->iNonIneq0, mEq, WorkingSet->Aeq,
        TrialState->iNonEq0, WorkingSet->ldA);
      MPC_fmincon_BFGSUpdate(nVar_tmp_tmp, Hessian, TrialState->delta_x,
        TrialState->delta_gradLag, memspace->workspace_double);
      TrialState->sqpIterations++;
    }
  }
}

static void emxFreeStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_MPC__T
  *pStruct)
{
  MPC_fmincon_emxFree_real_T(&pStruct->zref);
  MPC_fmincon_emxFree_real_T(&pStruct->wref);
}

static void emxFreeStruct_anonymous_funct_a(anonymous_function_MPC_fmin_a_T
  *pStruct)
{
  emxFreeStruct_s_lZflMU9sVqxC63I(&pStruct->workspace);
}

static void emxFreeStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_MPC__T
  *pStruct)
{
  emxFreeStruct_anonymous_funct_a(&pStruct->objfun);
  MPC_fmincon_emxFree_real_T(&pStruct->cIneq_1);
  MPC_fmincon_emxFree_real_T(&pStruct->cEq_1);
  MPC_fmincon_emxFree_real_T(&pStruct->cIneq_2);
  MPC_fmincon_emxFree_real_T(&pStruct->cEq_2);
  MPC_fmincon_emxFree_boolean_T(&pStruct->hasLB);
  MPC_fmincon_emxFree_boolean_T(&pStruct->hasUB);
}

static void emxFreeStruct_coder_i_add4ibr2w(coder_internal_stickyStruct_a_T
  *pStruct)
{
  emxFreeStruct_anonymous_funct_a(&pStruct->b_value);
}

static void emxFreeStruct_coder__add4ibr2wk(coder_internal_stickyStruc_ad_T
  *pStruct)
{
  emxFreeStruct_coder_i_add4ibr2w(&pStruct->next);
}

static void emxFreeStruct_coder_add4ibr2wkl(coder_internal_stickyStru_add_T
  *pStruct)
{
  emxFreeStruct_coder__add4ibr2wk(&pStruct->next);
}

static void emxFreeStruct_code_add4ibr2wklt(coder_internal_stickyStr_add4_T
  *pStruct)
{
  emxFreeStruct_coder_add4ibr2wkl(&pStruct->next);
}

static void emxFreeStruct_cod_add4ibr2wkltd(coder_internal_stickySt_add4i_T
  *pStruct)
{
  emxFreeStruct_code_add4ibr2wklt(&pStruct->next);
}

static void emxFreeStruct_co_add4ibr2wkltdn(coder_internal_stickyS_add4ib_T
  *pStruct)
{
  emxFreeStruct_cod_add4ibr2wkltd(&pStruct->next);
}

static void emxFreeStruct_c_add4ibr2wkltdn1(coder_internal_sticky_add4ibr_T
  *pStruct)
{
  emxFreeStruct_co_add4ibr2wkltdn(&pStruct->next);
}

static void emxFreeStruct_coder_internal__n(coder_internal_stick_add4ibr2_T
  *pStruct)
{
  emxFreeStruct_c_add4ibr2wkltdn1(&pStruct->next);
}

static void emxFreeStruct_coder_internal_n1(coder_internal_stickyStruct_c_T
  *pStruct)
{
  emxFreeStruct_coder_internal__n(&pStruct->next);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void MPC_fmincon_fmincon_l(const real_T fun_workspace_x0[4], const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_zref, const
  emxArray_real_T_MPC_fmincon_T *fun_workspace_wref, real_T fun_workspace_N,
  const emxArray_real_T_MPC_fmincon_T *x0, const sU0htoGcxTaPV5C2NLIldmB_MPC_f_T
  nonlcon_workspace, emxArray_real_T_MPC_fmincon_T *x)
{
  coder_internal_stickyStruct_c_T FcnEvaluator;
  emxArray_real_T_MPC_fmincon_T *Ceq;
  emxArray_real_T_MPC_fmincon_T *Cineq;
  emxArray_real_T_MPC_fmincon_T *Hessian;
  emxArray_real_T_MPC_fmincon_T *fscales_cineq_constraint;
  sG8JZ69axY52WWR6RKyApQC_MPC_f_T MeritFunction;
  s_0Mw3d4AlMrOoSnA1Aci4tH_MPC__T TrialState;
  s_9imJcZ2iwk426vK9Q2bBEG_MPC__T FiniteDifferences;
  s_Wd0eYcEyLXg48EJ7pCjsH_MPC_f_T WorkingSet;
  s_l1Gll5dfO9DpqQrvRqAf7E_MPC__T QRManager;
  s_pIaUYPkQBTqVmAKxFPiGQF_MPC__T memspace;
  s_saWPFfMboRdWeRqIEJ4x8C_MPC__T QPObjective;
  s_vdGXtauKr5HuLAqoxBLhXH_MPC__T CholManager;
  real_T WorkingSet_0;
  real_T fval;
  int32_T Hessian_0;
  int32_T iw0;
  int32_T k;
  int32_T loop_ub;
  int32_T mConstrMax;
  int32_T mConstrMax_tmp;
  int32_T mConstrMax_tmp_0;
  int32_T mNonlinIneq;
  int32_T maxDims;
  int32_T nVar;
  int32_T nVarMax;
  int32_T tmp_0;
  boolean_T tmp;
  MPC_fmincon_emxInit_real_T(&Cineq, 1);
  MPC_fmincon_emxInit_real_T(&Ceq, 1);
  MPC_f_eML_blk_kernel_anonFcn2_m(nonlcon_workspace.x0, nonlcon_workspace.N, x0,
    Cineq, Ceq);
  mNonlinIneq = Cineq->size[0] - 1;
  iw0 = Ceq->size[0];
  nVar = x0->size[0] - 1;
  mConstrMax_tmp = Ceq->size[0] << 1;
  mConstrMax_tmp_0 = Cineq->size[0] + Ceq->size[0];
  mConstrMax = ((mConstrMax_tmp_0 + mConstrMax_tmp) + Cineq->size[0]) + 1;
  nVarMax = ((mConstrMax_tmp + x0->size[0]) + Cineq->size[0]) + 1;
  if (nVarMax >= mConstrMax) {
    maxDims = nVarMax;
  } else {
    maxDims = mConstrMax;
  }

  MPC_fmincon_emxInit_real_T(&Hessian, 2);
  tmp_0 = Hessian->size[0] * Hessian->size[1];
  Hessian->size[0] = x0->size[0];
  Hessian->size[1] = x0->size[0];
  MPC_fm_emxEnsureCapacity_real_T(Hessian, tmp_0);
  loop_ub = x0->size[0] * x0->size[0];
  if (loop_ub - 1 >= 0) {
    memset(&Hessian->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  if (x0->size[0] > 0) {
    for (k = 0; k <= nVar; k++) {
      Hessian->data[k + Hessian->size[0] * k] = 1.0;
    }
  }

  emxInitStruct_s_0Mw3d4AlMrOoSnA(&TrialState);
  MPC_fmincon_factoryConstruct(nVarMax, mConstrMax, Cineq->size[0], Ceq->size[0],
    x0, Cineq->size[0], Ceq->size[0], &TrialState);
  for (k = 0; k <= nVar; k++) {
    TrialState.xstarsqp->data[k] = x0->data[k];
  }

  nVar = Cineq->size[0];
  emxInitStruct_coder_i_add4ibr2w(&FcnEvaluator);
  FcnEvaluator.next.next.next.next.b_value = Ceq->size[0];
  FcnEvaluator.next.next.next.next.next.b_value = Cineq->size[0];
  FcnEvaluator.next.next.next.next.next.next.next.b_value.workspace =
    nonlcon_workspace;
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[0] =
    fun_workspace_x0[0];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[1] =
    fun_workspace_x0[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[2] =
    fun_workspace_x0[2];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[3] =
    fun_workspace_x0[3];
  tmp_0 =
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.zref->
    size[0] *
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.zref->
    size[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.zref->size
    [0] = 2;
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.zref->size
    [1] = fun_workspace_zref->size[1];
  MPC_fm_emxEnsureCapacity_real_T
    (FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.zref,
     tmp_0);
  loop_ub = fun_workspace_zref->size[1] << 1;
  for (k = 0; k < loop_ub; k++) {
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.zref->
      data[k] = fun_workspace_zref->data[k];
  }

  tmp_0 =
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.wref->
    size[0] *
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.wref->
    size[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.wref->size
    [0] = 2;
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.wref->size
    [1] = fun_workspace_wref->size[1];
  MPC_fm_emxEnsureCapacity_real_T
    (FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.wref,
     tmp_0);
  Hessian_0 = fun_workspace_wref->size[1] << 1;
  for (k = 0; k < Hessian_0; k++) {
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.wref->
      data[k] = fun_workspace_wref->data[k];
  }

  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.N =
    fun_workspace_N;
  emxInitStruct_s_9imJcZ2iwk426vK(&FiniteDifferences);
  FiniteDifferences.objfun.workspace.x0[0] = fun_workspace_x0[0];
  FiniteDifferences.objfun.workspace.x0[1] = fun_workspace_x0[1];
  FiniteDifferences.objfun.workspace.x0[2] = fun_workspace_x0[2];
  FiniteDifferences.objfun.workspace.x0[3] = fun_workspace_x0[3];
  tmp_0 = FiniteDifferences.objfun.workspace.zref->size[0] *
    FiniteDifferences.objfun.workspace.zref->size[1];
  FiniteDifferences.objfun.workspace.zref->size[0] = 2;
  FiniteDifferences.objfun.workspace.zref->size[1] = fun_workspace_zref->size[1];
  MPC_fm_emxEnsureCapacity_real_T(FiniteDifferences.objfun.workspace.zref, tmp_0);
  for (k = 0; k < loop_ub; k++) {
    FiniteDifferences.objfun.workspace.zref->data[k] = fun_workspace_zref->
      data[k];
  }

  tmp_0 = FiniteDifferences.objfun.workspace.wref->size[0] *
    FiniteDifferences.objfun.workspace.wref->size[1];
  FiniteDifferences.objfun.workspace.wref->size[0] = 2;
  FiniteDifferences.objfun.workspace.wref->size[1] = fun_workspace_wref->size[1];
  MPC_fm_emxEnsureCapacity_real_T(FiniteDifferences.objfun.workspace.wref, tmp_0);
  for (k = 0; k < Hessian_0; k++) {
    FiniteDifferences.objfun.workspace.wref->data[k] = fun_workspace_wref->
      data[k];
  }

  FiniteDifferences.objfun.workspace.N = fun_workspace_N;
  FiniteDifferences.nonlin.workspace = nonlcon_workspace;
  FiniteDifferences.f_1 = 0.0;
  tmp_0 = FiniteDifferences.cIneq_1->size[0];
  FiniteDifferences.cIneq_1->size[0] = Cineq->size[0];
  MPC_fm_emxEnsureCapacity_real_T(FiniteDifferences.cIneq_1, tmp_0);
  tmp_0 = FiniteDifferences.cEq_1->size[0];
  FiniteDifferences.cEq_1->size[0] = Ceq->size[0];
  MPC_fm_emxEnsureCapacity_real_T(FiniteDifferences.cEq_1, tmp_0);
  FiniteDifferences.f_2 = 0.0;
  tmp_0 = FiniteDifferences.cIneq_2->size[0];
  FiniteDifferences.cIneq_2->size[0] = Cineq->size[0];
  MPC_fm_emxEnsureCapacity_real_T(FiniteDifferences.cIneq_2, tmp_0);
  tmp_0 = FiniteDifferences.cEq_2->size[0];
  FiniteDifferences.cEq_2->size[0] = Ceq->size[0];
  MPC_fm_emxEnsureCapacity_real_T(FiniteDifferences.cEq_2, tmp_0);
  FiniteDifferences.nVar = x0->size[0];
  FiniteDifferences.mIneq = Cineq->size[0];
  FiniteDifferences.mEq = Ceq->size[0];
  FiniteDifferences.numEvals = 0;
  FiniteDifferences.SpecifyObjectiveGradient = false;
  FiniteDifferences.SpecifyConstraintGradient = false;
  FiniteDifferences.isEmptyNonlcon = (mConstrMax_tmp_0 == 0);
  tmp_0 = FiniteDifferences.hasLB->size[0];
  FiniteDifferences.hasLB->size[0] = x0->size[0];
  MPC_emxEnsureCapacity_boolean_T(FiniteDifferences.hasLB, tmp_0);
  tmp_0 = FiniteDifferences.hasUB->size[0];
  FiniteDifferences.hasUB->size[0] = x0->size[0];
  MPC_emxEnsureCapacity_boolean_T(FiniteDifferences.hasUB, tmp_0);
  FiniteDifferences.FiniteDifferenceType = 0;
  k = x0->size[0];
  for (loop_ub = 0; loop_ub < k; loop_ub++) {
    FiniteDifferences.hasLB->data[loop_ub] = false;
    FiniteDifferences.hasUB->data[loop_ub] = false;
  }

  FiniteDifferences.hasBounds = false;
  emxInitStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  QRManager.ldq = maxDims;
  tmp_0 = QRManager.QR->size[0] * QRManager.QR->size[1];
  QRManager.QR->size[0] = maxDims;
  QRManager.QR->size[1] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(QRManager.QR, tmp_0);
  tmp_0 = QRManager.Q->size[0] * QRManager.Q->size[1];
  QRManager.Q->size[0] = maxDims;
  QRManager.Q->size[1] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(QRManager.Q, tmp_0);
  loop_ub = maxDims * maxDims;
  for (k = 0; k < loop_ub; k++) {
    QRManager.Q->data[k] = 0.0;
  }

  tmp_0 = QRManager.jpvt->size[0];
  QRManager.jpvt->size[0] = maxDims;
  MPC_f_emxEnsureCapacity_int32_T(QRManager.jpvt, tmp_0);
  for (k = 0; k < maxDims; k++) {
    QRManager.jpvt->data[k] = 0;
  }

  QRManager.mrows = 0;
  QRManager.ncols = 0;
  tmp_0 = QRManager.tau->size[0];
  QRManager.tau->size[0] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(QRManager.tau, tmp_0);
  QRManager.minRowCol = 0;
  QRManager.usedPivoting = false;
  emxInitStruct_s_vdGXtauKr5HuLAq(&CholManager);
  tmp_0 = CholManager.FMat->size[0] * CholManager.FMat->size[1];
  CholManager.FMat->size[0] = maxDims;
  CholManager.FMat->size[1] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(CholManager.FMat, tmp_0);
  CholManager.ldm = maxDims;
  CholManager.ndims = 0;
  CholManager.info = 0;
  CholManager.scaleFactor = 0.0;
  CholManager.ConvexCheck = true;
  CholManager.regTol_ = (rtInf);
  CholManager.workspace_ = (rtInf);
  CholManager.workspace2_ = (rtInf);
  emxInitStruct_s_saWPFfMboRdWeRq(&QPObjective);
  tmp_0 = QPObjective.grad->size[0];
  QPObjective.grad->size[0] = nVarMax;
  MPC_fm_emxEnsureCapacity_real_T(QPObjective.grad, tmp_0);
  tmp_0 = QPObjective.Hx->size[0];
  QPObjective.Hx->size[0] = nVarMax - 1;
  MPC_fm_emxEnsureCapacity_real_T(QPObjective.Hx, tmp_0);
  QPObjective.maxVar = nVarMax;
  QPObjective.beta = 0.0;
  QPObjective.rho = 0.0;
  QPObjective.prev_objtype = 3;
  QPObjective.prev_nvar = 0;
  QPObjective.prev_hasLinear = false;
  QPObjective.gammaScalar = 0.0;
  QPObjective.nvar = x0->size[0];
  QPObjective.hasLinear = true;
  QPObjective.objtype = 3;
  emxInitStruct_s_pIaUYPkQBTqVmAK(&memspace);
  tmp_0 = memspace.workspace_double->size[0] * memspace.workspace_double->size[1];
  memspace.workspace_double->size[0] = maxDims;
  MPC_fm_emxEnsureCapacity_real_T(memspace.workspace_double, tmp_0);
  if (nVarMax >= 2) {
    tmp_0 = memspace.workspace_double->size[0] * memspace.workspace_double->
      size[1];
    memspace.workspace_double->size[1] = nVarMax;
    MPC_fm_emxEnsureCapacity_real_T(memspace.workspace_double, tmp_0);
  } else {
    tmp_0 = memspace.workspace_double->size[0] * memspace.workspace_double->
      size[1];
    memspace.workspace_double->size[1] = 2;
    MPC_fm_emxEnsureCapacity_real_T(memspace.workspace_double, tmp_0);
  }

  tmp_0 = memspace.workspace_int->size[0];
  memspace.workspace_int->size[0] = maxDims;
  MPC_f_emxEnsureCapacity_int32_T(memspace.workspace_int, tmp_0);
  tmp_0 = memspace.workspace_sort->size[0];
  memspace.workspace_sort->size[0] = maxDims;
  MPC_f_emxEnsureCapacity_int32_T(memspace.workspace_sort, tmp_0);
  MPC_fmincon_emxInit_real_T(&fscales_cineq_constraint, 1);
  tmp_0 = fscales_cineq_constraint->size[0];
  fscales_cineq_constraint->size[0] = Cineq->size[0];
  MPC_fm_emxEnsureCapacity_real_T(fscales_cineq_constraint, tmp_0);
  loop_ub = Cineq->size[0];
  for (k = 0; k < loop_ub; k++) {
    fscales_cineq_constraint->data[k] = 1.0;
  }

  emxInitStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  MPC_fmincon_factoryConstruct_ir(Cineq->size[0], Ceq->size[0], x0->size[0],
    nVarMax, mConstrMax, &WorkingSet);
  WorkingSet.mConstrMax = mConstrMax;
  WorkingSet.mConstr = mConstrMax_tmp_0;
  WorkingSet.mConstrOrig = mConstrMax_tmp_0;
  WorkingSet.sizes[0] = 0;
  WorkingSet.sizes[1] = Ceq->size[0];
  WorkingSet.sizes[2] = Cineq->size[0];
  WorkingSet.sizes[3] = 0;
  WorkingSet.sizes[4] = 0;
  for (k = 0; k < 5; k++) {
    WorkingSet.sizesNormal[k] = WorkingSet.sizes[k];
  }

  WorkingSet.sizesPhaseOne[0] = 0;
  WorkingSet.sizesPhaseOne[1] = Ceq->size[0];
  WorkingSet.sizesPhaseOne[2] = Cineq->size[0];
  WorkingSet.sizesPhaseOne[3] = 1;
  WorkingSet.sizesPhaseOne[4] = 0;
  WorkingSet.sizesRegularized[0] = 0;
  WorkingSet.sizesRegularized[1] = Ceq->size[0];
  WorkingSet.sizesRegularized[2] = Cineq->size[0];
  k = mConstrMax_tmp + Cineq->size[0];
  WorkingSet.sizesRegularized[3] = k;
  WorkingSet.sizesRegularized[4] = 0;
  WorkingSet.sizesRegPhaseOne[0] = 0;
  WorkingSet.sizesRegPhaseOne[1] = Ceq->size[0];
  WorkingSet.sizesRegPhaseOne[2] = Cineq->size[0];
  WorkingSet.sizesRegPhaseOne[3] = k + 1;
  WorkingSet.sizesRegPhaseOne[4] = 0;
  WorkingSet.isActiveIdxNormal[0] = 1;
  WorkingSet.isActiveIdxNormal[1] = 0;
  WorkingSet.isActiveIdxNormal[2] = Ceq->size[0];
  WorkingSet.isActiveIdxNormal[3] = Cineq->size[0];
  WorkingSet.isActiveIdxNormal[4] = 0;
  WorkingSet.isActiveIdxNormal[5] = 0;
  for (mConstrMax_tmp = 0; mConstrMax_tmp < 6; mConstrMax_tmp++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax_tmp] =
      WorkingSet.isActiveIdxNormal[mConstrMax_tmp];
  }

  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  for (mConstrMax_tmp = 0; mConstrMax_tmp < 6; mConstrMax_tmp++) {
    WorkingSet.isActiveIdx[mConstrMax_tmp] =
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax_tmp];
  }

  WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[1] = 0;
  WorkingSet.isActiveIdxRegPhaseOne[2] = Ceq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[3] = Cineq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[4] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[5] = 0;
  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxNormal[mConstrMax + 1] +=
      WorkingSet.isActiveIdxNormal[mConstrMax];
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  for (mConstrMax_tmp = 0; mConstrMax_tmp < 6; mConstrMax_tmp++) {
    WorkingSet.isActiveIdxPhaseOne[mConstrMax_tmp] =
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax_tmp];
  }

  WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[1] = 0;
  WorkingSet.isActiveIdxRegPhaseOne[2] = Ceq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[3] = Cineq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[4] = k;
  WorkingSet.isActiveIdxRegPhaseOne[5] = 0;
  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  for (mConstrMax_tmp = 0; mConstrMax_tmp < 6; mConstrMax_tmp++) {
    WorkingSet.isActiveIdxRegularized[mConstrMax_tmp] =
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax_tmp];
  }

  WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[1] = 0;
  WorkingSet.isActiveIdxRegPhaseOne[2] = Ceq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[3] = Cineq->size[0];
  WorkingSet.isActiveIdxRegPhaseOne[4] = k + 1;
  WorkingSet.isActiveIdxRegPhaseOne[5] = 0;
  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  tmp_0 = Cineq->size[0];
  Cineq->size[0] = TrialState.cIneq->size[0];
  MPC_fm_emxEnsureCapacity_real_T(Cineq, tmp_0);
  loop_ub = TrialState.cIneq->size[0];
  for (k = 0; k < loop_ub; k++) {
    Cineq->data[k] = TrialState.cIneq->data[k];
  }

  fval = MPC_f_eML_blk_kernel_anonFcn1_e(fun_workspace_x0, fun_workspace_zref,
    fun_workspace_wref, fun_workspace_N, TrialState.xstarsqp);
  mConstrMax = 1;
  tmp = rtIsNaN(fval);
  if (rtIsInf(fval) || tmp) {
    if (tmp) {
      mConstrMax = -3;
    } else if (fval < 0.0) {
      mConstrMax = -1;
    } else {
      mConstrMax = -2;
    }
  }

  TrialState.sqpFval = fval;
  if (mConstrMax == 1) {
    MPC_fminc_computeConstraints__c(Ceq->size[0], nVar, nonlcon_workspace.x0,
      nonlcon_workspace.N, TrialState.xstarsqp, Cineq, TrialState.iNonIneq0,
      TrialState.cEq, TrialState.iNonEq0);
  }

  MPC__computeFiniteDifferences_k(&FiniteDifferences, fval, Cineq,
    TrialState.iNonIneq0, TrialState.cEq, TrialState.iNonEq0,
    TrialState.xstarsqp, TrialState.grad, WorkingSet.Aineq, TrialState.iNonIneq0,
    WorkingSet.ldA, WorkingSet.Aeq, TrialState.iNonEq0, WorkingSet.ldA);
  TrialState.FunctionEvaluations = FiniteDifferences.numEvals + 1;
  tmp_0 = TrialState.cIneq->size[0];
  TrialState.cIneq->size[0] = Cineq->size[0];
  MPC_fm_emxEnsureCapacity_real_T(TrialState.cIneq, tmp_0);
  loop_ub = Cineq->size[0];
  for (k = 0; k < loop_ub; k++) {
    TrialState.cIneq->data[k] = Cineq->data[k];
  }

  nVar = TrialState.mNonlinEq;
  for (mConstrMax = 0; mConstrMax < iw0; mConstrMax++) {
    WorkingSet_0 = -TrialState.cEq->data[mConstrMax];
    WorkingSet.beq->data[mConstrMax] = WorkingSet_0;
    WorkingSet.bwset->data[mConstrMax] = WorkingSet_0;
  }

  iw0 = (Ceq->size[0] - TrialState.mNonlinEq) * WorkingSet.ldA;
  mConstrMax = iw0;
  for (nVarMax = 0; nVarMax < nVar; nVarMax++) {
    maxDims = WorkingSet.nVar - 1;
    for (k = 0; k <= maxDims; k++) {
      WorkingSet.ATwset->data[iw0 + k] = WorkingSet.Aeq->data[mConstrMax + k];
    }

    iw0 += WorkingSet.ldA;
    mConstrMax = iw0;
  }

  for (iw0 = 0; iw0 <= mNonlinIneq; iw0++) {
    WorkingSet.bineq->data[iw0] = -Cineq->data[iw0];
  }

  MPC_fmincon_setProblemType_g(&WorkingSet, 3);
  iw0 = WorkingSet.isActiveIdx[2];
  nVar = WorkingSet.mConstrMax;
  for (mConstrMax = iw0; mConstrMax <= nVar; mConstrMax++) {
    WorkingSet.isActiveConstr->data[mConstrMax - 1] = false;
  }

  WorkingSet.nWConstr[0] = 0;
  WorkingSet.nWConstr[1] = WorkingSet.sizes[1];
  WorkingSet.nWConstr[2] = 0;
  WorkingSet.nWConstr[3] = 0;
  WorkingSet.nWConstr[4] = 0;
  WorkingSet.nActiveConstr = WorkingSet.nWConstr[1];
  iw0 = WorkingSet.sizes[1];
  for (nVar = 0; nVar < iw0; nVar++) {
    WorkingSet.Wid->data[nVar] = 2;
    WorkingSet.Wlocalidx->data[nVar] = nVar + 1;
    WorkingSet.isActiveConstr->data[nVar] = true;
    mConstrMax_tmp = WorkingSet.ldA * nVar;
    maxDims = WorkingSet.nVar - 1;
    for (k = 0; k <= maxDims; k++) {
      tmp_0 = mConstrMax_tmp + k;
      WorkingSet.ATwset->data[tmp_0] = WorkingSet.Aeq->data[tmp_0];
    }

    WorkingSet.bwset->data[nVar] = WorkingSet.beq->data[nVar];
  }

  MeritFunction.initFval = fval;
  MeritFunction.penaltyParam = 1.0;
  MeritFunction.threshold = 0.0001;
  MeritFunction.nPenaltyDecreases = 0;
  MeritFunction.linearizedConstrViol = 0.0;
  fval = 0.0;
  if (Ceq->size[0] >= 1) {
    iw0 = Ceq->size[0];
    for (nVar = 0; nVar < iw0; nVar++) {
      fval += fabs(TrialState.cEq->data[nVar]);
    }
  }

  MPC_fmincon_emxFree_real_T(&Ceq);
  MeritFunction.initConstrViolationEq = fval;
  fval = 0.0;
  for (iw0 = 0; iw0 <= mNonlinIneq; iw0++) {
    WorkingSet_0 = Cineq->data[iw0];
    if (WorkingSet_0 > 0.0) {
      fval += WorkingSet_0;
    }
  }

  MPC_fmincon_emxFree_real_T(&Cineq);
  MeritFunction.initConstrViolationIneq = fval;
  MeritFunction.phi = 0.0;
  MeritFunction.phiPrimePlus = 0.0;
  MeritFunction.phiFullStep = 0.0;
  MeritFunction.feasRelativeFactor = 0.0;
  MeritFunction.nlpPrimalFeasError = 0.0;
  MeritFunction.nlpDualFeasError = 0.0;
  MeritFunction.nlpComplError = 0.0;
  MeritFunction.firstOrderOpt = 0.0;
  MeritFunction.hasObjective = true;
  MPC_fmincon_driver_h(Hessian, &TrialState, &MeritFunction, &FcnEvaluator,
                       &FiniteDifferences, &memspace, &WorkingSet, &QRManager,
                       &CholManager, &QPObjective, fscales_cineq_constraint, 100
                       * x0->size[0]);
  MPC_fmincon_emxFree_real_T(&Hessian);
  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  MPC_fmincon_emxFree_real_T(&fscales_cineq_constraint);
  emxFreeStruct_s_pIaUYPkQBTqVmAK(&memspace);
  emxFreeStruct_s_saWPFfMboRdWeRq(&QPObjective);
  emxFreeStruct_s_vdGXtauKr5HuLAq(&CholManager);
  emxFreeStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  emxFreeStruct_s_9imJcZ2iwk426vK(&FiniteDifferences);
  emxFreeStruct_coder_internal_n1(&FcnEvaluator);
  tmp_0 = x->size[0];
  x->size[0] = TrialState.xstarsqp->size[0];
  MPC_fm_emxEnsureCapacity_real_T(x, tmp_0);
  loop_ub = TrialState.xstarsqp->size[0];
  for (k = 0; k < loop_ub; k++) {
    x->data[k] = TrialState.xstarsqp->data[k];
  }

  emxFreeStruct_s_0Mw3d4AlMrOoSnA(&TrialState);
}

/* Model output function */
void MPC_fmincon_output(void)
{
  /* local block i/o variables */
  real_T rtb_FromWorkspace[9];
  emxArray_real_T_MPC_fmincon_T *c;
  emxArray_real_T_MPC_fmincon_T *d;
  emxArray_real_T_MPC_fmincon_T *horizon_idx;
  emxArray_real_T_MPC_fmincon_T *lb;
  emxArray_real_T_MPC_fmincon_T *tmp;
  emxArray_real_T_MPC_fmincon_T *u_opt;
  emxArray_real_T_MPC_fmincon_T *ub;
  emxArray_real_T_MPC_fmincon_T *wref_0;
  s6lIrH89xwD47fl4e1dZNiE_MPC_f_T expl_temp;
  sU0htoGcxTaPV5C2NLIldmB_MPC_f_T expl_temp_0;
  real_T wref[134];
  real_T rtb_TmpSignalConversionAtHILWri[2];
  real_T a_idx_0;
  real_T apnd;
  real_T b;
  real_T cdiff;
  real_T ndbl;
  real_T rtb_Clock;
  real_T x_idx_0;
  real_T x_idx_1;
  real_T x_idx_2;
  int32_T ibcol;
  int32_T nm1d2;
  int32_T ntilerows;
  int32_T tmp_0;
  boolean_T didZcEventOccur;
  static const real_T c_0[268] = { 0.0, 0.0, 0.78539816339744828, 0.0, 0.075,
    0.075, 0.78539816339744828, 0.0, 0.15, 0.15, 0.78539816339744828, 0.0,
    0.22499999999999998, 0.22499999999999998, 0.78539816339744828, 0.0, 0.3, 0.3,
    0.78539816339744828, 0.0, 0.375, 0.375, 0.78539816339744828, 0.0,
    0.44999999999999996, 0.44999999999999996, 0.78539816339744828, 0.0, 0.525,
    0.525, 0.78539816339744828, 0.0, 0.6, 0.6, 0.78539816339744828, 0.0,
    0.67499999999999993, 0.67499999999999993, 0.78539816339744828, 0.0, 0.75,
    0.75, 0.78539816339744828, 0.0, 0.825, 0.825, 0.78539816339744828, 0.0,
    0.89999999999999991, 0.89999999999999991, 0.78539816339744828, 0.0, 0.975,
    0.975, 0.78539816339744828, 0.0, 1.05, 1.05, 0.78539816339744828, 0.0, 1.125,
    1.125, 0.78539816339744828, 0.0, 1.2, 1.2, 0.78539816339744828, 0.0, 1.275,
    1.275, 0.78539816339744828, 0.0, 1.3499999999999999, 1.3499999999999999,
    0.78539816339744828, 0.0, 1.425, 1.425, 0.78539816339744828, 0.0, 1.5, 1.5,
    0.78539816339744828, 0.0, 1.575, 1.575, 0.78539816339744828, 0.0, 1.65, 1.65,
    0.78539816339744828, 0.0, 1.7249999999999999, 1.7249999999999999,
    0.78539816339744828, 0.0, 1.7999999999999998, 1.7999999999999998,
    0.78539816339744828, 0.0, 1.875, 1.875, 0.78539816339744828, 0.0, 1.95, 1.95,
    0.78539816339744828, 0.0, 2.025, 2.025, 0.78539816339744828, 0.0, 2.1, 2.1,
    0.78539816339744828, 0.0, 2.175, 2.175, 0.78539816339744828, 0.0, 2.25, 2.25,
    0.78539816339744828, 0.0, 2.3249999999999997, 2.3249999999999997,
    0.78539816339744828, 0.0, 2.4, 2.4, 0.78539816339744828, 0.0, 2.475, 2.475,
    0.78539816339744828, 0.0, 2.5500000000000003, 2.5500000000000003,
    0.78539816339744828, 0.0, 2.6250000000000004, 2.6250000000000004,
    0.78539816339744828, 0.0, 2.7, 2.7, 0.78539816339744828, 0.0,
    2.7750000000000004, 2.7750000000000004, 0.78539816339744828, 0.0, 2.85, 2.85,
    0.78539816339744828, 0.0, 2.9250000000000003, 2.9250000000000003,
    0.78539816339744828, 0.0, 3.0, 3.0, 0.78539816339744828, 0.0, 3.075, 3.075,
    0.78539816339744828, 0.0, 3.1500000000000004, 3.1500000000000004,
    0.78539816339744828, 0.0, 3.2250000000000005, 3.2250000000000005,
    0.78539816339744828, 0.0, 3.3000000000000003, 3.3000000000000003,
    0.78539816339744828, 0.0, 3.375, 3.375, 0.78539816339744828, 0.0, 3.45, 3.45,
    0.78539816339744828, 0.0, 3.5250000000000004, 3.5250000000000004,
    0.78539816339744828, 0.0, 3.6000000000000005, 3.6000000000000005,
    0.78539816339744828, 0.0, 3.6750000000000003, 3.6750000000000003,
    0.78539816339744828, 0.0, 3.75, 3.75, 0.78539816339744828, 0.0, 3.825, 3.825,
    0.78539816339744828, 0.0, 3.9000000000000004, 3.9000000000000004,
    0.78539816339744828, 0.0, 3.975, 3.975, 0.78539816339744828, 0.0,
    4.0500000000000007, 4.0500000000000007, 0.78539816339744828, 0.0, 4.125,
    4.125, 0.78539816339744828, 0.0, 4.2, 4.2, 0.78539816339744828, 0.0, 4.275,
    4.275, 0.78539816339744828, 0.0, 4.3500000000000005, 4.3500000000000005,
    0.78539816339744828, 0.0, 4.425, 4.425, 0.78539816339744828, 0.0, 4.5, 4.5,
    0.78539816339744828, 0.0, 4.575, 4.575, 0.78539816339744828, 0.0, 4.65, 4.65,
    0.78539816339744828, 0.0, 4.7250000000000005, 4.7250000000000005,
    0.78539816339744828, 0.0, 4.8, 4.8, 0.78539816339744828, 0.0, 4.875, 4.875,
    0.78539816339744828, 0.0, 4.95, 4.95, 0.78539816339744828, 0.0 };

  static const real_T d_0[134] = { 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0 };

  static const real_T f[134] = { 0.42850670939904784, 0.42850670939904778,
    0.50350670939904785, 0.50350670939904774, 0.57850670939904791,
    0.57850670939904769, 0.65350670939904787, 0.65350670939904776,
    0.72850670939904782, 0.72850670939904771, 0.80350670939904778,
    0.80350670939904778, 0.87850670939904774, 0.87850670939904774,
    0.95350670939904791, 0.9535067093990478, 1.0285067093990479,
    1.0285067093990476, 1.1035067093990478, 1.1035067093990478,
    1.1785067093990478, 1.1785067093990478, 1.2535067093990477,
    1.2535067093990477, 1.3285067093990477, 1.3285067093990477,
    1.4035067093990476, 1.4035067093990476, 1.4785067093990478,
    1.4785067093990478, 1.5535067093990478, 1.5535067093990478,
    1.6285067093990477, 1.6285067093990477, 1.7035067093990477,
    1.7035067093990477, 1.7785067093990476, 1.7785067093990476,
    1.8535067093990478, 1.8535067093990478, 1.9285067093990478,
    1.9285067093990478, 2.0035067093990477, 2.0035067093990477,
    2.0785067093990479, 2.0785067093990479, 2.1535067093990476,
    2.1535067093990476, 2.2285067093990478, 2.2285067093990474,
    2.303506709399048, 2.3035067093990476, 2.3785067093990477,
    2.3785067093990477, 2.4535067093990475, 2.4535067093990475,
    2.5285067093990476, 2.5285067093990476, 2.6035067093990478,
    2.6035067093990474, 2.678506709399048, 2.6785067093990476,
    2.7535067093990473, 2.7535067093990473, 2.8285067093990475,
    2.8285067093990475, 2.9035067093990476, 2.9035067093990476,
    2.9785067093990478, 2.9785067093990478, 3.053506709399048, 3.053506709399048,
    3.1285067093990482, 3.1285067093990477, 3.2035067093990484,
    3.2035067093990479, 3.2785067093990476, 3.2785067093990476,
    3.3535067093990478, 3.3535067093990478, 3.428506709399048,
    3.4285067093990476, 3.5035067093990482, 3.5035067093990477,
    3.5785067093990484, 3.5785067093990479, 3.6535067093990485,
    3.6535067093990481, 3.7285067093990478, 3.7285067093990478,
    3.803506709399048, 3.8035067093990476, 3.8785067093990482,
    3.8785067093990477, 3.9535067093990484, 3.9535067093990479,
    4.028506709399049, 4.0285067093990481, 4.1035067093990483,
    4.1035067093990474, 4.1785067093990484, 4.1785067093990476,
    4.2535067093990486, 4.2535067093990477, 4.3285067093990488,
    4.3285067093990488, 4.4035067093990481, 4.4035067093990481,
    4.4785067093990492, 4.4785067093990492, 4.5535067093990484,
    4.5535067093990484, 4.6285067093990486, 4.6285067093990477,
    4.7035067093990488, 4.7035067093990488, 4.778506709399049,
    4.7785067093990481, 4.8535067093990483, 4.8535067093990474,
    4.9285067093990484, 4.9285067093990484, 5.0035067093990486,
    5.0035067093990477, 5.0785067093990488, 5.0785067093990488,
    5.153506709399049, 5.1535067093990481, 5.2285067093990483,
    5.2285067093990474, 5.3035067093990484, 5.3035067093990484,
    5.3785067093990486, 5.3785067093990477 };

  int32_T tmp_1;
  int32_T tmp_2;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* set solver stop time */
    if (!(MPC_fmincon_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&MPC_fmincon_M->solverInfo,
                            ((MPC_fmincon_M->Timing.clockTickH0 + 1) *
        MPC_fmincon_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&MPC_fmincon_M->solverInfo,
                            ((MPC_fmincon_M->Timing.clockTick0 + 1) *
        MPC_fmincon_M->Timing.stepSize0 + MPC_fmincon_M->Timing.clockTickH0 *
        MPC_fmincon_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(MPC_fmincon_M)) {
    MPC_fmincon_M->Timing.t[0] = rtsiGetT(&MPC_fmincon_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
  }

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Integrator: '<S11>/Integrator2'
   */
  MPC_fmincon_B.Product1 = MPC_fmincon_P.Constant2_Value *
    MPC_fmincon_X.Integrator2_CSTATE;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* S-Function (hil_read_block): '<S8>/HIL Read' */

    /* S-Function Block: MPC_fmincon/basicQCarIO/HIL Read (hil_read_block) */
    {
      t_error result = hil_read(MPC_fmincon_DW.HILInitialize_Card,
        &MPC_fmincon_P.HILRead_analog_channels, 1U,
        &MPC_fmincon_P.HILRead_encoder_channels, 1U,
        NULL, 0U,
        MPC_fmincon_P.HILRead_other_channels, 4U,
        &MPC_fmincon_B.analogpower,
        &MPC_fmincon_DW.HILRead_EncoderBuffer,
        NULL,
        &MPC_fmincon_B.HILRead_o3[0]
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
      } else {
        MPC_fmincon_B.motorencoder = MPC_fmincon_DW.HILRead_EncoderBuffer;
      }
    }
  }

  /* Integrator: '<S15>/Integrator1' */
  if (MPC_fmincon_DW.Integrator1_IWORK != 0) {
    MPC_fmincon_X.Integrator1_CSTATE = MPC_fmincon_B.analogpower;
  }

  /* Integrator: '<S15>/Integrator1' */
  MPC_fmincon_B.Integrator1 = MPC_fmincon_X.Integrator1_CSTATE;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* S-Function (inverse_modulus_block): '<S8>/Unwrap 2^2' */
    /* S-Function Block: MPC_fmincon/basicQCarIO/Unwrap 2^2 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = MPC_fmincon_P.Unwrap22_Modulus / 2.0;
      real_T du, dy;
      if (MPC_fmincon_DW.Unwrap22_FirstSample) {
        MPC_fmincon_DW.Unwrap22_FirstSample = false;
        MPC_fmincon_DW.Unwrap22_PreviousInput = MPC_fmincon_B.HILRead_o3[3];
      }

      du = (real_T) MPC_fmincon_B.HILRead_o3[3] -
        MPC_fmincon_DW.Unwrap22_PreviousInput;
      if (du > half_range) {
        MPC_fmincon_DW.Unwrap22_Revolutions =
          MPC_fmincon_DW.Unwrap22_Revolutions - 1;
        dy = du - MPC_fmincon_P.Unwrap22_Modulus;
      } else if (du < -half_range) {
        MPC_fmincon_DW.Unwrap22_Revolutions =
          MPC_fmincon_DW.Unwrap22_Revolutions + 1;
        dy = du + MPC_fmincon_P.Unwrap22_Modulus;
      } else {
        dy = du;
      }

      MPC_fmincon_B.Unwrap22 = MPC_fmincon_B.HILRead_o3[3] +
        MPC_fmincon_DW.Unwrap22_Revolutions * MPC_fmincon_P.Unwrap22_Modulus;
      MPC_fmincon_DW.Unwrap22_PreviousInput = MPC_fmincon_B.HILRead_o3[3];
    }
  }

  /* Integrator: '<S16>/Integrator1' */
  if (MPC_fmincon_DW.Integrator1_IWORK_i != 0) {
    MPC_fmincon_X.Integrator1_CSTATE_m = MPC_fmincon_B.Unwrap22;
  }

  /* Integrator: '<S16>/Integrator1' */
  MPC_fmincon_B.Integrator1_g = MPC_fmincon_X.Integrator1_CSTATE_m;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S8>/Constant8'
   *  Integrator: '<S14>/Integrator2'
   */
  MPC_fmincon_B.Product1_p = MPC_fmincon_P.Constant8_Value *
    MPC_fmincon_X.Integrator2_CSTATE_f;

  /* Integrator: '<S8>/Integrator' */
  MPC_fmincon_B.Integrator = MPC_fmincon_X.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* S-Function (inverse_modulus_block): '<S8>/Unwrap 2^24' */
    /* S-Function Block: MPC_fmincon/basicQCarIO/Unwrap 2^24 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = MPC_fmincon_P.Unwrap224_Modulus / 2.0;
      real_T du, dy;
      if (MPC_fmincon_DW.Unwrap224_FirstSample) {
        MPC_fmincon_DW.Unwrap224_FirstSample = false;
        MPC_fmincon_DW.Unwrap224_PreviousInput = MPC_fmincon_B.HILRead_o3[0];
      }

      du = (real_T) MPC_fmincon_B.HILRead_o3[0] -
        MPC_fmincon_DW.Unwrap224_PreviousInput;
      if (du > half_range) {
        MPC_fmincon_DW.Unwrap224_Revolutions =
          MPC_fmincon_DW.Unwrap224_Revolutions - 1;
        dy = du - MPC_fmincon_P.Unwrap224_Modulus;
      } else if (du < -half_range) {
        MPC_fmincon_DW.Unwrap224_Revolutions =
          MPC_fmincon_DW.Unwrap224_Revolutions + 1;
        dy = du + MPC_fmincon_P.Unwrap224_Modulus;
      } else {
        dy = du;
      }

      MPC_fmincon_B.Unwrap224 = MPC_fmincon_B.HILRead_o3[0] +
        MPC_fmincon_DW.Unwrap224_Revolutions * MPC_fmincon_P.Unwrap224_Modulus;
      MPC_fmincon_DW.Unwrap224_PreviousInput = MPC_fmincon_B.HILRead_o3[0];
    }
  }

  /* Integrator: '<S11>/Integrator1' */
  if (MPC_fmincon_DW.Integrator1_IWORK_g != 0) {
    MPC_fmincon_X.Integrator1_CSTATE_p = MPC_fmincon_B.Unwrap224;
  }

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Integrator: '<S11>/Integrator1'
   *  Integrator: '<S11>/Integrator2'
   *  Product: '<S11>/Product2'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S11>/Sum1'
   */
  MPC_fmincon_B.Product = ((MPC_fmincon_B.Unwrap224 -
    MPC_fmincon_X.Integrator1_CSTATE_p) - MPC_fmincon_X.Integrator2_CSTATE *
    MPC_fmincon_P.Constant_Value_h * MPC_fmincon_P.Constant1_Value) *
    MPC_fmincon_P.Constant2_Value;

  /* Integrator: '<S12>/Integrator1' */
  if (MPC_fmincon_DW.Integrator1_IWORK_d != 0) {
    MPC_fmincon_X.Integrator1_CSTATE_h = MPC_fmincon_B.HILRead_o3[1];
  }

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S8>/Constant3'
   *  Constant: '<S8>/Constant4'
   *  Integrator: '<S12>/Integrator1'
   *  Integrator: '<S12>/Integrator2'
   *  Product: '<S12>/Product2'
   *  Sum: '<S12>/Sum'
   *  Sum: '<S12>/Sum1'
   */
  MPC_fmincon_B.Product_d = ((MPC_fmincon_B.HILRead_o3[1] -
    MPC_fmincon_X.Integrator1_CSTATE_h) - MPC_fmincon_X.Integrator2_CSTATE_i *
    MPC_fmincon_P.Constant_Value_l * MPC_fmincon_P.Constant3_Value) *
    MPC_fmincon_P.Constant4_Value;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S8>/Constant4'
   *  Integrator: '<S12>/Integrator2'
   */
  MPC_fmincon_B.Product1_i = MPC_fmincon_P.Constant4_Value *
    MPC_fmincon_X.Integrator2_CSTATE_i;

  /* Integrator: '<S13>/Integrator1' */
  if (MPC_fmincon_DW.Integrator1_IWORK_gg != 0) {
    MPC_fmincon_X.Integrator1_CSTATE_b = MPC_fmincon_B.HILRead_o3[2];
  }

  /* Product: '<S13>/Product' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S8>/Constant5'
   *  Constant: '<S8>/Constant6'
   *  Integrator: '<S13>/Integrator1'
   *  Integrator: '<S13>/Integrator2'
   *  Product: '<S13>/Product2'
   *  Sum: '<S13>/Sum'
   *  Sum: '<S13>/Sum1'
   */
  MPC_fmincon_B.Product_m = ((MPC_fmincon_B.HILRead_o3[2] -
    MPC_fmincon_X.Integrator1_CSTATE_b) - MPC_fmincon_X.Integrator2_CSTATE_c *
    MPC_fmincon_P.Constant_Value_i * MPC_fmincon_P.Constant5_Value) *
    MPC_fmincon_P.Constant6_Value;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S8>/Constant6'
   *  Integrator: '<S13>/Integrator2'
   */
  MPC_fmincon_B.Product1_n = MPC_fmincon_P.Constant6_Value *
    MPC_fmincon_X.Integrator2_CSTATE_c;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* S-Function (inverse_modulus_block): '<S8>/Unwrap 2^1' */
    /* S-Function Block: MPC_fmincon/basicQCarIO/Unwrap 2^1 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = MPC_fmincon_P.Unwrap21_Modulus / 2.0;
      real_T du, dy;
      if (MPC_fmincon_DW.Unwrap21_FirstSample) {
        MPC_fmincon_DW.Unwrap21_FirstSample = false;
        MPC_fmincon_DW.Unwrap21_PreviousInput = MPC_fmincon_B.motorencoder;
      }

      du = (real_T) MPC_fmincon_B.motorencoder -
        MPC_fmincon_DW.Unwrap21_PreviousInput;
      if (du > half_range) {
        MPC_fmincon_DW.Unwrap21_Revolutions =
          MPC_fmincon_DW.Unwrap21_Revolutions - 1;
        dy = du - MPC_fmincon_P.Unwrap21_Modulus;
      } else if (du < -half_range) {
        MPC_fmincon_DW.Unwrap21_Revolutions =
          MPC_fmincon_DW.Unwrap21_Revolutions + 1;
        dy = du + MPC_fmincon_P.Unwrap21_Modulus;
      } else {
        dy = du;
      }

      MPC_fmincon_B.Unwrap21 = MPC_fmincon_B.motorencoder +
        MPC_fmincon_DW.Unwrap21_Revolutions * MPC_fmincon_P.Unwrap21_Modulus;
      MPC_fmincon_DW.Unwrap21_PreviousInput = MPC_fmincon_B.motorencoder;
    }
  }

  /* Integrator: '<S14>/Integrator1' */
  if (MPC_fmincon_DW.Integrator1_IWORK_l != 0) {
    MPC_fmincon_X.Integrator1_CSTATE_n = MPC_fmincon_B.Unwrap21;
  }

  /* Product: '<S14>/Product' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S8>/Constant7'
   *  Constant: '<S8>/Constant8'
   *  Integrator: '<S14>/Integrator1'
   *  Integrator: '<S14>/Integrator2'
   *  Product: '<S14>/Product2'
   *  Sum: '<S14>/Sum'
   *  Sum: '<S14>/Sum1'
   */
  MPC_fmincon_B.Product_b = ((MPC_fmincon_B.Unwrap21 -
    MPC_fmincon_X.Integrator1_CSTATE_n) - MPC_fmincon_X.Integrator2_CSTATE_f *
    MPC_fmincon_P.Constant_Value_e * MPC_fmincon_P.Constant7_Value) *
    MPC_fmincon_P.Constant8_Value;

  /* Product: '<S15>/Product' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S8>/Constant10'
   *  Constant: '<S8>/Constant9'
   *  Integrator: '<S15>/Integrator2'
   *  Product: '<S15>/Product2'
   *  Sum: '<S15>/Sum'
   *  Sum: '<S15>/Sum1'
   */
  MPC_fmincon_B.Product_e = ((MPC_fmincon_B.analogpower -
    MPC_fmincon_B.Integrator1) - MPC_fmincon_X.Integrator2_CSTATE_m *
    MPC_fmincon_P.Constant_Value_j * MPC_fmincon_P.Constant9_Value_f) *
    MPC_fmincon_P.Constant10_Value_f;

  /* Product: '<S15>/Product1' incorporates:
   *  Constant: '<S8>/Constant10'
   *  Integrator: '<S15>/Integrator2'
   */
  MPC_fmincon_B.Product1_b = MPC_fmincon_P.Constant10_Value_f *
    MPC_fmincon_X.Integrator2_CSTATE_m;

  /* Product: '<S16>/Product' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S8>/Constant11'
   *  Constant: '<S8>/Constant12'
   *  Integrator: '<S16>/Integrator2'
   *  Product: '<S16>/Product2'
   *  Sum: '<S16>/Sum'
   *  Sum: '<S16>/Sum1'
   */
  MPC_fmincon_B.Product_p = ((MPC_fmincon_B.Unwrap22 -
    MPC_fmincon_B.Integrator1_g) - MPC_fmincon_X.Integrator2_CSTATE_b *
    MPC_fmincon_P.Constant_Value_n * MPC_fmincon_P.Constant11_Value) *
    MPC_fmincon_P.Constant12_Value;

  /* Product: '<S16>/Product1' incorporates:
   *  Constant: '<S8>/Constant12'
   *  Integrator: '<S16>/Integrator2'
   */
  MPC_fmincon_B.Product1_g = MPC_fmincon_P.Constant12_Value *
    MPC_fmincon_X.Integrator2_CSTATE_b;

  /* Gain: '<S17>/Gain3' incorporates:
   *  Gain: '<S17>/Gain1'
   *  Gain: '<S17>/Gain2'
   *  Gain: '<S17>/Gain4'
   */
  MPC_fmincon_B.Gain3 = MPC_fmincon_P.Gain1_Gain * MPC_fmincon_B.Product1_p *
    MPC_fmincon_P.Gain4_Gain * MPC_fmincon_P.Gain2_Gain *
    MPC_fmincon_P.Gain3_Gain;

  /* Integrator: '<S4>/Integrator5' */
  MPC_fmincon_B.Integrator5 = MPC_fmincon_X.Integrator5_CSTATE;

  /* Integrator: '<S5>/Integrator6' */
  MPC_fmincon_B.Integrator6 = MPC_fmincon_X.Integrator6_CSTATE;

  /* Clock: '<Root>/Clock' */
  rtb_Clock = MPC_fmincon_M->Timing.t[0];

  /* SignalConversion generated from: '<S2>/ SFunction ' incorporates:
   *  Integrator: '<S1>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   *  SignalConversion generated from: '<S3>/ SFunction '
   */
  expl_temp.x0[0] = MPC_fmincon_B.Integrator5;
  expl_temp.x0[1] = MPC_fmincon_B.Integrator6;
  expl_temp.x0[2] = MPC_fmincon_B.Integrator;
  expl_temp.x0[3] = MPC_fmincon_X.Integrator3_CSTATE;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  MPC_fmincon_DW.sfEvent_g = MPC_fmincon_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function': '<S2>:1' */
  /* '<S2>:1:69' */
  /* '<S2>:1:47' */
  /* '<S2>:1:70' */
  /* '<S2>:1:48' */
  /* '<S2>:1:47' */
  /* '<S2>:1:48' */
  /* '<S2>:1:65' */
  MPC_fmincon_emxInit_real_T(&horizon_idx, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  didZcEventOccur = rtIsNaN(rtb_Clock);
  if (didZcEventOccur) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if ((rtb_Clock + 12.0) - 1.0 < rtb_Clock) {
    horizon_idx->size[1] = 0;
  } else if ((rtIsInf(rtb_Clock) || rtIsInf((rtb_Clock + 12.0) - 1.0)) &&
             ((rtb_Clock + 12.0) - 1.0 == rtb_Clock)) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (floor(rtb_Clock) == rtb_Clock) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    ntilerows = (int32_T)(((rtb_Clock + 12.0) - 1.0) - rtb_Clock);
    horizon_idx->size[1] = ntilerows + 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    for (nm1d2 = 0; nm1d2 <= ntilerows; nm1d2++) {
      horizon_idx->data[nm1d2] = rtb_Clock + (real_T)nm1d2;
    }
  } else {
    ndbl = floor((((rtb_Clock + 12.0) - 1.0) - rtb_Clock) + 0.5);
    apnd = rtb_Clock + ndbl;
    cdiff = apnd - ((rtb_Clock + 12.0) - 1.0);
    if (fabs(cdiff) < fmax(fabs(rtb_Clock), fabs((rtb_Clock + 12.0) - 1.0)) *
        4.4408920985006262E-16) {
      ndbl++;
      apnd = (rtb_Clock + 12.0) - 1.0;
    } else if (cdiff > 0.0) {
      apnd = (ndbl - 1.0) + rtb_Clock;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      ntilerows = (int32_T)ndbl - 1;
    } else {
      ntilerows = -1;
    }

    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = ntilerows + 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    if (ntilerows + 1 > 0) {
      horizon_idx->data[0] = rtb_Clock;
      if (ntilerows + 1 > 1) {
        horizon_idx->data[ntilerows] = apnd;
        nm1d2 = ntilerows / 2;
        for (ibcol = 0; ibcol <= nm1d2 - 2; ibcol++) {
          horizon_idx->data[ibcol + 1] = ((real_T)ibcol + 1.0) + rtb_Clock;
          horizon_idx->data[(ntilerows - ibcol) - 1] = apnd - ((real_T)ibcol +
            1.0);
        }

        if (nm1d2 << 1 == ntilerows) {
          horizon_idx->data[nm1d2] = (rtb_Clock + apnd) / 2.0;
        } else {
          horizon_idx->data[nm1d2] = rtb_Clock + (real_T)nm1d2;
          horizon_idx->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
        }
      }
    }
  }

  tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
  horizon_idx->size[0] = 1;
  MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
  ntilerows = horizon_idx->size[1] - 1;
  for (nm1d2 = 0; nm1d2 <= ntilerows; nm1d2++) {
    ndbl = horizon_idx->data[nm1d2];
    if (rtIsNaN(ndbl) || rtIsInf(ndbl)) {
      apnd = (rtNaN);
    } else if (ndbl == 0.0) {
      apnd = 0.0;
    } else {
      apnd = fmod(ndbl, 67.0);
      if (apnd == 0.0) {
        apnd = 0.0;
      } else if (ndbl < 0.0) {
        apnd += 67.0;
      }
    }

    horizon_idx->data[nm1d2] = apnd + 1.0;
  }

  /* '<S2>:1:66' */
  /* '<S2>:1:69' */
  /* '<S2>:1:70' */
  /* '<S2>:1:76' */
  /* '<S2>:1:79' */
  MPC_fmincon_emxInit_real_T(&lb, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_0 = horizon_idx->size[1] << 1;
  tmp_1 = lb->size[0];
  lb->size[0] = tmp_0;
  MPC_fm_emxEnsureCapacity_real_T(lb, tmp_1);
  ntilerows = horizon_idx->size[1];
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = nm1d2 << 1;
    lb->data[ibcol] = -0.4;
    lb->data[ibcol + 1] = -0.2;
  }

  /* '<S2>:1:80' */
  MPC_fmincon_emxInit_real_T(&ub, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = ub->size[0];
  ub->size[0] = tmp_0;
  MPC_fm_emxEnsureCapacity_real_T(ub, tmp_1);
  ntilerows = horizon_idx->size[1];

  /* '<S2>:1:89' */
  /* '<S2>:1:90' */
  /* '<S2>:1:93' */
  expl_temp.N = horizon_idx->size[1];
  MPC_fmincon_emxInit_real_T(&c, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = c->size[0] * c->size[1];
  c->size[0] = 4;
  c->size[1] = horizon_idx->size[1];
  MPC_fm_emxEnsureCapacity_real_T(c, tmp_1);
  MPC_fmincon_emxInit_real_T(&d, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = d->size[0] * d->size[1];
  d->size[0] = 2;
  d->size[1] = horizon_idx->size[1];
  MPC_fm_emxEnsureCapacity_real_T(d, tmp_1);
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = nm1d2 << 1;
    ub->data[ibcol] = 0.4;
    ub->data[ibcol + 1] = 0.2;
    ndbl = horizon_idx->data[nm1d2];
    ibcol = ((int32_T)ndbl - 1) << 2;
    c->data[nm1d2 << 2] = c_0[ibcol];
    c->data[1 + (nm1d2 << 2)] = c_0[ibcol + 1];
    c->data[2 + (nm1d2 << 2)] = c_0[ibcol + 2];
    c->data[3 + (nm1d2 << 2)] = c_0[ibcol + 3];
    ibcol = ((int32_T)ndbl - 1) << 1;
    d->data[nm1d2 << 1] = d_0[ibcol];
    d->data[1 + (nm1d2 << 1)] = d_0[ibcol + 1];
  }

  MPC_fmincon_emxInit_real_T(&tmp, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = tmp->size[0];
  tmp->size[0] = tmp_0;
  MPC_fm_emxEnsureCapacity_real_T(tmp, tmp_1);
  if (tmp_0 - 1 >= 0) {
    memset(&tmp->data[0], 0, (uint32_T)tmp_0 * sizeof(real_T));
  }

  MPC_fmincon_emxInit_real_T(&u_opt, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  SignalConversion generated from: '<S2>/ SFunction '
   */
  MPC_fmincon_fmincon(expl_temp.x0, c, d, (real_T)horizon_idx->size[1], tmp, lb,
                      ub, expl_temp, u_opt);
  MPC_fmincon_emxFree_real_T(&c);
  MPC_fmincon_emxFree_real_T(&ub);

  /* FromWorkspace: '<Root>/From Workspace' */
  /* '<S2>:1:96' */
  /* '<S2>:1:97' */
  {
    real_T *pDataValues = (real_T *) MPC_fmincon_DW.FromWorkspace_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) MPC_fmincon_DW.FromWorkspace_PWORK.TimePtr;
    int_T currTimeIndex = MPC_fmincon_DW.FromWorkspace_IWORK.PrevIndex;
    real_T t = MPC_fmincon_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[499]) {
      currTimeIndex = 498;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    MPC_fmincon_DW.FromWorkspace_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 9; ++elIdx) {
              (&rtb_FromWorkspace[0])[elIdx] = pDataValues[currTimeIndex];
              pDataValues += 500;
            }
          }
        } else {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 9; ++elIdx) {
              (&rtb_FromWorkspace[0])[elIdx] = pDataValues[currTimeIndex + 1];
              pDataValues += 500;
            }
          }
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;

        {
          int_T elIdx;
          for (elIdx = 0; elIdx < 9; ++elIdx) {
            d1 = pDataValues[TimeIndex];
            d2 = pDataValues[TimeIndex + 1];
            (&rtb_FromWorkspace[0])[elIdx] = (real_T) rtInterpolate(d1, d2, f1,
              f2);
            pDataValues += 500;
          }
        }
      }
    }
  }

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Integrator: '<S1>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  SignalConversion generated from: '<S2>/ SFunction '
   */
  MPC_fmincon_DW.sfEvent = MPC_fmincon_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function2': '<S3>:1' */
  /* '<S3>:1:65' */
  /* '<S3>:1:47' */
  /* '<S3>:1:68' */
  /* '<S3>:1:47' */
  /* '<S3>:1:56' */
  /* '<S3>:1:60' */
  for (ntilerows = 0; ntilerows < 67; ntilerows++) {
    /* '<S3>:1:63' */
    /* '<S3>:1:65' */
    ibcol = ntilerows << 1;
    ndbl = d_0[ibcol + 1];
    apnd = d_0[ibcol];
    wref[ibcol] = ndbl * -0.24748737341529164 + apnd * 0.70710678118654757;
    wref[ibcol + 1] = ndbl * 0.24748737341529164 + apnd * 0.70710678118654757;
  }

  /* '<S3>:1:68' */
  /* '<S3>:1:83' */
  b = fmin(rtb_Clock + 5.0, 67.0);
  if (didZcEventOccur) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (b < rtb_Clock) {
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 0;
  } else if ((rtIsInf(rtb_Clock) || rtIsInf(b)) && (rtb_Clock == b)) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (floor(rtb_Clock) == rtb_Clock) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    ntilerows = (int32_T)(b - rtb_Clock);
    horizon_idx->size[1] = ntilerows + 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    for (nm1d2 = 0; nm1d2 <= ntilerows; nm1d2++) {
      horizon_idx->data[nm1d2] = rtb_Clock + (real_T)nm1d2;
    }
  } else {
    ndbl = floor((b - rtb_Clock) + 0.5);
    apnd = rtb_Clock + ndbl;
    cdiff = apnd - b;
    if (fabs(cdiff) < 4.4408920985006262E-16 * fmax(fabs(rtb_Clock), fabs(b))) {
      ndbl++;
      apnd = b;
    } else if (cdiff > 0.0) {
      apnd = (ndbl - 1.0) + rtb_Clock;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      ntilerows = (int32_T)ndbl - 1;
    } else {
      ntilerows = -1;
    }

    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = ntilerows + 1;
    MPC_fm_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    if (ntilerows + 1 > 0) {
      horizon_idx->data[0] = rtb_Clock;
      if (ntilerows + 1 > 1) {
        horizon_idx->data[ntilerows] = apnd;
        nm1d2 = ntilerows / 2;
        for (ibcol = 0; ibcol <= nm1d2 - 2; ibcol++) {
          horizon_idx->data[ibcol + 1] = ((real_T)ibcol + 1.0) + rtb_Clock;
          horizon_idx->data[(ntilerows - ibcol) - 1] = apnd - ((real_T)ibcol +
            1.0);
        }

        if (nm1d2 << 1 == ntilerows) {
          horizon_idx->data[nm1d2] = (rtb_Clock + apnd) / 2.0;
        } else {
          horizon_idx->data[nm1d2] = rtb_Clock + (real_T)nm1d2;
          horizon_idx->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
        }
      }
    }
  }

  /* '<S3>:1:84' */
  /* '<S3>:1:87' */
  /* '<S3>:1:88' */
  /* '<S3>:1:94' */
  /* '<S3>:1:109' */
  /* '<S3>:1:110' */
  /* '<S3>:1:113' */
  expl_temp_0.N = horizon_idx->size[1];
  expl_temp_0.x0[0] = MPC_fmincon_B.Integrator5;
  expl_temp_0.x0[1] = MPC_fmincon_B.Integrator6;
  expl_temp_0.x0[2] = MPC_fmincon_B.Integrator;
  expl_temp_0.x0[3] = MPC_fmincon_X.Integrator3_CSTATE;
  tmp_0 = horizon_idx->size[1] << 1;
  tmp_1 = d->size[0] * d->size[1];
  d->size[0] = 2;
  d->size[1] = horizon_idx->size[1];
  MPC_fm_emxEnsureCapacity_real_T(d, tmp_1);
  ntilerows = horizon_idx->size[1];
  MPC_fmincon_emxInit_real_T(&wref_0, 2);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  SignalConversion generated from: '<S3>/ SFunction '
   */
  tmp_1 = wref_0->size[0] * wref_0->size[1];
  wref_0->size[0] = 2;
  wref_0->size[1] = horizon_idx->size[1];
  MPC_fm_emxEnsureCapacity_real_T(wref_0, tmp_1);
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = ((int32_T)horizon_idx->data[nm1d2] - 1) << 1;
    tmp_1 = nm1d2 << 1;
    d->data[tmp_1] = f[ibcol];
    tmp_2 = (nm1d2 << 1) + 1;
    d->data[tmp_2] = f[ibcol + 1];
    wref_0->data[tmp_1] = wref[ibcol];
    wref_0->data[tmp_2] = wref[ibcol + 1];
  }

  tmp_1 = tmp->size[0];
  tmp->size[0] = tmp_0;
  MPC_fm_emxEnsureCapacity_real_T(tmp, tmp_1);
  if (tmp_0 - 1 >= 0) {
    memset(&tmp->data[0], 0, (uint32_T)tmp_0 * sizeof(real_T));
  }

  MPC_fmincon_fmincon_l(expl_temp.x0, d, wref_0, (real_T)horizon_idx->size[1],
                        tmp, expl_temp_0, lb);
  MPC_fmincon_emxFree_real_T(&wref_0);
  MPC_fmincon_emxFree_real_T(&tmp);
  MPC_fmincon_emxFree_real_T(&d);
  MPC_fmincon_emxFree_real_T(&horizon_idx);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Integrator: '<S1>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  SignalConversion generated from: '<S2>/ SFunction '
   *  Trigonometry: '<S4>/Cos'
   *  Trigonometry: '<S5>/Sin'
   */
  /* '<S3>:1:116' */
  /* '<S3>:1:130' */
  ndbl = MPC_fmincon_B.Integrator + MPC_fmincon_X.Integrator3_CSTATE;
  rtb_Clock = sin(ndbl);

  /* '<S3>:1:130' */
  ndbl = cos(ndbl);

  /* '<S3>:1:131' */
  apnd = cos(MPC_fmincon_B.Integrator);
  cdiff = tan(MPC_fmincon_X.Integrator3_CSTATE);
  b = sin(MPC_fmincon_B.Integrator);
  x_idx_0 = apnd - (0.35 * rtb_Clock / 0.256 + b) * cdiff;
  x_idx_2 = -0.35 * rtb_Clock;
  x_idx_1 = (0.35 * ndbl / 0.256 + apnd) * cdiff + b;
  cdiff = 0.35 * ndbl;

  /* '<S3>:1:117' */
  if (fabs(x_idx_1) > fabs(x_idx_0)) {
    rtb_Clock = x_idx_0 / x_idx_1;
    ndbl = 1.0 / (rtb_Clock * cdiff - x_idx_2);
    a_idx_0 = cdiff / x_idx_1 * ndbl;
    cdiff = -ndbl;
    x_idx_0 = -x_idx_2 / x_idx_1 * ndbl;
    ndbl *= rtb_Clock;
  } else {
    rtb_Clock = x_idx_1 / x_idx_0;
    ndbl = 1.0 / (cdiff - rtb_Clock * x_idx_2);
    a_idx_0 = cdiff / x_idx_0 * ndbl;
    cdiff = -rtb_Clock * ndbl;
    x_idx_0 = -x_idx_2 / x_idx_0 * ndbl;
  }

  /* '<S3>:1:120' */
  /* '<S3>:1:121' */
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' */
    if (MPC_fmincon_P.uArm0Disarm2_CurrentSetting == 1) {
      /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' incorporates:
       *  Constant: '<Root>/Constant10'
       */
      MPC_fmincon_B.switch_l = MPC_fmincon_P.Constant10_Value;
    } else {
      /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' incorporates:
       *  Constant: '<Root>/Constant9'
       */
      MPC_fmincon_B.switch_l = MPC_fmincon_P.Constant9_Value;
    }

    /* End of ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' */
  }

  /* ManualSwitch: '<Root>/Up - NL, Down - FL 2' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  if (MPC_fmincon_P.UpNLDownFL2_CurrentSetting == 1) {
    x_idx_0 = u_opt->data[0];
  } else {
    x_idx_0 = a_idx_0 * lb->data[0] + x_idx_0 * lb->data[1];
  }

  /* Saturate: '<S9>/command saturation' incorporates:
   *  ManualSwitch: '<Root>/Up - NL, Down - FL 2'
   */
  if (x_idx_0 > MPC_fmincon_P.commandsaturation_UpperSat) {
    x_idx_0 = MPC_fmincon_P.commandsaturation_UpperSat;
  } else if (x_idx_0 < MPC_fmincon_P.commandsaturation_LowerSat) {
    x_idx_0 = MPC_fmincon_P.commandsaturation_LowerSat;
  }

  /* Product: '<S9>/Multiply1' incorporates:
   *  Saturate: '<S9>/command saturation'
   */
  MPC_fmincon_B.desired = x_idx_0 * MPC_fmincon_B.switch_l;

  /* Product: '<S9>/Multiply' */
  MPC_fmincon_B.measured = MPC_fmincon_B.Gain3 * MPC_fmincon_B.switch_l;

  /* Sum: '<S9>/Sum' */
  rtb_Clock = MPC_fmincon_B.desired - MPC_fmincon_B.measured;

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   */
  MPC_fmincon_B.Compare = (MPC_fmincon_B.desired == MPC_fmincon_P.Constant_Value);

  /* Integrator: '<S9>/Integrator1' */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&MPC_fmincon_M->solverInfo)) {
    didZcEventOccur = (((MPC_fmincon_PrevZCX.Integrator1_Reset_ZCE == POS_ZCSIG)
                        != (int32_T)MPC_fmincon_B.Compare) &&
                       (MPC_fmincon_PrevZCX.Integrator1_Reset_ZCE !=
                        UNINITIALIZED_ZCSIG));
    MPC_fmincon_PrevZCX.Integrator1_Reset_ZCE = MPC_fmincon_B.Compare;

    /* evaluate zero-crossings */
    if (didZcEventOccur) {
      MPC_fmincon_X.Integrator1_CSTATE_ng = MPC_fmincon_P.Integrator1_IC;
    }
  }

  if (MPC_fmincon_X.Integrator1_CSTATE_ng >= MPC_fmincon_P.Integrator1_UpperSat)
  {
    MPC_fmincon_X.Integrator1_CSTATE_ng = MPC_fmincon_P.Integrator1_UpperSat;
  } else if (MPC_fmincon_X.Integrator1_CSTATE_ng <=
             MPC_fmincon_P.Integrator1_LowerSat) {
    MPC_fmincon_X.Integrator1_CSTATE_ng = MPC_fmincon_P.Integrator1_LowerSat;
  }

  /* Sum: '<S9>/Add1' incorporates:
   *  Gain: '<S9>/Kff  (% // m//s)'
   *  Gain: '<S9>/Kp (% // m//s)'
   *  Integrator: '<S9>/Integrator1'
   *  Sum: '<S9>/Add'
   */
  x_idx_0 = (MPC_fmincon_P.Kpms_Gain * rtb_Clock +
             MPC_fmincon_X.Integrator1_CSTATE_ng) + MPC_fmincon_P.Kffms_Gain *
    MPC_fmincon_B.desired;

  /* Saturate: '<S9>/command saturation1' */
  if (x_idx_0 > MPC_fmincon_P.commandsaturation1_UpperSat) {
    x_idx_0 = MPC_fmincon_P.commandsaturation1_UpperSat;
  } else if (x_idx_0 < MPC_fmincon_P.commandsaturation1_LowerSat) {
    x_idx_0 = MPC_fmincon_P.commandsaturation1_LowerSat;
  }

  /* Gain: '<S8>/direction convention' incorporates:
   *  Product: '<S9>/Multiply2'
   *  Saturate: '<S9>/command saturation1'
   */
  x_idx_0 = x_idx_0 * MPC_fmincon_B.switch_l *
    MPC_fmincon_P.directionconvention_Gain;

  /* Saturate: '<S8>/command saturation' */
  if (x_idx_0 > MPC_fmincon_P.commandsaturation_UpperSat_n) {
    /* Saturate: '<S8>/command saturation' */
    MPC_fmincon_B.commandsaturation = MPC_fmincon_P.commandsaturation_UpperSat_n;
  } else if (x_idx_0 < MPC_fmincon_P.commandsaturation_LowerSat_i) {
    /* Saturate: '<S8>/command saturation' */
    MPC_fmincon_B.commandsaturation = MPC_fmincon_P.commandsaturation_LowerSat_i;
  } else {
    /* Saturate: '<S8>/command saturation' */
    MPC_fmincon_B.commandsaturation = x_idx_0;
  }

  /* End of Saturate: '<S8>/command saturation' */

  /* Bias: '<S8>/Steering Bias' incorporates:
   *  Gain: '<S8>/Gain'
   *  Integrator: '<S1>/Integrator3'
   */
  MPC_fmincon_B.SteeringBias = MPC_fmincon_P.Gain_Gain *
    MPC_fmincon_X.Integrator3_CSTATE + MPC_fmincon_P.SteeringBias_Bias;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* SignalConversion generated from: '<S8>/HIL Write' */
    rtb_TmpSignalConversionAtHILWri[0] = MPC_fmincon_B.commandsaturation;
    rtb_TmpSignalConversionAtHILWri[1] = MPC_fmincon_B.SteeringBias;

    /* S-Function (hil_write_block): '<S8>/HIL Write' */

    /* S-Function Block: MPC_fmincon/basicQCarIO/HIL Write (hil_write_block) */
    {
      t_error result;
      result = hil_write(MPC_fmincon_DW.HILInitialize_Card,
                         NULL, 0U,
                         NULL, 0U,
                         NULL, 0U,
                         MPC_fmincon_P.HILWrite_other_channels, 2U,
                         NULL,
                         NULL,
                         NULL,
                         &rtb_TmpSignalConversionAtHILWri[0]
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
      }
    }
  }

  /* ManualSwitch: '<Root>/Up - NL, Down - FL' */
  if (MPC_fmincon_P.UpNLDownFL_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Up - NL, Down - FL' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function'
     */
    MPC_fmincon_B.omega = u_opt->data[1];
  } else {
    /* ManualSwitch: '<Root>/Up - NL, Down - FL' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function2'
     */
    MPC_fmincon_B.omega = cdiff * lb->data[0] + ndbl * lb->data[1];
  }

  /* End of ManualSwitch: '<Root>/Up - NL, Down - FL' */
  MPC_fmincon_emxFree_real_T(&u_opt);
  MPC_fmincon_emxFree_real_T(&lb);
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    /* S-Function (inverse_modulus_block): '<S1>/Unwrap 2^1' */
    /* S-Function Block: MPC_fmincon/Filter/Unwrap 2^1 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = MPC_fmincon_P.Unwrap21_Modulus_p / 2.0;
      real_T du, dy;
      if (MPC_fmincon_DW.Unwrap21_FirstSample_o) {
        MPC_fmincon_DW.Unwrap21_FirstSample_o = false;
        MPC_fmincon_DW.Unwrap21_PreviousInput_d = MPC_fmincon_B.omega;
      }

      du = (real_T) MPC_fmincon_B.omega -
        MPC_fmincon_DW.Unwrap21_PreviousInput_d;
      if (du > half_range) {
        MPC_fmincon_DW.Unwrap21_Revolutions_o =
          MPC_fmincon_DW.Unwrap21_Revolutions_o - 1;
        dy = du - MPC_fmincon_P.Unwrap21_Modulus_p;
      } else if (du < -half_range) {
        MPC_fmincon_DW.Unwrap21_Revolutions_o =
          MPC_fmincon_DW.Unwrap21_Revolutions_o + 1;
        dy = du + MPC_fmincon_P.Unwrap21_Modulus_p;
      } else {
        dy = du;
      }

      MPC_fmincon_B.Unwrap21_o = MPC_fmincon_B.omega +
        MPC_fmincon_DW.Unwrap21_Revolutions_o * MPC_fmincon_P.Unwrap21_Modulus_p;
      MPC_fmincon_DW.Unwrap21_PreviousInput_d = MPC_fmincon_B.omega;
    }
  }

  /* Integrator: '<S10>/Integrator1' */
  if (MPC_fmincon_DW.Integrator1_IWORK_a != 0) {
    MPC_fmincon_X.Integrator1_CSTATE_me = MPC_fmincon_B.Unwrap21_o;
  }

  /* Integrator: '<S10>/Integrator1' */
  MPC_fmincon_B.Integrator1_f = MPC_fmincon_X.Integrator1_CSTATE_me;

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Integrator: '<S10>/Integrator2'
   *  Product: '<S10>/Product2'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S10>/Sum1'
   */
  MPC_fmincon_B.Product_g = ((MPC_fmincon_B.Unwrap21_o -
    MPC_fmincon_B.Integrator1_f) - MPC_fmincon_X.Integrator2_CSTATE_k *
    MPC_fmincon_P.Constant_Value_p * MPC_fmincon_P.Constant7_Value_o) *
    MPC_fmincon_P.Constant8_Value_g;

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<S1>/Constant8'
   *  Integrator: '<S10>/Integrator2'
   */
  MPC_fmincon_B.Product1_b3 = MPC_fmincon_P.Constant8_Value_g *
    MPC_fmincon_X.Integrator2_CSTATE_k;

  /* Product: '<S4>/Product' */
  MPC_fmincon_B.Product_f = apnd * MPC_fmincon_B.Gain3;

  /* Product: '<S5>/Product1' */
  MPC_fmincon_B.Product1_ij = b * MPC_fmincon_B.Gain3;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
  }

  /* Gain: '<S9>/Ki (% // m)  ' */
  MPC_fmincon_B.Kim = MPC_fmincon_P.Kim_Gain * rtb_Clock;
}

/* Model update function */
void MPC_fmincon_update(void)
{
  /* Update for Integrator: '<S15>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK = 0;

  /* Update for Integrator: '<S16>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_i = 0;

  /* Update for Integrator: '<S11>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_g = 0;

  /* Update for Integrator: '<S12>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_d = 0;

  /* Update for Integrator: '<S13>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_gg = 0;

  /* Update for Integrator: '<S14>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_l = 0;

  /* Update for Integrator: '<S10>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_a = 0;
  if (rtmIsMajorTimeStep(MPC_fmincon_M)) {
    rt_ertODEUpdateContinuousStates(&MPC_fmincon_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++MPC_fmincon_M->Timing.clockTick0)) {
    ++MPC_fmincon_M->Timing.clockTickH0;
  }

  MPC_fmincon_M->Timing.t[0] = rtsiGetSolverStopTime(&MPC_fmincon_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++MPC_fmincon_M->Timing.clockTick1)) {
      ++MPC_fmincon_M->Timing.clockTickH1;
    }

    MPC_fmincon_M->Timing.t[1] = MPC_fmincon_M->Timing.clockTick1 *
      MPC_fmincon_M->Timing.stepSize1 + MPC_fmincon_M->Timing.clockTickH1 *
      MPC_fmincon_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void MPC_fmincon_derivatives(void)
{
  XDot_MPC_fmincon_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_MPC_fmincon_T *) MPC_fmincon_M->derivs);

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = MPC_fmincon_B.Product;

  /* Derivatives for Integrator: '<S15>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = MPC_fmincon_B.Product1_b;

  /* Derivatives for Integrator: '<S16>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_m = MPC_fmincon_B.Product1_g;

  /* Derivatives for Integrator: '<S14>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_f = MPC_fmincon_B.Product_b;

  /* Derivatives for Integrator: '<S8>/Integrator' */
  _rtXdot->Integrator_CSTATE = MPC_fmincon_B.Integrator1_g;

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_p = MPC_fmincon_B.Product1;

  /* Derivatives for Integrator: '<S12>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_h = MPC_fmincon_B.Product1_i;

  /* Derivatives for Integrator: '<S12>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_i = MPC_fmincon_B.Product_d;

  /* Derivatives for Integrator: '<S13>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_b = MPC_fmincon_B.Product1_n;

  /* Derivatives for Integrator: '<S13>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_c = MPC_fmincon_B.Product_m;

  /* Derivatives for Integrator: '<S14>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n = MPC_fmincon_B.Product1_p;

  /* Derivatives for Integrator: '<S15>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_m = MPC_fmincon_B.Product_e;

  /* Derivatives for Integrator: '<S16>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_b = MPC_fmincon_B.Product_p;

  /* Derivatives for Integrator: '<S4>/Integrator5' */
  _rtXdot->Integrator5_CSTATE = MPC_fmincon_B.Product_f;

  /* Derivatives for Integrator: '<S5>/Integrator6' */
  _rtXdot->Integrator6_CSTATE = MPC_fmincon_B.Product1_ij;

  /* Derivatives for Integrator: '<S1>/Integrator3' */
  _rtXdot->Integrator3_CSTATE = MPC_fmincon_B.Integrator1_f;

  /* Derivatives for Integrator: '<S9>/Integrator1' */
  lsat = (MPC_fmincon_X.Integrator1_CSTATE_ng <=
          MPC_fmincon_P.Integrator1_LowerSat);
  usat = (MPC_fmincon_X.Integrator1_CSTATE_ng >=
          MPC_fmincon_P.Integrator1_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (MPC_fmincon_B.Kim > 0.0)) || (usat &&
       (MPC_fmincon_B.Kim < 0.0))) {
    _rtXdot->Integrator1_CSTATE_ng = MPC_fmincon_B.Kim;
  } else {
    /* in saturation */
    _rtXdot->Integrator1_CSTATE_ng = 0.0;
  }

  /* End of Derivatives for Integrator: '<S9>/Integrator1' */

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_me = MPC_fmincon_B.Product1_b3;

  /* Derivatives for Integrator: '<S10>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_k = MPC_fmincon_B.Product_g;
}

/* Model initialize function */
void MPC_fmincon_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S8>/HIL Initialize' */

  /* S-Function Block: MPC_fmincon/basicQCarIO/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qcar2", "0", &MPC_fmincon_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(MPC_fmincon_DW.HILInitialize_Card,
      "gyro_fs=250;gyro_rate=500;gyro_bw=125;gyro_ord=3;accel_fs=16;accel_rate=1000;accel_bw=250;accel_ord=3;temp_bw=4000;enc0_dir=0;enc1_dir=0;enc2_dir=0;steer_bias=0.05;",
      165);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(MPC_fmincon_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
      return;
    }

    if ((MPC_fmincon_P.HILInitialize_AIPStart && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &MPC_fmincon_DW.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMinimums[i1] = MPC_fmincon_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &MPC_fmincon_DW.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMaximums[i1] = MPC_fmincon_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_AIChannels, 5U,
        &MPC_fmincon_DW.HILInitialize_AIMinimums[0],
        &MPC_fmincon_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(MPC_fmincon_DW.HILInitialize_Card,
      MPC_fmincon_P.HILInitialize_DIChannels, 15U,
      MPC_fmincon_P.HILInitialize_DOChannels, 16U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
      return;
    }

    if ((MPC_fmincon_P.HILInitialize_DOStart && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_DOEnter && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &MPC_fmincon_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = MPC_fmincon_P.HILInitialize_DOInitial;
        }
      }

      result = hil_write_digital(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_DOChannels, 16U, (t_boolean *)
        &MPC_fmincon_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if (MPC_fmincon_P.HILInitialize_DOReset) {
      {
        int_T i1;
        int32_T *dw_DOStates = &MPC_fmincon_DW.HILInitialize_DOStates[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOStates[i1] = MPC_fmincon_P.HILInitialize_DOWatchdog;
        }
      }

      result = hil_watchdog_set_digital_expiration_state
        (MPC_fmincon_DW.HILInitialize_Card,
         MPC_fmincon_P.HILInitialize_DOChannels, 16U, (const t_digital_state *)
         &MPC_fmincon_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if ((MPC_fmincon_P.HILInitialize_EIPStart && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_EIPEnter && is_switching)) {
      MPC_fmincon_DW.HILInitialize_QuadratureModes[0] =
        MPC_fmincon_P.HILInitialize_EIQuadrature;
      MPC_fmincon_DW.HILInitialize_QuadratureModes[1] =
        MPC_fmincon_P.HILInitialize_EIQuadrature;
      MPC_fmincon_DW.HILInitialize_QuadratureModes[2] =
        MPC_fmincon_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_EIChannels, 3U, (t_encoder_quadrature_mode *)
        &MPC_fmincon_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }

      MPC_fmincon_DW.HILInitialize_FilterFrequency[0] =
        MPC_fmincon_P.HILInitialize_EIFrequency;
      MPC_fmincon_DW.HILInitialize_FilterFrequency[1] =
        MPC_fmincon_P.HILInitialize_EIFrequency;
      MPC_fmincon_DW.HILInitialize_FilterFrequency[2] =
        MPC_fmincon_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency
        (MPC_fmincon_DW.HILInitialize_Card,
         MPC_fmincon_P.HILInitialize_EIChannels, 3U,
         &MPC_fmincon_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if ((MPC_fmincon_P.HILInitialize_EIStart && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_EIEnter && is_switching)) {
      MPC_fmincon_DW.HILInitialize_InitialEICounts[0] =
        MPC_fmincon_P.HILInitialize_EIInitial;
      MPC_fmincon_DW.HILInitialize_InitialEICounts[1] =
        MPC_fmincon_P.HILInitialize_EIInitial;
      MPC_fmincon_DW.HILInitialize_InitialEICounts[2] =
        MPC_fmincon_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_EIChannels, 3U,
        &MPC_fmincon_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if ((MPC_fmincon_P.HILInitialize_POPStart && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;
      MPC_fmincon_DW.HILInitialize_POModeValues[0] =
        MPC_fmincon_P.HILInitialize_POModes;
      MPC_fmincon_DW.HILInitialize_POModeValues[1] =
        MPC_fmincon_P.HILInitialize_POModes;
      result = hil_set_pwm_mode(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_POChannels, 2U, (t_pwm_mode *)
        &MPC_fmincon_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }

      if (MPC_fmincon_DW.HILInitialize_POModeValues[0] == PWM_DUTY_CYCLE_MODE ||
          MPC_fmincon_DW.HILInitialize_POModeValues[0] == PWM_ONE_SHOT_MODE ||
          MPC_fmincon_DW.HILInitialize_POModeValues[0] == PWM_TIME_MODE ||
          MPC_fmincon_DW.HILInitialize_POModeValues[0] == PWM_RAW_MODE) {
        MPC_fmincon_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (MPC_fmincon_P.HILInitialize_POChannels[0]);
        MPC_fmincon_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          MPC_fmincon_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        MPC_fmincon_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (MPC_fmincon_P.HILInitialize_POChannels[0]);
        MPC_fmincon_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          MPC_fmincon_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (MPC_fmincon_DW.HILInitialize_POModeValues[1] == PWM_DUTY_CYCLE_MODE ||
          MPC_fmincon_DW.HILInitialize_POModeValues[1] == PWM_ONE_SHOT_MODE ||
          MPC_fmincon_DW.HILInitialize_POModeValues[1] == PWM_TIME_MODE ||
          MPC_fmincon_DW.HILInitialize_POModeValues[1] == PWM_RAW_MODE) {
        MPC_fmincon_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (MPC_fmincon_P.HILInitialize_POChannels[1]);
        MPC_fmincon_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          MPC_fmincon_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        MPC_fmincon_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (MPC_fmincon_P.HILInitialize_POChannels[1]);
        MPC_fmincon_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          MPC_fmincon_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(MPC_fmincon_DW.HILInitialize_Card,
          &MPC_fmincon_DW.HILInitialize_POSortedChans[0], num_duty_cycle_modes,
          &MPC_fmincon_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(MPC_fmincon_DW.HILInitialize_Card,
          &MPC_fmincon_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &MPC_fmincon_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
          return;
        }
      }

      MPC_fmincon_DW.HILInitialize_POModeValues[0] =
        MPC_fmincon_P.HILInitialize_POConfiguration;
      MPC_fmincon_DW.HILInitialize_POModeValues[1] =
        MPC_fmincon_P.HILInitialize_POConfiguration;
      MPC_fmincon_DW.HILInitialize_POAlignValues[0] =
        MPC_fmincon_P.HILInitialize_POAlignment;
      MPC_fmincon_DW.HILInitialize_POAlignValues[1] =
        MPC_fmincon_P.HILInitialize_POAlignment;
      MPC_fmincon_DW.HILInitialize_POPolarityVals[0] =
        MPC_fmincon_P.HILInitialize_POPolarity;
      MPC_fmincon_DW.HILInitialize_POPolarityVals[1] =
        MPC_fmincon_P.HILInitialize_POPolarity;
      result = hil_set_pwm_configuration(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_POChannels, 2U,
        (t_pwm_configuration *) &MPC_fmincon_DW.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &MPC_fmincon_DW.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &MPC_fmincon_DW.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if ((MPC_fmincon_P.HILInitialize_POStart && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_POEnter && is_switching)) {
      MPC_fmincon_DW.HILInitialize_POValues[0] =
        MPC_fmincon_P.HILInitialize_POInitial;
      MPC_fmincon_DW.HILInitialize_POValues[1] =
        MPC_fmincon_P.HILInitialize_POInitial;
      result = hil_write_pwm(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_POChannels, 2U,
        &MPC_fmincon_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if (MPC_fmincon_P.HILInitialize_POReset) {
      MPC_fmincon_DW.HILInitialize_POValues[0] =
        MPC_fmincon_P.HILInitialize_POWatchdog;
      MPC_fmincon_DW.HILInitialize_POValues[1] =
        MPC_fmincon_P.HILInitialize_POWatchdog;
      result = hil_watchdog_set_pwm_expiration_state
        (MPC_fmincon_DW.HILInitialize_Card,
         MPC_fmincon_P.HILInitialize_POChannels, 2U,
         &MPC_fmincon_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if ((MPC_fmincon_P.HILInitialize_OOStart && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_OOEnter && is_switching)) {
      MPC_fmincon_DW.HILInitialize_OOValues[0] =
        MPC_fmincon_P.HILInitialize_OOInitial;
      MPC_fmincon_DW.HILInitialize_OOValues[1] =
        MPC_fmincon_P.HILInitialize_OOInitial;
      result = hil_write_other(MPC_fmincon_DW.HILInitialize_Card,
        MPC_fmincon_P.HILInitialize_OOChannels, 2U,
        &MPC_fmincon_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }

    if (MPC_fmincon_P.HILInitialize_OOReset) {
      MPC_fmincon_DW.HILInitialize_OOValues[0] =
        MPC_fmincon_P.HILInitialize_OOWatchdog;
      MPC_fmincon_DW.HILInitialize_OOValues[1] =
        MPC_fmincon_P.HILInitialize_OOWatchdog;
      result = hil_watchdog_set_other_expiration_state
        (MPC_fmincon_DW.HILInitialize_Card,
         MPC_fmincon_P.HILInitialize_OOChannels, 2U,
         &MPC_fmincon_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (inverse_modulus_block): '<S8>/Unwrap 2^2' */

  /* S-Function Block: MPC_fmincon/basicQCarIO/Unwrap 2^2 (inverse_modulus_block) */
  {
    MPC_fmincon_DW.Unwrap22_FirstSample = true;
    MPC_fmincon_DW.Unwrap22_Revolutions = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S8>/Unwrap 2^24' */

  /* S-Function Block: MPC_fmincon/basicQCarIO/Unwrap 2^24 (inverse_modulus_block) */
  {
    MPC_fmincon_DW.Unwrap224_FirstSample = true;
    MPC_fmincon_DW.Unwrap224_Revolutions = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S8>/Unwrap 2^1' */

  /* S-Function Block: MPC_fmincon/basicQCarIO/Unwrap 2^1 (inverse_modulus_block) */
  {
    MPC_fmincon_DW.Unwrap21_FirstSample = true;
    MPC_fmincon_DW.Unwrap21_Revolutions = 0;
  }

  /* Start for FromWorkspace: '<Root>/From Workspace' */
  {
    static real_T pTimeValues0[] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0,
      9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0,
      21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0, 32.0,
      33.0, 34.0, 35.0, 36.0, 37.0, 38.0, 39.0, 40.0, 41.0, 42.0, 43.0, 44.0,
      45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0, 55.0, 56.0,
      57.0, 58.0, 59.0, 60.0, 61.0, 62.0, 63.0, 64.0, 65.0, 66.0, 67.0, 68.0,
      69.0, 70.0, 71.0, 72.0, 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0,
      81.0, 82.0, 83.0, 84.0, 85.0, 86.0, 87.0, 88.0, 89.0, 90.0, 91.0, 92.0,
      93.0, 94.0, 95.0, 96.0, 97.0, 98.0, 99.0, 100.0, 101.0, 102.0, 103.0,
      104.0, 105.0, 106.0, 107.0, 108.0, 109.0, 110.0, 111.0, 112.0, 113.0,
      114.0, 115.0, 116.0, 117.0, 118.0, 119.0, 120.0, 121.0, 122.0, 123.0,
      124.0, 125.0, 126.0, 127.0, 128.0, 129.0, 130.0, 131.0, 132.0, 133.0,
      134.0, 135.0, 136.0, 137.0, 138.0, 139.0, 140.0, 141.0, 142.0, 143.0,
      144.0, 145.0, 146.0, 147.0, 148.0, 149.0, 150.0, 151.0, 152.0, 153.0,
      154.0, 155.0, 156.0, 157.0, 158.0, 159.0, 160.0, 161.0, 162.0, 163.0,
      164.0, 165.0, 166.0, 167.0, 168.0, 169.0, 170.0, 171.0, 172.0, 173.0,
      174.0, 175.0, 176.0, 177.0, 178.0, 179.0, 180.0, 181.0, 182.0, 183.0,
      184.0, 185.0, 186.0, 187.0, 188.0, 189.0, 190.0, 191.0, 192.0, 193.0,
      194.0, 195.0, 196.0, 197.0, 198.0, 199.0, 200.0, 201.0, 202.0, 203.0,
      204.0, 205.0, 206.0, 207.0, 208.0, 209.0, 210.0, 211.0, 212.0, 213.0,
      214.0, 215.0, 216.0, 217.0, 218.0, 219.0, 220.0, 221.0, 222.0, 223.0,
      224.0, 225.0, 226.0, 227.0, 228.0, 229.0, 230.0, 231.0, 232.0, 233.0,
      234.0, 235.0, 236.0, 237.0, 238.0, 239.0, 240.0, 241.0, 242.0, 243.0,
      244.0, 245.0, 246.0, 247.0, 248.0, 249.0, 250.0, 251.0, 252.0, 253.0,
      254.0, 255.0, 256.0, 257.0, 258.0, 259.0, 260.0, 261.0, 262.0, 263.0,
      264.0, 265.0, 266.0, 267.0, 268.0, 269.0, 270.0, 271.0, 272.0, 273.0,
      274.0, 275.0, 276.0, 277.0, 278.0, 279.0, 280.0, 281.0, 282.0, 283.0,
      284.0, 285.0, 286.0, 287.0, 288.0, 289.0, 290.0, 291.0, 292.0, 293.0,
      294.0, 295.0, 296.0, 297.0, 298.0, 299.0, 300.0, 301.0, 302.0, 303.0,
      304.0, 305.0, 306.0, 307.0, 308.0, 309.0, 310.0, 311.0, 312.0, 313.0,
      314.0, 315.0, 316.0, 317.0, 318.0, 319.0, 320.0, 321.0, 322.0, 323.0,
      324.0, 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0,
      334.0, 335.0, 336.0, 337.0, 338.0, 339.0, 340.0, 341.0, 342.0, 343.0,
      344.0, 345.0, 346.0, 347.0, 348.0, 349.0, 350.0, 351.0, 352.0, 353.0,
      354.0, 355.0, 356.0, 357.0, 358.0, 359.0, 360.0, 361.0, 362.0, 363.0,
      364.0, 365.0, 366.0, 367.0, 368.0, 369.0, 370.0, 371.0, 372.0, 373.0,
      374.0, 375.0, 376.0, 377.0, 378.0, 379.0, 380.0, 381.0, 382.0, 383.0,
      384.0, 385.0, 386.0, 387.0, 388.0, 389.0, 390.0, 391.0, 392.0, 393.0,
      394.0, 395.0, 396.0, 397.0, 398.0, 399.0, 400.0, 401.0, 402.0, 403.0,
      404.0, 405.0, 406.0, 407.0, 408.0, 409.0, 410.0, 411.0, 412.0, 413.0,
      414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0, 421.0, 422.0, 423.0,
      424.0, 425.0, 426.0, 427.0, 428.0, 429.0, 430.0, 431.0, 432.0, 433.0,
      434.0, 435.0, 436.0, 437.0, 438.0, 439.0, 440.0, 441.0, 442.0, 443.0,
      444.0, 445.0, 446.0, 447.0, 448.0, 449.0, 450.0, 451.0, 452.0, 453.0,
      454.0, 455.0, 456.0, 457.0, 458.0, 459.0, 460.0, 461.0, 462.0, 463.0,
      464.0, 465.0, 466.0, 467.0, 468.0, 469.0, 470.0, 471.0, 472.0, 473.0,
      474.0, 475.0, 476.0, 477.0, 478.0, 479.0, 480.0, 481.0, 482.0, 483.0,
      484.0, 485.0, 486.0, 487.0, 488.0, 489.0, 490.0, 491.0, 492.0, 493.0,
      494.0, 495.0, 496.0, 497.0, 498.0, 499.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.10020039879759519,
      0.20040079759519039, 0.3006011963927856, 0.40080159519038078,
      0.501001993987976, 0.60120239278557119, 0.70140279158316632,
      0.80160319038076155, 0.90180358917835679, 1.0020039879759519,
      1.1022043867735472, 1.2024047855711424, 1.3026051843687376,
      1.4028055831663326, 1.5030059819639279, 1.6032063807615231,
      1.7034067795591183, 1.8036071783567136, 1.9038075771543088,
      2.0040079759519038, 2.1042083747494993, 2.2044087735470943,
      2.3046091723446893, 2.4048095711422848, 2.5050099699398802,
      2.6052103687374752, 2.7054107675350703, 2.8056111663326653,
      2.9058115651302607, 3.0060119639278557, 3.1062123627254508,
      3.2064127615230462, 3.3066131603206417, 3.4068135591182367,
      3.5070139579158317, 3.6072143567134272, 3.7074147555110226,
      3.8076151543086176, 3.9078155531062122, 4.0080159519038077,
      4.1082163507014036, 4.2084167494989986, 4.3086171482965936,
      4.4088175470941886, 4.5090179458917836, 4.6092183446893786,
      4.7094187434869736, 4.8096191422845695, 4.9098195410821646,
      5.0100199398797605, 5.1102203386773546, 5.2104207374749505,
      5.3106211362725455, 5.4108215350701405, 5.5110219338677355,
      5.6112223326653305, 5.7114227314629264, 5.8116231302605215,
      5.9118235290581165, 6.0120239278557115, 6.1122243266533074,
      6.2124247254509015, 6.3126251242484974, 6.4128255230460924,
      6.5130259218436883, 6.6132263206412834, 6.7134267194388775,
      6.8136271182364734, 6.9138275170340684, 7.0140279158316634,
      7.1142283146292584, 7.2144287134268543, 7.3146291122244493,
      7.4148295110220452, 7.5150299098196394, 7.6152303086172353,
      7.71543070741483, 7.8156311062124244, 7.91583150501002, 8.0160319038076153,
      8.11623230260521, 8.2164327014028071, 8.3166331002004, 8.4168334989979972,
      8.5170338977955922, 8.6172342965931872, 8.7174346953907822,
      8.8176350941883772, 8.9178354929859722, 9.0180358917835672,
      9.1182362905811623, 9.2184366893787573, 9.3186370881763541,
      9.4188374869739473, 9.5190378857715441, 9.6192382845691391,
      9.7194386833667341, 9.81963908216433, 9.9198394809619241,
      10.020039879759521, 10.120240278557114, 10.220440677354709,
      10.320641076152306, 10.420841474949901, 10.521041873747494,
      10.621242272545091, 10.721442671342686, 10.821643070140281,
      10.921843468937876, 11.022043867735471, 11.122244266533068,
      11.222444665330661, 11.322645064128256, 11.422845462925853,
      11.523045861723448, 11.623246260521043, 11.723446659318638,
      11.823647058116233, 11.92384745691383, 12.024047855711423,
      12.124248254509018, 12.224448653306615, 12.324649052104208,
      12.424849450901803, 12.5250498496994, 12.625250248496995,
      12.72545064729459, 12.825651046092185, 12.92585144488978,
      13.026051843687377, 13.12625224248497, 13.226452641282567,
      13.326653040080162, 13.426853438877755, 13.527053837675352,
      13.627254236472947, 13.727454635270542, 13.827655034068137,
      13.927855432865732, 14.028055831663327, 14.128256230460924,
      14.228456629258517, 14.328657028056114, 14.428857426853709,
      14.529057825651302, 14.629258224448899, 14.729458623246494,
      14.82965902204409, 14.929859420841684, 15.030059819639279,
      15.130260218436876, 15.230460617234471, 15.330661016032064,
      15.430861414829661, 15.531061813627256, 15.631262212424849,
      15.731462611222446, 15.831663010020041, 15.931863408817637,
      16.032063807615231, 16.132264206412827, 16.232464605210421,
      16.332665004008017, 16.432865402805614, 16.533065801603207,
      16.6332662004008, 16.733466599198398, 16.833666997995994,
      16.933867396793588, 17.034067795591184, 17.134268194388778,
      17.234468593186374, 17.334668991983968, 17.434869390781564,
      17.535069789579161, 17.635270188376754, 17.735470587174348,
      17.835670985971944, 17.935871384769541, 18.036071783567134,
      18.136272182364731, 18.236472581162325, 18.336672979959921,
      18.436873378757515, 18.537073777555111, 18.637274176352708,
      18.7374745751503, 18.837674973947895, 18.937875372745491,
      19.038075771543088, 19.138276170340681, 19.238476569138278,
      19.338676967935871, 19.438877366733468, 19.539077765531065,
      19.639278164328658, 19.739478563126255, 19.839678961923848,
      19.939879360721442, 20.040079759519042, 20.140280158316635,
      20.240480557114228, 20.340680955911825, 20.440881354709418,
      20.541081753507015, 20.641282152304612, 20.741482551102205,
      20.841682949899802, 20.941883348697395, 21.042083747494988,
      21.142284146292589, 21.242484545090182, 21.342684943887775,
      21.442885342685372, 21.543085741482965, 21.643286140280562,
      21.743486539078159, 21.843686937875752, 21.943887336673349,
      22.044087735470942, 22.144288134268535, 22.244488533066136,
      22.344688931863729, 22.444889330661322, 22.545089729458919,
      22.645290128256512, 22.745490527054113, 22.845690925851706,
      22.9458913246493, 23.046091723446896, 23.146292122244489,
      23.246492521042086, 23.346692919839683, 23.446893318637276,
      23.547093717434869, 23.647294116232466, 23.747494515030059,
      23.847694913827659, 23.947895312625253, 24.048095711422846,
      24.148296110220443, 24.248496509018036, 24.348696907815633,
      24.44889730661323, 24.549097705410823, 24.649298104208416,
      24.749498503006013, 24.849698901803606, 24.949899300601206,
      25.0500996993988, 25.150300098196393, 25.25050049699399,
      25.350700895791583, 25.45090129458918, 25.551101693386777,
      25.65130209218437, 25.751502490981963, 25.85170288977956,
      25.951903288577157, 26.052103687374753, 26.152304086172347,
      26.25250448496994, 26.352704883767537, 26.452905282565133,
      26.553105681362727, 26.653306080160323, 26.753506478957917,
      26.85370687775551, 26.953907276553107, 27.054107675350703,
      27.1543080741483, 27.254508472945894, 27.354708871743487,
      27.454909270541084, 27.55510966933868, 27.655310068136274,
      27.75551046693387, 27.855710865731464, 27.955911264529057,
      28.056111663326654, 28.15631206212425, 28.256512460921847,
      28.35671285971944, 28.456913258517034, 28.55711365731463,
      28.657314056112227, 28.757514454909821, 28.857714853707417,
      28.957915252505011, 29.058115651302604, 29.158316050100204,
      29.258516448897797, 29.358716847695394, 29.458917246492987,
      29.559117645290581, 29.659318044088181, 29.759518442885774,
      29.859718841683367, 29.959919240480964, 30.060119639278557,
      30.160320038076151, 30.260520436873751, 30.360720835671344,
      30.460921234468941, 30.561121633266534, 30.661322032064128,
      30.761522430861728, 30.861722829659321, 30.961923228456914,
      31.062123627254511, 31.162324026052104, 31.262524424849698,
      31.362724823647298, 31.462925222444891, 31.563125621242488,
      31.663326020040081, 31.763526418837674, 31.863726817635275,
      31.963927216432868, 32.064127615230461, 32.164328014028058,
      32.264528412825655, 32.364728811623252, 32.464929210420841,
      32.565129609218438, 32.665330008016035, 32.765530406813625,
      32.865730805611229, 32.965931204408818, 33.066131603206415,
      33.166332002004012, 33.2665324008016, 33.3667327995992, 33.466933198396795,
      33.567133597194385, 33.667333995991989, 33.767534394789585,
      33.867734793587175, 33.967935192384772, 34.068135591182369,
      34.168335989979958, 34.268536388777555, 34.368736787575152,
      34.468937186372749, 34.569137585170338, 34.669337983967935,
      34.769538382765539, 34.869738781563129, 34.969939180360726,
      35.070139579158322, 35.170339977955912, 35.270540376753509,
      35.370740775551106, 35.470941174348695, 35.571141573146292,
      35.671341971943889, 35.771542370741479, 35.871742769539082,
      35.971943168336679, 36.072143567134269, 36.172343965931866,
      36.272544364729463, 36.372744763527052, 36.472945162324649,
      36.573145561122246, 36.673345959919843, 36.773546358717432,
      36.873746757515029, 36.973947156312633, 37.074147555110223,
      37.174347953907819, 37.274548352705416, 37.374748751503006,
      37.4749491503006, 37.5751495490982, 37.675349947895789, 37.775550346693386,
      37.875750745490983, 37.97595114428858, 38.076151543086176,
      38.176351941883773, 38.276552340681363, 38.37675273947896,
      38.476953138276556, 38.577153537074146, 38.677353935871743,
      38.77755433466934, 38.877754733466936, 38.977955132264526,
      39.07815553106213, 39.178355929859727, 39.278556328657316,
      39.378756727454913, 39.47895712625251, 39.5791575250501, 39.6793579238477,
      39.779558322645293, 39.879758721442883, 39.97995912024048,
      40.080159519038084, 40.180359917835673, 40.28056031663327,
      40.380760715430867, 40.480961114228457, 40.581161513026053,
      40.68136191182365, 40.78156231062124, 40.881762709418837,
      40.981963108216434, 41.08216350701403, 41.182363905811627,
      41.282564304609224, 41.382764703406821, 41.48296510220441,
      41.583165501002007, 41.683365899799604, 41.783566298597194,
      41.88376669739479, 41.983967096192387, 42.084167494989977,
      42.184367893787574, 42.284568292585178, 42.384768691382767,
      42.484969090180364, 42.585169488977961, 42.685369887775551,
      42.785570286573147, 42.885770685370744, 42.985971084168334,
      43.086171482965931, 43.186371881763527, 43.286572280561124,
      43.386772679358721, 43.486973078156318, 43.587173476953915,
      43.687373875751504, 43.7875742745491, 43.8877746733467, 43.987975072144287,
      44.088175470941884, 44.188375869739481, 44.288576268537071,
      44.388776667334675, 44.488977066132271, 44.589177464929861,
      44.689377863727458, 44.789578262525055, 44.889778661322644,
      44.989979060120241, 45.090179458917838, 45.190379857715428,
      45.290580256513024, 45.390780655310621, 45.490981054108225,
      45.591181452905815, 45.691381851703412, 45.791582250501008,
      45.8917826492986, 45.991983048096195, 46.092183446893792,
      46.192383845691381, 46.292584244488978, 46.392784643286575,
      46.492985042084172, 46.593185440881768, 46.693385839679365,
      46.793586238476955, 46.893786637274552, 46.993987036072149,
      47.094187434869738, 47.194387833667335, 47.294588232464932,
      47.394788631262522, 47.494989030060118, 47.595189428857722,
      47.695389827655319, 47.795590226452909, 47.895790625250505,
      47.9959910240481, 48.096191422845692, 48.196391821643289,
      48.296592220440886, 48.396792619238475, 48.496993018036072,
      48.597193416833669, 48.697393815631266, 48.797594214428862,
      48.897794613226459, 48.997995012024049, 49.098195410821646,
      49.198395809619242, 49.298596208416832, 49.398796607214429,
      49.498997006012026, 49.599197404809615, 49.699397803607212,
      49.799598202404816, 49.899798601202413, 49.999999, 0.0,
      0.02360260869686661, 0.04754455435617902, 0.0717931574222196,
      0.096316950529728426, 0.12108567850390346, 0.14607029836040034,
      0.1712429793053323, 0.19657710273527063, 0.22204726223724428,
      0.24762926358873985, 0.27330012475770166, 0.29903807590253206,
      0.32482255937209076, 0.35063422970569558, 0.37645495363312192,
      0.40226781007460322, 0.42805709014082988, 0.45380829713295107,
      0.47950814654257318, 0.50514456605176006, 0.5307066955330344,
      0.55618488704937508, 0.58157070485422013, 0.60685692539146463,
      0.63203753729546164, 0.6571077413910219, 0.68206395069341375,
      0.70690379040836371, 0.7316260979320558, 0.75623092285113169,
      0.78071952694269031, 0.80509438417429025, 0.82935918070394554,
      0.85351881488012893, 0.87757939724177159, 0.9015482505182616,
      0.925433909629445, 0.94924612168562539, 0.97299584598756428,
      0.99669525402648174, 1.0203577294840542, 1.043997865690419,
      1.067631138635913, 1.0912727033723963, 1.1149369127941273,
      1.138637307872296, 1.1623866176550166, 1.1861967592673346,
      1.2100788379112215, 1.234043146865579, 1.258099167486235,
      1.2822555692059479, 1.3065202095344011, 1.3309001340582092,
      1.3554015764409131, 1.3800299584229831, 1.4047898898218167,
      1.4296851685317404, 1.4547187805240074, 1.4798928998468013,
      1.5052088886252322, 1.5306672970613391, 1.5562678634340887,
      1.5820095140993757, 1.6078903634900246, 1.6339077141157856,
      1.6600580565633387, 1.6863370694962923, 1.7127396196551812,
      1.7392597618574714, 1.7658907389975531, 1.792624982046749,
      1.8194541100533057, 1.8463689301424013, 1.8733594375161406,
      1.9004148154535567, 1.9275234353106105, 1.9546728565201923,
      1.9818498265921203, 2.0090402811131396, 2.0362293437469234,
      2.0634013262340769, 2.0905397283921263, 2.1176272605912212,
      2.1446462578844252, 2.1715792757447492, 2.1984091762291174,
      2.2251191280143252, 2.2516926063970422, 2.278113393293812,
      2.3043655772410516, 2.3304335533950531, 2.35630202353198,
      2.3819559960478727, 2.4073807859586411, 2.4325620149000744,
      2.4574856111278294, 2.4821378095174422, 2.5065051515643182,
      2.5305744853837404, 2.554332965710862, 2.5777680539007126,
      2.6008675179281955, 2.623619432388085, 2.6460121784950315,
      2.66803444408356, 2.689675223608067, 2.7109238181428243,
      2.7317698353819746, 2.75220318963954, 2.77221410184941, 2.7917930995653522,
      2.8109310169610082, 2.8296189948298891, 2.8478484805853834,
      2.8656112282607515, 2.8828992985091304, 2.8997050586035273,
      2.9160211824368258, 2.9318406505217802, 2.9471567499910227,
      2.9619630745970573, 2.9762535247122597, 2.9900223073288807,
      3.0032639361460438, 3.0159732855082337, 3.0281458902008787,
      3.0397781190995867, 3.0508671822170843, 3.0614111307032283,
      3.0714088568449989, 3.0808600940665061, 3.0897654169289819,
      3.0981262411307831, 3.1059448235073974, 3.1132242620314332,
      3.1199684958126297, 3.126182305097847, 3.1318713112710745,
      3.1370419768534274, 3.141701605503143, 3.1458583420155883,
      3.1495211723232561, 3.1526999234957631, 3.1554052637398526,
      3.1576487023993929, 3.1594425899553817, 3.1608001180259366,
      3.1617353193663065, 3.1622630678688646, 3.1623990785631086,
      3.1621599076156617, 3.1615629523302764, 3.1606264511478268,
      3.1593694836463153, 3.1578119705408705, 3.1559746736837448,
      3.1538791960643189, 3.1515479818090966, 3.1490043161817112,
      3.1462723255829186, 3.1433769775506022, 3.1403440807597689,
      3.1372002850225544, 3.1339730812882212, 3.1306908016431514,
      3.1273826000875666, 3.1240777977330527, 3.1208045239272324,
      3.1175894146794811, 3.1144576114594007, 3.1114327611968178,
      3.1085370162817858, 3.1057910345645832, 3.1032139793557141,
      3.1008235194259068, 3.0986358290061178, 3.0966655877875273,
      3.094925980921543, 3.093428699019797, 3.0921839381541458,
      3.0912003998566742, 3.0904852911196885, 3.0900443243957283,
      3.0898817175975481, 3.0900001940981383, 3.0904009827307077,
      3.0910838177886952, 3.0920469390257614, 3.0932870916557982,
      3.0947995263529156, 3.0965779992514562, 3.098614771945984,
      3.1009006114912903, 3.1034247904023911, 3.1061750866545292,
      3.1091377836831713, 3.1122976703840122, 3.1156380411129705,
      3.11914069568619, 3.1227859393800426, 3.1265525829311218,
      3.1304179425362504, 3.1343578398524765, 3.1383466019970716,
      3.1423570615475347, 3.1463605565415893, 3.1503269304822812,
      3.1542246778868, 3.1580222074809856, 3.1616888954367357,
      3.1651951599991128, 3.1685124614863436, 3.1716133022898183,
      3.1744712268740907, 3.1770608217768812, 3.1793577156090733,
      3.1813385790547137, 3.1829811248710151, 3.1842641078883531,
      3.1851673250102683, 3.1856716152134652, 3.1857588595478137,
      3.1854119811363439, 3.184614945175257, 3.1833527589339132,
      3.1816114717548358, 3.1793781750537184, 3.176641002319414,
      3.1733891291139407, 3.1696127730724815, 3.1653031939033851,
      3.1604526933881592, 3.1550546153814829, 3.1491033458111937,
      3.1425943126782983, 3.1355239860569624, 3.1278898780945186,
      3.1196905430114654, 3.110925577101463, 3.1015956187313369,
      3.0917023483410744, 3.0812484884438329, 3.0702378036259286,
      3.0586751005468433, 3.0465662279392252, 3.0339180766088836,
      3.0207385794347932, 3.0070367113690937, 2.9928224864003039,
      2.97810672675102, 2.9629003643892182, 2.9472142102206158,
      2.9310589510516483, 2.9144451495894668, 2.8973832444419361,
      2.8798835501176407, 2.8619562570258767, 2.8436114314766603,
      2.8248590156807203, 2.8057088277495037, 2.7861705616951733,
      2.766253787430605, 2.7459679507693933, 2.7253223734258478,
      2.7043262530149947, 2.6829886630525772, 2.6613185529550494,
      2.6393247480395856, 2.6170159495240761, 2.5944007345271256,
      2.5714875560680563, 2.5482847430669038, 2.5248005003444214,
      2.5010429086220771, 2.4770199245220583, 2.4527393805672637,
      2.4282089851813105, 2.4034363226885325, 2.3784288533139741,
      2.3531939131834032, 2.3277387143233, 2.3020703446608595,
      2.2761957680239941, 2.2501218241413317, 2.2238552286422171,
      2.1974025730567095, 2.1707703248155839, 2.1439648272503335,
      2.1169922995931656, 2.089858836977001, 2.0625704164416092,
      2.0351329817026538, 2.0075525448212383, 1.9798351979188609,
      1.9519871131778381, 1.9240145428413029, 1.8959238192131997,
      1.8677213546582838, 1.8394136416021298, 1.8110072525311234,
      1.7825088399924631, 1.7539251365941659, 1.725262955005058,
      1.6965291879547837, 1.6677308082337985, 1.6388748686933696,
      1.6099685022455859, 1.581018921863343, 1.5520334205803539,
      1.5230193714911442, 1.4939842277510553, 1.4649355225762379,
      1.4358808692436646, 1.406827961091115, 1.377784571517187,
      1.3487585539812899, 1.3197578420036453, 1.2907904491652955,
      1.2618644691080916, 1.2329880755346974, 1.2041695222085953,
      1.1754171429540783, 1.1467393516562567, 1.1181446422610493,
      1.0896415887751931, 1.0612388452662413, 1.0329451458625518,
      1.00476930475331, 0.97672021618850258, 0.94880685447893742,
      0.92103827399623617, 0.8934236091136587, 0.86597205935326671,
      0.83869282245825283, 0.81159506214172372, 0.7846879071398678,
      0.757980451211938, 0.731481753140255, 0.705200836730215,
      0.67914669081028534, 0.65332826923199816, 0.62775449086996238,
      0.602434239621855, 0.57737636440842577, 0.55258967917349,
      0.52808296288393719, 0.50386495952973254, 0.47994437812390134,
      0.45632989270254681, 0.43303014232484249, 0.41005373107302812,
      0.38740922805241851, 0.3651051673913992, 0.343150048241422,
      0.32155233477701378, 0.30032045619577197, 0.279462806718359,
      0.25898774558851667, 0.23890359707305306, 0.21921865046184377,
      0.19994116006784013, 0.18107934522706312, 0.16264139029860106,
      0.14463544466461653, 0.12706962273034186, 0.10995200392408087,
      0.093290632697204584, 0.07709351852415719, 0.061368635902456906,
      0.046123924352685711, 0.031367288418500859, 0.017106597666630221,
      0.0033496866868690488, -0.0098956557966513176, -0.022621955252841795,
      -0.034822514605850931, -0.046491497586213709, -0.057623928865305846,
      -0.068215694055342876, -0.078263539709379978, -0.087765073321311629,
      -0.096718763325873924, -0.10512393909864075, -0.1129807909560257,
      -0.12029037015528403, -0.12705458889450891, -0.13327622031263403,
      -0.13895889848943224, -0.14410711844551768, -0.14872623614234215,
      -0.15282246848219835, -0.15640289330821916, -0.15947544940437633,
      -0.16204893649548169, -0.16413301524718704, -0.16573820726598382,
      -0.16687589509920273, -0.16755832223501504, -0.16779859310243142,
      -0.167610673071302, -0.16700938845231711, -0.1660104264970067,
      -0.16463033539774041, -0.16288652428772754, -0.16079726324101745,
      -0.1583816832724991, -0.155659776337901, -0.15265239533379169,
      -0.14938125409757938, -0.14586892740751212, -0.14213885098267759,
      -0.13821532148300328, -0.13412349650925676, -0.12988939460304441,
      -0.12553989517851988, -0.1211025748631917, -0.11660457592929514,
      -0.11207181965966238, -0.10752896365408313, -0.10299940182930339,
      -0.098505264419027391, -0.094067417973917558, -0.089705465361591935,
      -0.08543774576662716, -0.081281334690557358, -0.077252043951873087,
      -0.073364421686023237, -0.069631752345414147, -0.0660660566994086,
      -0.062678091834327737, -0.059477351153449765, -0.05647206437701037,
      -0.053669197542202569, -0.05107445300317686, -0.048692269431041227,
      -0.046525821813860613, -0.044577021456657942, -0.04284651598141339,
      -0.041333689327064216, -0.04003666174950548, -0.038952289821589589,
      -0.03807616643312605, -0.037402620790882239, -0.036924718418582643,
      -0.036634261156909195, -0.036521787163501296, -0.036576570912955735,
      -0.036786623196826684, -0.037138691123625778, -0.037618258118821982,
      -0.038209543924841792, -0.038895504601069018, -0.039657832523844957,
      -0.04047695638646806, -0.041332041199194612, -0.042200988289237969,
      -0.043060450392623774, -0.043886575380061105, -0.044656866464984596,
      -0.045350687588516125, -0.045949267348590277, -0.046435698999953812,
      -0.046794940454166052, -0.047013814279598706, -0.047081007701435973,
      -0.046987072601674409, -0.0467244255191231, -0.046287347649403489,
      -0.045671984844949554, -0.044876347615007528, -0.043900311125636242,
      -0.042745615199707009, -0.041415864316903313, -0.03991652761372122,
      -0.03825493888346946, -0.036440296576269036, -0.034483663799053058,
      -0.032397968315567516, -0.030198002546370846, -0.027900423568833432,
      -0.025523753117138562, -0.023088377582281997, -0.020616548012071391,
      -0.018132380111127396, -0.015661854240882876, -0.01323281541958317,
      -0.010874973322286026, -0.0086199022808617909, -0.0065010412839927945,
      -0.0045536939771742583, -0.0028150286627138, -0.00132407829973111,
      -0.00012174050415870043, 0.00074922245125856721, 0.0012441836369635733,
      0.0013166514665865459, 0.00091826969694535168, -1.1825719544609839E-6, 3.0,
      2.9990806866852404, 2.9986824470102635, 2.9987550587299916,
      2.9992501643235219, 3.0001212709941303, 3.001323750669266,
      3.0028148400005534, 3.0045536403637958, 3.0065011178589724,
      3.0086201033102387, 3.0108752922659239, 3.0132332449985348,
      3.0156623865047534, 3.0181330065054417, 3.020617259445634,
      3.0230891644945408, 3.0255246055455496, 3.0279013312162255,
      3.030198954848307, 3.03239895450771, 3.0344846729845285, 3.03644131779303,
      3.0382559611716569, 3.0399175400830307, 3.041416856213949,
      3.0427465759753849, 3.043901230502486, 3.0448772156545787,
      3.0456727920151634, 3.0462880848919176, 3.046725084316694,
      3.0469876450455242, 3.0470814865586116, 3.0470141930603396,
      3.0467952134792662, 3.0464358614681251, 3.0459493154038273,
      3.0453506183874586, 3.0446566782442805, 3.0438862675237353,
      3.0430600234994336, 3.0422004442402297, 3.0413313832134237,
      3.0404761889889391, 3.039656961461549, 3.0388945367572657,
      3.0382084872333253, 3.0376171214781973, 3.0371374843115846,
      3.0367853567844203, 3.0365752561788657, 3.0365204360083182,
      3.0366328860174021, 3.0369233321819746, 3.0374012367091248,
      3.0380747980371714, 3.0389509508356638, 3.0400353660053865,
      3.04133245067835, 3.0428453482177997, 3.0445759382182094,
      3.0465248365052866, 3.0486913951359687, 3.0510737023984236,
      3.0536685828120516, 3.0564715971274841, 3.0594770423265811,
      3.0626779516224385, 3.0660660944593778, 3.0696319765129583,
      3.0733648396899627, 3.0772526621284122, 3.0812821581975527,
      3.085438778497867, 3.0897067098610651, 3.0940688753500893,
      3.0985069342591127, 3.1030012821135409, 3.1075310506700107,
      3.1120741079163885, 3.1166070580717706, 3.1211052415864886,
      3.1255427351421021, 3.1298923943472, 3.1341266404374259,
      3.1382185919635663, 3.1421422284723848, 3.1458723905749411,
      3.1493847799465846, 3.1526559593269621, 3.1556633525200124,
      3.1583852443939713, 3.1608007808813627, 3.1628899689790111,
      3.16463367674803, 3.1660136333138293, 3.1670124288661121,
      3.1676135146588758, 3.1678012030104097, 3.1675606673033005,
      3.1668779419844255, 3.165739922564959, 3.1641343656203667,
      3.1620498887904094, 3.1594759707791411, 3.1564029513549108,
      3.1528220313503605, 3.1487252726624266, 3.144105598252338,
      3.1389567921456214, 3.1332734994320925, 3.1270512262658636,
      3.1202863398653418, 3.1129760685132255, 3.1051185015565084,
      3.0967125894064789, 3.0877581435387169, 3.0782558364931, 3.068207201873796,
      3.0576146343492692, 3.0464813896522753, 3.0348115845798667,
      3.0226101969933885, 3.0098830658184785, 2.9966368909105996,
      2.982879149680683, 2.9686176336921091, 2.9538601802458895,
      2.9386146614879727, 2.9228889844092518, 2.9066910908455585,
      2.8900289574776696, 2.8729105958313004, 2.8553440522771076,
      2.83733740803069, 2.8188987791525877, 2.8000363165482831,
      2.7807582059681986, 2.7610726680076993, 2.7409879581070897,
      2.7205123665516173, 2.6996542184714714, 2.6784218738417809,
      2.6568237274826179, 2.6348682090589941, 2.6125637830808639,
      2.5899189489031236, 2.5669422407256079, 2.5436422275930974,
      2.5200275133953109, 2.496106736866909, 2.4718885715874941,
      2.4473817259816104, 2.4225949433187419, 2.3975370017133169,
      2.3722167141247024, 2.3466429283572059, 2.3208245270600814,
      2.294770427727518, 2.2684895826986522, 2.2419909791575559,
      2.215283639133248, 2.1883766194996834, 2.1612790119757617,
      2.1339999431253265, 2.1065485743571557, 2.0789341009802498,
      2.0511657200237345, 2.0232525634553014, 1.9952036833604105,
      1.9670280518832557, 1.9387345612267524, 1.9103320236525481,
      1.8818291714810109, 1.8532346570912412, 1.8245570529210635,
      1.7958048514670295, 1.7669864652844161, 1.73811022698723,
      1.7091843892482044, 1.6802171247987951, 1.6512165264291907,
      1.622190606988301, 1.5931472993837681, 1.5640944565819541,
      1.5350398516079551, 1.5059911775455899, 1.4769560475374042,
      1.4479419947846697, 1.4189564725473882, 1.3900068541442869,
      1.3611004329528171, 1.3322444224091612, 1.3034459560082245,
      1.2747120873036408, 1.2460497899077727, 1.2174659574917048,
      1.1889674037852538, 1.1605608625769592, 1.132252987714087,
      1.1040503531026358, 1.075959452707324, 1.0479867005515993,
      1.0201384307176389, 0.992420897346342, 0.96484027463733779,
      0.93740265684898283, 0.91011405829876646, 0.88298042506412566,
      0.85600773653183071, 0.82920209006873324, 0.80256970702111541,
      0.77611693271467985, 0.749850236454554, 0.72377621152529392,
      0.69790157519087725, 0.67223316869470917, 0.6467779572596204,
      0.6215430300878636, 0.59653560036112085, 0.57176300524049639,
      0.54723270586651884, 0.522952287359147, 0.49892945881775963,
      0.47517205332116219, 0.451688027927587, 0.42848546367468771,
      0.40557256557954918, 0.38295766263867603, 0.36064920782799925,
      0.33865577810287723, 0.31698607439809046, 0.29564892162784678,
      0.27465326868577927, 0.25400818844494472, 0.23372287775782533,
      0.21380665745632998, 0.19426897235178991, 0.17511939123496595,
      0.15636760687604004, 0.13802343602462008, 0.12009681940974101,
      0.10259782173986057, 0.085536631702863214, 0.068923561966058908,
      0.052769049176181262, 0.037083653959389493, 0.021878060921269139,
      0.007163078646828698, -0.0070503633357182132, -0.020751445314481535,
      -0.033930155753147589, -0.046577522055833681, -0.058685613603557604,
      -0.070247541754233922, -0.081257459842675545, -0.091710563180594742,
      -0.10160308905660198, -0.1109323167362052, -0.11969656746181143,
      -0.12789520445272537, -0.13552863290515091, -0.14259829999219009,
      -0.14910669486384284, -0.15505734864700757, -0.16045483444548156,
      -0.16530476733995966, -0.16961380438803569, -0.17338964462420167,
      -0.17664102905984788, -0.17937774068326284, -0.18161060445963337,
      -0.18335148733104512, -0.18461329821648176, -0.18540998801182509,
      -0.18575654958985574, -0.18566901780025238, -0.18516446946959206,
      -0.18426102340135028, -0.1829778403759007, -0.18133512315051545,
      -0.17935411645936516, -0.17705710701351859, -0.17446742350094294,
      -0.1716094365865036, -0.16850855891196456, -0.16519124509598818,
      -0.16168499173413475, -0.15801833739886342, -0.15422086263953139,
      -0.15032318998239402, -0.14635690931044432, -0.142353524691601,
      -0.13834319123538732, -0.13435456954596045, -0.13041482571701377,
      -0.12654963133177791, -0.12278316346301901, -0.11913810467303956,
      -0.11563564301367879, -0.11229547202631193, -0.10913579074185041,
      -0.10617330368074274, -0.10342322085297281, -0.10089925775806138,
      -0.0986136353850655, -0.09657708021257809, -0.094798824208729246,
      -0.093286604831184616, -0.092046665027146535, -0.091083753233353534,
      -0.090401123376080583, -0.090000534871138876, -0.089882252623875961,
      -0.090045047029175818, -0.090486193971458573, -0.091201474824680745,
      -0.09218517645233533, -0.093430091207451368, -0.094927516932594352,
      -0.096667256959866318, -0.098637620110905336, -0.10082542069688581,
      -0.10321597851851848, -0.10579311886605079, -0.10853917251926604,
      -0.11143497574748382, -0.11445987030956087, -0.11759170345388877,
      -0.12080682791839695, -0.12408010193055032, -0.12738488920735,
      -0.13069306015671345, -0.13397529344208167, -0.13720243484767367,
      -0.14034615209060985, -0.14337895404528017, -0.14627419074334588,
      -0.14900605337373946, -0.15154957428266333, -0.15388062697359092,
      -0.15597592610726665, -0.15781302750170528, -0.15937032813219248,
      -0.16062706613128461, -0.16156332078880878, -0.16216001255186294,
      -0.16239890302481552, -0.16226259496930581, -0.16173453230424378,
      -0.16079900010581041, -0.15944112460745696, -0.15764687319990578,
      -0.15540305443114977, -0.15269731800645245, -0.14951815478834837,
      -0.14585489679664276, -0.14169771720841084, -0.137037630358,
      -0.1318664917370275, -0.1261769979943807, -0.1199626869362188,
      -0.11321793752597172, -0.1059379698843388, -0.098118845289291323,
      -0.089757466176071138, -0.0808515761371912, -0.071399759922433387,
      -0.061401443438851441, -0.050856893750772236, -0.039767219079788807,
      -0.028134368804767967, -0.015961133461847458, -0.0032511447444328878,
      0.0099911315434743249, 0.023760569136106538, 0.038051681107383356,
      0.052858673811843185, 0.068175446971657255, 0.0839955936766289,
      0.10031240038419309, 0.11711884691941545, 0.13440760647499708,
      0.1521710456112676, 0.17040122425618778, 0.18908989570535484,
      0.20822850662199327, 0.22780819703696156, 0.24781980034874779,
      0.2682538433234779, 0.28910054609490132, 0.31034982216440343,
      0.33199127840100451, 0.35401421504135183, 0.37640762568972513,
      0.39916019731804031, 0.42226031026584054, 0.44569603824030041,
      0.46945514831623192, 0.49352510093607538, 0.51789304990989737,
      0.54254584241540749, 0.5674700189979397, 0.59265181357045937,
      0.61807715341357, 0.64373165917550135, 0.66960064487211435,
      0.69566911788690811, 0.72192177897100729, 0.74834302224317129,
      0.77491693518979021, 0.80162729866488658, 0.82845758689011473,
      0.8553909674547594, 0.88241030131574194, 0.90949814283357056,
      0.93663682594726827, 0.96380906000305722, 0.9909983439573965,
      1.0181889888573674, 1.045366117840681, 1.0725156661356672,
      1.0996243810612738, 1.1266798220270835, 1.1536703605332943,
      1.1805851801707274, 1.2074142766208331, 1.2341484576556798,
      1.2607793431379586, 1.2872993650209892, 1.3137017673487095,
      1.339980606255682, 1.366130749967094, 1.3921478787987531,
      1.4180284851570935, 1.443769873539168, 1.4693701605326612,
      1.4948282748158719, 1.5201439571577244, 1.5453177604177724,
      1.5703510495461852, 1.5952460015837568, 1.6200056056619112,
      1.644633663002685, 1.6691347869187445, 1.6935144028133804,
      1.7177787481805036, 1.7419348726046473, 1.7659906377609733,
      1.789954717415261, 1.8138365974239148, 1.8376465757339644,
      1.861395762383061, 1.8850960794994807, 1.9087602613021155,
      1.9324018541004928, 1.9560352162947545, 1.9796755086043929,
      2.0033382125403412, 2.0270379260067672, 2.0507880360878215,
      2.0746007165037161, 2.098486927610713, 2.1224564164011328,
      2.1465177165033511, 2.1706781481818007, 2.1949438183369687,
      2.2193196205054018, 2.2438092348597003, 2.2684151282085181,
      2.2931385539965712, 2.3179795523046272, 2.3429369498495078,
      2.3680083599841, 2.3931901826973387, 2.4184776046142131,
      2.4438645989957739, 2.4693439257391274, 2.4949071313774347,
      2.5205445490799114, 2.5462452986518334, 2.5719972865345291,
      2.59778720580538, 2.6236005361778338, 2.649421544001386,
      2.6752332822615879, 2.7010175905800513, 2.7267550952144406,
      2.7524252090584764, 2.7780061316419413, 2.8034748491306649,
      2.8288071343265369, 2.8539775466675064, 2.8789594322275738,
      2.9037249237167955, 2.92824494048129, 2.9524891885032267,
      2.9764261604008277, 3.0000231354283766, -0.034291270111429489,
      -0.033086338187536445, -0.031881406263643393, -0.030676474339750345,
      -0.029471542415857289, -0.028266610491964248, -0.027061678568071196,
      -0.025856746644178148, -0.0246518147202851, -0.023446882796392048,
      -0.022241950872499, -0.021037018948605952, -0.0198320870247129,
      -0.018627155100819848, -0.0174222231769268, -0.016217291253033755,
      -0.015012359329140707, -0.013807427405247659, -0.012602495481354604,
      -0.011397563557461559, -0.010192631633568507, -0.0089876997096754591,
      -0.0077827677857824126, -0.0065778358618893661, -0.0053729039379963126,
      -0.0041679720141032609, -0.0029630400902102144, -0.0017581081663171679,
      -0.00055317624242411968, 0.000651755681468932, 0.0018566876053619803,
      0.003061619529255025, 0.0042665514531480785, 0.0054714833770411293,
      0.0066764153009341775, 0.0078813472248272232, 0.0090862791487202766,
      0.010291211072613328, 0.011496142996506377, 0.012701074920399416,
      0.013906006844292468, 0.015110938768185526, 0.015477541847764351,
      0.014670480529364691, 0.013863419210965032, 0.01305635789256537,
      0.012249296574165711, 0.011442235255766049, 0.010635173937366384,
      0.0098281126189667233, 0.009021051300567056, 0.0082139899821674026,
      0.0074069286637677353, 0.0065998673453680741, 0.0057928060269684147,
      0.0049857447085687534, 0.004178683390169094, 0.0033716220717694267,
      0.0025645607533697672, 0.001757499434970106, 0.00095043811657044737,
      0.00014337679817077835, -0.00066368452022887332, -0.0014707458386285415,
      -0.002277807157028201, -0.0030848684754278682, -0.0038919297938275277,
      -0.004698991112227182, -0.0055060524306268475, -0.0063131137490265105,
      -0.0071201750674261682, -0.00792723638582583, -0.0087342977042254959,
      -0.0095413590226251579, -0.010348420341024823, -0.011155481659424479,
      -0.011962542977824144, -0.012769604296223806, -0.013576665614623458,
      -0.014383726933023127, -0.015190788251422786, -0.015997849569822448,
      -0.01680491088822212, -0.017611972206621768, -0.017492497734235137,
      -0.017187713884448241, -0.016882930034661341, -0.016578146184874444,
      -0.016273362335087551, -0.015968578485300651, -0.015663794635513754,
      -0.015359010785726858, -0.015054226935939963, -0.014749443086153061,
      -0.01444465923636617, -0.014139875386579268, -0.013835091536792372,
      -0.013530307687005475, -0.013225523837218577, -0.01292073998743168,
      -0.01261595613764478, -0.012311172287857887, -0.012006388438070991,
      -0.011701604588284089, -0.011396820738497192, -0.011092036888710301,
      -0.0107872530389234, -0.010482469189136503, -0.010177685339349606,
      -0.00987290148956271, -0.0095681176397758132, -0.00926333378998891,
      -0.00895854994020202, -0.0086537660904151235, -0.0083489822406282218,
      -0.0080441983908413252, -0.0077394145410544287, -0.0074346306912675322,
      -0.0071298468414806356, -0.0068250629916937339, -0.0065202791419068425,
      -0.0062154952921199451, -0.0059107114423330442, -0.005605927592546152,
      -0.0053011437427592564, -0.0048635320710089334, -0.0040274316308287006,
      -0.003191331190648467, -0.0023552307504682338, -0.0015191303102880002,
      -0.00068302987010775184, 0.00015307057007246747, 0.000989171010252715,
      0.0018252714504329486, 0.0026613718906131666, 0.0034974723307934145,
      0.0043335727709736486, 0.0051696732111538813, 0.0060057736513341141,
      0.0068418740915143486, 0.0076779745316945813, 0.00851407497187483,
      0.0093501754120550486, 0.010186275852235298, 0.01102237629241553,
      0.011858476732595749, 0.012694577172775995, 0.013530677612956232,
      0.01436677805313648, 0.015202878493316698, 0.016038978933496928,
      0.016875079373677177, 0.017711179813857413, 0.018547280254037631,
      0.01938338069421788, 0.020219481134398112, 0.021055581574578333,
      0.021891682014758579, 0.022727782454938814, 0.02356388289511906,
      0.024399983335299275, 0.025236083775479527, 0.026072184215659745,
      0.026908284655839994, 0.027744385096020244, 0.028580485536200462,
      0.02941658597638068, 0.028704900148342496, 0.027219309600956795,
      0.025733719053571146, 0.024248128506185442, 0.022762537958799792,
      0.021276947411414088, 0.019791356864028432, 0.01830576631664273,
      0.016820175769257026, 0.015334585221871377, 0.013848994674485722,
      0.012363404127100018, 0.010877813579714315, 0.0093922230323286622,
      0.007906632484942961, 0.0064210419375573119, 0.0049354513901716055,
      0.0034498608427859529, 0.0019642702954002483, 0.00047867974801454535,
      -0.0010069107993711055, -0.0024925013467567581, -0.003978091894142461,
      -0.0054636824415281639, -0.0069492729889138183, -0.00843486353629952,
      -0.0099204540836851738, -0.01140604463107088, -0.01289163517845658,
      -0.014377225725842234, -0.015862816273227935, -0.017348406820613588,
      -0.01883399736799924, -0.020319587915384994, -0.02180517846277065,
      -0.023290769010156302, -0.024776359557542, -0.026261950104927656,
      -0.027747540652313357, -0.029233131199699062, -0.030718721747084718,
      -0.03199420412677987, -0.030958370842828421, -0.029922537558876968,
      -0.028886704274925443, -0.027850870990973994, -0.026815037707022538,
      -0.02577920442307105, -0.024743371139119598, -0.023707537855168111,
      -0.022671704571216623, -0.021635871287265167, -0.02060003800331368,
      -0.019564204719362228, -0.018528371435410775, -0.01749253815145925,
      -0.016456704867507797, -0.015420871583556345, -0.014385038299604858,
      -0.013349205015653405, -0.01231337173170188, -0.011277538447750431,
      -0.010241705163798975, -0.0092058718798474874, -0.0081700385958960349,
      -0.0071342053119445451, -0.0060983720279930587, -0.0050625387440416036,
      -0.0040267054600901537, -0.0029908721761386647, -0.0019550388921872122,
      -0.00091920560823568684, 0.00011662767571576568, 0.0011524609596672173,
      0.0021882942436187054, 0.0032241275275701571, 0.0042599608115216469,
      0.0052957940954731358, 0.0063316273794245884, 0.0073674606633760392,
      0.00840329394732753, 0.00943912723127898, 0.010474960515230506,
      0.01093120484957124, 0.010807848665590201, 0.010684492481609157,
      0.010561136297628119, 0.010437780113647075, 0.010314423929666033,
      0.010191067745684994, 0.010067711561703956, 0.0099443553777229139,
      0.0098209991937418684, 0.0096976430097608264, 0.00957428682577979,
      0.009450930641798751, 0.0093275744578177056, 0.0092042182738366635,
      0.009080862089855625, 0.008957505905874583, 0.0088341497218935444,
      0.0087107935379125059, 0.0085874373539314638, 0.00846408116995042,
      0.0083407249859693763, 0.00821736880198834, 0.0080940126180073,
      0.0079706564340262555, 0.0078473002500452135, 0.0077239440660641749,
      0.0076005878820831329, 0.0074772316981020926, 0.0073538755141210549,
      0.007230519330140012, 0.00710716314615897, 0.0069838069621779263,
      0.0068604507781968877, 0.0067370945942158492, 0.0066137384102348054,
      0.0064903822262537634, 0.0063670260422727248, 0.006243669858291682,
      0.0061203136743106434, 0.005996957490329604, 0.0058736013063485568,
      0.00593627007239076, 0.0060158514863642423, 0.0060954329003377232,
      0.0061750143143112024, 0.0062545957282846886, 0.0063341771422581686,
      0.00641375855623165, 0.0064933399702051331, 0.0065729213841786132,
      0.0066525027981520924, 0.0067320842121255785, 0.0068116656260990595,
      0.0068912470400725413, 0.0069708284540460222, 0.0070504098680195023,
      0.0071299912819929884, 0.0072095726959664694, 0.0072891541099399486,
      0.0073687355239134321, 0.0074483169378869122, 0.0075278983518603931,
      0.0076074797658338784, 0.0076870611798073585, 0.0077666425937808412,
      0.0078462240077543221, 0.007925805421727803, 0.0080053868357012874,
      0.0080849682496747684, 0.0081645496636482476, 0.008244131077621732,
      0.0083237124915952147, 0.0084032939055686973, 0.0084828753195421748,
      0.0085624567335156575, 0.0086420381474891419, 0.0087216195614626176,
      0.0088012009754361072, 0.0088807823894095847, 0.0089603638033830674,
      0.0090399452173565518, 0.0091195266313300275, 0.0091609925050193178,
      0.0091262250157360513, 0.0090914575264527883, 0.0090566900371695219,
      0.0090219225478862554, 0.00898715505860299, 0.0089523875693197259,
      0.0089176200800364612, 0.0088828525907531965, 0.0088480851014699317,
      0.008813317612186667, 0.0087785501229034023, 0.0087437826336201376,
      0.0087090151443368728, 0.0086742476550536046, 0.0086394801657703416,
      0.0086047126764870769, 0.00856994518720381, 0.0085351776979205474,
      0.008500410208637281, 0.0084656427193540162, 0.008430875230070755,
      0.0083961077407874885, 0.0083613402515042221, 0.0083265727622209591,
      0.0082918052729376926, 0.0082570377836544261, 0.0082222702943711631,
      0.0081875028050878967, 0.0081527353158046337, 0.0081179678265213689,
      0.0080832003372381042, 0.00804843284795484, 0.008013665358671573,
      0.00797889786938831, 0.0079441303801050436, 0.0079093628908217771,
      0.0078745954015385124, 0.0078398279122552476, 0.007805060422971982,
      0.007770292933688719, 0.0077355254444054526, 0.0070850005395538315,
      0.0062292149690855586, 0.005373429398617225, 0.0045176438281488906,
      0.0036618582576805579, 0.0028060726872122231, 0.00195028711674389,
      0.0010945015462756162, 0.00023871597580728352, -0.00061706959466105091,
      -0.0014728551651293238, -0.0023286407355976573, -0.0031844263060659909,
      -0.0040402118765343244, -0.0048959974470025973, -0.0057517830174709933,
      -0.0066075685879393269, -0.0074633541584075988, -0.0083191397288759333,
      -0.0091749252993442686, -0.01003071086981254, -0.010886496440280873,
      -0.01174228201074921, -0.012598067581217483, -0.013453853151685815,
      -0.014309638722154207, -0.015165424292622482, -0.016021209863090816,
      -0.016876995433559149, -0.017732781004027424, -0.018588566574495757,
      -0.019444352144964091, -0.020300137715432362, -0.0211559232859007,
      -0.022011708856369029, -0.022867494426837366, -0.023723279997305696,
      -0.024579065567774033, -0.025434851138242363, -0.026290636708710638,
      -0.027146422279178975, -0.027650241789587485, -0.02639412561579867,
      -0.025138009442009768, -0.023881893268220867, -0.022625777094432052,
      -0.021369660920643154, -0.020113544746854159, -0.018857428573065351,
      -0.017601312399276446, -0.016345196225487545, -0.015089080051698737,
      -0.013832963877909828, -0.012576847704120927, -0.011320731530332116,
      -0.010064615356543212, -0.0088084991827543126, -0.0075523830089654128,
      -0.0062962668351765096, -0.00504015066138761, -0.00378403448759871,
      -0.0025279183138098953, -0.0012718021400209938, -1.5685966232092258E-5,
      0.0012404302075567208, 0.0024965463813456205, 0.0037526625551345238,
      0.0050087787289233368, 0.006264894902712325, 0.0075210110765012265,
      0.00877712725029004, 0.010033243424078943, 0.011289359597867841,
      0.012545475771656654, 0.013801591945445557, 0.015057708119234459,
      0.01631382429302327, 0.017569940466812171, 0.018826056640601073,
      0.020082172814390065, 0.021338288988178879, 0.022594405161967781,
      0.023850521335756679, 0.0232927282387164, 0.021439236894981,
      0.019585745551245592, 0.017732254207510324, 0.015878762863774924,
      0.014025271520039521, 0.012171780176304124, 0.010318288832568719,
      0.0084647974888333172, 0.0066113061450980455, 0.0047578148013626437,
      0.002904323457627242, 0.0010508321138919738, -0.00080265922984342972,
      -0.0026561505735788297, -0.0045096419173141, -0.0063631332610495032,
      -0.008216624604785035, -0.010070115948520437, -0.011923607292255705,
      -0.01377709863599111, -0.015630589979726509, -0.017484081323461784,
      -0.019337572667197184, -0.021191064010932587, -0.023044555354667859,
      -0.024898046698403259, -0.026751538042138659, -0.028605029385874059,
      -0.030458520729609466, -0.032312012073344859, -0.034165503417080134,
      -0.036018994760815534, -0.037872486104550934, -0.0397259774482862,
      -0.041579468792021609, -0.043432960135757009, -0.045286451479492278,
      -0.047139942823227678, -0.048993434166963216, -0.050846925510698616,
      -0.052700416854433885, -0.034291270111429489, -0.033086338187536445,
      -0.031881406263643393, -0.030676474339750345, -0.029471542415857289,
      -0.028266610491964248, -0.027061678568071196, -0.025856746644178148,
      -0.0246518147202851, -0.023446882796392048, -0.022241950872499,
      -0.021037018948605952, -0.0198320870247129, -0.018627155100819848,
      -0.0174222231769268, -0.016217291253033755, -0.015012359329140707,
      -0.013807427405247659, -0.012602495481354604, -0.011397563557461559,
      -0.010192631633568507, -0.0089876997096754591, -0.0077827677857824126,
      -0.0065778358618893661, -0.0053729039379963126, -0.0041679720141032609,
      -0.0029630400902102144, -0.0017581081663171679, -0.00055317624242411968,
      0.000651755681468932, 0.0018566876053619803, 0.003061619529255025,
      0.0042665514531480785, 0.0054714833770411293, 0.0066764153009341775,
      0.0078813472248272232, 0.0090862791487202766, 0.010291211072613328,
      0.011496142996506377, 0.012701074920399416, 0.013906006844292468,
      0.015110938768185526, 0.015477541847764351, 0.014670480529364691,
      0.013863419210965032, 0.01305635789256537, 0.012249296574165711,
      0.011442235255766049, 0.010635173937366384, 0.0098281126189667233,
      0.009021051300567056, 0.0082139899821674026, 0.0074069286637677353,
      0.0065998673453680741, 0.0057928060269684147, 0.0049857447085687534,
      0.004178683390169094, 0.0033716220717694267, 0.0025645607533697672,
      0.001757499434970106, 0.00095043811657044737, 0.00014337679817077835,
      -0.00066368452022887332, -0.0014707458386285415, -0.002277807157028201,
      -0.0030848684754278682, -0.0038919297938275277, -0.004698991112227182,
      -0.0055060524306268475, -0.0063131137490265105, -0.0071201750674261682,
      -0.00792723638582583, -0.0087342977042254959, -0.0095413590226251579,
      -0.010348420341024823, -0.011155481659424479, -0.011962542977824144,
      -0.012769604296223806, -0.013576665614623458, -0.014383726933023127,
      -0.015190788251422786, -0.015997849569822448, -0.01680491088822212,
      -0.017611972206621768, -0.017492497734235137, -0.017187713884448241,
      -0.016882930034661341, -0.016578146184874444, -0.016273362335087551,
      -0.015968578485300651, -0.015663794635513754, -0.015359010785726858,
      -0.015054226935939963, -0.014749443086153061, -0.01444465923636617,
      -0.014139875386579268, -0.013835091536792372, -0.013530307687005475,
      -0.013225523837218577, -0.01292073998743168, -0.01261595613764478,
      -0.012311172287857887, -0.012006388438070991, -0.011701604588284089,
      -0.011396820738497192, -0.011092036888710301, -0.0107872530389234,
      -0.010482469189136503, -0.010177685339349606, -0.00987290148956271,
      -0.0095681176397758132, -0.00926333378998891, -0.00895854994020202,
      -0.0086537660904151235, -0.0083489822406282218, -0.0080441983908413252,
      -0.0077394145410544287, -0.0074346306912675322, -0.0071298468414806356,
      -0.0068250629916937339, -0.0065202791419068425, -0.0062154952921199451,
      -0.0059107114423330442, -0.005605927592546152, -0.0053011437427592564,
      -0.0048635320710089334, -0.0040274316308287006, -0.003191331190648467,
      -0.0023552307504682338, -0.0015191303102880002, -0.00068302987010775184,
      0.00015307057007246747, 0.000989171010252715, 0.0018252714504329486,
      0.0026613718906131666, 0.0034974723307934145, 0.0043335727709736486,
      0.0051696732111538813, 0.0060057736513341141, 0.0068418740915143486,
      0.0076779745316945813, 0.00851407497187483, 0.0093501754120550486,
      0.010186275852235298, 0.01102237629241553, 0.011858476732595749,
      0.012694577172775995, 0.013530677612956232, 0.01436677805313648,
      0.015202878493316698, 0.016038978933496928, 0.016875079373677177,
      0.017711179813857413, 0.018547280254037631, 0.01938338069421788,
      0.020219481134398112, 0.021055581574578333, 0.021891682014758579,
      0.022727782454938814, 0.02356388289511906, 0.024399983335299275,
      0.025236083775479527, 0.026072184215659745, 0.026908284655839994,
      0.027744385096020244, 0.028580485536200462, 0.02941658597638068,
      0.028704900148342496, 0.027219309600956795, 0.025733719053571146,
      0.024248128506185442, 0.022762537958799792, 0.021276947411414088,
      0.019791356864028432, 0.01830576631664273, 0.016820175769257026,
      0.015334585221871377, 0.013848994674485722, 0.012363404127100018,
      0.010877813579714315, 0.0093922230323286622, 0.007906632484942961,
      0.0064210419375573119, 0.0049354513901716055, 0.0034498608427859529,
      0.0019642702954002483, 0.00047867974801454535, -0.0010069107993711055,
      -0.0024925013467567581, -0.003978091894142461, -0.0054636824415281639,
      -0.0069492729889138183, -0.00843486353629952, -0.0099204540836851738,
      -0.01140604463107088, -0.01289163517845658, -0.014377225725842234,
      -0.015862816273227935, -0.017348406820613588, -0.01883399736799924,
      -0.020319587915384994, -0.02180517846277065, -0.023290769010156302,
      -0.024776359557542, -0.026261950104927656, -0.027747540652313357,
      -0.029233131199699062, -0.030718721747084718, -0.03199420412677987,
      -0.030958370842828421, -0.029922537558876968, -0.028886704274925443,
      -0.027850870990973994, -0.026815037707022538, -0.02577920442307105,
      -0.024743371139119598, -0.023707537855168111, -0.022671704571216623,
      -0.021635871287265167, -0.02060003800331368, -0.019564204719362228,
      -0.018528371435410775, -0.01749253815145925, -0.016456704867507797,
      -0.015420871583556345, -0.014385038299604858, -0.013349205015653405,
      -0.01231337173170188, -0.011277538447750431, -0.010241705163798975,
      -0.0092058718798474874, -0.0081700385958960349, -0.0071342053119445451,
      -0.0060983720279930587, -0.0050625387440416036, -0.0040267054600901537,
      -0.0029908721761386647, -0.0019550388921872122, -0.00091920560823568684,
      0.00011662767571576568, 0.0011524609596672173, 0.0021882942436187054,
      0.0032241275275701571, 0.0042599608115216469, 0.0052957940954731358,
      0.0063316273794245884, 0.0073674606633760392, 0.00840329394732753,
      0.00943912723127898, 0.010474960515230506, 0.01093120484957124,
      0.010807848665590201, 0.010684492481609157, 0.010561136297628119,
      0.010437780113647075, 0.010314423929666033, 0.010191067745684994,
      0.010067711561703956, 0.0099443553777229139, 0.0098209991937418684,
      0.0096976430097608264, 0.00957428682577979, 0.009450930641798751,
      0.0093275744578177056, 0.0092042182738366635, 0.009080862089855625,
      0.008957505905874583, 0.0088341497218935444, 0.0087107935379125059,
      0.0085874373539314638, 0.00846408116995042, 0.0083407249859693763,
      0.00821736880198834, 0.0080940126180073, 0.0079706564340262555,
      0.0078473002500452135, 0.0077239440660641749, 0.0076005878820831329,
      0.0074772316981020926, 0.0073538755141210549, 0.007230519330140012,
      0.00710716314615897, 0.0069838069621779263, 0.0068604507781968877,
      0.0067370945942158492, 0.0066137384102348054, 0.0064903822262537634,
      0.0063670260422727248, 0.006243669858291682, 0.0061203136743106434,
      0.005996957490329604, 0.0058736013063485568, 0.00593627007239076,
      0.0060158514863642423, 0.0060954329003377232, 0.0061750143143112024,
      0.0062545957282846886, 0.0063341771422581686, 0.00641375855623165,
      0.0064933399702051331, 0.0065729213841786132, 0.0066525027981520924,
      0.0067320842121255785, 0.0068116656260990595, 0.0068912470400725413,
      0.0069708284540460222, 0.0070504098680195023, 0.0071299912819929884,
      0.0072095726959664694, 0.0072891541099399486, 0.0073687355239134321,
      0.0074483169378869122, 0.0075278983518603931, 0.0076074797658338784,
      0.0076870611798073585, 0.0077666425937808412, 0.0078462240077543221,
      0.007925805421727803, 0.0080053868357012874, 0.0080849682496747684,
      0.0081645496636482476, 0.008244131077621732, 0.0083237124915952147,
      0.0084032939055686973, 0.0084828753195421748, 0.0085624567335156575,
      0.0086420381474891419, 0.0087216195614626176, 0.0088012009754361072,
      0.0088807823894095847, 0.0089603638033830674, 0.0090399452173565518,
      0.0091195266313300275, 0.0091609925050193178, 0.0091262250157360513,
      0.0090914575264527883, 0.0090566900371695219, 0.0090219225478862554,
      0.00898715505860299, 0.0089523875693197259, 0.0089176200800364612,
      0.0088828525907531965, 0.0088480851014699317, 0.008813317612186667,
      0.0087785501229034023, 0.0087437826336201376, 0.0087090151443368728,
      0.0086742476550536046, 0.0086394801657703416, 0.0086047126764870769,
      0.00856994518720381, 0.0085351776979205474, 0.008500410208637281,
      0.0084656427193540162, 0.008430875230070755, 0.0083961077407874885,
      0.0083613402515042221, 0.0083265727622209591, 0.0082918052729376926,
      0.0082570377836544261, 0.0082222702943711631, 0.0081875028050878967,
      0.0081527353158046337, 0.0081179678265213689, 0.0080832003372381042,
      0.00804843284795484, 0.008013665358671573, 0.00797889786938831,
      0.0079441303801050436, 0.0079093628908217771, 0.0078745954015385124,
      0.0078398279122552476, 0.007805060422971982, 0.007770292933688719,
      0.0077355254444054526, 0.0070850005395538315, 0.0062292149690855586,
      0.005373429398617225, 0.0045176438281488906, 0.0036618582576805579,
      0.0028060726872122231, 0.00195028711674389, 0.0010945015462756162,
      0.00023871597580728352, -0.00061706959466105091, -0.0014728551651293238,
      -0.0023286407355976573, -0.0031844263060659909, -0.0040402118765343244,
      -0.0048959974470025973, -0.0057517830174709933, -0.0066075685879393269,
      -0.0074633541584075988, -0.0083191397288759333, -0.0091749252993442686,
      -0.01003071086981254, -0.010886496440280873, -0.01174228201074921,
      -0.012598067581217483, -0.013453853151685815, -0.014309638722154207,
      -0.015165424292622482, -0.016021209863090816, -0.016876995433559149,
      -0.017732781004027424, -0.018588566574495757, -0.019444352144964091,
      -0.020300137715432362, -0.0211559232859007, -0.022011708856369029,
      -0.022867494426837366, -0.023723279997305696, -0.024579065567774033,
      -0.025434851138242363, -0.026290636708710638, -0.027146422279178975,
      -0.027650241789587485, -0.02639412561579867, -0.025138009442009768,
      -0.023881893268220867, -0.022625777094432052, -0.021369660920643154,
      -0.020113544746854159, -0.018857428573065351, -0.017601312399276446,
      -0.016345196225487545, -0.015089080051698737, -0.013832963877909828,
      -0.012576847704120927, -0.011320731530332116, -0.010064615356543212,
      -0.0088084991827543126, -0.0075523830089654128, -0.0062962668351765096,
      -0.00504015066138761, -0.00378403448759871, -0.0025279183138098953,
      -0.0012718021400209938, -1.5685966232092258E-5, 0.0012404302075567208,
      0.0024965463813456205, 0.0037526625551345238, 0.0050087787289233368,
      0.006264894902712325, 0.0075210110765012265, 0.00877712725029004,
      0.010033243424078943, 0.011289359597867841, 0.012545475771656654,
      0.013801591945445557, 0.015057708119234459, 0.01631382429302327,
      0.017569940466812171, 0.018826056640601073, 0.020082172814390065,
      0.021338288988178879, 0.022594405161967781, 0.023850521335756679,
      0.0232927282387164, 0.021439236894981, 0.019585745551245592,
      0.017732254207510324, 0.015878762863774924, 0.014025271520039521,
      0.012171780176304124, 0.010318288832568719, 0.0084647974888333172,
      0.0066113061450980455, 0.0047578148013626437, 0.002904323457627242,
      0.0010508321138919738, -0.00080265922984342972, -0.0026561505735788297,
      -0.0045096419173141, -0.0063631332610495032, -0.008216624604785035,
      -0.010070115948520437, -0.011923607292255705, -0.01377709863599111,
      -0.015630589979726509, -0.017484081323461784, -0.019337572667197184,
      -0.021191064010932587, -0.023044555354667859, -0.024898046698403259,
      -0.026751538042138659, -0.028605029385874059, -0.030458520729609466,
      -0.032312012073344859, -0.034165503417080134, -0.036018994760815534,
      -0.037872486104550934, -0.0397259774482862, -0.041579468792021609,
      -0.043432960135757009, -0.045286451479492278, -0.047139942823227678,
      -0.048993434166963216, -0.050846925510698616, -0.052700416854433885,
      0.037163668935494276, 0.033788037324702, 0.030533140373207764,
      0.02739897808101157, 0.024385550448113396, 0.021492857474513273,
      0.01872089916021118, 0.016069675505207132, 0.013539186509501113,
      0.011129432173093133, 0.0088404124959832, 0.0066721274781712994,
      0.004624577119657425, 0.0026977614204415955, 0.00089168038052380252,
      -0.00079366600009594555, -0.0023582777214176658, -0.0038021547834413477,
      -0.0051252971861669933, -0.0063277049295945966, -0.0074093780137241619,
      -0.0083703164385556944, -0.00921052020408919, -0.0099299893103246464,
      -0.010528723757262066, -0.011006723544901446, -0.011363988673242793,
      -0.0116005191422861, -0.011716314952031376, -0.01171137610247861,
      -0.011585702593627808, -0.011339294425478963, -0.010972151598032089,
      -0.010484274111287167, -0.0098756619652442187, -0.0091463151599032282,
      -0.0082962336952642, -0.0073254175713271322, -0.0062338667880920372,
      -0.0050215813455588964, -0.0036885612437277237, -0.0022348064825985017,
      -0.0006778172115166777, 0.00083260472105689716, 0.0022621587876727133,
      0.0036108449883307664, 0.0048786633230310664, 0.00606561379177361,
      0.0071716963945583955, 0.0081969111313854159, 0.0091412580022546871,
      0.010004737007166182, 0.010787348146119936, 0.011489091419115921,
      0.012109966826154152, 0.012649974367234616, 0.013109114042357328,
      0.013487385851522277, 0.013784789794729472, 0.0140013258719789,
      0.014136994083270567, 0.014191794428604486, 0.014165726907980642,
      0.014058791521399036, 0.013870988268859675, 0.013602317150362553,
      0.013252778165907673, 0.012822371315495037, 0.012311096599124632,
      0.011718954016796476, 0.011045943568510559, 0.010292065254266888,
      0.009457319074065447, 0.0085417050279062469, 0.00754522311578929,
      0.0064678733377145879, 0.0053096556936821117, 0.0040705701836918733,
      0.0027506168077439004, 0.0013497955658381411, -0.00013189354202535961,
      -0.001694450515846626, -0.0033378753556256788, -0.0050621680613624313,
      -0.0068286456870445562, -0.00856613120433309, -0.010273077258325904,
      -0.01194948384902301, -0.013595350976424404, -0.015210678640530084,
      -0.016795466841340048, -0.018349715578854297, -0.019873424853072842,
      -0.021366594663995687, -0.022829225011622781, -0.024261315895954202,
      -0.025662867316989888, -0.027033879274729857, -0.028374351769174119,
      -0.029684284800322657, -0.030963678368175519, -0.032212532472732619,
      -0.033430847113994022, -0.034618622291959736, -0.035775858006629704,
      -0.036902554258003956, -0.037998711046082531, -0.039064328370865362,
      -0.040099406232352496, -0.0411039446305439, -0.042077943565439604,
      -0.043021403037039607, -0.043934323045343865, -0.044816703590352426,
      -0.045668544672065284, -0.046489846290482417, -0.047280608445603833,
      -0.048040831137429532, -0.048770514365959527, -0.049469658131193819,
      -0.05013826243313238, -0.050776327271775223, -0.051383852647122377,
      -0.051960838559173786, -0.052507285007929505, -0.053021528334901466,
      -0.053466967389211008, -0.053828628845979644, -0.054106512705207374,
      -0.0543006189668942, -0.054410947631040131, -0.054437498697645144,
      -0.054380272166709265, -0.054239268038232473, -0.054014486312214775,
      -0.053705926988656179, -0.053313590067556677, -0.052837475548916261,
      -0.052277583432734955, -0.051633913719012735, -0.050906466407749616,
      -0.050095241498945592, -0.049200238992600662, -0.048221458888714819,
      -0.047158901187288084, -0.046012565888320464, -0.04478245299181189,
      -0.043468562497762438, -0.042070894406172059, -0.040589448717040837,
      -0.039024225430368674, -0.037375224546155564, -0.035642446064401596,
      -0.033825889985106758, -0.031925556308270944, -0.029941445033894263,
      -0.027873556161976704, -0.025721889692518179, -0.023486445625518788,
      -0.021167223960978442, -0.018764224698897276, -0.016277447839275122,
      -0.013706893382112163, -0.01105256132740819, -0.0083144516751633112,
      -0.0054925644253776516, -0.0025868995780510586, 0.00035084685767125751,
      0.0031526609173313765, 0.005805618211693413, 0.0083097187407575653,
      0.010664962504523643, 0.012871349502991812, 0.01492887973616194,
      0.016837553204034142, 0.01859736990660836, 0.020208329843884543,
      0.021670433015862745, 0.022983679422543007, 0.02414806906392529,
      0.02516360194000955, 0.026030278050795854, 0.026748097396284164,
      0.027317059976474489, 0.027737165791366831, 0.028008414840961206,
      0.02813080712525759, 0.028104342644255993, 0.027929021397956413,
      0.027604843386358838, 0.027131808609463286, 0.026509917067269757,
      0.025739168759778247, 0.024819563686988753, 0.023751101848901255,
      0.022533783245515786, 0.021167607876832355, 0.0196525757428509,
      0.017988686843571515, 0.016175941178994162, 0.014214338749118687,
      0.01210387955394537, 0.0098445635934740622, 0.0074363908677046939,
      0.0048793613766374387, 0.0021734751202721128, -0.000681267901391211,
      -0.0036848676883523973, -0.006836447079292856, -0.0099903836379379145,
      -0.013040529288443233, -0.015986884030808991, -0.018829447865034789,
      -0.021568220791120817, -0.0242032028090672, -0.026734393918873705,
      -0.029161794120540555, -0.03148540341406765, -0.033705221799454892,
      -0.035821249276702459, -0.037833485845810193, -0.039741931506778155,
      -0.0415465862596065, -0.043247450104294954, -0.044844523040843645,
      -0.046337805069252634, -0.047727296189521824, -0.049012996401651333,
      -0.050194905705640995, -0.0512730241014909, -0.052247351589201088,
      -0.053117888168771471, -0.053884633840202131, -0.054547588603493027,
      -0.055106752458644132, -0.055562125405655485, -0.0559137074445271,
      -0.056161498575258942, -0.056305498797851031, -0.056345708112303362,
      -0.05628212651861593, -0.05611475401678874, -0.055843590606821772,
      -0.055468636288715054, -0.054989891062468564, -0.054407354928082338,
      -0.053721027885556355, -0.052930909934890594, -0.052037001076085082,
      -0.051039301309139758, -0.049952329250129927, -0.048863198334279233,
      -0.047786427757257534, -0.046722017519064941, -0.045669967619701352,
      -0.04463027805916682, -0.04360294883746136, -0.042587979954584965,
      -0.041585371410537572, -0.040595123205319231, -0.039617235338929954,
      -0.038651707811369743, -0.037698540622638596, -0.036757733772736459,
      -0.035829287261663366, -0.034913201089419366, -0.034009475256004375,
      -0.03311810976141847, -0.032239104605661616, -0.031372459788733778,
      -0.030518175310634988, -0.029676251171365256, -0.0288466873709246,
      -0.028029483909312987, -0.027224640786530405, -0.02643215800257686,
      -0.0256520355574524, -0.024884273451156971, -0.024128871683690611,
      -0.023385830255053298, -0.022655149165245012, -0.021936828414265773,
      -0.021230868002115589, -0.020537267928794473, -0.019856028194302416,
      -0.019187148798639378, -0.018530629741805391, -0.017886471023800476,
      -0.017254672644624595, -0.016635234604277779, -0.016028156902760011,
      -0.015433439540071252, -0.014842539340636994, -0.014243735667304691,
      -0.013636957904555387, -0.013022206052389067, -0.012399480110805685,
      -0.011768780079805325, -0.011130105959387949, -0.010483457749553528,
      -0.0098288354503021109, -0.009166239061633677, -0.0084956685835481764,
      -0.0078171240160457012, -0.0071306053591261818, -0.0064361126127896705,
      -0.0057336457770361393, -0.0050232048518655363, -0.0043047898372779664,
      -0.0035784007332733772, -0.0028440375398517416, -0.0021017002570131145,
      -0.0013513888847574663, -0.00059310342308474453, 0.00017315612800493981,
      0.00094738976851167171, 0.0017295974984353974, 0.0025197793177761394,
      0.00331793522653396, 0.0041240652247087426, 0.0049381693123005423,
      0.0057602474893093938, 0.0065902997557352643, 0.007428326111578152,
      0.0082743265568380013, 0.00912830109151493, 0.0099902497156088774,
      0.010860172429119783, 0.011738069232047833, 0.012623940124392777,
      0.013517785106154801, 0.014419604177333848, 0.015329397337929845,
      0.016246528068591969, 0.01716272131283101, 0.01807543084077862,
      0.018984656652434977, 0.019890398747799895, 0.020792657126873382,
      0.021691431789655553, 0.022586722736146352, 0.023478529966345717,
      0.024366853480253765, 0.025251693277870441, 0.026133049359195741,
      0.027010921724229607, 0.027885310372972157, 0.028756215305423397,
      0.02962363652158314, 0.03048757402145157, 0.031348027805028628,
      0.032204997872314248, 0.033058484223308551, 0.033908486858011483,
      0.03475500577642298, 0.035598040978543161, 0.036437592464371976,
      0.037273660233909343, 0.038106244287155464, 0.038935344624110156,
      0.039760961244773407, 0.040583094149145342, 0.041401743337225905,
      0.042216908809015033, 0.043028590564512845, 0.043836788603719291,
      0.044641502926634352, 0.045442733533257985, 0.0462404804235903,
      0.0470347435976313, 0.04782552305538082, 0.048612818796839014,
      0.049396630822005835, 0.050176959130881223, 0.05095380372346528,
      0.051704027653691059, 0.052371072505512435, 0.052952367301887682,
      0.053447912042816785, 0.053857706728299724, 0.054181751358336507,
      0.054420045932927145, 0.0545725904520716, 0.054639384915769938,
      0.0546204293240221, 0.054515723676828123, 0.054325267974187984,
      0.054049062216101694, 0.053687106402569247, 0.053239400533590685,
      0.052705944609165882, 0.052086738629294971, 0.051381782593977951,
      0.050591076503214732, 0.049714620357005336, 0.048752414155349887,
      0.047704457898248204, 0.046570751585700371, 0.045351295217706457,
      0.0440460887942663, 0.042655132315379908, 0.041178425781047558,
      0.039615969191268946, 0.037967762546044184, 0.036233805845373376,
      0.0344140990892563, 0.032508642277693074, 0.030517435410683823,
      0.028440478488228289, 0.026277771510326606, 0.024029314476978748,
      0.021695107388184753, 0.019275150243944592, 0.016769443044258273,
      0.014177985789125987, 0.011500778478547365, 0.0087407598941685021,
      0.0060331263107769257, 0.0034513560689349142, 0.00099544916864265673,
      -0.0013345943900996747, -0.0035387746072924114, -0.0056170914829355469,
      -0.0075695450170286246, -0.0093961352095720835, -0.011096862060565791,
      -0.012671725570009632, -0.014120725737903824, -0.015443862564248267,
      -0.016641136049042861, -0.017712546192287782, -0.018658092993982956,
      -0.019477776454128362, -0.020171596572724011, -0.020739553349769898,
      -0.021181646785266031, -0.021497876879212383, -0.021688243631608997,
      -0.021752747042455868, -0.021691387111752974, -0.021504163839500323,
      -0.021191077225697914, -0.02075212727034579, -0.02018731397344382,
      -0.019496637334992132, -0.018680097354990752, -0.017737694033439552,
      -0.0166694273703386, -0.015475297365687979, -0.014155304019487513,
      -0.012709447331737286, -0.011137727302437426, -0.009440143931587687,
      -0.0076166972191881906, -0.0056673871652387943, -0.0035922137697399284,
      -0.0013911770326911557, 0.00093572304590737454, 0.0033354755880039854,
      0.0055765559607023193, 0.0076319157615904708, 0.0095015549906683275,
      0.011185473647936135, 0.012683671733393763, 0.013996149247041201,
      0.015122906188878477, 0.016063942558905555, 0.016819258357122419,
      0.017388853583529151, 0.017772728238125708, 0.017970882320912075,
      0.017983315831888287, 0.017810028771054309, 0.017451021138410183,
      0.01690629293395586, 0.016175844157691303, 0.015259674809616606,
      0.014157784889731817, 0.01287017439803677, 0.011396843334531536,
      0.00973779169921626, 0.0078930194920906784, 0.0058625267131549308,
      0.003646313362409153, 0.0012443794398530536, -0.0013432750545132321,
      -0.0041166501206896938, -0.0070757457586763453, -0.010220561968473169,
      -0.013551098750079933, -0.017067356103497112, -0.020769334028724475,
      -0.024657032525761721, -0.028730451594609425, -0.032989591235267311,
      -0.037434451447735058, -0.042065032232013293, -0.046881333588102064,
      -0.051883355516000658, -0.057071098015709074, 0.057071550934465254,
      0.051883667754414727, 0.046881511855626258, 0.042065083238099849,
      0.037434381901835477, 0.0329894078468332, 0.028730161073092959,
      0.024656641580614792, 0.020768849369398667, 0.0170667844394446,
      0.013550446790752615, 0.01021983642332267, 0.0070749533371547825,
      0.0041157975322489559, 0.0013423690086051959, -0.0012453322337765095,
      -0.0036473061948961568, -0.005863552874753747, -0.0078940722733492827,
      -0.0097388643906827482, -0.011397929226754156, -0.012871266781563515,
      -0.014158877055110815, -0.015260760047396044, -0.01617691575841922,
      -0.01690734418818033, -0.017452045336679396, -0.017811019203916395,
      -0.017984265789891339, -0.017971785094604224, -0.017773577118055044,
      -0.017389641860243811, -0.016819979321170523, -0.016064589500835155,
      -0.015123472399237756, -0.013996628016378285, -0.012684056352256744,
      -0.011185757406873158, -0.00950173118022752, -0.0076319776723198125,
      -0.00557649688315005, -0.0033352888127182109, -0.00093540189134369762,
      0.0013916284363423041, 0.0035927868841086467, 0.0056680734519553196,
      0.00761748813988234, 0.0094410309478897, 0.011138701875977403,
      0.012710500924145435, 0.014156428092393824, 0.015476483380722522,
      0.016670666789131584, 0.017738978317620974, 0.018681417966190703,
      0.01949798573484077, 0.020188681623571177, 0.020753505632381916,
      0.021192457761273008, 0.021505538010244435, 0.02169274637929618,
      0.021754082868428282, 0.021689547477640722, 0.021499140206933495,
      0.021182861056306616, 0.020740710025760063, 0.020172687115293866,
      0.019478792324907998, 0.018659025654602455, 0.017713387104377261,
      0.01664187667423242, 0.015444494364167911, 0.014121240174183727,
      0.012672114104279878, 0.011097116154456372, 0.0093962463247132325,
      0.0075695046150504042, 0.0056168910254679079, 0.0035384055559657922,
      0.0013340482065439738, -0.00099618102279748835, -0.0034522821320586115,
      -0.0060342551212394409, -0.0087420999903398515, -0.01150233292456585,
      -0.014179742930256945, -0.016771390584417487, -0.019277275887047488,
      -0.021697398838146937, -0.024031759437715836, -0.026280357685754194,
      -0.028443193582261984, -0.030520267127239244, -0.03251157832068597,
      -0.034417127162602083, -0.0362369136529877, -0.037970937791842754,
      -0.039619199579167257, -0.0411816990149612, -0.042658436099224595,
      -0.044049410831957465, -0.045354623213159737, -0.046574073242831478,
      -0.047707760920972696, -0.048755686247583335, -0.049717849222663417,
      -0.050594249846212976, -0.051384888118231963, -0.052089764038720406,
      -0.052708877607678291, -0.053242228825105639, -0.053689817691002444,
      -0.054051644205368669, -0.054327708368204379, -0.05451801017950951,
      -0.054622549639284104, -0.054641326747528141, -0.054574341504241633,
      -0.054421593909424568, -0.054183083963076958, -0.053858811665198805,
      -0.053448777015790087, -0.052952980014850812, -0.052371420662381013,
      -0.05170409895838065, -0.050953586469685848, -0.050176458693275139,
      -0.049395860346625547, -0.048611791429737074, -0.047824251942609718,
      -0.047033241885243479, -0.046238761257638372, -0.045440810059794355,
      -0.044639388291711476, -0.043834495953389736, -0.043026133044829079,
      -0.042214299566029553, -0.041398995516991152, -0.040580220897713862,
      -0.0397579757081977, -0.038932259948442655, -0.038103073618448717,
      -0.037270416718215918, -0.036434289247744216, -0.035594691207033645,
      -0.0347516225960842, -0.033905083414895849, -0.033055073663468632,
      -0.032201593341802517, -0.031344642449897556, -0.030484220987753694,
      -0.029620328955370936, -0.028752966352749317, -0.027882133179888826,
      -0.027007829436789432, -0.026130055123451162, -0.025248810239874023,
      -0.024364094786057982, -0.023475908762003075, -0.022584252167709259,
      -0.021689125003176608, -0.020790527268405034, -0.019888458963394615,
      -0.01898292008814528, -0.018073910642657062, -0.017161430626930006,
      -0.016245480040964051, -0.015328599471258678, -0.014419045919019279,
      -0.013517454549887292, -0.012623825363862648, -0.011738158360945414,
      -0.010860453541135528, -0.0099907109044330457, -0.0091289304508379125,
      -0.00827511218035016, -0.0074292560929698093, -0.0065913621886968385,
      -0.0057614304675312165, -0.00493946092947297, -0.00412545357452213,
      -0.0033194084026786411, -0.0025213254139425561, -0.0017312046083138195,
      -0.00094904598579248966, -0.00017484954637850963, 0.00059138470992809323,
      0.001349656783127292, 0.0020999666732191124, 0.0028423143802035829,
      0.0035766999040806767, 0.0043031232448503664, 0.0050215844025127028,
      0.00573208337706764, 0.0064346201685152229, 0.0071291947768554274,
      0.00781580720208823, 0.00849445744421368, 0.00916514550323173,
      0.0098278713791424017, 0.010482635071945742, 0.011129436581641658,
      0.0117682759082302, 0.012399153051711385, 0.013022068012085169,
      0.0136370207893516, 0.014244011383510651, 0.014843039794562305,
      0.0154341765383295, 0.016029128339339831, 0.0166364285411827,
      0.017256077143858142, 0.017888074147366078, 0.018532419551706543,
      0.019189113356879568, 0.019858155562885095, 0.020539546169723186,
      0.021233285177393812, 0.021939372585896944, 0.022657808395232633,
      0.023388592605400833, 0.024131725216401563, 0.024887206228234881,
      0.025655035640900683, 0.026435213454399004, 0.027227739668729892,
      0.028032614283893295, 0.02884983729988928, 0.029679408716717745,
      0.030521328534378743, 0.0313755967528723, 0.032242213372198361,
      0.033121178392356981, 0.034012491813348145, 0.0349161536351718,
      0.035832163857827996, 0.036760522481316754, 0.037701229505638006,
      0.038654284930791871, 0.0396196887567782, 0.040597440983597063,
      0.041587541611248488, 0.042589990639732414, 0.043604788069048911,
      0.044631933899197937, 0.045671428130179451, 0.046723270761993514,
      0.047787461794640142, 0.048864001228119264, 0.049952889062431,
      0.051039609372211144, 0.0520370648668251, 0.0529307390414215,
      0.053720631896000334, 0.054406743430561622, 0.054989073645105351,
      0.055467622539631493, 0.055842390114140085, 0.056113376368631111,
      0.056280581303104593, 0.056344004917560489, 0.056303647211998833,
      0.05615950818641962, 0.055911587840822841, 0.055559886175208482,
      0.055104403189576594, 0.054545138883927112, 0.0538820932582601,
      0.053115266312575529, 0.052244658046873373, 0.051270268461153623,
      0.050192097555416336, 0.049010145329661525, 0.047724411783889135,
      0.046334896918099153, 0.0448416007322916, 0.043244523226466533,
      0.041543664400623868, 0.039739024254763694, 0.037830602788885948,
      0.035818400002990594, 0.033702415897077648, 0.03148265047114715,
      0.029159103725199181, 0.02673177565923365, 0.024200666273250456,
      0.021565775567249708, 0.018827103541231485, 0.015984650195195602,
      0.013038415529142269, 0.0099883995430713642, 0.0068346022369826787,
      0.0036831641206061458, 0.00067970252216504928, -0.0021749052303356464,
      -0.0048806591368960022, -0.0074375591975162168, -0.00984560541219595,
      -0.012104797780935343, -0.014215136303734485, -0.016176620980593252,
      -0.017989251811511692, -0.019653028796489933, -0.021167951935527722,
      -0.022534021228625238, -0.023751236675782397, -0.024819598276999227,
      -0.025739106032275815, -0.026509759941611998, -0.027131560005007861,
      -0.027604506222463448, -0.027928598593978667, -0.028103837119553589,
      -0.028130221799188185, -0.028007752632882445, -0.027736429620636379,
      -0.027316252762450012, -0.026747222058323316, -0.026029337508256256,
      -0.025162599112248919, -0.024147006870301257, -0.022982560782413248,
      -0.02166926084858491, -0.020207107068816232, -0.018596099443107351,
      -0.016836237971458039, -0.014927522653868378, -0.012869953490338561,
      -0.01066353048086811, -0.0083082536254576456, -0.0058041229241066958,
      -0.0031511383768154134, -0.00034929998358402062, 0.0025884686909610167,
      0.0054941551155953368, 0.0083160619362507883, 0.011054189152927945,
      0.013708536765626221, 0.016279104774345632, 0.018765893179086546,
      0.021168901979848765, 0.023488131176632152, 0.02572358076943701,
      0.027875250758263182, 0.029943141143110679, 0.031927251923979348,
      0.033827583100869474, 0.035644134673781039, 0.037376906642713661,
      0.039025899007667737, 0.040591111768643134, 0.042072544925639735,
      0.04347019847865774, 0.044784072427697094, 0.046014166772757645,
      0.047160481513839621, 0.048223016650942911, 0.049201772184067433,
      0.050096748113213421, 0.050907944438380662, 0.051635361159569154,
      0.052278998276779017, 0.0528388557900102, 0.053314933699262664,
      0.053707232004536476, 0.0540157507058316, 0.054240489803148051,
      0.0543814492964858, 0.054438629185844883, 0.054412029471225282,
      0.054301650152626987, 0.054107491230050028, 0.053829552703494363,
      0.053467834572960032, 0.053022336838447016, 0.052508032640653513,
      0.051961523919985909, 0.051384474491576286, 0.050776884355424691,
      0.050138753511531117, 0.049470081959895572, 0.048770869700518062,
      0.048041116733398614, 0.047280823058537154, 0.046489988675933722,
      0.045668613585588373, 0.044816697787500991, 0.043934241281671636,
      0.04302124406810031, 0.042077706146787082, 0.041103627517731736,
      0.040099008180934495, 0.039063848136395345, 0.037998147384114153,
      0.036901905924090976, 0.035775123756325918, 0.034617800880818811,
      0.033429937297569733, 0.032211533006578752, 0.03096258800784572,
      0.029683102301370633, 0.028373075887153744, 0.027032508765194793,
      0.025661400935493871, 0.024259752398051067, 0.0228275631528662,
      0.02136483319993936, 0.019871562539270644, 0.018347751170859856,
      0.0167933990947071, 0.01520850631081236, 0.013593072819175654,
      0.01194709861979697, 0.010270583712676314, 0.0085635280978138047,
      0.0068259317752092027, 0.0050593421635005045, 0.0033349470066524355,
      0.0016914364039529626, 0.0001288103554022141, -0.0013529311389997121,
      -0.0027537880792530204, -0.0040737604653577, -0.0053128482973134718,
      -0.0064710515751206094, -0.0075483702987790271, -0.0085448044682886522,
      -0.0094603540836496278, -0.010295019144861884, -0.011048799651925366,
      -0.011721695604840177, -0.012313707003606266, -0.012824833848223634,
      -0.013255076138692277, -0.0136044338750122, -0.013872907057183397,
      -0.01406049568520586, -0.01416719975907962, -0.014193019278804658,
      -0.014137954244380975, -0.014002004655808571, -0.013785170513087436,
      -0.013487451816217614, -0.013108848565199015, -0.012649360760031715,
      -0.012108988400715738, -0.011487731487251001, -0.010785590019637541,
      -0.010002563997875415, -0.0091386534219645137, -0.0081938582919048927,
      -0.0071681786076966229, -0.0060616143693395519, -0.0048741655768337628,
      -0.003605832230179162, -0.0022566143293760218, -0.0008265118744240664,
      0.000684475134676614, 0.0022420246197513349, 0.0036962351484584963,
      0.0050295941381697457, 0.0062421015888850049, 0.0073337575006044336,
      0.0083045618733279519, 0.0091545147070555589, 0.0098836160017872557,
      0.010491865757523028, 0.010979263974262868, 0.011345810652006823,
      0.011591505790754873, 0.011716349390507003, 0.011720341451263234,
      0.011603481973023549, 0.011365770955787965, 0.011007208399556464,
      0.01052779430432901, 0.0099275286701056668, 0.0092064114968864776,
      0.008364442784671319, 0.0074016225334602413, 0.0063179507432533453,
      0.00511342741405045, 0.0037880525458516556, 0.0023418261386570372,
      0.00077474819246642172, -0.00091318129272011453, -0.0027219623169025594,
      -0.0046515948800809233, -0.0067020789822551975, -0.008873414623425226,
      -0.011165601803591323, -0.013578640522753326, -0.016112530780911061,
      -0.018767272578064886, -0.021542865914214622, -0.024439310789360069,
      -0.027456607203501626, -0.030594755156639324, -0.033853754648772709,
      -0.03723360567990177, 0.23374900962322498, 0.23730269611612823,
      0.24052419180594148, 0.24342559435367514, 0.24601900142033939,
      0.24831651066694491, 0.25033021975450181, 0.25207222634402049,
      0.25355462809651125, 0.2547895226729846, 0.2557890077344509,
      0.25656518094192032, 0.25713013995640338, 0.2574959824389102,
      0.25767480605045145, 0.25767870845203733, 0.25751978730467823,
      0.25721014026938438, 0.2567618650071663, 0.25618705917903423,
      0.25549782044599861, 0.25470624646906975, 0.2538244349092581,
      0.25286448342757384, 0.25183848968502737, 0.25075855134262914,
      0.24963676606138949, 0.24848523150231872, 0.2473160453264272,
      0.24614130519472532, 0.24497310876822337, 0.24382355370793168,
      0.24270473767486084, 0.2416287583300209, 0.24060771333442238,
      0.23965370034907557, 0.23877881703499088, 0.23799516105317864,
      0.23731483006464923, 0.23674992173041293, 0.23631253371148025,
      0.23601476366886132, 0.23586846571933848, 0.23587689585379906,
      0.23603261937204681, 0.23632753328166267, 0.23675353459022797,
      0.23730252030532356, 0.23796638743453075, 0.23873703298543061,
      0.23960635396560437, 0.24056624738263296, 0.24160861024409763,
      0.24272533955757944, 0.24390833233065959, 0.24514948557091909,
      0.24644069628593912, 0.2477738614833008, 0.24914087817058533,
      0.25053364335537365, 0.25194405404524706, 0.25336400724778657,
      0.25478539997057348, 0.25620012922118862, 0.25760009200721334,
      0.25897718533622865, 0.26032330621581579, 0.26163035165355575,
      0.26289021865702977, 0.26409480423381876, 0.26523600539150416,
      0.26630571913766676, 0.267295842479888, 0.26819827242574873,
      0.26900490598283028, 0.26970764015871374, 0.27029837196098,
      0.27076899839721041, 0.27111141647498604, 0.27131752320188807,
      0.2713792155854976, 0.2712883906333956, 0.27103694535316336,
      0.27061677675238188, 0.27002085851609925, 0.2692493221186078,
      0.26830521901257964, 0.26719160926441604, 0.26591155294051833,
      0.26446811010728777, 0.2628643408311257, 0.26110330517843339,
      0.25918806321561222, 0.2571216750090633, 0.25490720062518812,
      0.25254770013038774, 0.25004623359106376, 0.24740586107361723,
      0.24462964264444959, 0.241720638369962, 0.23868190831655581,
      0.23551651255063241, 0.23222751113859302, 0.22881796414683889,
      0.22529093164177144, 0.22164947368979185, 0.21789665035730135,
      0.21403552171070145, 0.2100691478163933, 0.20600058874077826,
      0.20183290455025754, 0.19756915531123245, 0.1932124010901044,
      0.18876570195327466, 0.18423211796714431, 0.17961470919811484,
      0.17491653571258753, 0.17014065757696373, 0.1652901348576446,
      0.16036802762103144, 0.15537739593352579, 0.15032129986152859,
      0.14520279947144127, 0.14002495482966532, 0.13479082600260178,
      0.12950348694811697, 0.12416769253293732, 0.11879146222121773,
      0.11338319056164217, 0.1079512721028945, 0.10250410139365859,
      0.097050072982618557, 0.091597581418457974, 0.086155021249861075,
      0.080730787025511647, 0.075333273294093381, 0.069970874604290426,
      0.064651985504786666, 0.059385000544265883, 0.0541783142714121,
      0.049040321234909166, 0.043979415983440878, 0.039003993065691432,
      0.034122447030344373, 0.029343172426083888, 0.024674563801593805,
      0.020125015705557844, 0.015702922686660147, 0.011416679293584416,
      0.0072746800750148688, 0.0032853195796351256, -0.000543007643870933,
      -0.0042019070468192312, -0.0076829840805258554, -0.010977844196307124,
      -0.014078092845478937, -0.016975335479357388, -0.019661177549258751,
      -0.022127224506498955, -0.024365081802394155, -0.0263663548882604,
      -0.028122649215413895, -0.02962557023517063, -0.030866723398846756,
      -0.031837714157758379, -0.032530147963221547, -0.032935630266552357,
      -0.033046917615708, -0.032870148218647914, -0.032420093689076473,
      -0.03171166953424024, -0.030759791261385821, -0.02957937437775976,
      -0.028185334390608677, -0.026592586807179061, -0.024816047134717578,
      -0.022870630880470821, -0.020771253551685357, -0.018532830655607659,
      -0.016170277699484342, -0.01369851019056215, -0.011132443636087407,
      -0.0084869935433069567, -0.005777075419467116, -0.0030176047718146713,
      -0.00022349710759601718, 0.0025903320659421683, 0.0054089672415532008,
      0.0082174929119906252, 0.01100099357000793, 0.013744553708358496,
      0.016433257819795575, 0.019052190397072823, 0.0215864359329435,
      0.024021078920161136, 0.026341203851479131, 0.028531895219650764,
      0.030578237517429691, 0.032465315237569146, 0.034178212872822619,
      0.035702014915943638, 0.037021805859685432, 0.0381226701968015,
      0.038989692420045331, 0.039607957022170279, 0.039962548495929784,
      0.040038551334077258, 0.039821050029366117, 0.039295131515870052,
      0.038451237284154741, 0.037296517296674464, 0.035841371443816265,
      0.034096199615967548, 0.032071401703515363, 0.02977737759684684,
      0.02722452718634923, 0.024423250362409582, 0.021383947015415138,
      0.018117017035753188, 0.014632860313810642, 0.010941876739974965,
      0.0070544662046331547, 0.0029810285981721218, -0.0012680361890204175,
      -0.0056823282665575637, -0.010251447744052296, -0.014964994731117162,
      -0.019812569337365481, -0.02478377167240936, -0.029868201845862037,
      -0.035055459967336493, -0.0403351461464452, -0.04569686049280134,
      -0.05113020311601759, -0.056624774125706594, -0.062170173631481349,
      -0.067756001742954861, -0.0733718585697396, -0.079007344221449,
      -0.084652058807695121, -0.090295602438091135, -0.0959275752222501,
      -0.10153757726978439, -0.10711520869030736, -0.11265006959343156,
      -0.11813176008876961, -0.12354988028593458, -0.1288940302945395,
      -0.13415381022419676, -0.13931882018451983, -0.14437890274455442,
      -0.14932947717099065, -0.15417153950075593, -0.15890632824472994,
      -0.16353508191379296, -0.16805903901882477, -0.17247943807070504,
      -0.17679751758031412, -0.18101451605853186, -0.18513167201623815,
      -0.18915022396431294, -0.19307141041363604, -0.19689646987508752,
      -0.20062664085954751, -0.20426316187789567, -0.20780727144101196,
      -0.21126020805977658, -0.21462321024506911, -0.21789751650776976,
      -0.22108436535875844, -0.22418499530891514, -0.22720064486911964,
      -0.23013255255025189, -0.2329819568631919, -0.23575009631881974,
      -0.23843820942801519, -0.24104753470165818, -0.24357931065062885,
      -0.24603477578580685, -0.24841516861807236, -0.25072172765830525,
      -0.2529556914173855, -0.25511829840619304, -0.25721078713560763,
      -0.25923439611650945, -0.2611903638597784, -0.26307992887629444,
      -0.26490432967693733, -0.2666648047725873, -0.268362592674124,
      -0.26999893189242752, -0.27157506093837797, -0.27309195675991638,
      -0.27454925152149412, -0.27594614641273274, -0.27728184242669246,
      -0.27855554055643389, -0.27976644179501714, -0.28091374713550266,
      -0.28199665757095088, -0.28301437409442215, -0.28396609769897679,
      -0.2848510293776752, -0.28566837012357765, -0.2864173209297447,
      -0.28709708278923657, -0.28770685669511364, -0.28824584364043643,
      -0.28871324461826503, -0.28910826062165995, -0.28943009264368169,
      -0.28967794167739036, -0.28985100871584663, -0.28994849475211054,
      -0.28996960077924261, -0.28991352779030333, -0.28977947677835286,
      -0.28956664873645166, -0.28927424465766005, -0.28890146553503848,
      -0.28844751236164723, -0.28791158613054685, -0.28729288783479751,
      -0.28659061846745953, -0.28580397902159355, -0.28493217049025965,
      -0.28397439386651829, -0.28292985014342992, -0.2817977403140548,
      -0.28057726537145344, -0.27926762630868607, -0.277868024118813,
      -0.27637765979489487, -0.27479574141646068, -0.27312190227154043,
      -0.27135643473305271, -0.26949968787075884, -0.26755201075442092,
      -0.26551375245380066, -0.26338526203865947, -0.26116688857875919,
      -0.25885898114386169, -0.25646188880372828, -0.25397596062812078,
      -0.251401545686801, -0.24873899304953084, -0.24598865178607149,
      -0.24315087096618468, -0.24022599965963282, -0.2372143869361768,
      -0.23411638186557865, -0.2309323335176002, -0.22766259096200281,
      -0.22430750326854829, -0.22086741950699862, -0.21734268874711501,
      -0.21373366005865943, -0.21004068251139377, -0.20626410517507895,
      -0.20240427711947748, -0.1984615474143511, -0.19443626512946083,
      -0.19032877933456874, -0.18613943909943678, -0.18186859349382609,
      -0.17751659158749861, -0.17308378245021608, -0.16857051515174049,
      -0.16397713876183287, -0.15930400235025494, -0.15455145498676937,
      -0.14971984574113689, -0.14480952368311947, -0.13982083788247918,
      -0.13475413740897696, -0.12961035090939649, -0.12439545162315813,
      -0.11911801027162734, -0.11378661904455707, -0.10840987013169999,
      -0.10299635572280863, -0.097554668007635736, -0.0920933991759342,
      -0.086621141417456013, -0.081146486921954031, -0.07567802787918132,
      -0.070224356478889749, -0.0647940649108323, -0.059395745364761589,
      -0.054037990030430652, -0.048729391097590939, -0.043478540755996227,
      -0.038294031195399085, -0.033184454605551424, -0.028158403176206281,
      -0.023224469097116548, -0.018391244558034158, -0.013667321748712137,
      -0.0090612928589033862, -0.004581750078359881, -0.00023728559683427238,
      0.0039635083959198968, 0.00801203971015096, 0.011899716156105952,
      0.015617945544032008, 0.01915813568417701, 0.022511694386788097,
      0.025670029462112439, 0.028624548720397842, 0.031366659971891461,
      0.033887771026840686, 0.036179289695492868, 0.038232623788095436,
      0.040039181114895676, 0.041590369486140963, 0.042877596712078865,
      0.043892286961423249, 0.044631410643101325, 0.045105534138434517,
      0.045327269004439986, 0.04530922679813508, 0.045064019076537037,
      0.0446042573966631, 0.043942553315530708, 0.043091518390157006,
      0.042063764177559256, 0.040871902234754939, 0.03952854411876109,
      0.038046301386595122, 0.03643778559527442, 0.034715608301816026,
      0.03289238106323733, 0.030980715436555648, 0.02899322297878822,
      0.026942515246952379, 0.02484120379806537, 0.022701900189144645,
      0.020537215977207184, 0.018359762719270412, 0.016182151972351781,
      0.014016995293468277, 0.011876904239637283, 0.0097744903678763043,
      0.0077223652352021287, 0.0057331403986325144, 0.0038194274151847141,
      0.0019938378418757332, 0.00026898323572301357, -0.0013425248462560699,
      -0.0028280748470444587, -0.0041750552096247225, -0.0053708543769795253,
      -0.0064028607920917548, -0.0072584628979440284, -0.0079250491375191055,
      -0.0083900079537995876, -0.0086407277897683, -0.0086645970884079125,
      -0.0084500371092214571, -0.0080019917786361954, -0.0073386939386492576,
      -0.006478752864620972, -0.0054407778319115465, -0.0042433781158813166,
      -0.0029051629918905937, -0.0014447417352996634, 0.00011927637853118364,
      0.0017682820742415083, 0.00348366607647125, 0.0052468191098600184,
      0.0070391318990473822, 0.0088419951686732664, 0.010636799643377293,
      0.012404936047799006, 0.014127795106578382, 0.015786767544355096,
      0.017363244085768635, 0.018838615455458688, 0.020194272378065179,
      0.021411605578227719, 0.022472005780585936, 0.023356863709779668,
      0.024047570090448552, 0.024525515647232255, 0.024772091104770553,
      0.024768687187703104, 0.024496694620669605, 0.023937504128309764,
      0.023072506435263283, 0.021883092266169971, 0.020350652345669348,
      0.018456577398401189, 0.016182258149005375, 0.013509085322121289,
      0.010418449642388779, 0.006891741834447811, 0.0029103526229375919,
      -0.0015443272675022771, -0.0064909071122314626, -0.011947996186610157,
      -0.011946629738206482, -0.006489502385324834, -0.0015428980221745595,
      0.002911793298894396, 0.006893181525532077, 0.010419876605388543,
      0.013510488486113839, 0.016183627115358021, 0.018457902440771123,
      0.020351924410003226, 0.021884302970704362, 0.023073648070524588,
      0.02393856965711396, 0.024497677678122515, 0.024769582081200316,
      0.024772892813997412, 0.024526219824163864, 0.024048173059349698,
      0.023357362467204976, 0.022472397995379773, 0.021411889591524118,
      0.020194447203288071, 0.018838680778321664, 0.017363200264274976,
      0.015786615608798026, 0.014127536759540893, 0.012404573664153633,
      0.010636336270286286, 0.0088414345255888975, 0.0070384783777115148,
      0.0052460777743042093, 0.0034828426630170162, 0.0017673829914999876,
      0.00011830870740317523, -0.0014457702416233523, -0.0029062439079295555,
      -0.0042445023438653952, -0.0054419356017808111, -0.0064799337340257432,
      -0.0073398867929501226, -0.0080031848309039533, -0.0084512179002371422,
      -0.0086657524780350929, -0.0086418444027792, -0.00839107316695774,
      -0.0079260511831360635, -0.0072593908638795626, -0.0064037046217535389,
      -0.0053716048693233532, -0.0041757040191543913, -0.0028286144838119841,
      -0.001342948675861517, 0.00026868099213173748, 0.0019936621076023383,
      0.0038193822579849802, 0.00573322903071429, 0.007722590013224913,
      0.00977485279295153, 0.01187740495732875, 0.01401763409379124,
      0.016182927789773625, 0.018360673632710604, 0.020538259210036727,
      0.022703072109186765, 0.024842499917595254, 0.026943930222696918,
      0.028994750611926377, 0.030982348672718221, 0.032894111992507212,
      0.0347174281587279, 0.036439684758814983, 0.038048269380203073,
      0.039530569610326895, 0.040873973036620971, 0.042065867246520047,
      0.043093639827458743, 0.043944678366871666, 0.044606370452193511,
      0.045066103670858892, 0.045311265610302506, 0.045329243857958987,
      0.045107426001262926, 0.044633199627648987, 0.043893952324551885,
      0.042879116982975869, 0.041591723743188765, 0.040040349663999338,
      0.038233588167232775, 0.036180032674714237, 0.033888276608268909,
      0.031366913389721973, 0.0286245364408986, 0.025669739183623995,
      0.022511115039723278, 0.019157257431021792, 0.015616759779344449,
      0.011898215506516679, 0.008010218034363541, 0.0039613607847102678,
      -0.00023976282061800511, -0.0045845593597961341, -0.0090644354109987585,
      -0.013670797552400863, -0.018395052362177339, -0.023228606418502783,
      -0.028162866299552045, -0.033189238583500216, -0.03829912984852181,
      -0.043483946672791776, -0.048735095634484915, -0.054043983311776039,
      -0.059402016282840066, -0.064800601125851523, -0.070231144418985564,
      -0.075685052740416967, -0.081153732668320308, -0.08662859078087061,
      -0.092101033656242615, -0.097562467872611192, -0.10300430000815122,
      -0.10841793664103724, -0.11379478434944433, -0.11912624971154739,
      -0.12440373930552093, -0.12961865970953995, -0.13476243897423359,
      -0.13982910338148422, -0.14481772539936077, -0.14972795727534127,
      -0.15455945125690373, -0.1593118595915263, -0.16398483452668669,
      -0.16857802830986329, -0.1730910931885338, -0.17752368141017624,
      -0.18187544522226887, -0.18614603687228945, -0.19033510860771613,
      -0.19444231267602688, -0.19846730132469972, -0.20240972680121258,
      -0.20626924135304361, -0.2100454972276706, -0.21373814667257188,
      -0.21734684193522513, -0.22087123526310851, -0.22431097890370011,
      -0.22766572510447783, -0.23093512611291972, -0.23411883417650364,
      -0.23721650154270782, -0.24022778045901028, -0.24315232317288882,
      -0.24598978193182156, -0.24873980898328657, -0.25140205657476167,
      -0.25397617695372504, -0.25646182236765475, -0.25885864506402861,
      -0.2611662972903247, -0.26338443129402106, -0.2655126993225958,
      -0.2675507536235267, -0.26949824644429193, -0.27135483003236949,
      -0.27312015663523737, -0.27479387850037335, -0.2763757044455914,
      -0.27786600092679564, -0.27926555868629882, -0.28057517553802397,
      -0.28179564929589351, -0.28292777777383027, -0.28397235878575683,
      -0.2849301901455959, -0.28580206966727, -0.28658879516470193,
      -0.2872911644518143, -0.28790997534252971, -0.28844602565077093,
      -0.28890011319046066, -0.28927303577552138, -0.2895655912198758,
      -0.28977857733744666, -0.28991279194215663, -0.28996903284792819,
      -0.28994809786868425, -0.28985078481834725, -0.28967789151084,
      -0.289430215760085, -0.28910855538000507, -0.2887137081845228,
      -0.28824647198756082, -0.28770764460304193, -0.28709802384488864,
      -0.28641840752702363, -0.28566959346336956, -0.28485237946784908,
      -0.28396756335438494, -0.28301594293689974, -0.28199831602931608,
      -0.2809154804455567, -0.27976823399954426, -0.27855737450520129,
      -0.27728369977645068, -0.27594800762721489, -0.27455109587141657,
      -0.27309376232297855, -0.27157680459956335, -0.27000058986100434,
      -0.26836414205737469, -0.26666622387398653, -0.26490559799615204,
      -0.26308102710918319, -0.26119127389839208, -0.2592351010490907,
      -0.25721127124659116, -0.25511854717620558, -0.25295569152324604,
      -0.25072146697302444, -0.24841463621085308, -0.24603396192204394,
      -0.24357820679190886, -0.24104613350576035, -0.23843650474891012,
      -0.23574808320667029, -0.23297963156435314, -0.23012991250727038,
      -0.22719768872073451, -0.22418172289005733, -0.22108077770055085,
      -0.21789361583752734, -0.21461899998629869, -0.211255692832177,
      -0.20780245706047451, -0.20425805535650318, -0.20062125040557491,
      -0.19689080489300209, -0.1930654815040963, -0.18914404292417025,
      -0.18512525183853562, -0.18100787093250442, -0.17679066289138895,
      -0.17247239040050102, -0.16805181614515285, -0.16352770281065665,
      -0.15889881308232434, -0.15416390964546783, -0.14932175518539947,
      -0.14437111238743089, -0.13931098635137387, -0.13414595784116223,
      -0.12888618335743396, -0.123542061829843, -0.11812399218804241,
      -0.11264237336168588, -0.10710760428042715, -0.10153008387391953,
      -0.095920211071816225, -0.090288384803771021, -0.0846450039994374,
      -0.079000467588469084, -0.073365174500519367, -0.067749523665241493,
      -0.062163914012289233, -0.056618744471316235, -0.051124413971975674,
      -0.045691321443921372, -0.040329865816806629, -0.03505044602028478,
      -0.029863460984009563, -0.024779309637634406, -0.019808390910813021,
      -0.014961103733198734, -0.01024784703444488, -0.0056790197442050929,
      -0.001265020792133067, 0.0029837508921180186, 0.0070568963788943673,
      0.010944016738542617, 0.01463471304140943, 0.018118586357841117,
      0.021385237758184232, 0.024424268312785106, 0.0272252790919904,
      0.029777871166146698, 0.0320716456056004, 0.034096203480697924,
      0.035841145861785911, 0.037296073819210726, 0.038450588423318964,
      0.039294290744457172, 0.039820031513873234, 0.040037369068065959,
      0.039961216179684525, 0.039606488063454667, 0.038988099934102169,
      0.038120967006352889, 0.037020004494932535, 0.035700127614566889,
      0.034176251579981755, 0.032463291605902916, 0.030576162907055931,
      0.028529780698166946, 0.026339060193961462, 0.02401891660916541,
      0.021584265158504531, 0.019050021056704419, 0.016431099518491147,
      0.013742415758590375, 0.010998884991727733, 0.0082154224326292345,
      0.0054069432960205457, 0.0025883627966272033, -0.00022540385082456,
      -0.0030194414316092842, -0.0057788347310010219, -0.008488668534274036,
      -0.011134027626702849, -0.013699996793561191, -0.016171660820123515,
      -0.018534104491664143, -0.020772412593457232, -0.022871669910776944,
      -0.02481696122889742, -0.026593371333093134, -0.02818598500863817,
      -0.029579887040806659, -0.03076016221487312, -0.031711895316111405,
      -0.03242017112979597, -0.032870074441201005, -0.033046690035600679,
      -0.032935246578322856, -0.032529605951471446, -0.031837011760955838,
      -0.030865858756505649, -0.029624541687850808, -0.028121455304721165,
      -0.02636499435684625, -0.024363553593955936, -0.022125527765780164,
      -0.019659311622048394, -0.016973299912490525, -0.01407588738683635,
      -0.010975468794815823, -0.0076804388861583441, -0.0041991924105935705,
      -0.00054012411785207349, 0.0032883712423371503, 0.0072778989202440881,
      0.011420064166138669, 0.0157064722302917, 0.020128728362973115,
      0.02467843781445285, 0.029347205835001777, 0.034126637674889757,
      0.039008338584386758, 0.043983913813763979, 0.049044968613290676,
      0.054183108233236965, 0.059389937923873912, 0.064657062935471327,
      0.069976088518299076, 0.075338619922628136, 0.080736262398728359,
      0.08616062119687, 0.091603301567322881, 0.097055908760358023,
      0.10251004802624564, 0.10795732461525481, 0.11338934377765694,
      0.11879771076372188, 0.12417403082371942, 0.1295099092079206,
      0.13479732624151933, 0.14003152687223566, 0.1452094370156474,
      0.15032799648065898, 0.15538414507617498, 0.1603748226111002,
      0.16529696889433923, 0.17014752373479647, 0.17492342694137733,
      0.17962161832298612, 0.18423903768852723, 0.188772624846906,
      0.19321931960702671, 0.19757606177779416, 0.20183979116811279,
      0.20600744758688808, 0.21007597084302385, 0.2140423007454248,
      0.21790337710299629, 0.2216561397246426, 0.2252975284192682,
      0.22882448299577837, 0.23223394326307753, 0.23552284903006995,
      0.23868814010566106, 0.24172675629875542, 0.24463563741825703,
      0.24741172327307132, 0.25005195367210276, 0.25255326842425574,
      0.2549126073384354, 0.25712691022354633, 0.259193116888493,
      0.26110816714218038, 0.26286900079351305, 0.2644725576513956,
      0.26591577752473294, 0.26719560022242961, 0.26830896555339023,
      0.26925281332651962, 0.27002408335072248, 0.27061972404847173,
      0.27103960422099227, 0.27129075164340327, 0.2713812709802868,
      0.27131926689622515, 0.27111284405580061, 0.27077010712359539,
      0.27029916076419197, 0.26970810964217234, 0.26900505842211886,
      0.26819811176861397, 0.26729537434623968, 0.26630495081957833,
      0.26523494585321244, 0.26409346411172385, 0.26288861025969512,
      0.26162848896170843, 0.26032120488234606, 0.25897486268619024,
      0.25759756703782327, 0.25619742260182754, 0.25478253404278511,
      0.25336100602527833, 0.25194094321388949, 0.25053045027320087,
      0.24913763186779461, 0.24777059266225332, 0.24643743732115866,
      0.24514627050909338, 0.2439051968906398, 0.24272232113037986,
      0.24160574789289604, 0.2405635818427706, 0.23960392764458571,
      0.23873488996292364, 0.23796457346236682, 0.23730108280749723,
      0.23675252266289737, 0.23632699769314949, 0.23603261256283581,
      0.2358774719365386, 0.2358696804788401, 0.23601667415365862,
      0.23631519126649467, 0.23675336616804155, 0.23731908948589639,
      0.23800025184765672, 0.23878474388091975, 0.23966045621328275,
      0.24061527947234304, 0.24163710428569796, 0.24271382128094474,
      0.24383332108568079, 0.24498349432750341, 0.24615223163400979,
      0.24732742363279731, 0.24849696095146337, 0.24964873421760497,
      0.25077063405881989, 0.25185055110270521, 0.25287637597685808,
      0.25383599930887596, 0.25471731172635603, 0.25550820385689577,
      0.25619656632809251, 0.25677028976754335, 0.25721726480284579,
      0.25752538206159692, 0.25768253217139431, 0.25767660575983509,
      0.25749549345451661, 0.25712708588303618, 0.25655927367299108,
      0.25577994745197874, 0.25477699784759633, 0.25353831548744116,
      0.25205179099911068, 0.250305315010202, 0.24828677814831251,
      0.2459840710410397, 0.24338508431598049, 0.24047770860073225,
      0.23724983452289256, 0.23368935271005883 } ;

    MPC_fmincon_DW.FromWorkspace_PWORK.TimePtr = (void *) pTimeValues0;
    MPC_fmincon_DW.FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
    MPC_fmincon_DW.FromWorkspace_IWORK.PrevIndex = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S1>/Unwrap 2^1' */

  /* S-Function Block: MPC_fmincon/Filter/Unwrap 2^1 (inverse_modulus_block) */
  {
    MPC_fmincon_DW.Unwrap21_FirstSample_o = true;
    MPC_fmincon_DW.Unwrap21_Revolutions_o = 0;
  }

  MPC_fmincon_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Integrator: '<S11>/Integrator2' */
  MPC_fmincon_X.Integrator2_CSTATE = MPC_fmincon_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<S15>/Integrator1' incorporates:
   *  Integrator: '<S16>/Integrator1'
   */
  if (rtmIsFirstInitCond(MPC_fmincon_M)) {
    MPC_fmincon_X.Integrator1_CSTATE = 0.0;
    MPC_fmincon_X.Integrator1_CSTATE_m = 0.0;
  }

  MPC_fmincon_DW.Integrator1_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S15>/Integrator1' */

  /* InitializeConditions for Integrator: '<S16>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_i = 1;

  /* InitializeConditions for Integrator: '<S14>/Integrator2' */
  MPC_fmincon_X.Integrator2_CSTATE_f = MPC_fmincon_P.Integrator2_IC_l;

  /* InitializeConditions for Integrator: '<S8>/Integrator' */
  MPC_fmincon_X.Integrator_CSTATE = MPC_fmincon_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S11>/Integrator1' incorporates:
   *  Integrator: '<S12>/Integrator1'
   */
  if (rtmIsFirstInitCond(MPC_fmincon_M)) {
    MPC_fmincon_X.Integrator1_CSTATE_p = 0.0;
    MPC_fmincon_X.Integrator1_CSTATE_h = 0.0;
  }

  MPC_fmincon_DW.Integrator1_IWORK_g = 1;

  /* End of InitializeConditions for Integrator: '<S11>/Integrator1' */

  /* InitializeConditions for Integrator: '<S12>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_d = 1;

  /* InitializeConditions for Integrator: '<S12>/Integrator2' */
  MPC_fmincon_X.Integrator2_CSTATE_i = MPC_fmincon_P.Integrator2_IC_j;

  /* InitializeConditions for Integrator: '<S13>/Integrator1' incorporates:
   *  Integrator: '<S14>/Integrator1'
   */
  if (rtmIsFirstInitCond(MPC_fmincon_M)) {
    MPC_fmincon_X.Integrator1_CSTATE_b = 0.0;
    MPC_fmincon_X.Integrator1_CSTATE_n = 0.0;
  }

  MPC_fmincon_DW.Integrator1_IWORK_gg = 1;

  /* End of InitializeConditions for Integrator: '<S13>/Integrator1' */

  /* InitializeConditions for Integrator: '<S13>/Integrator2' */
  MPC_fmincon_X.Integrator2_CSTATE_c = MPC_fmincon_P.Integrator2_IC_d;

  /* InitializeConditions for Integrator: '<S14>/Integrator1' */
  MPC_fmincon_DW.Integrator1_IWORK_l = 1;

  /* InitializeConditions for Integrator: '<S15>/Integrator2' */
  MPC_fmincon_X.Integrator2_CSTATE_m = MPC_fmincon_P.Integrator2_IC_n;

  /* InitializeConditions for Integrator: '<S16>/Integrator2' */
  MPC_fmincon_X.Integrator2_CSTATE_b = MPC_fmincon_P.Integrator2_IC_h;

  /* InitializeConditions for Integrator: '<S4>/Integrator5' */
  MPC_fmincon_X.Integrator5_CSTATE = MPC_fmincon_P.Integrator5_IC;

  /* InitializeConditions for Integrator: '<S5>/Integrator6' */
  MPC_fmincon_X.Integrator6_CSTATE = MPC_fmincon_P.Integrator6_IC;

  /* InitializeConditions for Integrator: '<S1>/Integrator3' */
  MPC_fmincon_X.Integrator3_CSTATE = MPC_fmincon_P.Integrator3_IC;

  /* InitializeConditions for Integrator: '<S9>/Integrator1' */
  MPC_fmincon_X.Integrator1_CSTATE_ng = MPC_fmincon_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<S10>/Integrator1' */
  if (rtmIsFirstInitCond(MPC_fmincon_M)) {
    MPC_fmincon_X.Integrator1_CSTATE_me = 0.0;
  }

  MPC_fmincon_DW.Integrator1_IWORK_a = 1;

  /* End of InitializeConditions for Integrator: '<S10>/Integrator1' */

  /* InitializeConditions for Integrator: '<S10>/Integrator2' */
  MPC_fmincon_X.Integrator2_CSTATE_k = MPC_fmincon_P.Integrator2_IC_a;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  MPC_fmincon_DW.sfEvent_g = MPC_fmincon_CALL_EVENT;
  MPC_fmincon_DW.is_active_c2_MPC_fmincon = 0U;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function2' */
  MPC_fmincon_DW.sfEvent = MPC_fmincon_CALL_EVENT;
  MPC_fmincon_DW.is_active_c4_MPC_fmincon = 0U;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(MPC_fmincon_M)) {
    rtmSetFirstInitCond(MPC_fmincon_M, 0);
  }
}

/* Model terminate function */
void MPC_fmincon_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S8>/HIL Initialize' */

  /* S-Function Block: MPC_fmincon/basicQCarIO/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(MPC_fmincon_DW.HILInitialize_Card);
    hil_monitor_stop_all(MPC_fmincon_DW.HILInitialize_Card);
    is_switching = false;
    if ((MPC_fmincon_P.HILInitialize_DOTerminate && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_DOExit && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &MPC_fmincon_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = MPC_fmincon_P.HILInitialize_DOFinal;
        }
      }

      num_final_digital_outputs = 16U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((MPC_fmincon_P.HILInitialize_POTerminate && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_POExit && is_switching)) {
      MPC_fmincon_DW.HILInitialize_POValues[0] =
        MPC_fmincon_P.HILInitialize_POFinal;
      MPC_fmincon_DW.HILInitialize_POValues[1] =
        MPC_fmincon_P.HILInitialize_POFinal;
      num_final_pwm_outputs = 2U;
    } else {
      num_final_pwm_outputs = 0;
    }

    if ((MPC_fmincon_P.HILInitialize_OOTerminate && !is_switching) ||
        (MPC_fmincon_P.HILInitialize_OOExit && is_switching)) {
      MPC_fmincon_DW.HILInitialize_OOValues[0] =
        MPC_fmincon_P.HILInitialize_OOFinal;
      MPC_fmincon_DW.HILInitialize_OOValues[1] =
        MPC_fmincon_P.HILInitialize_OOFinal;
      num_final_other_outputs = 2U;
    } else {
      num_final_other_outputs = 0;
    }

    if (0
        || num_final_pwm_outputs > 0
        || num_final_digital_outputs > 0
        || num_final_other_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(MPC_fmincon_DW.HILInitialize_Card
                         , NULL, 0
                         , MPC_fmincon_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , MPC_fmincon_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , MPC_fmincon_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , NULL
                         , &MPC_fmincon_DW.HILInitialize_POValues[0]
                         , (t_boolean *) &MPC_fmincon_DW.HILInitialize_DOBits[0]
                         , &MPC_fmincon_DW.HILInitialize_OOValues[0]
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm(MPC_fmincon_DW.HILInitialize_Card,
            MPC_fmincon_P.HILInitialize_POChannels, num_final_pwm_outputs,
            &MPC_fmincon_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital(MPC_fmincon_DW.HILInitialize_Card,
            MPC_fmincon_P.HILInitialize_DOChannels, num_final_digital_outputs,
            (t_boolean *) &MPC_fmincon_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other(MPC_fmincon_DW.HILInitialize_Card,
            MPC_fmincon_P.HILInitialize_OOChannels, num_final_other_outputs,
            &MPC_fmincon_DW.HILInitialize_OOValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(MPC_fmincon_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(MPC_fmincon_DW.HILInitialize_Card);
    hil_monitor_delete_all(MPC_fmincon_DW.HILInitialize_Card);
    hil_close(MPC_fmincon_DW.HILInitialize_Card);
    MPC_fmincon_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  MPC_fmincon_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  MPC_fmincon_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  MPC_fmincon_initialize();
}

void MdlTerminate(void)
{
  MPC_fmincon_terminate();
}

/* Registration function */
RT_MODEL_MPC_fmincon_T *MPC_fmincon(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)MPC_fmincon_M, 0,
                sizeof(RT_MODEL_MPC_fmincon_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&MPC_fmincon_M->solverInfo,
                          &MPC_fmincon_M->Timing.simTimeStep);
    rtsiSetTPtr(&MPC_fmincon_M->solverInfo, &rtmGetTPtr(MPC_fmincon_M));
    rtsiSetStepSizePtr(&MPC_fmincon_M->solverInfo,
                       &MPC_fmincon_M->Timing.stepSize0);
    rtsiSetdXPtr(&MPC_fmincon_M->solverInfo, &MPC_fmincon_M->derivs);
    rtsiSetContStatesPtr(&MPC_fmincon_M->solverInfo, (real_T **)
                         &MPC_fmincon_M->contStates);
    rtsiSetNumContStatesPtr(&MPC_fmincon_M->solverInfo,
      &MPC_fmincon_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&MPC_fmincon_M->solverInfo,
      &MPC_fmincon_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&MPC_fmincon_M->solverInfo,
      &MPC_fmincon_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&MPC_fmincon_M->solverInfo,
      &MPC_fmincon_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&MPC_fmincon_M->solverInfo, (&rtmGetErrorStatus
      (MPC_fmincon_M)));
    rtsiSetRTModelPtr(&MPC_fmincon_M->solverInfo, MPC_fmincon_M);
  }

  rtsiSetSimTimeStep(&MPC_fmincon_M->solverInfo, MAJOR_TIME_STEP);
  MPC_fmincon_M->intgData.f[0] = MPC_fmincon_M->odeF[0];
  MPC_fmincon_M->contStates = ((real_T *) &MPC_fmincon_X);
  rtsiSetSolverData(&MPC_fmincon_M->solverInfo, (void *)&MPC_fmincon_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&MPC_fmincon_M->solverInfo, false);
  rtsiSetSolverName(&MPC_fmincon_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = MPC_fmincon_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "MPC_fmincon_M points to
       static memory which is guaranteed to be non-NULL" */
    MPC_fmincon_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    MPC_fmincon_M->Timing.sampleTimes = (&MPC_fmincon_M->
      Timing.sampleTimesArray[0]);
    MPC_fmincon_M->Timing.offsetTimes = (&MPC_fmincon_M->
      Timing.offsetTimesArray[0]);

    /* task periods */
    MPC_fmincon_M->Timing.sampleTimes[0] = (0.0);
    MPC_fmincon_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    MPC_fmincon_M->Timing.offsetTimes[0] = (0.0);
    MPC_fmincon_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(MPC_fmincon_M, &MPC_fmincon_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = MPC_fmincon_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    MPC_fmincon_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(MPC_fmincon_M, -1);
  MPC_fmincon_M->Timing.stepSize0 = 0.002;
  MPC_fmincon_M->Timing.stepSize1 = 0.002;
  rtmSetFirstInitCond(MPC_fmincon_M, 1);

  /* External mode info */
  MPC_fmincon_M->Sizes.checksums[0] = (3028338210U);
  MPC_fmincon_M->Sizes.checksums[1] = (907367853U);
  MPC_fmincon_M->Sizes.checksums[2] = (2948544777U);
  MPC_fmincon_M->Sizes.checksums[3] = (2694126886U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    MPC_fmincon_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(MPC_fmincon_M->extModeInfo,
      &MPC_fmincon_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(MPC_fmincon_M->extModeInfo,
                        MPC_fmincon_M->Sizes.checksums);
    rteiSetTPtr(MPC_fmincon_M->extModeInfo, rtmGetTPtr(MPC_fmincon_M));
  }

  MPC_fmincon_M->solverInfoPtr = (&MPC_fmincon_M->solverInfo);
  MPC_fmincon_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&MPC_fmincon_M->solverInfo, 0.002);
  rtsiSetSolverMode(&MPC_fmincon_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  MPC_fmincon_M->blockIO = ((void *) &MPC_fmincon_B);
  (void) memset(((void *) &MPC_fmincon_B), 0,
                sizeof(B_MPC_fmincon_T));

  /* parameters */
  MPC_fmincon_M->defaultParam = ((real_T *)&MPC_fmincon_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &MPC_fmincon_X;
    MPC_fmincon_M->contStates = (x);
    (void) memset((void *)&MPC_fmincon_X, 0,
                  sizeof(X_MPC_fmincon_T));
  }

  /* states (dwork) */
  MPC_fmincon_M->dwork = ((void *) &MPC_fmincon_DW);
  (void) memset((void *)&MPC_fmincon_DW, 0,
                sizeof(DW_MPC_fmincon_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    MPC_fmincon_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 24;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  MPC_fmincon_M->Sizes.numContStates = (19);/* Number of continuous states */
  MPC_fmincon_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  MPC_fmincon_M->Sizes.numY = (0);     /* Number of model outputs */
  MPC_fmincon_M->Sizes.numU = (0);     /* Number of model inputs */
  MPC_fmincon_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  MPC_fmincon_M->Sizes.numSampTimes = (2);/* Number of sample times */
  MPC_fmincon_M->Sizes.numBlocks = (133);/* Number of blocks */
  MPC_fmincon_M->Sizes.numBlockIO = (42);/* Number of block outputs */
  MPC_fmincon_M->Sizes.numBlockPrms = (176);/* Sum of parameter "widths" */
  return MPC_fmincon_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
