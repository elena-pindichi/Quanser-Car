/*
 * test3.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "test3".
 *
 * Model version              : 15.55
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Mon May  5 16:02:17 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test3.h"
#include "rtwtypes.h"
#include "test3_types.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "test3_private.h"
#include <string.h>
#include "rt_defines.h"
#include <stdlib.h>
#include <stddef.h>
#include "zero_crossing_types.h"
#include "test3_dt.h"

/* Named constants for MATLAB Function: '<Root>/MATLAB Function' */
#define test3_CALL_EVENT               (-1)

/* Block signals (default storage) */
B_test3_T test3_B;

/* Continuous states */
X_test3_T test3_X;

/* Block states (default storage) */
DW_test3_T test3_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_test3_T test3_PrevZCX;

/* Real-time model */
static RT_MODEL_test3_T test3_M_;
RT_MODEL_test3_T *const test3_M = &test3_M_;

/* Forward declaration for local functions */
static void test3_emxInit_real_T(emxArray_real_T_test3_T **pEmxArray, int32_T
  numDimensions);
static void test3_emxEnsureCapacity_real_T(emxArray_real_T_test3_T *emxArray,
  int32_T oldNumel);
static void test3_emxFree_real_T(emxArray_real_T_test3_T **pEmxArray);
static void test3_eML_blk_kernel_anonFcn2(const real_T x0[4], real_T N, const
  emxArray_real_T_test3_T *u, emxArray_real_T_test3_T *varargout_1,
  emxArray_real_T_test3_T *varargout_2);
static void test3_emxInit_int32_T(emxArray_int32_T_test3_T **pEmxArray, int32_T
  numDimensions);
static void emxInitStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *pStruct);
static void test3_emxEnsureCapacity_int32_T(emxArray_int32_T_test3_T *emxArray,
  int32_T oldNumel);
static void test3_factoryConstruct(int32_T nVarMax, int32_T mConstrMax, int32_T
  mIneq, int32_T mEq, const emxArray_real_T_test3_T *x0, int32_T mNonlinIneq,
  int32_T mNonlinEq, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *obj);
static void emxInitStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_test_T
  *pStruct);
static void emxInitStruct_anonymous_functio(anonymous_function_test3_T *pStruct);
static void emxInitStruct_coder_in_kyv1kfe2(coder_internal_stickyStruct_1_T
  *pStruct);
static void emxInitStruct_coder_int_kyv1kfe(coder_internal_stickyStruct_2_T
  *pStruct);
static void emxInitStruct_coder_inte_kyv1kf(coder_internal_stickyStruct_3_T
  *pStruct);
static void emxInitStruct_coder_inter_kyv1k(coder_internal_stickyStruct_4_T
  *pStruct);
static void emxInitStruct_coder_intern_kyv1(coder_internal_stickyStruct_5_T
  *pStruct);
static void emxInitStruct_coder_interna_kyv(coder_internal_stickyStruct_6_T
  *pStruct);
static void emxInitStruct_coder_internal_ky(coder_internal_stickyStruct_7_T
  *pStruct);
static void emxInitStruct_coder_internal__k(coder_internal_stickyStruct_8_T
  *pStruct);
static void emxInitStruct_coder_internal_st(coder_internal_stickyStruct_9_T
  *pStruct);
static void test3_emxInit_boolean_T(emxArray_boolean_T_test3_T **pEmxArray,
  int32_T numDimensions);
static void emxInitStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_test_T
  *pStruct);
static void tes_emxEnsureCapacity_boolean_T(emxArray_boolean_T_test3_T *emxArray,
  int32_T oldNumel);
static void test3_factoryConstruct_i(const real_T objfun_workspace_x0[4], const
  emxArray_real_T_test3_T *objfun_workspace_xref, const emxArray_real_T_test3_T *
  objfun_workspace_uref, real_T objfun_workspace_N, const
  s6lIrH89xwD47fl4e1dZNiE_test3_T nonlin_workspace, int32_T nVar, int32_T mCineq,
  int32_T mCeq, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T
  *ub, s_tzdJIwhhx1jgWYIJOPrjUD_test_T *obj);
static void emxInitStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *pStruct);
static void emxInitStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_test_T
  *pStruct);
static void emxInitStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *pStruct);
static void emxInitStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *pStruct);
static void emxInitStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *pStruct);
static void test3_factoryConstruct_ir(int32_T mIneqMax, int32_T mEqMax, int32_T
  nVar, int32_T nVarMax, int32_T mConstrMax, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *obj);
static void test3_compressBounds(int32_T nVar, emxArray_int32_T_test3_T *indexLB,
  emxArray_int32_T_test3_T *indexUB, emxArray_int32_T_test3_T *indexFixed, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub, int32_T *mLB,
  int32_T *mUB, int32_T *mFixed);
static void test3_binary_expand_op(real_T in1[2], const emxArray_real_T_test3_T *
  in2, int32_T in3, int32_T in4, const emxArray_real_T_test3_T *in5, int32_T in6);
static real_T test3_eML_blk_kernel_anonFcn1(const real_T x0[4], const
  emxArray_real_T_test3_T *xref, const emxArray_real_T_test3_T *uref, real_T N,
  const emxArray_real_T_test3_T *u);
static void test3_emxFree_int32_T(emxArray_int32_T_test3_T **pEmxArray);
static int32_T test3_checkVectorNonFinite(int32_T N, const
  emxArray_real_T_test3_T *vec, int32_T iv0);
static int32_T test3_computeConstraints_(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *Cineq_workspace,
  int32_T ineq0, emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0);
static boolean_T test3_finDiffEvalAndChkErr(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_test3_T
  *obj_objfun_workspace_xref, const emxArray_real_T_test3_T
  *obj_objfun_workspace_uref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_test3_T *cIneqPlus,
  emxArray_real_T_test3_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_test3_T *xk);
static boolean_T test3_computeFiniteDifferences(s_tzdJIwhhx1jgWYIJOPrjUD_test_T *
  obj, real_T fCurrent, const emxArray_real_T_test3_T *cIneqCurrent, int32_T
  ineq0, const emxArray_real_T_test3_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_test3_T *xk, emxArray_real_T_test3_T *gradf,
  emxArray_real_T_test3_T *JacCineqTrans, int32_T CineqColStart, int32_T ldJI,
  emxArray_real_T_test3_T *JacCeqTrans, int32_T CeqColStart, int32_T ldJE, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub);
static void test3_updateWorkingSetForNewQP(const emxArray_real_T_test3_T *xk,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, int32_T mIneq, int32_T
  mNonlinIneq, const emxArray_real_T_test3_T *cIneq, int32_T mEq, int32_T
  mNonlinEq, const emxArray_real_T_test3_T *cEq, int32_T mLB, const
  emxArray_real_T_test3_T *lb, int32_T mUB, const emxArray_real_T_test3_T *ub,
  int32_T mFixed);
static void test3_modifyOverheadPhaseOne_(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj);
static void test3_setProblemType(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  PROBLEM_TYPE);
static void test3_xgemv(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
  emxArray_real_T_test3_T *y);
static void test3_computeGradLag(emxArray_real_T_test3_T *workspace, int32_T ldA,
  int32_T nVar, const emxArray_real_T_test3_T *grad, int32_T mIneq, const
  emxArray_real_T_test3_T *AineqTrans, int32_T mEq, const
  emxArray_real_T_test3_T *AeqTrans, const emxArray_int32_T_test3_T *finiteFixed,
  int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const
  emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const emxArray_real_T_test3_T
  *lambda);
static real_T test3_computePrimalFeasError(const emxArray_real_T_test3_T *x,
  int32_T mLinIneq, int32_T mNonlinIneq, const emxArray_real_T_test3_T *cIneq,
  int32_T mLinEq, int32_T mNonlinEq, const emxArray_real_T_test3_T *cEq, const
  emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const emxArray_real_T_test3_T
  *lb, const emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const
  emxArray_real_T_test3_T *ub);
static void test3_computeDualFeasError(int32_T nVar, const
  emxArray_real_T_test3_T *gradLag, boolean_T *gradOK, real_T *val);
static void test3_test_exit(sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  const s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, const emxArray_real_T_test3_T *lb,
  const emxArray_real_T_test3_T *ub, int32_T runTimeOptions_MaxFunctionEvalu,
  boolean_T *Flags_gradOK, boolean_T *Flags_fevalOK, boolean_T *Flags_done,
  boolean_T *Flags_stepAccepted, boolean_T *Flags_failedLineSearch, int32_T
  *Flags_stepType);
static void test3_saveJacobian(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *obj, int32_T
  nVar, int32_T mIneq, const emxArray_real_T_test3_T *JacCineqTrans, int32_T
  ineqCol0, int32_T mEq, const emxArray_real_T_test3_T *JacCeqTrans, int32_T
  eqCol0, int32_T ldJ);
static real_T test3_computeComplError(const emxArray_real_T_test3_T
  *fscales_cineq_constraint, const emxArray_real_T_test3_T *xCurrent, int32_T
  mIneq, const emxArray_real_T_test3_T *cIneq, const emxArray_int32_T_test3_T
  *finiteLB, int32_T mLB, const emxArray_real_T_test3_T *lb, const
  emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const emxArray_real_T_test3_T
  *ub, const emxArray_real_T_test3_T *lambda, int32_T iL0);
static void test3_xgemv_b(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
  emxArray_real_T_test3_T *y);
static void test3_computeGradLag_l(emxArray_real_T_test3_T *workspace, int32_T
  ldA, int32_T nVar, const emxArray_real_T_test3_T *grad, int32_T mIneq, const
  emxArray_real_T_test3_T *AineqTrans, int32_T mEq, const
  emxArray_real_T_test3_T *AeqTrans, const emxArray_int32_T_test3_T *finiteFixed,
  int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const
  emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const emxArray_real_T_test3_T
  *lambda);
static real_T test3_xnrm2(int32_T n, const emxArray_real_T_test3_T *x, int32_T
  ix0);
static real_T test3_xzlarfg(int32_T n, real_T *alpha1, emxArray_real_T_test3_T
  *x, int32_T ix0);
static void test3_xgemv_bu(int32_T m, int32_T n, const emxArray_real_T_test3_T
  *A, int32_T ia0, int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
  emxArray_real_T_test3_T *y);
static void test3_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0, const
  emxArray_real_T_test3_T *y, emxArray_real_T_test3_T *A, int32_T ia0, int32_T
  lda);
static void test3_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  emxArray_real_T_test3_T *C, int32_T ic0, int32_T ldc, emxArray_real_T_test3_T *
  work);
static void test3_qrf(emxArray_real_T_test3_T *A, int32_T m, int32_T n, int32_T
                      nfxd, emxArray_real_T_test3_T *tau);
static void test3_xgeqp3(emxArray_real_T_test3_T *A, int32_T m, int32_T n,
  emxArray_int32_T_test3_T *jpvt, emxArray_real_T_test3_T *tau);
static void test3_computeQ_(s_l1Gll5dfO9DpqQrvRqAf7E_test_T *obj, int32_T nrows);
static void test3_xgemv_buj(int32_T m, int32_T n, const emxArray_real_T_test3_T *
  A, int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y);
static void test3_sortLambdaQP(emxArray_real_T_test3_T *lambda, int32_T
  WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
  WorkingSet_isActiveIdx[6], const emxArray_int32_T_test3_T *WorkingSet_Wid,
  const emxArray_int32_T_test3_T *WorkingSet_Wlocalidx, emxArray_real_T_test3_T *
  workspace);
static void test3_test_exit_k(s7RdrPWkr8UPAUyTdDJkLaG_test3_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const emxArray_real_T_test3_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub, int32_T
  runTimeOptions_MaxFunctionEvalu);
static boolean_T test3_BFGSUpdate(int32_T nvar, emxArray_real_T_test3_T *Bk,
  const emxArray_real_T_test3_T *sk, emxArray_real_T_test3_T *yk,
  emxArray_real_T_test3_T *workspace);
static void test3_xgemv_bujmjslzp1(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y);
static void test3_countsort(emxArray_int32_T_test3_T *x, int32_T xLen,
  emxArray_int32_T_test3_T *workspace, int32_T xMin, int32_T xMax);
static void test3_removeConstr(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  idx_global);
static void test3_factorQR(s_l1Gll5dfO9DpqQrvRqAf7E_test_T *obj, const
  emxArray_real_T_test3_T *A, int32_T mrows, int32_T ncols, int32_T ldA);
static void test3_xgemv_bujm(int32_T m, int32_T n, const emxArray_real_T_test3_T
  *A, int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y);
static void test3_xgemv_bujmj(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  int32_T ix0, emxArray_real_T_test3_T *y);
static real_T test3_maxConstraintViolation(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj,
  const emxArray_real_T_test3_T *x, int32_T ix0);
static boolean_T test3_feasibleX0ForWorkingSet(emxArray_real_T_test3_T
  *workspace, emxArray_real_T_test3_T *xCurrent, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager);
static void test3_xgemv_bujmjs(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y);
static real_T test3_maxConstraintViolation_h(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *obj, const emxArray_real_T_test3_T *x);
static void test3_PresolveWorkingSet(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager);
static void test3_emxCopy_real_T(emxArray_real_T_test3_T **dst,
  emxArray_real_T_test3_T * const *src);
static void test3_emxCopy_int32_T(emxArray_int32_T_test3_T **dst,
  emxArray_int32_T_test3_T * const *src);
static void test3_emxCopyMatrix_int32_T(int32_T dst[5], const int32_T src[5]);
static void test3_emxCopyMatrix_int32_T1(int32_T dst[6], const int32_T src[6]);
static void test3_emxCopy_boolean_T(emxArray_boolean_T_test3_T **dst,
  emxArray_boolean_T_test3_T * const *src);
static void emxCopyStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *dst,
  const s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *src);
static void test3_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
  emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, const emxArray_real_T_test3_T *x);
static real_T test3_computeFval(const s_saWPFfMboRdWeRqIEJ4x8C_test_T *obj,
  emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, const emxArray_real_T_test3_T *x);
static void test3_xgemv_bujmjsl(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y);
static void test3_computeGrad_StoreHx(s_saWPFfMboRdWeRqIEJ4x8C_test_T *obj,
  const emxArray_real_T_test3_T *H, const emxArray_real_T_test3_T *f, const
  emxArray_real_T_test3_T *x);
static real_T test3_computeFval_ReuseHx(const s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *obj, emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *f,
  const emxArray_real_T_test3_T *x);
static void test3_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void test3_deleteColMoveEnd(s_l1Gll5dfO9DpqQrvRqAf7E_test_T *obj, int32_T
  idx);
static void test3_xgemm(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *B,
  int32_T ib0, int32_T ldb, emxArray_real_T_test3_T *C, int32_T ldc);
static void test3_xgemm_b(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_test3_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_test3_T *B, int32_T ldb, emxArray_real_T_test3_T *C, int32_T
  ldc);
static void test3_fullColLDL2_(s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj, int32_T
  LD_offset, int32_T NColsRemain);
static void test3_partialColLDL3_(s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj, int32_T
  LD_offset, int32_T NColsRemain);
static int32_T test3_xpotrf(int32_T n, emxArray_real_T_test3_T *A, int32_T lda);
static void test3_xgemv_bujmjslz(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y);
static void test3_solve(const s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj,
  emxArray_real_T_test3_T *rhs);
static void test3_factor(s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj, const
  emxArray_real_T_test3_T *A, int32_T ndims, int32_T ldA);
static void test3_solve_k(const s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj,
  emxArray_real_T_test3_T *rhs);
static void test3_compute_deltax(const emxArray_real_T_test3_T *H,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution, s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *memspace, const s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, const
  s_saWPFfMboRdWeRqIEJ4x8C_test_T *objective, boolean_T alwaysPositiveDef);
static real_T test3_xnrm2_a(int32_T n, const emxArray_real_T_test3_T *x);
static void test3_xgemv_bujmjslzp(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y);
static void test3_feasibleratiotest(const emxArray_real_T_test3_T
  *solution_xstar, const emxArray_real_T_test3_T *solution_searchDir,
  emxArray_real_T_test3_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_test3_T *workingset_Aineq, const
  emxArray_real_T_test3_T *workingset_bineq, const emxArray_real_T_test3_T
  *workingset_lb, const emxArray_real_T_test3_T *workingset_ub, const
  emxArray_int32_T_test3_T *workingset_indexLB, const emxArray_int32_T_test3_T
  *workingset_indexUB, const int32_T workingset_sizes[5], const int32_T
  workingset_isActiveIdx[6], const emxArray_boolean_T_test3_T
  *workingset_isActiveConstr, const int32_T workingset_nWConstr[5], boolean_T
  isPhaseOne, real_T *alpha, boolean_T *newBlocking, int32_T *constrType,
  int32_T *constrIdx);
static void test_addBoundToActiveSetMatrix_(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj,
  int32_T TYPE, int32_T idx_local);
static void test3_addAineqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  idx_local);
static void test3_iterate(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, const char_T options_SolverName[7], real_T options_StepTolerance,
  real_T options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
static void test3_emxFree_boolean_T(emxArray_boolean_T_test3_T **pEmxArray);
static void emxFreeStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *pStruct);
static void test3_driver_d(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, somzaGboVhDG7PNQS6E98jD_test3_T *options, int32_T
  runTimeOptions_MaxIterations);
static void test3_addAeqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  idx_local);
static boolean_T test3_soc(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, const somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions);
static void test3_relaxed(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions);
static boolean_T test3_step_o(int32_T *STEP_TYPE, emxArray_real_T_test3_T
  *Hessian, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *QRManager, s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager,
  s_saWPFfMboRdWeRqIEJ4x8C_test_T *QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *
  qpoptions);
static void test3_evalObjAndConstr(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const s_orfxVcOir3wnnUkquctgqH_test_T obj_next_next_next_next_next__1, const
  emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *Cineq_workspace, int32_T
  ineq0, emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0, real_T *fval,
  int32_T *status);
static real_T test3_computeMeritFcn(real_T obj_penaltyParam, real_T fval, const
  emxArray_real_T_test3_T *Cineq_workspace, int32_T mIneq, const
  emxArray_real_T_test3_T *Ceq_workspace, int32_T mEq, boolean_T evalWellDefined);
static void test3_driver(emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const coder_internal_stickyStruct_9_T *FcnEvaluator,
  s_tzdJIwhhx1jgWYIJOPrjUD_test_T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, const emxArray_real_T_test3_T *fscales_cineq_constraint, int32_T
  runTimeOptions_MaxFunctionEvalu);
static void emxFreeStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *pStruct);
static void emxFreeStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *pStruct);
static void emxFreeStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_test_T
  *pStruct);
static void emxFreeStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *pStruct);
static void emxFreeStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_test_T
  *pStruct);
static void emxFreeStruct_anonymous_functio(anonymous_function_test3_T *pStruct);
static void emxFreeStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_test_T
  *pStruct);
static void emxFreeStruct_coder_internal_st(coder_internal_stickyStruct_1_T
  *pStruct);
static void emxFreeStruct_coder_internal__k(coder_internal_stickyStruct_2_T
  *pStruct);
static void emxFreeStruct_coder_internal_ky(coder_internal_stickyStruct_3_T
  *pStruct);
static void emxFreeStruct_coder_interna_kyv(coder_internal_stickyStruct_4_T
  *pStruct);
static void emxFreeStruct_coder_intern_kyv1(coder_internal_stickyStruct_5_T
  *pStruct);
static void emxFreeStruct_coder_inter_kyv1k(coder_internal_stickyStruct_6_T
  *pStruct);
static void emxFreeStruct_coder_inte_kyv1kf(coder_internal_stickyStruct_7_T
  *pStruct);
static void emxFreeStruct_coder_int_kyv1kfe(coder_internal_stickyStruct_8_T
  *pStruct);
static void emxFreeStruct_coder_in_kyv1kfe2(coder_internal_stickyStruct_9_T
  *pStruct);
static void emxFreeStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *pStruct);
static void test3_fmincon(const real_T fun_workspace_x0[4], const
  emxArray_real_T_test3_T *fun_workspace_xref, const emxArray_real_T_test3_T
  *fun_workspace_uref, real_T fun_workspace_N, const emxArray_real_T_test3_T *x0,
  const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub, const
  s6lIrH89xwD47fl4e1dZNiE_test3_T nonlcon_workspace, emxArray_real_T_test3_T *x);
static void test3_eML_blk_kernel_anonFcn2_m(const real_T x0[4], real_T N, const
  emxArray_real_T_test3_T *w, emxArray_real_T_test3_T *varargout_1,
  emxArray_real_T_test3_T *varargout_2);
static void emxInitStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_test_T
  *pStruct);
static void emxInitStruct_anonymous_funct_k(anonymous_function_test3_k_T
  *pStruct);
static void emxInitStruct_coder_internal__p(coder_internal_stickyStruct_k_T
  *pStruct);
static void emxInitStruct_coder_internal__d(coder_internal_stickyStruc_ky_T
  *pStruct);
static void emxInitStruct_c_kyv1kfe2tm4hq5k(coder_internal_stickyStru_kyv_T
  *pStruct);
static void emxInitStruct_co_kyv1kfe2tm4hq5(coder_internal_stickyStr_kyv1_T
  *pStruct);
static void emxInitStruct_cod_kyv1kfe2tm4hq(coder_internal_stickySt_kyv1k_T
  *pStruct);
static void emxInitStruct_code_kyv1kfe2tm4h(coder_internal_stickyS_kyv1kf_T
  *pStruct);
static void emxInitStruct_coder_kyv1kfe2tm4(coder_internal_sticky_kyv1kfe_T
  *pStruct);
static void emxInitStruct_coder__kyv1kfe2tm(coder_internal_stick_kyv1kfe2_T
  *pStruct);
static void emxInitStruct_coder_i_kyv1kfe2t(coder_internal_stickyStruct_c_T
  *pStruct);
static void emxInitStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_test_T
  *pStruct);
static real_T test3_eML_blk_kernel_anonFcn1_e(const real_T x0[4], const
  emxArray_real_T_test3_T *zref, const emxArray_real_T_test3_T *wref, real_T N,
  const emxArray_real_T_test3_T *w);
static int32_T test3_computeConstraints__c(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0);
static boolean_T test3_finDiffEvalAndChkErr_p(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_test3_T
  *obj_objfun_workspace_zref, const emxArray_real_T_test3_T
  *obj_objfun_workspace_wref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_test3_T *cIneqPlus,
  emxArray_real_T_test3_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_test3_T *xk);
static boolean_T test_computeFiniteDifferences_k(s_9imJcZ2iwk426vK9Q2bBEG_test_T
  *obj, real_T fCurrent, const emxArray_real_T_test3_T *cIneqCurrent, int32_T
  ineq0, const emxArray_real_T_test3_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_test3_T *xk, emxArray_real_T_test3_T *gradf,
  emxArray_real_T_test3_T *JacCineqTrans, int32_T CineqColStart, int32_T ldJI,
  emxArray_real_T_test3_T *JacCeqTrans, int32_T CeqColStart, int32_T ldJE);
static void test3_modifyOverheadPhaseOne__h(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj);
static void test3_setProblemType_g(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  PROBLEM_TYPE);
static real_T test3_computePrimalFeasError_d(int32_T mLinIneq, int32_T
  mNonlinIneq, const emxArray_real_T_test3_T *cIneq, int32_T mLinEq, int32_T
  mNonlinEq, const emxArray_real_T_test3_T *cEq);
static void test3_test_exit_ks(sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  const s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, int32_T
  runTimeOptions_MaxFunctionEvalu, boolean_T *Flags_gradOK, boolean_T
  *Flags_fevalOK, boolean_T *Flags_done, boolean_T *Flags_stepAccepted,
  boolean_T *Flags_failedLineSearch, int32_T *Flags_stepType);
static real_T test3_computeComplError_c(const emxArray_real_T_test3_T
  *fscales_cineq_constraint, int32_T mIneq, const emxArray_real_T_test3_T *cIneq,
  int32_T mLB, const emxArray_real_T_test3_T *lambda, int32_T iL0);
static void test_updateWorkingSetForNewQP_b(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, int32_T mIneq, int32_T mNonlinIneq, const emxArray_real_T_test3_T
  *cIneq, int32_T mEq, int32_T mNonlinEq, const emxArray_real_T_test3_T *cEq);
static void test3_sortLambdaQP_e(emxArray_real_T_test3_T *lambda, int32_T
  WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
  WorkingSet_isActiveIdx[6], const emxArray_int32_T_test3_T *WorkingSet_Wid,
  const emxArray_int32_T_test3_T *WorkingSet_Wlocalidx, emxArray_real_T_test3_T *
  workspace);
static void test3_test_exit_ksj(s7RdrPWkr8UPAUyTdDJkLaG_test3_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const emxArray_real_T_test3_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager, int32_T
  runTimeOptions_MaxFunctionEvalu);
static boolean_T test3_feasibleX0ForWorkingSet_n(emxArray_real_T_test3_T
  *workspace, emxArray_real_T_test3_T *xCurrent, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager);
static real_T test3_maxConstraintViolation_f(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *obj, const emxArray_real_T_test3_T *x);
static void test3_PresolveWorkingSet_p(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager);
static void test3_feasibleratiotest_e(const emxArray_real_T_test3_T
  *solution_xstar, const emxArray_real_T_test3_T *solution_searchDir,
  emxArray_real_T_test3_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_test3_T *workingset_Aineq, const
  emxArray_real_T_test3_T *workingset_bineq, const emxArray_real_T_test3_T
  *workingset_lb, const emxArray_int32_T_test3_T *workingset_indexLB, const
  int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_test3_T *workingset_isActiveConstr, const int32_T
  workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
  *newBlocking, int32_T *constrType, int32_T *constrIdx);
static void test3_iterate_b(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, const char_T options_SolverName[7], real_T options_StepTolerance,
  real_T options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
static void test3_driver_hb(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, somzaGboVhDG7PNQS6E98jD_test3_T *options, int32_T
  runTimeOptions_MaxIterations);
static void test3_relaxed_i(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions);
static boolean_T test3_step_p(int32_T *STEP_TYPE, emxArray_real_T_test3_T
  *Hessian, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions);
static void test3_evalObjAndConstr_f(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const s_lZflMU9sVqxC63IejQkKIC_test_T obj_next_next_next_next_next__1, const
  emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *Cineq_workspace, int32_T
  ineq0, emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0, real_T *fval,
  int32_T *status);
static void test3_driver_h(emxArray_real_T_test3_T *Hessian,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const coder_internal_stickyStruct_c_T *FcnEvaluator,
  s_9imJcZ2iwk426vK9Q2bBEG_test_T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, const emxArray_real_T_test3_T *fscales_cineq_constraint, int32_T
  runTimeOptions_MaxFunctionEvalu);
static void emxFreeStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_test_T
  *pStruct);
static void emxFreeStruct_anonymous_funct_k(anonymous_function_test3_k_T
  *pStruct);
static void emxFreeStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_test_T
  *pStruct);
static void emxFreeStruct_coder_i_kyv1kfe2t(coder_internal_stickyStruct_k_T
  *pStruct);
static void emxFreeStruct_coder__kyv1kfe2tm(coder_internal_stickyStruc_ky_T
  *pStruct);
static void emxFreeStruct_coder_kyv1kfe2tm4(coder_internal_stickyStru_kyv_T
  *pStruct);
static void emxFreeStruct_code_kyv1kfe2tm4h(coder_internal_stickyStr_kyv1_T
  *pStruct);
static void emxFreeStruct_cod_kyv1kfe2tm4hq(coder_internal_stickySt_kyv1k_T
  *pStruct);
static void emxFreeStruct_co_kyv1kfe2tm4hq5(coder_internal_stickyS_kyv1kf_T
  *pStruct);
static void emxFreeStruct_c_kyv1kfe2tm4hq5k(coder_internal_sticky_kyv1kfe_T
  *pStruct);
static void emxFreeStruct_coder_internal__d(coder_internal_stick_kyv1kfe2_T
  *pStruct);
static void emxFreeStruct_coder_internal__p(coder_internal_stickyStruct_c_T
  *pStruct);
static void test3_fmincon_l(const real_T fun_workspace_x0[4], const
  emxArray_real_T_test3_T *fun_workspace_zref, const emxArray_real_T_test3_T
  *fun_workspace_wref, real_T fun_workspace_N, const emxArray_real_T_test3_T *x0,
  const sU0htoGcxTaPV5C2NLIldmB_test3_T nonlcon_workspace,
  emxArray_real_T_test3_T *x);

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
  test3_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void test3_emxInit_real_T(emxArray_real_T_test3_T **pEmxArray, int32_T
  numDimensions)
{
  emxArray_real_T_test3_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_test3_T *)malloc(sizeof(emxArray_real_T_test3_T));
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

static void test3_emxEnsureCapacity_real_T(emxArray_real_T_test3_T *emxArray,
  int32_T oldNumel)
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

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

static void test3_emxFree_real_T(emxArray_real_T_test3_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_test3_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_test3_T *)NULL;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_eML_blk_kernel_anonFcn2(const real_T x0[4], real_T N, const
  emxArray_real_T_test3_T *u, emxArray_real_T_test3_T *varargout_1,
  emxArray_real_T_test3_T *varargout_2)
{
  emxArray_real_T_test3_T *varargout_1_tmp;
  emxArray_real_T_test3_T *x;
  real_T x_next_idx_0;
  real_T x_next_idx_1;
  real_T x_next_idx_2;
  real_T x_next_idx_3;
  int32_T b;
  int32_T d;
  int32_T loop_ub;
  int32_T tmp;
  uint32_T c;

  /* '<S2>:1:159' */
  /* '<S2>:1:153' */
  test3_emxInit_real_T(&x, 2);
  tmp = x->size[0] * x->size[1];
  x->size[0] = 4;
  x->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(x, tmp);
  loop_ub = (int32_T)(N + 1.0) << 2;
  if (loop_ub - 1 >= 0) {
    memset(&x->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S2>:1:154' */
  x->data[0] = x0[0];
  x->data[1] = x0[1];
  x->data[2] = x0[2];
  x->data[3] = x0[3];

  /* '<S2>:1:155' */
  varargout_2->size[0] = 0;
  b = (int32_T)N;

  /* '<S2>:1:157' */
  for (loop_ub = 0; loop_ub < b; loop_ub++) {
    c = ((uint32_T)loop_ub << 1) + 1U;
    if (c > ((real_T)loop_ub + 1.0) * 2.0) {
      d = 0;
    } else {
      d = (int32_T)c - 1;
    }

    /* '<S2>:1:158' */
    /* '<S2>:1:159' */
    /* '<S2>:1:171' */
    x_next_idx_2 = x->data[(loop_ub << 2) + 2];
    x_next_idx_3 = x->data[(loop_ub << 2) + 3];
    x_next_idx_0 = u->data[d] * cos(x_next_idx_2) * 0.1 + x->data[loop_ub << 2];
    x_next_idx_1 = u->data[d] * sin(x_next_idx_2) * 0.1 + x->data[(loop_ub << 2)
      + 1];
    x_next_idx_2 += u->data[d] / 0.256 * tan(x_next_idx_3) * 0.1;
    x_next_idx_3 += u->data[d + 1] * 0.1;

    /* '<S2>:1:160' */
    /* '<S2>:1:161' */
    d = varargout_2->size[0];
    tmp = varargout_2->size[0];
    varargout_2->size[0] += 4;
    test3_emxEnsureCapacity_real_T(varargout_2, tmp);
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

  /* '<S2>:1:165' */
  /* '<S2>:1:166' */
  test3_emxInit_real_T(&varargout_1_tmp, 1);
  loop_ub -= b;
  tmp = varargout_1_tmp->size[0];
  varargout_1_tmp->size[0] = loop_ub;
  test3_emxEnsureCapacity_real_T(varargout_1_tmp, tmp);
  for (d = 0; d < loop_ub; d++) {
    varargout_1_tmp->data[d] = x->data[((b + d) << 2) + 3];
  }

  test3_emxFree_real_T(&x);
  tmp = varargout_1->size[0];
  varargout_1->size[0] = varargout_1_tmp->size[0] + varargout_1_tmp->size[0];
  test3_emxEnsureCapacity_real_T(varargout_1, tmp);
  loop_ub = varargout_1_tmp->size[0];
  for (d = 0; d < loop_ub; d++) {
    varargout_1->data[d] = varargout_1_tmp->data[d] - 1.5707963267948966;
  }

  loop_ub = varargout_1_tmp->size[0];
  for (d = 0; d < loop_ub; d++) {
    varargout_1->data[d + varargout_1_tmp->size[0]] = -varargout_1_tmp->data[d]
      - 1.5707963267948966;
  }

  test3_emxFree_real_T(&varargout_1_tmp);
}

static void test3_emxInit_int32_T(emxArray_int32_T_test3_T **pEmxArray, int32_T
  numDimensions)
{
  emxArray_int32_T_test3_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T_test3_T *)malloc(sizeof
    (emxArray_int32_T_test3_T));
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

static void emxInitStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->xstarsqp, 1);
  test3_emxInit_real_T(&pStruct->xstarsqp_old, 1);
  test3_emxInit_real_T(&pStruct->cIneq, 1);
  test3_emxInit_real_T(&pStruct->cIneq_old, 1);
  test3_emxInit_real_T(&pStruct->cEq, 1);
  test3_emxInit_real_T(&pStruct->cEq_old, 1);
  test3_emxInit_real_T(&pStruct->grad, 1);
  test3_emxInit_real_T(&pStruct->grad_old, 1);
  test3_emxInit_real_T(&pStruct->lambdasqp, 1);
  test3_emxInit_real_T(&pStruct->lambdaStopTest, 1);
  test3_emxInit_real_T(&pStruct->lambdaStopTestPrev, 1);
  test3_emxInit_real_T(&pStruct->delta_x, 1);
  test3_emxInit_real_T(&pStruct->socDirection, 1);
  test3_emxInit_int32_T(&pStruct->workingset_old, 1);
  test3_emxInit_real_T(&pStruct->JacCineqTrans_old, 2);
  test3_emxInit_real_T(&pStruct->JacCeqTrans_old, 2);
  test3_emxInit_real_T(&pStruct->gradLag, 1);
  test3_emxInit_real_T(&pStruct->delta_gradLag, 1);
  test3_emxInit_real_T(&pStruct->xstar, 1);
  test3_emxInit_real_T(&pStruct->lambda, 1);
  test3_emxInit_real_T(&pStruct->searchDir, 1);
}

static void test3_emxEnsureCapacity_int32_T(emxArray_int32_T_test3_T *emxArray,
  int32_T oldNumel)
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
static void test3_factoryConstruct(int32_T nVarMax, int32_T mConstrMax, int32_T
  mIneq, int32_T mEq, const emxArray_real_T_test3_T *x0, int32_T mNonlinIneq,
  int32_T mNonlinEq, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *obj)
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
  test3_emxEnsureCapacity_real_T(obj->xstarsqp, i);
  i = obj->xstarsqp_old->size[0];
  obj->xstarsqp_old->size[0] = x0->size[0];
  test3_emxEnsureCapacity_real_T(obj->xstarsqp_old, i);
  i = obj->cIneq->size[0];
  obj->cIneq->size[0] = mIneq;
  test3_emxEnsureCapacity_real_T(obj->cIneq, i);
  i = obj->cIneq_old->size[0];
  obj->cIneq_old->size[0] = mIneq;
  test3_emxEnsureCapacity_real_T(obj->cIneq_old, i);
  i = obj->cEq->size[0];
  obj->cEq->size[0] = mEq;
  test3_emxEnsureCapacity_real_T(obj->cEq, i);
  i = obj->cEq_old->size[0];
  obj->cEq_old->size[0] = mEq;
  test3_emxEnsureCapacity_real_T(obj->cEq_old, i);
  i = obj->grad->size[0];
  obj->grad->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->grad, i);
  i = obj->grad_old->size[0];
  obj->grad_old->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->grad_old, i);
  obj->FunctionEvaluations = 0;
  obj->sqpIterations = 0;
  obj->sqpExitFlag = 0;
  i = obj->lambdasqp->size[0];
  obj->lambdasqp->size[0] = mConstrMax;
  test3_emxEnsureCapacity_real_T(obj->lambdasqp, i);
  for (i = 0; i < mConstrMax; i++) {
    obj->lambdasqp->data[i] = 0.0;
  }

  i = obj->lambdaStopTest->size[0];
  obj->lambdaStopTest->size[0] = mConstrMax;
  test3_emxEnsureCapacity_real_T(obj->lambdaStopTest, i);
  i = obj->lambdaStopTestPrev->size[0];
  obj->lambdaStopTestPrev->size[0] = mConstrMax;
  test3_emxEnsureCapacity_real_T(obj->lambdaStopTestPrev, i);
  obj->steplength = 1.0;
  i = obj->delta_x->size[0];
  obj->delta_x->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->delta_x, i);
  for (i = 0; i < nVarMax; i++) {
    obj->delta_x->data[i] = 0.0;
  }

  i = obj->socDirection->size[0];
  obj->socDirection->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->socDirection, i);
  i = obj->workingset_old->size[0];
  obj->workingset_old->size[0] = mConstrMax;
  test3_emxEnsureCapacity_int32_T(obj->workingset_old, i);
  if (mNonlinIneq > 0) {
    i = obj->JacCineqTrans_old->size[0] * obj->JacCineqTrans_old->size[1];
    obj->JacCineqTrans_old->size[0] = nVarMax;
    obj->JacCineqTrans_old->size[1] = mNonlinIneq;
    test3_emxEnsureCapacity_real_T(obj->JacCineqTrans_old, i);
  } else {
    obj->JacCineqTrans_old->size[0] = 0;
    obj->JacCineqTrans_old->size[1] = 0;
  }

  if (mNonlinEq > 0) {
    i = obj->JacCeqTrans_old->size[0] * obj->JacCeqTrans_old->size[1];
    obj->JacCeqTrans_old->size[0] = nVarMax;
    obj->JacCeqTrans_old->size[1] = mNonlinEq;
    test3_emxEnsureCapacity_real_T(obj->JacCeqTrans_old, i);
  } else {
    obj->JacCeqTrans_old->size[0] = 0;
    obj->JacCeqTrans_old->size[1] = 0;
  }

  i = obj->gradLag->size[0];
  obj->gradLag->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->gradLag, i);
  i = obj->delta_gradLag->size[0];
  obj->delta_gradLag->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->delta_gradLag, i);
  i = obj->xstar->size[0];
  obj->xstar->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->xstar, i);
  obj->fstar = 0.0;
  obj->firstorderopt = 0.0;
  i = obj->lambda->size[0];
  obj->lambda->size[0] = mConstrMax;
  test3_emxEnsureCapacity_real_T(obj->lambda, i);
  for (i = 0; i < mConstrMax; i++) {
    obj->lambda->data[i] = 0.0;
  }

  obj->state = 0;
  obj->maxConstr = 0.0;
  obj->iterations = 0;
  i = obj->searchDir->size[0];
  obj->searchDir->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->searchDir, i);
}

static void emxInitStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->xref, 2);
  test3_emxInit_real_T(&pStruct->uref, 2);
}

static void emxInitStruct_anonymous_functio(anonymous_function_test3_T *pStruct)
{
  emxInitStruct_s_orfxVcOir3wnnUk(&pStruct->workspace);
}

static void emxInitStruct_coder_in_kyv1kfe2(coder_internal_stickyStruct_1_T
  *pStruct)
{
  emxInitStruct_anonymous_functio(&pStruct->b_value);
}

static void emxInitStruct_coder_int_kyv1kfe(coder_internal_stickyStruct_2_T
  *pStruct)
{
  emxInitStruct_coder_in_kyv1kfe2(&pStruct->next);
}

static void emxInitStruct_coder_inte_kyv1kf(coder_internal_stickyStruct_3_T
  *pStruct)
{
  emxInitStruct_coder_int_kyv1kfe(&pStruct->next);
}

static void emxInitStruct_coder_inter_kyv1k(coder_internal_stickyStruct_4_T
  *pStruct)
{
  emxInitStruct_coder_inte_kyv1kf(&pStruct->next);
}

static void emxInitStruct_coder_intern_kyv1(coder_internal_stickyStruct_5_T
  *pStruct)
{
  emxInitStruct_coder_inter_kyv1k(&pStruct->next);
}

static void emxInitStruct_coder_interna_kyv(coder_internal_stickyStruct_6_T
  *pStruct)
{
  emxInitStruct_coder_intern_kyv1(&pStruct->next);
}

static void emxInitStruct_coder_internal_ky(coder_internal_stickyStruct_7_T
  *pStruct)
{
  emxInitStruct_coder_interna_kyv(&pStruct->next);
}

static void emxInitStruct_coder_internal__k(coder_internal_stickyStruct_8_T
  *pStruct)
{
  emxInitStruct_coder_internal_ky(&pStruct->next);
}

static void emxInitStruct_coder_internal_st(coder_internal_stickyStruct_9_T
  *pStruct)
{
  emxInitStruct_coder_internal__k(&pStruct->next);
}

static void test3_emxInit_boolean_T(emxArray_boolean_T_test3_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_boolean_T_test3_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T_test3_T *)malloc(sizeof
    (emxArray_boolean_T_test3_T));
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

static void emxInitStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_test_T
  *pStruct)
{
  emxInitStruct_anonymous_functio(&pStruct->objfun);
  test3_emxInit_real_T(&pStruct->cIneq_1, 1);
  test3_emxInit_real_T(&pStruct->cEq_1, 1);
  test3_emxInit_real_T(&pStruct->cIneq_2, 1);
  test3_emxInit_real_T(&pStruct->cEq_2, 1);
  test3_emxInit_boolean_T(&pStruct->hasLB, 1);
  test3_emxInit_boolean_T(&pStruct->hasUB, 1);
}

static void tes_emxEnsureCapacity_boolean_T(emxArray_boolean_T_test3_T *emxArray,
  int32_T oldNumel)
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
static void test3_factoryConstruct_i(const real_T objfun_workspace_x0[4], const
  emxArray_real_T_test3_T *objfun_workspace_xref, const emxArray_real_T_test3_T *
  objfun_workspace_uref, real_T objfun_workspace_N, const
  s6lIrH89xwD47fl4e1dZNiE_test3_T nonlin_workspace, int32_T nVar, int32_T mCineq,
  int32_T mCeq, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T
  *ub, s_tzdJIwhhx1jgWYIJOPrjUD_test_T *obj)
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
  test3_emxEnsureCapacity_real_T(obj->objfun.workspace.xref, idx);
  loop_ub = objfun_workspace_xref->size[1] << 2;
  for (idx = 0; idx < loop_ub; idx++) {
    obj->objfun.workspace.xref->data[idx] = objfun_workspace_xref->data[idx];
  }

  idx = obj->objfun.workspace.uref->size[0] * obj->objfun.workspace.uref->size[1];
  obj->objfun.workspace.uref->size[0] = 2;
  obj->objfun.workspace.uref->size[1] = objfun_workspace_uref->size[1];
  test3_emxEnsureCapacity_real_T(obj->objfun.workspace.uref, idx);
  loop_ub = objfun_workspace_uref->size[1] << 1;
  for (idx = 0; idx < loop_ub; idx++) {
    obj->objfun.workspace.uref->data[idx] = objfun_workspace_uref->data[idx];
  }

  obj->objfun.workspace.N = objfun_workspace_N;
  obj->nonlin.workspace = nonlin_workspace;
  obj->f_1 = 0.0;
  idx = obj->cIneq_1->size[0];
  obj->cIneq_1->size[0] = mCineq;
  test3_emxEnsureCapacity_real_T(obj->cIneq_1, idx);
  idx = obj->cEq_1->size[0];
  obj->cEq_1->size[0] = mCeq;
  test3_emxEnsureCapacity_real_T(obj->cEq_1, idx);
  obj->f_2 = 0.0;
  idx = obj->cIneq_2->size[0];
  obj->cIneq_2->size[0] = mCineq;
  test3_emxEnsureCapacity_real_T(obj->cIneq_2, idx);
  idx = obj->cEq_2->size[0];
  obj->cEq_2->size[0] = mCeq;
  test3_emxEnsureCapacity_real_T(obj->cEq_2, idx);
  obj->nVar = nVar;
  obj->mIneq = mCineq;
  obj->mEq = mCeq;
  obj->numEvals = 0;
  obj->SpecifyObjectiveGradient = false;
  obj->SpecifyConstraintGradient = false;
  obj->isEmptyNonlcon = (mCeq + mCineq == 0);
  idx = obj->hasLB->size[0];
  obj->hasLB->size[0] = nVar;
  tes_emxEnsureCapacity_boolean_T(obj->hasLB, idx);
  idx = obj->hasUB->size[0];
  obj->hasUB->size[0] = nVar;
  tes_emxEnsureCapacity_boolean_T(obj->hasUB, idx);
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

static void emxInitStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->QR, 2);
  test3_emxInit_real_T(&pStruct->Q, 2);
  test3_emxInit_int32_T(&pStruct->jpvt, 1);
  test3_emxInit_real_T(&pStruct->tau, 1);
}

static void emxInitStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->FMat, 2);
}

static void emxInitStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->grad, 1);
  test3_emxInit_real_T(&pStruct->Hx, 1);
}

static void emxInitStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->workspace_double, 2);
  test3_emxInit_int32_T(&pStruct->workspace_int, 1);
  test3_emxInit_int32_T(&pStruct->workspace_sort, 1);
}

static void emxInitStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->Aineq, 1);
  test3_emxInit_real_T(&pStruct->bineq, 1);
  test3_emxInit_real_T(&pStruct->Aeq, 1);
  test3_emxInit_real_T(&pStruct->beq, 1);
  test3_emxInit_real_T(&pStruct->lb, 1);
  test3_emxInit_real_T(&pStruct->ub, 1);
  test3_emxInit_int32_T(&pStruct->indexLB, 1);
  test3_emxInit_int32_T(&pStruct->indexUB, 1);
  test3_emxInit_int32_T(&pStruct->indexFixed, 1);
  test3_emxInit_int32_T(&pStruct->indexEqRemoved, 1);
  test3_emxInit_real_T(&pStruct->ATwset, 1);
  test3_emxInit_real_T(&pStruct->bwset, 1);
  test3_emxInit_real_T(&pStruct->maxConstrWorkspace, 1);
  test3_emxInit_boolean_T(&pStruct->isActiveConstr, 1);
  test3_emxInit_int32_T(&pStruct->Wid, 1);
  test3_emxInit_int32_T(&pStruct->Wlocalidx, 1);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_factoryConstruct_ir(int32_T mIneqMax, int32_T mEqMax, int32_T
  nVar, int32_T nVarMax, int32_T mConstrMax, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *obj)
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
  test3_emxEnsureCapacity_real_T(obj->Aineq, i);
  i = obj->bineq->size[0];
  obj->bineq->size[0] = mIneqMax;
  test3_emxEnsureCapacity_real_T(obj->bineq, i);
  i = obj->Aeq->size[0];
  obj->Aeq->size[0] = mEqMax * nVarMax;
  test3_emxEnsureCapacity_real_T(obj->Aeq, i);
  i = obj->beq->size[0];
  obj->beq->size[0] = mEqMax;
  test3_emxEnsureCapacity_real_T(obj->beq, i);
  i = obj->lb->size[0];
  obj->lb->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->lb, i);
  i = obj->ub->size[0];
  obj->ub->size[0] = nVarMax;
  test3_emxEnsureCapacity_real_T(obj->ub, i);
  i = obj->indexLB->size[0];
  obj->indexLB->size[0] = nVarMax;
  test3_emxEnsureCapacity_int32_T(obj->indexLB, i);
  i = obj->indexUB->size[0];
  obj->indexUB->size[0] = nVarMax;
  test3_emxEnsureCapacity_int32_T(obj->indexUB, i);
  i = obj->indexFixed->size[0];
  obj->indexFixed->size[0] = nVarMax;
  test3_emxEnsureCapacity_int32_T(obj->indexFixed, i);
  obj->mEqRemoved = 0;
  i = obj->indexEqRemoved->size[0];
  obj->indexEqRemoved->size[0] = mEqMax;
  test3_emxEnsureCapacity_int32_T(obj->indexEqRemoved, i);
  i = obj->ATwset->size[0];
  obj->ATwset->size[0] = nVarMax * mConstrMax;
  test3_emxEnsureCapacity_real_T(obj->ATwset, i);
  i = obj->bwset->size[0];
  obj->bwset->size[0] = mConstrMax;
  test3_emxEnsureCapacity_real_T(obj->bwset, i);
  obj->nActiveConstr = 0;
  i = obj->maxConstrWorkspace->size[0];
  obj->maxConstrWorkspace->size[0] = mConstrMax;
  test3_emxEnsureCapacity_real_T(obj->maxConstrWorkspace, i);
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
  tes_emxEnsureCapacity_boolean_T(obj->isActiveConstr, i);
  i = obj->Wid->size[0];
  obj->Wid->size[0] = mConstrMax;
  test3_emxEnsureCapacity_int32_T(obj->Wid, i);
  i = obj->Wlocalidx->size[0];
  obj->Wlocalidx->size[0] = mConstrMax;
  test3_emxEnsureCapacity_int32_T(obj->Wlocalidx, i);
  for (i = 0; i < 5; i++) {
    obj->nWConstr[i] = 0;
  }

  obj->probType = 3;
  obj->SLACK0 = 1.0E-5;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_compressBounds(int32_T nVar, emxArray_int32_T_test3_T *indexLB,
  emxArray_int32_T_test3_T *indexUB, emxArray_int32_T_test3_T *indexFixed, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub, int32_T *mLB,
  int32_T *mUB, int32_T *mFixed)
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

static void test3_binary_expand_op(real_T in1[2], const emxArray_real_T_test3_T *
  in2, int32_T in3, int32_T in4, const emxArray_real_T_test3_T *in5, int32_T in6)
{
  in1[0] = in2->data[in3] - in5->data[in6 << 1];
  in1[1] = in2->data[((in4 - in3) + 1 != 1) + in3] - in5->data[(in6 << 1) + 1];
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T test3_eML_blk_kernel_anonFcn1(const real_T x0[4], const
  emxArray_real_T_test3_T *xref, const emxArray_real_T_test3_T *uref, real_T N,
  const emxArray_real_T_test3_T *u)
{
  emxArray_real_T_test3_T *x;
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

  /* '<S2>:1:139' */
  /* '<S2>:1:143' */
  /* '<S2>:1:147' */
  /* '<S2>:1:133' */
  test3_emxInit_real_T(&x, 2);
  loop_ub = x->size[0] * x->size[1];
  x->size[0] = 4;
  x->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(x, loop_ub);
  loop_ub = (int32_T)(N + 1.0) << 2;
  if (loop_ub - 1 >= 0) {
    memset(&x->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S2>:1:134' */
  x->data[0] = x0[0];
  x->data[1] = x0[1];
  x->data[2] = x0[2];
  x->data[3] = x0[3];

  /* '<S2>:1:135' */
  varargout_1 = 0.0;
  b = (int32_T)N;

  /* '<S2>:1:137' */
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

    /* '<S2>:1:138' */
    /* '<S2>:1:139' */
    /* '<S2>:1:171' */
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

    /* '<S2>:1:141' */
    err_x[0] = x_2 - xref->data[x_tmp];
    err_x[1] = x_0 - xref->data[x_tmp_0];
    err_x[2] = d - xref->data[d_tmp];
    err_x[3] = x_1 - xref->data[x_tmp_1];

    /* '<S2>:1:142' */
    loop_ub = e - f;
    if (loop_ub == 2) {
      for (e = 0; e < loop_ub; e++) {
        err_u[e] = u->data[f + e] - uref->data[(k << 1) + e];
      }
    } else {
      test3_binary_expand_op(err_u, u, f, e - 1, uref, k);
    }

    /* '<S2>:1:143' */
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

  /* '<S2>:1:146' */
  err_x[0] = x->data[(x->size[1] - 1) << 2] - xref->data[(xref->size[1] - 1) <<
    2];
  err_x[1] = x->data[((x->size[1] - 1) << 2) + 1] - xref->data[((xref->size[1] -
    1) << 2) + 1];
  err_x[2] = x->data[((x->size[1] - 1) << 2) + 2] - xref->data[((xref->size[1] -
    1) << 2) + 2];
  err_x[3] = x->data[((x->size[1] - 1) << 2) + 3] - xref->data[((xref->size[1] -
    1) << 2) + 3];
  test3_emxFree_real_T(&x);

  /* '<S2>:1:147' */
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

static void test3_emxFree_int32_T(emxArray_int32_T_test3_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T_test3_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T_test3_T *)NULL;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static int32_T test3_checkVectorNonFinite(int32_T N, const
  emxArray_real_T_test3_T *vec, int32_T iv0)
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
static int32_T test3_computeConstraints_(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *Cineq_workspace,
  int32_T ineq0, emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0)
{
  emxArray_int32_T_test3_T *eqRange;
  emxArray_int32_T_test3_T *ineqRange;
  emxArray_real_T_test3_T *b;
  emxArray_real_T_test3_T *c;
  int32_T k;
  int32_T n;
  int32_T status;
  int32_T yk;
  if (obj_next_next_next_next_next_b_ - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_next_b_;
  }

  test3_emxInit_int32_T(&ineqRange, 2);
  k = ineqRange->size[0] * ineqRange->size[1];
  ineqRange->size[0] = 1;
  ineqRange->size[1] = n;
  test3_emxEnsureCapacity_int32_T(ineqRange, k);
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
  test3_emxEnsureCapacity_int32_T(ineqRange, k);
  n = ineqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    ineqRange->data[k] += ineq0;
  }

  if (obj_next_next_next_next_b_value - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_b_value;
  }

  test3_emxInit_int32_T(&eqRange, 2);
  k = eqRange->size[0] * eqRange->size[1];
  eqRange->size[0] = 1;
  eqRange->size[1] = n;
  test3_emxEnsureCapacity_int32_T(eqRange, k);
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
  test3_emxEnsureCapacity_int32_T(eqRange, k);
  n = eqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    eqRange->data[k] += eq0;
  }

  test3_emxInit_real_T(&b, 1);
  test3_emxInit_real_T(&c, 1);
  test3_eML_blk_kernel_anonFcn2(obj_next_next_next_next_next_ne,
    obj_next_next_next_next_next__0, x, b, c);
  n = ineqRange->size[1];
  for (k = 0; k < n; k++) {
    Cineq_workspace->data[ineqRange->data[k] - 1] = b->data[k];
  }

  test3_emxFree_real_T(&b);
  test3_emxFree_int32_T(&ineqRange);
  n = eqRange->size[1];
  for (k = 0; k < n; k++) {
    Ceq_workspace->data[eqRange->data[k] - 1] = c->data[k];
  }

  test3_emxFree_real_T(&c);
  test3_emxFree_int32_T(&eqRange);
  status = test3_checkVectorNonFinite(obj_next_next_next_next_next_b_,
    Cineq_workspace, ineq0);
  if (status == 1) {
    status = test3_checkVectorNonFinite(obj_next_next_next_next_b_value,
      Ceq_workspace, eq0);
  }

  return status;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T test3_finDiffEvalAndChkErr(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_test3_T
  *obj_objfun_workspace_xref, const emxArray_real_T_test3_T
  *obj_objfun_workspace_uref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_test3_T *cIneqPlus,
  emxArray_real_T_test3_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_test3_T *xk)
{
  real_T temp_tmp;
  int32_T idx;
  boolean_T evalOK;
  temp_tmp = xk->data[dim - 1];
  xk->data[dim - 1] = temp_tmp + delta;
  *fplus = test3_eML_blk_kernel_anonFcn1(obj_objfun_workspace_x0,
    obj_objfun_workspace_xref, obj_objfun_workspace_uref, obj_objfun_workspace_N,
    xk);
  evalOK = ((!rtIsInf(*fplus)) && (!rtIsNaN(*fplus)));
  if (evalOK) {
    test3_eML_blk_kernel_anonFcn2(obj_nonlin_workspace_x0,
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
static boolean_T test3_computeFiniteDifferences(s_tzdJIwhhx1jgWYIJOPrjUD_test_T *
  obj, real_T fCurrent, const emxArray_real_T_test3_T *cIneqCurrent, int32_T
  ineq0, const emxArray_real_T_test3_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_test3_T *xk, emxArray_real_T_test3_T *gradf,
  emxArray_real_T_test3_T *JacCineqTrans, int32_T CineqColStart, int32_T ldJI,
  emxArray_real_T_test3_T *JacCeqTrans, int32_T CeqColStart, int32_T ldJE, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub)
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

    evalOK = test3_finDiffEvalAndChkErr(obj->objfun.workspace.x0,
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
          evalOK = test3_finDiffEvalAndChkErr(obj->objfun.workspace.x0,
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
static void test3_updateWorkingSetForNewQP(const emxArray_real_T_test3_T *xk,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, int32_T mIneq, int32_T
  mNonlinIneq, const emxArray_real_T_test3_T *cIneq, int32_T mEq, int32_T
  mNonlinEq, const emxArray_real_T_test3_T *cEq, int32_T mLB, const
  emxArray_real_T_test3_T *lb, int32_T mUB, const emxArray_real_T_test3_T *ub,
  int32_T mFixed)
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
static void test3_modifyOverheadPhaseOne_(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj)
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
static void test3_setProblemType(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  PROBLEM_TYPE)
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

    test3_modifyOverheadPhaseOne_(obj);
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

    test3_modifyOverheadPhaseOne_(obj);
    break;
  }

  obj->probType = PROBLEM_TYPE;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_xgemv(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
  emxArray_real_T_test3_T *y)
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
static void test3_computeGradLag(emxArray_real_T_test3_T *workspace, int32_T ldA,
  int32_T nVar, const emxArray_real_T_test3_T *grad, int32_T mIneq, const
  emxArray_real_T_test3_T *AineqTrans, int32_T mEq, const
  emxArray_real_T_test3_T *AeqTrans, const emxArray_int32_T_test3_T *finiteFixed,
  int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const
  emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const emxArray_real_T_test3_T
  *lambda)
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

  test3_xgemv(nVar, mEq, AeqTrans, ldA, lambda, mFixed + 1, workspace);
  iL0 = mFixed + mEq;
  test3_xgemv(nVar, mIneq, AineqTrans, ldA, lambda, iL0 + 1, workspace);
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
static real_T test3_computePrimalFeasError(const emxArray_real_T_test3_T *x,
  int32_T mLinIneq, int32_T mNonlinIneq, const emxArray_real_T_test3_T *cIneq,
  int32_T mLinEq, int32_T mNonlinEq, const emxArray_real_T_test3_T *cEq, const
  emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const emxArray_real_T_test3_T
  *lb, const emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const
  emxArray_real_T_test3_T *ub)
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
static void test3_computeDualFeasError(int32_T nVar, const
  emxArray_real_T_test3_T *gradLag, boolean_T *gradOK, real_T *val)
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
static void test3_test_exit(sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  const s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, const emxArray_real_T_test3_T *lb,
  const emxArray_real_T_test3_T *ub, int32_T runTimeOptions_MaxFunctionEvalu,
  boolean_T *Flags_gradOK, boolean_T *Flags_fevalOK, boolean_T *Flags_done,
  boolean_T *Flags_stepAccepted, boolean_T *Flags_failedLineSearch, int32_T
  *Flags_stepType)
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

  test3_computeGradLag(TrialState->gradLag, WorkingSet->ldA, WorkingSet->nVar,
                       TrialState->grad, WorkingSet->sizes[2], WorkingSet->Aineq,
                       WorkingSet->sizes[1], WorkingSet->Aeq,
                       WorkingSet->indexFixed, WorkingSet->sizes[0],
                       WorkingSet->indexLB, WorkingSet->sizes[3],
                       WorkingSet->indexUB, WorkingSet->sizes[4],
                       TrialState->lambdaStopTest);
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

  MeritFunction->nlpPrimalFeasError = test3_computePrimalFeasError
    (TrialState->xstarsqp, WorkingSet->sizes[2] - TrialState->mNonlinIneq,
     TrialState->mNonlinIneq, TrialState->cIneq, WorkingSet->sizes[1] -
     TrialState->mNonlinEq, TrialState->mNonlinEq, TrialState->cEq,
     WorkingSet->indexLB, WorkingSet->sizes[3], lb, WorkingSet->indexUB,
     WorkingSet->sizes[4], ub);
  MeritFunction->feasRelativeFactor = fmax(1.0,
    MeritFunction->nlpPrimalFeasError);
  isFeasible = (MeritFunction->nlpPrimalFeasError <= 1.0E-6 *
                MeritFunction->feasRelativeFactor);
  test3_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag, Flags_gradOK,
    &MeritFunction->nlpDualFeasError);
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
static void test3_saveJacobian(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *obj, int32_T
  nVar, int32_T mIneq, const emxArray_real_T_test3_T *JacCineqTrans, int32_T
  ineqCol0, int32_T mEq, const emxArray_real_T_test3_T *JacCeqTrans, int32_T
  eqCol0, int32_T ldJ)
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
static real_T test3_computeComplError(const emxArray_real_T_test3_T
  *fscales_cineq_constraint, const emxArray_real_T_test3_T *xCurrent, int32_T
  mIneq, const emxArray_real_T_test3_T *cIneq, const emxArray_int32_T_test3_T
  *finiteLB, int32_T mLB, const emxArray_real_T_test3_T *lb, const
  emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const emxArray_real_T_test3_T
  *ub, const emxArray_real_T_test3_T *lambda, int32_T iL0)
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
static void test3_xgemv_b(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
  emxArray_real_T_test3_T *y)
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
static void test3_computeGradLag_l(emxArray_real_T_test3_T *workspace, int32_T
  ldA, int32_T nVar, const emxArray_real_T_test3_T *grad, int32_T mIneq, const
  emxArray_real_T_test3_T *AineqTrans, int32_T mEq, const
  emxArray_real_T_test3_T *AeqTrans, const emxArray_int32_T_test3_T *finiteFixed,
  int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const
  emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const emxArray_real_T_test3_T
  *lambda)
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

  test3_xgemv_b(nVar, mEq, AeqTrans, ldA, lambda, mFixed + 1, workspace);
  iL0 = mFixed + mEq;
  test3_xgemv_b(nVar, mIneq, AineqTrans, ldA, lambda, iL0 + 1, workspace);
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
static real_T test3_xnrm2(int32_T n, const emxArray_real_T_test3_T *x, int32_T
  ix0)
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
static real_T test3_xzlarfg(int32_T n, real_T *alpha1, emxArray_real_T_test3_T
  *x, int32_T ix0)
{
  real_T a;
  real_T tau;
  real_T xnorm;
  int32_T c;
  int32_T d_tmp;
  int32_T knt;
  tau = 0.0;
  if (n > 0) {
    xnorm = test3_xnrm2(n - 1, x, ix0);
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

        xnorm = rt_hypotd_snf(*alpha1, test3_xnrm2(n - 1, x, ix0));
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
static void test3_xgemv_bu(int32_T m, int32_T n, const emxArray_real_T_test3_T
  *A, int32_T ia0, int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
  emxArray_real_T_test3_T *y)
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
static void test3_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0, const
  emxArray_real_T_test3_T *y, emxArray_real_T_test3_T *A, int32_T ia0, int32_T
  lda)
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
static void test3_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
  emxArray_real_T_test3_T *C, int32_T ic0, int32_T ldc, emxArray_real_T_test3_T *
  work)
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
    test3_xgemv_bu(lastv, lastc, C, ic0, ldc, C, iv0, work);
    test3_xgerc(lastv, lastc, -tau, iv0, work, C, ic0, ldc);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_qrf(emxArray_real_T_test3_T *A, int32_T m, int32_T n, int32_T
                      nfxd, emxArray_real_T_test3_T *tau)
{
  emxArray_real_T_test3_T *work;
  real_T b_atmp;
  real_T tau_0;
  int32_T i;
  int32_T ii;
  int32_T lda;
  int32_T mmi;
  lda = A->size[0];
  test3_emxInit_real_T(&work, 1);
  i = work->size[0];
  work->size[0] = A->size[1];
  test3_emxEnsureCapacity_real_T(work, i);
  ii = A->size[1];
  if (ii - 1 >= 0) {
    memset(&work->data[0], 0, (uint32_T)ii * sizeof(real_T));
  }

  for (i = 0; i < nfxd; i++) {
    ii = i * lda + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A->data[ii];
      tau_0 = test3_xzlarfg(mmi, &b_atmp, A, ii + 2);
      tau->data[i] = tau_0;
      A->data[ii] = b_atmp;
    } else {
      tau_0 = 0.0;
      tau->data[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A->data[ii];
      A->data[ii] = 1.0;
      test3_xzlarf(mmi, (n - i) - 1, ii + 1, tau_0, A, (ii + lda) + 1, lda, work);
      A->data[ii] = b_atmp;
    }
  }

  test3_emxFree_real_T(&work);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_xgeqp3(emxArray_real_T_test3_T *A, int32_T m, int32_T n,
  emxArray_int32_T_test3_T *jpvt, emxArray_real_T_test3_T *tau)
{
  emxArray_real_T_test3_T *vn1;
  emxArray_real_T_test3_T *vn2;
  emxArray_real_T_test3_T *work;
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
  test3_emxEnsureCapacity_real_T(tau, itemp);
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

    test3_qrf(A, m, n, minmana, tau);
    if (minmana < minmn_tmp) {
      b_ma = A->size[0];
      test3_emxInit_real_T(&work, 1);
      itemp = work->size[0];
      work->size[0] = A->size[1];
      test3_emxEnsureCapacity_real_T(work, itemp);
      b_j = A->size[1];
      test3_emxInit_real_T(&vn1, 1);
      itemp = vn1->size[0];
      vn1->size[0] = A->size[1];
      test3_emxEnsureCapacity_real_T(vn1, itemp);
      test3_emxInit_real_T(&vn2, 1);
      itemp = vn2->size[0];
      vn2->size[0] = A->size[1];
      test3_emxEnsureCapacity_real_T(vn2, itemp);
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
        vn1_0 = test3_xnrm2(m - minmana, A, ((b_j - 1) * b_ma + minmana) + 1);
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
          vn1_0 = test3_xzlarfg(ma + 1, &temp, A, ix + 2);
          tau->data[b_j - 1] = vn1_0;
          A->data[ix] = temp;
        } else {
          vn1_0 = 0.0;
          tau->data[b_j - 1] = 0.0;
        }

        if (b_j < n) {
          temp = A->data[ix];
          A->data[ix] = 1.0;
          test3_xzlarf(ma + 1, iy - 1, ix + 1, vn1_0, A, (ix + b_ma) + 1, b_ma,
                       work);
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
                vn1_0 = test3_xnrm2(ma, A, ix + 1);
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

      test3_emxFree_real_T(&vn2);
      test3_emxFree_real_T(&vn1);
      test3_emxFree_real_T(&work);
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_computeQ_(s_l1Gll5dfO9DpqQrvRqAf7E_test_T *obj, int32_T nrows)
{
  emxArray_real_T_test3_T *work;
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
    test3_emxInit_real_T(&work, 1);
    lastv = work->size[0];
    work->size[0] = obj->Q->size[1];
    test3_emxEnsureCapacity_real_T(work, lastv);
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
          test3_xgemv_bu(lastv, lastc, obj->Q, ia, b_k, obj->Q, iaii, work);
          test3_xgerc(lastv, lastc, -obj->tau->data[itau], iaii, work, obj->Q,
                      ia, b_k);
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

    test3_emxFree_real_T(&work);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_xgemv_buj(int32_T m, int32_T n, const emxArray_real_T_test3_T *
  A, int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y)
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
static void test3_sortLambdaQP(emxArray_real_T_test3_T *lambda, int32_T
  WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
  WorkingSet_isActiveIdx[6], const emxArray_int32_T_test3_T *WorkingSet_Wid,
  const emxArray_int32_T_test3_T *WorkingSet_Wlocalidx, emxArray_real_T_test3_T *
  workspace)
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
static void test3_test_exit_k(s7RdrPWkr8UPAUyTdDJkLaG_test3_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const emxArray_real_T_test3_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub, int32_T
  runTimeOptions_MaxFunctionEvalu)
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

  test3_computeGradLag(TrialState->gradLag, WorkingSet->ldA, WorkingSet->nVar,
                       TrialState->grad, WorkingSet->sizes[2], WorkingSet->Aineq,
                       WorkingSet->sizes[1], WorkingSet->Aeq,
                       WorkingSet->indexFixed, WorkingSet->sizes[0],
                       WorkingSet->indexLB, WorkingSet->sizes[3],
                       WorkingSet->indexUB, WorkingSet->sizes[4],
                       TrialState->lambdaStopTest);
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

  MeritFunction->nlpPrimalFeasError = test3_computePrimalFeasError
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
  test3_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag,
    &Flags->gradOK, &MeritFunction->nlpDualFeasError);
  if (!Flags->gradOK) {
    Flags->done = true;
    if (isFeasible) {
      TrialState->sqpExitFlag = 2;
    } else {
      TrialState->sqpExitFlag = -2;
    }
  } else {
    MeritFunction->nlpComplError = test3_computeComplError
      (fscales_cineq_constraint, TrialState->xstarsqp, WorkingSet->sizes[2],
       TrialState->cIneq, WorkingSet->indexLB, WorkingSet->sizes[3], lb,
       WorkingSet->indexUB, WorkingSet->sizes[4], ub, TrialState->lambdaStopTest,
       mLambda_tmp + 1);
    s = fmax(MeritFunction->nlpDualFeasError, MeritFunction->nlpComplError);
    MeritFunction->firstOrderOpt = s;
    if (TrialState->sqpIterations > 1) {
      test3_computeGradLag_l(memspace->workspace_double, WorkingSet->ldA,
        WorkingSet->nVar, TrialState->grad, WorkingSet->sizes[2],
        WorkingSet->Aineq, WorkingSet->sizes[1], WorkingSet->Aeq,
        WorkingSet->indexFixed, WorkingSet->sizes[0], WorkingSet->indexLB,
        WorkingSet->sizes[3], WorkingSet->indexUB, WorkingSet->sizes[4],
        TrialState->lambdaStopTestPrev);
      test3_computeDualFeasError(WorkingSet->nVar, memspace->workspace_double,
        &dxTooSmall, &nlpComplErrorLSQ);
      nlpComplErrorTmp = test3_computeComplError(fscales_cineq_constraint,
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
                  test3_updateWorkingSetForNewQP(TrialState->xstarsqp,
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

                  test3_xgeqp3(QRManager->QR, WorkingSet->nVar,
                               WorkingSet->nActiveConstr, QRManager->jpvt,
                               QRManager->tau);
                }

                test3_computeQ_(QRManager, QRManager->mrows);
                test3_xgemv_buj(WorkingSet->nVar, WorkingSet->nVar, QRManager->Q,
                                QRManager->ldq, TrialState->grad,
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

                test3_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
                                   WorkingSet->sizes, WorkingSet->isActiveIdx,
                                   WorkingSet->Wid, WorkingSet->Wlocalidx,
                                   memspace->workspace_double);
                test3_computeGradLag_l(memspace->workspace_double,
                  WorkingSet->ldA, WorkingSet->nVar, TrialState->grad,
                  WorkingSet->sizes[2], WorkingSet->Aineq, WorkingSet->sizes[1],
                  WorkingSet->Aeq, WorkingSet->indexFixed, WorkingSet->sizes[0],
                  WorkingSet->indexLB, WorkingSet->sizes[3], WorkingSet->indexUB,
                  WorkingSet->sizes[4], TrialState->lambda);
                test3_computeDualFeasError(WorkingSet->nVar,
                  memspace->workspace_double, &isFeasible, &s);
                nlpComplErrorLSQ = test3_computeComplError
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
static boolean_T test3_BFGSUpdate(int32_T nvar, emxArray_real_T_test3_T *Bk,
  const emxArray_real_T_test3_T *sk, emxArray_real_T_test3_T *yk,
  emxArray_real_T_test3_T *workspace)
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
static void test3_xgemv_bujmjslzp1(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y)
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
static void test3_countsort(emxArray_int32_T_test3_T *x, int32_T xLen,
  emxArray_int32_T_test3_T *workspace, int32_T xMin, int32_T xMax)
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
static void test3_removeConstr(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  idx_global)
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
static void test3_factorQR(s_l1Gll5dfO9DpqQrvRqAf7E_test_T *obj, const
  emxArray_real_T_test3_T *A, int32_T mrows, int32_T ncols, int32_T ldA)
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
    test3_emxEnsureCapacity_real_T(obj->tau, ix0);
    for (ix0 = 0; ix0 < minmana; ix0++) {
      obj->tau->data[ix0] = 0.0;
    }

    if (idx >= 1) {
      test3_qrf(obj->QR, mrows, ncols, idx, obj->tau);
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_xgemv_bujm(int32_T m, int32_T n, const emxArray_real_T_test3_T
  *A, int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y)
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
static void test3_xgemv_bujmj(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  int32_T ix0, emxArray_real_T_test3_T *y)
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
static real_T test3_maxConstraintViolation(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj,
  const emxArray_real_T_test3_T *x, int32_T ix0)
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

      test3_xgemv_bujmj(obj->nVarOrig, obj->sizes[2], obj->Aineq, obj->ldA, x,
                        ix0, obj->maxConstrWorkspace);
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

      test3_xgemv_bujmj(obj->nVarOrig, obj->sizes[1], obj->Aeq, obj->ldA, x, ix0,
                        obj->maxConstrWorkspace);
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

      test3_xgemv_bujmj(obj->nVar, obj->sizes[2], obj->Aineq, obj->ldA, x, ix0,
                        obj->maxConstrWorkspace);
      for (b_mIneq = 0; b_mIneq <= mIneq; b_mIneq++) {
        v = fmax(v, obj->maxConstrWorkspace->data[b_mIneq]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      test3_xgemv_bujmj(obj->nVar, obj->sizes[1], obj->Aeq, obj->ldA, x, ix0,
                        obj->maxConstrWorkspace);
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
static boolean_T test3_feasibleX0ForWorkingSet(emxArray_real_T_test3_T
  *workspace, emxArray_real_T_test3_T *xCurrent, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager)
{
  emxArray_real_T_test3_T *B;
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

    test3_emxInit_real_T(&B, 2);
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
        test3_emxEnsureCapacity_real_T(B, mIneq);
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
        test3_emxEnsureCapacity_real_T(qrmanager->tau, mIneq);
        for (mIneq = 0; mIneq < minmana; mIneq++) {
          qrmanager->tau->data[mIneq] = 0.0;
        }

        if (jBcol >= 1) {
          test3_qrf(B, workingset->nActiveConstr, workingset->nVar, jBcol,
                    qrmanager->tau);
        }

        mIneq = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        qrmanager->QR->size[0] = B->size[0];
        qrmanager->QR->size[1] = B->size[1];
        test3_emxEnsureCapacity_real_T(qrmanager->QR, mIneq);
        ldq = B->size[0] * B->size[1];
        for (mIneq = 0; mIneq < ldq; mIneq++) {
          qrmanager->QR->data[mIneq] = B->data[mIneq];
        }
      }

      test3_computeQ_(qrmanager, qrmanager->mrows);
      ldq = qrmanager->ldq;
      iy = workspace->size[0];
      mIneq = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      test3_emxEnsureCapacity_real_T(B, mIneq);
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
      test3_factorQR(qrmanager, workingset->ATwset, workingset->nVar,
                     workingset->nActiveConstr, workingset->ldA);
      test3_computeQ_(qrmanager, qrmanager->minRowCol);
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
      test3_emxEnsureCapacity_real_T(B, mIneq);
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

    test3_emxFree_real_T(&B);
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

            test3_xgemv_bujm(workingset->nVarOrig, workingset->sizes[2],
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

            test3_xgemv_bujm(workingset->nVarOrig, workingset->sizes[1],
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

            test3_xgemv_bujm(workingset->nVar, workingset->sizes[2],
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

            test3_xgemv_bujm(workingset->nVar, workingset->sizes[1],
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

        workingset_0 = test3_maxConstraintViolation(workingset, workspace,
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
static void test3_xgemv_bujmjs(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y)
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
static real_T test3_maxConstraintViolation_h(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *obj, const emxArray_real_T_test3_T *x)
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

      test3_xgemv_bujmjs(obj->nVarOrig, obj->sizes[2], obj->Aineq, obj->ldA, x,
                         obj->maxConstrWorkspace);
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

      test3_xgemv_bujmjs(obj->nVarOrig, obj->sizes[1], obj->Aeq, obj->ldA, x,
                         obj->maxConstrWorkspace);
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

      test3_xgemv_bujmjs(obj->nVar, obj->sizes[2], obj->Aineq, obj->ldA, x,
                         obj->maxConstrWorkspace);
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        v = fmax(v, obj->maxConstrWorkspace->data[offsetEq1]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      test3_xgemv_bujmjs(obj->nVar, obj->sizes[1], obj->Aeq, obj->ldA, x,
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
static void test3_PresolveWorkingSet(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager)
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

      test3_xgeqp3(qrmanager->QR, mTotalWorkingEq, workingset->nVar,
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
      test3_computeQ_(qrmanager, qrmanager->mrows);
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
        test3_xgeqp3(qrmanager->QR, workingset->nVar, mTotalWorkingEq,
                     qrmanager->jpvt, qrmanager->tau);
      }

      for (mWorkingFixed = 0; mWorkingFixed < nFixedConstr; mWorkingFixed++) {
        memspace->workspace_int->data[mWorkingFixed] = qrmanager->jpvt->data
          [(mTotalWorkingEq - nFixedConstr) + mWorkingFixed];
      }

      test3_countsort(memspace->workspace_int, nFixedConstr,
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
              test3_removeConstr(workingset, nVar);
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

        test3_xgeqp3(qrmanager->QR, workingset->nVar, workingset->nActiveConstr,
                     qrmanager->jpvt, qrmanager->tau);
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

      test3_countsort(memspace->workspace_int, mWorkingFixed,
                      memspace->workspace_sort, ix + 1,
                      workingset->nActiveConstr);
      for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
        test3_removeConstr(workingset, memspace->workspace_int->
                           data[nFixedConstr - 1]);
      }
    }

    okWorkingSet = test3_feasibleX0ForWorkingSet(memspace->workspace_double,
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

          test3_xgeqp3(qrmanager->QR, workingset->nVar,
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

        test3_countsort(memspace->workspace_int, mWorkingFixed,
                        memspace->workspace_sort, ix + 1,
                        workingset->nActiveConstr);
        for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
          test3_removeConstr(workingset, memspace->workspace_int->
                             data[nFixedConstr - 1]);
        }
      }

      okWorkingSet = test3_feasibleX0ForWorkingSet(memspace->workspace_double,
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
        c_tol = test3_maxConstraintViolation_h(workingset, solution->xstar);
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

static void test3_emxCopy_real_T(emxArray_real_T_test3_T **dst,
  emxArray_real_T_test3_T * const *src)
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

  test3_emxEnsureCapacity_real_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void test3_emxCopy_int32_T(emxArray_int32_T_test3_T **dst,
  emxArray_int32_T_test3_T * const *src)
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

  test3_emxEnsureCapacity_int32_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void test3_emxCopyMatrix_int32_T(int32_T dst[5], const int32_T src[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    dst[i] = src[i];
  }
}

static void test3_emxCopyMatrix_int32_T1(int32_T dst[6], const int32_T src[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    dst[i] = src[i];
  }
}

static void test3_emxCopy_boolean_T(emxArray_boolean_T_test3_T **dst,
  emxArray_boolean_T_test3_T * const *src)
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

  tes_emxEnsureCapacity_boolean_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxCopyStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *dst,
  const s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *src)
{
  dst->mConstr = src->mConstr;
  dst->mConstrOrig = src->mConstrOrig;
  dst->mConstrMax = src->mConstrMax;
  dst->nVar = src->nVar;
  dst->nVarOrig = src->nVarOrig;
  dst->nVarMax = src->nVarMax;
  dst->ldA = src->ldA;
  test3_emxCopy_real_T(&dst->Aineq, &src->Aineq);
  test3_emxCopy_real_T(&dst->bineq, &src->bineq);
  test3_emxCopy_real_T(&dst->Aeq, &src->Aeq);
  test3_emxCopy_real_T(&dst->beq, &src->beq);
  test3_emxCopy_real_T(&dst->lb, &src->lb);
  test3_emxCopy_real_T(&dst->ub, &src->ub);
  test3_emxCopy_int32_T(&dst->indexLB, &src->indexLB);
  test3_emxCopy_int32_T(&dst->indexUB, &src->indexUB);
  test3_emxCopy_int32_T(&dst->indexFixed, &src->indexFixed);
  dst->mEqRemoved = src->mEqRemoved;
  test3_emxCopy_int32_T(&dst->indexEqRemoved, &src->indexEqRemoved);
  test3_emxCopy_real_T(&dst->ATwset, &src->ATwset);
  test3_emxCopy_real_T(&dst->bwset, &src->bwset);
  dst->nActiveConstr = src->nActiveConstr;
  test3_emxCopy_real_T(&dst->maxConstrWorkspace, &src->maxConstrWorkspace);
  test3_emxCopyMatrix_int32_T(dst->sizes, src->sizes);
  test3_emxCopyMatrix_int32_T(dst->sizesNormal, src->sizesNormal);
  test3_emxCopyMatrix_int32_T(dst->sizesPhaseOne, src->sizesPhaseOne);
  test3_emxCopyMatrix_int32_T(dst->sizesRegularized, src->sizesRegularized);
  test3_emxCopyMatrix_int32_T(dst->sizesRegPhaseOne, src->sizesRegPhaseOne);
  test3_emxCopyMatrix_int32_T1(dst->isActiveIdx, src->isActiveIdx);
  test3_emxCopyMatrix_int32_T1(dst->isActiveIdxNormal, src->isActiveIdxNormal);
  test3_emxCopyMatrix_int32_T1(dst->isActiveIdxPhaseOne,
    src->isActiveIdxPhaseOne);
  test3_emxCopyMatrix_int32_T1(dst->isActiveIdxRegularized,
    src->isActiveIdxRegularized);
  test3_emxCopyMatrix_int32_T1(dst->isActiveIdxRegPhaseOne,
    src->isActiveIdxRegPhaseOne);
  test3_emxCopy_boolean_T(&dst->isActiveConstr, &src->isActiveConstr);
  test3_emxCopy_int32_T(&dst->Wid, &src->Wid);
  test3_emxCopy_int32_T(&dst->Wlocalidx, &src->Wlocalidx);
  test3_emxCopyMatrix_int32_T(dst->nWConstr, src->nWConstr);
  dst->probType = src->probType;
  dst->SLACK0 = src->SLACK0;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
  emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, const emxArray_real_T_test3_T *x)
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
static real_T test3_computeFval(const s_saWPFfMboRdWeRqIEJ4x8C_test_T *obj,
  emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, const emxArray_real_T_test3_T *x)
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
    test3_linearForm_(obj->hasLinear, obj->nvar, workspace, H, f, x);
    val = 0.0;
    if (obj->nvar >= 1) {
      b_ixlast = obj->nvar;
      for (idx = 0; idx < b_ixlast; idx++) {
        val += workspace->data[idx] * x->data[idx];
      }
    }
    break;

   default:
    test3_linearForm_(obj->hasLinear, obj->nvar, workspace, H, f, x);
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
static void test3_xgemv_bujmjsl(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y)
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
static void test3_computeGrad_StoreHx(s_saWPFfMboRdWeRqIEJ4x8C_test_T *obj,
  const emxArray_real_T_test3_T *H, const emxArray_real_T_test3_T *f, const
  emxArray_real_T_test3_T *x)
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
    test3_xgemv_bujmjsl(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
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
    test3_xgemv_bujmjsl(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
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
static real_T test3_computeFval_ReuseHx(const s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *obj, emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *f,
  const emxArray_real_T_test3_T *x)
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
static void test3_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
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
static void test3_deleteColMoveEnd(s_l1Gll5dfO9DpqQrvRqAf7E_test_T *obj, int32_T
  idx)
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
        test3_xrotg(&obj->QR->data[b_temp_tmp - 1], &b_temp, &c_c, &b_s);
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
        test3_xrotg(&obj->QR->data[b_temp_tmp - 1], &b_temp, &c_c, &b_s);
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
static void test3_xgemm(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *B,
  int32_T ib0, int32_T ldb, emxArray_real_T_test3_T *C, int32_T ldc)
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
static void test3_xgemm_b(int32_T m, int32_T n, int32_T k, const
  emxArray_real_T_test3_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_test3_T *B, int32_T ldb, emxArray_real_T_test3_T *C, int32_T
  ldc)
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
static void test3_fullColLDL2_(s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj, int32_T
  LD_offset, int32_T NColsRemain)
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
static void test3_partialColLDL3_(s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj, int32_T
  LD_offset, int32_T NColsRemain)
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
static int32_T test3_xpotrf(int32_T n, emxArray_real_T_test3_T *A, int32_T lda)
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
static void test3_xgemv_bujmjslz(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T ia0, int32_T lda, const
  emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y)
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
static void test3_solve(const s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj,
  emxArray_real_T_test3_T *rhs)
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
static void test3_factor(s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj, const
  emxArray_real_T_test3_T *A, int32_T ndims, int32_T ldA)
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
        test3_partialColLDL3_(obj, LD_diagOffset, ix);
        A_maxDiag_idx += 48;
      } else {
        test3_fullColLDL2_(obj, LD_diagOffset, ix);
        exitg1 = true;
      }
    }
  } else {
    test3_fullColLDL2_(obj, 1, ndims);
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
static void test3_solve_k(const s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj,
  emxArray_real_T_test3_T *rhs)
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
static void test3_compute_deltax(const emxArray_real_T_test3_T *H,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution, s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *memspace, const s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, const
  s_saWPFfMboRdWeRqIEJ4x8C_test_T *objective, boolean_T alwaysPositiveDef)
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

          cholmanager->info = test3_xpotrf(qrmanager->mrows, cholmanager->FMat,
            cholmanager->ldm);
        } else {
          test3_factor(cholmanager, H, qrmanager->mrows, qrmanager->mrows);
        }

        if (cholmanager->info != 0) {
          solution->state = -6;
        } else if (alwaysPositiveDef) {
          test3_solve(cholmanager, solution->searchDir);
        } else {
          test3_solve_k(cholmanager, solution->searchDir);
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

          cholmanager->info = test3_xpotrf(objective->nvar, cholmanager->FMat,
            cholmanager->ldm);
          if (cholmanager->info != 0) {
            solution->state = -6;
          } else {
            test3_solve(cholmanager, solution->searchDir);
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

        test3_xgemv_bujmjslz(qrmanager->mrows, mNull, qrmanager->Q,
                             nullStartIdx_tmp, qrmanager->ldq,
                             memspace->workspace_double, solution->searchDir);
      } else {
        if (objective->objtype == 3) {
          test3_xgemm(qrmanager->mrows, mNull, qrmanager->mrows, H,
                      qrmanager->mrows, qrmanager->Q, nullStartIdx_tmp,
                      qrmanager->ldq, memspace->workspace_double,
                      memspace->workspace_double->size[0]);
          test3_xgemm_b(mNull, mNull, qrmanager->mrows, qrmanager->Q,
                        nullStartIdx_tmp, qrmanager->ldq,
                        memspace->workspace_double, memspace->
                        workspace_double->size[0], cholmanager->FMat,
                        cholmanager->ldm);
        } else if (alwaysPositiveDef) {
          nVars = qrmanager->mrows;
          test3_xgemm(objective->nvar, mNull, objective->nvar, H,
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

          test3_xgemm_b(mNull, mNull, qrmanager->mrows, qrmanager->Q,
                        nullStartIdx_tmp, qrmanager->ldq,
                        memspace->workspace_double, memspace->
                        workspace_double->size[0], cholmanager->FMat,
                        cholmanager->ldm);
        }

        if (alwaysPositiveDef) {
          cholmanager->ndims = mNull;
          cholmanager->info = test3_xpotrf(mNull, cholmanager->FMat,
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
                test3_partialColLDL3_(cholmanager, nVars, nullStartIdx);
                b_mNull += 48;
              } else {
                test3_fullColLDL2_(cholmanager, nVars, nullStartIdx);
                exitg1 = true;
              }
            }
          } else {
            test3_fullColLDL2_(cholmanager, 1, mNull);
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

          test3_xgemv_bujmjslz(qrmanager->mrows, mNull, qrmanager->Q,
                               nullStartIdx_tmp, qrmanager->ldq,
                               memspace->workspace_double, solution->searchDir);
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T test3_xnrm2_a(int32_T n, const emxArray_real_T_test3_T *x)
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
static void test3_xgemv_bujmjslzp(int32_T m, int32_T n, const
  emxArray_real_T_test3_T *A, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y)
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
static void test3_feasibleratiotest(const emxArray_real_T_test3_T
  *solution_xstar, const emxArray_real_T_test3_T *solution_searchDir,
  emxArray_real_T_test3_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_test3_T *workingset_Aineq, const
  emxArray_real_T_test3_T *workingset_bineq, const emxArray_real_T_test3_T
  *workingset_lb, const emxArray_real_T_test3_T *workingset_ub, const
  emxArray_int32_T_test3_T *workingset_indexLB, const emxArray_int32_T_test3_T
  *workingset_indexUB, const int32_T workingset_sizes[5], const int32_T
  workingset_isActiveIdx[6], const emxArray_boolean_T_test3_T
  *workingset_isActiveConstr, const int32_T workingset_nWConstr[5], boolean_T
  isPhaseOne, real_T *alpha, boolean_T *newBlocking, int32_T *constrType,
  int32_T *constrIdx)
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
  denomTol = 2.2204460492503131E-13 * test3_xnrm2_a(workingset_nVar,
    solution_searchDir);
  if (workingset_nWConstr[2] < workingset_sizes[2]) {
    if (totalIneq >= 0) {
      memcpy(&workspace->data[0], &workingset_bineq->data[0], (uint32_T)
             (totalIneq + 1) * sizeof(real_T));
    }

    test3_xgemv_bujmjslzp(workingset_nVar, workingset_sizes[2], workingset_Aineq,
                          workingset_ldA, solution_xstar, workspace);
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
static void test_addBoundToActiveSetMatrix_(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj,
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
static void test3_addAineqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  idx_local)
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
static void test3_iterate(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
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
  test3_computeGrad_StoreHx(objective, H, f, solution->xstar);
  solution->fstar = test3_computeFval_ReuseHx(objective,
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
            test3_xrotg(&qrmanager->QR->data[b_iy], &temp, &normDelta, &s);
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
          test3_deleteColMoveEnd(qrmanager, globalActiveConstrIdx);
          break;

         default:
          test3_factorQR(qrmanager, workingset->ATwset, nVar,
                         workingset->nActiveConstr, workingset->ldA);
          test3_computeQ_(qrmanager, qrmanager->mrows);
          break;
        }

        idxRotGCol = memcmp(&options_SolverName[0], &b_b[0], 7);
        test3_compute_deltax(H, solution, memspace, qrmanager, cholmanager,
                             objective, (idxRotGCol == 0));
        if (solution->state != -5) {
          exitg1 = 1;
        } else {
          normDelta = test3_xnrm2_a(nVar, solution->searchDir);
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
              test3_xgemv_buj(qrmanager->mrows, qrmanager->ncols, qrmanager->Q,
                              qrmanager->ldq, objective->grad,
                              memspace->workspace_double);
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
              test3_removeConstr(workingset, iyend);
              solution->lambda->data[iyend - 1] = 0.0;
            }
          } else {
            iyend = workingset->nActiveConstr;
            activeSetChangeID = 0;
            globalActiveConstrIdx = workingset->nActiveConstr;
            subProblemChanged = true;
            test3_removeConstr(workingset, workingset->nActiveConstr);
            solution->lambda->data[iyend - 1] = 0.0;
          }

          updateFval = false;
        } else {
          test3_feasibleratiotest(solution->xstar, solution->searchDir,
            memspace->workspace_double, workingset->nVar, workingset->ldA,
            workingset->Aineq, workingset->bineq, workingset->lb, workingset->ub,
            workingset->indexLB, workingset->indexUB, workingset->sizes,
            workingset->isActiveIdx, workingset->isActiveConstr,
            workingset->nWConstr, (objective->objtype == 5), &normDelta,
            &updateFval, &idxRotGCol, &iyend);
          if (updateFval) {
            switch (idxRotGCol) {
             case 3:
              test3_addAineqConstr(workingset, iyend);
              break;

             case 4:
              test_addBoundToActiveSetMatrix_(workingset, 4, iyend);
              break;

             default:
              test_addBoundToActiveSetMatrix_(workingset, 5, iyend);
              break;
            }

            activeSetChangeID = 1;
          } else {
            if (objective->objtype == 5) {
              if (test3_xnrm2_a(objective->nvar, solution->searchDir) > 100.0 *
                  (real_T)objective->nvar * 1.4901161193847656E-8) {
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

          test3_computeGrad_StoreHx(objective, H, f, solution->xstar);
          updateFval = true;
        }

        solution->iterations++;
        iyend = objective->nvar - 1;
        if ((solution->iterations >= runTimeOptions_MaxIterations) &&
            ((solution->state != 1) || (objective->objtype == 5))) {
          solution->state = 0;
        }

        if (solution->iterations - solution->iterations / 50 * 50 == 0) {
          solution->maxConstr = test3_maxConstraintViolation_h(workingset,
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

            nonDegenerateWset = test3_feasibleX0ForWorkingSet
              (memspace->workspace_double, solution->searchDir, workingset,
               qrmanager);
            if ((!nonDegenerateWset) && (solution->state != 0)) {
              solution->state = -2;
            }

            activeSetChangeID = 0;
            normDelta = test3_maxConstraintViolation_h(workingset,
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
          solution->fstar = test3_computeFval_ReuseHx(objective,
            memspace->workspace_double, f, solution->xstar);
          if ((solution->fstar < options_ObjectiveLimit) && ((solution->state !=
                0) || (objective->objtype != 5))) {
            solution->state = 2;
          }
        }
      }
    } else {
      if (!updateFval) {
        solution->fstar = test3_computeFval_ReuseHx(objective,
          memspace->workspace_double, f, solution->xstar);
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

static void test3_emxFree_boolean_T(emxArray_boolean_T_test3_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T_test3_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T_test3_T *)NULL;
  }
}

static void emxFreeStruct_s_Wd0eYcEyLXg48EJ(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->Aineq);
  test3_emxFree_real_T(&pStruct->bineq);
  test3_emxFree_real_T(&pStruct->Aeq);
  test3_emxFree_real_T(&pStruct->beq);
  test3_emxFree_real_T(&pStruct->lb);
  test3_emxFree_real_T(&pStruct->ub);
  test3_emxFree_int32_T(&pStruct->indexLB);
  test3_emxFree_int32_T(&pStruct->indexUB);
  test3_emxFree_int32_T(&pStruct->indexFixed);
  test3_emxFree_int32_T(&pStruct->indexEqRemoved);
  test3_emxFree_real_T(&pStruct->ATwset);
  test3_emxFree_real_T(&pStruct->bwset);
  test3_emxFree_real_T(&pStruct->maxConstrWorkspace);
  test3_emxFree_boolean_T(&pStruct->isActiveConstr);
  test3_emxFree_int32_T(&pStruct->Wid);
  test3_emxFree_int32_T(&pStruct->Wlocalidx);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_driver_d(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, somzaGboVhDG7PNQS6E98jD_test3_T *options, int32_T
  runTimeOptions_MaxIterations)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T b_workingset;
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

    test3_PresolveWorkingSet(solution, memspace, workingset, qrmanager);
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
    solution->maxConstr = test3_maxConstraintViolation_h(workingset,
      solution->xstar);
    if (solution->maxConstr > 1.0E-6) {
      solution->xstar->data[workingset->nVar] = solution->maxConstr + 1.0;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(&b_workingset, workingset);
      if (workingset->probType == 3) {
        mConstr = 1;
      } else {
        mConstr = 4;
      }

      test3_setProblemType(&b_workingset, mConstr);
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
      solution->fstar = test3_computeFval(objective, memspace->workspace_double,
        H, f, solution->xstar);
      solution->state = 5;
      test3_iterate(H, f, solution, memspace, &b_workingset, qrmanager,
                    cholmanager, objective, options->SolverName,
                    1.4901161193847657E-10, 1.0E-6, runTimeOptions_MaxIterations);
      if (b_workingset.isActiveConstr->data[(b_workingset.isActiveIdx[3] +
           b_workingset.sizes[3]) - 2]) {
        mConstr = b_workingset.sizes[0] + b_workingset.sizes[1];
        exitg1 = false;
        while ((!exitg1) && (mConstr + 1 <= b_workingset.nActiveConstr)) {
          if ((b_workingset.Wid->data[mConstr] == 4) &&
              (b_workingset.Wlocalidx->data[mConstr] == b_workingset.sizes[3]))
          {
            test3_removeConstr(&b_workingset, mConstr + 1);
            exitg1 = true;
          } else {
            mConstr++;
          }
        }
      }

      mConstr = b_workingset.nActiveConstr;
      idxStartIneq = b_workingset.sizes[0] + b_workingset.sizes[1];
      while ((mConstr > idxStartIneq) && (mConstr > workingset->nVar)) {
        test3_removeConstr(&b_workingset, mConstr);
        mConstr--;
      }

      solution->maxConstr = solution->xstar->data[workingset->nVar];
      test3_setProblemType(&b_workingset, workingset->probType);
      objective->objtype = objective->prev_objtype;
      objective->nvar = objective->prev_nvar;
      objective->hasLinear = objective->prev_hasLinear;
      options->ObjectiveLimit = (rtMinusInf);
      options->StepTolerance = 1.0E-6;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
      if (solution->state == 0) {
      } else {
        solution->maxConstr = test3_maxConstraintViolation_h(&b_workingset,
          solution->xstar);
        emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
        if (solution->maxConstr > 1.0E-6) {
          mConstr = b_workingset.mConstrMax;
          for (nVar = 0; nVar < mConstr; nVar++) {
            solution->lambda->data[nVar] = 0.0;
          }

          solution->fstar = test3_computeFval(objective,
            memspace->workspace_double, H, f, solution->xstar);
          solution->state = -2;
        } else {
          if (solution->maxConstr > 0.0) {
            for (mConstr = 0; mConstr <= nVar; mConstr++) {
              solution->searchDir->data[mConstr] = solution->xstar->data[mConstr];
            }

            test3_PresolveWorkingSet(solution, memspace, &b_workingset,
              qrmanager);
            emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
            maxConstr_new = test3_maxConstraintViolation_h(workingset,
              solution->xstar);
            if (maxConstr_new >= solution->maxConstr) {
              solution->maxConstr = maxConstr_new;
              for (mConstr = 0; mConstr <= nVar; mConstr++) {
                solution->xstar->data[mConstr] = solution->searchDir->
                  data[mConstr];
              }
            }
          }

          test3_iterate(H, f, solution, memspace, workingset, qrmanager,
                        cholmanager, objective, options->SolverName,
                        options->StepTolerance, options->ObjectiveLimit,
                        runTimeOptions_MaxIterations);
        }
      }
    } else {
      test3_iterate(H, f, solution, memspace, workingset, qrmanager, cholmanager,
                    objective, options->SolverName, options->StepTolerance,
                    options->ObjectiveLimit, runTimeOptions_MaxIterations);
    }
  }

  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&b_workingset);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_addAeqConstr(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  idx_local)
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
static boolean_T test3_soc(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, const somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions)
{
  somzaGboVhDG7PNQS6E98jD_test3_T qpoptions_0;
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

    test3_xgemv_bujmjslzp1(WorkingSet->nVar, WorkingSet->sizes[1],
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

    test3_xgemv_bujmjslzp1(WorkingSet->nVar, WorkingSet->sizes[2],
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
  test3_driver_d(Hessian, grad, TrialState, memspace, WorkingSet, QRManager,
                 CholManager, QPObjective, &qpoptions_0,
                 qpoptions->MaxIterations);
  if (WorkingSet->indexEqRemoved->size[0] > 0) {
    while ((WorkingSet->mEqRemoved > 0) && (WorkingSet->indexEqRemoved->
            data[WorkingSet->mEqRemoved - 1] >= TrialState->iNonEq0)) {
      test3_addAeqConstr(WorkingSet, WorkingSet->indexEqRemoved->data
                         [WorkingSet->mEqRemoved - 1]);
      WorkingSet->mEqRemoved--;
    }
  }

  for (b_mIneq = 0; b_mIneq <= nVar; b_mIneq++) {
    TrialState_0 = TrialState->socDirection->data[b_mIneq];
    TrialState->socDirection->data[b_mIneq] = TrialState->xstar->data[b_mIneq] -
      TrialState_0;
    TrialState->xstar->data[b_mIneq] = TrialState_0;
  }

  success = (test3_xnrm2_a(nVar + 1, TrialState->socDirection) <= test3_xnrm2_a
             (nVar + 1, TrialState->xstar) * 2.0);
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
        test3_addAineqConstr(WorkingSet, TrialState->workingset_old->data[nVar]);
      }

      for (nWIneq_old = 0; nWIneq_old < nWLower_old; nWIneq_old++) {
        test_addBoundToActiveSetMatrix_(WorkingSet, 4,
          TrialState->workingset_old->data[nWIneq_old + b_mIneq]);
      }

      for (nWLower_old = 0; nWLower_old < nWUpper_old; nWLower_old++) {
        test_addBoundToActiveSetMatrix_(WorkingSet, 5,
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
    test3_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
                       WorkingSet->sizes, WorkingSet->isActiveIdx,
                       WorkingSet->Wid, WorkingSet->Wlocalidx,
                       memspace->workspace_double);
  }

  return success;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_relaxed(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T b_WorkingSet;
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T c_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_test3_T qpoptions_0;
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
  test3_setProblemType(&b_WorkingSet, 2);
  idx_max = b_WorkingSet.sizes[2] - 1;
  b_mEq = b_WorkingSet.sizes[1] - 1;
  ix = (b_WorkingSet.sizes[3] - (b_WorkingSet.sizes[1] << 1)) -
    b_WorkingSet.sizes[2];
  for (b_kend = 0; b_kend <= idx_max; b_kend++) {
    memspace->workspace_double->data[b_kend] = b_WorkingSet.bineq->data[b_kend];
  }

  test3_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[2],
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

  test3_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[1],
                        b_WorkingSet.Aeq, b_WorkingSet.ldA, TrialState->xstar,
                        memspace->workspace_double);
  for (b_kend = 0; b_kend <= b_mEq; b_kend++) {
    idx_positive = (idx_max + b_kend) + 2;
    idx_negative = ((idx_max + b_mEq) + b_kend) + 3;
    if (memspace->workspace_double->data[b_kend] <= 0.0) {
      TrialState->xstar->data[nVarOrig + idx_positive] = 0.0;
      TrialState->xstar->data[nVarOrig + idx_negative] =
        -memspace->workspace_double->data[b_kend];
      test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      if (memspace->workspace_double->data[b_kend] >= -1.0E-6) {
        test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      }
    } else {
      TrialState->xstar->data[nVarOrig + idx_positive] =
        memspace->workspace_double->data[b_kend];
      TrialState->xstar->data[nVarOrig + idx_negative] = 0.0;
      test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      if (memspace->workspace_double->data[b_kend] <= 1.0E-6) {
        test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      }
    }
  }

  nVarOrig = qpoptions->MaxIterations;
  qpoptions->MaxIterations = (qpoptions->MaxIterations + b_WorkingSet.nVar) -
    WorkingSet->nVar;
  qpoptions_0 = *qpoptions;
  test3_driver_d(Hessian, grad, TrialState, memspace, &b_WorkingSet, QRManager,
                 CholManager, QPObjective, &qpoptions_0,
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
      test3_removeConstr(&c_WorkingSet, mIneq);
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
  test3_setProblemType(WorkingSet, 3);
  test3_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
                     WorkingSet->sizes, WorkingSet->isActiveIdx, WorkingSet->Wid,
                     WorkingSet->Wlocalidx, memspace->workspace_double);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T test3_step_o(int32_T *STEP_TYPE, emxArray_real_T_test3_T
  *Hessian, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *QRManager, s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager,
  s_saWPFfMboRdWeRqIEJ4x8C_test_T *QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *
  qpoptions)
{
  emxArray_real_T_test3_T *d;
  somzaGboVhDG7PNQS6E98jD_test3_T qpoptions_0;
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

  test3_emxInit_real_T(&d, 1);
  do {
    exitg1 = 0;
    guard1 = false;
    switch (*STEP_TYPE) {
     case 1:
      qpoptions_0 = *qpoptions;
      test3_driver_d(Hessian, TrialState->grad, TrialState, memspace, WorkingSet,
                     QRManager, CholManager, QPObjective, &qpoptions_0,
                     qpoptions->MaxIterations);
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

      test3_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
                         WorkingSet->sizes, WorkingSet->isActiveIdx,
                         WorkingSet->Wid, WorkingSet->Wlocalidx,
                         memspace->workspace_double);
      nonlinEqRemoved = (WorkingSet->mEqRemoved > 0);
      if (WorkingSet->indexEqRemoved->size[0] > 0) {
        while ((WorkingSet->mEqRemoved > 0) && (WorkingSet->indexEqRemoved->
                data[WorkingSet->mEqRemoved - 1] >= TrialState->iNonEq0)) {
          test3_addAeqConstr(WorkingSet, WorkingSet->indexEqRemoved->
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
      test3_emxEnsureCapacity_real_T(d, kend);
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
      test3_emxEnsureCapacity_real_T(TrialState->xstar, kend);
      iH0 = d->size[0];
      for (kend = 0; kend < iH0; kend++) {
        TrialState->xstar->data[kend] = d->data[kend];
      }

      test3_relaxed(Hessian, TrialState->grad, TrialState, MeritFunction,
                    memspace, WorkingSet, QRManager, CholManager, QPObjective,
                    qpoptions);
      for (k = 0; k <= nVar; k++) {
        TrialState->delta_x->data[k] = TrialState->xstar->data[k];
      }

      guard1 = true;
      break;

     default:
      stepSuccess = test3_soc(Hessian, TrialState->grad, TrialState, memspace,
        WorkingSet, QRManager, CholManager, QPObjective, qpoptions);
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
    test3_emxEnsureCapacity_real_T(d, kend);
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
    test3_emxEnsureCapacity_real_T(TrialState->delta_x, kend);
    iH0 = d->size[0];
    for (kend = 0; kend < iH0; kend++) {
      TrialState->delta_x->data[kend] = d->data[kend];
    }
  }

  test3_emxFree_real_T(&d);
  return stepSuccess;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_evalObjAndConstr(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const s_orfxVcOir3wnnUkquctgqH_test_T obj_next_next_next_next_next__1, const
  emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *Cineq_workspace, int32_T
  ineq0, emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0, real_T *fval,
  int32_T *status)
{
  boolean_T tmp;
  *fval = test3_eML_blk_kernel_anonFcn1(obj_next_next_next_next_next__1.x0,
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
    *status = test3_computeConstraints_(obj_next_next_next_next_b_value,
      obj_next_next_next_next_next_b_, obj_next_next_next_next_next_ne,
      obj_next_next_next_next_next__0, x, Cineq_workspace, ineq0, Ceq_workspace,
      eq0);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T test3_computeMeritFcn(real_T obj_penaltyParam, real_T fval, const
  emxArray_real_T_test3_T *Cineq_workspace, int32_T mIneq, const
  emxArray_real_T_test3_T *Ceq_workspace, int32_T mEq, boolean_T evalWellDefined)
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
static void test3_driver(emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const coder_internal_stickyStruct_9_T *FcnEvaluator,
  s_tzdJIwhhx1jgWYIJOPrjUD_test_T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, const emxArray_real_T_test3_T *fscales_cineq_constraint, int32_T
  runTimeOptions_MaxFunctionEvalu)
{
  s7RdrPWkr8UPAUyTdDJkLaG_test3_T Flags;
  somzaGboVhDG7PNQS6E98jD_test3_T expl_temp;
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

  somzaGboVhDG7PNQS6E98jD_test3_T expl_temp_0;
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
  test3_test_exit(MeritFunction, WorkingSet, TrialState, lb, ub,
                  runTimeOptions_MaxFunctionEvalu, &Flags.gradOK, &Flags.fevalOK,
                  &Flags.done, &Flags.stepAccepted, &Flags.failedLineSearch,
                  &Flags.stepType);
  test3_saveJacobian(TrialState, WorkingSet->nVar, WorkingSet->sizes[2],
                     WorkingSet->Aineq, TrialState->iNonIneq0, WorkingSet->
                     sizes[1], WorkingSet->Aeq, TrialState->iNonEq0,
                     WorkingSet->ldA);
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
          test3_updateWorkingSetForNewQP(TrialState->xstarsqp, WorkingSet, mIneq,
            TrialState->mNonlinIneq, TrialState->cIneq, mEq,
            TrialState->mNonlinEq, TrialState->cEq, mLB, lb, mUB, ub, mFixed);
        }

        expl_temp_0 = expl_temp;
        Flags.stepAccepted = test3_step_o(&Flags.stepType, Hessian, lb, ub,
          TrialState, MeritFunction, memspace, WorkingSet, QRManager,
          CholManager, QPObjective, &expl_temp_0);
        if (Flags.stepAccepted) {
          for (k = 0; k < nVar_tmp_tmp; k++) {
            TrialState->xstarsqp->data[k] += TrialState->delta_x->data[k];
          }

          test3_evalObjAndConstr(FcnEvaluator->next.next.next.next.b_value,
            FcnEvaluator->next.next.next.next.next.b_value,
            FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
            FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
            FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
            TrialState->xstarsqp, TrialState->cIneq, TrialState->iNonIneq0,
            TrialState->cEq, TrialState->iNonEq0, &TrialState->sqpFval, &k);
          Flags.fevalOK = (k == 1);
          TrialState->FunctionEvaluations++;
          if (mLinIneq > 0) {
            test3_xgemv_bujmjs(nVar_tmp_tmp, mLinIneq, WorkingSet->Aineq,
                               WorkingSet->ldA, TrialState->xstarsqp,
                               TrialState->cIneq);
          }

          if (mLinEq > 0) {
            test3_xgemv_bujmjs(nVar_tmp_tmp, mLinEq, WorkingSet->Aeq,
                               WorkingSet->ldA, TrialState->xstarsqp,
                               TrialState->cEq);
          }

          MeritFunction->phiFullStep = test3_computeMeritFcn
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

                  test3_evalObjAndConstr
                    (FcnEvaluator->next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
                     FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
                     TrialState->xstarsqp, TrialState->cIneq,
                     TrialState->iNonIneq0, TrialState->cEq, TrialState->iNonEq0,
                     &TrialState->sqpFval, &k);
                  if (b_mLinIneq > 0) {
                    test3_xgemv_bujmjs(b_nVar + 1, b_mLinIneq, WorkingSet->Aineq,
                                       WorkingSet->ldA, TrialState->xstarsqp,
                                       TrialState->cIneq);
                  }

                  if (d_ix > 0) {
                    test3_xgemv_bujmjs(b_nVar + 1, d_ix, WorkingSet->Aeq,
                                       WorkingSet->ldA, TrialState->xstarsqp,
                                       TrialState->cEq);
                  }

                  TrialState->FunctionEvaluations++;
                  b = (k == 1);
                  phi_alpha = test3_computeMeritFcn(MeritFunction->penaltyParam,
                    TrialState->sqpFval, TrialState->cIneq, TrialState->mIneq,
                    TrialState->cEq, TrialState->mEq, b);
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

      Flags.gradOK = test3_computeFiniteDifferences(FiniteDifferences,
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

    test3_test_exit_k(&Flags, memspace, MeritFunction, fscales_cineq_constraint,
                      WorkingSet, TrialState, QRManager, lb, ub,
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

      test3_saveJacobian(TrialState, nVar_tmp_tmp, mIneq, WorkingSet->Aineq,
                         TrialState->iNonIneq0, mEq, WorkingSet->Aeq,
                         TrialState->iNonEq0, WorkingSet->ldA);
      test3_BFGSUpdate(nVar_tmp_tmp, Hessian, TrialState->delta_x,
                       TrialState->delta_gradLag, memspace->workspace_double);
      TrialState->sqpIterations++;
    }
  }
}

static void emxFreeStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->workspace_double);
  test3_emxFree_int32_T(&pStruct->workspace_int);
  test3_emxFree_int32_T(&pStruct->workspace_sort);
}

static void emxFreeStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->grad);
  test3_emxFree_real_T(&pStruct->Hx);
}

static void emxFreeStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->FMat);
}

static void emxFreeStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->QR);
  test3_emxFree_real_T(&pStruct->Q);
  test3_emxFree_int32_T(&pStruct->jpvt);
  test3_emxFree_real_T(&pStruct->tau);
}

static void emxFreeStruct_s_orfxVcOir3wnnUk(s_orfxVcOir3wnnUkquctgqH_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->xref);
  test3_emxFree_real_T(&pStruct->uref);
}

static void emxFreeStruct_anonymous_functio(anonymous_function_test3_T *pStruct)
{
  emxFreeStruct_s_orfxVcOir3wnnUk(&pStruct->workspace);
}

static void emxFreeStruct_s_tzdJIwhhx1jgWYI(s_tzdJIwhhx1jgWYIJOPrjUD_test_T
  *pStruct)
{
  emxFreeStruct_anonymous_functio(&pStruct->objfun);
  test3_emxFree_real_T(&pStruct->cIneq_1);
  test3_emxFree_real_T(&pStruct->cEq_1);
  test3_emxFree_real_T(&pStruct->cIneq_2);
  test3_emxFree_real_T(&pStruct->cEq_2);
  test3_emxFree_boolean_T(&pStruct->hasLB);
  test3_emxFree_boolean_T(&pStruct->hasUB);
}

static void emxFreeStruct_coder_internal_st(coder_internal_stickyStruct_1_T
  *pStruct)
{
  emxFreeStruct_anonymous_functio(&pStruct->b_value);
}

static void emxFreeStruct_coder_internal__k(coder_internal_stickyStruct_2_T
  *pStruct)
{
  emxFreeStruct_coder_internal_st(&pStruct->next);
}

static void emxFreeStruct_coder_internal_ky(coder_internal_stickyStruct_3_T
  *pStruct)
{
  emxFreeStruct_coder_internal__k(&pStruct->next);
}

static void emxFreeStruct_coder_interna_kyv(coder_internal_stickyStruct_4_T
  *pStruct)
{
  emxFreeStruct_coder_internal_ky(&pStruct->next);
}

static void emxFreeStruct_coder_intern_kyv1(coder_internal_stickyStruct_5_T
  *pStruct)
{
  emxFreeStruct_coder_interna_kyv(&pStruct->next);
}

static void emxFreeStruct_coder_inter_kyv1k(coder_internal_stickyStruct_6_T
  *pStruct)
{
  emxFreeStruct_coder_intern_kyv1(&pStruct->next);
}

static void emxFreeStruct_coder_inte_kyv1kf(coder_internal_stickyStruct_7_T
  *pStruct)
{
  emxFreeStruct_coder_inter_kyv1k(&pStruct->next);
}

static void emxFreeStruct_coder_int_kyv1kfe(coder_internal_stickyStruct_8_T
  *pStruct)
{
  emxFreeStruct_coder_inte_kyv1kf(&pStruct->next);
}

static void emxFreeStruct_coder_in_kyv1kfe2(coder_internal_stickyStruct_9_T
  *pStruct)
{
  emxFreeStruct_coder_int_kyv1kfe(&pStruct->next);
}

static void emxFreeStruct_s_0Mw3d4AlMrOoSnA(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->xstarsqp);
  test3_emxFree_real_T(&pStruct->xstarsqp_old);
  test3_emxFree_real_T(&pStruct->cIneq);
  test3_emxFree_real_T(&pStruct->cIneq_old);
  test3_emxFree_real_T(&pStruct->cEq);
  test3_emxFree_real_T(&pStruct->cEq_old);
  test3_emxFree_real_T(&pStruct->grad);
  test3_emxFree_real_T(&pStruct->grad_old);
  test3_emxFree_real_T(&pStruct->lambdasqp);
  test3_emxFree_real_T(&pStruct->lambdaStopTest);
  test3_emxFree_real_T(&pStruct->lambdaStopTestPrev);
  test3_emxFree_real_T(&pStruct->delta_x);
  test3_emxFree_real_T(&pStruct->socDirection);
  test3_emxFree_int32_T(&pStruct->workingset_old);
  test3_emxFree_real_T(&pStruct->JacCineqTrans_old);
  test3_emxFree_real_T(&pStruct->JacCeqTrans_old);
  test3_emxFree_real_T(&pStruct->gradLag);
  test3_emxFree_real_T(&pStruct->delta_gradLag);
  test3_emxFree_real_T(&pStruct->xstar);
  test3_emxFree_real_T(&pStruct->lambda);
  test3_emxFree_real_T(&pStruct->searchDir);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_fmincon(const real_T fun_workspace_x0[4], const
  emxArray_real_T_test3_T *fun_workspace_xref, const emxArray_real_T_test3_T
  *fun_workspace_uref, real_T fun_workspace_N, const emxArray_real_T_test3_T *x0,
  const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub, const
  s6lIrH89xwD47fl4e1dZNiE_test3_T nonlcon_workspace, emxArray_real_T_test3_T *x)
{
  coder_internal_stickyStruct_9_T FcnEvaluator;
  emxArray_real_T_test3_T *Ceq;
  emxArray_real_T_test3_T *Cineq;
  emxArray_real_T_test3_T *Hessian;
  sG8JZ69axY52WWR6RKyApQC_test3_T MeritFunction;
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T TrialState;
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T WorkingSet;
  s_l1Gll5dfO9DpqQrvRqAf7E_test_T QRManager;
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T memspace;
  s_saWPFfMboRdWeRqIEJ4x8C_test_T QPObjective;
  s_tzdJIwhhx1jgWYIJOPrjUD_test_T FiniteDifferences;
  s_vdGXtauKr5HuLAqoxBLhXH_test_T CholManager;
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
  test3_emxInit_real_T(&Cineq, 1);
  test3_emxInit_real_T(&Ceq, 1);
  test3_eML_blk_kernel_anonFcn2(nonlcon_workspace.x0, nonlcon_workspace.N, x0,
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

  test3_emxInit_real_T(&Hessian, 2);
  loop_ub = Hessian->size[0] * Hessian->size[1];
  Hessian->size[0] = x0->size[0];
  Hessian->size[1] = x0->size[0];
  test3_emxEnsureCapacity_real_T(Hessian, loop_ub);
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
  test3_factoryConstruct(nVarMax, mConstrMax, Cineq->size[0], Ceq->size[0], x0,
    Cineq->size[0], Ceq->size[0], &TrialState);
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
  test3_emxEnsureCapacity_real_T
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
  test3_emxEnsureCapacity_real_T
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
  test3_factoryConstruct_i(fun_workspace_x0, fun_workspace_xref,
    fun_workspace_uref, fun_workspace_N, nonlcon_workspace, x0->size[0],
    Cineq->size[0], Ceq->size[0], lb, ub, &FiniteDifferences);
  emxInitStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  QRManager.ldq = maxDims;
  loop_ub = QRManager.QR->size[0] * QRManager.QR->size[1];
  QRManager.QR->size[0] = maxDims;
  QRManager.QR->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.QR, loop_ub);
  loop_ub = QRManager.Q->size[0] * QRManager.Q->size[1];
  QRManager.Q->size[0] = maxDims;
  QRManager.Q->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.Q, loop_ub);
  loop_ub = maxDims * maxDims;
  for (iAeq0 = 0; iAeq0 < loop_ub; iAeq0++) {
    QRManager.Q->data[iAeq0] = 0.0;
  }

  loop_ub = QRManager.jpvt->size[0];
  QRManager.jpvt->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(QRManager.jpvt, loop_ub);
  for (iAeq0 = 0; iAeq0 < maxDims; iAeq0++) {
    QRManager.jpvt->data[iAeq0] = 0;
  }

  QRManager.mrows = 0;
  QRManager.ncols = 0;
  loop_ub = QRManager.tau->size[0];
  QRManager.tau->size[0] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.tau, loop_ub);
  QRManager.minRowCol = 0;
  QRManager.usedPivoting = false;
  emxInitStruct_s_vdGXtauKr5HuLAq(&CholManager);
  loop_ub = CholManager.FMat->size[0] * CholManager.FMat->size[1];
  CholManager.FMat->size[0] = maxDims;
  CholManager.FMat->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(CholManager.FMat, loop_ub);
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
  test3_emxEnsureCapacity_real_T(QPObjective.grad, loop_ub);
  loop_ub = QPObjective.Hx->size[0];
  QPObjective.Hx->size[0] = nVarMax - 1;
  test3_emxEnsureCapacity_real_T(QPObjective.Hx, loop_ub);
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
  test3_emxEnsureCapacity_real_T(memspace.workspace_double, loop_ub);
  if (nVarMax >= 2) {
    loop_ub = memspace.workspace_double->size[0] *
      memspace.workspace_double->size[1];
    memspace.workspace_double->size[1] = nVarMax;
    test3_emxEnsureCapacity_real_T(memspace.workspace_double, loop_ub);
  } else {
    loop_ub = memspace.workspace_double->size[0] *
      memspace.workspace_double->size[1];
    memspace.workspace_double->size[1] = 2;
    test3_emxEnsureCapacity_real_T(memspace.workspace_double, loop_ub);
  }

  loop_ub = memspace.workspace_int->size[0];
  memspace.workspace_int->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(memspace.workspace_int, loop_ub);
  loop_ub = memspace.workspace_sort->size[0];
  memspace.workspace_sort->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(memspace.workspace_sort, loop_ub);
  emxInitStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  test3_factoryConstruct_ir(Cineq->size[0], Ceq->size[0], x0->size[0], nVarMax,
    mConstrMax, &WorkingSet);
  test3_compressBounds(x0->size[0], WorkingSet.indexLB, WorkingSet.indexUB,
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

  fval = test3_eML_blk_kernel_anonFcn1(fun_workspace_x0, fun_workspace_xref,
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
    test3_computeConstraints_(Ceq->size[0], Cineq->size[0], nonlcon_workspace.x0,
      nonlcon_workspace.N, TrialState.xstarsqp, TrialState.cIneq,
      TrialState.iNonIneq0, TrialState.cEq, TrialState.iNonEq0);
  }

  test3_computeFiniteDifferences(&FiniteDifferences, fval, TrialState.cIneq,
    TrialState.iNonIneq0, TrialState.cEq, TrialState.iNonEq0,
    TrialState.xstarsqp, TrialState.grad, WorkingSet.Aineq, TrialState.iNonIneq0,
    WorkingSet.ldA, WorkingSet.Aeq, TrialState.iNonEq0, WorkingSet.ldA, lb, ub);
  TrialState.FunctionEvaluations = FiniteDifferences.numEvals + 1;
  test3_updateWorkingSetForNewQP(x0, &WorkingSet, Cineq->size[0],
    TrialState.mNonlinIneq, TrialState.cIneq, Ceq->size[0], TrialState.mNonlinEq,
    TrialState.cEq, nVar, lb, nVarMax, ub, maxDims);
  test3_setProblemType(&WorkingSet, 3);
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

  test3_emxFree_real_T(&Ceq);
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

  test3_driver(Hessian, lb, ub, &TrialState, &MeritFunction, &FcnEvaluator,
               &FiniteDifferences, &memspace, &WorkingSet, &QRManager,
               &CholManager, &QPObjective, Cineq, 100 * x0->size[0]);
  test3_emxFree_real_T(&Cineq);
  test3_emxFree_real_T(&Hessian);
  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  emxFreeStruct_s_pIaUYPkQBTqVmAK(&memspace);
  emxFreeStruct_s_saWPFfMboRdWeRq(&QPObjective);
  emxFreeStruct_s_vdGXtauKr5HuLAq(&CholManager);
  emxFreeStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  emxFreeStruct_s_tzdJIwhhx1jgWYI(&FiniteDifferences);
  emxFreeStruct_coder_in_kyv1kfe2(&FcnEvaluator);
  loop_ub = x->size[0];
  x->size[0] = TrialState.xstarsqp->size[0];
  test3_emxEnsureCapacity_real_T(x, loop_ub);
  loop_ub = TrialState.xstarsqp->size[0];
  for (iAeq0 = 0; iAeq0 < loop_ub; iAeq0++) {
    x->data[iAeq0] = TrialState.xstarsqp->data[iAeq0];
  }

  emxFreeStruct_s_0Mw3d4AlMrOoSnA(&TrialState);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void test3_eML_blk_kernel_anonFcn2_m(const real_T x0[4], real_T N, const
  emxArray_real_T_test3_T *w, emxArray_real_T_test3_T *varargout_1,
  emxArray_real_T_test3_T *varargout_2)
{
  emxArray_real_T_test3_T *eta;
  emxArray_real_T_test3_T *z;
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

  /* '<S3>:1:178' */
  /* '<S3>:1:168' */
  test3_emxInit_real_T(&z, 2);
  z_next_idx_1_tmp = z->size[0] * z->size[1];
  z->size[0] = 2;
  z->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(z, z_next_idx_1_tmp);
  loop_ub_tmp = (int32_T)(N + 1.0) << 1;

  /* '<S3>:1:169' */
  test3_emxInit_real_T(&eta, 2);
  z_next_idx_1_tmp = eta->size[0] * eta->size[1];
  eta->size[0] = 2;
  eta->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(eta, z_next_idx_1_tmp);
  if (loop_ub_tmp - 1 >= 0) {
    memset(&z->data[0], 0, (uint32_T)loop_ub_tmp * sizeof(real_T));
  }

  if (loop_ub_tmp - 1 >= 0) {
    memset(&eta->data[0], 0, (uint32_T)loop_ub_tmp * sizeof(real_T));
  }

  /* '<S3>:1:170' */
  /* '<S3>:1:171' */
  /* '<S3>:1:128' */
  z_tmp = x0[2] + x0[3];
  z->data[0] = (0.256 * cos(x0[2]) + x0[0]) + cos(z_tmp) * 0.35;
  z->data[1] = (0.256 * sin(x0[2]) + x0[1]) + sin(z_tmp) * 0.35;

  /* '<S3>:1:172' */
  eta->data[0] = x0[2];
  eta->data[1] = rt_atan2d_snf(w->data[1], w->data[0]);

  /* '<S3>:1:173' */
  varargout_2->size[0] = 0;

  /* '<S3>:1:174' */
  varargout_1->size[0] = 0;
  loop_ub_tmp = (int32_T)N;

  /* '<S3>:1:176' */
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

    /* '<S3>:1:177' */
    /* '<S3>:1:178' */
    s1_tmp = (k << 1) + 1;
    s1 = z->data[s1_tmp];
    z_next_idx_1_tmp = k << 1;
    z_next_idx_1 = z->data[z_next_idx_1_tmp];
    z_tmp = w->data[f + 1];
    z_next_idx_0 = (z_tmp * 0.0 + 0.3 * w->data[f]) + (0.0 * s1 + z_next_idx_1);
    z_next_idx_1 = (z_tmp * 0.3 + 0.0 * w->data[f]) + (0.0 * z_next_idx_1 + s1);

    /* '<S3>:1:179' */
    /* '<S3>:1:181' */
    /* '<S3>:1:139' */
    eta_next_idx_0 = eta->data[z_next_idx_1_tmp];
    eta_0 = eta->data[s1_tmp];
    c1 = eta_next_idx_0 + eta_0;
    s1 = sin(c1);

    /* '<S3>:1:139' */
    c1 = cos(c1);

    /* '<S3>:1:140' */
    /* '<S3>:1:182' */
    eta_next_tmp_tmp = sin(eta_0);

    /* '<S3>:1:183' */
    /* '<S3>:1:185' */
    z_next_idx_1_tmp = varargout_2->size[0];
    s1_tmp = varargout_2->size[0];
    varargout_2->size[0] += 4;
    test3_emxEnsureCapacity_real_T(varargout_2, s1_tmp);
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

    /* '<S3>:1:186' */
    z_next_idx_1_tmp = varargout_1->size[0];
    s1_tmp = varargout_1->size[0];
    varargout_1->size[0]++;
    test3_emxEnsureCapacity_real_T(varargout_1, s1_tmp);
    z_tmp = 0.0;
    e -= f;
    for (s1_tmp = 0; s1_tmp < e; s1_tmp++) {
      z_next_idx_0 = w->data[f + s1_tmp];
      z_tmp += z_next_idx_0 * z_next_idx_0;
    }

    varargout_1->data[z_next_idx_1_tmp] = z_tmp - 0.5;
  }

  test3_emxFree_real_T(&eta);
  test3_emxFree_real_T(&z);
}

static void emxInitStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->zref, 2);
  test3_emxInit_real_T(&pStruct->wref, 2);
}

static void emxInitStruct_anonymous_funct_k(anonymous_function_test3_k_T
  *pStruct)
{
  emxInitStruct_s_lZflMU9sVqxC63I(&pStruct->workspace);
}

static void emxInitStruct_coder_internal__p(coder_internal_stickyStruct_k_T
  *pStruct)
{
  emxInitStruct_anonymous_funct_k(&pStruct->b_value);
}

static void emxInitStruct_coder_internal__d(coder_internal_stickyStruc_ky_T
  *pStruct)
{
  emxInitStruct_coder_internal__p(&pStruct->next);
}

static void emxInitStruct_c_kyv1kfe2tm4hq5k(coder_internal_stickyStru_kyv_T
  *pStruct)
{
  emxInitStruct_coder_internal__d(&pStruct->next);
}

static void emxInitStruct_co_kyv1kfe2tm4hq5(coder_internal_stickyStr_kyv1_T
  *pStruct)
{
  emxInitStruct_c_kyv1kfe2tm4hq5k(&pStruct->next);
}

static void emxInitStruct_cod_kyv1kfe2tm4hq(coder_internal_stickySt_kyv1k_T
  *pStruct)
{
  emxInitStruct_co_kyv1kfe2tm4hq5(&pStruct->next);
}

static void emxInitStruct_code_kyv1kfe2tm4h(coder_internal_stickyS_kyv1kf_T
  *pStruct)
{
  emxInitStruct_cod_kyv1kfe2tm4hq(&pStruct->next);
}

static void emxInitStruct_coder_kyv1kfe2tm4(coder_internal_sticky_kyv1kfe_T
  *pStruct)
{
  emxInitStruct_code_kyv1kfe2tm4h(&pStruct->next);
}

static void emxInitStruct_coder__kyv1kfe2tm(coder_internal_stick_kyv1kfe2_T
  *pStruct)
{
  emxInitStruct_coder_kyv1kfe2tm4(&pStruct->next);
}

static void emxInitStruct_coder_i_kyv1kfe2t(coder_internal_stickyStruct_c_T
  *pStruct)
{
  emxInitStruct_coder__kyv1kfe2tm(&pStruct->next);
}

static void emxInitStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_test_T
  *pStruct)
{
  emxInitStruct_anonymous_funct_k(&pStruct->objfun);
  test3_emxInit_real_T(&pStruct->cIneq_1, 1);
  test3_emxInit_real_T(&pStruct->cEq_1, 1);
  test3_emxInit_real_T(&pStruct->cIneq_2, 1);
  test3_emxInit_real_T(&pStruct->cEq_2, 1);
  test3_emxInit_boolean_T(&pStruct->hasLB, 1);
  test3_emxInit_boolean_T(&pStruct->hasUB, 1);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T test3_eML_blk_kernel_anonFcn1_e(const real_T x0[4], const
  emxArray_real_T_test3_T *zref, const emxArray_real_T_test3_T *wref, real_T N,
  const emxArray_real_T_test3_T *w)
{
  emxArray_real_T_test3_T *z;
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

  /* '<S3>:1:154' */
  /* '<S3>:1:158' */
  /* '<S3>:1:147' */
  test3_emxInit_real_T(&z, 2);
  loop_ub = z->size[0] * z->size[1];
  z->size[0] = 2;
  z->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(z, loop_ub);
  loop_ub = (int32_T)(N + 1.0) << 1;
  if (loop_ub - 1 >= 0) {
    memset(&z->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S3>:1:149' */
  /* '<S3>:1:128' */
  err_z_idx_1 = x0[2] + x0[3];
  z->data[0] = (0.256 * cos(x0[2]) + x0[0]) + cos(err_z_idx_1) * 0.35;
  z->data[1] = (0.256 * sin(x0[2]) + x0[1]) + sin(err_z_idx_1) * 0.35;

  /* '<S3>:1:150' */
  varargout_1 = 0.0;
  b = (int32_T)N;

  /* '<S3>:1:152' */
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

    /* '<S3>:1:153' */
    /* '<S3>:1:154' */
    z_tmp = k << 1;
    z_0 = z->data[z_tmp];
    z_tmp_0 = (k << 1) + 1;
    z_1 = z->data[z_tmp_0];

    /* '<S3>:1:156' */
    err_z_idx_1 = w->data[f + 1];
    loop_ub = (k + 1) << 1;
    z->data[loop_ub] = (err_z_idx_1 * 0.0 + 0.3 * w->data[f]) + (0.0 * z_1 + z_0);
    err_z_idx_0 = z_0 - zref->data[z_tmp];
    z->data[1 + loop_ub] = (err_z_idx_1 * 0.3 + 0.0 * w->data[f]) + (0.0 * z_0 +
      z_1);
    err_z_idx_1 = z_1 - zref->data[z_tmp_0];

    /* '<S3>:1:157' */
    loop_ub = e - f;
    if (loop_ub == 2) {
      for (e = 0; e < loop_ub; e++) {
        err_w[e] = w->data[f + e] - wref->data[(k << 1) + e];
      }
    } else {
      test3_binary_expand_op(err_w, w, f, e - 1, wref, k);
    }

    /* '<S3>:1:158' */
    varargout_1 = (((err_z_idx_0 * 10.0 + err_z_idx_1 * 0.0) * err_z_idx_0 +
                    (err_z_idx_0 * 0.0 + err_z_idx_1 * 10.0) * err_z_idx_1) +
                   varargout_1) + ((err_w[1] * 0.0 + err_w[0]) * err_w[0] +
      (err_w[0] * 0.0 + err_w[1]) * err_w[1]);
  }

  /* '<S3>:1:161' */
  err_z_idx_0 = z->data[(z->size[1] - 1) << 1] - zref->data[(zref->size[1] - 1) <<
    1];
  err_z_idx_1 = z->data[((z->size[1] - 1) << 1) + 1] - zref->data[((zref->size[1]
    - 1) << 1) + 1];
  test3_emxFree_real_T(&z);

  /* '<S3>:1:162' */
  varargout_1 += (err_z_idx_0 * 10.0 + err_z_idx_1 * 0.0) * err_z_idx_0 +
    (err_z_idx_0 * 0.0 + err_z_idx_1 * 10.0) * err_z_idx_1;
  return varargout_1;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static int32_T test3_computeConstraints__c(int32_T
  obj_next_next_next_next_b_value, int32_T obj_next_next_next_next_next_b_,
  const real_T obj_next_next_next_next_next_ne[4], real_T
  obj_next_next_next_next_next__0, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *Cineq_workspace, int32_T ineq0,
  emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0)
{
  emxArray_int32_T_test3_T *eqRange;
  emxArray_int32_T_test3_T *ineqRange;
  emxArray_real_T_test3_T *b;
  emxArray_real_T_test3_T *c;
  int32_T k;
  int32_T n;
  int32_T status;
  int32_T yk;
  if (obj_next_next_next_next_next_b_ - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_next_b_;
  }

  test3_emxInit_int32_T(&ineqRange, 2);
  k = ineqRange->size[0] * ineqRange->size[1];
  ineqRange->size[0] = 1;
  ineqRange->size[1] = n;
  test3_emxEnsureCapacity_int32_T(ineqRange, k);
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
  test3_emxEnsureCapacity_int32_T(ineqRange, k);
  n = ineqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    ineqRange->data[k] += ineq0;
  }

  if (obj_next_next_next_next_b_value - 1 < 0) {
    n = 0;
  } else {
    n = obj_next_next_next_next_b_value;
  }

  test3_emxInit_int32_T(&eqRange, 2);
  k = eqRange->size[0] * eqRange->size[1];
  eqRange->size[0] = 1;
  eqRange->size[1] = n;
  test3_emxEnsureCapacity_int32_T(eqRange, k);
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
  test3_emxEnsureCapacity_int32_T(eqRange, k);
  n = eqRange->size[1] - 1;
  for (k = 0; k <= n; k++) {
    eqRange->data[k] += eq0;
  }

  test3_emxInit_real_T(&b, 1);
  test3_emxInit_real_T(&c, 1);
  test3_eML_blk_kernel_anonFcn2_m(obj_next_next_next_next_next_ne,
    obj_next_next_next_next_next__0, x, b, c);
  n = ineqRange->size[1];
  for (k = 0; k < n; k++) {
    Cineq_workspace->data[ineqRange->data[k] - 1] = b->data[k];
  }

  test3_emxFree_real_T(&b);
  test3_emxFree_int32_T(&ineqRange);
  n = eqRange->size[1];
  for (k = 0; k < n; k++) {
    Ceq_workspace->data[eqRange->data[k] - 1] = c->data[k];
  }

  test3_emxFree_real_T(&c);
  test3_emxFree_int32_T(&eqRange);
  status = test3_checkVectorNonFinite(obj_next_next_next_next_next_b_,
    Cineq_workspace, ineq0);
  if (status == 1) {
    status = test3_checkVectorNonFinite(obj_next_next_next_next_b_value,
      Ceq_workspace, eq0);
  }

  return status;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static boolean_T test3_finDiffEvalAndChkErr_p(const real_T
  obj_objfun_workspace_x0[4], const emxArray_real_T_test3_T
  *obj_objfun_workspace_zref, const emxArray_real_T_test3_T
  *obj_objfun_workspace_wref, real_T obj_objfun_workspace_N, const real_T
  obj_nonlin_workspace_x0[4], real_T obj_nonlin_workspace_N, int32_T obj_mIneq,
  int32_T obj_mEq, real_T *fplus, emxArray_real_T_test3_T *cIneqPlus,
  emxArray_real_T_test3_T *cEqPlus, int32_T dim, real_T delta,
  emxArray_real_T_test3_T *xk)
{
  real_T temp_tmp;
  int32_T idx;
  boolean_T evalOK;
  temp_tmp = xk->data[dim - 1];
  xk->data[dim - 1] = temp_tmp + delta;
  *fplus = test3_eML_blk_kernel_anonFcn1_e(obj_objfun_workspace_x0,
    obj_objfun_workspace_zref, obj_objfun_workspace_wref, obj_objfun_workspace_N,
    xk);
  evalOK = ((!rtIsInf(*fplus)) && (!rtIsNaN(*fplus)));
  if (evalOK) {
    test3_eML_blk_kernel_anonFcn2_m(obj_nonlin_workspace_x0,
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
static boolean_T test_computeFiniteDifferences_k(s_9imJcZ2iwk426vK9Q2bBEG_test_T
  *obj, real_T fCurrent, const emxArray_real_T_test3_T *cIneqCurrent, int32_T
  ineq0, const emxArray_real_T_test3_T *cEqCurrent, int32_T eq0,
  emxArray_real_T_test3_T *xk, emxArray_real_T_test3_T *gradf,
  emxArray_real_T_test3_T *JacCineqTrans, int32_T CineqColStart, int32_T ldJI,
  emxArray_real_T_test3_T *JacCeqTrans, int32_T CeqColStart, int32_T ldJE)
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
    evalOK = test3_finDiffEvalAndChkErr_p(obj->objfun.workspace.x0,
      obj->objfun.workspace.zref, obj->objfun.workspace.wref,
      obj->objfun.workspace.N, obj->nonlin.workspace.x0, obj->nonlin.workspace.N,
      obj->mIneq, obj->mEq, &obj->f_1, obj->cIneq_1, obj->cEq_1, b_idx + 1,
      deltaX, xk);
    obj->numEvals++;
    guard1 = false;
    if (!evalOK) {
      deltaX = -deltaX;
      evalOK = test3_finDiffEvalAndChkErr_p(obj->objfun.workspace.x0,
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
static void test3_modifyOverheadPhaseOne__h(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj)
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
static void test3_setProblemType_g(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *obj, int32_T
  PROBLEM_TYPE)
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

    test3_modifyOverheadPhaseOne__h(obj);
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

    test3_modifyOverheadPhaseOne__h(obj);
    break;
  }

  obj->probType = PROBLEM_TYPE;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T test3_computePrimalFeasError_d(int32_T mLinIneq, int32_T
  mNonlinIneq, const emxArray_real_T_test3_T *cIneq, int32_T mLinEq, int32_T
  mNonlinEq, const emxArray_real_T_test3_T *cEq)
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
static void test3_test_exit_ks(sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  const s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, int32_T
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

  test3_xgemv(WorkingSet->nVar, WorkingSet->sizes[1], WorkingSet->Aeq,
              WorkingSet->ldA, TrialState->lambdaStopTest, 1,
              TrialState->gradLag);
  test3_xgemv(WorkingSet->nVar, WorkingSet->sizes[2], WorkingSet->Aineq,
              WorkingSet->ldA, TrialState->lambdaStopTest, WorkingSet->sizes[1]
              + 1, TrialState->gradLag);
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

  MeritFunction->nlpPrimalFeasError = test3_computePrimalFeasError_d
    (WorkingSet->sizes[2] - TrialState->mNonlinIneq, TrialState->mNonlinIneq,
     TrialState->cIneq, WorkingSet->sizes[1] - TrialState->mNonlinEq,
     TrialState->mNonlinEq, TrialState->cEq);
  MeritFunction->feasRelativeFactor = fmax(1.0,
    MeritFunction->nlpPrimalFeasError);
  isFeasible = (MeritFunction->nlpPrimalFeasError <= 1.0E-6 *
                MeritFunction->feasRelativeFactor);
  test3_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag, Flags_gradOK,
    &MeritFunction->nlpDualFeasError);
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
static real_T test3_computeComplError_c(const emxArray_real_T_test3_T
  *fscales_cineq_constraint, int32_T mIneq, const emxArray_real_T_test3_T *cIneq,
  int32_T mLB, const emxArray_real_T_test3_T *lambda, int32_T iL0)
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
static void test_updateWorkingSetForNewQP_b(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, int32_T mIneq, int32_T mNonlinIneq, const emxArray_real_T_test3_T
  *cIneq, int32_T mEq, int32_T mNonlinEq, const emxArray_real_T_test3_T *cEq)
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
static void test3_sortLambdaQP_e(emxArray_real_T_test3_T *lambda, int32_T
  WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
  WorkingSet_isActiveIdx[6], const emxArray_int32_T_test3_T *WorkingSet_Wid,
  const emxArray_int32_T_test3_T *WorkingSet_Wlocalidx, emxArray_real_T_test3_T *
  workspace)
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
static void test3_test_exit_ksj(s7RdrPWkr8UPAUyTdDJkLaG_test3_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const emxArray_real_T_test3_T *fscales_cineq_constraint,
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T *WorkingSet, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T
  *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager, int32_T
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

  test3_xgemv(WorkingSet->nVar, WorkingSet->sizes[1], WorkingSet->Aeq,
              WorkingSet->ldA, TrialState->lambdaStopTest, 1,
              TrialState->gradLag);
  test3_xgemv(WorkingSet->nVar, WorkingSet->sizes[2], WorkingSet->Aineq,
              WorkingSet->ldA, TrialState->lambdaStopTest, WorkingSet->sizes[1]
              + 1, TrialState->gradLag);
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

  MeritFunction->nlpPrimalFeasError = test3_computePrimalFeasError_d
    (WorkingSet->sizes[2] - TrialState->mNonlinIneq, TrialState->mNonlinIneq,
     TrialState->cIneq, WorkingSet->sizes[1] - TrialState->mNonlinEq,
     TrialState->mNonlinEq, TrialState->cEq);
  if (TrialState->sqpIterations == 0) {
    MeritFunction->feasRelativeFactor = fmax(1.0,
      MeritFunction->nlpPrimalFeasError);
  }

  isFeasible = (MeritFunction->nlpPrimalFeasError <= 1.0E-6 *
                MeritFunction->feasRelativeFactor);
  test3_computeDualFeasError(WorkingSet->nVar, TrialState->gradLag,
    &Flags->gradOK, &MeritFunction->nlpDualFeasError);
  if (!Flags->gradOK) {
    Flags->done = true;
    if (isFeasible) {
      TrialState->sqpExitFlag = 2;
    } else {
      TrialState->sqpExitFlag = -2;
    }
  } else {
    MeritFunction->nlpComplError = test3_computeComplError_c
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

      test3_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[1], WorkingSet->Aeq,
                    WorkingSet->ldA, TrialState->lambdaStopTestPrev, 1,
                    memspace->workspace_double);
      test3_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[2], WorkingSet->Aineq,
                    WorkingSet->ldA, TrialState->lambdaStopTestPrev,
                    WorkingSet->sizes[1] + 1, memspace->workspace_double);
      for (iQR_diag = 0; iQR_diag <= mLB; iQR_diag++) {
        memspace->workspace_double->data[WorkingSet->indexLB->data[iQR_diag] - 1]
          -= TrialState->lambdaStopTestPrev->data[mLambda_tmp + iQR_diag];
      }

      test3_computeDualFeasError(WorkingSet->nVar, memspace->workspace_double,
        &dxTooSmall, &nlpComplErrorLSQ);
      nlpComplErrorTmp = test3_computeComplError_c(fscales_cineq_constraint,
        WorkingSet->sizes[2], TrialState->cIneq, WorkingSet->sizes[3],
        TrialState->lambdaStopTestPrev, WorkingSet->sizes[1] + 1);
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
                  test_updateWorkingSetForNewQP_b(WorkingSet, WorkingSet->sizes
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

                  test3_xgeqp3(QRManager->QR, WorkingSet->nVar,
                               WorkingSet->nActiveConstr, QRManager->jpvt,
                               QRManager->tau);
                }

                test3_computeQ_(QRManager, QRManager->mrows);
                test3_xgemv_buj(WorkingSet->nVar, WorkingSet->nVar, QRManager->Q,
                                QRManager->ldq, TrialState->grad,
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

                test3_sortLambdaQP_e(TrialState->lambda,
                                     WorkingSet->nActiveConstr,
                                     WorkingSet->sizes, WorkingSet->isActiveIdx,
                                     WorkingSet->Wid, WorkingSet->Wlocalidx,
                                     memspace->workspace_double);
                for (mEq = 0; mEq <= nVar; mEq++) {
                  memspace->workspace_double->data[mEq] = TrialState->grad->
                    data[mEq];
                }

                test3_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[1],
                              WorkingSet->Aeq, WorkingSet->ldA,
                              TrialState->lambda, 1, memspace->workspace_double);
                test3_xgemv_b(WorkingSet->nVar, WorkingSet->sizes[2],
                              WorkingSet->Aineq, WorkingSet->ldA,
                              TrialState->lambda, WorkingSet->sizes[1] + 1,
                              memspace->workspace_double);
                for (nVar = 0; nVar <= mLB; nVar++) {
                  memspace->workspace_double->data[WorkingSet->indexLB->
                    data[nVar] - 1] -= TrialState->lambda->data[mLambda_tmp +
                    nVar];
                }

                test3_computeDualFeasError(WorkingSet->nVar,
                  memspace->workspace_double, &isFeasible, &s);
                nlpComplErrorLSQ = test3_computeComplError_c
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
static boolean_T test3_feasibleX0ForWorkingSet_n(emxArray_real_T_test3_T
  *workspace, emxArray_real_T_test3_T *xCurrent, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager)
{
  emxArray_real_T_test3_T *B;
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

    test3_emxInit_real_T(&B, 2);
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
        test3_emxEnsureCapacity_real_T(B, b_mIneq);
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
        test3_emxEnsureCapacity_real_T(qrmanager->tau, b_mIneq);
        for (b_mIneq = 0; b_mIneq < minmana; b_mIneq++) {
          qrmanager->tau->data[b_mIneq] = 0.0;
        }

        if (jBcol >= 1) {
          test3_qrf(B, workingset->nActiveConstr, workingset->nVar, jBcol,
                    qrmanager->tau);
        }

        b_mIneq = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        qrmanager->QR->size[0] = B->size[0];
        qrmanager->QR->size[1] = B->size[1];
        test3_emxEnsureCapacity_real_T(qrmanager->QR, b_mIneq);
        ldq = B->size[0] * B->size[1];
        for (b_mIneq = 0; b_mIneq < ldq; b_mIneq++) {
          qrmanager->QR->data[b_mIneq] = B->data[b_mIneq];
        }
      }

      test3_computeQ_(qrmanager, qrmanager->mrows);
      ldq = qrmanager->ldq;
      iy = workspace->size[0];
      b_mIneq = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      test3_emxEnsureCapacity_real_T(B, b_mIneq);
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
      test3_factorQR(qrmanager, workingset->ATwset, workingset->nVar,
                     workingset->nActiveConstr, workingset->ldA);
      test3_computeQ_(qrmanager, qrmanager->minRowCol);
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
      test3_emxEnsureCapacity_real_T(B, b_mIneq);
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

    test3_emxFree_real_T(&B);
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

            test3_xgemv_bujm(workingset->nVarOrig, workingset->sizes[2],
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

            test3_xgemv_bujm(workingset->nVarOrig, workingset->sizes[1],
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

            test3_xgemv_bujm(workingset->nVar, workingset->sizes[2],
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

            test3_xgemv_bujm(workingset->nVar, workingset->sizes[1],
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

            test3_xgemv_bujmj(workingset->nVarOrig, workingset->sizes[2],
                              workingset->Aineq, workingset->ldA, workspace,
                              workspace->size[0] + 1,
                              workingset->maxConstrWorkspace);
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

            test3_xgemv_bujmj(workingset->nVarOrig, workingset->sizes[1],
                              workingset->Aeq, workingset->ldA, workspace,
                              workspace->size[0] + 1,
                              workingset->maxConstrWorkspace);
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

            test3_xgemv_bujmj(workingset->nVar, workingset->sizes[2],
                              workingset->Aineq, workingset->ldA, workspace,
                              workspace->size[0] + 1,
                              workingset->maxConstrWorkspace);
            for (jBcol = 0; jBcol <= iy; jBcol++) {
              d_v = fmax(d_v, workingset->maxConstrWorkspace->data[jBcol]);
            }
          }

          if (workingset->Aeq->size[0] != 0) {
            for (jBcol = 0; jBcol <= minmana; jBcol++) {
              workingset->maxConstrWorkspace->data[jBcol] = workingset->
                beq->data[jBcol];
            }

            test3_xgemv_bujmj(workingset->nVar, workingset->sizes[1],
                              workingset->Aeq, workingset->ldA, workspace,
                              workspace->size[0] + 1,
                              workingset->maxConstrWorkspace);
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
static real_T test3_maxConstraintViolation_f(s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *obj, const emxArray_real_T_test3_T *x)
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

      test3_xgemv_bujmjs(obj->nVarOrig, obj->sizes[2], obj->Aineq, obj->ldA, x,
                         obj->maxConstrWorkspace);
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

      test3_xgemv_bujmjs(obj->nVarOrig, obj->sizes[1], obj->Aeq, obj->ldA, x,
                         obj->maxConstrWorkspace);
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

      test3_xgemv_bujmjs(obj->nVar, obj->sizes[2], obj->Aineq, obj->ldA, x,
                         obj->maxConstrWorkspace);
      for (offsetEq1 = 0; offsetEq1 <= mIneq; offsetEq1++) {
        v = fmax(v, obj->maxConstrWorkspace->data[offsetEq1]);
      }
    }

    if (obj->Aeq->size[0] != 0) {
      for (mIneq = 0; mIneq <= mEq; mIneq++) {
        obj->maxConstrWorkspace->data[mIneq] = obj->beq->data[mIneq];
      }

      test3_xgemv_bujmjs(obj->nVar, obj->sizes[1], obj->Aeq, obj->ldA, x,
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
static void test3_PresolveWorkingSet_p(s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager)
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

      test3_xgeqp3(qrmanager->QR, mTotalWorkingEq, workingset->nVar,
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
      test3_computeQ_(qrmanager, qrmanager->mrows);
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
        test3_xgeqp3(qrmanager->QR, workingset->nVar, mTotalWorkingEq,
                     qrmanager->jpvt, qrmanager->tau);
      }

      for (mWorkingFixed = 0; mWorkingFixed < nFixedConstr; mWorkingFixed++) {
        memspace->workspace_int->data[mWorkingFixed] = qrmanager->jpvt->data
          [(mTotalWorkingEq - nFixedConstr) + mWorkingFixed];
      }

      test3_countsort(memspace->workspace_int, nFixedConstr,
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
              test3_removeConstr(workingset, nVar);
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

        test3_xgeqp3(qrmanager->QR, workingset->nVar, workingset->nActiveConstr,
                     qrmanager->jpvt, qrmanager->tau);
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

      test3_countsort(memspace->workspace_int, mWorkingFixed,
                      memspace->workspace_sort, ix + 1,
                      workingset->nActiveConstr);
      for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
        test3_removeConstr(workingset, memspace->workspace_int->
                           data[nFixedConstr - 1]);
      }
    }

    okWorkingSet = test3_feasibleX0ForWorkingSet_n(memspace->workspace_double,
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

          test3_xgeqp3(qrmanager->QR, workingset->nVar,
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

        test3_countsort(memspace->workspace_int, mWorkingFixed,
                        memspace->workspace_sort, ix + 1,
                        workingset->nActiveConstr);
        for (nFixedConstr = mWorkingFixed; nFixedConstr >= 1; nFixedConstr--) {
          test3_removeConstr(workingset, memspace->workspace_int->
                             data[nFixedConstr - 1]);
        }
      }

      okWorkingSet = test3_feasibleX0ForWorkingSet_n(memspace->workspace_double,
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
        c_tol = test3_maxConstraintViolation_f(workingset, solution->xstar);
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
static void test3_feasibleratiotest_e(const emxArray_real_T_test3_T
  *solution_xstar, const emxArray_real_T_test3_T *solution_searchDir,
  emxArray_real_T_test3_T *workspace, int32_T workingset_nVar, int32_T
  workingset_ldA, const emxArray_real_T_test3_T *workingset_Aineq, const
  emxArray_real_T_test3_T *workingset_bineq, const emxArray_real_T_test3_T
  *workingset_lb, const emxArray_int32_T_test3_T *workingset_indexLB, const
  int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_test3_T *workingset_isActiveConstr, const int32_T
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
  denomTol = 2.2204460492503131E-13 * test3_xnrm2_a(workingset_nVar,
    solution_searchDir);
  if (workingset_nWConstr[2] < workingset_sizes[2]) {
    if (totalIneq >= 0) {
      memcpy(&workspace->data[0], &workingset_bineq->data[0], (uint32_T)
             (totalIneq + 1) * sizeof(real_T));
    }

    test3_xgemv_bujmjslzp(workingset_nVar, workingset_sizes[2], workingset_Aineq,
                          workingset_ldA, solution_xstar, workspace);
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
static void test3_iterate_b(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
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
  test3_computeGrad_StoreHx(objective, H, f, solution->xstar);
  solution->fstar = test3_computeFval_ReuseHx(objective,
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
            test3_xrotg(&qrmanager->QR->data[b_iy], &temp, &normDelta, &s);
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
          test3_deleteColMoveEnd(qrmanager, globalActiveConstrIdx);
          break;

         default:
          test3_factorQR(qrmanager, workingset->ATwset, nVar,
                         workingset->nActiveConstr, workingset->ldA);
          test3_computeQ_(qrmanager, qrmanager->mrows);
          break;
        }

        idxRotGCol = memcmp(&options_SolverName[0], &b_b[0], 7);
        test3_compute_deltax(H, solution, memspace, qrmanager, cholmanager,
                             objective, (idxRotGCol == 0));
        if (solution->state != -5) {
          exitg1 = 1;
        } else {
          normDelta = test3_xnrm2_a(nVar, solution->searchDir);
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
              test3_xgemv_buj(qrmanager->mrows, qrmanager->ncols, qrmanager->Q,
                              qrmanager->ldq, objective->grad,
                              memspace->workspace_double);
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
              test3_removeConstr(workingset, iyend);
              solution->lambda->data[iyend - 1] = 0.0;
            }
          } else {
            iyend = workingset->nActiveConstr;
            activeSetChangeID = 0;
            globalActiveConstrIdx = workingset->nActiveConstr;
            subProblemChanged = true;
            test3_removeConstr(workingset, workingset->nActiveConstr);
            solution->lambda->data[iyend - 1] = 0.0;
          }

          updateFval = false;
        } else {
          test3_feasibleratiotest_e(solution->xstar, solution->searchDir,
            memspace->workspace_double, workingset->nVar, workingset->ldA,
            workingset->Aineq, workingset->bineq, workingset->lb,
            workingset->indexLB, workingset->sizes, workingset->isActiveIdx,
            workingset->isActiveConstr, workingset->nWConstr,
            (objective->objtype == 5), &normDelta, &updateFval, &idxRotGCol,
            &iyend);
          if (updateFval) {
            switch (idxRotGCol) {
             case 3:
              test3_addAineqConstr(workingset, iyend);
              break;

             case 4:
              test_addBoundToActiveSetMatrix_(workingset, 4, iyend);
              break;

             default:
              test_addBoundToActiveSetMatrix_(workingset, 5, iyend);
              break;
            }

            activeSetChangeID = 1;
          } else {
            if (objective->objtype == 5) {
              if (test3_xnrm2_a(objective->nvar, solution->searchDir) > 100.0 *
                  (real_T)objective->nvar * 1.4901161193847656E-8) {
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

          test3_computeGrad_StoreHx(objective, H, f, solution->xstar);
          updateFval = true;
        }

        solution->iterations++;
        iyend = objective->nvar - 1;
        if ((solution->iterations >= runTimeOptions_MaxIterations) &&
            ((solution->state != 1) || (objective->objtype == 5))) {
          solution->state = 0;
        }

        if (solution->iterations - solution->iterations / 50 * 50 == 0) {
          solution->maxConstr = test3_maxConstraintViolation_f(workingset,
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

            nonDegenerateWset = test3_feasibleX0ForWorkingSet_n
              (memspace->workspace_double, solution->searchDir, workingset,
               qrmanager);
            if ((!nonDegenerateWset) && (solution->state != 0)) {
              solution->state = -2;
            }

            activeSetChangeID = 0;
            normDelta = test3_maxConstraintViolation_f(workingset,
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
          solution->fstar = test3_computeFval_ReuseHx(objective,
            memspace->workspace_double, f, solution->xstar);
          if ((solution->fstar < options_ObjectiveLimit) && ((solution->state !=
                0) || (objective->objtype != 5))) {
            solution->state = 2;
          }
        }
      }
    } else {
      if (!updateFval) {
        solution->fstar = test3_computeFval_ReuseHx(objective,
          memspace->workspace_double, f, solution->xstar);
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void test3_driver_hb(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, somzaGboVhDG7PNQS6E98jD_test3_T *options, int32_T
  runTimeOptions_MaxIterations)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T b_workingset;
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

    test3_PresolveWorkingSet_p(solution, memspace, workingset, qrmanager);
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
    solution->maxConstr = test3_maxConstraintViolation_f(workingset,
      solution->xstar);
    if (solution->maxConstr > 1.0E-6) {
      solution->xstar->data[workingset->nVar] = solution->maxConstr + 1.0;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(&b_workingset, workingset);
      if (workingset->probType == 3) {
        mConstr = 1;
      } else {
        mConstr = 4;
      }

      test3_setProblemType_g(&b_workingset, mConstr);
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
      solution->fstar = test3_computeFval(objective, memspace->workspace_double,
        H, f, solution->xstar);
      solution->state = 5;
      test3_iterate_b(H, f, solution, memspace, &b_workingset, qrmanager,
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
            test3_removeConstr(&b_workingset, mConstr + 1);
            exitg1 = true;
          } else {
            mConstr++;
          }
        }
      }

      mConstr = b_workingset.nActiveConstr;
      while ((mConstr > b_workingset.sizes[1]) && (mConstr > workingset->nVar))
      {
        test3_removeConstr(&b_workingset, mConstr);
        mConstr--;
      }

      solution->maxConstr = solution->xstar->data[workingset->nVar];
      test3_setProblemType_g(&b_workingset, workingset->probType);
      objective->objtype = objective->prev_objtype;
      objective->nvar = objective->prev_nvar;
      objective->hasLinear = objective->prev_hasLinear;
      options->ObjectiveLimit = (rtMinusInf);
      options->StepTolerance = 1.0E-6;
      emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
      if (solution->state == 0) {
      } else {
        solution->maxConstr = test3_maxConstraintViolation_f(&b_workingset,
          solution->xstar);
        emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
        if (solution->maxConstr > 1.0E-6) {
          mConstr = b_workingset.mConstrMax;
          for (nVar = 0; nVar < mConstr; nVar++) {
            solution->lambda->data[nVar] = 0.0;
          }

          solution->fstar = test3_computeFval(objective,
            memspace->workspace_double, H, f, solution->xstar);
          solution->state = -2;
        } else {
          if (solution->maxConstr > 0.0) {
            for (mConstr = 0; mConstr <= nVar; mConstr++) {
              solution->searchDir->data[mConstr] = solution->xstar->data[mConstr];
            }

            test3_PresolveWorkingSet_p(solution, memspace, &b_workingset,
              qrmanager);
            emxCopyStruct_s_Wd0eYcEyLXg48EJ(workingset, &b_workingset);
            maxConstr_new = test3_maxConstraintViolation_f(workingset,
              solution->xstar);
            if (maxConstr_new >= solution->maxConstr) {
              solution->maxConstr = maxConstr_new;
              for (mConstr = 0; mConstr <= nVar; mConstr++) {
                solution->xstar->data[mConstr] = solution->searchDir->
                  data[mConstr];
              }
            }
          }

          test3_iterate_b(H, f, solution, memspace, workingset, qrmanager,
                          cholmanager, objective, options->SolverName,
                          options->StepTolerance, options->ObjectiveLimit,
                          runTimeOptions_MaxIterations);
        }
      }
    } else {
      test3_iterate_b(H, f, solution, memspace, workingset, qrmanager,
                      cholmanager, objective, options->SolverName,
                      options->StepTolerance, options->ObjectiveLimit,
                      runTimeOptions_MaxIterations);
    }
  }

  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&b_workingset);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void test3_relaxed_i(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T b_WorkingSet;
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T c_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_test3_T qpoptions_0;
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
  test3_setProblemType_g(&b_WorkingSet, 2);
  idx_max = b_WorkingSet.sizes[2] - 1;
  b_mEq = b_WorkingSet.sizes[1] - 1;
  ix = (b_WorkingSet.sizes[3] - (b_WorkingSet.sizes[1] << 1)) -
    b_WorkingSet.sizes[2];
  for (b_kend = 0; b_kend <= idx_max; b_kend++) {
    memspace->workspace_double->data[b_kend] = b_WorkingSet.bineq->data[b_kend];
  }

  test3_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[2],
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

  test3_xgemv_bujmjslzp(WorkingSet->nVar, b_WorkingSet.sizes[1],
                        b_WorkingSet.Aeq, b_WorkingSet.ldA, TrialState->xstar,
                        memspace->workspace_double);
  for (b_kend = 0; b_kend <= b_mEq; b_kend++) {
    idx_positive = (idx_max + b_kend) + 2;
    idx_negative = ((idx_max + b_mEq) + b_kend) + 3;
    if (memspace->workspace_double->data[b_kend] <= 0.0) {
      TrialState->xstar->data[nVarOrig + idx_positive] = 0.0;
      TrialState->xstar->data[nVarOrig + idx_negative] =
        -memspace->workspace_double->data[b_kend];
      test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      if (memspace->workspace_double->data[b_kend] >= -1.0E-6) {
        test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      }
    } else {
      TrialState->xstar->data[nVarOrig + idx_positive] =
        memspace->workspace_double->data[b_kend];
      TrialState->xstar->data[nVarOrig + idx_negative] = 0.0;
      test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_negative);
      if (memspace->workspace_double->data[b_kend] <= 1.0E-6) {
        test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4, ix + idx_positive);
      }
    }
  }

  nVarOrig = qpoptions->MaxIterations;
  qpoptions->MaxIterations = (qpoptions->MaxIterations + b_WorkingSet.nVar) -
    WorkingSet->nVar;
  qpoptions_0 = *qpoptions;
  test3_driver_hb(Hessian, grad, TrialState, memspace, &b_WorkingSet, QRManager,
                  CholManager, QPObjective, &qpoptions_0,
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
      test3_removeConstr(&c_WorkingSet, mIneq);
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
  test3_setProblemType_g(WorkingSet, 3);
  test3_sortLambdaQP_e(TrialState->lambda, WorkingSet->nActiveConstr,
                       WorkingSet->sizes, WorkingSet->isActiveIdx,
                       WorkingSet->Wid, WorkingSet->Wlocalidx,
                       memspace->workspace_double);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static boolean_T test3_step_p(int32_T *STEP_TYPE, emxArray_real_T_test3_T
  *Hessian, s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions)
{
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T b_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_test3_T qpoptions_0;
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
      test3_driver_hb(Hessian, TrialState->grad, TrialState, memspace,
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

      test3_sortLambdaQP_e(TrialState->lambda, WorkingSet->nActiveConstr,
                           WorkingSet->sizes, WorkingSet->isActiveIdx,
                           WorkingSet->Wid, WorkingSet->Wlocalidx,
                           memspace->workspace_double);
      nonlinEqRemoved = (WorkingSet->mEqRemoved > 0);
      if (WorkingSet->indexEqRemoved->size[0] > 0) {
        while ((WorkingSet->mEqRemoved > 0) && (WorkingSet->indexEqRemoved->
                data[WorkingSet->mEqRemoved - 1] >= TrialState->iNonEq0)) {
          test3_addAeqConstr(WorkingSet, WorkingSet->indexEqRemoved->
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
      test3_relaxed_i(Hessian, TrialState->grad, TrialState, MeritFunction,
                      memspace, WorkingSet, QRManager, CholManager, QPObjective,
                      qpoptions);
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

        test3_xgemv_bujmjslzp1(WorkingSet->nVar, WorkingSet->sizes[1],
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

        test3_xgemv_bujmjslzp1(b_WorkingSet.nVar, b_WorkingSet.sizes[2],
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
      test3_driver_hb(Hessian, TrialState->grad, TrialState, memspace,
                      &b_WorkingSet, QRManager, CholManager, QPObjective,
                      &qpoptions_0, qpoptions->MaxIterations);
      if (b_WorkingSet.indexEqRemoved->size[0] > 0) {
        exitg2 = false;
        while ((!exitg2) && (b_WorkingSet.mEqRemoved > 0)) {
          b_mIneq = b_WorkingSet.indexEqRemoved->data[b_WorkingSet.mEqRemoved -
            1];
          if (b_mIneq >= TrialState->iNonEq0) {
            test3_addAeqConstr(&b_WorkingSet, b_mIneq);
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

      stepSuccess = (test3_xnrm2_a(WorkingSet->nVar, TrialState->socDirection) <=
                     2.0 * test3_xnrm2_a(WorkingSet->nVar, TrialState->xstar));
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
            test3_addAineqConstr(&b_WorkingSet, TrialState->workingset_old->
                                 data[b_nVar]);
          }

          for (iH0 = 0; iH0 < kend; iH0++) {
            test_addBoundToActiveSetMatrix_(&b_WorkingSet, 4,
              TrialState->workingset_old->data[iH0 + b_mIneq]);
          }

          for (kend = 0; kend < idxStartIneq; kend++) {
            test_addBoundToActiveSetMatrix_(&b_WorkingSet, 5,
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
        test3_sortLambdaQP_e(TrialState->lambda, b_WorkingSet.nActiveConstr,
                             b_WorkingSet.sizes, b_WorkingSet.isActiveIdx,
                             b_WorkingSet.Wid, b_WorkingSet.Wlocalidx,
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
static void test3_evalObjAndConstr_f(int32_T obj_next_next_next_next_b_value,
  int32_T obj_next_next_next_next_next_b_, const real_T
  obj_next_next_next_next_next_ne[4], real_T obj_next_next_next_next_next__0,
  const s_lZflMU9sVqxC63IejQkKIC_test_T obj_next_next_next_next_next__1, const
  emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *Cineq_workspace, int32_T
  ineq0, emxArray_real_T_test3_T *Ceq_workspace, int32_T eq0, real_T *fval,
  int32_T *status)
{
  boolean_T tmp;
  *fval = test3_eML_blk_kernel_anonFcn1_e(obj_next_next_next_next_next__1.x0,
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
    *status = test3_computeConstraints__c(obj_next_next_next_next_b_value,
      obj_next_next_next_next_next_b_, obj_next_next_next_next_next_ne,
      obj_next_next_next_next_next__0, x, Cineq_workspace, ineq0, Ceq_workspace,
      eq0);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void test3_driver_h(emxArray_real_T_test3_T *Hessian,
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const coder_internal_stickyStruct_c_T *FcnEvaluator,
  s_9imJcZ2iwk426vK9Q2bBEG_test_T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_Wd0eYcEyLXg48EJ7pCjsH_test3_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, const emxArray_real_T_test3_T *fscales_cineq_constraint, int32_T
  runTimeOptions_MaxFunctionEvalu)
{
  s7RdrPWkr8UPAUyTdDJkLaG_test3_T Flags;
  somzaGboVhDG7PNQS6E98jD_test3_T expl_temp;
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

  somzaGboVhDG7PNQS6E98jD_test3_T expl_temp_0;
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
  test3_test_exit_ks(MeritFunction, WorkingSet, TrialState,
                     runTimeOptions_MaxFunctionEvalu, &Flags.gradOK,
                     &Flags.fevalOK, &Flags.done, &Flags.stepAccepted,
                     &Flags.failedLineSearch, &Flags.stepType);
  test3_saveJacobian(TrialState, WorkingSet->nVar, WorkingSet->sizes[2],
                     WorkingSet->Aineq, TrialState->iNonIneq0, WorkingSet->
                     sizes[1], WorkingSet->Aeq, TrialState->iNonEq0,
                     WorkingSet->ldA);
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
          test_updateWorkingSetForNewQP_b(WorkingSet, mIneq,
            TrialState->mNonlinIneq, TrialState->cIneq, mEq,
            TrialState->mNonlinEq, TrialState->cEq);
        }

        expl_temp_0 = expl_temp;
        Flags.stepAccepted = test3_step_p(&Flags.stepType, Hessian, TrialState,
          MeritFunction, memspace, WorkingSet, QRManager, CholManager,
          QPObjective, &expl_temp_0);
        if (Flags.stepAccepted) {
          for (k = 0; k < nVar_tmp_tmp; k++) {
            TrialState->xstarsqp->data[k] += TrialState->delta_x->data[k];
          }

          test3_evalObjAndConstr_f(FcnEvaluator->next.next.next.next.b_value,
            FcnEvaluator->next.next.next.next.next.b_value,
            FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
            FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
            FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
            TrialState->xstarsqp, TrialState->cIneq, TrialState->iNonIneq0,
            TrialState->cEq, TrialState->iNonEq0, &TrialState->sqpFval, &k);
          Flags.fevalOK = (k == 1);
          TrialState->FunctionEvaluations++;
          if (mLinIneq > 0) {
            test3_xgemv_bujmjs(nVar_tmp_tmp, mLinIneq, WorkingSet->Aineq,
                               WorkingSet->ldA, TrialState->xstarsqp,
                               TrialState->cIneq);
          }

          if (mLinEq > 0) {
            test3_xgemv_bujmjs(nVar_tmp_tmp, mLinEq, WorkingSet->Aeq,
                               WorkingSet->ldA, TrialState->xstarsqp,
                               TrialState->cEq);
          }

          MeritFunction->phiFullStep = test3_computeMeritFcn
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

                  test3_evalObjAndConstr_f
                    (FcnEvaluator->next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.b_value,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.x0,
                     FcnEvaluator->next.next.next.next.next.next.next.b_value.workspace.N,
                     FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
                     TrialState->xstarsqp, TrialState->cIneq,
                     TrialState->iNonIneq0, TrialState->cEq, TrialState->iNonEq0,
                     &TrialState->sqpFval, &k);
                  if (b_mLinIneq > 0) {
                    test3_xgemv_bujmjs(b_nVar + 1, b_mLinIneq, WorkingSet->Aineq,
                                       WorkingSet->ldA, TrialState->xstarsqp,
                                       TrialState->cIneq);
                  }

                  if (d_ix > 0) {
                    test3_xgemv_bujmjs(b_nVar + 1, d_ix, WorkingSet->Aeq,
                                       WorkingSet->ldA, TrialState->xstarsqp,
                                       TrialState->cEq);
                  }

                  TrialState->FunctionEvaluations++;
                  b = (k == 1);
                  phi_alpha = test3_computeMeritFcn(MeritFunction->penaltyParam,
                    TrialState->sqpFval, TrialState->cIneq, TrialState->mIneq,
                    TrialState->cEq, TrialState->mEq, b);
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

      Flags.gradOK = test_computeFiniteDifferences_k(FiniteDifferences,
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

    test3_test_exit_ksj(&Flags, memspace, MeritFunction,
                        fscales_cineq_constraint, WorkingSet, TrialState,
                        QRManager, runTimeOptions_MaxFunctionEvalu);
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

      test3_saveJacobian(TrialState, nVar_tmp_tmp, mIneq, WorkingSet->Aineq,
                         TrialState->iNonIneq0, mEq, WorkingSet->Aeq,
                         TrialState->iNonEq0, WorkingSet->ldA);
      test3_BFGSUpdate(nVar_tmp_tmp, Hessian, TrialState->delta_x,
                       TrialState->delta_gradLag, memspace->workspace_double);
      TrialState->sqpIterations++;
    }
  }
}

static void emxFreeStruct_s_lZflMU9sVqxC63I(s_lZflMU9sVqxC63IejQkKIC_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->zref);
  test3_emxFree_real_T(&pStruct->wref);
}

static void emxFreeStruct_anonymous_funct_k(anonymous_function_test3_k_T
  *pStruct)
{
  emxFreeStruct_s_lZflMU9sVqxC63I(&pStruct->workspace);
}

static void emxFreeStruct_s_9imJcZ2iwk426vK(s_9imJcZ2iwk426vK9Q2bBEG_test_T
  *pStruct)
{
  emxFreeStruct_anonymous_funct_k(&pStruct->objfun);
  test3_emxFree_real_T(&pStruct->cIneq_1);
  test3_emxFree_real_T(&pStruct->cEq_1);
  test3_emxFree_real_T(&pStruct->cIneq_2);
  test3_emxFree_real_T(&pStruct->cEq_2);
  test3_emxFree_boolean_T(&pStruct->hasLB);
  test3_emxFree_boolean_T(&pStruct->hasUB);
}

static void emxFreeStruct_coder_i_kyv1kfe2t(coder_internal_stickyStruct_k_T
  *pStruct)
{
  emxFreeStruct_anonymous_funct_k(&pStruct->b_value);
}

static void emxFreeStruct_coder__kyv1kfe2tm(coder_internal_stickyStruc_ky_T
  *pStruct)
{
  emxFreeStruct_coder_i_kyv1kfe2t(&pStruct->next);
}

static void emxFreeStruct_coder_kyv1kfe2tm4(coder_internal_stickyStru_kyv_T
  *pStruct)
{
  emxFreeStruct_coder__kyv1kfe2tm(&pStruct->next);
}

static void emxFreeStruct_code_kyv1kfe2tm4h(coder_internal_stickyStr_kyv1_T
  *pStruct)
{
  emxFreeStruct_coder_kyv1kfe2tm4(&pStruct->next);
}

static void emxFreeStruct_cod_kyv1kfe2tm4hq(coder_internal_stickySt_kyv1k_T
  *pStruct)
{
  emxFreeStruct_code_kyv1kfe2tm4h(&pStruct->next);
}

static void emxFreeStruct_co_kyv1kfe2tm4hq5(coder_internal_stickyS_kyv1kf_T
  *pStruct)
{
  emxFreeStruct_cod_kyv1kfe2tm4hq(&pStruct->next);
}

static void emxFreeStruct_c_kyv1kfe2tm4hq5k(coder_internal_sticky_kyv1kfe_T
  *pStruct)
{
  emxFreeStruct_co_kyv1kfe2tm4hq5(&pStruct->next);
}

static void emxFreeStruct_coder_internal__d(coder_internal_stick_kyv1kfe2_T
  *pStruct)
{
  emxFreeStruct_c_kyv1kfe2tm4hq5k(&pStruct->next);
}

static void emxFreeStruct_coder_internal__p(coder_internal_stickyStruct_c_T
  *pStruct)
{
  emxFreeStruct_coder_internal__d(&pStruct->next);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void test3_fmincon_l(const real_T fun_workspace_x0[4], const
  emxArray_real_T_test3_T *fun_workspace_zref, const emxArray_real_T_test3_T
  *fun_workspace_wref, real_T fun_workspace_N, const emxArray_real_T_test3_T *x0,
  const sU0htoGcxTaPV5C2NLIldmB_test3_T nonlcon_workspace,
  emxArray_real_T_test3_T *x)
{
  coder_internal_stickyStruct_c_T FcnEvaluator;
  emxArray_real_T_test3_T *Ceq;
  emxArray_real_T_test3_T *Cineq;
  emxArray_real_T_test3_T *Hessian;
  emxArray_real_T_test3_T *fscales_cineq_constraint;
  sG8JZ69axY52WWR6RKyApQC_test3_T MeritFunction;
  s_0Mw3d4AlMrOoSnA1Aci4tH_test_T TrialState;
  s_9imJcZ2iwk426vK9Q2bBEG_test_T FiniteDifferences;
  s_Wd0eYcEyLXg48EJ7pCjsH_test3_T WorkingSet;
  s_l1Gll5dfO9DpqQrvRqAf7E_test_T QRManager;
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T memspace;
  s_saWPFfMboRdWeRqIEJ4x8C_test_T QPObjective;
  s_vdGXtauKr5HuLAqoxBLhXH_test_T CholManager;
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
  test3_emxInit_real_T(&Cineq, 1);
  test3_emxInit_real_T(&Ceq, 1);
  test3_eML_blk_kernel_anonFcn2_m(nonlcon_workspace.x0, nonlcon_workspace.N, x0,
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

  test3_emxInit_real_T(&Hessian, 2);
  tmp_0 = Hessian->size[0] * Hessian->size[1];
  Hessian->size[0] = x0->size[0];
  Hessian->size[1] = x0->size[0];
  test3_emxEnsureCapacity_real_T(Hessian, tmp_0);
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
  test3_factoryConstruct(nVarMax, mConstrMax, Cineq->size[0], Ceq->size[0], x0,
    Cineq->size[0], Ceq->size[0], &TrialState);
  for (k = 0; k <= nVar; k++) {
    TrialState.xstarsqp->data[k] = x0->data[k];
  }

  nVar = Cineq->size[0];
  emxInitStruct_coder_i_kyv1kfe2t(&FcnEvaluator);
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
  test3_emxEnsureCapacity_real_T
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
  test3_emxEnsureCapacity_real_T
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
  test3_emxEnsureCapacity_real_T(FiniteDifferences.objfun.workspace.zref, tmp_0);
  for (k = 0; k < loop_ub; k++) {
    FiniteDifferences.objfun.workspace.zref->data[k] = fun_workspace_zref->
      data[k];
  }

  tmp_0 = FiniteDifferences.objfun.workspace.wref->size[0] *
    FiniteDifferences.objfun.workspace.wref->size[1];
  FiniteDifferences.objfun.workspace.wref->size[0] = 2;
  FiniteDifferences.objfun.workspace.wref->size[1] = fun_workspace_wref->size[1];
  test3_emxEnsureCapacity_real_T(FiniteDifferences.objfun.workspace.wref, tmp_0);
  for (k = 0; k < Hessian_0; k++) {
    FiniteDifferences.objfun.workspace.wref->data[k] = fun_workspace_wref->
      data[k];
  }

  FiniteDifferences.objfun.workspace.N = fun_workspace_N;
  FiniteDifferences.nonlin.workspace = nonlcon_workspace;
  FiniteDifferences.f_1 = 0.0;
  tmp_0 = FiniteDifferences.cIneq_1->size[0];
  FiniteDifferences.cIneq_1->size[0] = Cineq->size[0];
  test3_emxEnsureCapacity_real_T(FiniteDifferences.cIneq_1, tmp_0);
  tmp_0 = FiniteDifferences.cEq_1->size[0];
  FiniteDifferences.cEq_1->size[0] = Ceq->size[0];
  test3_emxEnsureCapacity_real_T(FiniteDifferences.cEq_1, tmp_0);
  FiniteDifferences.f_2 = 0.0;
  tmp_0 = FiniteDifferences.cIneq_2->size[0];
  FiniteDifferences.cIneq_2->size[0] = Cineq->size[0];
  test3_emxEnsureCapacity_real_T(FiniteDifferences.cIneq_2, tmp_0);
  tmp_0 = FiniteDifferences.cEq_2->size[0];
  FiniteDifferences.cEq_2->size[0] = Ceq->size[0];
  test3_emxEnsureCapacity_real_T(FiniteDifferences.cEq_2, tmp_0);
  FiniteDifferences.nVar = x0->size[0];
  FiniteDifferences.mIneq = Cineq->size[0];
  FiniteDifferences.mEq = Ceq->size[0];
  FiniteDifferences.numEvals = 0;
  FiniteDifferences.SpecifyObjectiveGradient = false;
  FiniteDifferences.SpecifyConstraintGradient = false;
  FiniteDifferences.isEmptyNonlcon = (mConstrMax_tmp_0 == 0);
  tmp_0 = FiniteDifferences.hasLB->size[0];
  FiniteDifferences.hasLB->size[0] = x0->size[0];
  tes_emxEnsureCapacity_boolean_T(FiniteDifferences.hasLB, tmp_0);
  tmp_0 = FiniteDifferences.hasUB->size[0];
  FiniteDifferences.hasUB->size[0] = x0->size[0];
  tes_emxEnsureCapacity_boolean_T(FiniteDifferences.hasUB, tmp_0);
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
  test3_emxEnsureCapacity_real_T(QRManager.QR, tmp_0);
  tmp_0 = QRManager.Q->size[0] * QRManager.Q->size[1];
  QRManager.Q->size[0] = maxDims;
  QRManager.Q->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.Q, tmp_0);
  loop_ub = maxDims * maxDims;
  for (k = 0; k < loop_ub; k++) {
    QRManager.Q->data[k] = 0.0;
  }

  tmp_0 = QRManager.jpvt->size[0];
  QRManager.jpvt->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(QRManager.jpvt, tmp_0);
  for (k = 0; k < maxDims; k++) {
    QRManager.jpvt->data[k] = 0;
  }

  QRManager.mrows = 0;
  QRManager.ncols = 0;
  tmp_0 = QRManager.tau->size[0];
  QRManager.tau->size[0] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.tau, tmp_0);
  QRManager.minRowCol = 0;
  QRManager.usedPivoting = false;
  emxInitStruct_s_vdGXtauKr5HuLAq(&CholManager);
  tmp_0 = CholManager.FMat->size[0] * CholManager.FMat->size[1];
  CholManager.FMat->size[0] = maxDims;
  CholManager.FMat->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(CholManager.FMat, tmp_0);
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
  test3_emxEnsureCapacity_real_T(QPObjective.grad, tmp_0);
  tmp_0 = QPObjective.Hx->size[0];
  QPObjective.Hx->size[0] = nVarMax - 1;
  test3_emxEnsureCapacity_real_T(QPObjective.Hx, tmp_0);
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
  test3_emxEnsureCapacity_real_T(memspace.workspace_double, tmp_0);
  if (nVarMax >= 2) {
    tmp_0 = memspace.workspace_double->size[0] * memspace.workspace_double->
      size[1];
    memspace.workspace_double->size[1] = nVarMax;
    test3_emxEnsureCapacity_real_T(memspace.workspace_double, tmp_0);
  } else {
    tmp_0 = memspace.workspace_double->size[0] * memspace.workspace_double->
      size[1];
    memspace.workspace_double->size[1] = 2;
    test3_emxEnsureCapacity_real_T(memspace.workspace_double, tmp_0);
  }

  tmp_0 = memspace.workspace_int->size[0];
  memspace.workspace_int->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(memspace.workspace_int, tmp_0);
  tmp_0 = memspace.workspace_sort->size[0];
  memspace.workspace_sort->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(memspace.workspace_sort, tmp_0);
  test3_emxInit_real_T(&fscales_cineq_constraint, 1);
  tmp_0 = fscales_cineq_constraint->size[0];
  fscales_cineq_constraint->size[0] = Cineq->size[0];
  test3_emxEnsureCapacity_real_T(fscales_cineq_constraint, tmp_0);
  loop_ub = Cineq->size[0];
  for (k = 0; k < loop_ub; k++) {
    fscales_cineq_constraint->data[k] = 1.0;
  }

  emxInitStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  test3_factoryConstruct_ir(Cineq->size[0], Ceq->size[0], x0->size[0], nVarMax,
    mConstrMax, &WorkingSet);
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
  test3_emxEnsureCapacity_real_T(Cineq, tmp_0);
  loop_ub = TrialState.cIneq->size[0];
  for (k = 0; k < loop_ub; k++) {
    Cineq->data[k] = TrialState.cIneq->data[k];
  }

  fval = test3_eML_blk_kernel_anonFcn1_e(fun_workspace_x0, fun_workspace_zref,
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
    test3_computeConstraints__c(Ceq->size[0], nVar, nonlcon_workspace.x0,
      nonlcon_workspace.N, TrialState.xstarsqp, Cineq, TrialState.iNonIneq0,
      TrialState.cEq, TrialState.iNonEq0);
  }

  test_computeFiniteDifferences_k(&FiniteDifferences, fval, Cineq,
    TrialState.iNonIneq0, TrialState.cEq, TrialState.iNonEq0,
    TrialState.xstarsqp, TrialState.grad, WorkingSet.Aineq, TrialState.iNonIneq0,
    WorkingSet.ldA, WorkingSet.Aeq, TrialState.iNonEq0, WorkingSet.ldA);
  TrialState.FunctionEvaluations = FiniteDifferences.numEvals + 1;
  tmp_0 = TrialState.cIneq->size[0];
  TrialState.cIneq->size[0] = Cineq->size[0];
  test3_emxEnsureCapacity_real_T(TrialState.cIneq, tmp_0);
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

  test3_setProblemType_g(&WorkingSet, 3);
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

  test3_emxFree_real_T(&Ceq);
  MeritFunction.initConstrViolationEq = fval;
  fval = 0.0;
  for (iw0 = 0; iw0 <= mNonlinIneq; iw0++) {
    WorkingSet_0 = Cineq->data[iw0];
    if (WorkingSet_0 > 0.0) {
      fval += WorkingSet_0;
    }
  }

  test3_emxFree_real_T(&Cineq);
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
  test3_driver_h(Hessian, &TrialState, &MeritFunction, &FcnEvaluator,
                 &FiniteDifferences, &memspace, &WorkingSet, &QRManager,
                 &CholManager, &QPObjective, fscales_cineq_constraint, 100 *
                 x0->size[0]);
  test3_emxFree_real_T(&Hessian);
  emxFreeStruct_s_Wd0eYcEyLXg48EJ(&WorkingSet);
  test3_emxFree_real_T(&fscales_cineq_constraint);
  emxFreeStruct_s_pIaUYPkQBTqVmAK(&memspace);
  emxFreeStruct_s_saWPFfMboRdWeRq(&QPObjective);
  emxFreeStruct_s_vdGXtauKr5HuLAq(&CholManager);
  emxFreeStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  emxFreeStruct_s_9imJcZ2iwk426vK(&FiniteDifferences);
  emxFreeStruct_coder_internal__p(&FcnEvaluator);
  tmp_0 = x->size[0];
  x->size[0] = TrialState.xstarsqp->size[0];
  test3_emxEnsureCapacity_real_T(x, tmp_0);
  loop_ub = TrialState.xstarsqp->size[0];
  for (k = 0; k < loop_ub; k++) {
    x->data[k] = TrialState.xstarsqp->data[k];
  }

  emxFreeStruct_s_0Mw3d4AlMrOoSnA(&TrialState);
}

/* Model output function */
void test3_output(void)
{
  /* local block i/o variables */
  real_T rtb_FromWorkspace[8];
  emxArray_real_T_test3_T *Vr;
  emxArray_real_T_test3_T *horizon_idx;
  emxArray_real_T_test3_T *lb;
  emxArray_real_T_test3_T *tmp;
  emxArray_real_T_test3_T *tmp_0;
  emxArray_real_T_test3_T *u_opt;
  emxArray_real_T_test3_T *ub;
  emxArray_real_T_test3_T *wref_0;
  s6lIrH89xwD47fl4e1dZNiE_test3_T expl_temp;
  sU0htoGcxTaPV5C2NLIldmB_test3_T expl_temp_0;
  real_T wref[134];
  real_T tmp_data[4];
  real_T Vr_data_0[2];
  real_T rtb_TmpSignalConversionAtHILWri[2];
  real_T Vr_data;
  real_T a_idx_0;
  real_T apnd;
  real_T c_data;
  real_T cdiff;
  real_T ndbl;
  real_T rtb_Clock;
  real_T x_idx_1;
  real_T x_idx_2;
  int32_T c_k;
  int32_T ibcol;
  int32_T nm1d2;
  int32_T ntilerows;
  boolean_T didZcEventOccur;
  static const real_T d[134] = { 0.70710678118654757, 0.0, 0.70710678118654757,
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

  int32_T Vr_data_tmp;
  int32_T tmp_1;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* set solver stop time */
    if (!(test3_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&test3_M->solverInfo, ((test3_M->Timing.clockTickH0
        + 1) * test3_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&test3_M->solverInfo, ((test3_M->Timing.clockTick0 +
        1) * test3_M->Timing.stepSize0 + test3_M->Timing.clockTickH0 *
        test3_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(test3_M)) {
    test3_M->Timing.t[0] = rtsiGetT(&test3_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(test3_M)) {
  }

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Integrator: '<S11>/Integrator2'
   */
  test3_B.Product1 = test3_P.Constant2_Value * test3_X.Integrator2_CSTATE;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (hil_read_block): '<S8>/HIL Read' */

    /* S-Function Block: test3/basicQCarIO/HIL Read (hil_read_block) */
    {
      t_error result = hil_read(test3_DW.HILInitialize_Card,
        &test3_P.HILRead_analog_channels, 1U,
        &test3_P.HILRead_encoder_channels, 1U,
        NULL, 0U,
        test3_P.HILRead_other_channels, 4U,
        &test3_B.analogpower,
        &test3_DW.HILRead_EncoderBuffer,
        NULL,
        &test3_B.HILRead_o3[0]
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
      } else {
        test3_B.motorencoder = test3_DW.HILRead_EncoderBuffer;
      }
    }
  }

  /* Integrator: '<S15>/Integrator1' */
  if (test3_DW.Integrator1_IWORK != 0) {
    test3_X.Integrator1_CSTATE = test3_B.analogpower;
  }

  /* Integrator: '<S15>/Integrator1' */
  test3_B.Integrator1 = test3_X.Integrator1_CSTATE;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<S8>/Unwrap 2^2' */
    /* S-Function Block: test3/basicQCarIO/Unwrap 2^2 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = test3_P.Unwrap22_Modulus / 2.0;
      real_T du, dy;
      if (test3_DW.Unwrap22_FirstSample) {
        test3_DW.Unwrap22_FirstSample = false;
        test3_DW.Unwrap22_PreviousInput = test3_B.HILRead_o3[3];
      }

      du = (real_T) test3_B.HILRead_o3[3] - test3_DW.Unwrap22_PreviousInput;
      if (du > half_range) {
        test3_DW.Unwrap22_Revolutions = test3_DW.Unwrap22_Revolutions - 1;
        dy = du - test3_P.Unwrap22_Modulus;
      } else if (du < -half_range) {
        test3_DW.Unwrap22_Revolutions = test3_DW.Unwrap22_Revolutions + 1;
        dy = du + test3_P.Unwrap22_Modulus;
      } else {
        dy = du;
      }

      test3_B.Unwrap22 = test3_B.HILRead_o3[3] + test3_DW.Unwrap22_Revolutions *
        test3_P.Unwrap22_Modulus;
      test3_DW.Unwrap22_PreviousInput = test3_B.HILRead_o3[3];
    }
  }

  /* Integrator: '<S16>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_i != 0) {
    test3_X.Integrator1_CSTATE_m = test3_B.Unwrap22;
  }

  /* Integrator: '<S16>/Integrator1' */
  test3_B.Integrator1_g = test3_X.Integrator1_CSTATE_m;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S8>/Constant8'
   *  Integrator: '<S14>/Integrator2'
   */
  test3_B.Product1_p = test3_P.Constant8_Value * test3_X.Integrator2_CSTATE_f;

  /* Integrator: '<S8>/Integrator' */
  test3_B.Integrator = test3_X.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<S8>/Unwrap 2^24' */
    /* S-Function Block: test3/basicQCarIO/Unwrap 2^24 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = test3_P.Unwrap224_Modulus / 2.0;
      real_T du, dy;
      if (test3_DW.Unwrap224_FirstSample) {
        test3_DW.Unwrap224_FirstSample = false;
        test3_DW.Unwrap224_PreviousInput = test3_B.HILRead_o3[0];
      }

      du = (real_T) test3_B.HILRead_o3[0] - test3_DW.Unwrap224_PreviousInput;
      if (du > half_range) {
        test3_DW.Unwrap224_Revolutions = test3_DW.Unwrap224_Revolutions - 1;
        dy = du - test3_P.Unwrap224_Modulus;
      } else if (du < -half_range) {
        test3_DW.Unwrap224_Revolutions = test3_DW.Unwrap224_Revolutions + 1;
        dy = du + test3_P.Unwrap224_Modulus;
      } else {
        dy = du;
      }

      test3_B.Unwrap224 = test3_B.HILRead_o3[0] + test3_DW.Unwrap224_Revolutions
        * test3_P.Unwrap224_Modulus;
      test3_DW.Unwrap224_PreviousInput = test3_B.HILRead_o3[0];
    }
  }

  /* Integrator: '<S11>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_g != 0) {
    test3_X.Integrator1_CSTATE_p = test3_B.Unwrap224;
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
  test3_B.Product = ((test3_B.Unwrap224 - test3_X.Integrator1_CSTATE_p) -
                     test3_X.Integrator2_CSTATE * test3_P.Constant_Value_h *
                     test3_P.Constant1_Value) * test3_P.Constant2_Value;

  /* Integrator: '<S12>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_d != 0) {
    test3_X.Integrator1_CSTATE_h = test3_B.HILRead_o3[1];
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
  test3_B.Product_d = ((test3_B.HILRead_o3[1] - test3_X.Integrator1_CSTATE_h) -
                       test3_X.Integrator2_CSTATE_i * test3_P.Constant_Value_l *
                       test3_P.Constant3_Value) * test3_P.Constant4_Value;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S8>/Constant4'
   *  Integrator: '<S12>/Integrator2'
   */
  test3_B.Product1_i = test3_P.Constant4_Value * test3_X.Integrator2_CSTATE_i;

  /* Integrator: '<S13>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_gg != 0) {
    test3_X.Integrator1_CSTATE_b = test3_B.HILRead_o3[2];
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
  test3_B.Product_m = ((test3_B.HILRead_o3[2] - test3_X.Integrator1_CSTATE_b) -
                       test3_X.Integrator2_CSTATE_c * test3_P.Constant_Value_i *
                       test3_P.Constant5_Value) * test3_P.Constant6_Value;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S8>/Constant6'
   *  Integrator: '<S13>/Integrator2'
   */
  test3_B.Product1_n = test3_P.Constant6_Value * test3_X.Integrator2_CSTATE_c;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<S8>/Unwrap 2^1' */
    /* S-Function Block: test3/basicQCarIO/Unwrap 2^1 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = test3_P.Unwrap21_Modulus / 2.0;
      real_T du, dy;
      if (test3_DW.Unwrap21_FirstSample) {
        test3_DW.Unwrap21_FirstSample = false;
        test3_DW.Unwrap21_PreviousInput = test3_B.motorencoder;
      }

      du = (real_T) test3_B.motorencoder - test3_DW.Unwrap21_PreviousInput;
      if (du > half_range) {
        test3_DW.Unwrap21_Revolutions = test3_DW.Unwrap21_Revolutions - 1;
        dy = du - test3_P.Unwrap21_Modulus;
      } else if (du < -half_range) {
        test3_DW.Unwrap21_Revolutions = test3_DW.Unwrap21_Revolutions + 1;
        dy = du + test3_P.Unwrap21_Modulus;
      } else {
        dy = du;
      }

      test3_B.Unwrap21 = test3_B.motorencoder + test3_DW.Unwrap21_Revolutions *
        test3_P.Unwrap21_Modulus;
      test3_DW.Unwrap21_PreviousInput = test3_B.motorencoder;
    }
  }

  /* Integrator: '<S14>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_l != 0) {
    test3_X.Integrator1_CSTATE_n = test3_B.Unwrap21;
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
  test3_B.Product_b = ((test3_B.Unwrap21 - test3_X.Integrator1_CSTATE_n) -
                       test3_X.Integrator2_CSTATE_f * test3_P.Constant_Value_e *
                       test3_P.Constant7_Value) * test3_P.Constant8_Value;

  /* Product: '<S15>/Product' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S8>/Constant10'
   *  Constant: '<S8>/Constant9'
   *  Integrator: '<S15>/Integrator2'
   *  Product: '<S15>/Product2'
   *  Sum: '<S15>/Sum'
   *  Sum: '<S15>/Sum1'
   */
  test3_B.Product_e = ((test3_B.analogpower - test3_B.Integrator1) -
                       test3_X.Integrator2_CSTATE_m * test3_P.Constant_Value_j *
                       test3_P.Constant9_Value_f) * test3_P.Constant10_Value_f;

  /* Product: '<S15>/Product1' incorporates:
   *  Constant: '<S8>/Constant10'
   *  Integrator: '<S15>/Integrator2'
   */
  test3_B.Product1_b = test3_P.Constant10_Value_f * test3_X.Integrator2_CSTATE_m;

  /* Product: '<S16>/Product' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S8>/Constant11'
   *  Constant: '<S8>/Constant12'
   *  Integrator: '<S16>/Integrator2'
   *  Product: '<S16>/Product2'
   *  Sum: '<S16>/Sum'
   *  Sum: '<S16>/Sum1'
   */
  test3_B.Product_p = ((test3_B.Unwrap22 - test3_B.Integrator1_g) -
                       test3_X.Integrator2_CSTATE_b * test3_P.Constant_Value_n *
                       test3_P.Constant11_Value) * test3_P.Constant12_Value;

  /* Product: '<S16>/Product1' incorporates:
   *  Constant: '<S8>/Constant12'
   *  Integrator: '<S16>/Integrator2'
   */
  test3_B.Product1_g = test3_P.Constant12_Value * test3_X.Integrator2_CSTATE_b;

  /* Gain: '<S17>/Gain3' incorporates:
   *  Gain: '<S17>/Gain1'
   *  Gain: '<S17>/Gain2'
   *  Gain: '<S17>/Gain4'
   */
  test3_B.Gain3 = test3_P.Gain1_Gain * test3_B.Product1_p * test3_P.Gain4_Gain *
    test3_P.Gain2_Gain * test3_P.Gain3_Gain;

  /* FromWorkspace: '<Root>/From Workspace' */
  {
    real_T *pDataValues = (real_T *) test3_DW.FromWorkspace_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) test3_DW.FromWorkspace_PWORK.TimePtr;
    int_T currTimeIndex = test3_DW.FromWorkspace_IWORK.PrevIndex;
    real_T t = test3_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[1999]) {
      currTimeIndex = 1998;
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

    test3_DW.FromWorkspace_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 8; ++elIdx) {
              (&rtb_FromWorkspace[0])[elIdx] = pDataValues[currTimeIndex];
              pDataValues += 2000;
            }
          }
        } else {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 8; ++elIdx) {
              (&rtb_FromWorkspace[0])[elIdx] = pDataValues[currTimeIndex + 1];
              pDataValues += 2000;
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
          for (elIdx = 0; elIdx < 8; ++elIdx) {
            d1 = pDataValues[TimeIndex];
            d2 = pDataValues[TimeIndex + 1];
            (&rtb_FromWorkspace[0])[elIdx] = (real_T) rtInterpolate(d1, d2, f1,
              f2);
            pDataValues += 2000;
          }
        }
      }
    }
  }

  /* Integrator: '<S4>/Integrator5' */
  test3_B.Integrator5 = test3_X.Integrator5_CSTATE;

  /* Integrator: '<S5>/Integrator6' */
  test3_B.Integrator6 = test3_X.Integrator6_CSTATE;

  /* Clock: '<Root>/Clock' */
  rtb_Clock = test3_M->Timing.t[0];

  /* SignalConversion generated from: '<S2>/ SFunction ' incorporates:
   *  Integrator: '<S1>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   *  SignalConversion generated from: '<S3>/ SFunction '
   */
  expl_temp.x0[0] = test3_B.Integrator5;
  expl_temp.x0[1] = test3_B.Integrator6;
  expl_temp.x0[2] = test3_B.Integrator;
  expl_temp.x0[3] = test3_X.Integrator3_CSTATE;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  test3_DW.sfEvent_g = test3_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function': '<S2>:1' */
  /* '<S2>:1:100' */
  /* '<S2>:1:101' */
  /* '<S2>:1:57' */
  /* '<S2>:1:58' */
  /* '<S2>:1:59' */
  /* '<S2>:1:60' */
  /* '<S2>:1:61' */
  /* '<S2>:1:62' */
  /* '<S2>:1:63' */
  /* '<S2>:1:64' */
  /* '<S2>:1:67' */
  Vr_data = rtb_FromWorkspace[2] * rtb_FromWorkspace[2] + rtb_FromWorkspace[3] *
    rtb_FromWorkspace[3];
  Vr_data = sqrt(Vr_data);
  c_data = rtb_FromWorkspace[2] * rtb_FromWorkspace[5];
  ndbl = rtb_FromWorkspace[3] * rtb_FromWorkspace[4];

  /* '<S2>:1:68' */
  /* '<S2>:1:70' */
  /* '<S2>:1:73' */
  /* '<S2>:1:74' */
  c_data -= ndbl;

  /* '<S2>:1:76' */
  /* '<S2>:1:78' */
  /* '<S2>:1:79' */
  /* '<S2>:1:96' */
  didZcEventOccur = rtIsNaN(rtb_Clock);
  test3_emxInit_real_T(&horizon_idx, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  if (didZcEventOccur) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if ((rtb_Clock + 12.0) - 1.0 < rtb_Clock) {
    horizon_idx->size[1] = 0;
  } else if ((rtIsInf(rtb_Clock) || rtIsInf((rtb_Clock + 12.0) - 1.0)) &&
             ((rtb_Clock + 12.0) - 1.0 == rtb_Clock)) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (floor(rtb_Clock) == rtb_Clock) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    ntilerows = (int32_T)(((rtb_Clock + 12.0) - 1.0) - rtb_Clock);
    horizon_idx->size[1] = ntilerows + 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
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
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    if (ntilerows + 1 > 0) {
      horizon_idx->data[0] = rtb_Clock;
      if (ntilerows + 1 > 1) {
        horizon_idx->data[ntilerows] = apnd;
        nm1d2 = ntilerows / 2;
        for (c_k = 0; c_k <= nm1d2 - 2; c_k++) {
          horizon_idx->data[c_k + 1] = ((real_T)c_k + 1.0) + rtb_Clock;
          horizon_idx->data[(ntilerows - c_k) - 1] = apnd - ((real_T)c_k + 1.0);
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
  test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
  ntilerows = horizon_idx->size[1] - 1;
  for (nm1d2 = 0; nm1d2 <= ntilerows; nm1d2++) {
    ndbl = horizon_idx->data[nm1d2];
    if (rtIsNaN(ndbl) || rtIsInf(ndbl)) {
      apnd = (rtNaN);
    } else if (ndbl == 0.0) {
      apnd = 0.0;
    } else {
      apnd = fmod(ndbl, 1.0);
      if (apnd == 0.0) {
        apnd = 0.0;
      } else if (ndbl < 0.0) {
        apnd++;
      }
    }

    horizon_idx->data[nm1d2] = apnd + 1.0;
  }

  /* '<S2>:1:97' */
  /* '<S2>:1:100' */
  /* '<S2>:1:101' */
  /* '<S2>:1:107' */
  /* '<S2>:1:110' */
  test3_emxInit_real_T(&lb, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  c_k = horizon_idx->size[1] << 1;
  tmp_1 = lb->size[0];
  lb->size[0] = c_k;
  test3_emxEnsureCapacity_real_T(lb, tmp_1);
  ntilerows = horizon_idx->size[1];
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = nm1d2 << 1;
    lb->data[ibcol] = -0.4;
    lb->data[ibcol + 1] = -0.2;
  }

  /* '<S2>:1:111' */
  test3_emxInit_real_T(&ub, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = ub->size[0];
  ub->size[0] = c_k;
  test3_emxEnsureCapacity_real_T(ub, tmp_1);
  ntilerows = horizon_idx->size[1];

  /* '<S2>:1:120' */
  /* '<S2>:1:121' */
  /* '<S2>:1:124' */
  expl_temp.N = horizon_idx->size[1];
  tmp_data[0] = rtb_FromWorkspace[0];
  tmp_data[1] = rtb_FromWorkspace[1];
  tmp_data[2] = rt_atan2d_snf(rtb_FromWorkspace[3] / Vr_data, rtb_FromWorkspace
    [2] / Vr_data);
  tmp_data[3] = atan(c_data * 0.256 / rt_powd_snf(Vr_data, 3.0));
  Vr_data_0[0] = Vr_data;
  Vr_data_0[1] = ((rtb_FromWorkspace[2] * rtb_FromWorkspace[7] -
                   rtb_FromWorkspace[3] * rtb_FromWorkspace[6]) * Vr_data *
                  Vr_data - (rtb_FromWorkspace[2] * rtb_FromWorkspace[4] +
    rtb_FromWorkspace[3] * rtb_FromWorkspace[5]) * (c_data * 3.0)) * (0.256 *
    Vr_data) / (c_data * c_data * 0.065536 + rt_powd_snf(Vr_data, 6.0));
  test3_emxInit_real_T(&tmp, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = tmp->size[0] * tmp->size[1];
  tmp->size[0] = 4;
  tmp->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(tmp, tmp_1);
  test3_emxInit_real_T(&Vr, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = Vr->size[0] * Vr->size[1];
  Vr->size[0] = 2;
  Vr->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(Vr, tmp_1);
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = nm1d2 << 1;
    ub->data[ibcol] = 0.4;
    ub->data[ibcol + 1] = 0.2;
    ndbl = horizon_idx->data[nm1d2];
    tmp_1 = ((int32_T)ndbl - 1) << 2;
    tmp->data[nm1d2 << 2] = tmp_data[tmp_1];
    tmp->data[1 + (nm1d2 << 2)] = tmp_data[1 + tmp_1];
    tmp->data[2 + (nm1d2 << 2)] = tmp_data[2 + tmp_1];
    tmp->data[3 + (nm1d2 << 2)] = tmp_data[3 + tmp_1];
    tmp_1 = ((int32_T)ndbl - 1) << 1;
    Vr->data[nm1d2 << 1] = Vr_data_0[tmp_1];
    Vr->data[1 + (nm1d2 << 1)] = Vr_data_0[1 + tmp_1];
  }

  test3_emxInit_real_T(&tmp_0, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = tmp_0->size[0];
  tmp_0->size[0] = c_k;
  test3_emxEnsureCapacity_real_T(tmp_0, tmp_1);
  if (c_k - 1 >= 0) {
    memset(&tmp_0->data[0], 0, (uint32_T)c_k * sizeof(real_T));
  }

  test3_emxInit_real_T(&u_opt, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  SignalConversion generated from: '<S2>/ SFunction '
   */
  test3_fmincon(expl_temp.x0, tmp, Vr, (real_T)horizon_idx->size[1], tmp_0, lb,
                ub, expl_temp, u_opt);
  test3_emxFree_real_T(&tmp);
  test3_emxFree_real_T(&ub);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Integrator: '<S1>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  SignalConversion generated from: '<S2>/ SFunction '
   */
  /* '<S2>:1:127' */
  /* '<S2>:1:128' */
  test3_DW.sfEvent = test3_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function2': '<S3>:1' */
  /* '<S3>:1:68' */
  /* '<S3>:1:50' */
  /* '<S3>:1:71' */
  /* '<S3>:1:50' */
  /* '<S3>:1:59' */
  /* '<S3>:1:63' */
  for (ntilerows = 0; ntilerows < 67; ntilerows++) {
    /* '<S3>:1:66' */
    /* '<S3>:1:68' */
    c_k = ntilerows << 1;
    ndbl = d[c_k + 1];
    c_data = d[c_k];
    wref[c_k] = ndbl * -0.24748737341529164 + c_data * 0.70710678118654757;
    wref[c_k + 1] = ndbl * 0.24748737341529164 + c_data * 0.70710678118654757;
  }

  /* '<S3>:1:71' */
  /* '<S3>:1:86' */
  c_data = fmin(rtb_Clock + 5.0, 67.0);
  if (didZcEventOccur) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (c_data < rtb_Clock) {
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 0;
  } else if ((rtIsInf(rtb_Clock) || rtIsInf(c_data)) && (rtb_Clock == c_data)) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (floor(rtb_Clock) == rtb_Clock) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    ntilerows = (int32_T)(c_data - rtb_Clock);
    horizon_idx->size[1] = ntilerows + 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    for (nm1d2 = 0; nm1d2 <= ntilerows; nm1d2++) {
      horizon_idx->data[nm1d2] = rtb_Clock + (real_T)nm1d2;
    }
  } else {
    ndbl = floor((c_data - rtb_Clock) + 0.5);
    apnd = rtb_Clock + ndbl;
    cdiff = apnd - c_data;
    if (fabs(cdiff) < 4.4408920985006262E-16 * fmax(fabs(rtb_Clock), fabs(c_data)))
    {
      ndbl++;
      apnd = c_data;
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
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
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

  /* '<S3>:1:87' */
  /* '<S3>:1:90' */
  /* '<S3>:1:91' */
  /* '<S3>:1:97' */
  /* '<S3>:1:112' */
  /* '<S3>:1:113' */
  /* '<S3>:1:116' */
  expl_temp_0.N = horizon_idx->size[1];
  expl_temp_0.x0[0] = test3_B.Integrator5;
  expl_temp_0.x0[1] = test3_B.Integrator6;
  expl_temp_0.x0[2] = test3_B.Integrator;
  expl_temp_0.x0[3] = test3_X.Integrator3_CSTATE;
  c_k = horizon_idx->size[1] << 1;
  tmp_1 = Vr->size[0] * Vr->size[1];
  Vr->size[0] = 2;
  Vr->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(Vr, tmp_1);
  ntilerows = horizon_idx->size[1];
  test3_emxInit_real_T(&wref_0, 2);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  SignalConversion generated from: '<S3>/ SFunction '
   */
  tmp_1 = wref_0->size[0] * wref_0->size[1];
  wref_0->size[0] = 2;
  wref_0->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(wref_0, tmp_1);
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = ((int32_T)horizon_idx->data[nm1d2] - 1) << 1;
    tmp_1 = nm1d2 << 1;
    Vr->data[tmp_1] = f[ibcol];
    Vr_data_tmp = (nm1d2 << 1) + 1;
    Vr->data[Vr_data_tmp] = f[ibcol + 1];
    wref_0->data[tmp_1] = wref[ibcol];
    wref_0->data[Vr_data_tmp] = wref[ibcol + 1];
  }

  tmp_1 = tmp_0->size[0];
  tmp_0->size[0] = c_k;
  test3_emxEnsureCapacity_real_T(tmp_0, tmp_1);
  if (c_k - 1 >= 0) {
    memset(&tmp_0->data[0], 0, (uint32_T)c_k * sizeof(real_T));
  }

  test3_fmincon_l(expl_temp.x0, Vr, wref_0, (real_T)horizon_idx->size[1], tmp_0,
                  expl_temp_0, lb);
  test3_emxFree_real_T(&wref_0);
  test3_emxFree_real_T(&tmp_0);
  test3_emxFree_real_T(&Vr);
  test3_emxFree_real_T(&horizon_idx);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Integrator: '<S1>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  SignalConversion generated from: '<S2>/ SFunction '
   *  Trigonometry: '<S4>/Cos'
   *  Trigonometry: '<S5>/Sin'
   */
  /* '<S3>:1:119' */
  /* '<S3>:1:133' */
  ndbl = test3_B.Integrator + test3_X.Integrator3_CSTATE;
  rtb_Clock = sin(ndbl);

  /* '<S3>:1:133' */
  ndbl = cos(ndbl);

  /* '<S3>:1:134' */
  c_data = cos(test3_B.Integrator);
  cdiff = tan(test3_X.Integrator3_CSTATE);
  apnd = sin(test3_B.Integrator);
  Vr_data = c_data - (0.35 * rtb_Clock / 0.256 + apnd) * cdiff;
  x_idx_2 = -0.35 * rtb_Clock;
  x_idx_1 = (0.35 * ndbl / 0.256 + c_data) * cdiff + apnd;
  cdiff = 0.35 * ndbl;

  /* '<S3>:1:120' */
  if (fabs(x_idx_1) > fabs(Vr_data)) {
    rtb_Clock = Vr_data / x_idx_1;
    ndbl = 1.0 / (rtb_Clock * cdiff - x_idx_2);
    a_idx_0 = cdiff / x_idx_1 * ndbl;
    cdiff = -ndbl;
    Vr_data = -x_idx_2 / x_idx_1 * ndbl;
    ndbl *= rtb_Clock;
  } else {
    rtb_Clock = x_idx_1 / Vr_data;
    ndbl = 1.0 / (cdiff - rtb_Clock * x_idx_2);
    a_idx_0 = cdiff / Vr_data * ndbl;
    cdiff = -rtb_Clock * ndbl;
    Vr_data = -x_idx_2 / Vr_data * ndbl;
  }

  /* '<S3>:1:123' */
  /* '<S3>:1:124' */
  if (rtmIsMajorTimeStep(test3_M)) {
    /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' */
    if (test3_P.uArm0Disarm2_CurrentSetting == 1) {
      /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' incorporates:
       *  Constant: '<Root>/Constant10'
       */
      test3_B.switch_l = test3_P.Constant10_Value;
    } else {
      /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' incorporates:
       *  Constant: '<Root>/Constant9'
       */
      test3_B.switch_l = test3_P.Constant9_Value;
    }

    /* End of ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' */
  }

  /* ManualSwitch: '<Root>/Up - NL, Down - FL 2' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  if (test3_P.UpNLDownFL2_CurrentSetting == 1) {
    Vr_data = u_opt->data[0];
  } else {
    Vr_data = a_idx_0 * lb->data[0] + Vr_data * lb->data[1];
  }

  /* Saturate: '<S9>/command saturation' incorporates:
   *  ManualSwitch: '<Root>/Up - NL, Down - FL 2'
   */
  if (Vr_data > test3_P.commandsaturation_UpperSat) {
    Vr_data = test3_P.commandsaturation_UpperSat;
  } else if (Vr_data < test3_P.commandsaturation_LowerSat) {
    Vr_data = test3_P.commandsaturation_LowerSat;
  }

  /* Product: '<S9>/Multiply1' incorporates:
   *  Saturate: '<S9>/command saturation'
   */
  test3_B.desired = Vr_data * test3_B.switch_l;

  /* Product: '<S9>/Multiply' */
  test3_B.measured = test3_B.Gain3 * test3_B.switch_l;

  /* Sum: '<S9>/Sum' */
  rtb_Clock = test3_B.desired - test3_B.measured;

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   */
  test3_B.Compare = (test3_B.desired == test3_P.Constant_Value);

  /* Integrator: '<S9>/Integrator1' */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&test3_M->solverInfo)) {
    didZcEventOccur = (((test3_PrevZCX.Integrator1_Reset_ZCE == POS_ZCSIG) !=
                        (int32_T)test3_B.Compare) &&
                       (test3_PrevZCX.Integrator1_Reset_ZCE !=
                        UNINITIALIZED_ZCSIG));
    test3_PrevZCX.Integrator1_Reset_ZCE = test3_B.Compare;

    /* evaluate zero-crossings */
    if (didZcEventOccur) {
      test3_X.Integrator1_CSTATE_ng = test3_P.Integrator1_IC;
    }
  }

  if (test3_X.Integrator1_CSTATE_ng >= test3_P.Integrator1_UpperSat) {
    test3_X.Integrator1_CSTATE_ng = test3_P.Integrator1_UpperSat;
  } else if (test3_X.Integrator1_CSTATE_ng <= test3_P.Integrator1_LowerSat) {
    test3_X.Integrator1_CSTATE_ng = test3_P.Integrator1_LowerSat;
  }

  /* Sum: '<S9>/Add1' incorporates:
   *  Gain: '<S9>/Kff  (% // m//s)'
   *  Gain: '<S9>/Kp (% // m//s)'
   *  Integrator: '<S9>/Integrator1'
   *  Sum: '<S9>/Add'
   */
  Vr_data = (test3_P.Kpms_Gain * rtb_Clock + test3_X.Integrator1_CSTATE_ng) +
    test3_P.Kffms_Gain * test3_B.desired;

  /* Saturate: '<S9>/command saturation1' */
  if (Vr_data > test3_P.commandsaturation1_UpperSat) {
    Vr_data = test3_P.commandsaturation1_UpperSat;
  } else if (Vr_data < test3_P.commandsaturation1_LowerSat) {
    Vr_data = test3_P.commandsaturation1_LowerSat;
  }

  /* Gain: '<S8>/direction convention' incorporates:
   *  Product: '<S9>/Multiply2'
   *  Saturate: '<S9>/command saturation1'
   */
  Vr_data = Vr_data * test3_B.switch_l * test3_P.directionconvention_Gain;

  /* Saturate: '<S8>/command saturation' */
  if (Vr_data > test3_P.commandsaturation_UpperSat_n) {
    /* Saturate: '<S8>/command saturation' */
    test3_B.commandsaturation = test3_P.commandsaturation_UpperSat_n;
  } else if (Vr_data < test3_P.commandsaturation_LowerSat_i) {
    /* Saturate: '<S8>/command saturation' */
    test3_B.commandsaturation = test3_P.commandsaturation_LowerSat_i;
  } else {
    /* Saturate: '<S8>/command saturation' */
    test3_B.commandsaturation = Vr_data;
  }

  /* End of Saturate: '<S8>/command saturation' */

  /* Bias: '<S8>/Steering Bias' incorporates:
   *  Gain: '<S8>/Gain'
   *  Integrator: '<S1>/Integrator3'
   */
  test3_B.SteeringBias = test3_P.Gain_Gain * test3_X.Integrator3_CSTATE +
    test3_P.SteeringBias_Bias;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* SignalConversion generated from: '<S8>/HIL Write' */
    rtb_TmpSignalConversionAtHILWri[0] = test3_B.commandsaturation;
    rtb_TmpSignalConversionAtHILWri[1] = test3_B.SteeringBias;

    /* S-Function (hil_write_block): '<S8>/HIL Write' */

    /* S-Function Block: test3/basicQCarIO/HIL Write (hil_write_block) */
    {
      t_error result;
      result = hil_write(test3_DW.HILInitialize_Card,
                         NULL, 0U,
                         NULL, 0U,
                         NULL, 0U,
                         test3_P.HILWrite_other_channels, 2U,
                         NULL,
                         NULL,
                         NULL,
                         &rtb_TmpSignalConversionAtHILWri[0]
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
      }
    }
  }

  /* ManualSwitch: '<Root>/Up - NL, Down - FL' */
  if (test3_P.UpNLDownFL_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Up - NL, Down - FL' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function'
     */
    test3_B.omega = u_opt->data[1];
  } else {
    /* ManualSwitch: '<Root>/Up - NL, Down - FL' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function2'
     */
    test3_B.omega = cdiff * lb->data[0] + ndbl * lb->data[1];
  }

  /* End of ManualSwitch: '<Root>/Up - NL, Down - FL' */
  test3_emxFree_real_T(&u_opt);
  test3_emxFree_real_T(&lb);
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<S1>/Unwrap 2^1' */
    /* S-Function Block: test3/Filter/Unwrap 2^1 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = test3_P.Unwrap21_Modulus_p / 2.0;
      real_T du, dy;
      if (test3_DW.Unwrap21_FirstSample_o) {
        test3_DW.Unwrap21_FirstSample_o = false;
        test3_DW.Unwrap21_PreviousInput_d = test3_B.omega;
      }

      du = (real_T) test3_B.omega - test3_DW.Unwrap21_PreviousInput_d;
      if (du > half_range) {
        test3_DW.Unwrap21_Revolutions_o = test3_DW.Unwrap21_Revolutions_o - 1;
        dy = du - test3_P.Unwrap21_Modulus_p;
      } else if (du < -half_range) {
        test3_DW.Unwrap21_Revolutions_o = test3_DW.Unwrap21_Revolutions_o + 1;
        dy = du + test3_P.Unwrap21_Modulus_p;
      } else {
        dy = du;
      }

      test3_B.Unwrap21_o = test3_B.omega + test3_DW.Unwrap21_Revolutions_o *
        test3_P.Unwrap21_Modulus_p;
      test3_DW.Unwrap21_PreviousInput_d = test3_B.omega;
    }
  }

  /* Integrator: '<S10>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_a != 0) {
    test3_X.Integrator1_CSTATE_me = test3_B.Unwrap21_o;
  }

  /* Integrator: '<S10>/Integrator1' */
  test3_B.Integrator1_f = test3_X.Integrator1_CSTATE_me;

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Integrator: '<S10>/Integrator2'
   *  Product: '<S10>/Product2'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S10>/Sum1'
   */
  test3_B.Product_g = ((test3_B.Unwrap21_o - test3_B.Integrator1_f) -
                       test3_X.Integrator2_CSTATE_k * test3_P.Constant_Value_p *
                       test3_P.Constant7_Value_o) * test3_P.Constant8_Value_g;

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<S1>/Constant8'
   *  Integrator: '<S10>/Integrator2'
   */
  test3_B.Product1_b3 = test3_P.Constant8_Value_g * test3_X.Integrator2_CSTATE_k;

  /* Product: '<S4>/Product' */
  test3_B.Product_f = c_data * test3_B.Gain3;

  /* Product: '<S5>/Product1' */
  test3_B.Product1_ij = apnd * test3_B.Gain3;
  if (rtmIsMajorTimeStep(test3_M)) {
  }

  /* Gain: '<S9>/Ki (% // m)  ' */
  test3_B.Kim = test3_P.Kim_Gain * rtb_Clock;
}

/* Model update function */
void test3_update(void)
{
  /* Update for Integrator: '<S15>/Integrator1' */
  test3_DW.Integrator1_IWORK = 0;

  /* Update for Integrator: '<S16>/Integrator1' */
  test3_DW.Integrator1_IWORK_i = 0;

  /* Update for Integrator: '<S11>/Integrator1' */
  test3_DW.Integrator1_IWORK_g = 0;

  /* Update for Integrator: '<S12>/Integrator1' */
  test3_DW.Integrator1_IWORK_d = 0;

  /* Update for Integrator: '<S13>/Integrator1' */
  test3_DW.Integrator1_IWORK_gg = 0;

  /* Update for Integrator: '<S14>/Integrator1' */
  test3_DW.Integrator1_IWORK_l = 0;

  /* Update for Integrator: '<S10>/Integrator1' */
  test3_DW.Integrator1_IWORK_a = 0;
  if (rtmIsMajorTimeStep(test3_M)) {
    rt_ertODEUpdateContinuousStates(&test3_M->solverInfo);
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
  if (!(++test3_M->Timing.clockTick0)) {
    ++test3_M->Timing.clockTickH0;
  }

  test3_M->Timing.t[0] = rtsiGetSolverStopTime(&test3_M->solverInfo);

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
    if (!(++test3_M->Timing.clockTick1)) {
      ++test3_M->Timing.clockTickH1;
    }

    test3_M->Timing.t[1] = test3_M->Timing.clockTick1 *
      test3_M->Timing.stepSize1 + test3_M->Timing.clockTickH1 *
      test3_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void test3_derivatives(void)
{
  XDot_test3_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_test3_T *) test3_M->derivs);

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = test3_B.Product;

  /* Derivatives for Integrator: '<S15>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = test3_B.Product1_b;

  /* Derivatives for Integrator: '<S16>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_m = test3_B.Product1_g;

  /* Derivatives for Integrator: '<S14>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_f = test3_B.Product_b;

  /* Derivatives for Integrator: '<S8>/Integrator' */
  _rtXdot->Integrator_CSTATE = test3_B.Integrator1_g;

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_p = test3_B.Product1;

  /* Derivatives for Integrator: '<S12>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_h = test3_B.Product1_i;

  /* Derivatives for Integrator: '<S12>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_i = test3_B.Product_d;

  /* Derivatives for Integrator: '<S13>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_b = test3_B.Product1_n;

  /* Derivatives for Integrator: '<S13>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_c = test3_B.Product_m;

  /* Derivatives for Integrator: '<S14>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n = test3_B.Product1_p;

  /* Derivatives for Integrator: '<S15>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_m = test3_B.Product_e;

  /* Derivatives for Integrator: '<S16>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_b = test3_B.Product_p;

  /* Derivatives for Integrator: '<S4>/Integrator5' */
  _rtXdot->Integrator5_CSTATE = test3_B.Product_f;

  /* Derivatives for Integrator: '<S5>/Integrator6' */
  _rtXdot->Integrator6_CSTATE = test3_B.Product1_ij;

  /* Derivatives for Integrator: '<S1>/Integrator3' */
  _rtXdot->Integrator3_CSTATE = test3_B.Integrator1_f;

  /* Derivatives for Integrator: '<S9>/Integrator1' */
  lsat = (test3_X.Integrator1_CSTATE_ng <= test3_P.Integrator1_LowerSat);
  usat = (test3_X.Integrator1_CSTATE_ng >= test3_P.Integrator1_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (test3_B.Kim > 0.0)) || (usat &&
       (test3_B.Kim < 0.0))) {
    _rtXdot->Integrator1_CSTATE_ng = test3_B.Kim;
  } else {
    /* in saturation */
    _rtXdot->Integrator1_CSTATE_ng = 0.0;
  }

  /* End of Derivatives for Integrator: '<S9>/Integrator1' */

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_me = test3_B.Product1_b3;

  /* Derivatives for Integrator: '<S10>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_k = test3_B.Product_g;
}

/* Model initialize function */
void test3_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S8>/HIL Initialize' */

  /* S-Function Block: test3/basicQCarIO/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qcar2", "0", &test3_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test3_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(test3_DW.HILInitialize_Card,
      "gyro_fs=250;gyro_rate=500;gyro_bw=125;gyro_ord=3;accel_fs=16;accel_rate=1000;accel_bw=250;accel_ord=3;temp_bw=4000;enc0_dir=0;enc1_dir=0;enc2_dir=0;steer_bias=0.05;",
      165);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test3_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(test3_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test3_M, _rt_error_message);
      return;
    }

    if ((test3_P.HILInitialize_AIPStart && !is_switching) ||
        (test3_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &test3_DW.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMinimums[i1] = test3_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &test3_DW.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMaximums[i1] = test3_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_AIChannels, 5U,
        &test3_DW.HILInitialize_AIMinimums[0],
        &test3_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(test3_DW.HILInitialize_Card,
      test3_P.HILInitialize_DIChannels, 15U, test3_P.HILInitialize_DOChannels,
      16U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test3_M, _rt_error_message);
      return;
    }

    if ((test3_P.HILInitialize_DOStart && !is_switching) ||
        (test3_P.HILInitialize_DOEnter && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &test3_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = test3_P.HILInitialize_DOInitial;
        }
      }

      result = hil_write_digital(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_DOChannels, 16U, (t_boolean *)
        &test3_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if (test3_P.HILInitialize_DOReset) {
      {
        int_T i1;
        int32_T *dw_DOStates = &test3_DW.HILInitialize_DOStates[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOStates[i1] = test3_P.HILInitialize_DOWatchdog;
        }
      }

      result = hil_watchdog_set_digital_expiration_state
        (test3_DW.HILInitialize_Card, test3_P.HILInitialize_DOChannels, 16U, (
          const t_digital_state *) &test3_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if ((test3_P.HILInitialize_EIPStart && !is_switching) ||
        (test3_P.HILInitialize_EIPEnter && is_switching)) {
      test3_DW.HILInitialize_QuadratureModes[0] =
        test3_P.HILInitialize_EIQuadrature;
      test3_DW.HILInitialize_QuadratureModes[1] =
        test3_P.HILInitialize_EIQuadrature;
      test3_DW.HILInitialize_QuadratureModes[2] =
        test3_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_EIChannels, 3U, (t_encoder_quadrature_mode *)
        &test3_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }

      test3_DW.HILInitialize_FilterFrequency[0] =
        test3_P.HILInitialize_EIFrequency;
      test3_DW.HILInitialize_FilterFrequency[1] =
        test3_P.HILInitialize_EIFrequency;
      test3_DW.HILInitialize_FilterFrequency[2] =
        test3_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_EIChannels, 3U,
        &test3_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if ((test3_P.HILInitialize_EIStart && !is_switching) ||
        (test3_P.HILInitialize_EIEnter && is_switching)) {
      test3_DW.HILInitialize_InitialEICounts[0] =
        test3_P.HILInitialize_EIInitial;
      test3_DW.HILInitialize_InitialEICounts[1] =
        test3_P.HILInitialize_EIInitial;
      test3_DW.HILInitialize_InitialEICounts[2] =
        test3_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_EIChannels, 3U,
        &test3_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if ((test3_P.HILInitialize_POPStart && !is_switching) ||
        (test3_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;
      test3_DW.HILInitialize_POModeValues[0] = test3_P.HILInitialize_POModes;
      test3_DW.HILInitialize_POModeValues[1] = test3_P.HILInitialize_POModes;
      result = hil_set_pwm_mode(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_POChannels, 2U, (t_pwm_mode *)
        &test3_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }

      if (test3_DW.HILInitialize_POModeValues[0] == PWM_DUTY_CYCLE_MODE ||
          test3_DW.HILInitialize_POModeValues[0] == PWM_ONE_SHOT_MODE ||
          test3_DW.HILInitialize_POModeValues[0] == PWM_TIME_MODE ||
          test3_DW.HILInitialize_POModeValues[0] == PWM_RAW_MODE) {
        test3_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (test3_P.HILInitialize_POChannels[0]);
        test3_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          test3_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        test3_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (test3_P.HILInitialize_POChannels[0]);
        test3_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          test3_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (test3_DW.HILInitialize_POModeValues[1] == PWM_DUTY_CYCLE_MODE ||
          test3_DW.HILInitialize_POModeValues[1] == PWM_ONE_SHOT_MODE ||
          test3_DW.HILInitialize_POModeValues[1] == PWM_TIME_MODE ||
          test3_DW.HILInitialize_POModeValues[1] == PWM_RAW_MODE) {
        test3_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (test3_P.HILInitialize_POChannels[1]);
        test3_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          test3_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        test3_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (test3_P.HILInitialize_POChannels[1]);
        test3_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          test3_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(test3_DW.HILInitialize_Card,
          &test3_DW.HILInitialize_POSortedChans[0], num_duty_cycle_modes,
          &test3_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test3_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(test3_DW.HILInitialize_Card,
          &test3_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &test3_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test3_M, _rt_error_message);
          return;
        }
      }

      test3_DW.HILInitialize_POModeValues[0] =
        test3_P.HILInitialize_POConfiguration;
      test3_DW.HILInitialize_POModeValues[1] =
        test3_P.HILInitialize_POConfiguration;
      test3_DW.HILInitialize_POAlignValues[0] =
        test3_P.HILInitialize_POAlignment;
      test3_DW.HILInitialize_POAlignValues[1] =
        test3_P.HILInitialize_POAlignment;
      test3_DW.HILInitialize_POPolarityVals[0] =
        test3_P.HILInitialize_POPolarity;
      test3_DW.HILInitialize_POPolarityVals[1] =
        test3_P.HILInitialize_POPolarity;
      result = hil_set_pwm_configuration(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_POChannels, 2U,
        (t_pwm_configuration *) &test3_DW.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &test3_DW.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &test3_DW.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if ((test3_P.HILInitialize_POStart && !is_switching) ||
        (test3_P.HILInitialize_POEnter && is_switching)) {
      test3_DW.HILInitialize_POValues[0] = test3_P.HILInitialize_POInitial;
      test3_DW.HILInitialize_POValues[1] = test3_P.HILInitialize_POInitial;
      result = hil_write_pwm(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_POChannels, 2U, &test3_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if (test3_P.HILInitialize_POReset) {
      test3_DW.HILInitialize_POValues[0] = test3_P.HILInitialize_POWatchdog;
      test3_DW.HILInitialize_POValues[1] = test3_P.HILInitialize_POWatchdog;
      result = hil_watchdog_set_pwm_expiration_state(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_POChannels, 2U, &test3_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if ((test3_P.HILInitialize_OOStart && !is_switching) ||
        (test3_P.HILInitialize_OOEnter && is_switching)) {
      test3_DW.HILInitialize_OOValues[0] = test3_P.HILInitialize_OOInitial;
      test3_DW.HILInitialize_OOValues[1] = test3_P.HILInitialize_OOInitial;
      result = hil_write_other(test3_DW.HILInitialize_Card,
        test3_P.HILInitialize_OOChannels, 2U, &test3_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }

    if (test3_P.HILInitialize_OOReset) {
      test3_DW.HILInitialize_OOValues[0] = test3_P.HILInitialize_OOWatchdog;
      test3_DW.HILInitialize_OOValues[1] = test3_P.HILInitialize_OOWatchdog;
      result = hil_watchdog_set_other_expiration_state
        (test3_DW.HILInitialize_Card, test3_P.HILInitialize_OOChannels, 2U,
         &test3_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test3_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (inverse_modulus_block): '<S8>/Unwrap 2^2' */

  /* S-Function Block: test3/basicQCarIO/Unwrap 2^2 (inverse_modulus_block) */
  {
    test3_DW.Unwrap22_FirstSample = true;
    test3_DW.Unwrap22_Revolutions = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S8>/Unwrap 2^24' */

  /* S-Function Block: test3/basicQCarIO/Unwrap 2^24 (inverse_modulus_block) */
  {
    test3_DW.Unwrap224_FirstSample = true;
    test3_DW.Unwrap224_Revolutions = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S8>/Unwrap 2^1' */

  /* S-Function Block: test3/basicQCarIO/Unwrap 2^1 (inverse_modulus_block) */
  {
    test3_DW.Unwrap21_FirstSample = true;
    test3_DW.Unwrap21_Revolutions = 0;
  }

  /* Start for FromWorkspace: '<Root>/From Workspace' */
  {
    static real_T pTimeValues0[] = { 0.0, 0.025012505752876439,
      0.050025011505752878, 0.075037517258629324, 0.10005002301150576,
      0.1250625287643822, 0.15007503451725865, 0.17508754027013507,
      0.20010004602301151, 0.22511255177588796, 0.25012505752876441,
      0.27513756328164085, 0.3001500690345173, 0.32516257478739369,
      0.35017508054027013, 0.37518758629314658, 0.400200092046023,
      0.42521259779889947, 0.45022510355177592, 0.47523760930465236,
      0.50025011505752881, 0.52526262081040531, 0.5502751265632817,
      0.57528763231615809, 0.60030013806903459, 0.6253126438219111,
      0.65032514957478738, 0.67533765532766377, 0.70035016108054027,
      0.72536266683341677, 0.75037517258629316, 0.77538767833916955,
      0.800400184092046, 0.82541268984492255, 0.85042519559779894,
      0.87543770135067533, 0.90045020710355184, 0.92546271285642834,
      0.95047521860930473, 0.97548772436218112, 1.0005002301150576,
      1.0255127358679341, 1.0505252416208106, 1.0755377473736869,
      1.1005502531265634, 1.12556275887944, 1.1505752646323162,
      1.1755877703851927, 1.2006002761380692, 1.2256127818909457,
      1.2506252876438222, 1.2756377933966982, 1.3006502991495748,
      1.3256628049024513, 1.3506753106553275, 1.375687816408204,
      1.4007003221610805, 1.425712827913957, 1.4507253336668335,
      1.4757378394197098, 1.5007503451725863, 1.5257628509254628,
      1.5507753566783391, 1.5757878624312156, 1.6008003681840921,
      1.6258128739369686, 1.6508253796898451, 1.6758378854427214,
      1.7008503911955979, 1.7258628969484744, 1.7508754027013507,
      1.7758879084542272, 1.8009004142071037, 1.8259129199599802,
      1.8509254257128567, 1.875937931465733, 1.9009504372186095,
      1.925962942971486, 1.9509754487243622, 1.9759879544772387,
      2.0010004602301152, 2.0260129659829915, 2.0510254717358682,
      2.0760379774887445, 2.1010504832416212, 2.1260629889944975,
      2.1510754947473738, 2.1760880005002505, 2.2011005062531268,
      2.2261130120060031, 2.25112551775888, 2.2761380235117561,
      2.3011505292646324, 2.3261630350175091, 2.3511755407703854,
      2.3761880465232621, 2.4012005522761384, 2.4262130580290147,
      2.4512255637818914, 2.4762380695347677, 2.5012505752876444,
      2.5262630810405207, 2.5512755867933965, 2.5762880925462732,
      2.6013005982991495, 2.6263131040520258, 2.6513256098049025,
      2.6763381155577788, 2.7013506213106551, 2.7263631270635318,
      2.7513756328164081, 2.7763881385692848, 2.8014006443221611,
      2.8264131500750374, 2.8514256558279141, 2.8764381615807904,
      2.9014506673336671, 2.9264631730865434, 2.9514756788394196,
      2.9764881845922964, 3.0015006903451726, 3.0265131960980489,
      3.0515257018509256, 3.0765382076038019, 3.1015507133566782,
      3.1265632191095549, 3.1515757248624312, 3.1765882306153079,
      3.2016007363681842, 3.2266132421210605, 3.2516257478739372,
      3.2766382536268135, 3.30165075937969, 3.3266632651325665,
      3.3516757708854428, 3.3766882766383195, 3.4017007823911958,
      3.4267132881440721, 3.4517257938969488, 3.4767382996498251,
      3.5017508054027013, 3.5267633111555781, 3.5517758169084543,
      3.5767883226613311, 3.6018008284142073, 3.6268133341670836,
      3.6518258399199603, 3.6768383456728366, 3.7018508514257134,
      3.7268633571785896, 3.7518758629314659, 3.7768883686843426,
      3.8019008744372189, 3.8269133801900952, 3.8519258859429719,
      3.8769383916958482, 3.9019508974487245, 3.9269634032016012,
      3.9519759089544775, 3.9769884147073542, 4.0020009204602305,
      4.0270134262131068, 4.052025931965983, 4.0770384377188593,
      4.1020509434717365, 4.1270634492246128, 4.152075954977489,
      4.1770884607303653, 4.2021009664832425, 4.2271134722361188,
      4.2521259779889951, 4.2771384837418713, 4.3021509894947476,
      4.3271634952476239, 4.3521760010005011, 4.3771885067533773,
      4.4022010125062536, 4.42721351825913, 4.4522260240120062,
      4.4772385297648833, 4.50225103551776, 4.5272635412706359,
      4.5522760470235122, 4.5772885527763885, 4.6023010585292647,
      4.6273135642821419, 4.6523260700350182, 4.6773385757878945,
      4.7023510815407707, 4.727363587293647, 4.7523760930465242,
      4.7773885987994005, 4.8024011045522768, 4.827413610305153,
      4.8524261160580293, 4.8774386218109065, 4.9024511275637828,
      4.927463633316659, 4.9524761390695353, 4.9774886448224116,
      5.0025011505752888, 5.027513656328165, 5.0525261620810413,
      5.0775386678339167, 5.102551173586793, 5.1275636793396693,
      5.1525761850925464, 5.1775886908454227, 5.202601196598299,
      5.2276137023511753, 5.2526262081040516, 5.2776387138569287,
      5.302651219609805, 5.3276637253626813, 5.3526762311155576,
      5.3776887368684338, 5.40270124262131, 5.4277137483741873,
      5.4527262541270636, 5.47773875987994, 5.5027512656328161,
      5.5277637713856924, 5.55277627713857, 5.5777887828914459,
      5.6028012886443221, 5.6278137943971984, 5.6528263001500747,
      5.6778388059029519, 5.7028513116558281, 5.7278638174087044,
      5.7528763231615807, 5.777888828914457, 5.8029013346673342,
      5.82791384042021, 5.8529263461730867, 5.877938851925963,
      5.9029513576788393, 5.9279638634317156, 5.9529763691845927,
      5.977988874937469, 6.0030013806903453, 6.0280138864432216,
      6.0530263921960978, 6.078038897948975, 6.1030514037018513,
      6.1280639094547276, 6.1530764152076038, 6.17808892096048,
      6.2031014267133564, 6.2281139324662336, 6.25312643821911,
      6.2781389439719861, 6.3031514497248624, 6.3281639554777387,
      6.3531764612306159, 6.3781889669834921, 6.4032014727363684,
      6.4282139784892447, 6.453226484242121, 6.4782389899949981,
      6.5032514957478744, 6.5282640015007507, 6.553276507253627,
      6.5782890130065033, 6.60330151875938, 6.6283140245122567,
      6.653326530265133, 6.6783390360180093, 6.7033515417708855,
      6.7283640475237618, 6.753376553276639, 6.7783890590295153,
      6.8034015647823916, 6.8284140705352678, 6.8534265762881441,
      6.8784390820410213, 6.9034515877938976, 6.9284640935467738,
      6.95347659929965, 6.9784891050525264, 7.0035016108054027, 7.02851411655828,
      7.0535266223111561, 7.0785391280640324, 7.1035516338169087,
      7.128564139569785, 7.1535766453226621, 7.1785891510755384,
      7.2036016568284147, 7.228614162581291, 7.2536266683341672,
      7.2786391740870444, 7.3036516798399207, 7.328664185592797,
      7.3536766913456733, 7.3786891970985495, 7.4037017028514267,
      7.428714208604303, 7.4537267143571793, 7.4787392201100555,
      7.5037517258629318, 7.5287642316158081, 7.5537767373686853,
      7.5787892431215615, 7.6038017488744378, 7.6288142546273141,
      7.65382676038019, 7.6788392661330676, 7.7038517718859438, 7.72886427763882,
      7.7538767833916964, 7.7788892891445727, 7.803901794897449,
      7.8289143006503261, 7.8539268064032024, 7.8789393121560787,
      7.903951817908955, 7.9289643236618312, 7.9539768294147084,
      7.9789893351675847, 8.004001840920461, 8.0290143466733372,
      8.0540268524262135, 8.07903935817909, 8.1040518639319661,
      8.1290643696848424, 8.1540768754377186, 8.1790893811905949,
      8.204101886943473, 8.22911439269635, 8.2541268984492255,
      8.2791394042021018, 8.3041519099549781, 8.3291644157078544,
      8.35417692146073, 8.3791894272136069, 8.404201932966485,
      8.4292144387193613, 8.4542269444722375, 8.4792394502251138,
      8.50425195597799, 8.5292644617308664, 8.5542769674837427,
      8.5792894732366189, 8.6043019789894952, 8.6293144847423715,
      8.6543269904952478, 8.6793394962481258, 8.7043520020010021,
      8.7293645077538784, 8.7543770135067547, 8.779389519259631,
      8.8044020250125072, 8.8294145307653835, 8.85442703651826,
      8.8794395422711361, 8.9044520480240124, 8.9294645537768886,
      8.9544770595297667, 8.979489565282643, 9.00450207103552,
      9.0295145767883955, 9.0545270825412718, 9.0795395882941481,
      9.1045520940470244, 9.1295645997999, 9.1545771055527769,
      9.1795896113056532, 9.20460211705853, 9.2296146228114075,
      9.2546271285642838, 9.27963963431716, 9.3046521400700364,
      9.3296646458229127, 9.3546771515757889, 9.3796896573286652,
      9.4047021630815415, 9.4297146688344178, 9.4547271745872941,
      9.4797396803401721, 9.5047521860930484, 9.5297646918459247,
      9.554777197598801, 9.5797897033516772, 9.6048022091045535,
      9.62981471485743, 9.6548272206103061, 9.6798397263631824,
      9.7048522321160586, 9.7298647378689349, 9.754877243621813,
      9.77988974937469, 9.8049022551275655, 9.8299147608804418,
      9.8549272666333181, 9.8799397723861944, 9.90495227813907,
      9.9299647838919469, 9.9549772896448232, 9.9799897953977,
      10.005002301150578, 10.030014806903454, 10.05502731265633,
      10.080039818409206, 10.105052324162083, 10.130064829914959,
      10.155077335667833, 10.18008984142071, 10.205102347173586,
      10.230114852926462, 10.255127358679339, 10.280139864432217,
      10.305152370185093, 10.330164875937969, 10.355177381690845,
      10.380189887443722, 10.405202393196598, 10.430214898949474,
      10.455227404702351, 10.480239910455227, 10.505252416208103,
      10.530264921960979, 10.555277427713857, 10.580289933466734,
      10.60530243921961, 10.630314944972486, 10.655327450725363,
      10.680339956478239, 10.705352462231115, 10.730364967983991,
      10.755377473736868, 10.780389979489744, 10.80540248524262,
      10.830414990995498, 10.855427496748375, 10.880440002501251,
      10.905452508254127, 10.930465014007003, 10.95547751975988,
      10.980490025512756, 11.005502531265632, 11.030515037018509,
      11.055527542771385, 11.080540048524263, 11.105552554277139,
      11.130565060030015, 11.155577565782892, 11.180590071535768,
      11.205602577288644, 11.230615083041521, 11.255627588794397,
      11.280640094547273, 11.305652600300149, 11.330665106053026,
      11.355677611805904, 11.38069011755878, 11.405702623311656,
      11.430715129064533, 11.455727634817409, 11.480740140570285,
      11.505752646323161, 11.530765152076038, 11.555777657828914,
      11.58079016358179, 11.605802669334668, 11.630815175087545,
      11.655827680840421, 11.680840186593297, 11.705852692346173,
      11.73086519809905, 11.755877703851926, 11.780890209604802,
      11.805902715357679, 11.830915221110555, 11.855927726863431,
      11.880940232616309, 11.905952738369185, 11.930965244122062,
      11.955977749874938, 11.980990255627814, 12.006002761380691,
      12.031015267133567, 12.056027772886443, 12.081040278639319,
      12.106052784392196, 12.131065290145072, 12.15607779589795,
      12.181090301650826, 12.206102807403703, 12.231115313156579,
      12.256127818909455, 12.281140324662331, 12.306152830415208,
      12.331165336168084, 12.35617784192096, 12.381190347673837,
      12.406202853426713, 12.431215359179591, 12.456227864932467,
      12.481240370685343, 12.50625287643822, 12.531265382191096,
      12.556277887943972, 12.581290393696849, 12.606302899449725,
      12.631315405202601, 12.656327910955477, 12.681340416708355,
      12.706352922461232, 12.731365428214108, 12.756377933966984,
      12.781390439719861, 12.806402945472737, 12.831415451225613,
      12.856427956978489, 12.881440462731366, 12.906452968484242,
      12.931465474237118, 12.956477979989996, 12.981490485742873,
      13.006502991495749, 13.031515497248625, 13.056528003001501,
      13.081540508754378, 13.106553014507254, 13.13156552026013,
      13.156578026013007, 13.181590531765883, 13.206603037518761,
      13.231615543271637, 13.256628049024513, 13.28164055477739,
      13.306653060530266, 13.331665566283142, 13.356678072036019,
      13.381690577788895, 13.406703083541771, 13.431715589294647,
      13.456728095047524, 13.481740600800402, 13.506753106553278,
      13.531765612306154, 13.556778118059031, 13.581790623811907,
      13.606803129564783, 13.631815635317659, 13.656828141070536,
      13.681840646823412, 13.706853152576288, 13.731865658329165,
      13.756878164082043, 13.781890669834919, 13.806903175587795,
      13.831915681340671, 13.856928187093548, 13.881940692846424,
      13.9069531985993, 13.931965704352177, 13.956978210105053,
      13.981990715857929, 14.007003221610805, 14.032015727363683,
      14.05702823311656, 14.082040738869436, 14.107053244622312,
      14.132065750375189, 14.157078256128065, 14.182090761880941,
      14.207103267633817, 14.232115773386694, 14.25712827913957,
      14.282140784892448, 14.307153290645324, 14.3321657963982,
      14.357178302151077, 14.382190807903953, 14.407203313656829,
      14.432215819409706, 14.457228325162582, 14.482240830915458,
      14.507253336668334, 14.532265842421211, 14.557278348174089,
      14.582290853926965, 14.607303359679841, 14.632315865432718,
      14.657328371185594, 14.68234087693847, 14.707353382691347,
      14.732365888444223, 14.757378394197099, 14.782390899949975,
      14.807403405702853, 14.83241591145573, 14.857428417208606,
      14.882440922961482, 14.907453428714359, 14.932465934467235,
      14.957478440220111, 14.982490945972987, 15.007503451725864,
      15.03251595747874, 15.057528463231616, 15.082540968984494,
      15.107553474737371, 15.132565980490247, 15.157578486243123,
      15.182590991996, 15.207603497748876, 15.232616003501752,
      15.257628509254628, 15.282641015007504, 15.307653520760381,
      15.332666026513257, 15.357678532266135, 15.382691038019011,
      15.407703543771888, 15.432716049524764, 15.45772855527764,
      15.482741061030517, 15.507753566783393, 15.532766072536269,
      15.557778578289145, 15.582791084042022, 15.607803589794898,
      15.632816095547776, 15.657828601300652, 15.682841107053529,
      15.707853612806405, 15.732866118559281, 15.757878624312157,
      15.782891130065034, 15.80790363581791, 15.832916141570786,
      15.857928647323662, 15.882941153076541, 15.907953658829417,
      15.932966164582293, 15.957978670335169, 15.982991176088046,
      16.008003681840922, 16.033016187593798, 16.058028693346674,
      16.083041199099551, 16.108053704852427, 16.133066210605303,
      16.15807871635818, 16.183091222111056, 16.208103727863932,
      16.233116233616808, 16.258128739369685, 16.283141245122561,
      16.308153750875437, 16.333166256628314, 16.35817876238119,
      16.383191268134066, 16.408203773886946, 16.433216279639822,
      16.4582287853927, 16.483241291145575, 16.508253796898451,
      16.533266302651327, 16.558278808404204, 16.58329131415708,
      16.608303819909956, 16.633316325662832, 16.658328831415709,
      16.683341337168585, 16.708353842921461, 16.733366348674338,
      16.758378854427214, 16.78339136018009, 16.80840386593297,
      16.833416371685846, 16.858428877438723, 16.8834413831916,
      16.908453888944475, 16.933466394697351, 16.958478900450228,
      16.983491406203104, 17.00850391195598, 17.033516417708856,
      17.058528923461733, 17.083541429214609, 17.108553934967485,
      17.133566440720362, 17.158578946473238, 17.183591452226114,
      17.20860395797899, 17.233616463731867, 17.258628969484743,
      17.283641475237619, 17.308653980990496, 17.333666486743372,
      17.358678992496252, 17.383691498249128, 17.408704004002004,
      17.433716509754881, 17.458729015507757, 17.483741521260633,
      17.508754027013509, 17.533766532766386, 17.558779038519262,
      17.583791544272138, 17.608804050025014, 17.633816555777891,
      17.658829061530767, 17.683841567283643, 17.70885407303652,
      17.733866578789396, 17.758879084542272, 17.783891590295148,
      17.808904096048025, 17.8339166018009, 17.858929107553777,
      17.883941613306657, 17.908954119059533, 17.93396662481241,
      17.958979130565286, 17.983991636318162, 18.009004142071039,
      18.034016647823915, 18.059029153576791, 18.084041659329667,
      18.109054165082544, 18.13406667083542, 18.159079176588296,
      18.184091682341172, 18.209104188094049, 18.234116693846925,
      18.2591291995998, 18.284141705352678, 18.309154211105554,
      18.33416671685843, 18.359179222611306, 18.384191728364183,
      18.409204234117059, 18.434216739869939, 18.459229245622815,
      18.484241751375691, 18.509254257128568, 18.534266762881444,
      18.55927926863432, 18.584291774387196, 18.609304280140073,
      18.634316785892949, 18.659329291645825, 18.6843417973987,
      18.709354303151578, 18.734366808904454, 18.75937931465733,
      18.784391820410207, 18.809404326163083, 18.834416831915959,
      18.859429337668836, 18.884441843421712, 18.909454349174588,
      18.934466854927464, 18.959479360680344, 18.984491866433221,
      19.009504372186097, 19.034516877938973, 19.059529383691849,
      19.084541889444726, 19.109554395197602, 19.134566900950478,
      19.159579406703354, 19.184591912456231, 19.209604418209107,
      19.234616923961983, 19.25962942971486, 19.284641935467736,
      19.309654441220612, 19.334666946973488, 19.359679452726365,
      19.384691958479241, 19.409704464232117, 19.434716969984994,
      19.45972947573787, 19.48474198149075, 19.509754487243626,
      19.534766992996502, 19.559779498749378, 19.584792004502255,
      19.609804510255131, 19.634817016008007, 19.659829521760884,
      19.68484202751376, 19.709854533266636, 19.734867039019512,
      19.759879544772389, 19.784892050525265, 19.809904556278141,
      19.834917062031018, 19.859929567783894, 19.88494207353677,
      19.909954579289646, 19.934967085042523, 19.9599795907954,
      19.984992096548275, 20.010004602301155, 20.035017108054031,
      20.060029613806908, 20.085042119559784, 20.11005462531266,
      20.135067131065536, 20.160079636818413, 20.185092142571289,
      20.210104648324165, 20.235117154077042, 20.260129659829918,
      20.285142165582791, 20.310154671335667, 20.335167177088543,
      20.360179682841419, 20.385192188594296, 20.410204694347172,
      20.435217200100048, 20.460229705852925, 20.4852422116058,
      20.510254717358677, 20.535267223111553, 20.560279728864433,
      20.58529223461731, 20.610304740370186, 20.635317246123062,
      20.660329751875938, 20.685342257628815, 20.710354763381691,
      20.735367269134567, 20.760379774887443, 20.78539228064032,
      20.810404786393196, 20.835417292146072, 20.860429797898949,
      20.885442303651825, 20.9104548094047, 20.935467315157577,
      20.960479820910454, 20.98549232666333, 21.010504832416206,
      21.035517338169083, 21.060529843921959, 21.085542349674839,
      21.110554855427715, 21.135567361180591, 21.160579866933467,
      21.185592372686344, 21.21060487843922, 21.235617384192096,
      21.260629889944973, 21.285642395697849, 21.310654901450725,
      21.3356674072036, 21.360679912956478, 21.385692418709354,
      21.41070492446223, 21.435717430215107, 21.460729935967983,
      21.485742441720859, 21.510754947473735, 21.535767453226612,
      21.560779958979488, 21.585792464732364, 21.610804970485241,
      21.63581747623812, 21.660829981990997, 21.685842487743873,
      21.710854993496749, 21.735867499249625, 21.7608800050025,
      21.785892510755378, 21.810905016508254, 21.835917522261131,
      21.860930028014007, 21.885942533766883, 21.910955039519759,
      21.935967545272636, 21.960980051025512, 21.985992556778388,
      22.011005062531265, 22.036017568284141, 22.061030074037017,
      22.086042579789893, 22.11105508554277, 22.136067591295646,
      22.161080097048526, 22.186092602801402, 22.211105108554278,
      22.236117614307155, 22.261130120060031, 22.286142625812907,
      22.311155131565783, 22.33616763731866, 22.361180143071536,
      22.386192648824412, 22.411205154577289, 22.436217660330165,
      22.461230166083041, 22.486242671835917, 22.511255177588794,
      22.53626768334167, 22.561280189094546, 22.586292694847423,
      22.6113052006003, 22.636317706353175, 22.661330212106051,
      22.686342717858931, 22.711355223611807, 22.736367729364684,
      22.76138023511756, 22.786392740870436, 22.811405246623313,
      22.836417752376189, 22.861430258129065, 22.886442763881941,
      22.911455269634818, 22.936467775387694, 22.96148028114057,
      22.986492786893447, 23.011505292646323, 23.0365177983992,
      23.061530304152075, 23.086542809904952, 23.111555315657828,
      23.136567821410704, 23.161580327163581, 23.186592832916457,
      23.211605338669337, 23.236617844422213, 23.261630350175089,
      23.286642855927965, 23.311655361680842, 23.336667867433718,
      23.361680373186594, 23.386692878939471, 23.411705384692347,
      23.436717890445223, 23.4617303961981, 23.486742901950976,
      23.511755407703852, 23.536767913456728, 23.561780419209605,
      23.586792924962481, 23.611805430715357, 23.636817936468233,
      23.66183044222111, 23.686842947973986, 23.711855453726862,
      23.736867959479738, 23.761880465232618, 23.786892970985495,
      23.811905476738371, 23.836917982491247, 23.861930488244123,
      23.886942993997, 23.911955499749876, 23.936968005502752,
      23.961980511255629, 23.986993017008505, 24.012005522761381,
      24.037018028514257, 24.062030534267134, 24.08704304002001,
      24.112055545772886, 24.137068051525763, 24.162080557278639,
      24.187093063031515, 24.212105568784391, 24.237118074537268,
      24.262130580290144, 24.287143086043024, 24.3121555917959,
      24.337168097548776, 24.362180603301653, 24.387193109054529,
      24.412205614807405, 24.437218120560281, 24.462230626313158,
      24.487243132066034, 24.51225563781891, 24.537268143571787,
      24.562280649324663, 24.587293155077539, 24.612305660830415,
      24.637318166583292, 24.662330672336168, 24.687343178089044,
      24.71235568384192, 24.737368189594797, 24.762380695347673,
      24.787393201100549, 24.812405706853426, 24.837418212606305,
      24.862430718359182, 24.887443224112058, 24.912455729864934,
      24.937468235617811, 24.962480741370687, 24.987493247123563,
      25.012505752876439, 25.037518258629316, 25.062530764382192,
      25.087543270135068, 25.112555775887945, 25.137568281640821,
      25.162580787393697, 25.187593293146573, 25.21260579889945,
      25.237618304652326, 25.262630810405202, 25.287643316158078,
      25.312655821910955, 25.337668327663831, 25.362680833416711,
      25.387693339169587, 25.412705844922463, 25.43771835067534,
      25.462730856428216, 25.487743362181092, 25.512755867933969,
      25.537768373686845, 25.562780879439721, 25.587793385192597,
      25.612805890945474, 25.63781839669835, 25.662830902451226,
      25.687843408204103, 25.712855913956979, 25.737868419709855,
      25.762880925462731, 25.787893431215608, 25.812905936968484,
      25.83791844272136, 25.862930948474236, 25.887943454227116,
      25.912955959979993, 25.937968465732869, 25.962980971485745,
      25.987993477238621, 26.013005982991498, 26.038018488744374,
      26.06303099449725, 26.088043500250127, 26.113056006003003,
      26.138068511755879, 26.163081017508755, 26.188093523261632,
      26.213106029014508, 26.238118534767384, 26.26313104052026,
      26.288143546273137, 26.313156052026013, 26.338168557778889,
      26.363181063531766, 26.388193569284642, 26.413206075037522,
      26.438218580790398, 26.463231086543274, 26.488243592296151,
      26.513256098049027, 26.538268603801903, 26.563281109554779,
      26.588293615307656, 26.613306121060532, 26.638318626813408,
      26.663331132566285, 26.688343638319161, 26.713356144072037,
      26.738368649824913, 26.76338115557779, 26.788393661330666,
      26.813406167083542, 26.838418672836418, 26.863431178589295,
      26.888443684342171, 26.913456190095047, 26.938468695847924,
      26.963481201600803, 26.98849370735368, 27.013506213106556,
      27.038518718859432, 27.063531224612309, 27.088543730365185,
      27.113556236118061, 27.138568741870937, 27.163581247623814,
      27.18859375337669, 27.213606259129566, 27.238618764882442,
      27.263631270635319, 27.288643776388195, 27.313656282141071,
      27.338668787893948, 27.363681293646824, 27.3886937993997,
      27.413706305152576, 27.438718810905453, 27.463731316658329,
      27.488743822411209, 27.513756328164085, 27.538768833916961,
      27.563781339669838, 27.588793845422714, 27.61380635117559,
      27.638818856928467, 27.663831362681343, 27.688843868434219,
      27.713856374187095, 27.738868879939972, 27.763881385692848,
      27.788893891445724, 27.8139063971986, 27.838918902951477,
      27.863931408704353, 27.888943914457229, 27.913956420210106,
      27.938968925962982, 27.963981431715858, 27.988993937468734,
      28.014006443221611, 28.039018948974491, 28.064031454727367,
      28.089043960480243, 28.114056466233119, 28.139068971985996,
      28.164081477738872, 28.189093983491748, 28.214106489244624,
      28.2391189949975, 28.264131500750377, 28.289144006503253,
      28.31415651225613, 28.339169018009006, 28.364181523761882,
      28.389194029514758, 28.414206535267635, 28.439219041020511,
      28.464231546773387, 28.489244052526264, 28.51425655827914,
      28.539269064032016, 28.564281569784896, 28.589294075537772,
      28.614306581290649, 28.639319087043525, 28.6643315927964,
      28.689344098549277, 28.714356604302154, 28.73936911005503,
      28.764381615807906, 28.789394121560782, 28.814406627313659,
      28.839419133066535, 28.864431638819411, 28.889444144572288,
      28.914456650325164, 28.93946915607804, 28.964481661830916,
      28.989494167583793, 29.014506673336669, 29.039519179089545,
      29.064531684842422, 29.0895441905953, 29.114556696348178,
      29.139569202101054, 29.16458170785393, 29.189594213606807,
      29.214606719359683, 29.239619225112559, 29.264631730865435,
      29.289644236618312, 29.314656742371188, 29.339669248124064,
      29.36468175387694, 29.389694259629817, 29.414706765382693,
      29.439719271135569, 29.464731776888446, 29.489744282641322,
      29.514756788394198, 29.539769294147074, 29.564781799899951,
      29.589794305652827, 29.614806811405707, 29.639819317158583,
      29.664831822911459, 29.689844328664336, 29.714856834417212,
      29.739869340170088, 29.764881845922964, 29.789894351675841,
      29.814906857428717, 29.839919363181593, 29.86493186893447,
      29.889944374687346, 29.914956880440222, 29.9399693861931,
      29.964981891945975, 29.989994397698851, 30.015006903451727,
      30.040019409204604, 30.06503191495748, 30.090044420710356,
      30.115056926463232, 30.140069432216109, 30.165081937968989,
      30.190094443721865, 30.215106949474741, 30.240119455227617,
      30.265131960980494, 30.29014446673337, 30.315156972486246,
      30.340169478239122, 30.365181983992, 30.390194489744875,
      30.415206995497751, 30.440219501250628, 30.465232007003504,
      30.49024451275638, 30.515257018509256, 30.540269524262133,
      30.565282030015009, 30.590294535767885, 30.615307041520762,
      30.640319547273638, 30.665332053026514, 30.690344558779394,
      30.71535706453227, 30.740369570285146, 30.765382076038023,
      30.7903945817909, 30.815407087543775, 30.840419593296652,
      30.865432099049528, 30.890444604802404, 30.91545711055528,
      30.940469616308157, 30.965482122061033, 30.990494627813909,
      31.015507133566786, 31.040519639319662, 31.065532145072538,
      31.090544650825414, 31.115557156578291, 31.140569662331167,
      31.165582168084043, 31.19059467383692, 31.215607179589796,
      31.240619685342676, 31.265632191095552, 31.290644696848428,
      31.315657202601304, 31.340669708354181, 31.365682214107057,
      31.390694719859933, 31.41570722561281, 31.440719731365686,
      31.465732237118562, 31.490744742871438, 31.515757248624315,
      31.540769754377191, 31.565782260130067, 31.590794765882944,
      31.61580727163582, 31.640819777388696, 31.665832283141572,
      31.690844788894449, 31.715857294647325, 31.7408698004002,
      31.765882306153081, 31.790894811905957, 31.815907317658834,
      31.84091982341171, 31.865932329164586, 31.890944834917462,
      31.915957340670339, 31.940969846423215, 31.965982352176091,
      31.990994857928968, 32.016007363681844, 32.04101986943472,
      32.066032375187596, 32.091044880940473, 32.116057386693349,
      32.141069892446225, 32.1660823981991, 32.191094903951978,
      32.216107409704854, 32.24111991545773, 32.266132421210607,
      32.291144926963483, 32.316157432716359, 32.341169938469235,
      32.366182444222112, 32.391194949974988, 32.416207455727864,
      32.441219961480741, 32.466232467233617, 32.491244972986493,
      32.516257478739369, 32.541269984492246, 32.566282490245122,
      32.591294995998, 32.616307501750875, 32.641320007503751,
      32.666332513256627, 32.6913450190095, 32.71635752476238,
      32.741370030515256, 32.766382536268132, 32.791395042021009,
      32.816407547773892, 32.841420053526761, 32.866432559279644,
      32.891445065032514, 32.9164575707854, 32.941470076538266,
      32.96648258229115, 32.991495088044019, 33.0165075937969,
      33.041520099549771, 33.066532605302655, 33.091545111055531,
      33.116557616808407, 33.141570122561284, 33.16658262831416,
      33.191595134067036, 33.216607639819912, 33.241620145572789,
      33.266632651325665, 33.291645157078541, 33.316657662831417,
      33.341670168584294, 33.36668267433717, 33.391695180090046,
      33.416707685842923, 33.4417201915958, 33.466732697348675,
      33.491745203101551, 33.516757708854428, 33.541770214607304,
      33.56678272036018, 33.591795226113057, 33.61680773186594,
      33.641820237618809, 33.666832743371693, 33.691845249124562,
      33.716857754877445, 33.741870260630314, 33.7668827663832,
      33.791895272136067, 33.81690777788895, 33.841920283641819,
      33.8669327893947, 33.891945295147572, 33.916957800900455,
      33.941970306653324, 33.966982812406208, 33.991995318159077,
      34.01700782391196, 34.04202032966483, 34.067032835417713,
      34.092045341170582, 34.117057846923466, 34.142070352676335,
      34.167082858429218, 34.192095364182094, 34.217107869934971,
      34.242120375687847, 34.267132881440723, 34.2921453871936,
      34.317157892946476, 34.342170398699352, 34.367182904452228,
      34.392195410205105, 34.417207915957981, 34.442220421710857,
      34.467232927463733, 34.49224543321661, 34.517257938969486,
      34.542270444722362, 34.567282950475239, 34.592295456228115,
      34.617307961980991, 34.642320467733867, 34.667332973486744,
      34.69234547923962, 34.7173579849925, 34.742370490745373,
      34.767382996498256, 34.792395502251125, 34.817408008004008,
      34.842420513756878, 34.867433019509761, 34.89244552526263,
      34.917458031015514, 34.942470536768383, 34.967483042521266,
      34.992495548274135, 35.017508054027019, 35.042520559779888,
      35.067533065532771, 35.09254557128564, 35.117558077038524,
      35.142570582791393, 35.167583088544276, 35.192595594297146,
      35.217608100050029, 35.242620605802905, 35.267633111555782,
      35.292645617308658, 35.317658123061534, 35.34267062881441,
      35.367683134567287, 35.392695640320163, 35.417708146073039,
      35.442720651825915, 35.467733157578792, 35.492745663331668,
      35.517758169084544, 35.542770674837421, 35.5677831805903,
      35.592795686343173, 35.617808192096049, 35.642820697848926,
      35.6678332036018, 35.692845709354678, 35.717858215107555,
      35.742870720860431, 35.767883226613314, 35.792895732366183,
      35.817908238119067, 35.842920743871936, 35.867933249624819,
      35.892945755377688, 35.917958261130572, 35.942970766883441,
      35.967983272636324, 35.992995778389194, 36.018008284142077,
      36.043020789894946, 36.06803329564783, 36.0930458014007,
      36.118058307153582, 36.143070812906451, 36.168083318659335,
      36.193095824412204, 36.218108330165087, 36.243120835917956,
      36.26813334167084, 36.293145847423716, 36.318158353176592,
      36.343170858929469, 36.368183364682345, 36.393195870435221,
      36.4182083761881, 36.443220881940974, 36.46823338769385,
      36.493245893446726, 36.5182583991996, 36.543270904952479,
      36.568283410705355, 36.593295916458231, 36.618308422211108,
      36.643320927963984, 36.66833343371686, 36.693345939469737,
      36.718358445222613, 36.743370950975489, 36.768383456728365,
      36.793395962481242, 36.818408468234118, 36.843420973986994,
      36.868433479739878, 36.893445985492747, 36.91845849124563,
      36.9434709969985, 36.968483502751383, 36.993496008504252,
      37.018508514257135, 37.043521020010004, 37.068533525762888,
      37.093546031515757, 37.11855853726864, 37.14357104302151,
      37.168583548774393, 37.193596054527262, 37.218608560280146,
      37.243621066033015, 37.2686335717859, 37.293646077538767,
      37.318658583291651, 37.34367108904452, 37.3686835947974,
      37.393696100550279, 37.418708606303156, 37.443721112056032,
      37.468733617808908, 37.493746123561785, 37.518758629314661,
      37.543771135067537, 37.568783640820413, 37.59379614657329,
      37.618808652326166, 37.643821158079042, 37.668833663831919,
      37.693846169584795, 37.718858675337671, 37.743871181090547,
      37.768883686843424, 37.7938961925963, 37.818908698349176,
      37.843921204102053, 37.868933709854929, 37.893946215607805,
      37.918958721360688, 37.943971227113558, 37.968983732866441,
      37.99399623861931, 38.019008744372194, 38.044021250125063,
      38.069033755877946, 38.094046261630815, 38.1190587673837,
      38.144071273136568, 38.169083778889451, 38.19409628464232,
      38.219108790395204, 38.244121296148073, 38.269133801900956,
      38.294146307653826, 38.319158813406709, 38.344171319159578,
      38.369183824912461, 38.394196330665331, 38.419208836418214,
      38.44422134217109, 38.469233847923967, 38.494246353676843,
      38.519258859429719, 38.544271365182595, 38.569283870935472,
      38.594296376688348, 38.619308882441224, 38.6443213881941,
      38.669333893946977, 38.694346399699853, 38.719358905452729,
      38.744371411205606, 38.769383916958482, 38.794396422711358,
      38.819408928464235, 38.844421434217111, 38.869433939969987,
      38.894446445722863, 38.91945895147574, 38.944471457228616,
      38.9694839629815, 38.994496468734368, 39.019508974487252,
      39.044521480240121, 39.069533985993004, 39.094546491745874,
      39.119558997498757, 39.144571503251626, 39.16958400900451,
      39.194596514757379, 39.219609020510262, 39.244621526263131,
      39.269634032016015, 39.294646537768884, 39.319659043521767,
      39.344671549274636, 39.36968405502752, 39.394696560780389,
      39.419709066533272, 39.444721572286142, 39.469734078039025,
      39.4947465837919, 39.519759089544777, 39.544771595297654,
      39.56978410105053, 39.594796606803406, 39.619809112556283,
      39.644821618309159, 39.669834124062035, 39.694846629814911,
      39.719859135567788, 39.744871641320664, 39.76988414707354,
      39.794896652826417, 39.819909158579293, 39.844921664332169,
      39.869934170085045, 39.894946675837922, 39.9199591815908,
      39.944971687343674, 39.96998419309655, 39.994996698849427,
      40.02000920460231, 40.045021710355179, 40.070034216108063,
      40.095046721860932, 40.120059227613815, 40.145071733366684,
      40.170084239119568, 40.195096744872437, 40.22010925062532,
      40.24512175637819, 40.270134262131073, 40.295146767883942,
      40.320159273636826, 40.345171779389695, 40.370184285142578,
      40.395196790895447, 40.420209296648331, 40.4452218024012,
      40.470234308154083, 40.495246813906952, 40.520259319659836,
      40.545271825412705, 40.570284331165581, 40.595296836918465,
      40.620309342671334, 40.645321848424217, 40.670334354177086,
      40.69534685992997, 40.720359365682839, 40.745371871435722,
      40.770384377188591, 40.795396882941475, 40.820409388694344,
      40.845421894447227, 40.8704344002001, 40.89544690595298,
      40.920459411705849, 40.945471917458732, 40.9704844232116,
      40.995496928964485, 41.020509434717354, 41.045521940470238,
      41.070534446223107, 41.09554695197599, 41.120559457728866,
      41.145571963481743, 41.170584469234619, 41.195596974987495,
      41.220609480740372, 41.245621986493248, 41.270634492246124,
      41.295646997999, 41.320659503751877, 41.345672009504753,
      41.370684515257629, 41.395697021010506, 41.420709526763382,
      41.445722032516258, 41.470734538269134, 41.495747044022011,
      41.520759549774887, 41.545772055527763, 41.570784561280639,
      41.595797067033516, 41.620809572786392, 41.645822078539275,
      41.670834584292145, 41.695847090045028, 41.7208595957979,
      41.745872101550781, 41.77088460730365, 41.795897113056533,
      41.8209096188094, 41.845922124562286, 41.870934630315155,
      41.895947136068038, 41.920959641820907, 41.945972147573791,
      41.97098465332666, 41.995997159079543, 42.021009664832413,
      42.046022170585296, 42.071034676338165, 42.096047182091048,
      42.121059687843918, 42.1460721935968, 42.171084699349677,
      42.196097205102554, 42.22110971085543, 42.246122216608306,
      42.271134722361182, 42.296147228114059, 42.321159733866935,
      42.346172239619811, 42.371184745372688, 42.396197251125564,
      42.42120975687844, 42.446222262631316, 42.471234768384193,
      42.496247274137069, 42.521259779889945, 42.546272285642821,
      42.5712847913957, 42.596297297148574, 42.62130980290145,
      42.646322308654327, 42.6713348144072, 42.696347320160086,
      42.721359825912955, 42.746372331665839, 42.771384837418708,
      42.796397343171591, 42.821409848924461, 42.846422354677344,
      42.871434860430213, 42.8964473661831, 42.921459871935966,
      42.946472377688849, 42.971484883441718, 42.9964973891946,
      43.021509894947471, 43.046522400700354, 43.071534906453223,
      43.096547412206107, 43.121559917958976, 43.146572423711859,
      43.171584929464728, 43.196597435217612, 43.221609940970481,
      43.246622446723364, 43.271634952476241, 43.296647458229117,
      43.321659963981993, 43.34667246973487, 43.371684975487746,
      43.396697481240622, 43.4217099869935, 43.446722492746375,
      43.471734998499251, 43.496747504252127, 43.521760010005, 43.54677251575788,
      43.571785021510756, 43.596797527263632, 43.621810033016509,
      43.646822538769385, 43.671835044522261, 43.696847550275137,
      43.721860056028014, 43.74687256178089, 43.771885067533766,
      43.79689757328665, 43.821910079039519, 43.8469225847924,
      43.871935090545271, 43.896947596298155, 43.921960102051024,
      43.946972607803907, 43.971985113556777, 43.99699761930966,
      44.022010125062529, 44.047022630815412, 44.072035136568282,
      44.097047642321165, 44.122060148074034, 44.147072653826918,
      44.172085159579787, 44.19709766533267, 44.222110171085539,
      44.247122676838423, 44.272135182591292, 44.297147688344175,
      44.322160194097052, 44.347172699849928, 44.372185205602804,
      44.39719771135568, 44.422210217108557, 44.447222722861433,
      44.472235228614309, 44.497247734367186, 44.522260240120062,
      44.547272745872938, 44.572285251625814, 44.597297757378691,
      44.622310263131567, 44.647322768884443, 44.672335274637319,
      44.697347780390196, 44.722360286143072, 44.747372791895948,
      44.772385297648825, 44.7973978034017, 44.822410309154577,
      44.847422814907461, 44.87243532066033, 44.897447826413213,
      44.922460332166082, 44.947472837918966, 44.972485343671835,
      44.997497849424718, 45.022510355177587, 45.047522860930471,
      45.07253536668334, 45.097547872436223, 45.122560378189092,
      45.147572883941976, 45.172585389694845, 45.197597895447728,
      45.2226104012006, 45.247622906953481, 45.27263541270635,
      45.297647918459234, 45.3226604242121, 45.347672929964986,
      45.372685435717862, 45.397697941470739, 45.422710447223615,
      45.447722952976491, 45.472735458729368, 45.497747964482244,
      45.52276047023512, 45.547772975987996, 45.572785481740873,
      45.597797987493749, 45.622810493246625, 45.6478229989995,
      45.672835504752378, 45.697848010505254, 45.72286051625813,
      45.747873022011007, 45.772885527763883, 45.797898033516759,
      45.822910539269635, 45.847923045022512, 45.872935550775388,
      45.897948056528271, 45.922960562281141, 45.947973068034024,
      45.972985573786893, 45.997998079539776, 46.023010585292646,
      46.048023091045529, 46.0730355967984, 46.098048102551282,
      46.123060608304151, 46.148073114057034, 46.1730856198099,
      46.198098125562787, 46.223110631315656, 46.248123137068539,
      46.273135642821408, 46.298148148574292, 46.323160654327161,
      46.348173160080044, 46.373185665832914, 46.3981981715858,
      46.423210677338673, 46.44822318309155, 46.473235688844426,
      46.4982481945973, 46.523260700350178, 46.548273206103055,
      46.573285711855931, 46.598298217608807, 46.623310723361683,
      46.64832322911456, 46.673335734867436, 46.698348240620312,
      46.723360746373189, 46.748373252126065, 46.773385757878941,
      46.798398263631817, 46.823410769384694, 46.84842327513757,
      46.873435780890446, 46.898448286643323, 46.9234607923962,
      46.948473298149075, 46.973485803901951, 46.998498309654835,
      47.023510815407704, 47.048523321160587, 47.073535826913457,
      47.09854833266634, 47.123560838419209, 47.148573344172092,
      47.173585849924962, 47.198598355677845, 47.223610861430714,
      47.2486233671836, 47.273635872936467, 47.29864837868935,
      47.323660884442219, 47.3486733901951, 47.373685895947972,
      47.398698401700855, 47.423710907453724, 47.448723413206608,
      47.473735918959477, 47.49874842471236, 47.523760930465237,
      47.548773436218113, 47.573785941970989, 47.598798447723865,
      47.623810953476742, 47.648823459229618, 47.673835964982494,
      47.698848470735371, 47.723860976488247, 47.748873482241123,
      47.773885987994, 47.798898493746876, 47.823910999499752,
      47.848923505252628, 47.873936011005505, 47.898948516758381,
      47.923961022511257, 47.948973528264133, 47.97398603401701,
      47.998998539769886, 48.024011045522762, 48.049023551275646,
      48.074036057028515, 48.0990485627814, 48.124061068534267,
      48.149073574287151, 48.17408608004002, 48.1990985857929,
      48.224111091545772, 48.249123597298656, 48.274136103051525,
      48.299148608804408, 48.324161114557278, 48.349173620310161,
      48.37418612606303, 48.399198631815914, 48.424211137568783,
      48.449223643321666, 48.474236149074535, 48.499248654827419,
      48.524261160580288, 48.549273666333171, 48.574286172086047,
      48.599298677838924, 48.6243111835918, 48.649323689344676,
      48.674336195097553, 48.699348700850429, 48.724361206603305,
      48.749373712356181, 48.774386218109058, 48.799398723861934,
      48.82441122961481, 48.849423735367687, 48.874436241120563,
      48.899448746873439, 48.924461252626315, 48.949473758379192,
      48.974486264132068, 48.999498769884944, 49.024511275637821,
      49.0495237813907, 49.074536287143573, 49.099548792896456,
      49.124561298649326, 49.149573804402209, 49.174586310155078,
      49.199598815907962, 49.224611321660831, 49.249623827413714,
      49.274636333166583, 49.299648838919467, 49.324661344672336,
      49.349673850425219, 49.374686356178088, 49.399698861930972,
      49.424711367683841, 49.449723873436724, 49.474736379189594,
      49.499748884942477, 49.524761390695346, 49.549773896448229,
      49.5747864022011, 49.599798907953982, 49.624811413706851,
      49.649823919459735, 49.674836425212611, 49.699848930965487,
      49.724861436718363, 49.74987394247124, 49.774886448224116,
      49.799898953976992, 49.824911459729869, 49.849923965482745,
      49.874936471235621, 49.8999489769885, 49.924961482741374,
      49.94997398849425, 49.974986494247126, 49.999999 } ;

    static real_T pDataValues0[] = { 0.5, 0.50810121973179434, 0.516379108265304,
      0.52482961757676394, 0.53344873282474425, 0.54223247235014682,
      0.55117688767620687, 0.56027806350849341, 0.56953211773490742,
      0.57893520142568422, 0.58848349883339179, 0.59817322739293133,
      0.60800063772153645, 0.6179620136187749, 0.62805367206654739,
      0.63827196322908752, 0.64861327045296158, 0.65907401026707035,
      0.66965063238264622, 0.68033961969325585, 0.69113748827479826,
      0.7020407873855059, 0.71304609946594477, 0.72415004013901352,
      0.73534925820994379, 0.74664043566630089, 0.75802028767798313,
      0.76948556259722134, 0.78103304195858059, 0.79265954047895826,
      0.80436190605758473, 0.81613701977602437, 0.82798179589817389,
      0.83989318187026407, 0.85186815832085794, 0.86390373906085138,
      0.8759969710834743, 0.88814493456428967, 0.900344742861193,
      0.91259354251441382, 0.92488851324651411, 0.93722686796238852,
      0.94960585274926612, 0.96202274687670819, 0.97447486279660989,
      0.98695954614319892, 0.99947417573303587, 1.0120161635650149,
      1.0245829548203635, 1.037172027862642, 1.0497808942377442,
      1.0624070986738963, 1.0750482190816588, 1.0877018665539235,
      1.1003656853659178, 1.1130373529752002, 1.1257145800216637,
      1.1383951103275334, 1.1510767208973673, 1.1637572219180585,
      1.1764344567588305, 1.1891063019712429, 1.2017706672891861,
      1.2144254956288847, 1.2270687630888955, 1.23969847895011,
      1.2523126856757516, 1.2649094589113774, 1.2774869074848776,
      1.290043173406475, 1.3025764318687256, 1.3150848912465196,
      1.3275667930970798, 1.3400204121599613, 1.3524440563570528,
      1.364836066792577, 1.3771948177530893, 1.3895187167074774,
      1.4018062043069626, 1.4140557543850998, 1.4262658739577769,
      1.4384351032232148, 1.4505620155619667, 1.4626452175369211,
      1.4746833488932971, 1.4866750825586483, 1.4986191246428622,
      1.5105142144381583, 1.5223591244190882, 1.534152660242539,
      1.5458936607477298, 1.5575809979562119, 1.569213577071872,
      1.5807903364809281, 1.5923102477519315, 1.6037723156357673,
      1.6151755780656536, 1.626519106157142, 1.6378020042081163,
      1.6490234096987935, 1.6601824932917244, 1.6712784588317926,
      1.6823105433462149, 1.6932780170445418, 1.7041801833186554,
      1.7150163787427728, 1.7257859730734428, 1.7364883692495485,
      1.7471230033923049, 1.7576893448052615, 1.7681868959742988,
      1.7786151925676341, 1.7889738034358136, 1.7992623306117195,
      1.8094804093105661, 1.8196277079299008, 1.8297039280496052,
      1.8397088044318926, 1.84964210502131, 1.8595036309447375,
      1.8692932165113885, 1.8790107292128091, 1.8886560697228809,
      1.8982291718978141, 1.9077300027761561, 1.9171585625787848,
      1.9265148847089129, 1.9357990357520858, 1.9450111154761818,
      1.954151256831413, 1.9632196259503234, 1.9722164221477909,
      1.9811418779210279, 1.9899962589495761, 1.9987798640953138,
      2.0074930254024528, 2.0161361080975349, 2.024709510589437,
      2.03321366446937, 2.041649034510876, 2.0500161186698311,
      2.0583154480844446, 2.0665475870752594, 2.0747131331451509,
      2.0828127169793276, 2.0908470024453303, 2.0988166865930364,
      2.1067224996546514, 2.1145652050447183, 2.1223455993601092,
      2.1300645123800352, 2.1377228070660337, 2.1453213795619805,
      2.1528611591940816, 2.1603431084708773, 2.16776822308324,
      2.1751375319043782, 2.1824520969898296, 2.1897130135774669,
      2.1969214100874961, 2.204078448122456, 2.2111853224672191,
      2.21824326108899, 2.2252535251373073, 2.2322174089440434,
      2.2391362400234014, 2.2460113790719203, 2.2528442199106014,
      2.2596361820409587, 2.2663886832446818, 2.2731031286284558,
      2.2797809104016458, 2.2864234078762959, 2.2930319874671263,
      2.2996080026915409, 2.3061527941696158, 2.312667689624111,
      2.319154003880461, 2.3256130388667842, 2.3320460836138728,
      2.3384544142551986, 2.3448392940269138, 2.3512019732678491,
      2.357543689419511, 2.3638656670260896, 2.3701691177344495,
      2.3764552402941352, 2.3827252205573686, 2.3889802314790534,
      2.3952214331167707, 2.4014499726307772, 2.4076669842840128,
      2.413873589442094, 2.4200708965733138, 2.4262600012486488,
      2.4324419861417503, 2.438617921028948, 2.4447888627892547,
      2.4509558554043558, 2.4571199299586208, 2.4632821046390951,
      2.4694433847355017, 2.4756047626402444, 2.4817672178484051,
      2.487931716957744, 2.4940992136687008, 2.5002706487843929,
      2.5064469502106159, 2.5126290329558465, 2.5188177991312353,
      2.5250141379506172, 2.5312189257305033, 2.5374330258900826,
      2.5436572889512234, 2.5498925525384726, 2.5561396413790556,
      2.5623993673028767, 2.568672529242519, 2.5749599132332448,
      2.5812622924129927, 2.5875804270223828, 2.5939150644047126,
      2.6002669390059587, 2.6066367723747752, 2.6130252731624957,
      2.6194331371231319, 2.6258610471133763, 2.632309673092597,
      2.6387796721228418, 2.6452716883688394, 2.651786353097993,
      2.6583242846803881, 2.6648860885887871, 2.6714723573986325,
      2.678083670788042, 2.6847205955378173, 2.6913836855314339,
      2.6980734817550478, 2.7047905122974947, 2.7115352923502871,
      2.7183083242076171, 2.7251100972663567, 2.7319410880260535,
      2.7388017600889367, 2.7456925641599117, 2.7526139380465651,
      2.7595663066591607, 2.7665500820106406, 2.7735656632166261,
      2.7806134364954178, 2.7876937751679929, 2.7948070396580107,
      2.8019535774918065, 2.8091337232983928, 2.8163477988094656,
      2.8235961128593958, 2.8308789613852334, 2.8381966274267074,
      2.8455493811262271, 2.8529374797288773, 2.8603611675824254,
      2.8678206761373128, 2.8753162239466636, 2.8828480166662778,
      2.8904162470546364, 2.8980210949728971, 2.9056627273848967,
      2.9133412983571518, 2.9210569490588565, 2.9288098077618838,
      2.936599989840786, 2.9444275977727918, 2.9522927211378112,
      2.9601954366184327, 2.9681358079999227, 2.9761138861702245,
      2.984129709119963, 2.9921833019424411, 3.0002746768336395,
      3.0084038330922165, 3.0165707571195113, 3.0247754224195411,
      3.0330177895990018, 3.0412978063672669, 3.0496154075363893,
      3.057970515021101, 3.0663630378388125, 3.0747928721096112,
      3.0832599010562673, 3.0917639950042255, 3.1003050113816104,
      3.1088827947192259, 3.1174971766505539, 3.1261479759117554,
      3.13483499834167, 3.143558036881815, 3.1523168715763892,
      3.1611112695722667, 3.1699409851190019, 3.1788057595688266,
      3.1877053213766549, 3.1966393861000739, 3.2056076563993536,
      3.2146098220374415, 3.2236455598799627, 3.2327145338952246,
      3.2418163951542081, 3.2509507818305758, 3.2601173192006678,
      3.2693156196435051, 3.2785452826407848, 3.2878058947768825,
      3.2970970297388562, 3.306418248316437, 3.3157690984020389,
      3.3251491149907535, 3.3345578201803492, 3.3439947231712761,
      3.3534593202666616, 3.3629510948723111, 3.3724695174967088,
      3.3820140457510184, 3.3915841243490812, 3.4011791851074187,
      3.4107986469452296, 3.4204419158843908, 3.4301083850494614,
      3.4397974346676734, 3.449508432068944, 3.4592407316858629,
      3.4689936750537012, 3.47876659081041, 3.488558794696619,
      3.4983695895556326, 3.5081982656996171, 3.5180441076568267,
      3.5279064038777723, 3.5377844481390834, 3.5476775395440945,
      3.5575849825228492, 3.5675060868320938, 3.5774401675552832,
      3.5873865451025742, 3.59734454521083, 3.6073134989436246,
      3.6172927426912325, 3.6272816181706347, 3.6372794724255195,
      3.6472856578262793, 3.6572995320700143, 3.6673204581805274,
      3.6773478045083312, 3.6873809447306396, 3.6974192578513772,
      3.7074621282011697, 3.7175089454373507, 3.7275591045439591,
      3.7376120058317408, 3.7476670549381468, 3.7577236628273303,
      3.7677812457901565, 3.7778392254441906, 3.7878970287337088,
      3.7979540879296887, 3.8080098406298162, 3.8180637297584807,
      3.8281152035667785, 3.8381637156325144, 3.8482087248601937,
      3.8582496954810321, 3.8682860970529473, 3.8783174044605642,
      3.8883430979152145, 3.8983626629549342, 3.908375590444467,
      3.9183813765752595, 3.928379522865467, 3.9383695361599469,
      3.9483509286302674, 3.9583232177746948, 3.9682859264182109,
      3.9782385827124949, 3.9881807201359361, 3.9981118774936277,
      4.0080315989173716, 4.0179394338656707, 4.0278349371237354,
      4.0377176688034879, 4.047587194343544, 4.0574430845092362,
      4.0672849153925963, 4.0771122684123675, 4.0869247303139922,
      4.0967218931696232, 4.1065033543781153, 4.116268716665032,
      4.1260175880826448, 4.1357495820099244, 4.1454643171525536,
      4.1551614175429137, 4.1648405125401027, 4.1745012368299106,
      4.1841432304248452, 4.1937661386641123, 4.2033696122136286,
      4.2129533070660123, 4.2225168845405889, 4.2320600112833917,
      4.2415823592671567, 4.2510836057913295, 4.2605634334820559,
      4.2700215302921913, 4.2794575895012956, 4.2888713097156357,
      4.2982623948681811, 4.307630554218612, 4.3169755023533076,
      4.3262969591853624, 4.335594649954567, 4.3448683052274228,
      4.3541176608971375, 4.3633424581836193, 4.3725424436334892,
      4.3817173691200688, 4.390866991843386, 4.3999910743301776,
      4.4090893844338837, 4.4181616953346508, 4.4272077855393306,
      4.43622743888148, 4.4452204445213628, 4.4541865969459478,
      4.4631256959689107, 4.4720375467306326, 4.4809219596981995,
      4.4897787506654021, 4.4986077407527389, 4.5074087564074148,
      4.5161816294033361, 4.5249261968411227, 4.5336423011480909,
      4.54232979007827, 4.5509885167123887, 4.55961833945789, 4.5682191220489141,
      4.5767907335463107, 4.5853330483376364, 4.593845946137149,
      4.60232931198582, 4.610783036251318, 4.6192070146280217,
      4.6276011481370167, 4.6359653431260908, 4.6442995112697414,
      4.6526035695691679, 4.6608774403522757, 4.66912105127368,
      4.677334335314697, 4.6855172307833524, 4.6936696813143746,
      4.7017916358691991, 4.7098830487359686, 4.71794387952953,
      4.7259740931914331, 4.7339736599899389, 4.7419425555200112,
      4.7498807607033182, 4.757788261788237, 4.765665050349849,
      4.773511123289941, 4.781326482837005, 4.789111136546242, 4.796865097299551,
      4.80458838330555, 4.8122810180995472, 4.819943030543568,
      4.8275744548263395, 4.8351753304632918, 4.8427457022965674,
      4.8502856204950069, 4.8577951405541642, 4.8652743232962932,
      4.8727232348703557, 4.8801419467520191, 4.8875305357436556,
      4.8948890839743457, 4.9022176788998735, 4.9095164133027271,
      4.9167853852921048, 4.9240246983039073, 4.931234461100745,
      4.9384147877719267, 4.9455657977334742, 4.9526876157281094,
      4.9597803718252669, 4.9668442014210781, 4.97387924523839,
      4.9808856493267468, 4.987863565062403, 4.9948131491483174,
      5.001734563613832, 5.0086279756147389, 5.01549355632203,
      5.0223314802782015, 5.0291419253711425, 5.0359250728341287,
      5.0426811072458309, 5.0494102165303048, 5.0561125919569987,
      5.0627884281407489, 5.0694379230417832, 5.0760612779657173,
      5.0826586975635575, 5.0892303898316964, 5.0957765661119234,
      5.1022974410914133, 5.1087932328027295, 5.1152641626238262,
      5.1217104552780492, 5.1281323388341313, 5.1345300447061959,
      5.1409038076537579, 5.1472538657817175, 5.1535804605403692,
      5.1598838367253954, 5.1661642424778673, 5.1724219292842486,
      5.1786571519763873, 5.1848701687315275, 5.1910612410723029,
      5.1972306338667265, 5.2033786153282131, 5.2095054570155632,
      5.2156114338329642, 5.2216968240299986, 5.2277619092016305,
      5.2338069742882229, 5.239832307575524, 5.2458382006946707,
      5.2518249486221915, 5.2577928496800022, 5.26374220553541,
      5.2696733212011146, 5.2755865050352009, 5.2814820687411439,
      5.2873603273678125, 5.2932215993094616, 5.2990662063057359,
      5.3048944734416681, 5.3107067291476886, 5.3165033051996069,
      5.32228453671863, 5.3280507621713511, 5.3338023233697527,
      5.3395395654712061, 5.345262836978482, 5.3509724897397257,
      5.3566688789484829, 5.3623523631436836, 5.3680233042096521,
      5.3736820673760972, 5.3793290212181235, 5.3849645376562183,
      5.3905889919562631, 5.3962027627295281, 5.4018062319326745,
      5.4073997848677529, 5.4129838101821974, 5.4185586998688438,
      5.4241248492659038, 5.4296826570569907, 5.4352325252711022,
      5.4407748592826257, 5.4463100678113374, 5.4518385629224051,
      5.4573607600263889, 5.4628770778792308, 5.4683879385822687,
      5.4738937675822275, 5.4793949936712245, 5.484892048986767,
      5.4903853690117455, 5.4958753925744492, 5.5013625618485493,
      5.5068473223531109, 5.5123301229525872, 5.5178114158568228,
      5.5232916566210521, 5.5287713041458959, 5.534250820677368,
      5.5397306718068693, 5.5452113264711951, 5.550693256952524,
      5.5561769388784281, 5.56166285122187, 5.5671514763011967,
      5.5726432997801538, 5.5781388106678689, 5.5836385013188625,
      5.5891428674330434, 5.594652408055711, 5.600167625577555,
      5.6056890257346534, 5.6112171176084757, 5.61675241362588,
      5.6222954295591121, 5.627846684525811, 5.6334067009890045,
      5.638976004757108, 5.6445551249839276, 5.6501445941686628,
      5.6557449481558946, 5.6613567261356055, 5.6669804706431544,
      5.6726167275593, 5.678266046110183, 5.6839289788673444, 5.6896060817477023,
      5.695297914013576, 5.7010050382726636, 5.7067280204780619,
      5.7124674299282523, 5.7182238392671065, 5.7239978244838889,
      5.7297899649132509, 5.7356008432352361, 5.7414310454752728,
      5.7472811610041825, 5.7531517825381764, 5.7590435061388563,
      5.7649569312132121, 5.7708926605136206, 5.7768513001378556,
      5.7828334595290745, 5.788839751475825, 5.7948707921120493,
      5.8009272009170729, 5.807009600715614, 5.8131186176777838,
      5.8192548813190719, 5.8254190245003761, 5.8316116834279645,
      5.8378334976535067, 5.8440851100740616, 5.8503671669320712,
      5.8566803178153739, 5.863025215657192, 5.8694025167361419,
      5.8758128806762313, 5.88225697044685, 5.8887354523627859,
      5.8952489960842085, 5.901798274616687, 5.9083839643111693,
      5.9150067448640034, 5.9216672993169182, 5.9283663140570368,
      5.9351044788168714, 5.9418824866743236, 5.9487010340526849,
      5.9555608207206348, 5.9624625497922485, 5.9694069277269808,
      5.9763946643296864, 5.9834264727506037, 5.9905030694853609,
      5.99762517437498, 6.0047935104765209, 6.0120087996569955, 6.01927175344942,
      6.0265830710234729, 6.0339434391773983, 6.0413535323380039,
      6.0488140125606744, 6.0563255295293583, 6.0638887205565739,
      6.0715042105834058, 6.0791726121795122, 6.0868945255431148,
      6.0946705385010054, 6.1025012265085481, 6.11038715264967,
      6.1183288676368663, 6.1263269098112065, 6.1343818051423264,
      6.14249406722843, 6.1506641972962859, 6.1588926842012386,
      6.1671800044271965, 6.1755266220866352, 6.1839329889206072,
      6.1923995442987216, 6.2009267152191647, 6.20951491630869,
      6.2181645498226166, 6.2268760056448338, 6.235649661287801,
      6.2444858818925413, 6.2533850202286558, 6.2623474166943049,
      6.2713733993162188, 6.280463283749703, 6.289617373278622,
      6.2988359588154186, 6.3081193189010962, 6.317467719705232,
      6.3268814150259676, 6.3363606462900188, 6.3459056425526619,
      6.3555166204977533, 6.365193784437702, 6.3749373263135007,
      6.3847474256947043, 6.3946242497794348, 6.4045679533943858,
      6.41457867899482, 6.4246565566645621, 6.4348017041160137, 6.44501422669014,
      6.4552942173564754, 6.4656417567131266, 6.4760569129867651,
      6.4865397420326314, 6.4970902873345366, 6.5077085800048531,
      6.5183946387845335, 6.5291484700430917, 6.5399700677786123,
      6.5508594136177463, 6.5618164768157161, 6.5728412142563073,
      6.5839335704518831, 6.5950934775433669, 6.6063208553002566,
      6.6176156111206144, 6.6289776400310725, 6.6404068246868313,
      6.6519030353716655, 6.6634661299979063, 6.6750959541064656,
      6.6867923408668144, 6.698555111077, 6.7103840731636319, 6.7222790231818967,
      6.7342397448155369, 6.7462660093768747, 6.758357575806798,
      6.770514190674759, 6.7827355881787845, 6.7950214901454631,
      6.8073716060299594, 6.8197856329160018, 6.8322632555158895,
      6.84480414617049, 6.8574079648492337, 6.8700743591501316, 6.88280296429975,
      6.8955934031532333, 6.9084452861942927, 6.921358211535205,
      6.9343317649168128, 6.9473655197085371, 6.96045903690836,
      6.973611865142832, 6.9868235406670784, 7.000093587364784, 7.01342151674821,
      7.0268068279581826, 7.0402490077641016, 7.0537475305639248,
      7.0673018583841856, 7.0809114408799889, 7.094575715335, 7.1082941066614591,
      7.1220660274001748, 7.135890877720521, 7.1497680454204389,
      7.1636969059264466, 7.1776768222936216, 7.1917071452056174,
      7.2057872129746476, 7.2199163515414995, 7.2340938744755316,
      7.2483190829746649, 7.2625912658653959, 7.2769096996027827,
      7.2912736482704545, 7.3056823635806118, 7.3201350848740212,
      7.3346310391200182, 7.3491694409165049, 7.3637494924899549,
      7.3783703836954135, 7.3930312920164853, 7.4077313825653492,
      7.422469808082754, 7.4372457089380131, 7.4520582131290158,
      7.4669064362822075, 7.4817894816526138, 7.4967064401238286,
      7.5116563902080014, 7.5266383980458622, 7.5416515174067076,
      7.5566947896884029, 7.5717672439173773, 7.58686789674864,
      7.6019957524657471, 7.617149802980852, 7.6323290278346514,
      7.6475323941964239, 7.6627588568640146, 7.6780073582638355,
      7.6932768284508679, 7.7085661851086646, 7.7238743335493387,
      7.7392001667135792, 7.7545425651706461, 7.7699003971183549,
      7.7852725183831053, 7.800657772419858, 7.8160549903121392,
      7.8314629907720548, 7.8468805801402626, 7.8623065523860012,
      7.8777396891070772, 7.893178759529861, 7.9086225205092964,
      7.9240697165288907, 7.9395190797007249, 7.9549693297654427,
      7.9704191740922639, 7.9858673076789728, 8.0013124131519717,
      8.0167531623965971, 8.032188230706641, 8.0476163085824091,
      8.0630361025667074, 8.078446335244843, 8.0938457452446215,
      8.1092330872363441, 8.1246071319328141, 8.1399666660893342,
      8.1553104925037054, 8.170637430016221, 8.1859463135096782,
      8.20123599390938, 8.216505338183115, 8.2317532293411819,
      8.2469785664363684, 8.2621802645639733, 8.2773572548617818,
      8.2925084845100834, 8.3076329167316683, 8.3227295307918219,
      8.3377973219983339, 8.35283530170148, 8.3678424972940526,
      8.3828179522113277, 8.39776072593109, 8.412669893973618,
      8.4275445479016931, 8.4423837953205858, 8.4571867598780823,
      8.4719525812644481, 8.4866804152124669, 8.5013694334974019,
      8.516018823937026, 8.5306277903916232, 8.5451955527639445,
      8.5597213469992646, 8.5742044250853553, 8.5886440550524767,
      8.6030395209733967, 8.6173901229633767, 8.63169517718018,
      8.6459540158240653, 8.6601659871377983, 8.67433045540663,
      8.6884468009583244, 8.7025144201631335, 8.7165327254338134,
      8.730501145225622, 8.7444191240363072, 8.7582861224061226,
      8.7721016169178174, 8.7858651001966415, 8.7995760809103469,
      8.8132340837691778, 8.8268386495258735, 8.84038933497569,
      8.8538857129563588, 8.8673273723481341, 8.8807139180737487,
      8.8940449710984453, 8.9073201684299619, 8.9205391631185389,
      8.9337016242569085, 8.9468072369803089, 8.9598557024664736,
      8.97284673793563, 8.9857800766505171, 8.9986554679163611, 9.0114726770809,
      9.0242314855343491, 9.03693169070944, 9.0495731060814, 9.0621555611679554,
      9.0746789015293281, 9.0871429887682371, 9.0995477005299072,
      9.1118929305020586, 9.1241785884149067, 9.13640460004117,
      9.148570907196067, 9.1606774677373117, 9.17272425556512, 9.184711260622203,
      9.19663848889377, 9.2085059624075338, 9.220313719233701, 9.23206181348499,
      9.243750315316591, 9.255379310926223, 9.26694890255409, 9.27845920848289,
      9.2899103630378228, 9.301302516586599, 9.3126358355394121,
      9.3239105023489586, 9.3351267155104463, 9.34628468956156, 9.3573846550825,
      9.36842685869596, 9.3794115630671335, 9.390339046903712,
      9.4012096049558842, 9.412023548016343, 9.4227812029202713,
      9.4334829125453616, 9.4441290358117964, 9.45471994768226,
      9.465256039161936, 9.4757377172985091, 9.48616540518216,
      9.4965395419455678, 9.50686058276391, 9.5171289988548615,
      9.5273452774786112, 9.5375099219378168, 9.5476234515776639,
      9.5576864017858245, 9.5676993239924677, 9.5776627856702579,
      9.5875773703343778, 9.5974436775424863, 9.6072623228947549,
      9.6170339380338437, 9.626759170644922, 9.6364386844556549,
      9.6460731592361988, 9.65566329079922, 9.6652097909998727,
      9.6747133877358245, 9.6841748249472257, 9.6935948626167328,
      9.7029742767695062, 9.7123138594731948, 9.7216144188379516,
      9.7308767790164339, 9.740101780203787, 9.7492902786376625,
      9.7584431465982053, 9.7675612724080683, 9.77664556043239, 9.78569693107882,
      9.7947163207974981, 9.803704682081074, 9.8126629834646835,
      9.8215922095259636, 9.8304933608850575, 9.8393674542046, 9.848215522189733,
      9.8570386135880863, 9.865837793189792, 9.8746141418274913,
      9.8833687563763117, 9.89210274975388, 9.90081725092033, 9.909513404878286,
      9.91819237267288, 9.9268553313917369, 9.9355034741649781,
      9.9441380101652275, 9.9527601646076072, 9.9613711787497419,
      9.96997230989175, 9.97856483137625, 9.9871500325883584, 9.9957292189556934,
      10.004303711873899, 10.012874843046413, 10.021443937354009,
      10.030012307194006, 10.038581252405814, 10.047152060270903,
      10.055726005512822, 10.064304350297187, 10.072888344231687,
      10.081479224366094, 10.09007821519223, 10.098686528644008,
      10.107305364097405, 10.115935908370474, 10.124579335723338,
      10.133236807858184, 10.14190947391929, 10.150598470492987,
      10.159304921607694, 10.168029938733888, 10.176774620784125,
      10.185540054113035, 10.19432731251732, 10.203137457235743,
      10.211971536949155, 10.220830587780469, 10.229715633294671,
      10.238627684498827, 10.247567739842067, 10.256536785215589,
      10.265535793952678, 10.274565726828676, 10.283627532061006,
      10.292722145309158, 10.301850489674704, 10.311013475701271,
      10.320212001374575, 10.329446952122394, 10.338719200814582,
      10.348029607763058, 10.357379020721826, 10.366768274886953,
      10.376198192896585, 10.385669584830925, 10.395183248212266,
      10.404739968004959, 10.414340516615445, 10.423985653892217,
      10.433676127125853, 10.443412671048996, 10.453196007836359,
      10.463026847104741, 10.472905885913, 10.482833808762072,
      10.492811287594961, 10.502838981796748, 10.512917538194582,
      10.523047591057683, 10.533229762097353, 10.543464660466947,
      10.553752882761911, 10.564095013019761, 10.574491622720069,
      10.584943270784496, 10.595450503576771, 10.606013854902688,
      10.616633846010119, 10.627310985589014, 10.638045769771381,
      10.648838682131315, 10.659690193684966, 10.670600762890571,
      10.681570835648433, 10.69260084530093, 10.703691212632506,
      10.714842345869686, 10.726054640681058, 10.737328480177288,
      10.748664234911113, 10.760062262877339, 10.771522909512848,
      10.783046507696589, 10.794633377749594, 10.806283827434955,
      10.817998151957843, 10.829776633965494, 10.841619543547228,
      10.853527138234424, 10.865499663000541, 10.877537350261109,
      10.889640419873732, 10.901809079138078, 10.914043522795895,
      10.926343933031001, 10.938710479469286, 10.951143319178712,
      10.963642596669308, 10.976208443893189, 10.988840980244522,
      11.001540312559568, 11.014306535116642, 11.02713972963614,
      11.040039965280529, 11.053007298654343, 11.066041773804203,
      11.079143422218781, 11.092312262828838, 11.105548302007195,
      11.118851533568757, 11.132221938770492, 11.145659486311443,
      11.159164132332727, 11.172735820417524, 11.186374481591104,
      11.200080034320793, 11.213852384515993, 11.227691425528182,
      11.241597038150905, 11.255569090619785, 11.269607438612512,
      11.283711925248854, 11.297882381090638, 11.31211862414178,
      11.326420459848254, 11.340787681098121, 11.35522006822149,
      11.369717388990573, 11.384279398619633, 11.398905839765007,
      11.413596442525114, 11.428350924440432, 11.443168990493524,
      11.458050333109014, 11.472994632153606, 11.488001554936073,
      11.503070756207254, 11.518201878160077, 11.533394550429524,
      11.548648390092655, 11.563963001668613, 11.579337977118588,
      11.594772895845876, 11.610267324695814, 11.625820817955828,
      11.641432917355409, 11.657103152066124, 11.672831038701613,
      11.688616081317585, 11.704457771411819, 11.72035558792418,
      11.736308997236586, 11.752317453173035, 11.768380396999596,
      11.78449725742442, 11.800667450597713, 11.816890380111767,
      11.83316543700094, 11.849491999741662, 11.865869434252435,
      11.882297093893834, 11.898774319468512, 11.915300439221186,
      11.93187476883864, 11.948496611449746, 11.965165257625436,
      11.981879985378718, 11.998640060164671, 12.015444735402953,
      12.032293259852668, 12.049184886457919, 12.066118873367111,
      12.083094483932959, 12.100110986712508, 12.117167655467126,
      12.134263769162507, 12.151398611968665, 12.168571473259941,
      12.185781647615, 12.203028434816831, 12.220311139852747,
      12.237629072914386, 12.254981549397698, 12.272367889902988,
      12.289787420234845, 12.307239471402218, 12.32472337961835,
      12.342238486300831, 12.359784138071559, 12.377359686756771,
      12.394964489387016, 12.412597908197169, 12.430259310626436,
      12.447948069318336, 12.465663562120728, 12.483405172085781,
      12.501172287469988, 12.518964301734176, 12.53678061354349,
      12.554620626767395, 12.572483750479693, 12.590369398958492,
      12.608276991686239, 12.626205953349706, 12.644155713839972,
      12.662125708252454, 12.680115376886894, 12.698124165247352,
      12.716151524042216, 12.734196909184194, 12.752259781790316,
      12.770339608181946, 12.788435859884766, 12.806548013628785,
      12.824675551348328, 12.842817960182051, 12.860974732472934,
      12.879145365768281, 12.897329362819713, 12.915526231583184,
      12.933735485218973, 12.951956642091675, 12.970189225770214,
      12.988432765027831, 13.00668679384211, 13.024950851394935,
      13.043224482072526, 13.061507235465433, 13.079798666368522,
      13.098098334780975, 13.116405805906316, 13.134720650152383,
      13.153042443131337, 13.17137076565967, 13.189705203758191,
      13.208045348652037, 13.226390796770664, 13.244741149747858,
      13.263096014421727, 13.281455002834706, 13.299817732233544,
      13.318183825069331, 13.336552908997461, 13.354924616877671,
      13.373298586773997, 13.391674461954837, 13.410051890892877,
      13.428430527265146, 13.446810029952992, 13.465190063042087,
      13.48357029582243, 13.501950402788342, 13.520330063638458,
      13.538708963275756, 13.557086791807524, 13.575463244545384,
      13.593838022005272, 13.61221082990745, 13.630581379176522,
      13.648949385941387, 13.667314571535284, 13.68567666249578,
      13.704035390564751, 13.722390492688417, 13.740741711017302,
      13.759088792906265, 13.777431490914495, 13.795769562805496,
      13.814102771547084, 13.832430885311425, 13.850753677474989,
      13.869070926618594, 13.887382416527348, 13.905687936190704,
      13.923987279802441, 13.942280246760657, 13.960566641667768,
      13.978846274330527, 13.997118959760003, 14.015384518171585,
      14.03364277498499, 14.051893560824265, 14.070136711517781,
      14.088372068098218, 14.106599476802602, 14.124818789072259,
      14.14302986155286, 14.161232556094388, 14.179426739751158,
      14.197612284781794, 14.21578906864927, 14.233956974020856,
      14.252115888768168, 14.270265705967123, 14.288406323897997,
      14.306537646045351, 14.324659581098095, 14.342772042949456,
      14.36087495069699, 14.378968228642565, 14.397051806292382,
      14.415125618356964, 14.433189604751162, 14.451243710594138,
      14.469287886209402, 14.487322087124761, 14.50534627407237,
      14.523360412988684, 14.541364475014502, 14.559358436494939,
      14.577342278979438, 14.595315989221755, 14.61327955917999,
      14.631232986016546, 14.649176272098154, 14.667109424995889,
      14.685032457485118, 14.702945387545565, 14.720848238361251,
      14.738741038320544, 14.756623821016106, 14.774496625244964,
      14.792359495008432, 14.810212479512165, 14.828055633166143,
      14.845889015584664, 14.863712691586347, 14.881526731194157,
      14.899331209635349, 14.917126207341532, 14.93491180994862,
      14.952688108296863, 14.970455198430823, 14.988213181599399,
      15.005962164254431, 15.023702257703675, 15.0414335765471,
      15.05915623792332, 15.076870361487446, 15.094576069411106,
      15.112273486382449, 15.129962739606128, 15.147643958803309,
      15.165317276211669, 15.182982826585398, 15.200640747195214,
      15.218291177828302, 15.235934260788424, 15.253570140895791,
      15.271198965487176, 15.288820884415827, 15.306436050051531,
      15.32404461728057, 15.341646743505757, 15.359242588646381,
      15.376832315138298, 15.394416087933811, 15.411994074501798,
      15.429566444827602, 15.447133371413109, 15.464695029276692,
      15.482251595953267, 15.499803251494221, 15.517350178467497,
      15.534892561957514, 15.552430589565233, 15.569964451408094,
      15.587494340120088, 15.605020450851688, 15.622542981269889,
      15.6400621315582, 15.657578104416634, 15.675091105061737,
      15.692601341226538, 15.710109023160603, 15.727614363629998,
      15.745117577917302, 15.762618883821606, 15.780118501658515,
      15.797616654260153, 15.815113566975139, 15.83260946766862,
      15.850104586722249, 15.867599157034192, 15.885093414019122,
      15.902587595608237, 15.920081942249235, 15.937576696906328,
      15.955072105060244, 15.972568414708224, 15.990065876364008,
      16.007564743057877, 16.02506527033659, 16.042567716263445,
      16.060072341418227, 16.077579408897275, 16.09508918431338,
      16.1126019357959, 16.130117933990679, 16.147637452060074,
      16.165160765682952, 16.182688153054713, 16.200219894887233,
      16.217756274408949, 16.235297577364751, 16.252844092016094,
      16.270396109140904, 16.287953922033669, 16.305517826505319,
      16.323088120883376, 16.340665106011812, 16.358249085251131,
      16.375840364478364, 16.393439252087028, 16.411046058987175,
      16.428661098605357, 16.446284686884635, 16.463917142284608,
      16.481558785781345, 16.499209940867459, 16.51687093355207,
      16.534542092360798, 16.552223748335788, 16.569916235035691,
      16.587619888535666, 16.6053350474274, 16.623062052819069,
      16.640801248335393, 16.65855298011757, 16.676317596823324,
      16.6940954496269, 16.711886892219052, 16.729692280807019,
      16.747511974114605, 16.76534633338207, 16.783195722366234,
      16.801060507340388, 16.818941057094374, 16.836837742934506,
      16.854750938683654, 16.872681020681153, 16.890628367782888,
      16.908593361361245, 16.926576385305118, 16.9445778260199,
      16.962598072427529, 16.980637515966425, 16.99869655059155,
      17.016775572774336, 17.034874981502778, 17.052995178281332,
      17.071136567131006, 17.089299554589303, 17.107484549710236,
      17.125691964064334, 17.143922211738648, 17.162175709336712,
      17.180452875978617, 17.198754133300923, 17.217079905456728,
      17.235430619115636, 17.253806703463749, 17.272208590203711,
      17.290636713554655, 17.309091510252223, 17.327573419548592,
      17.346082883212429, 17.36462034552892, 17.383186253299769,
      17.401781055843191, 17.420405204993909, 17.439059155103148,
      17.457743363038666, 17.476458288184734, 17.495204392442098,
      17.513982140228077, 17.532791998476437, 17.551634436637503,
      17.570509926678088, 17.589418943081537, 17.608361962847681,
      17.627339465492902, 17.646351933050042, 17.665399850068503,
      17.684483703614166, 17.703603983269453, 17.722761181133265,
      17.741955791821049, 17.761188312464736, 17.780459242712794,
      17.799769084730169, 17.819118343198369, 17.838507525315361,
      17.857937140795666, 17.877407701870286, 17.896919723286761,
      17.916473722309131, 17.936070218717944, 17.955709734810259,
      17.975392795399664, 17.995119927816241, 18.0148916617411,
      18.034708525127709, 18.054571037159896, 18.074479706984715,
      18.094435033710411, 18.114437506406436, 18.134487604103445,
      18.154585795793285, 18.174732540428998, 18.194928286924821,
      18.215173474156195, 18.235468530959757, 18.255813876133338,
      18.276209918435974, 18.296657056587886, 18.31715567927051,
      18.33770616512647, 18.358308882759562, 18.378964190734841,
      18.3996724375785, 18.42043396177796, 18.441249091781827,
      18.462118145999909, 18.483041432803223, 18.50401925052396,
      18.525051887455525, 18.546139621852518, 18.567282721930727,
      18.588481445867167, 18.609736041799994, 18.631046747828634,
      18.652413792013643, 18.673837392376821, 18.695317756901133,
      18.716855083530785, 18.738449560171119, 18.76010136468874,
      18.781810664911394, 18.803577618628054, 18.8254023735889,
      18.847285067505279, 18.86922582804976, 18.891224772856095,
      18.913282009519246, 18.935397635595358, 18.957571738601789,
      18.979804396017087, 19.002095675280998, 19.024445633794457,
      19.04685431891961, 19.069321767979794, 19.091848008259547,
      19.114433057004593, 19.137076921421873, 19.159779598679513,
      19.182541075906833, 19.205361330194368, 19.228240328593813,
      19.251178028118122, 19.274174375741374, 19.297229308398904,
      19.320342752987209, 19.343514626364019, 19.366744835348207,
      19.390033276719912, 19.41337983722039, 19.43678439355218,
      19.460246812378955, 19.483766950325624, 19.507344653978244,
      19.530979759884147, 19.554672094551783, 19.578421474450856,
      19.602227706012222, 19.626090585627995, 19.650009899651412,
      19.673985424396975, 19.698016926140326, 19.722104161118363,
      19.746246875529128, 19.770444805531895, 19.794697677247111,
      19.819005206756447, 19.843367100102761, 19.867783053290083,
      19.892252752283682, 19.916775873010003, 19.941352081356687,
      19.965981033172579, 19.990662374267721, 20.015395740413329,
      20.040180757341876, 20.065017040746955, 20.089904196283427,
      20.1148418195673, 20.139829496175803, 20.164866801647364,
      20.189953301481591, 20.215088551139321, 20.240272096042546,
      20.265503471574494, 20.290782203079562, 20.316107805863368,
      20.341479785192707, 20.366897636295594, 20.392360844361207,
      20.417868884539974, 20.443421221943453, 20.469017311644471,
      20.494656598676986, 20.520338518036215, 20.546062494678509,
      20.571827943521487, 20.597634269443894, 20.623480867285728,
      20.649367121848158, 20.675292407893561, 20.701256090145488,
      20.727257523288728, 20.753296051969226, 20.779371010794161,
      20.805481724331873, 20.831627507111943, 20.857807663625103,
      20.884021488323317, 20.910268265619735, 20.936547269888681,
      20.962857765465742, 20.989199006647613, 21.015570237692277,
      21.041970692818825, 21.068399596207634, 21.094856162000195,
      21.121339594299275, 21.147849087168773, 21.174383824633832,
      21.200942980680757, 21.227525719257084, 21.2541311942715,
      21.280758549593962, 21.307406919055538, 21.334075426448571,
      21.36076318552654, 21.387469300004184, 21.414192863557364,
      21.4409329598232, 21.467688662399983, 21.494459034847214,
      21.521243130685573, 21.548039993396966, 21.57484865642445,
      21.601668143172336, 21.628497467006092, 21.655335631252402,
      21.682181629199139, 21.70903444409538, 21.735893049151393,
      21.762756407538649, 21.78962347238981, 21.816493186798745,
      21.843364483820508, 21.870236286471364, 21.897107507728759,
      21.923977050531366, 21.95084380777902, 21.977706662332775,
      22.004564487015674, 22.031416146557245, 22.058260511038505,
      22.085096465239204, 22.111922909145083, 22.138738757947962,
      22.165542942045661, 22.192334407042072, 22.219112113747073,
      22.245875038176653, 22.272622171552744, 22.2993525203034,
      22.326065106062639, 22.352758965670581, 22.37943315117333,
      22.406086729823066, 22.432718784077956, 22.459328411602272,
      22.485914725266237, 22.51247685314619, 22.539013938524452,
      22.565525139889409, 22.592009630935472, 22.618466600563089,
      22.64489525287874, 22.671294807194947, 22.697664498030271,
      22.724003575109304, 22.750311303362675, 22.776586962927038,
      22.802829849145109, 22.82903927256562, 22.855214558943327,
      22.881355049239062, 22.907460099619652, 22.933529081458, 22.959561381333,
      22.985556401029605, 23.011513557538816, 23.037432283057651,
      23.06331202498918, 23.089152245942497, 23.114952423732717,
      23.14071205138103, 23.166430637114612, 23.192107704366745,
      23.217742791776672, 23.243335453189729, 23.268885257657246,
      23.294391789436624, 23.319854647991271, 23.345273447990653,
      23.370647819310246, 23.395977407031594, 23.421261871442262,
      23.446500888035853, 23.471694147511986, 23.496841355776365,
      23.52194223394066, 23.546996518322654, 23.572003960446096,
      23.59696432704083, 23.621877400042685, 23.646742976593568,
      23.671560869041393, 23.696330904940126, 23.721052927049769,
      23.745726793336338, 23.770352376971918, 23.794929566334606,
      23.819458265008549, 23.843938391783926, 23.868369880656942,
      23.89275268082984, 23.917086756710926, 23.941372087914505,
      23.965608669260945, 23.989796510776625, 24.01393563769399,
      24.038026090451485, 24.062067924693633, 24.086061211270955,
      24.110006036240044, 24.133902500863485, 24.157750721609933,
      24.18155083015408, 24.205302973376632, 24.229007313364338,
      24.252664027409992, 24.276273308012428, 24.299835362876493,
      24.3233504149131, 24.346818702239165, 24.370240478177678,
      24.39361601125762, 24.416945585214055, 24.440229498988035,
      24.463468066726708, 24.486661617783188, 24.509810496716696,
      24.532915063292414, 24.555975692481631, 24.578992774461625,
      24.601966714615738, 24.624897933533319, 24.647786867009785,
      24.670633966046562, 24.693439696851129, 24.716204540836987,
      24.738928994623695, 24.761613570036832, 24.784258794108002,
      24.806865209074878, 24.829433372381139, 24.851963856676512,
      24.874457249816761, 24.896914154863676, 24.9193351900851, 24.9417209889549,
      24.964072200152977, 24.98638948756528, 25.008673530283783,
      25.030925022606496, 25.05314467403748, 25.075333209286804,
      25.097491368270614, 25.119619906111041, 25.1417195931363,
      25.163791214880604, 25.185835572084237, 25.207853480693473,
      25.229845771860688, 25.251813291944224, 25.273756902508502,
      25.29567748032397, 25.317575917367112, 25.339453120820433,
      25.361310013072508, 25.38314753171791, 25.404966629557276,
      25.426768274597254, 25.448553450050554, 25.470323154335897,
      25.492078401078082, 25.513820219107874, 25.535549652462159,
      25.55726776038377, 25.57897561732166, 25.600674312930753,
      25.622364952072061, 25.644048654812579, 25.665726556425373,
      25.687399807389543, 25.70906957339022, 25.730737035318562,
      25.752403389271791, 25.774069846553115, 25.795737633671823,
      25.817407992343234, 25.839082179488685, 25.860761467235555,
      25.882447142917275, 25.904140509073287, 25.925842883449086,
      25.947555598996193, 25.969280003872178, 25.991017461440645,
      26.012769350061912, 26.034537052777679, 26.056321931508492,
      26.078125320043174, 26.099948523984423, 26.121792820748688,
      26.143659459566273, 26.165549661481251, 26.187464619351541,
      26.209405497848817, 26.231373433458629, 26.253369534480257,
      26.275394881026873, 26.297450525025376, 26.31953749021655,
      26.341656772154913, 26.363809338208856, 26.385996127560524,
      26.408218051205928, 26.430475991954804, 26.452770804430802,
      26.47510331507128, 26.497474322127474, 26.519884595664394,
      26.542334877560851, 26.564825881509496, 26.58735829301677,
      26.609932769402917, 26.632549939802004, 26.655210405161885,
      26.67791473824424, 26.700663483624545, 26.7234571576921, 26.74629624865,
      26.769181216515147, 26.792112493118253, 26.815090482103848,
      26.838115558930259, 26.86118807086962, 26.884308337007869,
      26.907476648244792, 26.930693267293925, 26.953958428682633,
      26.9772723387521, 27.000635175657326, 27.024047089367087,
      27.047508201664012, 27.07101860614446, 27.094578368218713,
      27.118187525110727, 27.141846085858415, 27.165554031313349,
      27.189311314141026, 27.213117858820667, 27.236973561645364,
      27.260878290721994, 27.284831885971229, 27.308834159127546,
      27.332884893739262, 27.356983845168472, 27.381130740591114,
      27.405325278996866, 27.429567131189309, 27.45385593978574,
      27.478191319217323, 27.502572855729017, 27.527000107379575,
      27.551472604041574, 27.575989847401384, 27.600551310959197,
      27.625156440028995, 27.649804651738602, 27.674495335029619,
      27.699227850657447, 27.724001531191337, 27.748815681014317,
      27.773669576323218, 27.798562465128697, 27.823493567255227,
      27.848462074341054, 27.873467149838262, 27.89850792901272,
      27.923583518944131, 27.948692998526003, 27.973835418465612,
      27.999009801284107, 28.024215141316386, 28.049450404711187,
      28.074714529431056, 28.100006425252317, 28.125324973765153,
      28.150669028373496, 28.176037414295166, 28.201428928561672,
      28.226842340018454, 28.252276389324678, 28.27772978895338,
      28.30320122319133, 28.328689348139175, 28.35419279171132,
      28.379710153636029, 28.4052400054553, 28.430780890525032,
      28.45633132401484, 28.48188979290823, 28.507454756002442,
      28.53302464390859, 28.558597859051538, 28.584172775670009,
      28.609747739816484, 28.635321069357296, 28.660891053972556,
      28.686455955156198, 28.71201400621597, 28.737563412273403,
      28.763102350263861, 28.7886289689365, 28.814141388854306,
      28.839637702394036, 28.865115973746292, 28.890574238915466,
      28.916010505719761, 28.94142275379118, 28.966808934575553,
      28.992166971332498, 29.017494759135452, 29.042790164871661,
      29.068051027242163, 29.093275156761838, 29.11846033575933,
      29.143604318377147, 29.168704830571528, 29.193759570112594,
      29.21876620658422, 29.243722381384153, 29.26862570772386,
      29.293473770628697, 29.318264126937777, 29.342994305304057,
      29.367661806194253, 29.392264101888962, 29.4167986364825,
      29.441262825883086, 29.465654057812664, 29.48996969180703,
      29.514207059215778, 29.538363463202323, 29.562436178743859,
      29.586422452631417, 29.610319503469796, 29.634124521677677,
      29.657834669487475, 29.681447080945446, 29.704958861911642,
      29.72836709005994, 29.751668814878006, 29.774861057667334,
      29.797940811543207, 29.820905041434717, 29.843750684084789,
      29.866474648050126, 29.889073813701252, 29.911545033222495,
      29.933885130612012, 29.956090901681726, 29.978159114057398,
      30.0000865071786, 1.75, 1.7758815661319189, 1.8000531966000666,
      1.8225541981441948, 1.8434235488641506, 1.8626998982198639,
      1.8804215670313533, 1.8966265474787278, 1.9113525031021803,
      1.9246367688019979, 1.9365163508385508, 1.9470279268323007,
      1.956207845763795, 1.9640921279736689, 1.9707164651626496,
      1.9761162203915483, 1.9803264280812658, 1.9833817940127925,
      1.9853166953272048, 1.9861651805256675, 1.9859609694694347,
      1.9847374533798483, 1.9825276948383381, 1.9793644277864226,
      1.9752800575257059, 1.9703066607178843, 1.9644759853847398,
      1.9578194509081421, 1.9503681480300514, 1.9421528388525138,
      1.9332039568376638, 1.9235516068077261, 1.9132255649450094,
      1.9022552787919156, 1.8906698672509323, 1.8784981205846336,
      1.8657685004156845, 1.8525091397268363, 1.838747842860931,
      1.8245120855208956, 1.8098290147697473, 1.7947254490305895,
      1.7792278780866158, 1.7633624630811078, 1.7471550365174342,
      1.7306311022590519, 1.713815835529507, 1.6967340829124316,
      1.6794103623515491, 1.6618688631506684, 1.6441334459736892,
      1.6262276428445948, 1.6081746571474622, 1.5899973636264513,
      1.5717183083858155, 1.5533597088898918, 1.5349434539631079,
      1.5164911037899784, 1.4980238899151062, 1.4795627152431838,
      1.4611281540389884, 1.4427404519273912, 1.4244195258933454,
      1.4061849642818962, 1.3880560267981741, 1.3700516445074011,
      1.3521904198348851, 1.3344906265660228, 1.3169702098462985,
      1.2996467861812853, 1.2825376434366442, 1.2656597408381234,
      1.2490297089715621, 1.2326638497828848, 1.2165781365781043,
      1.2007882140233241, 1.1853093981447327, 1.1701566763286086,
      1.1553447073213188, 1.1408878212293168, 1.1268000195191445,
      1.1130949750174337, 1.0997860319109025, 1.0868862057463589,
      1.074408183430696, 1.062364323230899, 1.0507666547740391,
      1.0396268790472751, 1.0289563683978549, 1.0187661665331147,
      1.0090669885204782, 0.99986922078745755, 0.99118292112165318,
      0.98301781867075333, 0.97538331394253475, 0.96828847880486235,
      0.96174205648568889, 0.95575246157305516, 0.95032778001509122,
      0.94547576912001363, 0.94120385755612812, 0.93751914535182779,
      0.93442840389559567, 0.93193807593600075, 0.93005427558170128,
      0.9287827883014439, 0.92812907092406238, 0.92809825163847992,
      0.92869512999370651, 0.92992417689884133, 0.93178953462307212,
      0.93429501679567317, 0.93744410840600778, 0.94123996580352742,
      0.94568541669777251, 0.95078296015836972, 0.95653476661503523,
      0.962942677857573, 0.97000820703587609, 0.97773253865992393,
      0.98611652859978471, 0.99516070408561652, 1.0048652637076636,
      1.0152300774162579, 1.0262546865218203, 1.037938303694862,
      1.05027981296598, 1.0632777697258582, 1.0769304007252707,
      1.0912356040750808, 1.1061909492462372, 1.1217936770697787,
      1.1380406997368313, 1.1549286007986093, 1.1724536351664152,
      1.1906117291116403, 1.2093984802657629, 1.2288091576203504,
      1.2488387015270574, 1.2694817236976279, 1.2907325072038938,
      1.3125850064777735, 1.3350328473112762, 1.3580693268564967,
      1.3816874136256192, 1.4058797474909155, 1.4306386396847481,
      1.4559560727995629, 1.4818237007878987, 1.5082328489623789,
      1.5351745139957167, 1.5626393639207139, 1.5906177381302591,
      1.6190996473773298, 1.6480747737749932, 1.6775324707963999,
      1.7074617632747937, 1.7378513474035056, 1.7686895907359514,
      1.799964532185639, 1.8316638820261626, 1.863775021891205,
      1.8962850047745352, 1.9291805550300143, 1.9624480683715908,
      1.9960736118732951, 2.0300429239692548, 2.0643414150346788,
      2.0989542421237228, 2.1338665840708457, 2.169063751481632,
      2.2045311889648662, 2.2402544751325437, 2.2762193225998666,
      2.3124115779852477, 2.3488172219102994, 2.3854223689998495,
      2.4222132678819284, 2.4591763011877759, 2.4962979855518412,
      2.5335649716117752, 2.5709640440084409, 2.608482121385908,
      2.6461062563914526, 2.6838236356755609, 2.7216215798919228,
      2.7594875436974373, 2.79740911575221, 2.835374018719556,
      2.8733701092659971, 2.9113853780612633, 2.9494079497782866,
      2.987426083093216, 3.0254281706853972, 3.0634027392373944,
      3.10133844943497, 3.1392240959670974, 3.1770486075259594,
      3.2148010468069419, 3.2524706105086447, 3.2900466293328696,
      3.3275185679846242, 3.3648760251721304, 3.40210873360681,
      3.4392065600032993, 3.4761595050794387, 3.5129577035562782,
      3.5495914241580677, 3.5860510696122732, 3.6223271766495646,
      3.6584104160038189, 3.6942915924121245, 3.7299616446147703,
      3.7654116453552597, 3.8006328013802948, 3.8356164534397945,
      3.8703540762868824, 3.9048372786778871, 3.9390578033723456,
      3.9730075271330003, 4.0066784607258077, 4.040062748919925,
      4.0731526704877217, 4.1059406382047667, 4.1384191988498475,
      4.1705810332049511, 4.2024189560552774, 4.2339259161892278,
      4.2650949963984122, 4.2959194134776544, 4.3263925182249778,
      4.3565077954416171, 4.3862588639320137, 4.41563947650382,
      4.4446435199678866, 4.473265015138284, 4.5014981168322779,
      4.52933711387035, 4.5567764290761854, 4.5838106192766777, 4.61043437530193,
      4.6366425219852472, 4.6624300181631488, 4.6877919566753574,
      4.7127235643648024, 4.7372202020776228, 4.7612773646631652,
      4.784890680973982, 4.8080559138658332, 4.830768960197692,
      4.8530258508317257, 4.8748227506333253, 4.8961559584710743,
      4.9170219072167756, 4.9374171637454314, 4.9573384289352589,
      4.9767825376676722, 4.995746458827302, 5.0142272953019873,
      5.0322222839827644, 5.0497287957638868, 5.06674433554281,
      5.0832665422202012, 5.0992931886999315, 5.1148221818890827,
      5.1298515626979375, 5.1443795060399937, 5.1584043208319521,
      5.1719244499937282, 5.18493847044843, 5.1974450931223881,
      5.2094431629451305, 5.2209316588493992, 5.2319096937711409,
      5.24237651464951, 5.2523315024268662, 5.2617741720487823,
      5.2707041724640309, 5.2791212866246, 5.2870254314856755,
      5.2944166580056624, 5.3012951511461637, 5.3076612298719947,
      5.3135153471511742, 5.3188580899549347, 5.3236901792577092,
      5.3280124700371445, 5.3318259512740855, 5.3351317459526006,
      5.3379311110599472, 5.3402254375866036, 5.3420162505262478,
      5.3433052088757664, 5.3440941056352607, 5.34438486780803,
      5.3441795564005874, 5.3434803664226456, 5.3422896268871369,
      5.3406098008101921, 5.3384434852111493, 5.3357934111125589,
      5.3326624435401753, 5.3290535815229605, 5.3249699580930852,
      5.3204148402859275, 5.3153916291400751, 5.3099038596973154,
      5.3039552010026494, 5.2975494561042868, 5.2906905620536433,
      5.2833825899053393, 5.2756297447172011, 5.2674363655502745,
      5.2588069254687966, 5.2497460315402229, 5.2402584248352131,
      5.2303489804276309, 5.2200227073945538, 5.2092847488162626,
      5.1981403817762493, 5.1865950173612045, 5.17465420066104,
      5.1623236107688628, 5.1496090607809943, 5.1365164977969586,
      5.1230520029194908, 5.1092217912545346, 5.0950322119112332,
      5.0804897480019484, 5.0656010166422414, 5.0503727689508846,
      5.0348118900498564, 5.0189253990643445, 5.0027204491227391,
      4.986204323631851, 4.9693843676438281, 4.9522678891246583,
      4.9348621446740273, 4.9171743395193417, 4.8992116275157436,
      4.8809811111461086, 4.8624898415210405, 4.8437448183788732,
      4.8247529900856705, 4.8055212536352361, 4.7860564546490947,
      4.7663653873765055, 4.7464547946944551, 4.7263313681076724,
      4.7060017477486049, 4.6854725223774381, 4.6647502293820837,
      4.6438413547781883, 4.62275233320913, 4.6014895479460121,
      4.5800593308876758, 4.55846796256069, 4.5367216721193531,
      4.5148266373456982, 4.4927889846494891, 4.4706147890682164,
      4.4483100742671047, 4.4258808125391109, 4.4033329248049204,
      4.3806722806129512, 4.3579046981393494, 4.3350359441879966,
      4.3120717341905035, 4.2890177322062106, 4.265879550922187,
      4.242662751653242, 4.2193728443419056, 4.1960152875584464,
      4.1725954885008587, 4.1491188029948685, 4.1255905354939371,
      4.1020159390792541, 4.0784002154597365, 4.05474851497204,
      4.0310659365805392, 4.0073575278773568, 3.9836282850823341,
      3.9598831530430449, 3.9361270252347969, 3.912364743760627,
      3.8886010993513036, 3.864840831365326, 3.8410886277889253,
      3.8173491252360625, 3.7936269089484291, 3.7699265127954478,
      3.746252419274279, 3.7226090595098014, 3.6990008132546359,
      3.6754320088891261, 3.6519069234213517, 3.6284297824871254,
      3.6050047603499831, 3.5816359799011996, 3.5583275126597753,
      3.5350833787724434, 3.5119075470136707, 3.4888039347856519,
      3.4657764081183124, 3.44282878166931, 3.4199648187240346,
      3.3971882311956052, 3.3745026796248707, 3.3519117731804133,
      3.3294190696585471, 3.3070280754833141, 3.2847422457064868,
      3.2625649840075757, 3.2404996426938126, 3.2185495227001693,
      3.1967178735893422, 3.1750078935517596, 3.1534227294055848,
      3.1319654765967067, 3.1106391791987504, 3.0894468299130673,
      3.0683913700687424, 3.04747568962259, 3.0267026271591613,
      3.0060749698907303, 2.9855954536573055, 2.9652667629266287,
      2.9450915307941683, 2.9250723389831275, 2.9052117178444368,
      2.8855121463567617, 2.8659760521264954, 2.8466058113877657,
      2.8274037490024253, 2.8083721384600668, 2.7895132018780053,
      2.7708291100012925, 2.7523219822027083, 2.7339938864827631,
      2.7158468394697013, 2.6978828064194955, 2.6801037012158515,
      2.6625113863702032, 2.6451076730217173, 2.627894320937294,
      2.61087303851156, 2.5940454827668766, 2.5774132593533317,
      2.5609779225487492, 2.5447409752586809, 2.528703869016411,
      2.5128680039829541, 2.4972347289470553, 2.4818053413251921,
      2.466581087161571, 2.4515631611281323, 2.4367527065245458,
      2.4221508152782105, 2.4077585279442593, 2.3935768337055556,
      2.3796066703726906, 2.3658489243839917, 2.3523044308055141,
      2.338973973331044, 2.3258582842820976, 2.3129580446079268,
      2.30027388388551, 2.2878063803195579, 2.2755560607425114,
      2.2635234006145448, 2.2517088240235612, 2.2401127036851962,
      2.2287353609428129, 2.2175770657675113, 2.2066380367581182,
      2.1959184411411905, 2.1854183947710211, 2.1751379621296287,
      2.1650771563267663, 2.1552359390999154, 2.1456142208142914,
      2.1362118604628382, 2.1270286656662316, 2.1180643926728786,
      2.1093187463589169, 2.1007913802282157, 2.0924818964123739,
      2.0843898456707235, 2.0765147273903257, 2.0688559895859751,
      2.0614130289001928, 2.0541851906032358, 2.0471717685930884,
      2.0403720053954686, 2.0337850921638236, 2.0274101686793324,
      2.0212463233509061, 2.0152925932151837, 2.0095479639365381,
      2.0040113698070723, 1.9986816937546279, 1.9935577723078814,
      1.9886384231934036, 1.9839224613208275, 1.9794086994315769,
      1.9750959480988619, 1.9709830157276822, 1.9670687085548246,
      1.9633518306488651, 1.9598311839101663, 1.9565055680708794,
      1.9533737806949434, 1.950434617178086, 1.9476868707478219,
      1.9451293324634553, 1.9427607912160774, 1.9405800337285675,
      1.9385858445555928, 1.9367770060836089, 1.9351522985308596,
      1.9337104999473766, 1.9324503862149791, 1.9313707310472759,
      1.9304703059896613, 1.9297478804193193, 1.9292022215452223,
      1.9288320944081296, 1.9286362618805895, 1.9286134846669376,
      1.9287625213032988, 1.9290821281575834, 1.9295710594294926,
      1.9302280671505141, 1.9310519011839242, 1.9320413092247872,
      1.9331950367999537, 1.934511827268067, 1.9359904218195532,
      1.9376295594766284, 1.9394279770932981, 1.9413844093553536,
      1.9434975887803763, 1.9457662457177343, 1.9481891083485834,
      1.9507649026858687, 1.9534923525743229, 1.9563701796904669,
      1.9593971035426085, 1.9625718414708446, 1.9658931086470603,
      1.9693596180749291, 1.9729700805899102, 1.9767232048592531,
      1.9806176973819951, 1.9846522624889602, 1.9888256023427626,
      1.9931364169378021, 1.9975834041002687, 2.0021652594881392,
      2.0068806765911784, 2.0117283467309393, 2.0167069590607634,
      2.0218152005657806, 2.0270517560629067, 2.0324153082008483,
      2.0379045374600984, 2.0435181221529382, 2.0492547384234365,
      2.0551130602474523, 2.0610917594326295, 2.0671895056184031,
      2.0734049662759935, 2.0797368067084117, 2.0861836900504533,
      2.0927442772687055, 2.0994172271615423, 2.1062011963591241,
      2.1130948393234026, 2.1200968083481126, 2.1272057535587834,
      2.1344203229127272, 2.141739162199046, 2.1491609150386308,
      2.1566842228841585, 2.1643077250200955, 2.1720300585626955,
      2.1798498584600012, 2.1877657574918432, 2.1957763862698392,
      2.2038803732373959, 2.2120763446697063, 2.2203629246737551,
      2.228738735188311, 2.2372023959839327, 2.2457525246629668,
      2.2543877366595475, 2.2631066452395974, 2.2719078615008281,
      2.2807899943727366, 2.2897516506166111, 2.2987914348255254,
      2.3079079494243433, 2.3170997946697134, 2.3263655686500773,
      2.33570386728566, 2.3451132843284763, 2.3545924113623298,
      2.3641398378028122, 2.3737541508973008, 2.3834339357249634,
      2.3931777751967558, 2.40298425005542, 2.4128519388754888, 2.42277941806328,
      2.4327652618569013, 2.4428080423262477, 2.4529063293730018,
      2.4630586907306373, 2.4732636919644122, 2.4835198964713729,
      2.4938258654803578, 2.5041801580519865, 2.5145813310786731,
      2.5250279392846178, 2.5355185352258056, 2.5460516692900161,
      2.556625889696809, 2.5672397424975384, 2.5778917715753433,
      2.5885805186451512, 2.5993045232536787, 2.6100623227794295,
      2.6208524524326955, 2.6316734452555566, 2.6425238321218805,
      2.6534021417373252, 2.6643069006393314, 2.6752366331971342,
      2.6861898616117528, 2.6971651059159942, 2.7081608839744575,
      2.719175711483524, 2.7302081019713675, 2.7412565667979489,
      2.7523196151550153, 2.7633957540661043, 2.7744834883865397,
      2.7855813208034337, 2.7966877518356883, 2.80780127983399,
      2.8189204009808178, 2.8300436092904344, 2.841169396608894,
      2.8522962526140367, 2.863422664815491, 2.8745471185546743,
      2.8856680970047925, 2.8967840811708361, 2.9078935498895877,
      2.9189949798296153, 2.9300868454912758, 2.9411676192067162,
      2.9522357711398675, 2.9632897692864524, 2.9743280794739788,
      2.985349165361745, 2.996351488440836, 3.0073335082179744,
      3.0182936884782818, 3.02923051028231, 3.0401424748505468,
      3.0510281035749021, 3.0618859380187113, 3.0727145399167317,
      3.0835124911751506, 3.0942783938715759, 3.1050108702550414,
      3.1157085627460073, 3.1263701339363545, 3.1369942665893924,
      3.1475796636398532, 3.1581250481938938, 3.1686291635290953,
      3.1790907730944657, 3.1895086605104361, 3.1998816295688632,
      3.2102085042330235, 3.2204881286376281, 3.230719367088803,
      3.2409011040641031, 3.2510322442125106, 3.2611117123544262,
      3.2711384534816803, 3.2811114327575264, 3.2910296355166433,
      3.3008920672651305, 3.3106977536805182, 3.3204457406117571,
      3.3301350940792256, 3.3397649002747225, 3.3493342655614762,
      3.3588423164741363, 3.368288199718779, 3.3776710821729043,
      3.3869901508854365, 3.3962446130767252, 3.4054336961385454,
      3.4145566476340958, 3.4236127352979988, 3.4326012470363048,
      3.4415214909264842, 3.4503727952174348, 3.45915450832948,
      3.4678659988543665, 3.4765066555552666, 3.4850758873667771,
      3.4935731233949152, 3.501997812917129, 3.51034942538229,
      3.5186274504106905, 3.5268313977940524, 3.5349607974955193,
      3.54301519964966, 3.5509941745624687, 3.558897312711363,
      3.5667242247451862, 3.5744745414842072, 3.5821479139201178,
      3.589744013216035, 3.5972625307065, 3.6047031778974783, 3.6120656864663632,
      3.61934980826197, 3.62655531530454, 3.6336819997857357, 3.6407296740686483,
      3.6476981706877929, 3.65458734234911, 3.66139706192996, 3.6681272224791339,
      3.6747777372168451, 3.6813485395347287, 3.6878395829958497,
      3.6942508413346964, 3.7005823084571783, 3.7068339984406324,
      3.7130059455338218, 3.7190982041569312, 3.7251108489015707,
      3.7310439745307762, 3.7368976959790086, 3.7426721483521512,
      3.7483674869275148, 3.753983887153832, 3.7595215446512618,
      3.764980675211389, 3.7703615147972203, 3.7756643195431883,
      3.7808893657551517, 3.7860369499103923, 3.7911073886576152,
      3.7961010188169539, 3.8010181973799644, 3.8058593015096256,
      3.8106247285403452, 3.8153148959779517, 3.8199302414997014,
      3.8244712229542723, 3.828938318361772, 3.8333320259137249,
      3.8376528639730871, 3.8419013710742371, 3.8460781059229761,
      3.8501836473965336, 3.8542185945435605, 3.858183566584136,
      3.862079202909757, 3.8659061630833547, 3.8696651268392785,
      3.8733567940833038, 3.8769818848926305, 3.8805411395158842,
      3.8840353183731158, 3.8874652020557967, 3.8908315913268283,
      3.8941353071205342, 3.8973771905426622, 3.9005581028703866,
      3.9036789255523026, 3.9067405602084353, 3.9097439286302307,
      3.9126899727805595, 3.9155796547937216, 3.9184139569754359,
      3.9211938818028464, 3.9239204519245261, 3.92659471016047,
      3.9292177195020983, 3.9317905631122549, 3.9343143443252075,
      3.9367901866466553, 3.9392192337537111, 3.9416026494949197,
      3.9439416178902498, 3.9462373431310946, 3.94849104958027, 3.95070398177202,
      3.9528774044120083, 3.9550126023773298, 3.9571108807164972,
      3.9591735646494524, 3.9612019995675625, 3.9631975510336153,
      3.9651616047818252, 3.9670955667178345, 3.9690008629187052,
      3.9708789396329256, 3.9727312632804117, 3.9745593204524985,
      3.97636461791195, 3.9781486825929546, 3.9799130616011231,
      3.9816593222134942, 3.983389051878528, 3.98510385821611, 3.986805369017552,
      3.9884952322455898, 3.9901751160343837, 3.9918467086895184,
      3.9935117186880027, 3.9951718746782716, 3.9968289254801843,
      3.9984846400850254, 4.0001408076554146, 4.00179923510598,
      4.0034617261055478, 4.0051300635689513, 4.006806008416441,
      4.0084912995736754, 4.01018765397173, 4.0118967665470926,
      4.0136203102416657, 4.0153599360027634, 4.0171172727831168,
      4.0188939275408666, 4.0206914852395688, 4.0225115088481935,
      4.0243555393411254, 4.0262250956981589, 4.0281216749045061,
      4.030046751950791, 4.03200177983305, 4.033988189552737, 4.0360073901167128,
      4.0380607685372576, 4.0401496898320657, 4.0422754970242387,
      4.0444395111422979, 4.0466430312201762, 4.0488873342972189,
      4.0511736754181875, 4.0535032876332533, 4.0558773819980036,
      4.058297147573442, 4.060763751425978, 4.0632783386274456,
      4.0658420322550795, 4.0684559333915375, 4.07112112112489,
      4.0738386525486154, 4.0766095627616128, 4.07943486486819,
      4.0823155499780706, 4.085252587206389, 4.0882469236736974,
      4.0912994845059591, 4.0944111728345511, 4.0975828697962644,
      4.1008154345333017, 4.1041097041932835, 4.1074664939292393,
      4.1108865968996158, 4.1143707842682717, 4.1179198052044788,
      4.1215343868829208, 4.1252152344837016, 4.12896303119233,
      4.132778438199737, 4.1366620947022605, 4.1406146179016527,
      4.1446366030050825, 4.1487286232251313, 4.1528912297797946,
      4.1571249518924791, 4.1614302967920045, 4.16580774971261,
      4.1702577738939439, 4.1747808105810655, 4.1793772790244539,
      4.1840475764799994, 4.1887920782090013, 4.1936111374781806,
      4.1985050855596651, 4.2034742317310014, 4.2085188632751427,
      4.213639245480465, 4.21883562164075, 4.2241082130551977,
      4.2294572190284185, 4.2348828168704387, 4.2403851618966977,
      4.2459643874280486, 4.2516206047907552, 4.2573539033164991,
      4.2631643503423753, 4.2690519912108877, 4.2750168492699592,
      4.281058925872923, 4.287178200378527, 4.2933746301509323,
      4.2996481505597144, 4.305998674979862, 4.3124260947917747,
      4.3189302793812718, 4.3255110761395814, 4.3321683104633459,
      4.3389017857546213, 4.3457112834208784, 4.3525965628749992,
      4.3595573615352832, 4.3665933948254407, 4.3737043561745956,
      4.3808899170172833, 4.38814972679346, 4.3954834129484874,
      4.402890580933148, 4.4103708142036284, 4.4179236742215391,
      4.4255487004538976, 4.4332454103731367, 4.4410132994571043,
      4.448851841189061, 4.456760487057676, 4.4647386665570439, 4.47278578718666,
      4.4809012344514416, 4.4890843718617166, 4.4973345409332239,
      4.505651061187125, 4.5140332301499813, 4.5224803233537809,
      4.5309915943359167, 4.5395662746392, 4.5482035738118514,
      4.5569026794075107, 4.5656627569852262, 4.5744829501094646,
      4.5833623803501027, 4.5923001472824279, 4.601295328487149,
      4.6103469795503829, 4.6194541340636626, 4.6286158036239309,
      4.6378309778335494, 4.6470986243002885, 4.6564176886373385,
      4.665787094463294, 4.6752057434021728, 4.6846725150833981,
      4.6941862671418129, 4.7037458352176715, 4.7133500329566411,
      4.7229976520098038, 4.7326874620336516, 4.7424182106900963,
      4.7521886236464557, 4.76199740457547, 4.7718432351552869,
      4.7817247750694705, 4.7916406620069942, 4.8015895116622493,
      4.8115699177350386, 4.8215804519305827, 4.8316196639595095,
      4.841686081537862, 4.8517782103871028, 4.8618945342340982,
      4.8720335148111369, 4.8821935918559154, 4.8923731831115465,
      4.9025706843265571, 4.9127844692548859, 4.9230128896558858,
      4.933254275294324, 4.9435069339403777, 4.9537691513696451,
      4.9640391913631312, 4.9743152957072558, 4.9845956841938586,
      4.99487855462018, 5.0051620829040084, 5.0154444318338749,
      5.0257237775512165, 5.035998318301381, 5.04626627454881,
      5.0565258889770162, 5.0667754264886034, 5.0770131742052511,
      5.0872374414677219, 5.0974465598358609, 5.1076388830885939,
      5.117812787223925, 5.1279666704589459, 5.13809895322983,
      5.1482080781918267, 5.1582925102192672, 5.16835073640557, 5.17838126606323,
      5.18838263072383, 5.1983533841380254, 5.2082921022755624,
      5.2181973833252613, 5.2280678476950291, 5.2379021380118491,
      5.2476989191217944, 5.25745687809001, 5.26717472420073, 5.2768511889572682,
      5.2864850260820173, 5.2960750115164545, 5.3056199434211386,
      5.3151186421757064, 5.32456995037888, 5.3339727328484612,
      5.3433258766213392, 5.3526282909534739, 5.3618789073199151,
      5.3710766794147915, 5.3802205831513144, 5.3893096166617731,
      5.3983428002975451, 5.407319176629084, 5.4162378104459279,
      5.4250977887566938, 5.4338982207890849, 5.4426382379898772,
      5.4513169940249409, 5.4599336647792169, 5.4684874483567345,
      5.4769775650806007, 5.4854032574930018, 5.4937637903552128,
      5.5020584506475885, 5.5102865475695593, 5.5184474125396452,
      5.5265403991954409, 5.53456488339363, 5.5425202632099682,
      5.5504059589393018, 5.5582214130955512, 5.5659660904117265,
      5.5736394778399143, 5.5812410845512819, 5.58877044193608,
      5.596227103603642, 5.6036106453823828, 5.6109206653197941,
      5.6181567836824566, 5.6253186429560271, 5.6324059078452473,
      5.6394182652739362, 5.6463554243849989, 5.6532171165404206,
      5.6600030953212688, 5.6667131365276893, 5.6733470381789131,
      5.6799046205132537, 5.6863857259881012, 5.6927902192799307,
      5.699117987284299, 5.7053689391158446, 5.7115430061082835,
      5.7176401418144209, 5.7236603220061379, 5.7296035446744007,
      5.73546983002925, 5.7412592204998179, 5.7469717807343121, 5.75260759760002,
      5.758166780183319, 5.7636494597896606, 5.76905578994358,
      5.7743859463886942, 5.7796401270877009, 5.7848185522223829,
      5.7899214641936014, 5.7949491276212957, 5.7999018293444973,
      5.8047798784213072, 5.8095836061289186, 5.8143133659635966,
      5.8189695336406944, 5.8235525070946483, 5.8280627064789661,
      5.8325005741662483, 5.8368665747481732, 5.8411611950355011,
      5.8453849440580674, 5.8495383530647995, 5.8536219755237013,
      5.8576363871218584, 5.8615821857654362, 5.8654599915796846,
      5.8692704469089367, 5.8730142163166024, 5.8766919865851746,
      5.88030446671623, 5.8838523879304274, 5.8873365036675018,
      5.8907575895862738, 5.894116443564652, 5.897413885699609,
      5.9006507583072159, 5.9038279259226183, 5.906946275300049,
      5.9100067154128082, 5.9130101774532946, 5.9159576148329789,
      5.9188500031824152, 5.9216883403512437, 5.9244736464081749,
      5.9272069636410132, 5.92988935655664, 5.9325219118810164,
      5.9351057385591863, 5.9376419677552752, 5.9401317528524924,
      5.9425762694531246, 5.9449767153785427, 5.947334310669202,
      5.9496502975846326, 5.9519259406034539, 5.9541625264233566,
      5.9563613639611264, 5.9585237843526171, 5.960651140952776,
      5.9627448093356223, 5.964806187294263, 5.9668366948408833,
      5.9688377742067544, 5.970810889842225, 5.9727575284167225,
      5.974679198818766, 5.9765774321559455, 5.978453781754939,
      5.9803098231615035, 5.9821471541404811, 5.9839673946757905,
      5.9857721869704328, 5.9875631954464943, 5.9893421067451404,
      5.99111062972662, 5.9928704954702594, 5.9946234572744705,
      5.9963712906567457, 5.9981157933536577, 5.999858785320864,
      6.0016021074136052, 6.0033476027626635, 6.0050970944363735,
      6.0068523828665761, 6.008615245848536, 6.0103874385409295,
      6.0121706934658619, 6.0139667205088463, 6.01577720691882, 6.01760381730814,
      6.01944819365258, 6.02131195529133, 6.0231966989270092, 6.0251039986256449,
      6.0270354058166822, 6.0289924492929972, 6.0309766352108714,
      6.0329894470900163, 6.0350323458135495, 6.0371067696280187,
      6.0392141341433865, 6.0413558323330347, 6.0435332345337605,
      6.0457476884457844, 6.0480005191327448, 6.0502930290216943,
      6.0526264979031152, 6.0550021829308962, 6.0574213186223487,
      6.0598851168582106, 6.062394766882627, 6.0649514353031666,
      6.0675562660908211, 6.0702103805799963, 6.0729148774685155,
      6.0756708328176252, 6.0784793000519892, 6.0813413099596856,
      6.08425787069222, 6.08722996776451, 6.0902585640548939, 6.09334459980513,
      6.0964889926203911, 6.0996926374692748, 6.1029564066837922,
      6.1062811499593828, 6.1096676943548882, 6.1131168442925841,
      6.1166293815581589, 6.1202060653007173, 6.1238476320327875,
      6.1275547956303145, 6.1313282473326636, 6.1351686557426159,
      6.1390766668263765, 6.1430529039135591, 6.14709796769721,
      6.1512124362337826, 6.1553968649431541, 6.1596517866086211,
      6.1639777113769, 6.16837512675812, 6.1728444976258352, 6.1773862662170167,
      6.1820008521320533, 6.1866886523347535, 6.1914500411523452,
      6.1962853702754739, 6.2011949687582044, 6.2061791430180193,
      6.2112381768358231, 6.2163723313559354, 6.2215818450860958,
      6.2268669338974663, 6.2322277910246209, 6.2376645870655585,
      6.2431774699816884, 6.2487665650978537, 6.2544319751023005,
      6.2601737800467037, 6.2659920373461526, 6.2718867817791555,
      6.2778580254876433, 6.28390575797696, 6.2900299461158706,
      6.2962305341365612, 6.3025074436346351, 6.3088605735691132,
      6.3152898002624358, 6.3217949774004634, 6.3283759360324776,
      6.3350324845711716, 6.3417644087926615, 6.3485714718364843,
      6.3554534142055887, 6.3624099537663561, 6.3694407857485684,
      6.3765455827454387, 6.3837239947135975, 6.390975648973094,
      6.39830015020739, 6.4056970804633711, 6.4131659991513441,
      6.4207064430450327, 6.4283179262815722, 6.4359999403615307,
      6.4437519541488815, 6.4515734138710261, 6.4594637431187794,
      6.4674223428463771, 6.4754485913714754, 6.4835418443751456,
      6.4917014349018807, 6.4999266733595906, 6.5082168475196047,
      6.5165712225166734, 6.5249890408489621, 6.5334695223780583,
      6.5420118643289644, 6.5506152412901058, 6.5592788052133244,
      6.5680016854138792, 6.5767829885704554, 6.5856217987251462,
      6.5945171772834756, 6.6034681630143721, 6.6124737720501976,
      6.6215329978867219, 6.6306448113831387, 6.6398081607620618,
      6.64902197160952, 6.6582851468749631, 6.6675965668712571,
      6.6769550892746894, 6.6863595491249672, 6.6958087588252129,
      6.7053015081419733, 6.7148365642052052, 6.7244126715082935,
      6.7340285519080361, 6.7436829046246505, 6.7533744062417762,
      6.7631017107064677, 6.7728634493291988, 6.7826582307838681,
      6.7924846411077837, 6.8023412437016724, 6.8122265793296943,
      6.822139166119408, 6.8320774995618105, 6.8420400525113, 6.85202527518571,
      6.8620315951662736, 6.8720574173976674, 6.88210112418796,
      6.8921610752086595, 6.9022356074946831, 6.9123230354443681,
      6.9224216508194685, 6.9325297227451683, 6.9426454977100542,
      6.9527671995661411, 6.9628930295288622, 6.9730211661770687,
      6.9831497654530281, 6.9932769606624294, 7.0034008624996922,
      7.0135195654023912, 7.0236311761860559, 7.0337338278433714,
      7.0438256799493164, 7.0539049186611882, 7.063969756718584,
      7.0740184334434115, 7.08404921473988, 7.094060393094507,
      7.1040502875761211, 7.1140172438358595, 7.1239596341071447,
      7.13387585720574, 7.1437643385296807, 7.1536235300593365,
      7.1634519103573666, 7.1732479845687447, 7.183010284420746,
      7.1927373682229607, 7.2024278208672712, 7.2120802538278843,
      7.2216933051612937, 7.2312656395063222, 7.2407959480840738,
      7.2502829486979845, 7.2597253857337769, 7.269122030159493,
      7.2784716795254711, 7.2877731579643665, 7.29702531619113,
      7.3062270315030311, 7.3153772077796324, 7.3244747754828206,
      7.33351869165677, 7.3425079399279713, 7.3514415305052241,
      7.3603185001796279, 7.369137912324593, 7.3778988568958335,
      7.3866004504313763, 7.3952418360515457, 7.40382218345898,
      7.4123406889386212, 7.4207965753577145, 7.429189092165819,
      7.4375175153947941, 7.4457811476588089, 7.4539793181543388,
      7.4621113826601668, 7.4701767235373762, 7.4781747497293676,
      7.4861048967618373, 7.4939666267427967, 7.5017594283625559,
      7.5094828168937395, 7.5171363341912718, 7.5247195486923921,
      7.5322320554166335, 7.5396734759658495, 7.5470434585241879,
      7.55434167785812, 7.5615678353163993, 7.5687216588301087,
      7.5758029029126233, 7.582811348659634, 7.5897468037491267,
      7.5966091024414091, 7.6033981055790809, 7.6101137005870605,
      7.6167558014725625, 7.62332434882512, 7.6298193098165541,
      7.636240678201017, 7.6425884743149419, 7.6488627450770936,
      7.65506356398852, 7.661191031132593, 7.6672452731749816,
      7.6732264433636663, 7.6791347215289329, 7.6849703140833689,
      7.6907334540218741, 7.6964244009216563, 7.7020434409422256,
      7.7075908868253968, 7.7130670778953005, 7.7184723800583619,
      7.723807185803321, 7.7290719142012243, 7.7342670109054161,
      7.73939294815156, 7.74445022475762, 7.7494393661238625, 7.7543609242328664,
      7.7592154776495175, 7.7640036315210041, 7.7687260175768227,
      7.7733832941287737, 7.7779761460709755, 7.7825052848798357,
      7.786971448614084, 7.7913754019147428, 7.7957179360051576,
      7.7999998686909615, 7.8042220443601131, 7.80838533398286,
      7.812490635111768, 7.8165388718817095, 7.8205309950098565,
      7.8244679817956895, 7.8283508361210039, 7.8321805884498845,
      7.8359582958287444, 7.839685041886284, 7.8433619368335243,
      7.8469901174637817, 7.8505707471526893, 7.8541050158581776,
      7.8575941401204892, 7.8610393630621722, 7.8644419543880826,
      7.8678032103853761, 7.871124453923529, 7.8744070344543085,
      7.8776523280117949, 7.88086173721238, 7.8840366912547548,
      7.8871786459199216, 7.8902890835711883, 7.8933695131541626,
      7.8964214701967705, 7.8994465168092356, 7.9024462416840944,
      7.9054222600961825, 7.9083762139026481, 7.911309771542947,
      7.9142246280388342, 7.9171225049943761, 7.9200051505959506,
      7.92287433961223, 7.9257318733942084, 7.928579579875171,
      7.9314193135707187, 7.9342529555787582, 7.9370824135794988,
      7.9399096218354615, 7.9427365411914748, 7.9455651590746639,
      7.9483974894944707, 7.9512355730426405, 7.9540814768932213,
      7.9569372948025761, 7.9598051471093685, 7.9626871807345676,
      7.9655855691814512, 7.968502512535605, 7.9714402374649183,
      7.9744009972195915, 7.9773870716321262, 7.9804007671173345,
      7.98344441667233, 7.9865203798765441, 7.9896310428916992,
      7.9927788184618365, 7.9959661459132976, 7.9991954911547332,
      8.0024693458726048, 8.0057902077046812, 8.009160546008248,
      8.0125827957006948, 8.016059357249576, 8.0195925966726129,
      8.0231848455376937, 8.026838400962875, 8.0305555256163714,
      8.0343384477165714, 8.0381893610320283, 8.0421104248814483,
      8.0461037641337274, 8.0501714692079069, 8.0543155960732058, 8.058538166249,
      8.0628411668048425, 8.0672265503604379, 8.0716962350856729,
      8.0762521047005844, 8.0808960084753885, 8.0856297612304573,
      8.0904551433363334, 8.0953739007137262, 8.1003877448335082,
      8.10549835271672, 8.1107073669345677, 8.1160163956084173,
      8.121427012409816, 8.1269407565604563, 8.13255913283222, 8.13828361154713,
      8.1441156285773939, 8.1500565853453733, 8.156107848823611,
      8.1622707515347948, 8.168546591551797, 8.1749366324976425,
      8.1814421035455318, 8.1880641994188252, 8.19480408039105,
      8.2016628722859011, 8.20864166647724, 8.2157415198890931,
      8.2229634549956465, 8.2303084598212628, 8.2377774879404679,
      8.2453714584779476, 8.2530912561085579, 8.260937731057318,
      8.2689116990994211, 8.2770139415602113, 8.285245205315217,
      8.2936062027901141, 8.3020976119607628, 8.3107200763531726,
      8.31947420504353, 8.32836057265818, 8.3373797193736454, 8.3465321509165928,
      8.35581833856388, 8.36523871914251, 8.3747936950296733, 8.3844836341527,
      8.3943088699891124, 8.40426970156657, 8.4143663934629345,
      8.4245991758061969, 8.4349682442745433, 8.4454737600962986,
      8.4561158500499829, 8.4668946064642583, 8.477810087217966, 8.4888623157401,
      8.5000512810098456, 8.5113769375565216, 8.52283920545964,
      8.5344379703488578, 8.5461730834040175, 8.5580443613551083,
      8.5700515864822986, 8.5821945066159167, 8.594472835136461,
      8.6068862509745934, 8.619434398611137, 8.6321168880770944,
      8.6449332949536188, 8.6578831603720339, 8.670965991013837,
      8.6841812591106837, 8.6975284024443926, 8.7110068243469616,
      8.7246158937005323, 8.7383549449374449, 8.7522232780401659,
      8.76622015854136, 8.7803448175238437, 8.7945964516206026,
      8.8089742230147845, 8.8234772594397057, 8.8381046541788546,
      8.8528554660658667, 8.8677287194845711, 8.8827234043689334,
      8.8978384762031126, 8.9130728560214081, 8.92842543040831,
      8.9438950514984477, 8.9594805369766473, 8.9751806700778669,
      8.9909941995872646, 9.006919839840128, 9.0229562707219539,
      9.0391021376683582, 9.0553560516651643, 9.07171658924833,
      9.0881822925040012, 9.1047516690684684, 9.1214231921282156,
      9.1381953004198611, 9.1550663982302218, 9.1720348553962481,
      9.1890990073050833, 9.2062571548940237, 9.2235075646505251,
      9.2408484686122279, 9.258278064366916, 9.2757945150525671,
      9.29339594935729, 9.3110804615193974, 9.3288461113273282,
      9.3466909241197271, 9.3646128907853647, 9.3826099677632229,
      9.4006800770424, 9.4188211061622038, 9.4370309082120762,
      9.4553073018316489, 9.4736480712106879, 9.4920509660891756,
      9.510513701757203, 9.5290339590550737, 9.547609384373219,
      9.5662375896522818, 9.5849161523830162, 9.6036426156063843,
      9.6224144879134954, 9.6412292434456326, 9.6600843218942369,
      9.678977128500927, 9.6979050340574684, 9.7168653749058151,
      9.7358554529380736, 9.7548725355965153, 9.7739138558735839,
      9.792976612311886, 9.8120579690041936, 9.8311550555934453,
      9.8502649672727465, 9.86938476478537, 9.888511474424746, 9.90764208803448,
      9.92677356300834, 9.945902822290261, 9.9650267543743425,
      9.9841422133048514, 10.003246018678819, 10.02233496190717,
      10.041405849507742, 10.060455533203157, 10.079480911554395,
      10.098478929960862, 10.117446580660332, 10.136380902728995,
      10.155278982081407, 10.174137951470563, 10.192954990487793,
      10.211727325562883, 10.230452229963959, 10.249127023797593,
      10.267749074008696, 10.286315794380634, 10.304824645535103,
      10.323273134932252, 10.341658816870577, 10.35997929248701,
      10.378232209756845, 10.396415263493781, 10.41452619534992,
      10.432562793815743, 10.450522894220139, 10.468404378730385,
      10.486205176352151, 10.503923262929504, 10.52155666114491,
      10.539103440519215, 10.556561717411677, 10.573929655019933,
      10.591205463380025, 10.608387399366389, 10.625473766691844,
      10.642462915907618, 10.659353244403324, 10.676143196406967,
      10.69283126298496, 10.709415982042097, 10.725895938321576,
      10.74226976340498, 10.758536135712289, 10.774693780501886,
      10.790741469870525, 10.806678022753395, 10.822502304924036,
      10.838213228994416, 10.853809754414868, 10.869290887474151,
      10.884655681299385, 10.899903235856115, 10.915032697948252,
      10.930043261218131, 10.944934166146451, 10.95970470005234,
      10.974354197093277, 10.988882038265182, 11.003287651402326,
      11.017570511177412, 11.031730139101509, 11.045766103524098,
      11.059678019633042, 11.073465549454612, 11.087128401853457,
      11.100666332532636, 11.114079144033592, 11.127366685736167,
      11.140528853858594, 11.153565591457502, 11.166476888427921,
      11.179262781503263, 11.191923354255344, 11.204458737094363,
      11.216869107268934, 11.229154688866043, 11.241315752811083,
      11.253352616867838, 11.265265645638488, 11.277055250563603,
      11.288721889922153, 11.300266068831498, 11.311688339247397,
      11.322989299963997, 11.334169596613842, 11.345229921667878,
      11.356171014435429, 11.36699366106423, 11.377698694540397,
      11.388286994688453, 11.398759488171304, 11.409117148490264,
      11.419360995985018, 11.429492097833673, 11.439511568052707,
      11.449420567497016, 11.45922030385986, 11.468912031672929,
      11.47849705230627, 11.487976713968363, 11.497352411706041,
      11.506625587404569, 11.515797729787582, 11.524870374417127,
      11.53384510369362, 11.542723546855907, 11.55150737998119,
      11.560198325985096, 11.568798154621629, 11.577308682483194,
      11.585731773000591, 11.594069336443004, 11.602323329918034,
      11.610495757371654, 11.618588669588235, 11.626604164190557,
      11.634544385639776, 11.642411525235449, 11.65020782111554,
      11.657935558256389, 11.665597068472735, 11.673194730417721,
      11.68073096958287, 11.688208258298109, 11.69562911573176,
      11.70299610789054, 11.710311847619543, 11.717578994602286,
      11.724800255360654, 11.731978383254946, 11.739116178483837,
      11.746216488084421, 11.753282205932162, 11.76031627274093,
      11.767321676062986, 11.774301450288993, 11.781258676647994,
      11.788196483207443, 11.795118044873172, 11.802026583389424,
      11.808925367338817, 11.815817712142387, 11.822706980059539,
      11.829596580188092, 11.83648996846425, 11.843390647662618,
      11.85030216739618, 11.857228124116336, 11.864172161112865,
      11.871137968513951, 11.878129283286157, 11.885149889234452,
      11.892203617002197, 11.899294344071153, 11.906425994761463,
      11.913602540231679, 11.92082799847873, 11.928106434337952,
      11.935441959483072, 11.942838732426214, 11.950300958517893,
      11.957832889947023, 11.965438825740902, 11.973123111765229,
      11.9808901407241, 11.98874435216, 11.996690232453819, 12.00473231411409,
      12.012875140747564, 12.02112317943801, 12.029480796939561,
      12.0379522594916, 12.046541732818755, 12.055253282130915,
      12.064090872123192, 12.073058366975969, 12.082159530354851,
      12.091398025410721, 12.100777414779676, 12.11030116058309,
      12.119972624427552, 12.129795067404945, 12.139771650092348,
      12.149905432552115, 12.160199374331842, 12.170656334464386,
      12.181279071467808, 12.192070243345473, 12.203032407585951,
      12.214168021163079, 12.225479440535937, 12.236968921648842,
      12.24863861993137, 12.26049059029835, 12.272526787149841,
      12.284749064371161, 12.297159175332871, 12.309758772890776,
      12.322549409385932, 12.335532536644648, 12.348709505978469,
      12.362081568184191, 12.375649873543864, 12.389415471824771,
      12.403379312279455, 12.417542243645702, 12.431905014146544,
      12.44646827149027, 12.461232562870387, 12.476198334965682,
      12.491365933940175, 12.506735605443135, 12.52230749460907,
      12.53808164605776, 12.554058003894186, 12.570236411708642,
      12.58661661257659, 12.603198249058821, 12.6199808632013, 12.6369638965353,
      12.65414669007729, 12.671528484329027, 12.689108419277487,
      12.706885534394914, 12.724858768638772, 12.743026960451806,
      12.761388847761976, 12.779943067982526, 12.798688158011899,
      12.817622554233836, 12.836744592517277, 12.856052508216454,
      12.875544436170811, 12.895218410705063, 12.915072365629154,
      12.935104134238285, 12.955311449312905, 12.975691943118703,
      12.996243147406624, 13.016962493412855, 13.037847311858826,
      13.058894832951228, 13.08010218638198, 13.101466401328267,
      13.122984406452504, 13.144653029902372, 13.16646899931078,
      13.188428941795898, 13.210529383961131, 13.23276675189514,
      13.255137371171838, 13.277637466850368, 13.300263163475144,
      13.3230104850758, 13.345875355167236, 13.368853596749597,
      13.391940932308259, 13.415132983813876, 13.438425272722311,
      13.461813219974724, 13.485292145997452, 13.508857270702155,
      13.532503713485678, 13.556226493230168, 13.580020528302963,
      13.603880636556696, 13.62780153532921, 13.65177784144363,
      13.67580407120829, 13.699874640416816, 13.723983864348028,
      13.74812595776605, 13.7722950349202, 13.796485109545094,
      13.820690094860542, 13.844903803571647, 13.869119947868734,
      13.893332139427379, 13.917533889408409, 13.941718608457897,
      13.965879606707162, 13.990010093772772, 14.014103178756544,
      14.038151870245532, 14.06214907631205, 14.086087604513651,
      14.10996016189314, 14.133759354978563, 14.157477689783217,
      14.181107571805647, 14.204641306029647, 14.228071096924253,
      14.251389048443745, 14.274587164027665, 14.297657346600781,
      14.320591398573129, 14.343381021839978, 14.366017817781859,
      14.388493287264518, 14.410798830638996, 14.432925747741528,
      14.454865237893653, 14.476608399902098, 14.498146232058891,
      14.519469632141265, 14.540569397411733, 14.561436224618021,
      14.582060709993147, 14.602433349255318, 14.622544537608054,
      14.642384569740063, 14.661943639825342, 14.6812118415231,
      14.700179167977836, 14.71883551181925, 14.737170665162326,
      14.75517431960726, 14.772836066239547, 14.790145395629871,
      14.807091697834206, 14.82366426239374, 14.839852278334938,
      14.855644834169491, 14.871030917894352, 14.885999416991712,
      14.900539118429005, 14.914638708658927, 14.928286773619408,
      14.94147179873363, 14.954182168910021, 14.966406168542266,
      14.978131981509271, 14.989347691175217, 15.000041280389521,
      0.3203008836160981, 0.32744546465648672, 0.33442754238870065,
      0.34124844344244459, 0.34790949444742469, 0.3544120220333461,
      0.36075735282991428, 0.36694681346683472, 0.37298173057381273,
      0.37886343078055407, 0.38459324071676387, 0.39017248701214791,
      0.39560249629641137, 0.40088459519925979, 0.4060201103503987,
      0.41101036837953348, 0.41585669591636953, 0.42056041959061258,
      0.42512286603196775, 0.42954536187014075, 0.43382923373483689,
      0.43797580825576155, 0.44198641206262035, 0.44586237178511884,
      0.4496050140529621, 0.4532156654958559, 0.45669565274350565,
      0.46004630242561667, 0.46326894117189465, 0.46636489561204481,
      0.46933549237577271, 0.47218205809278385, 0.47490591939278354,
      0.47750840290547741, 0.47999083526057096, 0.48235454308776932,
      0.48460085301677824, 0.48673109167730289, 0.48874658569904911,
      0.49064866171172217, 0.49243864634502754, 0.49411786622867054,
      0.49568764799235687, 0.49714931826579162, 0.49850420367868076,
      0.49975363086072944, 0.50089892644164313, 0.50194141705112716,
      0.502882429318887, 0.50372328987462855, 0.504465325348057,
      0.50510986236887745, 0.5056582275667959, 0.50611174757151745,
      0.5064717490127475, 0.50673955852019215, 0.506916502723556,
      0.50700390825254515, 0.50700310173686469, 0.50691540980622007,
      0.50674215909031672, 0.50648467621886051, 0.50614428782155652,
      0.50572232052811039, 0.50522010096822734, 0.50463895577161322,
      0.503980211567973, 0.50324519498701248, 0.502435232658437,
      0.50155165121195222, 0.50059577727726323, 0.49956893748407549,
      0.49847245846209487, 0.49730766684102645, 0.49607588925057577,
      0.49477845232044854, 0.49341668268035, 0.49199190695998557,
      0.49050545178906074, 0.48895864379728088, 0.48735280961435168,
      0.4856892758699784, 0.48396936919386652, 0.48219441621572157,
      0.48036574356524891, 0.478484677872154, 0.47655254576614259,
      0.47457067387691976, 0.47254038883419114, 0.47046301726766215,
      0.46833988580703823, 0.46617232108202472, 0.46396164972232745,
      0.46170919835765134, 0.45941629361770236, 0.45708426213218556,
      0.45471443053080679, 0.45230812544327115, 0.44986667349928428,
      0.4473914013285516, 0.44488363556077859, 0.44234470282567068,
      0.43977592975293345, 0.43717864297227194, 0.434554169113392,
      0.43190383480599909, 0.42922896667979837, 0.42653089136449568,
      0.42381093548979626, 0.42107042568540537, 0.41831068858102888,
      0.415533050806372, 0.41273883899114022, 0.409929379765039,
      0.40710599975777378, 0.40427002559905018, 0.40142278391857322,
      0.39856560134604896, 0.39569980451118247, 0.392826720043679,
      0.38994767457324464, 0.38706399472958442, 0.38417700714240377,
      0.38128803844140835, 0.37839841525630347, 0.3755094642167946,
      0.37262251195258733, 0.3697388850933867, 0.36685991026889886,
      0.36398691410882877, 0.36112122324288193, 0.3582641643007638,
      0.35541706391218003, 0.35258124870683594, 0.34975804531443688,
      0.34694878036468851, 0.34415478048729625, 0.34137737231196541,
      0.33861788246840135, 0.33587763758631, 0.33315796429539646,
      0.33046018922536613, 0.32778563900592461, 0.32513564026677749,
      0.32251151963762992, 0.31991460374818759, 0.31734621922815592,
      0.31480769270724018, 0.31230035081514607, 0.30982552018157883,
      0.30738452743624406, 0.30497869920884713, 0.30260936212909362,
      0.300277842826689, 0.29798546793133851, 0.29573356407274776,
      0.29352345788062223, 0.2913564759846673, 0.28923394501458849,
      0.287157191600091, 0.28512754237088067, 0.28314632395666289,
      0.28121486298714282, 0.27933448609202616, 0.27750651990101838,
      0.27573229104382485, 0.27401312615015105, 0.27235032963929023,
      0.27074442179936076, 0.26919494794332255, 0.26770139243625807,
      0.26626323964324938, 0.26487997392937912, 0.26355107965972968,
      0.2622760411993833, 0.2610543429134225, 0.25988546916692956,
      0.25876890432498689, 0.25770413275267695, 0.25669063881508203,
      0.25572790687728458, 0.25481542130436685, 0.2539526664614114,
      0.25313912671350047, 0.25237428642571658, 0.25165762996314195,
      0.25098864169085916, 0.25036680597395039, 0.24979160717749815,
      0.24926252966658483, 0.24877905780629272, 0.24834067596170425,
      0.24794686849790185, 0.24759711977996782, 0.24729091417298468,
      0.24702773604203457, 0.2468070697522001, 0.24662839966856359,
      0.24649121015620737, 0.24639498558021383, 0.2463392103056655,
      0.24632336869764457, 0.24634694512123351, 0.24640942394151466,
      0.24651028952357049, 0.2466490262324833, 0.24682511843333552,
      0.24703805049120947, 0.24728730677118763, 0.24757237163835227,
      0.24789272945778587, 0.24824786459457079, 0.24863726141378936,
      0.24906040428052403, 0.24951677755985721, 0.2500058656168711,
      0.25052715281664834, 0.25108012352427106, 0.2516642621048219,
      0.252279052923383, 0.25292398034503688, 0.25359852873486588,
      0.2543021824579525, 0.25503442587937891, 0.25579474336422764,
      0.25658261927758108, 0.25739753798452158, 0.25823898385013139,
      0.25910644123949311, 0.25999939451768911, 0.2609173280498015,
      0.26185972620091291, 0.26282607333610575, 0.26381585382046235,
      0.26482855201906491, 0.2658636522969961, 0.26692063901933816,
      0.26799899655117349, 0.26909820925758432, 0.27021776150365334,
      0.27135713765446273, 0.27251582207509495, 0.27369329913063228,
      0.27488905318615731, 0.27610256860675209, 0.2773333297574993,
      0.27858082100348119, 0.27984452670978022, 0.28112393124147866,
      0.282418518963659, 0.2837277742414035, 0.2850511814397948,
      0.28638822492391508, 0.28773838905884658, 0.289101158209672,
      0.29047601674147361, 0.29186244901933361, 0.29325993940833456,
      0.29466797227355895, 0.29608603198008893, 0.29751360289300705,
      0.29895016937739549, 0.30039521579833695, 0.30184822652091348,
      0.30330868591020771, 0.30477607833130194, 0.30624988814927845,
      0.3077295997292197, 0.30921469743620822, 0.31070466563532617,
      0.31219898869165608, 0.31369715097028023, 0.315198636836281,
      0.31670293065474092, 0.31820951679074222, 0.31971787960936737,
      0.32122750347569873, 0.32273787275481863, 0.32424847181180955,
      0.3257587850117537, 0.32726829671973362, 0.32877649130083181,
      0.33028285312013045, 0.33178686654271178, 0.33328801593365853,
      0.33478578565805289, 0.33627966008097737, 0.33776912356751404,
      0.33925366048274574, 0.34073275519175455, 0.34220589205962293,
      0.34367255545143327, 0.34513222973226793, 0.34658439926720924,
      0.34802854842133962, 0.34946416155974158, 0.35089072304749735,
      0.35230771724968934, 0.3537146285314, 0.3551109412577117,
      0.3564961397937067, 0.35786970850446759, 0.35923113175507654,
      0.36057989391061612, 0.36191547933616847, 0.36323737239681636,
      0.36454505745764187, 0.36583801888372736, 0.36711574104015521,
      0.36837770829200811, 0.36962340500436819, 0.37085231554231773,
      0.37206392427093948, 0.37325771555531551, 0.37443317376052826,
      0.3755897832516602, 0.37672702839379346, 0.37784439355201088,
      0.37894136309139448, 0.38001742137702682, 0.38107205277399014,
      0.38210474164736691, 0.38311497236223951, 0.38410222928369031,
      0.38506599677680164, 0.38600575920665603, 0.38692100093833581,
      0.38781120633692318, 0.3886758597675008, 0.3895144455951508,
      0.39032644818495571, 0.39111135190199786, 0.39186864111135983,
      0.39259780017812362, 0.39329838373927972, 0.39397041360925145,
      0.39461410218748233, 0.39522966243567165, 0.395817307315519,
      0.39637724978872396, 0.396909702816986, 0.39741487936200465,
      0.39789299238547937, 0.39834425484910962, 0.398768879714595,
      0.39916707994363521, 0.39953906849792936, 0.3998850583391772,
      0.40020526242907822, 0.40049989372933192, 0.40076916520163774,
      0.40101328980769529, 0.401232480509204, 0.40142695026786368,
      0.4015969120453734, 0.40174257880343273, 0.40186416350374143,
      0.40196187910799885, 0.40203593857790459, 0.4020865548751581,
      0.40211394096145897, 0.40211830979850638, 0.40209987434800043,
      0.40205884757164007, 0.40199544243112512, 0.401909871888155,
      0.40180234890442912, 0.40167308644164734, 0.4015222974615088,
      0.40135019492571317, 0.40115699179595987, 0.40094290103394853,
      0.40070813560137858, 0.40045290845994963, 0.400177432571361,
      0.39988192089731239, 0.39956658639950338, 0.39923164203963318,
      0.39887730077940153, 0.3985037755805077, 0.39811127940465152,
      0.39770002521353237, 0.3972702259688497, 0.39682209463230306,
      0.396355844165592, 0.39587168753041596, 0.39536983768847445,
      0.39485050760146712, 0.39431391023109341, 0.39376025853905255,
      0.39318976548704443, 0.39260264403676853, 0.3919991071499242,
      0.39137936778821103, 0.39074363891332847, 0.39009213348697597,
      0.3894250644708534, 0.38874264482665982, 0.38804508751609496,
      0.3873326055008583, 0.3866054117426494, 0.38586371920316775,
      0.38510774084411281, 0.38433768962718412, 0.38355377851408118,
      0.38275622046650348, 0.38194522844615059, 0.38112101541472193,
      0.38028379433391724, 0.37943377816543572, 0.37857117987097721,
      0.37769621241224072, 0.37680908875092622, 0.37591002184873307,
      0.37499922466736091, 0.37407691016850897, 0.37314329131387697,
      0.3721985810651644, 0.3712429923840706, 0.3702767382322954,
      0.369300031571538, 0.36831308536349811, 0.36731611256987512,
      0.36630932615236861, 0.36529293907267807, 0.364267164292503,
      0.36323221477354295, 0.36218830347749748, 0.36113564336606596,
      0.36007444740094796, 0.35900492854384297, 0.35792729975645049,
      0.35684177400047012, 0.35574856423760121, 0.35464788342954362,
      0.35353994453799648, 0.35242496052465938, 0.351303144351232,
      0.35017470897941372, 0.34903986737090403, 0.34789883248740255,
      0.34675181729060867, 0.345599034742222, 0.34444069780394176,
      0.34327701943746797, 0.34210821260449986, 0.340934490266737,
      0.33975606538587871, 0.33857315092362472, 0.33738595984167447,
      0.3361947051017275, 0.33499959966548321, 0.33380085649464125,
      0.332598688550901, 0.33139330879596207, 0.33018493019152395,
      0.32897376569928621, 0.32776002828094825, 0.32654393089820966,
      0.32532568651276994, 0.32410550808632843, 0.3228836085805849,
      0.32166020095723874, 0.32043549817798944, 0.3192097132045365,
      0.31798305899857948, 0.31675574852181793, 0.31552799473595128,
      0.31430001060267909, 0.31307200908370092, 0.31184420314071609,
      0.31061680573542433, 0.30939002982952496, 0.3081640883847177,
      0.30693919436270189, 0.305715560725177, 0.30449340043384276,
      0.30327292645039849, 0.30205435173654388, 0.30083788925397814,
      0.29962375196440116, 0.29841215282951217, 0.29720330481101076,
      0.29599742087059655, 0.29479471396996881, 0.29359539707082732,
      0.2923996831348713, 0.29120778512380052, 0.29001991599931443,
      0.28883628872311246, 0.28765711625689427, 0.28648261156235921,
      0.28531298760120677, 0.28414845733513661, 0.28298923372584811,
      0.28183552973504089, 0.28068755832441444, 0.27954553245566816,
      0.27840966509050169, 0.27728016919061449, 0.27615725751144704,
      0.2750411178486073, 0.27393188952066622, 0.27282970627630643,
      0.27173470186421073, 0.27064701003306174, 0.26956676453154232,
      0.2684940991083351, 0.26742914751212293, 0.26637204349158849,
      0.26532292079541459, 0.26428191317228378, 0.26324915437087903,
      0.26222477813988287, 0.26120891822797815, 0.26020170838384765,
      0.25920328235617407, 0.25821377389364009, 0.25723331674492844,
      0.25626204465872188, 0.25530009138370324, 0.25434759066855517,
      0.25340467626196045, 0.25247148191260183, 0.25154814136916193,
      0.25063478838032349, 0.24973155669476943, 0.24883858006118234,
      0.24795599222824494, 0.24708392694464018, 0.24622251795905054,
      0.24537189902015888, 0.24453220387664792, 0.24370356627720041,
      0.24288611997049911, 0.24207999870522665, 0.24128533623006593,
      0.2405022662936995, 0.23973092264481027, 0.23897143903208082,
      0.23822394920419404, 0.23748858690983252, 0.23676548589767921,
      0.2360547799164166, 0.23535660271472755, 0.23467108804129477,
      0.23399836964480109, 0.23333858127392912, 0.23269185667736161,
      0.23205832960378145, 0.23143813380187114, 0.23083140302031363,
      0.23023827100779154, 0.22965887151298767, 0.22909333828458464,
      0.2285418050712654, 0.22800440562171251, 0.22748127368460874,
      0.22697254300863684, 0.22647834734247965, 0.2259988204348197,
      0.2255340960343398, 0.22508430788972278, 0.22464958974965138,
      0.2242300753628082, 0.2238258984778761, 0.2234371928435378,
      0.22306409220847595, 0.22270673032137342, 0.22236524093091281,
      0.222039757785777, 0.22173041463464854, 0.22143734522621042,
      0.22116068330914515, 0.22090056263213553, 0.22065711694386439,
      0.22043047999301441, 0.22022078552826835, 0.22002816729830882,
      0.21985275905181867, 0.21969469453748067, 0.21955410750397747,
      0.2194311316999919, 0.21932590087420659, 0.21923854877530438,
      0.21916920915196791, 0.21911801575288, 0.21908510232672335,
      0.2190706026221807, 0.21907465038793478, 0.21909737937266832,
      0.21913892332506413, 0.21919941599380485, 0.21927899112757329,
      0.21937778247505213, 0.21949592378492414, 0.21963354880587205,
      0.21979079128657861, 0.21996778497572655, 0.22016466362199863,
      0.22038156097407752, 0.22061861078064604, 0.22087594679038683,
      0.22115370275198271, 0.22145201241411644, 0.22177100952547069,
      0.22211082783472819, 0.22247160109057174, 0.22285346304168402,
      0.22325654743674778, 0.2236809880244458, 0.22412691855346073,
      0.22459447277247543, 0.22508378443017255, 0.22559498727523492,
      0.22612821505634506, 0.22668360152218592, 0.2272612804214402,
      0.22786138550279061, 0.22848405051491982, 0.2291294092065107,
      0.22979759532624588, 0.23048874262280816, 0.23120298484488025,
      0.23194045574114489, 0.23270128906028492, 0.2334856185509829,
      0.23429357796192163, 0.23512530104178386, 0.23598092153925235,
      0.23686057320300985, 0.23776438978173903, 0.23869250502412265,
      0.23964505267884348, 0.24062216649458418, 0.24162398022002773,
      0.24265062760385653, 0.24370224239475358, 0.2447789583414014,
      0.24588090919248284, 0.24700822869668076, 0.24816105060267762,
      0.24933950865915638, 0.25054373661479967, 0.25177386821829034,
      0.253030037218311, 0.2543123773635444, 0.25562102240267343,
      0.25695610608438069, 0.25831776215734886, 0.2597061243702608,
      0.2611213264717992, 0.26256350221064689, 0.26403278533548641,
      0.26552930959500065, 0.26705320873787231, 0.26860461651278439,
      0.27018366666841909, 0.27179049295345947, 0.27342522911658818,
      0.275088008906488, 0.27677896607184171, 0.27849823436133186,
      0.28024594752364146, 0.28202223930745307, 0.2838272434614495,
      0.28566109373431348, 0.28752389284653812, 0.28941538279846751,
      0.29133507285948484, 0.293282468419752, 0.29525707486943054,
      0.2972583975986825, 0.29928594199766922, 0.30133921345655257,
      0.30341771736549433, 0.30552095911465627, 0.30764844409419995,
      0.30979967769428735, 0.31197416530507993, 0.31417141231673978,
      0.31639092411942837, 0.31863220610330745, 0.32089476365853886,
      0.3231781021752842, 0.32548172704370537, 0.3278051436539639,
      0.33014785739622171, 0.33250937366064043, 0.33488919783738186,
      0.33728683531660769, 0.33970179148847968, 0.3421335717431595,
      0.34458168147080903, 0.34704562606159017, 0.34952491090566395,
      0.35201904139319262, 0.35452752291433787, 0.35704986085926144,
      0.359585560618125, 0.36213412758109026, 0.36469506713831906,
      0.36726788467997296, 0.36985208559621391, 0.37244717527720356,
      0.37505265911310359, 0.37766804249407576, 0.38029283081028187,
      0.38292652945188349, 0.38556864380904265, 0.38821867927192072,
      0.39087614123067965, 0.39354053507548109, 0.39621136619648695,
      0.39888813998385869, 0.40157036182775879, 0.40425753711834783,
      0.40694917124578817, 0.40964476960024143, 0.41234383757186927,
      0.41504588055083369, 0.41775040392729618, 0.42045691309141858,
      0.42316491343336271, 0.42587391034329009, 0.42858340921136262,
      0.43129291542774195, 0.43400193438258983, 0.43670997146606816,
      0.43941653206833836, 0.44212112157956235, 0.44482324538990181,
      0.4475224088895185, 0.45021811746857432, 0.45290987651723075,
      0.45559719142564953, 0.45827956758399252, 0.46095651038242186,
      0.4636275252110984, 0.46629211746018429, 0.46894979251984137,
      0.47160005578023123, 0.47424241263151562, 0.4768763684638565,
      0.47950142866741524, 0.48211709863235375, 0.48472288374883388,
      0.48731828940701721, 0.4899028209970655, 0.49247598390914049,
      0.49503728353340393, 0.49758622526001756, 0.50012231447914313,
      0.50264505658094227, 0.50515395695557685, 0.50764852099320856,
      0.51012825408399909, 0.51259266161811012, 0.51504124898570391,
      0.51747352157694138, 0.51988898478198475, 0.52228714399099541,
      0.52466750459413547, 0.52702957198156652, 0.52937285154345026,
      0.53169684866994849, 0.53400106875122277, 0.53628501717743515,
      0.53854819933874709, 0.54079012062532039, 0.54301028642731675,
      0.54520820213489829, 0.547383373138226, 0.54953530482746227,
      0.55166350259276864, 0.55376747182430675, 0.55584671791223839,
      0.55790074624672525, 0.559929062217929, 0.56193117121601188,
      0.563906578631135, 0.56585478985346016, 0.56777531027314943,
      0.56966764528036429, 0.57153130026526655, 0.5733657806180178,
      0.57517059172878016, 0.5769452389877151, 0.57868922778498422,
      0.5804020635107493, 0.58208325155517249, 0.58373229730841492,
      0.58534870616063883, 0.58693198350200582, 0.58848163472267723,
      0.58999716521281542, 0.59147808036258154, 0.59292388556213793,
      0.59433408620164585, 0.59570818767126688, 0.5970456953611637,
      0.5983461146614969, 0.59960895096242872, 0.600833709654121,
      0.60201989612673534, 0.60316701577043352, 0.60427457397537732,
      0.60534207613172808, 0.60636902762964817, 0.60735493385929884,
      0.608299300210842, 0.60920163207443934, 0.61006143484025266,
      0.61087821389844377, 0.61165147463917413, 0.61238072245260589,
      0.61306546272890028, 0.61370520085821956, 0.614299442230725,
      0.61484769223657842, 0.61534945626594173, 0.61580423970897669,
      0.6162115479558451, 0.61657088639670832, 0.61688176042172826,
      0.61714367542106674, 0.61735613678488532, 0.617518649903346,
      0.61763072016661036, 0.61769185296484008, 0.617701553688197,
      0.61765932772684284, 0.61756468047093938, 0.61741711742014926,
      0.617216384343365, 0.61696297677829326, 0.61665753610404961,
      0.61630070369975, 0.61589312094451021, 0.61543542921744609,
      0.61492826989767346, 0.614372284364308, 0.61376811399646591,
      0.61311640017326241, 0.61241778427381388, 0.6116729076772357,
      0.61088241176264391, 0.61004693790915421, 0.60916712749588264,
      0.60824362190194492, 0.60727706250645663, 0.60626809068853382,
      0.6052173478272922, 0.60412547530184768, 0.60299311449131587,
      0.60182090677481315, 0.60060949353145443, 0.59935951614035632,
      0.59807161598063419, 0.59674643443140385, 0.59538461287178146,
      0.5939867926808825, 0.59255361523782313, 0.59108572192171871,
      0.5895837541116854, 0.58804835318683857, 0.5864801605262947,
      0.58487981750916918, 0.5832479655145778, 0.58158524592163663,
      0.57989230010946136, 0.5781697694571678, 0.57641829534387179,
      0.5746385191486888, 0.57283108225073509, 0.5709966260291266,
      0.56913579186297847, 0.5672492211314073, 0.56533755521352824,
      0.56340143548845734, 0.56144150333531051, 0.55945840013320347,
      0.55745276726125226, 0.55542524609857225, 0.55337647802427981,
      0.5513071044174902, 0.54921776665731914, 0.54710910612288333,
      0.54498176419329791, 0.54283638224767872, 0.54067360166514189,
      0.53849406382480269, 0.53629841010577761, 0.534087281887182,
      0.531861320548132, 0.5296211674677429, 0.527367464025131,
      0.52510085159941189, 0.52282197156970134, 0.52053146531511552,
      0.51822997421476968, 0.51591813964778011, 0.51359660299326237,
      0.51126600563033253, 0.50892698893810617, 0.506580194295699,
      0.50422626308222707, 0.501865836676806, 0.49949955645855165,
      0.4971280638065802, 0.49475200010000708, 0.49237200671794829,
      0.48998872503951951, 0.48760279644383653, 0.48521486231001526,
      0.48282556401717142, 0.480435542944421, 0.47804544047087966,
      0.47565589797566316, 0.47326755683788746, 0.47088105843666839,
      0.46849704415112176, 0.46611615536036305, 0.46373903344350842,
      0.46136631977967379, 0.45899865574797455, 0.45663668272752689,
      0.45428104209744646, 0.4519323752368487, 0.44959132352485021,
      0.4472585283405664, 0.44493463106311321, 0.44262027307160612,
      0.44031609574516151, 0.43802274046289447, 0.43574084860392137,
      0.43347106154735782, 0.43121402067231968, 0.42897036735792271,
      0.42674074298328279, 0.42452578892751575, 0.42232614656973727,
      0.42014245728906319, 0.41797536246460948, 0.4158255034754918,
      0.41369352170082596, 0.411580058519728, 0.40948575531131348,
      0.40741125345469847, 0.40535719432899842, 0.403324219313329,
      0.40131296978680681, 0.39932408712854717, 0.3973582127176658,
      0.39541598793327876, 0.39349805415450179, 0.39160505276045071,
      0.38973762513024118, 0.38789641264298913, 0.38608205667781037,
      0.38429519861382078, 0.38253647983013617, 0.380806541705872,
      0.37910602562014467, 0.37743557295206959, 0.3757958250807627,
      0.37418742338533978, 0.37261100924491664, 0.3710672240386092,
      0.36955670914553307, 0.36808010594480423, 0.36663805581553832,
      0.3652312001368514, 0.36386018028785916, 0.36252563764767742,
      0.36122821359542195, 0.35996854951020862, 0.35874728677115331,
      0.35756506675737165, 0.35642253084797965, 0.35532032042209294,
      0.3542590768588274, 0.35323944153729891, 0.35226205583662329,
      0.35132756113591618, 0.35043659881429368, 0.34958981025087132,
      0.34878783682476505, 0.34803131991509073, 0.347320900900964,
      0.34665722116150077, 0.346040922075817, 0.34547264502302832,
      0.34495303138225042, 0.34448272253259948, 0.34406235985319111,
      0.34369258472314107, 0.34337403852156534, 0.34310736262757957,
      0.34289319842029964, 0.3427321634599258, 0.34262432742017512,
      0.34256921205970936, 0.34256631531256027, 0.34261513511276,
      0.3427151693943401, 0.34286591609133288, 0.34306687313777007,
      0.34331753846768354, 0.34361741001510515, 0.34396598571406695,
      0.34436276349860073, 0.34480724130273838, 0.34529891706051191,
      0.34583728870595326, 0.34642185417309423, 0.34705211139596659,
      0.34772755830860252, 0.34844769284503369, 0.3492120129392921,
      0.35002001652540982, 0.35087120153741852, 0.35176506590935014,
      0.35270110757523665, 0.35367882446911, 0.35469771452500193,
      0.35575727567694432, 0.35685700585896935, 0.35799640300510877,
      0.3591749650493945, 0.36039218992585842, 0.36164757556853239,
      0.36294061991144833, 0.36427082088863821, 0.365637676434134,
      0.36704068448196753, 0.36847934296617063, 0.36995314982077515,
      0.37146160297981318, 0.37300420037731646, 0.374580439947317,
      0.37618981962384673, 0.3778318373409375, 0.37950599103262112,
      0.38121177863292965, 0.38294869807589493, 0.38471624729554893,
      0.38651392422592346, 0.38834122680105038, 0.39019765295496184,
      0.39208270062168948, 0.39399586773526524, 0.39593665222972113,
      0.39790455203908903, 0.39989906509740081, 0.40191968933868832,
      0.403965922696984, 0.40603726310631882, 0.40813320850072526,
      0.410253256814235, 0.41239690598088008, 0.41456365393469258,
      0.41675299860970394, 0.41896443793994653, 0.42119746985945195,
      0.42345159230225221, 0.42572630320237914, 0.42802110049386477,
      0.43033548211074107, 0.43266894598703975, 0.43502099005679279,
      0.43739111225403204, 0.43977881051278939, 0.44218358276709707,
      0.44460492695098636, 0.44704234099848977, 0.44949532284363897,
      0.45196337042046586, 0.45444598166300265, 0.45694265450528049,
      0.45945288688133185, 0.46197617672518837, 0.46451202197088226,
      0.46705992055244522, 0.46961937040390922, 0.472189869459306,
      0.47477091565266788, 0.47736200691802622, 0.47996264118941329,
      0.48257231640086079, 0.48519053048640093, 0.48781678138006523,
      0.49045056701588585, 0.49309138532789465, 0.49573873425012349,
      0.49839211171660436, 0.501051015661369, 0.50371494401844941,
      0.50638339472187743, 0.50905586570568551, 0.51173185490390483,
      0.51441086025056726, 0.51709237967970512, 0.51977591112535015,
      0.52246095252153424, 0.52514700180228946, 0.52783355690164757,
      0.53052011575364022, 0.53320617629229972, 0.53589123645165793,
      0.53857479416574661, 0.54125634736859762, 0.54393539399424318,
      0.5466114319767148, 0.5492839592500447, 0.5519524737482645,
      0.55461647340540621, 0.55727545615550211, 0.55992891993258331,
      0.56257636267068245, 0.56521728230383128, 0.56785117676606156,
      0.570477543991405, 0.57309588191389382, 0.57570568846755965,
      0.57830646158643473, 0.5808976992045507, 0.58347889925593954,
      0.58604955967463324, 0.58860917839466365, 0.59115725335006253,
      0.593693282474862, 0.59621676370309418, 0.59872719496879023,
      0.60122407420598267, 0.60370689934870314, 0.60617516833098373,
      0.6086283790868563, 0.61106602955035261, 0.61348761765550475,
      0.61589264133634436, 0.61828059852690376, 0.6206509871612147,
      0.62300330517330893, 0.62533705049721822, 0.62765172106697487,
      0.62994681481661041, 0.63222182968015694, 0.63447626359164622,
      0.63670961448511054, 0.63892138029458145, 0.64111105895409093,
      0.643278148397671, 0.64542214655935337, 0.64754255137317,
      0.6496388607731528, 0.65171057269333377, 0.653757185067745,
      0.65577819583041785, 0.65777310291538449, 0.65974140425667693,
      0.66168259778832716, 0.66359618144436683, 0.6654816531588279,
      0.66733851086574247, 0.66916625249914219, 0.67096437599305891,
      0.672732470438676, 0.67447059362180706, 0.676178953542781,
      0.67785775827047845, 0.67950721587377916, 0.68112753442156271,
      0.68271892198270956, 0.68428158662609906, 0.68581573642061144,
      0.68732157943512684, 0.68879932373852448, 0.69024917739968483,
      0.69167134848748768, 0.69306604507081282, 0.69443347521854026,
      0.69577384699954981, 0.69708736848272157, 0.69837424773693568,
      0.69963469283107127, 0.70086891183400879, 0.70207711281462792,
      0.703259503841809, 0.70441629298443165, 0.70554768831137538,
      0.70665389789152089, 0.70773512979374742, 0.70879159208693543,
      0.70982349283996449, 0.71083104012171461, 0.71181444200106558,
      0.71277390654689743, 0.71370964182809016, 0.71462185591352345,
      0.71551075687207732, 0.71637655277263168, 0.71721945168406664,
      0.71803966167526168, 0.71883739081509712, 0.71961284717245277,
      0.72036623881620843, 0.72109777381524409, 0.72180766023843956,
      0.72249610615467474, 0.72316331963282976, 0.72380950874178429,
      0.72443488155041846, 0.72503964612761207, 0.7256240105422449,
      0.7261881828631972, 0.72673237115934852, 0.727256783499579,
      0.72776162795276822, 0.72824711258779651, 0.72871344547354366,
      0.72916083467888981, 0.72958948827271408, 0.72999961432389726,
      0.73039142090131881, 0.73076511607385863, 0.73112090791039674,
      0.73145900447981327, 0.73177961385098778, 0.73208294409280006,
      0.73236920327413058, 0.7326385994638589, 0.7328913407308647,
      0.73312763514402846, 0.73334769077222994, 0.73355171568434852,
      0.73373991794926463, 0.73391250563585808, 0.73406968681300866,
      0.73421166954959638, 0.73433866191450137, 0.73445087197660319,
      0.73454850780478187, 0.73463177746791708, 0.73470088903488939,
      0.73475605057457793, 0.73479747015586316, 0.73482535584762487,
      0.73483991571874274, 0.7348413578380969, 0.73482989027456735,
      0.73480572109703368, 0.73476905837437623, 0.73472011017547456,
      0.73465908456920848, 0.7345861896244581, 0.73450163341010344,
      0.7344056239950244, 0.73429836944810079, 0.73418007783821249,
      0.73405095723423952, 0.73391121570506146, 0.733761061319559,
      0.73360070214661111, 0.73343034625509818, 0.7332502017139001,
      0.733060476591897, 0.73286137895796843, 0.73265311688099422,
      0.73243589842985435, 0.73220993167342918, 0.73197542468059817,
      0.73173258552024145, 0.7314816222612387, 0.73122274297247,
      0.73095615572281547, 0.73068206858115436, 0.73040068961636728,
      0.7301122268973339, 0.72981688849293391, 0.72951488247204754,
      0.72920641690355448, 0.72889169985633473, 0.72857093939926842,
      0.728244343601235, 0.72791212053111476, 0.72757447825778743,
      0.72723162485013282, 0.72688376837703117, 0.72653111690736227,
      0.7261738785100057, 0.725812261253842, 0.72544647320775024,
      0.72507672244061117, 0.72470321702130425, 0.72432616501870939,
      0.72394577450170672, 0.723562253539176, 0.72317581019999722,
      0.7227866525530503, 0.722394988667215, 0.72200102661137111,
      0.72160497445439908, 0.72120704026517835, 0.72080743211258891,
      0.72040635806551079, 0.720004026192824, 0.719600644563408,
      0.719196421246143, 0.71879156430990931, 0.7183862818235861,
      0.717980781856054, 0.71757527247619191, 0.71716996175288084,
      0.716765057755, 0.71636076855142983, 0.71595730221104958,
      0.71555486680273994, 0.71515367039538014, 0.71475392105785041,
      0.71435582685903054, 0.71395959586780089, 0.71356543615304058,
      0.71317355578363, 0.712784162828449, 0.71239746535637749,
      0.71201367143629568, 0.711632989137083, 0.71125562652761953,
      0.71088179167678511, 0.7105116926534597, 0.71014553752652332,
      0.70978353436485586, 0.70942589057417083, 0.70907277376256472,
      0.708724289847436, 0.7083805394389433, 0.70804162314724506,
      0.70770764158249955, 0.70737869535486519, 0.707054885074501,
      0.70673631135156456, 0.70642307479621491, 0.70611527601861046,
      0.70581301562890963, 0.70551639423727064, 0.70522551245385212,
      0.70494047088881284, 0.70466137015231067, 0.7043883108545046,
      0.70412139360555248, 0.70386071901561342, 0.7036063876948454,
      0.70335850025340729, 0.70311715730145719, 0.70288245944915351,
      0.702654507306655, 0.70243340148412, 0.702219242591707,
      0.70201213123957462, 0.70181216803788071, 0.70161945359678446,
      0.70143408852644373, 0.7012561734370174, 0.70108580893866379,
      0.70092309564154121, 0.70076813415580841, 0.70062102509162361,
      0.70048186905914522, 0.70035076666853191, 0.7002278185299422,
      0.7001131252535342, 0.70000678744946643, 0.69990890572789766,
      0.6998195806989862, 0.69973891297289037, 0.69966700315976893,
      0.69960395186977975, 0.69954985971308181, 0.69950482729983354,
      0.69946895524019315, 0.699442344144319, 0.69942509462237035,
      0.69941730728450457, 0.69941908274088083, 0.69943052160165742,
      0.69945172447699266, 0.69948279197704533, 0.69952382471197327,
      0.69957492329193538, 0.69963618832709029, 0.6997077204275961,
      0.69978962020361146, 0.69988198826529446, 0.69998492522280431,
      0.70009853168629865, 0.70022290826593647, 0.70035815557187608,
      0.700504374214276, 0.70066166480329439, 0.70083012794909016,
      0.70100986426182121, 0.70120097435164652, 0.7014035588287244,
      0.701617718303213, 0.70184355338527094, 0.7020811646850571,
      0.70233065281272944, 0.70259211837844671, 0.70286566199236711,
      0.703151384264649, 0.70344938580545135, 0.70375976722493216,
      0.70408262913325015, 0.70441807214056351, 0.70476619685703079,
      0.70512710389281075, 0.70550089385806158, 0.70588766736294151,
      0.70628752501760972, 0.70670056743222387, 0.70712689521694283,
      0.70756660898192492, 0.70801980933732855, 0.70848659689331228,
      0.70896707226003475, 0.709461336047654, 0.70996948886632893,
      0.71049163132621762, 0.71102786403747875, 0.711578287610271,
      0.71214300265475194, 0.71272210978108119, 0.71331570959941615,
      0.71392390271991613, 0.714546789752739, 0.71518447130804375,
      0.71583704799598813, 0.71650462042673124, 0.71718728921043118,
      0.71788515495724659, 0.71859831827733578, 0.71932687978085752,
      0.72007094007796957, 0.72083059977883124, 0.72160595949360029,
      0.72239711983243593, 0.72320418140549558, 0.72402724482293879,
      0.72486641069492308, 0.72572177963160767, 0.72659345224315053,
      0.72748152913971043, 0.72838611093144545, 0.72930729822851437,
      0.73024519164107538, 0.73119989177928746, 0.73217149925330827,
      0.73316011467329678, 0.73416583864941143, 0.73518877179181064,
      0.73622901471065283, 0.73728666801609632, 0.73836183231829977,
      0.73945460822742171, 0.74056509635362033, 0.7416933973070543,
      0.74283961169788193, 0.74400384013626186, 0.74518618323235231,
      0.74638674159631191, 0.74760561583829876, 0.74884290656847208,
      0.7500987143969895, 0.75137313993401056, 0.752666283789692,
      0.753978246574194, 0.75530912889767365, 0.75665903137029056,
      0.75802805460220224, 0.75941629920356823, 0.76082386578454564,
      0.76225085495529432, 0.76369736732597127, 0.76516350350673634,
      0.76664936410774664, 0.76815504973916227, 0.76968066101113974,
      0.77122629853383939, 0.77279206291741809, 0.7743780547720357,
      0.77598437470784942, 0.77761112333501881, 0.77925840126370116,
      0.78092630910405614, 0.78261494746624161, 0.78432441696041577,
      0.78605481819673728, 0.78780625178536479, 0.78957881833645649,
      0.79137258317023684, 0.79318730442306962, 0.79502258205128373,
      0.79687801470354691, 0.79875320102852621, 0.80064773967488878,
      0.80256122929130247, 0.80449326852643421, 0.80644345602895162,
      0.80841139044752153, 0.81039667043081165, 0.81239889462748915,
      0.81441766168622143, 0.816452570255676, 0.81850321898451983,
      0.8205692065214204, 0.82265013151504585, 0.82474559261406122,
      0.82685518846713635, 0.82897851772293674, 0.83111517903013132,
      0.83326477103738583, 0.83542689239336909, 0.83760114174674671,
      0.83978711774618819, 0.84198441904035837, 0.844192644277927,
      0.846411392107559, 0.84864026117792424, 0.85087885013768738,
      0.85312675763551871, 0.8553835823200826, 0.85764892284004879,
      0.85992237784408221, 0.86220354598085291, 0.86449202589902563,
      0.86678741624727029, 0.86908931567425174, 0.87139732282863869,
      0.87371103635909819, 0.87603005491429708, 0.87835397714290364,
      0.88068240169358436, 0.883014927215007, 0.88535115235583861,
      0.88769067576474681, 0.89003309609039871, 0.89237801198146194,
      0.89472502208660332, 0.89707372505449023, 0.89942371953379074,
      0.90177460417317135, 0.90412597762129965, 0.90647743852684282,
      0.90882858553846879, 0.91117901730484385, 0.91352833247463638,
      0.91587612969651289, 0.91822200761914219, 0.92056556489118868,
      0.922906400161323, 0.92524411207820956, 0.92757829929051849,
      0.92990856044691428, 0.932234494196067, 0.93455569918664116,
      0.93687177406730693, 0.93918231748672909, 0.94148692809357748,
      0.94378520453651649, 0.9460767454642165, 0.94836114952534212,
      0.95063801536856318, 0.95290694164254441, 0.95516752699595575,
      0.95741937007746192, 0.95966206953573285, 0.96189522401943339,
      0.96411843217723314, 0.96633129265779794, 0.96853340410979527,
      0.97072436518189287, 0.97290377452275756, 0.9750712307810574,
      0.9772263326054591, 0.97936867864463029, 0.981497867547238,
      0.98361349796194975, 0.985715168537433, 0.9878024779223552,
      0.98987502476538258, 0.991932407715184, 0.99397422542042568,
      0.99600007652977562, 0.99800955969190053, 1.0000022735554683,
      1.0019778167691458, 1.0039357879816007, 1.0058757858415004,
      1.0077974089975117, 1.0097002560983028, 1.0115839257925394,
      1.0134480167288911, 1.0152921275560229, 1.017115856922604,
      1.0189188034773002, 1.0207005658687807, 1.0224607427457102,
      1.0241989327567589, 1.0259147345505917, 1.027607746775878,
      1.0292775680812829, 1.0309237971154759, 1.032546032527123,
      1.034143872964892, 1.0357169170774496, 1.0372647635134642,
      1.038787010921602, 1.0402832579505314, 1.0417531032489187,
      1.0431961454654322, 1.0446119832487379, 1.0460002152475043,
      1.0473604401103989, 1.0486922564860879, 1.04999526302324,
      1.0512690583705206, 1.0525132411765994, 1.0537274100901413,
      1.0549111637598159, 1.0560641008342884, 1.0571858199622282,
      1.0582759197923004, 1.0593339989731747, 1.0603596561535162,
      1.0613524899819942, 1.0623120991072743, 1.0632380821780254,
      1.064130037842913, 1.0649875647506064, 1.0658102615497713,
      1.0665977268890761, 1.0673495594171873, 1.0680653577827732,
      1.0687447206345007, 1.0693872466210363, 1.0699925343910481,
      1.0705601825932036, 1.0710897898761698, 1.0715809548886142,
      1.0720332762792038, 1.0724463526966062, 1.0728197827894888,
      1.0731531652065185, 1.073446098596363, 1.0736981816076894,
      1.0739090128891653, 1.0740781910894577, 1.0742053148572341,
      1.0742899828411623, 1.0743317936899088, 1.0743303460521412,
      1.0742852385765269, 1.0741960699117334, 1.0740624387064279,
      1.0738839436092775, 1.0736601840472546, 1.0733910234300641,
      1.0730769723368467, 1.0727186387049346, 1.0723166304716598,
      1.0718715555743537, 1.071384021950349, 1.0708546375369776,
      1.0702840102715714, 1.0696727480914621, 1.0690214589339821,
      1.068330750736463, 1.0676012314362371, 1.0668335089706356,
      1.0660281912769924, 1.0651858862926376, 1.064307201954904,
      1.0633927462011228, 1.0624431269686276, 1.0614589521947486,
      1.0604408298168191, 1.0593893677721702, 1.0583051739981346,
      1.0571888564320435, 1.0560410230112296, 1.0548622816730249,
      1.0536532403547609, 1.0524145069937698, 1.0511466895273838,
      1.0498503958929342, 1.0485262340277541, 1.0471748118691746,
      1.0457967373545276, 1.0443926184211458, 1.0429630630063607,
      1.0415086790475045, 1.0400300744819093, 1.0385278572469068,
      1.0370026352798285, 1.0354550165180076, 1.0338856088987756,
      1.0322950203594634, 1.030683858837405, 1.0290527322699305,
      1.0274022485943735, 1.0257330157480642, 1.0240456416683368,
      1.0223407342925208, 1.0206189015579508, 1.0188807514019562,
      1.0171268917618717, 1.0153579305750264, 1.0135744757787548,
      1.0117771353103866, 1.009966517107256, 1.0081432291066934,
      1.006307879246032, 1.0044610754626022, 1.0026034256937384,
      1.0007355378767695, 0.99885801994903056, 0.996971479847851,
      0.99507652551056491, 0.99317376487450215, 0.99126380587699658,
      0.98934725645537946, 0.98742472454698293, 0.98549681808913836,
      0.98356414501917866, 0.98162731327443509, 0.97968693079224012,
      0.97774360550992567, 0.97579794536482345, 0.97385055829426559,
      0.97190205223558412, 0.96995303512611086, 0.96800411490317817,
      0.96605589950411774, 0.9641089968662615, 0.9621640149269417,
      0.96022156162348993, 0.95828224489323877, 0.95634667267351992,
      0.95441545290166507, 0.95248919351500638, 0.95056850245087576,
      0.94865398764660636, 0.94674625703952775, 0.94484591856697475,
      0.94295358016627651, 0.94106984977476793, 0.93919533532977828,
      0.93733064476864181, 0.93547638602868843, 0.93363316704725208,
      0.9318015957616631, 0.92998228010925488, 0.928175828027358,
      0.92638284745330624, 0.92460394632442955, 0.92283973257806184,
      0.92109081415153315, 0.9193577989821774, 0.91764129500732494,
      0.91594191016430937, 0.91426025239046094, 0.91259692962311256,
      0.91095254979959661, 0.90932772085724434, 0.90772305073338821,
      0.90613914736535983, 0.90457661869049144, 0.903036072646115,
      0.90151811716956243, 0.90002336019816587, 0.8985524096692572,
      0.89710587352016835, 0.89568435968823112, 0.894288476110778,
      0.89291883072514078, 0.89157603146865116, 0.89026068627864152,
      0.88897340309244355, 0.8877147898473895, 0.886485454480811,
      0.88528600493004062, 0.88411704913240974, 0.88297919502525035,
      0.88187305054589527, 0.88079922363167529, 0.87975832221992367,
      0.87875095424797112, 0.8777777276531511, 0.87683925037279375,
      0.87593613034423257, 0.8750689755047989, 0.87423839379182522,
      0.87344499314264268, 0.8726893814945843, 0.871972166784981,
      0.87129395695116563, 0.8706553599304695, 0.87005698366022532,
      0.86949943607776448, 0.86898332512041909, 0.86850925872552132,
      0.86807784483040318, 0.86768969137239638, 0.867345406288833,
      0.86704559751704546, 0.8667908729943653, 0.86658184065812449,
      0.866419108445655, 0.86630328429428916, 0.86623497614135858,
      0.86621479192419581, 0.866243339580132, 0.86632122704649972,
      0.86644906226063079, 0.86662745315985723, 0.866857007681511,
      0.86713833376292437, 0.8674720393414288, 0.86785873235435662,
      0.86829902073903975, 0.86879351243281022, 0.86934281537299984,
      0.86994748011542411, 0.87060713914231957, 0.871320686490801,
      0.87208699527688893, 0.87290493861660579, 0.87377338962597284,
      0.8746912214210123, 0.87565730711774481, 0.876670519832193,
      0.87772973268037746, 0.87883381877832134, 0.87998165124204419,
      0.88117210318756978, 0.88240404773091763, 0.88367635798811139,
      0.884987907075171, 0.88633756810811959, 0.8877242142029772,
      0.88914671847576721, 0.89060395404250914, 0.89209479401922687,
      0.89361811152194, 0.895172779666672, 0.89675767156944308,
      0.89837166034627547, 0.90001361911319022, 0.90168242098620976,
      0.90337693908135541, 0.9050960465146487, 0.90683861640211127,
      0.9086035218597649, 0.91038963600363076, 0.9121958319497312,
      0.91402098281408706, 0.91586396171272055, 0.917723641761653,
      0.919598896076906, 0.92148859777450143, 0.92339161997046082,
      0.92530683578080575, 0.92723311832155786, 0.92916934070873869,
      0.93111437605837011, 0.9330670974864731, 0.93502637810907,
      0.93699109104218226, 0.93896010940183194, 0.9409323063040389,
      0.94290655486482744, 0.9448817282002161, 0.94685669942622974,
      0.948830341658887, 0.95080152801421214, 0.95276913160822452,
      0.95473202555694758, 0.95668908297640143, 0.95863917698260936,
      0.96058118069159082, 0.96251396721936977, 0.96443640968196587,
      0.96634738119540242, 0.96824575487569908, 0.97013040383887994,
      0.97200020120096409, 0.97385402007797528, 0.97569073358593372,
      0.97750921484086184, 0.97930833695878083, 0.98108697305571235,
      0.982843996247678, 0.98457827965069944, 0.98628869638079864,
      0.98797411955399683, 0.98963342228631557, 0.99126547769377693,
      0.992869158892402, 0.99444333899821258, 0.99598689112723049,
      0.99749868839547773, 0.99897760391897483, 1.0004225108137443,
      1.001832282195807, 1.0032057911811856, 1.0045419108859011,
      1.0058395144259749, 1.0070974749174291, 1.0083146654762849,
      1.0094899592185644, 1.0106222292602891, 1.01171034871748,
      1.0127531907061598, 1.0137496283423486, 1.01469853474207,
      1.0155987830213438, 1.0164492462961929, 1.0172487976826381,
      1.0179963102967018, 1.0186906572544046, 1.0193307116717691,
      1.0199153466648163, 1.0204434353495684, 1.0209138508420461,
      1.0213254662582723, 1.0216771547142671, 1.0219677893260535,
      1.0221962432096525, 1.0223613894810857, 1.0224621012563748,
      1.0224972516515414, 1.0224657137826072, 1.0223663607655937,
      1.0221980657165226, 1.0219597017514155, 1.0216501419862944,
      1.0212682595371803, 1.020812927520095, 1.0202830190510601,
      1.0196774072460975, 1.0189949652212287, 1.0182345660924752,
      1.0173950829758589, 1.0164753889874012, 1.0154743572431235,
      1.0143908608590477, 1.0132237729511957, 1.0119719666355889,
      1.0106343150282484, 1.0092096912451964, 1.0076969684024546,
      1.0060950196160441, 1.0044027180019865, 1.002618936676305,
      1.0007425487550183, 0.99877242735415128, 0.99670744558972291,
      0.99454647657775674, 0.99228839343427244, 0.9899320692752942,
      0.98747637721684067, 0.98492019037493628, 0.98226238186560033,
      0.97950182480485637, 0.976637392308724, 0.97366795749322765,
      0.9705923934743852, 0.96740957336822242, 0.964118370290757,
      0.96071765735801429, 0.95720630768601189, 0.95358319439077543,
      0.9498471905883229, 0.94599716939467993, 0.94203200392586339,
      0.93795056729789861, 0.93375173262680611, 0.92943437302860732,
      0.92499736161932411, 0.92043957151497791, 0.91575987583159024,
      0.9109571476851831, 0.90603026019177779, 0.90097808646739608,
      0.89579949962805938, 0.89049337278978968, 0.8850585790686083,
      0.87949399158053687, 0.87379848344159716, 1.0694537618363962,
      1.0003004112134541, 0.93272511358931609, 0.866714729940042,
      0.80225612124169521, 0.73933614847033646, 0.677941672602027,
      0.61805955461282835, 0.5596766554788013, 0.50277983617600852,
      0.44735595768051062, 0.3933918809683693, 0.34087446701564639,
      0.28979057679840231, 0.24012707129269936, 0.19187081147459914,
      0.145008658320162, 0.099527472805450254, 0.055414115906525209,
      0.012655448599448171, -0.028761668139719282, -0.0688503733349159,
      -0.10762380601008005, -0.14509510518915009, -0.18127740989606525,
      -0.21618385915476371, -0.24982759198918356, -0.282221747423264,
      -0.31337946448094378, -0.34331388218616082, -0.372038139562854,
      -0.39956537563496186, -0.42590872942642277, -0.45108133996117583,
      -0.47509634626315911, -0.49796688735631106, -0.5197061022645707,
      -0.54032713001187627, -0.55984310962216655, -0.57826718011937961,
      -0.59561248052745452, -0.6118921498703298, -0.6271193271719443,
      -0.64130715145623529, -0.65446876174714286, -0.66661729706860484,
      -0.67776589644456, -0.68792769889894623, -0.69711584345570332,
      -0.70534346913876855, -0.71262371497208177, -0.71896971997958015,
      -0.72439462318520365, -0.72891156361288945, -0.73253368028657728,
      -0.735274112230205, -0.73714599846771178, -0.73816247802303547,
      -0.73833668992011492, -0.73768177318288886, -0.73621086683529535,
      -0.7339371099012737, -0.73087364140476208, -0.72703360036969933,
      -0.722430125820023, -0.717076356779673, -0.71098543227258693,
      -0.70417049132270382, -0.69664467295396215, -0.68842111619030077,
      -0.67951296005565753, -0.66993334357397083, -0.65969540576918084,
      -0.64881228566522442, -0.6372971222860403, -0.62516305465556843,
      -0.61242322179774644, -0.59909076273651274, -0.58517881649580616,
      -0.57070052209956434, -0.55566901857172746, -0.540097444936233,
      -0.52399894021702, -0.50738664343802631, -0.49027369362319095,
      -0.47267322979645288, -0.45459839098175076, -0.43606231620302177,
      -0.4170781444842061, -0.39765901484924127, -0.37781806632206677,
      -0.35756843792661996, -0.33692326868684008, -0.31589569762666508,
      -0.29449886377003487, -0.27274590614088656, -0.2506499637631604,
      -0.22822417566079287, -0.20548168085772428, -0.18243561837789196,
      -0.15909912724523509, -0.13548534648369215, -0.11160741511720289,
      -0.087478472169702851, -0.063111656665133034, -0.038520107627431757,
      -0.013716964080536437, 0.011284634951613165, 0.036471550445078563,
      0.061830643375922326, 0.087348774720204941, 0.11301280545398824,
      0.13880959655333297, 0.1647260089943009, 0.19074890375295422,
      0.21686514180535379, 0.24306158412756118, 0.26932509169563668,
      0.29564252548564351, 0.32200074647364257, 0.34838661563569451,
      0.37478699394786136, 0.40118874238620517, 0.4275787219267862,
      0.45394379354566616, 0.48027081821890727, 0.50654665692257039,
      0.53275817063271713, 0.55889222032540853, 0.58493566697670651,
      0.6108753715626718, 0.636698195059367, 0.66239099844285332,
      0.687940642689191, 0.71333398877444232, 0.738557897674669,
      0.76359923036593191, 0.78844484782429236, 0.813081611025814,
      0.8374963809465541, 0.86167601856257758, 0.88560738484994472,
      0.90927734078471711, 0.93267274734295547, 0.95578046550072226,
      0.97858735623407722, 1.0010802805190857, 1.0232460993318044,
      1.0450716736482968, 1.066543864444625, 1.08764953269685,
      1.1083755393810326, 1.1287087454732347, 1.1486360119495183,
      1.1681441997859443, 1.1872201699585732, 1.2058507834434677,
      1.224022901216689, 1.241723384254299, 1.2589390935323586,
      1.2756568900269287, 1.2918636347140704, 1.3075461885698474,
      1.3226914125703186, 1.337286167691548, 1.3513173149095945,
      1.3647717152005212, 1.3776364525345601, 1.3899064836165982,
      1.4015865539738057, 1.4126820210545228, 1.4231982423070904,
      1.4331405751798494, 1.4425143771211411, 1.4513250055793063,
      1.459577818002685, 1.4672781718396191, 1.4744314245384482,
      1.4810429335475142, 1.4871180563151576, 1.4926621502897193,
      1.497680572919539, 1.5021786816529596, 1.5061618339383203,
      1.5096353872239625, 1.5126046989582271, 1.5150751265894553,
      1.5170520275659873, 1.5185407593361639, 1.5195466793483259,
      1.520075145050815, 1.5201315138919707, 1.5197211433201356,
      1.5188493907836487, 1.5175216137308518, 1.5157431696100849,
      1.5135194158696896, 1.510855709958008, 1.5077574093233779,
      1.5042298714141429, 1.5002784536786415, 1.495908513565217,
      1.4911254085222081, 1.485934495997957, 1.4803411334408036,
      1.4743506782990894, 1.4679684880211545, 1.4611999200553412,
      1.4540503318499882, 1.446525080853438, 1.4386295245140313,
      1.4303690202801074, 1.4217489256000095, 1.412774597922076,
      1.4034513946946507, 1.393784673366071, 1.3837797913846799,
      1.3734421061988169, 1.3627769752568248, 1.3517897560070431,
      1.3404858058978129, 1.3288704823774751, 1.3169491428943694,
      1.3047271448968376, 1.2922098458332214, 1.2794026031518604,
      1.2663107743010964, 1.2529397167292682, 1.2392947878847185,
      1.2253813452157891, 1.2112047461708184, 1.196770348198148,
      1.1820835087461192, 1.1671495852630722, 1.1519739351973488,
      1.1365619159972895, 1.1209188851112351, 1.105050199987526,
      1.0889612180745023, 1.0726572968205064, 1.0561437936738785,
      1.0394260660829595, 1.0225094714960905, 1.0053993673616111,
      0.98810111112786414, 0.970620060243189, 0.952961572155927,
      0.93513100431441853, 0.91713371416700507, 0.89897505916202636,
      0.88066039674782481, 0.86219508437274006, 0.84358447948511384,
      0.82483393953328588, 0.80594882196559736, 0.78693448423038981,
      0.7677962837760034, 0.74853957805077953, 0.72916972450305839,
      0.7096920805811805, 0.69011200373348791, 0.67043485140832082,
      0.65066598105401974, 0.63081075011892618, 0.61087451605138021,
      0.59086263629972291, 0.5707804683122959, 0.55063336953743891,
      0.53042669742349347, 0.51016580941880008, 0.48985606297169915,
      0.46950281553053208, 0.44911142454364045, 0.4286872474593636,
      0.40823564172604382, 0.38776196479201974, 0.36727157410563449,
      0.34676982711522791, 0.32626208126914136, 0.305753694015715,
      0.28525002280328959, 0.26475642508020586, 0.24427825829480571,
      0.22382087989542968, 0.20338964733041778, 0.1829899180481116,
      0.1626270494968507, 0.14230639912497775, 0.12203332438083303,
      0.10181318271275654, 0.081651331569089852, 0.061553128398172341,
      0.041523930648347571, 0.021569095767954672, 0.0016939812053345551,
      -0.01809605559117209, -0.037795657173224133, -0.057399466092480658,
      -0.076902124900600763, -0.096298276149244, -0.11558256239006941,
      -0.1347496261747359, -0.15379411005490368, -0.17271065658223045,
      -0.19149390830837537, -0.21013850778499926, -0.22863909756375944,
      -0.24699032019631659, -0.26518681823432888, -0.28322323422945583,
      -0.30109421073335679, -0.31879439029769008, -0.33631841547411617,
      -0.35366092881429373, -0.37081657286988112, -0.38777999019253862,
      -0.40454582333392425, -0.42110871484569856, -0.43746330727952026,
      -0.45360424318704784, -0.46952616511994061, -0.48522371562985811,
      -0.50069153726845983, -0.51592427258740414, -0.53091656413835087,
      -0.54566305447295893, -0.56015838614288749, -0.57439720169979569,
      -0.58837414369534358, -0.60208385468118863, -0.61552097720899068,
      -0.62868015383040909, -0.64155602709710335, -0.65414323956073217,
      -0.66643714858139569, -0.67843786366529912, -0.69014743295650838,
      -0.70156791031837684, -0.71270134961426135, -0.72354980470751684,
      -0.73411532946149982, -0.744399977739565, -0.75440580340506835,
      -0.76413486032136468, -0.77358920235181039, -0.78277088335976075,
      -0.791681957208571, -0.80032447776159754, -0.80870049888219475,
      -0.81681207443371839, -0.8246612582795243, -0.83225010428296786,
      -0.83958066630740436, -0.84665499821619039, -0.85347515387268036,
      -0.86004318714022987, -0.866361151882195, -0.87243110196193074,
      -0.87825509124279377, -0.88383517358813823, -0.88917340286131974,
      -0.89427183292569412, -0.89913251764461755, -0.90375751088144485,
      -0.90814886649953164, -0.9123086383622333, -0.91623888033290557,
      -0.91994164627490471, -0.92341899005158468, -0.92667296552630229,
      -0.92970562656241218, -0.932519027023271, -0.935115220772233,
      -0.93749626167265454, -0.93966420358789082, -0.94162110038129743,
      -0.94336900591623019, -0.944909974056044, -0.94624605866409528,
      -0.947379313603738, -0.94831179273832966, -0.94904554993122459,
      -0.94958263904577844, -0.94992511394534684, -0.9500750284932854,
      -0.95003443655294961, -0.94980539198769465, -0.94938994866087667,
      -0.94879016043585107, -0.94800808117597268, -0.94704576474459778,
      -0.94590526500508165, -0.94458863582077979, -0.94309793105504813,
      -0.94143520457124164, -0.93960251023271546, -0.93760190190282644,
      -0.935435433444929, -0.933105158722379, -0.9306131315985321,
      -0.92796140593674359, -0.92515203560036929, -0.9221870744527646,
      -0.91906857635728467, -0.91579859517728546, -0.91237918477612279,
      -0.90881239901715172, -0.90510029176372742, -0.90124491687920616,
      -0.89724832822694334, -0.89311257967029412, -0.88883972507261377,
      -0.88443181829725859, -0.87989091320758372, -0.87521906366694513,
      -0.87041832353869764, -0.86549074668619719, -0.86043838697279906,
      -0.8552632982618591, -0.84996753441673256, -0.84455314930077507,
      -0.83902219677734224, -0.833376730709789, -0.82761880496147189,
      -0.82175047339574581, -0.81577378987596638, -0.80969080826548945,
      -0.80350358242767, -0.79721416622586383, -0.7908246135234267,
      -0.78433697818371351, -0.7777533140700803, -0.7710756750458827,
      -0.76430611497447509, -0.75744668771921486, -0.75049944714345618,
      -0.74346644711055521, -0.73634974148386723, -0.72915138412674785,
      -0.72187342890255224, -0.71451792967463634, -0.70708694030635555,
      -0.69958251466106547, -0.69200670660212082, -0.68436156999287867,
      -0.67664915869669362, -0.66887152657692139, -0.66103072749691716,
      -0.653128815320037, -0.645167843909636, -0.63714986712907007,
      -0.62907693884169424, -0.62095111291086436, -0.61277444319993613,
      -0.60454898357226416, -0.59627678789120508, -0.58795991002011416,
      -0.57960040382234679, -0.57120032316125846, -0.5627617219002049,
      -0.554286653902541, -0.5457771730316231, -0.53723533315080629,
      -0.52866318812344615, -0.52006279181289772, -0.5114361980825175,
      -0.50278546079566078, -0.49411263381568266, -0.4854197710059388,
      -0.476708926229785, -0.46798215335057636, -0.45924150623166909,
      -0.45048903873641766, -0.44172680472817843, -0.43295685807030693,
      -0.42418125262615747, -0.41540204225908739, -0.40662128083245125,
      -0.39784102220960493, -0.38906332025390339, -0.38029022882870273,
      -0.37152380179735811, -0.36276609302322538, -0.3540191563696598,
      -0.34528504570001683, -0.3365658148776523, -0.32786351776592093,
      -0.3191802082281795, -0.31051794012778289, -0.30187876732808683,
      -0.29326474369244659, -0.28467792308421769, -0.27612035936675589,
      -0.26759410640341652, -0.25910121805755515, -0.25064374819252738,
      -0.24222375067168872, -0.23384327935839394, -0.22550438811599996,
      -0.21720913080786158, -0.20895955617508891, -0.20075709310563508,
      -0.19260196660736575, -0.18449426336539726, -0.17643407006484513,
      -0.16842147339082569, -0.16045656002845465, -0.15253941666284751,
      -0.14467012997912115, -0.13684878666239123, -0.12907547339777348,
      -0.1213502768703839, -0.11367328376533832, -0.1060445807677529,
      -0.09846425456274345, -0.090932391835425938, -0.0834490792709163,
      -0.076014403554330534, -0.068628451370783938, -0.061291309405393513,
      -0.0540030643432748, -0.046763802869543646, -0.039573611669316,
      -0.032432577427707873, -0.025340786829835052, -0.0182983265608136,
      -0.011305283305759528, -0.0043617437497885971, 0.0025322054219836833,
      0.009376477524440362, 0.016170985872465928, 0.022915643780944513,
      0.029610364564760214, 0.036255061538797, 0.042849648017939022,
      0.049394037317070275, 0.055888142751074857, 0.062331877634836816,
      0.068725155283240164, 0.0750678890111694, 0.081359992133507766,
      0.087601377965139754, 0.093791959820949455, 0.099931651015820716,
      0.10602036486463785, 0.11205801468228482, 0.11804451378364571,
      0.12397977548360462, 0.12986371309704542, 0.1356962399388523,
      0.1414772693239098, 0.14720671456710091, 0.1528844889833105,
      0.1585105058874223, 0.16408467859432038, 0.169606920418889,
      0.17507714467601215, 0.18049526468057375, 0.18586119374745796,
      0.19117484519154893, 0.19643613232773055, 0.20164496847088728,
      0.20680126693590251, 0.21190494103766069, 0.21695590409104573,
      0.22195406941094195, 0.22689935031223313, 0.2317916601098034,
      0.23663091211853696, 0.24141701965331777, 0.24614989602902981,
      0.25082945456055761, 0.25545560856278454, 0.26002827135059492,
      0.26454735623887282, 0.26901277654250239, 0.27342444557636764,
      0.2777822766553526, 0.28208618309434125, 0.28633607820821777,
      0.29053187531186631, 0.29467348772017077, 0.29876082874801546,
      0.302793811710284, 0.3067723499218607, 0.31069635669762957,
      0.31456574535247472, 0.31838042920128012, 0.32214032155892997,
      0.32584533574030822, 0.32949538506029891, 0.33309038283378617,
      0.33663024237565442, 0.340114877000787, 0.34354420002406827,
      0.34691812476038236, 0.35023656452461333, 0.35349943263164524,
      0.35670664239636196, 0.35985810713364796, 0.36295374015838683,
      0.36599345478546286, 0.36897716432976013, 0.37190478210616279,
      0.37477622142955475, 0.37759139561481991, 0.38035021797684254,
      0.38305260183050677, 0.38569846049069656, 0.38828770727229583,
      0.39082025549018884, 0.39329601845925954, 0.39571490949439214,
      0.39807684191047049, 0.40038172902237895, 0.40262948414500116,
      0.40482002059322142, 0.40695325168192376, 0.40902909072599236,
      0.41104745104031104, 0.4130082459397641, 0.41491138873923544,
      0.41675679275360905, 0.41854437129776917, 0.42027403768659971,
      0.4219457052349852, 0.423559287257809, 0.42511469706995553,
      0.42661184798630863, 0.42805065332175268, 0.42943102639117159,
      0.43075288050944938, 0.43201612899147013, 0.43322068515211787,
      0.43436646230627668, 0.43545337376883086, 0.436481332854664,
      0.43745025287866063, 0.43836004715570442, 0.43921062900067959,
      0.44000191172847031, 0.4407338086539605, 0.44140623309203403,
      0.44201909835757547, 0.4425723177654684, 0.4430658046305973,
      0.44349947226784575, 0.44387323399209822, 0.44418700311823855,
      0.44444069296115085, 0.44463421683571924, 0.4447674880568277,
      0.44484041993936024, 0.444852925798201, 0.44480491894823415,
      0.44469631270434345, 0.44452702038141328, 0.4442969552943275,
      0.44400603075797024, 0.44365416008722552, 0.44324125659697733,
      0.44276723360211012, 0.44223200441750732, 0.44163548235805344,
      0.44097758073863247, 0.44025821287412836, 0.43947729207942537,
      0.43863477577237669, 0.43773113409265141, 0.43676716797996123,
      0.43574368388788093, 0.43466148826998535, 0.43352138757984876,
      0.43232418827104663, 0.43107069679715343, 0.42976171961174386,
      0.42839806316839257, 0.42698053392067453, 0.42550993832216449,
      0.42398708282643716, 0.42241277388706733, 0.42078781795762965,
      0.41911302149169904, 0.41738919094285004, 0.41561713276465762,
      0.41379765341069652, 0.41193155933454129, 0.410019656989767,
      0.40806275282994825, 0.40606165330865968, 0.40401716487947642,
      0.40193009399597268, 0.39980124711172377, 0.39763143068030427,
      0.39542145115528837, 0.39317211499025173, 0.39088422863876859,
      0.38855859855441405, 0.38619603119076268, 0.38379733300138913,
      0.38136331043986832, 0.37889476995977484, 0.37639251801468365,
      0.37385736105816947, 0.37129010554380693, 0.36869155792517078,
      0.36606252465583611, 0.36340381218937717, 0.36071622697936923,
      0.3580005754793868, 0.35525766414300458, 0.35248829942379739,
      0.34969328777534003, 0.34687343565120721, 0.34402954950497389,
      0.34116243579021405, 0.3382729009605035, 0.33536175146941666,
      0.33242979377052811, 0.32947783431741273, 0.32650667956364515,
      0.32351713596280035, 0.32051000996845297, 0.31748610803417771,
      0.31444623661354926, 0.31139120216014271, 0.30832181112753249,
      0.30523886996929356, 0.30214318513900057, 0.29903556309022844,
      0.29591681027655159, 0.2927877331515451, 0.28964913816878368,
      0.28650183178184208, 0.28334662044429504, 0.2801843106097171,
      0.27701570873168346, 0.27384162126376804, 0.2706628546595467,
      0.26748021537259375, 0.26429450985648389, 0.26110654456479188,
      0.25791712595109251, 0.25472706046896065, 0.25153715457197068,
      0.24834821471369772, 0.2451610473477166, 0.24197645892760178,
      0.23879525590692816, 0.23561824473927051, 0.23244623187820354,
      0.22928002377730206, 0.22612042689014084, 0.22296824767029458,
      0.21982429257133818, 0.21668936804684621, 0.21356428055039353,
      0.21044983653555493, 0.20734684245590462, 0.20425610476501835,
      0.20117842991647047, 0.19811462436383562, 0.19506549456068858,
      0.19203184696060413, 0.18901448801715717, 0.18601422418392219,
      0.18303186191447424, 0.18006820766238785, 0.17712406788123791,
      0.17420024902459907, 0.17129755754604625, 0.16841679989915409,
      0.16555878253749734, 0.16272431191465087, 0.15991419448418931,
      0.15712923669968756, 0.15437024501472013, 0.15163802588286213,
      0.14893338575768811, 0.14625713109277252, 0.14361006834169079,
      0.14099300395801739, 0.1384067443953271, 0.13585209610719454,
      0.1333298655471945, 0.13084085916890192, 0.12838588342589141,
      0.1259657447717378, 0.12358124966001584, 0.12123320454430014,
      0.1189224158781657, 0.11664969011518708, 0.11441583370893921,
      0.11222165311299667, 0.11006795478093442, 0.10795554516632704,
      0.10588523072274941, 0.10385781790377624, 0.10187411316298225,
      0.0999349229539424, 0.098041053730230893, 0.0961933119454233,
      0.094392504053093837, 0.09263943650681751, 0.0909349157601689,
      0.089279748266722914, 0.0876747404800542, 0.086120698853737576,
      0.084618429841347834, 0.08316873989645969, 0.08177243547264787,
      0.080430323023487349, 0.079143209002552534, 0.07791189986341833,
      0.076737202059659587, 0.075619922044850948, 0.0745608662725673,
      0.0735608411963833, 0.072620653269873756, 0.071741108946613369,
      0.070923014680177, 0.070167176924139346, 0.0694744021320751,
      0.068845496757559174, 0.068281267254166236, 0.067782520075471156,
      0.067350061675048548, 0.066984698506473234, 0.066687237023320009,
      0.066458483679163627, 0.066299244927578743, 0.066210327222140208,
      0.066192537016422817, 0.066246680601502586, 0.066373207711129423,
      0.066571455429030563, 0.066840544411623487, 0.067179595315325649,
      0.0675877287965547, 0.068064065511727986, 0.068607726117263193,
      0.0692178312695777, 0.069893501625089061, 0.070633857840214878,
      0.071438020571372454, 0.072305110474979478, 0.0732342482074534,
      0.074224554425211711, 0.075275149784672, 0.0763851549422517,
      0.077553690554368379, 0.078779877277439528, 0.080062835767882673,
      0.0814016866821153, 0.08279555067655496, 0.084243548407619134,
      0.08574480053172534, 0.087298427705291115, 0.088903550584733912,
      0.0905592898264713, 0.092264766086920733, 0.094019100022499871,
      0.095821412289626068, 0.097670823544716887, 0.09956645444418985,
      0.10150742564446279, 0.1034928578019526, 0.10552187157307703,
      0.10759358761425378, 0.10970712658190016, 0.11186160913243369,
      0.11405615592227204, 0.11628988760783263, 0.11856192484553296,
      0.12087138829179048, 0.12321739860302296, 0.12559907643564766,
      0.1280155424460821, 0.13046591729074394, 0.13294932162605055,
      0.13546487610841956, 0.13801170139426844, 0.14058891814001467,
      0.14319564700207577, 0.14583100863686932, 0.14849412370081275,
      0.15118411285032402, 0.15390009674181984, 0.15664119603171811,
      0.15940653137643634, 0.16219522343239207, 0.16500639285600271,
      0.1678391603036859, 0.17069264643185919, 0.17356597189693987,
      0.17645825735534568, 0.179368623463494, 0.18229619087780241,
      0.18524008025468844, 0.1881994122505696, 0.19117330752186326,
      0.1941608867249871, 0.19716127051635848, 0.20017357955239512,
      0.20319693448951437, 0.20623045598413386, 0.20927326469267102,
      0.21232448127154374, 0.21538322637716889, 0.21844862066596404,
      0.22151978479434709, 0.22459583941873532, 0.22767590519554629,
      0.23075910278119752, 0.23384455283210667, 0.23693137600469102,
      0.24001869295536821, 0.24310562434055577, 0.24619129081667115,
      0.24927481304013185, 0.25235531166735553, 0.25543190735475951,
      0.25850372075876121, 0.26156987253577857, 0.2646294833422288,
      0.26768167383452945, 0.27072556466909786, 0.273760276502352,
      0.27678492999070942, 0.27979864579058678, 0.28280054455840237,
      0.28578974695057341, 0.28876537362351734, 0.29172654523365193,
      0.29467238243739452, 0.2976020058911627, 0.300514536251374,
      0.30340909417444584, 0.30628480031679572, 0.30914077533484124,
      0.31197613988499984, 0.31479001462368927, 0.31758152020732666,
      0.32034977729232977, 0.32309390653511605, 0.32581302859210309,
      0.32850626411970829, 0.33117273377434925, 0.3338115582124434,
      0.33642185809040825, 0.33900275406466179, 0.34155336679162074,
      0.344072816927703, 0.34656022512932588, 0.34901471205290724,
      0.35143539835486431, 0.35382140469161483, 0.3561718517195761,
      0.35848586009516575, 0.36076255047480138, 0.36300104351490026,
      0.36520045987188005, 0.3673599202021583, 0.36947854516215245,
      0.37155545540828011, 0.37358977159695872, 0.37558061438460566,
      0.3775271044276387, 0.37942836238247518, 0.38128350890553259,
      0.38309166465322864, 0.38485195028198094, 0.38656348644820654,
      0.38822539380832322, 0.38983679301874835, 0.39139680473589955,
      0.39290454961619442, 0.39435914831605046, 0.39575972149188515,
      0.39710538980011584, 0.39839527389716023, 0.39962849443943571,
      0.40080417208335989, 0.40192142748535031, 0.40297938130182431,
      0.40397715418919966, 0.40491386680389374, 0.4057886398023241,
      0.40660059384090808, 0.40734884957606332, 0.40803252766420733,
      0.40865074876175778, 0.40920263352513186, 0.40968730261074737,
      0.41010387667502157, 0.41045147637437229, 0.41072922236521681,
      0.41093623530397261, 0.4110716358470573, 0.4111345446508885,
      0.4111241191937684, 0.41104036393685439, 0.4108841303683276,
      0.41065630680708815, 0.41035778157203634, 0.40998944298207224,
      0.40955217935609578, 0.40904687901300724, 0.40847443027170671,
      0.40783572145109448, 0.40713164087007053, 0.40636307684753481,
      0.40553091770238775, 0.40463605175352924, 0.40367936731985948,
      0.40266175272027876, 0.401584096273687, 0.4004472862989843,
      0.39925221111507114, 0.39799975904084717, 0.39669081839521292,
      0.39532627749706817, 0.39390702466531341, 0.39243394821884836,
      0.39090793647657335, 0.38932987775738864, 0.38770066038019396,
      0.38602117266388991, 0.38429230292737643, 0.38251493948955362,
      0.38068997066932148, 0.37881828478558022, 0.37690077015723006,
      0.37493831510317105, 0.37293180794230341, 0.37088213699352685,
      0.36879019057574214, 0.36665685700784911, 0.36448302460874787,
      0.36226958169733842, 0.36001741659252112, 0.357727417613196,
      0.35540047307826317, 0.35303747130662266, 0.35063930061717491,
      0.34820684932881957, 0.34574100576045713, 0.34324265823098765,
      0.34071269505931129, 0.33815200456432803, 0.335561475064938,
      0.3329419948800415, 0.33029445232853843, 0.32761973572932912,
      0.32491873340131361, 0.32219233366339195, 0.31944142483446408,
      0.31666689523343067, 0.31386963317919159, 0.31105052699064684,
      0.30821046498669663, 0.30535033548624135, 0.30247102680818078,
      0.29957342727141495, 0.29665842519484431, 0.29372690889736885,
      0.29077976669788874, 0.287817886915304, 0.28484215786851491,
      0.28185346787642135, 0.27885270525792377, 0.27584075833192195,
      0.27281851541731628, 0.26978686483300673, 0.26674669489789354,
      0.26369889393087681, 0.26064435025085658, 0.25758395217673319,
      0.25451858802740596, 0.25144914612177627, 0.24837651477874342,
      0.24530158231720797, 0.24222523705606969, 0.23914836731422895,
      0.23607186141058575, 0.23299660766404026, 0.22992349439349252,
      0.22685340991784284, 0.22378724255599106, 0.2207258806268376,
      0.21767021244928228, 0.21462112634222563, 0.21157951062456742,
      0.20854625361520795, 0.20552224363304725, 0.20250836899698552,
      0.19950551802592287, 0.19651457903875941, 0.19353644035439518,
      0.19057199029173014, 0.187622117169665, 0.18468770930709949,
      0.18176965502293388, 0.17886884263606823, 0.17598616046540272,
      0.17312249682983721, 0.1702787400482722, 0.16745577843960757,
      0.16465450032274356, 0.16187579401658012, 0.15912054784001764,
      0.15638965011195607, 0.15368398915129552, 0.15100445327693626,
      0.14835193080777823, 0.1457273100627218, 0.14313147936066678,
      0.14056532702051355, 0.13802974136116217, 0.13552561070151267,
      0.13305382336046537, 0.13061526765691978, 0.12821083190977695,
      0.12584140443793657, 0.1235078735602988, 0.12121112759576369,
      0.1189520548632314, 0.11673154368160213, 0.1145504823697759,
      0.11240975924665292, 0.11031026263113324, 0.10825288084211697,
      0.10623850219850438, 0.10426801501919544, 0.10234230762309035,
      0.10046226832908917, 0.098628785456092161, 0.0968427473229993,
      0.09510504224871083, 0.093416558552126855, 0.091778184552147382,
      0.090190808567672628, 0.08865531891760256, 0.087172603920837616,
      0.085743551896277817, 0.084369051162823158, 0.08304999003937398,
      0.081787256844830153, 0.080581739898091961, 0.0794343275180594,
      0.078345908023632754, 0.077317369733712116, 0.076349600967197534,
      0.075443490042989142, 0.07459992527998717, 0.073819794997091556,
      0.073103987513202628, 0.072453391147220408, 0.071868894218044974,
      0.0713513850445766, 0.0709017519457153, 0.070520883240361182,
      0.070209667247414412, 0.069968992285775147, 0.06979974667434348,
      0.0697028187320195, 0.069679096777703425, 0.069729238927816586,
      0.069852719687133261, 0.070048634218231945, 0.070316077510578084,
      0.070654144553637346, 0.071061930336875134, 0.071538529849756907,
      0.072083038081748346, 0.07269455002231491, 0.073372160660922073,
      0.074114964987035431, 0.074922057990120361, 0.0757925346596426,
      0.076725489985067424, 0.077720018955860573, 0.0787752165614874,
      0.079890177791413566, 0.08106399763510462, 0.082295771082025834,
      0.0835845931216429, 0.0849295587434213, 0.08632976293682651,
      0.087784300691324146, 0.089292266996379654, 0.090852756841458632,
      0.092464865216026468, 0.0941276871095488, 0.095840317511491108,
      0.097601851411318885, 0.099411383798497718, 0.10126800966249307,
      0.10317082399277044, 0.10511892177879543, 0.10711139801003346,
      0.10914734767595013, 0.11122586576601096, 0.11334604726968135,
      0.11550698717642693, 0.11770778047571324, 0.11994752215700602,
      0.12222530720977032, 0.12454023062347178, 0.126891387387576,
      0.12927787249154848, 0.13169878092485485, 0.13415320767696051,
      0.13664024773733094, 0.13915899609543181, 0.1417085477407285,
      0.1442879976626866, 0.14689644085077166, 0.14953297229444909,
      0.15219668698318448, 0.15488667990644336, 0.15760204605369119,
      0.16034188041439354, 0.16310527797801608, 0.16589133373402404,
      0.16869914267188305, 0.1715277997810587, 0.17437640005101682,
      0.17724403847122211, 0.1801298100311407, 0.18303280972023783,
      0.18595213252797918, 0.18888687344383021, 0.19183612745725651,
      0.19479898955772351, 0.19777455473469682, 0.20076191797764181,
      0.20376017427602422, 0.20676841861930936, 0.20978574599696281,
      0.21281125139845031, 0.21584402981323697, 0.21888317623078862,
      0.22192778564057064, 0.22497695303204862, 0.228029773394688,
      0.23108534171795442, 0.23414275299131332, 0.23720110220423021,
      0.24025948434617114, 0.24331699440660062, 0.24637272737498464,
      0.24942577824078874, 0.25247524199347848, 0.25552021362251931,
      0.25855978811737679, 0.2615930604675164, 0.26461912566240375,
      0.26763707869150433, 0.27064601454428366, 0.27364502821020714,
      0.27663321467874025, 0.27960966893934891, 0.28257348598149817,
      0.28552376079465391, 0.28845958836828134, 0.29138006369184621,
      0.29428428175481391, 0.29717133754664987, 0.30004032605681991,
      0.30289034227478978, 0.30572048119002415, 0.30852983779198906,
      0.31131750707014988, 0.31408258401397221, 0.31682416361292154,
      0.31954134085646352, 0.32223321073406352, 0.32489886823518715,
      0.32753740834929973, 0.330147926065867, 0.33272951637435438,
      0.33528127426422749, 0.33780229472495177, 0.34029167274599287,
      0.34274850331681594, 0.34517188142688693, 0.34756090206567108,
      0.349914660222634, 0.35223225088724119, 0.35451276904895829,
      0.35675530969725078, 0.35895896782158393, 0.36112283841142362,
      0.363246016456235, 0.36532759694548389, 0.36736667486863578,
      0.369362345215156, 0.37131370297451038, 0.37321984313616413,
      0.37507986068958277, 0.37689285062423206, 0.37865790792957743,
      0.38037412759508432, 0.38204060461021816, 0.38365643396444482,
      0.38522071064722946, 0.38673252964803773, 0.38819098595633511,
      0.38959517456158738, 0.39094419045325957, 0.39223712862081778,
      0.39347308405372738, 0.3946511517414531, 0.39577042667346168,
      0.39683000383921746, 0.39782897822818719, 0.39876644482983514,
      0.39964149863362797, 0.40045323462903021, 0.40120074780550818,
      0.40188313315252694, 0.40249948565955218, 0.40304890031604917,
      0.40353047211148391, 0.40394329603532142, 0.40428646707702742,
      0.40455908022606762, 0.40476023047190712, 0.40488901280401191,
      0.40494452221184724, 0.40492585368487849, 0.40483210221257149,
      0.40466237492821366, 0.40441650773426563, 0.40409546620582443,
      0.40370031310352827, 0.40323211118801477, 0.40269192321992192,
      0.40208081195988743, 0.40139984016854963, 0.40065007060654595,
      0.39983256603451445, 0.39894838921309289, 0.39799860290291927,
      0.39698426986463153, 0.39590645285886722, 0.39476621464626516,
      0.39356461798746162, 0.39230272564309621, 0.39098160037380519,
      0.38960230494022807, 0.38816590210300123, 0.386673454622764,
      0.38512602526015249, 0.38352467677580659, 0.38187047193036217,
      0.38016447348445909, 0.37840774419873335, 0.37660134683382473,
      0.374746344150369, 0.37284379890900643, 0.37089477387037223,
      0.36890033179510689, 0.36686153544384609, 0.36477944757722969,
      0.36265513095589336, 0.36048964834047692, 0.35828406249161743,
      0.35603943616995293, 0.35375683213612119, 0.3514373131507601,
      0.3490819419745077, 0.34669178136800155, 0.34426789409187997,
      0.3418113429067805, 0.3393231905733412, 0.33680449985219968,
      0.33425633350399403, 0.33167975428936219, 0.32907582496894194,
      0.32644560830337116, 0.32379016705328789, 0.32111056397932963,
      0.31840786184213465, 0.31568312340234078, 0.31293741142058568,
      0.31017178865750739, 0.30738731787374279, 0.3045850618299325,
      0.301766083286711, 0.29893144500471935, 0.29608220974459226,
      0.29321944026697083, 0.29034419933248967, 0.28745754970179,
      0.2845605541355064, 0.28165427539428017, 0.27873977623874563,
      0.275818119429544, 0.27289036772731007, 0.2699575838926847,
      0.26702083068630283, 0.26408117086880545, 0.2611396672008271,
      0.258197382443009, 0.25525537935598575, 0.25231472070039862,
      0.24937646923688206, 0.24644168772607644, 0.24351143892861876,
      0.24058678560514712, 0.23766879051629919, 0.23475851642271295,
      0.23185702608502617, 0.22896538226387689, 0.22608464771990286,
      0.22321588521374214, 0.22036015750603233, 0.21751852735741148,
      0.21469205752851761, 0.21188181077998833, 0.2090888498724616,
      0.20631423756657541, 0.20355903662296743, 0.20082430980227581,
      0.19811111986513832, 0.19542052957219264, 0.19275360168407707,
      0.19011139896142915, 0.18749498416488602, 0.18490542005508798,
      0.18234376939266977, 0.17981109493827233, 0.17730845945253057,
      0.17483692569608533, 0.17239755642957155, 0.16999141441362994,
      0.16761956240889558, 0.16528306317600924, 0.16298297947560592,
      0.16072037406832634, 0.15849630971480555, 0.15631184917568403,
      0.15416805521159732, 0.15206599058318562, 0.15000671805108451,
      0.147991300375934, 0.14602080031837006, 0.14409628063903235,
      0.14221880409855703, 0.14038943345758317, 0.13860923147674842,
      0.13687926091669048, 0.13520058453804729, 0.13357426510145676,
      0.13200136536755677, 0.13048294809698513, 0.12902007605037974,
      0.12761381198837859, 0.12626521867161941, 0.12497535886074024,
      0.1237452953163788, 0.12257609079917302, 0.12146880806976082,
      0.12042450988878003, 0.1194442590168686, 0.11852911821466436,
      0.11768015024280518, 0.11689841786192896, 0.11618498383267367,
      0.115540910915677, 0.11496726187157696, 0.11446509946101141,
      0.11403548644461811, 0.1136794855830352, 0.11339815963690031,
      0.11319257136685154, 0.11306378353352659, 0.11301285889756352,
      0.11304086021959997, 0.11314885026027383, 0.11333789178022335,
      0.11360904754008594, 0.11396338030049991, 0.11440195282210266,
      0.11492582786553271, 0.11553606819142712, 0.11623373656042466,
      0.11701989573316227, 0.11789560847027883, 0.11886193753241128,
      0.11991994568019843, 0.12107069567427703, 0.12231525027528631,
      0.12365467224386312, 0.12509002434064562, 0.1266223693262718,
      0.12825276996137938, 0.12998228900660638, 0.13181181767609496,
      0.13374075394474666, 0.13576772686478966, 0.13789135913182884,
      0.14011027344146942, 0.14242309248931667, 0.1448284389709758,
      0.14732493558205173, 0.14991120501814992, 0.15258586997487533,
      0.15534755314783322, 0.15819487723262865, 0.16112646492486712,
      0.16414093892015336, 0.16723692191409273, 0.17041303660229043,
      0.17366790568035259, 0.17700015184388146, 0.18040839778848611,
      0.1838912662097677, 0.18744737980333537, 0.19107536126479049,
      0.19477383328974204, 0.19854141857379115, 0.20237673981254725,
      0.20627841970161118, 0.21024508093659239, 0.21427534621309174,
      0.21836783822671879, 0.22252117967307417, 0.22673399324776783,
      0.23100490164640011, 0.23533252756458076, 0.23971549369791037,
      0.24415242274199914, 0.24864193739244692, 0.25318266034486403,
      0.25777321429485189, 0.26241222193801689, 0.2670983059699642,
      0.27183008908629913, 0.27660619398262676, 0.28142524335455205,
      0.28628585989768046, 0.29118666630761697, 0.29612628527996693,
      0.30110333951033535, 0.3061164516943275, 0.31116424452754843,
      0.31624534070560328, 0.32135836292409764, 0.326501933878636,
      0.33167467626482405, 0.33687521277826665, 0.34210216611456928,
      0.34735415896933686, 0.35262981403817462, 0.35792775401668775,
      0.363246601600483, 0.36858497948516078, 0.37394151036633255,
      0.37931481693959729, 0.38470352190056628, 0.39010624794483856,
      0.39552161776802541, 0.40094825406572604, 0.40638477953355145,
      0.4118298168671008, 0.41728198876198563, 0.42273991791380472,
      0.42820222701816935, 0.4336675387706786, 0.43913447586694393,
      0.44460166100256387, 0.45006771687315072, 0.45553126617430229,
      0.46099093160163074, 0.46644533585073489, 0.47189310161722581,
      0.47733285159670458, 0.48276320848477733, 0.48818279497704953,
      0.49359023376912614, 0.49898414755661274, 0.50436315903511386,
      0.50972589090023546, 0.51507096584758227, 0.52039700657275922,
      0.52570263577137188, 0.5309864761390255, 0.53624715037132442,
      0.5414832811638749, 0.5466934912122815, 0.55187640321214959,
      0.557030639859084, 0.56215482384869053, 0.56724757787657354,
      0.57230752463833889, 0.57733328682959162, 0.5823234871459364,
      0.5872767482829806, 0.59219169293632445, 0.597066943801579,
      0.60190112357434411, 0.60669285495023, 0.61144076062483665,
      0.61614346329377467, 0.62079958565264359, 0.62540775039705432,
      0.62996658022260643, 0.63447469782491051, 0.63893072589956623,
      0.64333328714218407, 0.64768100424836461, 0.651972499913717,
      0.65620639683384263, 0.6603813177043506, 0.66449588522084169,
      0.66854872207892546, 0.67253845097420306, 0.67646369460228373,
      0.68032307565876826, 0.68411521683926535, 0.68783874083937968,
      0.691492270354714, 0.69507442808087683, 0.69858383671346946,
      0.70201911894810143, 0.70537889748037386, 0.70866179500589532,
      0.71186643422026774, 0.7149914378190998, 0.71803542849799284,
      0.720997028952556, 0.72387486187839067, 0.72666754997110539,
      0.72937371592630229, 0.73199198243958952, 0.734520972206569,
      0.73695930792284936, 0.73930561228403247, 0.74155850798572631,
      0.74371661772353381, 0.745778564193062, 0.74774297008991486,
      0.74960845810969789, 0.751373650948016, 0.75303717130047454,
      0.754597641862679, 0.7560536853302342, 0.75740392439874538,
      0.75864698176381762, 0.7597814801210564, 0.76080604216606651,
      0.76171929059445309, 0.76251984810182161, 0.76320633738377741,
      0.763777381135925, 0.7642316020538702, 0.76456762283321777,
      0.764784066169573, 0.7648795547585413, 0.76485271129572718,
      0.76470215847673673, 0.76442651899717451, 0.76402441555264555,
      0.76349447334489329, 0.76283616759847206, 0.76205105741963608,
      0.76114101540742818, 0.76010791416089341, 0.758953626279074,
      0.75768002436101578, 0.75628898100576059, 0.75478236881235383,
      0.753162060379838, 0.75142992830725841, 0.74958784519365684,
      0.74763768363807959, 0.7455813162395678, 0.74342061559716832,
      0.74115745430992186, 0.738793704976875, 0.73633124019706908,
      0.73377193256955031, 0.73111765469335976, 0.72837027916754393,
      0.725531678591145, 0.72260372556320773, 0.71958829268277535,
      0.7164872525488919, 0.71330247776060107, 0.710035840916947,
      0.7066892146169732, 0.70326447145972359, 0.69976348404424171,
      0.69618812496957216, 0.69254026683475767, 0.68882178223884294,
      0.68503454378087125, 0.68118042405988677, 0.67726129567493343,
      0.6732790312250545, 0.66923550330929438, 0.66513258452669644,
      0.66097214747630473, 0.65675606475716319, 0.65248620896831422,
      0.64816445270880518, 0.64379266857767525, 0.63937272917397325,
      0.63490650709673757, 0.63039587494501759, 0.62584270531785191,
      0.621248870814289, 0.61661624403336834, 0.61194669757413833,
      0.60724210403563772, 0.60250433601691578, 0.59773526611701067,
      0.59293676693497155, 0.58811071106983759, 0.58325897112065728,
      0.57838341968646911, 0.57348592936632281, 0.568568372759256,
      0.56363262246431844, 0.55868055108054848, 0.55371403120699525,
      0.54873493544269714, 0.54374513638670208, 0.53874650663805279,
      0.533740918795793, 0.528730245458966, 0.52371635922661619,
      0.518701132697787, 0.51368643847152273, 0.50867414914686682,
      0.50366613732286314, 0.4986642755985557, 0.49367043657298815,
      0.48868649284520427, 0.48371431701424816, 0.47875578167916316,
      0.47381275943899337, 0.468887122892783, 0.46398074463957512,
      0.45909549727841403, 0.45423325340834353, 0.44939588562840721,
      0.444585266537649, 0.4398032687351115, 0.43505176481984253,
      0.43033262739088041, 0.42564772904727438, 0.4209989423880629,
      0.41638814001229513, 0.41181719451900972, 0.40728797850725557,
      0.40280236457607133, 0.398362225324506, 0.39396943335159823,
      0.38962586125639703, 0.38533338163794117, 0.38109386709527943,
      0.37690919022745073, 0.37278122363350363, 0.36871183991247714,
      0.36470291166342017, 0.36075631148537163, 0.35687391197737967,
      0.353057585738484, 0.34930920536773136, 0.34563064346416517,
      0.34202377262682865, 0.33849046545476591, 0.33503259454702039,
      0.3316520325026362, 0.32835065192065749, 0.32513032540012737,
      0.32199292554009007, 0.31894032493958946, 0.31597439619766921,
      0.31309701191337314, 0.31031004468574513, 0.3076153671138292,
      0.30501485179666865, 0.30251037133330777, 0.30010379832279027,
      0.29779700536415971, 0.2955918650564604, 0.2934902499987358,
      0.29149403279002972, 0.28960508602938556, 0.2878252823158487,
      0.286156494248461, 0.28460059442626806, 0.28315945544831206,
      0.28183494991363839, 0.28062895042128932, 0.27954332957031014,
      0.27857995995974327, 0.27774071418863377, 0.27702746485602447,
      0.2764420845609602, 0.27598644590248367, 0.2756624214796396,
      0.2754718838914712, 0.27541670573702282, 0.27549875961533782,
      0.27571991812546021, 0.27608205386643392, 0.27658703943730256,
      0.2772367474371103, 0.27803305046490051, 0.27897782111971725,
      0.2800729320006044, 0.28132025570660557, 0.2827216648367647,
      0.28427903199012572, 0.28599422976573219, 0.28786913076262821,
      0.28990560757985728, 0.29210553281646356, 0.29447077907149083,
      0.29700321894398263, 0.299704725032983, 0.30257716993753581,
      0.30562242625668468, 0.3088423665894735, 0.31223886353494634,
      0.31581378969214668, 0.31956901766011842, 0.3235062251793453,
      0.3276239723575588, 0.33191831165958319, 0.33638522450551434,
      0.3410206923154569, 0.34582069650950559, 0.350781218507765,
      0.35589823973032941, 0.36116774159730386, 0.36658570552878217,
      0.37214811294487021, 0.37785094526566093, 0.38369018391126058,
      0.389661810301762, 0.39576180585727189, 0.40198615199788246,
      0.40833083014370053, 0.4147918217148186, 0.4213651081313437,
      0.42804667081336745, 0.43483249118099732, 0.4417185506543253,
      0.44870083065345889, 0.45577531259849136, 0.46293797790952446,
      0.47018480800665757, 0.47751178430999097, 0.48491488823962348,
      0.49239010121565507, 0.49993340465818525, 0.50754077998731351,
      0.51520820862313976, 0.52293167198576307, 0.53070715149528325,
      0.5385306285718, 0.54639808463541284, 0.55430550110622134,
      0.56224885940432523, 0.57022414094982365, 0.57822732716281677,
      0.586254399463404, 0.5943013392716846, 0.60236412800775863,
      0.610438747091725, 0.61852117794368389, 0.62660740198373477,
      0.63469340063197965, 0.6427751553085107, 0.6508486474334374,
      0.65890985842684935, 0.66695476970885625, 0.67497936269954772,
      0.6829796188190328, 0.69095151948740219, 0.6988910461247636,
      0.70679418015120921, 0.71465690298684637, 0.72247519605176569,
      0.73024504076607621, 0.73796241854986855, 0.74562331082325084,
      0.75322369900631425, 0.76075956451916682, 0.76822688878189949,
      0.77562165321462018, 0.782939839237421, 0.79017742827040871,
      0.79733040173367731, 0.80439474104732844, 0.81136642763146127,
      0.81824144290617573, 0.82501576829157131, 0.83168538520774782,
      0.83824627507480454, 0.84469441931284128, 0.85102579934195721,
      0.85723639658225226, 0.86332219245382624, 0.86927916837677865,
      0.87510330577120843, 0.88079058605721616, 0.88633699065490013,
      0.89173850098436125, 0.89699109846569847, 0.90209076451901149,
      0.90703348056439981, 0.91181522802196313, 0.91643198831180073,
      0.92087974285401375, 0.925154473068698, 0.92925216037595793,
      0.9331687861958885, 0.93690033194859379, 0.94044277905416862,
      0.94379210893271737, 0.9469443030043353, 0.9498953426891259,
      0.95264120940718533, 0.95517788457861608, 0.95750134962351519,
      0.95960758596198437, 0.96149257501412122, 0.96315229820002746,
      0.96458273693980057, 0.96577987265354193, 0.9667396867613498,
      0.9674581606833248, 0.96793127583956584, 0.96815501365017254,
      0.96812535553524481, 0.967838282914882, 0.96728977720918352,
      0.96647581983824948, 0.9653923922221791, 0.964035475781072,
      0.9624010519350279, 0.96048510210414606, 0.9582836077085265,
      0.95579255016826847, 0.95300791090347192, 0.949925671334236,
      0.94654181288066064, 0.94285231696284511, 0.93885316500088922,
      0.9345403384148927, 0.9299098186249547, 0.92495758705117526,
      0.91967962511365342, 0.91407191423248946, 0.90813043582778241,
      0.90185117131963022, 0.89523010212813814, 0.88826320967339778,
      0.88094647537551707, 0.87327588065458717, 0.86524740693071611,
      0.85685703562399473, 0.848100748154532, 0.83897452594241761,
      0.8294743504077613, 0.81959620297065228, 0.80933606505120093,
      0.79868991806949541, 0.78765374344564743, 0.77622352259974381,
      0.76439523695189737, 0.75216486792219406, 0.73952839693074757,
      0.72648180539764284, 0.71302107474299437, 0.69914218638688674,
      0.68484112174943523, 0.67011386225072267, 0.65495638931086164,
      0.6393646843499472, 0.623334728788079, 0.6068625040453568,
      0.58994399154188026, 0.5725751726977486, 0.55475202893306164,
      0.536470541667919, 0.51772669232242019, 0.49851646231666463,
      0.47883583307075223, 0.45868078600478235, 0.4380473025388546,
      0.41693136409306858, 0.28890647645516521, 0.28238307473604735,
      0.27591271167361447, 0.26949538726786626, 0.2631311015188032,
      0.25681985442642491, 0.25056164599073166, 0.24435647621172321,
      0.23820434508939961, 0.23210525262376092, 0.22605919881480713,
      0.2200661836625383, 0.21412620716695438, 0.20823926932805525,
      0.20240537014584106, 0.19662450962031186, 0.19089668775146743,
      0.18522190453930795, 0.17960015998383339, 0.1740314540850437,
      0.16851578684293891, 0.163053158257519, 0.157643568328784,
      0.15228701705673395, 0.14698350444136868, 0.14173303048268843,
      0.13653559518069308, 0.13139119853538253, 0.12629984054675694,
      0.12126152121481626, 0.11627624053956044, 0.11134399852098954,
      0.10646479515910351, 0.10163863045390237, 0.09686550440538623,
      0.092145417013554914, 0.087478368278408464, 0.082864358199946864,
      0.078303386778170267, 0.073795454013078576, 0.069340559904671778,
      0.064938704452949789, 0.060589887657912747, 0.056294109519560619,
      0.05205137003789341, 0.047861669212911032, 0.043725007044613649,
      0.039641383533001104, 0.035610798678073451, 0.03163325247983069,
      0.027708744938272828, 0.023837276053399949, 0.020018845825211858,
      0.0162534542537087, 0.012541101338890453, 0.00888178708075707,
      0.0052755114793085834, 0.001722274534545043, -0.0017779237535336294,
      -0.0052250833849274095, -0.0086192043596362549, -0.011960286677660274,
      -0.01524833033899929, -0.018483335343653495, -0.021665301691622764,
      -0.024794229382907193, -0.02787011841750666, -0.030892968795421222,
      -0.033862780516650905, -0.036779553581195744, -0.039643287989055614,
      -0.042453983740230614, -0.045211640834720714, -0.047916259272525928,
      -0.050567839053646216, -0.053166380178081583, -0.055711882645832142,
      -0.058204346456897739, -0.060643771611278444, -0.063030158108974235,
      -0.065363505949985176, -0.067643815134311211, -0.069871085661952367,
      -0.07204531753290852, -0.074166510747179865, -0.076234665304766261,
      -0.07824978120566782, -0.08021185844988446, -0.082120897037416207,
      -0.083976896968263, -0.085779858242424983, -0.087529780859901984,
      -0.089226664820694149, -0.090870510124801365, -0.0924613167722237,
      -0.093999084762961149, -0.0954838140970137, -0.09691550477438135,
      -0.098294156795064147, -0.099619770159061968, -0.10089234486637497,
      -0.10211188091700299, -0.10327837831094619, -0.10439183704820444,
      -0.10545225712877779, -0.10645963855266627, -0.10741398131986982,
      -0.1083152854303885, -0.10916355088422229, -0.10995877768137116,
      -0.11070096582183514, -0.11139011530561424, -0.11202622613270843,
      -0.11260929830311771, -0.11313933181684208, -0.11361632667388158,
      -0.11404028287423613, -0.11441120041790587, -0.11472907930489062,
      -0.11499391953519053, -0.11520572110880559, -0.11536448402573564,
      -0.1154702082859809, -0.11552289388954116, -0.11552254083641661,
      -0.11546914912660708, -0.11536271876011274, -0.11520324973693341,
      -0.11499074205706925, -0.11472519572052019, -0.1144066107272862,
      -0.11403498707736734, -0.11361032477076355, -0.11313262380747489,
      -0.11260188418750128, -0.11201810591084285, -0.11138128897749952,
      -0.11069143338747128, -0.10994853914075808, -0.10915260623736003,
      -0.10830363467727711, -0.1074016244605092, -0.10644657558705647,
      -0.10543848805691883, -0.10437736187009625, -0.10326319702658882,
      -0.10209599352639651, -0.10087575136951925, -0.099602470555957112,
      -0.098276151085710042, -0.09689679295877815, -0.095464396175161267,
      -0.093978960734859576, -0.092440486637872951, -0.0908489738842014,
      -0.089204422473845, -0.087506832406803653, -0.085756203683077445,
      -0.083952536302666358, -0.082095830265570352, -0.080186085571789439,
      -0.078223302221323621, -0.076207480214172924, -0.07413861955033732,
      -0.072016720229816755, -0.069841782252611423, -0.0676138056187211,
      -0.065339183779815846, -0.063072645516510886, -0.060826722337624595,
      -0.058601414243156964, -0.05639672123310796, -0.054212643307477562,
      -0.052049180466265825, -0.049906332709472617, -0.047784100037098112,
      -0.045682482449142255, -0.043601479945605016, -0.041541092526486426,
      -0.039501320191786385, -0.037482162941505026, -0.035483620775642329,
      -0.033505693694198223, -0.031548381697172785, -0.029611684784565929,
      -0.027695602956377678, -0.025800136212608103, -0.023925284553257171,
      -0.022071047978324862, -0.020237426487811166, -0.018424420081716058,
      -0.016632028760039615, -0.01486025252278184, -0.013109091369942663,
      -0.011378545301522125, -0.0096686143175201463, -0.00797929841793689,
      -0.0063105976027722152, -0.0046625118720261954, -0.0030350412256988021,
      -0.0014281856637900097, 0.00015805481370013172, 0.0017236802067716196,
      0.0032686905154244565, 0.0047930857396587066, 0.006296865879474302,
      0.0077800309348713525, 0.0092425809058496958, 0.010684515792409442,
      0.01210583559455052, 0.013506540312272972, 0.014886629945576877,
      0.01624610449446209, 0.017584963958928678, 0.018903208338976626,
      0.02020083763460595, 0.021477851845816645, 0.022734250972608724,
      0.023970035014982183, 0.025185203972936984, 0.026379757846473166,
      0.027553696635590718, 0.028707020340289664, 0.029839728960569946,
      0.030951822496431611, 0.032043300947874637, 0.033114164314899039,
      0.034164412597504849, 0.035194045795691971, 0.0362030639094605,
      0.037191466938810369, 0.038159254883741625, 0.039106427744254275,
      0.040032985520348292, 0.040938928212023634, 0.041824255819280384,
      0.04268896834211848, 0.04353306578053797, 0.04435654813453882,
      0.04515941540412105, 0.045941667589284654, 0.046703304690029604,
      0.047444326706355955, 0.048164733638263672, 0.048864525485752722,
      0.049543702248823179, 0.05020226392747499, 0.050840210521708187,
      0.051457542031522731, 0.052054258456918669, 0.052630359797895945,
      0.053185846054454623, 0.053720717226594675, 0.054234973314316065,
      0.054728614317618884, 0.055201640236503029, 0.055654051070968547,
      0.056085846821015417, 0.0564970274866437, 0.056887593067853334,
      0.057257543564644339, 0.057606878977016718, 0.057935599304970449,
      0.058243704548505568, 0.05853119470762206, 0.058798069782319912,
      0.059044329772599172, 0.05926997467845975, 0.059475004499901715,
      0.059659419236925068, 0.059823218889529774, 0.059966403457715853,
      0.060088972941483305, 0.060190927340832111, 0.060272266655762317,
      0.060332990886273891, 0.060373100032366817, 0.060392594094041116,
      0.0603914730712968, 0.060369736964133842, 0.060327385772552256,
      0.060264419496552035, 0.060180838136133195, 0.060076641691295729,
      0.059951830162039615, 0.059806403548364896, 0.05964036185027153,
      0.05945370506775953, 0.05924643320082891, 0.059018546249479692,
      0.058770044213711806, 0.058500927093525279, 0.058211194888920154,
      0.057900847599896388, 0.057569885226453989, 0.057218307768592963,
      0.056846115226313304, 0.056453307599615012, 0.056039884888498114,
      0.055605847092962589, 0.055151194213008424, 0.054675926248635591,
      0.054180043199844145, 0.053663545066634087, 0.053126431849005396,
      0.052568703546958091, 0.05199036016049214, 0.051391401689607569,
      0.050771828134304323, 0.0501316394945825, 0.049470835770442041,
      0.04878941696188295, 0.048087383068905226, 0.047364734091508855,
      0.046621470029693871, 0.045857590883460274, 0.045073096652808023,
      0.044267987337737152, 0.043442262938247642, 0.042595923454339504,
      0.041728968886012754, 0.040841399233267371, 0.039933214496103368,
      0.039004414674520704, 0.038054999768519435, 0.037084969778099525,
      0.036094324703261, 0.035083064544003839, 0.034051189300327987,
      0.032998698972233557, 0.031925593559720522, 0.030831873062788819,
      0.029717537481438523, 0.028582586815669581, 0.027437135241697837,
      0.026299793270773912, 0.025170965508766626, 0.024050651955676152,
      0.02293885261150239, 0.021835567476245345, 0.02074079654990503,
      0.019654539832481437, 0.018576797323974541, 0.017507569024384394,
      0.016446854933710949, 0.015394655051954243, 0.01435096937911425,
      0.013315797915190901, 0.012289140660184349, 0.011270997614094525,
      0.010261368776921414, 0.0092602541486650168, 0.0082676537293253534,
      0.007283567518902411, 0.0063079955173961809, 0.0053409377248066787,
      0.0043823941411338836, 0.0034323647663778221, 0.0024908496005384036,
      0.0015578486436157828, 0.0006333618956098965, -0.0002826106434792834,
      -0.0011900689736517498, -0.0020890130949074888, -0.0029794430072465077,
      -0.003861358710668799, -0.0047347602051743768, -0.0055996474907632418,
      -0.006456020567435365, -0.0073038794351908531, -0.0081432240940295282,
      -0.008974054543951511, -0.00979637078495676, -0.010610172817045281,
      -0.011415460640217097, -0.012212234254472178, -0.013000493659810545,
      -0.013780238856232191, -0.014551469843737124, -0.015314186622325376,
      -0.016068389191996862, -0.016814077552751626, -0.017551251704589672,
      -0.018279911647510982, -0.019000057381515587, -0.019711688906603464,
      -0.020414806222774612, -0.021109409330029055, -0.021795498228366777,
      -0.02247307291778777, -0.023142133398292096, -0.023802679669879645,
      -0.024454711732550483, -0.025098229586304584, -0.025733233231141989,
      -0.026359722667062643, -0.026977697894066593, -0.027587158912153822,
      -0.028188105721324328, -0.02878053832157812, -0.02936445671291522,
      -0.029939860895335565, -0.030506750868839198, -0.031065126633426105,
      -0.031614988189096284, -0.032156335535849741, -0.032689168673686445,
      -0.033213487602606465, -0.033729292322609766, -0.034236582833696336,
      -0.0347353591358662, -0.035225621229119368, -0.035707369113455782,
      -0.036180602788875485, -0.036645322255378449, -0.037101527512964715,
      -0.037549218561634227, -0.03798839540138705, -0.038419058032223133,
      -0.038841206454142511, -0.039254840667145151, -0.039659960671231079,
      -0.040056566466400323, -0.040444658052652807, -0.040824235429988566,
      -0.0411952985984076, -0.041557847557909935, -0.041911882308495525,
      -0.042257402850164424, -0.042594409182916577, -0.042922901306752005,
      -0.043242879221670735, -0.043554342927672733, -0.043857292424758013,
      -0.044151727712926581, -0.044437648792178416, -0.044715055662513527,
      -0.044983948323931919, -0.045244326776433592, -0.045496191020018541,
      -0.045739541054686778, -0.045974376880438282, -0.046200698497273068,
      -0.04641850590519115, -0.046627799104192506, -0.04682857809427713,
      -0.047020842875445029, -0.04720459344769621, -0.047379829811030671,
      -0.047546551965448422, -0.047704759910949447, -0.04785445364753374,
      -0.047995633175201328, -0.048128298493952178, -0.048252449603786329,
      -0.048368086504703735, -0.048475209196704436, -0.048573817679788411,
      -0.048663911953955669, -0.048745492019206207, -0.048818557875540014,
      -0.0488831095229571, -0.048939146961457472, -0.048986670191041123,
      -0.049025679211708056, -0.049056174023458264, -0.049078154626291753,
      -0.049091621020208517, -0.049096573205208563, -0.049093011181291883,
      -0.049080934948458485, -0.049060344506708375, -0.049031239856041527,
      -0.048993620996457966, -0.048947487927957688, -0.048892840650540684,
      -0.048829679164206968, -0.048758003468956521, -0.048677813564789361,
      -0.048589109451705463, -0.04849189112970486, -0.048386158598787532,
      -0.048271911858953492, -0.048149150910202727, -0.04801787575253523,
      -0.047878086385951028, -0.04772978281045008, -0.047572965026032428,
      -0.04740763303269805, -0.047233786830446961, -0.04705142641927914,
      -0.046860551799194614, -0.046661162970193355, -0.046453259932275379,
      -0.046236842685440677, -0.046011911229689256, -0.045778465565021118,
      -0.04553650569143624, -0.045286031608934657, -0.045027043317516349,
      -0.044759639776032922, -0.044485998237483081, -0.044207009426490466,
      -0.043922673343055052, -0.043632989987176844, -0.043337959358855836,
      -0.043037581458092049, -0.042731856284885433, -0.042420783839236052,
      -0.042104364121143885, -0.041782597130608917, -0.041455482867631163,
      -0.041123021332210609, -0.040785212524347254, -0.04044205644404112,
      -0.040093553091292179, -0.039739702466100466, -0.039380504568465945,
      -0.03901595939838861, -0.038646066955868495, -0.038270827240905608,
      -0.037890240253499914, -0.037504305993651434, -0.03711302446136016,
      -0.036716395656626093, -0.036314419579449225, -0.035907096229829565,
      -0.035494425607767111, -0.035076407713261842, -0.034653042546313816,
      -0.034224330106922982, -0.033790270395089361, -0.033350863410812948,
      -0.032906109154093748, -0.03245600762493174, -0.032000558823326947,
      -0.031539762749279367, -0.031073619402788986, -0.030602128783855813,
      -0.030125290892479811, -0.029643105728661058, -0.029155573292399505,
      -0.028662693583695165, -0.028164466602548021, -0.027660892348958088,
      -0.027151970822925357, -0.026637702024449855, -0.026118085953531541,
      -0.025593122610170434, -0.025062811994366541, -0.024527154106119824,
      -0.02398614894543033, -0.023439796512298057, -0.022888096806722991,
      -0.022331049828705121, -0.021768655578244471, -0.021200914055341032,
      -0.020627825259994789, -0.020049389192205752, -0.019465605851973926,
      -0.018876475239299306, -0.018281997354181852, -0.017682172196621652,
      -0.017076999766618649, -0.01646648006417286, -0.015850613089284274,
      -0.015229398841952894, -0.014602837322178723, -0.013970928529961759,
      -0.013333672465302003, -0.012691069128199456, -0.012043118518654066,
      -0.01138982063666593, -0.010731175482234994, -0.010067183055361278,
      -0.0093978433560447626, -0.00872315638428545, -0.0080431221400833579,
      -0.0073577406234384621, -0.006667011834350773, -0.0059709357728202871,
      -0.0052695124388470183, -0.0045627418324309041, -0.0038506239535720417,
      -0.003133158802270393, -0.0024103463785259405, -0.0016821866823387016,
      -0.00094867971370867291, -0.00020982547263584048, 0.00053437604087977139,
      0.0012839248268381835, 0.002038820885239389, 0.0027990642160834363,
      0.0035646548193702284, 0.0043355926950998137, 0.005111877843272189,
      0.005893510263887361, 0.0066804899569453229, 0.007472816922446078,
      0.0082704911603896265, 0.0090735126707759649, 0.0098818814536051,
      0.010695597508877028, 0.011514660836591806, 0.012339071436749317,
      0.013168829309349629, 0.014003934454392724, 0.014844386871878619,
      0.015690186561807307, 0.016541333524178789, 0.017397827758993054,
      0.018259669266250118, 0.019126858045949977, 0.019999394098092638,
      0.020877277422678142, 0.021760508019706373, 0.022649085889177405,
      0.023543011031091226, 0.024442283445447844, 0.025346903132247259,
      0.026256870091489456, 0.027172184323174454, 0.028092845827302246,
      0.02901885460387282, 0.029950210652886191, 0.030886913974342428,
      0.0318289645682414, 0.032776362434583151, 0.033729107573367695,
      0.034687199984595039, 0.035650639668265177, 0.0366194266243781,
      0.037593560852933819, 0.03857304235393233, 0.039557871127373634,
      0.040548047173257794, 0.041543570491584692, 0.042544441082354376,
      0.04355065894556686, 0.044562224081222124, 0.045579136489320195,
      0.046601396169861045, 0.047629003122844696, 0.048661957348271133,
      0.049700258846140377, 0.0507439076164524, 0.051792903659207225,
      0.052847246974404842, 0.05390693756204526, 0.054971975422128457,
      0.05604236055465444, 0.05711809295962323, 0.058199172637034807,
      0.059285599586889191, 0.060377373809186348, 0.061474495303926312,
      0.062576964071109215, 0.063684780110734765, 0.064797943422803109,
      0.065916454007314218, 0.067040311864268162, 0.068169516993664872,
      0.069304069395504389, 0.070443969069786672, 0.0715892160165118,
      0.072739810235679672, 0.073895751727290349, 0.075051458098051915,
      0.076188785732803535, 0.077306338865825733, 0.078404117497118619,
      0.079482121626682112, 0.08054035125451639, 0.081578806380621122,
      0.082597487004996528, 0.083596393127642554, 0.084575524748559214,
      0.0855348818677465, 0.0864744644852044, 0.087394272600932965,
      0.088294306214932158, 0.089174565327201985, 0.090035049937742417,
      0.090875760046553511, 0.091696695653635238, 0.092497856758987571,
      0.093279243362610509, 0.09404085546450415, 0.0947826930646684,
      0.095504756163103249, 0.096207044759808763, 0.096889558854784924,
      0.097552298448031691, 0.098195263539549119, 0.098818454129337222,
      0.099421870217395888, 0.10000551180372518, 0.10056937888832511,
      0.10111347147119568, 0.10163778955233688, 0.10214233313174872,
      0.10262710220943116, 0.10309209678538425, 0.10353731685960799,
      0.10396276243210235, 0.10436843350286734, 0.10475433007190296,
      0.10512045213920922, 0.1054667997047861, 0.10579337276863365,
      0.10610017133075179, 0.10638719539114057, 0.10665444494979998,
      0.10690192000673004, 0.10712962056193071, 0.10733754661540207,
      0.10752569816714401, 0.10769407521715658, 0.10784267776543981,
      0.10797150581199363, 0.10808055935681811, 0.1081698383999132,
      0.10823934294127893, 0.10828907298091532, 0.1083190285188223,
      0.10832920955499994, 0.10831961608944821, 0.10829024812216712,
      0.10824110565315666, 0.10817218868241681, 0.10808349720994764,
      0.10797503123574903, 0.10784679075982108, 0.10769877578216382,
      0.1075309863027771, 0.10734342232166107, 0.10713608383881568,
      0.10690897085424086, 0.10666208336793671, 0.10639542137990321,
      0.10610898489014033, 0.10580277389864806, 0.10547678840542643,
      0.10513102841047547, 0.10476549391379511, 0.10438018491538539,
      0.10397510141524631, 0.10355024341337785, 0.10310561090978004,
      0.10264120390445283, 0.10215702239739627, 0.10165306638861037,
      0.10112933587809506, 0.10058583086585041, 0.10002255135187636,
      0.099439497336172966, 0.0988366688187402, 0.098214065799578087,
      0.097571688278686508, 0.0969095362560656, 0.096227609731715374,
      0.095525908705635751, 0.0948044331778268, 0.09406318314828846,
      0.093302158617020736, 0.092521359584023674, 0.0917207860492972,
      0.090900438012841409, 0.090060315474656233, 0.0892004184347417,
      0.088320746893097768, 0.087421300849724493, 0.086502080304621837,
      0.0855630852577898, 0.084604315709228439, 0.0836257716589377,
      0.082627453106917562, 0.081609360053168073, 0.080571492497689218,
      0.079513850440480857, 0.078436433881543255, 0.077339242820876286,
      0.076222277258479965, 0.07508553719435429, 0.0739290226284992,
      0.072752733560914773, 0.071556669991600985, 0.070340831920557817,
      0.069105219347785268, 0.067849832273283367, 0.066574670697052113,
      0.065279734619091465, 0.063965024039401464, 0.062630538957982082,
      0.061276279374833334, 0.05990224528995524, 0.058508436703347766,
      0.057094853615010939, 0.055661496024944711, 0.054208363933149137,
      0.052735457339623981, 0.05124277624436966, 0.049730320647385987,
      0.048198090548672919, 0.046646085948230484, 0.04507430684605869,
      0.043482753242157557, 0.041871425136527043, 0.040240322529167163,
      0.038589445420077889, 0.036918793809259248, 0.035228367696711518,
      0.033518167082434158, 0.031788191966427418, 0.030038442348691352,
      0.028268918229225865, 0.026479619608031038, 0.024670546485106859,
      0.022841698860453313, 0.020993076734070346, 0.019124680105958081,
      0.01723650897611638, 0.015328563344545076, 0.01340084321124467,
      0.011453348576214911, 0.0094860794394557579, 0.007499035800967252,
      0.0054922176607493794, 0.0034656250188021542, 0.0014192578751255208,
      -0.00064688377028047916, -0.00273279991741579, -0.0048384905662804956,
      -0.00696379808255705, -0.0090825453351954244, -0.011175650250270747,
      -0.013243112827782949, -0.015284933067732128, -0.017301110970118213,
      -0.019291646534941188, -0.021256539762201154, -0.023195790651898,
      -0.025109399204031779, -0.026997365418602735, -0.028859689295610353,
      -0.030696370835054908, -0.032507410036936371, -0.034292806901254747,
      -0.036052561428010062, -0.03778667361720231, -0.03949514346883147,
      -0.041177970982897556, -0.042835156159400582, -0.044466698998340527,
      -0.046072599499717364, -0.047652857663531174, -0.049207473489781883,
      -0.050736446978469504, -0.052239778129594065, -0.053717466943155517,
      -0.055169513419153937, -0.056595917557589255, -0.057996679358461506,
      -0.05937179882177069, -0.060721275947516772, -0.062045110735699981,
      -0.063343303186319921, -0.0646158532993768, -0.0658627610748706,
      -0.0670840265128013, -0.068279649613168944, -0.069449630375973515,
      -0.070593968801215, -0.071712664888893413, -0.072805718639008726,
      -0.073873130051561, -0.07491489912655018, -0.075931025863976265,
      -0.0769215102638393, -0.077886352326139288, -0.07882555205087613,
      -0.079739109438049932, -0.080627024487660667, -0.081489297199708308,
      -0.0823259275741929, -0.083136915611114373, -0.0839222613104729,
      -0.084681964672268253, -0.08541602569650053, -0.0861244443831697,
      -0.0868072207322758, -0.087464354743818848, -0.0880958464177988,
      -0.088701695754215673, -0.089281902753069492, -0.08983646741436023,
      -0.090365389738087915, -0.090868669724252463, -0.091346307372853972,
      -0.091798302683892413, -0.092224655657367732, -0.092625366293280026,
      -0.093000434591629239, -0.09334986055241537, -0.093673644175638365,
      -0.09397178546129839, -0.094244284409395251, -0.0944911410199291,
      -0.094712355292899855, -0.094907927228307515, -0.09507785682615208,
      -0.095222144086433619, -0.095340789009152049, -0.0954337915943074,
      -0.095501151841899667, -0.095542869751928883, -0.095558945324395,
      -0.09554937855929807, -0.095514169456638029, -0.095453318016414948,
      -0.095366824238628772, -0.095254688123279543, -0.0951169096703672,
      -0.094953488879891787, -0.094764425751853315, -0.094549720286251734,
      -0.094309372483087114, -0.0940433823423594, -0.093751749864068562,
      -0.093434475048214713, -0.093091557894797755, -0.092722998403817786,
      -0.09232879657527468, -0.091908952409168521, -0.09146346590549928,
      -0.090992337064266959, -0.090495565885471543, -0.089973152369113074,
      -0.089425096515191538, -0.08885139832370692, -0.088252057794659208,
      -0.087627074928048443, -0.086976449723874583, -0.086300182182137641,
      -0.085598272302837619, -0.08487072008597453, -0.084117525531548387,
      -0.08333868863955915, -0.082534209410006887, -0.0817040878428915,
      -0.080848323938212868, -0.079966917695971335, -0.07905986911616672,
      -0.078127178198799052, -0.077168844943868262, -0.076184869351374432,
      -0.075175251421317507, -0.074139991153697515, -0.0730790885485144,
      -0.071992543605768275, -0.07088035632545904, -0.069742526707586738,
      -0.068579054752151369, -0.067389940459152919, -0.066175183828591388,
      -0.064934784860466749, -0.063668743554779084, -0.062377059911528344,
      -0.061059733930714497, -0.059716765612337595, -0.058348154956397578,
      -0.056953901962894314, -0.055534006631828177, -0.054088468963198973,
      -0.05261728895700666, -0.051120466613251293, -0.049598001931932853,
      -0.048049894913051311, -0.046476145556606743, -0.044876753862599053,
      -0.043251719831028282, -0.041601043461894471, -0.039924724755197566,
      -0.038222763710937593, -0.036495160329114512, -0.034741914609728378,
      -0.032963026552779176, -0.03115849615826688, -0.029328323426191544,
      -0.0274725083565531, -0.025591050949351588, -0.023683951204586981,
      -0.021751209122259349, -0.019792824702368289, -0.017808797944914467,
      -0.015799128849897592, -0.013763817417317595, -0.011702863647174544,
      -0.0096162675394684538, -0.0075040290941992271, -0.0053718622213764378,
      -0.003254053122508491, -0.0011563166214464903, 0.00092134728180954975,
      0.0029789385872597269, 0.0050164572949039435, 0.0070339034047422139,
      0.0090312769167745933, 0.011008577831001041, 0.012965806147421556,
      0.014902961866036152, 0.016820044986844813, 0.018717055509847532,
      0.020593993435044342, 0.022450858762435511, 0.024287651492020432,
      0.026104371623799461, 0.027901019157772555, 0.029677594093939746,
      0.031434096432300974, 0.033170526172856332, 0.034886883315605695,
      0.036583167860549173, 0.038259379807686712, 0.039915519157018325,
      0.041551585908544027, 0.043167580062263761, 0.044763501618177617,
      0.046339350576285521, 0.047895126936587512, 0.049430830699083557,
      0.050946461863773711, 0.052442020430657918, 0.053917506399736172,
      0.055372919771008527, 0.056808260544475145, 0.058223528720135628,
      0.059618724297990221, 0.060993847278038874, 0.062348897660281566,
      0.063683875444718374, 0.064998780631349229, 0.066293613220174186,
      0.067568373211193189, 0.068823060604406253, 0.0700576753998134,
      0.071272217597414644, 0.072466687197209959, 0.073641084199199333,
      0.0747954086033828, 0.0759296604097603, 0.077043839618331889,
      0.078137946229097574, 0.079211980242057334, 0.080265941657211126,
      0.081299830474559021, 0.082313646694101128, 0.083307390315837185,
      0.084281061339767274, 0.085234659765891438, 0.0861681855942097,
      0.087081638824722071, 0.087975019457428472, 0.088848327492328932,
      0.089701562929423509, 0.090534725768712132, 0.0913478160101948,
      0.092140833653871573, 0.092913778699742447, 0.093666651147807367,
      0.094399450998066362, 0.09511217825051943, 0.095804832905166559,
      0.096477414962007776, 0.097129924421043026, 0.097762361282272392,
      0.098374725545695846, 0.09896701721131336, 0.099539236279125018,
      0.10009138274913068, 0.10062345662133039, 0.1011354578957242,
      0.10162738657231206, 0.102099242651094, 0.10255102613207005,
      0.10298273701524012, 0.1033943753006043, 0.10378594098816254,
      0.10415743407791485, 0.10450885456986123, 0.10484020246400169,
      0.10515147776033623, 0.10544268045886483, 0.10571381055958751,
      0.10596486806250427, 0.10619585296761512, 0.10640676527492002,
      0.106597604984419, 0.10676837209611204, 0.1069190666099992,
      0.10704968852608038, 0.10716023784435565, 0.10725071456482498,
      0.10732111868748839, 0.1073714502123459, 0.10740170913939745,
      0.1074118954686431, 0.1074020092000828, 0.10737205033371658,
      0.10732201886954443, 0.10725191480756636, 0.10716173814778238,
      0.10705148889019243, 0.10692116703479659, 0.10677077258159481,
      0.10660030553058711, 0.10640976588177346, 0.10619915363515395,
      0.10596846879072844, 0.10571771134849704, 0.10544688130845972,
      0.10515597867061639, 0.10484500343496721, 0.10451395560151208,
      0.10416283517025107, 0.10379164214118408, 0.10340037651431118,
      0.10298903828963235, 0.10255762746714761, 0.10210614404685693,
      0.10163458802876034, 0.10114295941285781, 0.10063125819914936,
      0.10009948438763498, 0.099547637978314674, 0.098975718971188426,
      0.098383727366256238, 0.097771663163518166, 0.097139526362974168,
      0.096487316964624245, 0.095815034968468354, 0.0951226803745066,
      0.094410253182738754, 0.093677753393165114, 0.0929251810057855,
      0.092152536020600029, 0.091359818437608584, 0.090547028256811241,
      0.089714165478207958, 0.088861230101798735, 0.087988222127583615,
      0.087095141555562541, 0.08618198838573557, 0.085248762618102672,
      0.084295464252663835, 0.08332209328941903, 0.082328649728368369,
      0.081315133569511755, 0.080281544812849187, 0.079227883458380721,
      0.07815414950610633, 0.077060342956026026, 0.075946463808139755,
      0.0748125120624474, 0.073658487718949311, 0.072484390777645277,
      0.071290221238535317, 0.070087906738448086, 0.0688938121966338,
      0.067708036248804768, 0.0665305788949609, 0.065361440135102311,
      0.064200619969228892, 0.063048118397340716, 0.061903935419437769,
      0.060768071035520038, 0.059640525245587515, 0.058521298049640215,
      0.057410389447678151, 0.056307799439701295, 0.055213528025709654,
      0.054127575205703236, 0.053049940979682061, 0.051980625347646067,
      0.050919628309595177, 0.049866949865529642, 0.048822590015449335,
      0.047786548759354237, 0.046758826097244376, 0.045739422029119722,
      0.044728336554980277, 0.043725569674826062, 0.042731121388657069,
      0.041744991696473305, 0.040767180598274756, 0.039797688094061423,
      0.038836514183833312, 0.037883658867590424, 0.036939122145332758,
      0.036002904017060314, 0.035075004482773071, 0.034155423542471058,
      0.033244161196154282, 0.032341217443822706, 0.031446592285476367,
      0.030560285721115226, 0.029682297750739189, 0.028812628374348517,
      0.027951277591943043, 0.027098245403522802, 0.026253531809087769,
      0.025417136808637962, 0.024589060402173381, 0.023769302589694005,
      0.022957863371199861, 0.02215474274669095, 0.021359940716167241,
      0.020573457279628751, 0.019795292437075483, 0.01902544618850744,
      0.018263918533924617, 0.017510709473327016, 0.016765819006714634,
      0.01602924713408746, 0.015300993855445517, 0.014581059170788797,
      0.013869443080117292, 0.01316614558343091, 0.012471166680729852,
      0.011784506372014003, 0.011106164657283387, 0.010436141536537982,
      0.0097744370097777953, 0.00912105107700284, 0.008475983738213096,
      0.0078392349934085833, 0.0072108048425892773, 0.0065906932857552007,
      0.0059789003229063428, 0.0053754259540426961, 0.0047802701791642812,
      0.0041934329982710851, 0.0036149144113630971, 0.0030447144184403414,
      0.0024828330195027968, 0.0019292702145504814, 0.0013840260035833808,
      0.00084710038660150888, 0.00031849336360484506, -0.00020179506540665904,
      -0.00071376490043287906, -0.0012174161414738773, -0.00171274878852965,
      -0.002199762841600208, -0.0026784583006855441, -0.0031488351657856547,
      -0.0036108934369005539, -0.0040646331140302278, -0.0045100541971746832,
      -0.0049471566863339205, -0.0053759405815079356, -0.0057964058826967292,
      -0.0062085525899003057, -0.0066123807031186537, -0.0070078902223517916,
      -0.0073950811475997063, -0.0077739534788623986, -0.0081445072161398738,
      -0.0085067423594321241, -0.0088606589087391555, -0.0092062568640610236,
      -0.0095435362253976086, -0.0098724969927489852, -0.010193139166115134,
      -0.010505462745496063, -0.010809467730891776, -0.011105154122302265,
      -0.011392521919727536, -0.011671571123167588, -0.011942301732622415,
      -0.012204713748092025, -0.012458807169576411, -0.012704581997075583,
      -0.012942038230589533, -0.013171175870118261, -0.013391994915661771,
      -0.013604495367220059, -0.013808677224793129, -0.014004540488380974,
      -0.014192085157983605, -0.014371311233601013, -0.0145422187152332,
      -0.014704807602880166, -0.014859077896541915, -0.015005029596218439,
      -0.015142662701909747, -0.015271977213615834, -0.0153929731313367,
      -0.015505650455072345, -0.015610009184822773, -0.015706049320587979,
      -0.015793770862367967, -0.015873173810162729, -0.01594425816397228,
      -0.0160070239237966, -0.016061471089635706, -0.016107599661489592,
      -0.016145409639358253, -0.0161749010232417, -0.016196073813139922,
      -0.016208928009052923, -0.016213463610980715, -0.016209680618923274,
      -0.016197579032880622, -0.016177158852852737, -0.016148420078839643,
      -0.016111362710841317, -0.016065986748857793, -0.016012292192889015,
      -0.015950279042935056, -0.015879947298995837, -0.015801296961071444,
      -0.015714328029161777, -0.015619040503266915, -0.015515434383386834,
      -0.015403509669521528, -0.015283266361671013, -0.015154704459835269,
      -0.015017823964014311, -0.014872624874208125, -0.014719107190416726,
      -0.0145572709126401, -0.014387116040878258, -0.014208881214728356,
      -0.014025669206962759, -0.013838434804981621, -0.013647178008784948,
      -0.013451898818372733, -0.013252597233744978, -0.013049273254901683,
      -0.012841926881842849, -0.012630558114568475, -0.012415166953078561,
      -0.012195753397373107, -0.011972317447452051, -0.01174485910331558,
      -0.011513378364963439, -0.011277875232395896, -0.011038349705612672,
      -0.010794801784614051, -0.010547231469399747, -0.010295638759970048,
      -0.010040023656324663, -0.0097803861584638847, -0.0095167262663874187,
      -0.0092490439800955622, -0.008977339299588015, -0.00870161222486508,
      -0.0084218627559264521, -0.0081380908927724434, -0.0078502966354027318,
      -0.0075584799838176453, -0.0072626409380168516, -0.0069627794980006881,
      -0.006658895663768814, -0.0063509894353215727, -0.0060390608126586146,
      -0.005723109795780207, -0.00540313638468626, -0.0050791405793767733,
      -0.0047511223798517421, -0.0044190817861111762, -0.0040830187981550671,
      -0.0037429334159834208, -0.0033988256395962356, -0.00305069546899351,
      -0.0026985429041752433, -0.0023423679451414388, -0.0019821705918920927,
      -0.0016179508444272061, -0.0012497087027467822, -0.00087744416685081508,
      -0.00050115723673931339, -0.00012084791241226845, 0.0002634838061303154,
      0.00065183791888843989, 0.0010442144258621042, 0.0014406133270513056,
      0.0018410346224561631, 0.0022454783120763313, 0.0026539443959122709,
      0.003066432873963517, 0.0034829437462305362, 0.0039034770127128592,
      0.00432803267341096, 0.0047566107283243632, 0.0051892111774535449,
      0.0056258340207980236, 0.00606647925835829, 0.006511146890133844,
      0.006959836916125191, 0.0074125493363318227, 0.0078692841507542518,
      0.0083300413593919622, 0.0087948209622454709, 0.0092636229593142574,
      0.0097364473505988473, 0.010213294136098713, 0.01069416331581439,
      0.011179054889745466, 0.011667968857892085, 0.01216090522025424,
      0.01265786397683194, 0.013158845127625177, 0.013663848672633951,
      0.014172874611858271, 0.014685922945298123, 0.015202993672953522,
      0.015724086794824458, 0.01624920231091094, 0.016778340221212953,
      0.017311500525730508, 0.017848683224463605, 0.018389888317412235,
      0.018935115804576411, 0.019484365685956122, 0.020037637961551377,
      0.020594932631362171, 0.021156249695388506, 0.021721589153630379,
      0.022290951006087949, 0.022864335252760746, 0.0234417418936494,
      0.024023170928753269, 0.024608622358073009, 0.025198096181607951,
      0.02579159239935877, 0.026389111011324792, 0.026990652017506694,
      0.027596215417903795, 0.028205801212516774, 0.028819409401344954,
      0.02943703998438902, 0.030058692961648276, 0.030684368333123421,
      0.031314066098813743, 0.031947786258719982, 0.032585528812841387,
      0.0332272937611787, 0.03387308110373119, 0.03452289084049958,
      0.035176722971483325, 0.035834577496682611, 0.036496454416097439,
      0.037162353729727808, 0.037832275437573719, 0.038506219539635171,
      0.039184186035912151, 0.039866174926404679, 0.040552186211112735,
      0.041242219890036347, 0.0419362759631755, 0.042634354430530173,
      0.0433364552921004, 0.044042578547886166, 0.044752724197887471,
      0.045466892242104318, 0.0461850826805367, 0.046907295513184628,
      0.0476335307400481, 0.0483637883611271, 0.049098068376421632,
      0.049836370785931713, 0.050578695589657337, 0.051325042787598717,
      0.0520754123797552, 0.052829804366127657, 0.053588218746715224,
      0.054350655521518763, 0.055117114690537414, 0.055887596253772036,
      0.056662100211221762, 0.057440626562887453, 0.058223175308768256,
      0.05900974644886503, 0.0598003399831769, 0.060594955911704773,
      0.061393594234447728, 0.062196254951406675, 0.0630029380625807,
      0.063813643567970729, 0.064628371467575857, 0.065447121761396956,
      0.066269894449433153, 0.067096689531685322, 0.067927507008152824,
      0.068762346878835881, 0.069601209143734438, 0.070444093802848551,
      0.0712910008561782, 0.07213628651167335, 0.0729661534291646,
      0.073779974320054537, 0.074577749184343164, 0.0753594780220304,
      0.076125160833116337, 0.076874797617600979, 0.077608388375484255,
      0.078325933106766221, 0.079027431811446863, 0.079712884489526153,
      0.08038229114100412, 0.081035651765880776, 0.081672966364156066,
      0.08229423493583006, 0.08289945748090273, 0.083488633999374229,
      0.08406176449124407, 0.084618848956512865, 0.085159887395180087,
      0.0856848798072462, 0.086193826192710779, 0.08668672655157425,
      0.087163580883836148, 0.087624389189496971, 0.088069151468556248,
      0.088497867721014381, 0.088910537946871, 0.089307162146126468,
      0.089687740318780421, 0.090052272464833272, 0.090400758584284563,
      0.090733198677134724, 0.091049592743383381, 0.091349940783030881,
      0.09163424279607689, 0.091902498782521727, 0.09215470874236513,
      0.092390872675607222, 0.092610990582248018, 0.092815062462287434,
      0.093003088315725568, 0.093175068142562323, 0.0933310019427978,
      0.093470889716431915, 0.0935947314634647, 0.09370252718389617,
      0.0937942768777263, 0.093869980544955142, 0.0939296381855826,
      0.093973249799608777, 0.094000815387033587, 0.094012334947857074,
      0.094007808482079236, 0.093987235989700088, 0.093950617470719575,
      0.093897952925137779, 0.093829242352954645, 0.093744485754170159,
      0.093643683128784364, 0.093526834476797188, 0.093393939798208758,
      0.093244999093018949, 0.093080012361227857, 0.092898979602835371,
      0.092701900817841645, 0.092488776006246456, 0.0922596051680501,
      0.092014388303252273, 0.091753125411853237, 0.091475816493852738,
      0.091182461549251109, 0.090873060578047934, 0.0905476135802436,
      0.0902061205558378, 0.089848581504830827, 0.089474996427222328,
      0.0890853653230127, 0.088679688192201539, 0.088257965034789179,
      0.087820195850775468, 0.087366380640160418, 0.086896519402944045,
      0.086410612139126375, 0.085908658848707325, 0.085390659531687008,
      0.08485661418806531, 0.084306522817842289, 0.083740385421017971,
      0.0831582019975923, 0.0825599725475653, 0.08194569707093699,
      0.081315375567707307, 0.080669008037876341, 0.080006594481444038,
      0.0793281348984104, 0.078633629288775431, 0.077923077652539141,
      0.077196479989701527, 0.07645383630026259, 0.075695146584222078,
      0.074920410841580687, 0.074129629072337527, 0.073322801276493488,
      0.072499927454047666, 0.071661007605000965, 0.070806041729352481,
      0.069935029827103146, 0.069047971898251972, 0.068144867942799989,
      0.06722571796074614, 0.066290521952091536, 0.065339279916835052,
      0.064371991854977773, 0.063388657766518586, 0.062389277651458679,
      0.061373851509796858, 0.060342379341534261, 0.059294861146669764,
      0.058231296925204554, 0.0571516866771374, 0.056056030402469537,
      0.054944328101200014, 0.053816579773328842, 0.052672785418857004,
      0.051512945037783191, 0.050337058630108691, 0.049145126195832209,
      0.047937147734955055, 0.04671312324747591, 0.045473052733396122,
      0.0442169361927143, 0.042944773625431858, 0.041656565031547362,
      0.040352310411062291, 0.039032009763975119, 0.037695663090287414,
      0.036343270389997594, 0.034974831663107192, 0.0335903469096147,
      0.0321898161295217, 0.03077323932282653, 0.029340616489530853,
      0.027891947629633033, 0.0264272327431343, 0.024946471830034213,
      0.02344966489033283, 0.021936811924030103, 0.020407912931126038,
      0.018862967911620662, 0.017301976865513949, 0.015724939792805898,
      0.01413185669349655, 0.012522727567585865, 0.0108975524150738,
      0.0092563312359604522, 0.0075990640302457529, 0.0059257507979297713,
      0.00423639153901241, 0.002530986253493725, 0.00080953494137375737,
      -0.000927962397347562, -0.0026815057626702332, -0.0044510951545942146,
      -0.00623673057311952, -0.0080384120182466767, -0.0098555792784358384,
      -0.011662453213391641, -0.013445021813327431, -0.015203285078245249,
      -0.01693724300814305, -0.018646895603022844, -0.020332242862882672,
      -0.02199328478772444, -0.023630021377546263, -0.025242452632350049,
      -0.0268305785521339, -0.028394399136899659, -0.029933914386645513,
      -0.031449124301373241, -0.032940028881081135, -0.034406628125770888,
      -0.035848922035440767, -0.0372669106100925, -0.0386605938497244,
      -0.0400299717543381, -0.041375044323932415, -0.042695811558507712,
      -0.043992273458064043, -0.045264430022601346, -0.046512281252119647,
      -0.047735827146618962, -0.048935067706099275, -0.050110002930560608,
      -0.051260632820002913, -0.052386957374426224, -0.053488976593830541,
      -0.054566690478215836, -0.055620099027582179, -0.056649202241929493,
      -0.0576540001212578, -0.058634492665567126, -0.059590679874857458,
      -0.060522561749128775, -0.061430138288381078, -0.062313409492614422,
      -0.063172375361828736, -0.064007035896024286, -0.064817391095200391,
      -0.065603440959357925, -0.066365185488496042, -0.067102624682615547,
      -0.0678157585417157, -0.0685045870657972, -0.069169110254859348,
      -0.069809328108902863, -0.070425240627927, -0.071016847811932529,
      -0.071584149660918667, -0.072127146174886136, -0.072645837353834328,
      -0.073140223197763782, -0.073610303706673985, -0.074056078880565451,
      -0.074477548719437667, -0.074874713223291117, -0.075247572392125359,
      -0.075596126225940752, -0.075920374724737019, -0.076220317888514438,
      -0.076495955717272773, -0.0767472882110121, -0.076974315369732441,
      -0.077177037193433773, -0.077355453682116132, -0.077509564835779421,
      -0.077639370654423751, -0.077744871138049107, -0.077826066286655463,
      -0.077882956100242789, -0.077915540578811129, -0.077923819722360468,
      -0.07790779353089082, -0.077867462004402144, -0.0778028251428945,
      -0.077713882946367857, -0.077600635414822164, -0.077463082548257525,
      -0.077301224346673886, -0.077115060810071218, -0.076904591938449562,
      -0.076669817731808823, -0.076410738190149263, -0.076127353313470522,
      -0.075819663101772947, -0.0754876675550562, -0.075131366673320654,
      -0.07475076045656591, -0.074345848904792344, -0.073916632017999584,
      -0.073463109796188072, -0.072985282239357269, -0.072483149347507742,
      -0.07195671112063895, -0.071405967558751476, -0.070830918661844669,
      -0.07023156442991918, -0.069607904862974329, -0.0689599399610109,
      -0.068287669724028055, -0.067591094152026632, -0.066870213245005777,
      -0.06612502700296613, -0.0653555354259075, -0.064561738513829819,
      -0.063743636266733211, -0.062901228684617574, -0.0620345157674829,
      -0.061143497515329277, -0.060228173928156617, -0.05928854500596499,
      -0.058324610748754356, -0.0573363711565247, -0.056323826229276036,
      -0.05528697596700842, -0.0542258203697218, -0.05314035943741615,
      -0.052030593170091531, -0.05089652156774789, -0.049738144630385249,
      -0.0485554623580036, -0.047348474750602977, -0.046117181808183354,
      -0.044861583530744376, -0.0435816799182871, -0.042277470970810097,
      -0.04094895668831483, -0.039596137070799814, -0.038219012118266588,
      -0.036817581830713542, -0.035391846208142327, -0.03394180525055128,
      -0.032467458957942064, -0.030968807330313028, -0.029445850367665838,
      -0.027898588069998745, -0.026327020437313581, -0.024731147469608528,
      -0.02311096916688532, -0.021466485529142237, -0.019797696556381097,
      -0.018104602248599985, -0.016387202605800844, -0.014645497627981743,
      -0.012879487315144114, -0.011089171667287484, -0.0092745506844118669,
      -0.0074356243665172489, -0.0055723927136036439, -0.00368485572567101,
      -0.0017730134027193756, 0.00016313425525123215, 0.0021235872482408408,
      0.0041083455762494642, 0.0061174092392770885, 0.0081507782373237136,
      0.010208452570389326, 0.012290432238473925, 0.014396717241577539,
      0.016527307579700168, 0.018682203252841784, 0.0208614042610024,
      0.02306491060418199, 0.02528092324525499, 0.027457904796509971,
      0.029589833525409011, 0.031676709431950327, 0.033718532516136192,
      0.035715302777964378, 0.037667020217437078, 0.039573684834552161,
      0.041435296629311717, 0.043251855601713671, 0.04502336175176009,
      0.046749815079448934, 0.048431215584782236, 0.050067563267757943,
      0.051658858128378074, 0.0532051001666407, 0.054706289382547631,
      0.056162425776097168, 0.057573509347290976, 0.058939540096127369,
      0.060260518022608026, 0.061536443126731372, 0.062767315408498836,
      0.0639531348679094, 0.065093901504963358, 0.066189615319660763,
      0.067240276312001634, 0.0682458844819859, 0.069206439829613622,
      0.0701219423548848, 0.070992392057799392, 0.0718177889383574,
      0.072598132996558845, 0.073333424232403743, 0.0740236626458921,
      0.074668848237023827, 0.075268981005799013, 0.075824060952217665,
      0.076334088076279713, 0.076799062377985214, 0.077218983857334167,
      0.077593852514326517, 0.077923668348962333, 0.078208431361241559,
      0.078448141551164238, 0.078642798918730328, 0.078792403463939911,
      0.078896955186792822, 0.078956454087289241, 0.07897090016542907,
      0.078940293421212365, 0.078864633854639044, 0.078743921465709188,
      0.078578156254422785, 0.078367338220779709, 0.078111467364780252,
      0.077810543686424039, 0.07746456718571143, 0.077073537862642066,
      0.076637455717216363, 0.076156320749433848, 0.075630132959295021,
      0.075058892346799369, 0.074442598911947447, 0.073781252654738588,
      0.0730748535751736, 0.0723234016732516, 0.07152689694897324,
      0.070685339402338343, 0.069798729033346815, 0.068867065841998781,
      0.067890349828294144, 0.066868580992232973, 0.065801759333815227,
      0.064689884853040891, 0.063532957549910035, 0.062330977424422548,
      0.061083944476578535, 0.059791858706377994, 0.058454720113820829,
      0.057072528698907159, 0.055645284461636857, 0.054172987402010021,
      0.052655637520026631, 0.051093234815686638, 0.04948577928899011,
      0.047833270939936993, 0.046135709768527336, 0.044393095774760569,
      0.042605428958638281, 0.04077270932015839, 0.038894936859322965,
      0.036972111576129923, 0.035004233470581417, 0.0329913025426752,
      0.030933318792413581, 0.028830282219794223, 0.026682192824819484,
      0.024489050607486962, 0.022250855567799155, 0.019967607705753482,
      0.017639307021352524, 0.015265953514593714, 0.01284754718547966,
      0.010384088034007657, 0.0078755760601804947, 0.0053220112639953687,
      0.0027233936454550967, 7.9723204556805816E-5, -0.002609000058697325,
      -0.0053427761443080313, -0.0081216050522752714, -0.010945486782599101,
      -0.013814421335279506, -0.016728408710316459, -0.019687448907709973,
      -0.022691541927460077, -0.025740687769566742, -0.028834886434029941,
      -0.031974137920849743, -0.035158442230026107, -0.038387799361559019,
      -0.041662209315448506, -0.044981672091694555, -0.048346187690297165,
      -0.051755756111256337, -0.055210377354572085, -0.058710051420244408,
      -0.062254778308273251, -0.0658445580186587, -0.069479390551401787,
      -0.073159275906499288, -0.076884214083955515, -0.080654205083766153,
      -0.084469248905935546, -0.088329345550459265, -0.092234495017341753,
      -0.096184697306578665, -0.10017995241817429, -0.10422026035212426,
      -0.1083056211084331, -0.11243603468709618, -0.11661150108811819,
      -0.12083202031149434, -0.12509759235722945, -0.12940821722531876,
      -0.13376389491576707, -0.13816462542856947, -0.14261040876373093,
      -0.14710124492124638, -0.151637133901121, -0.15621807570334961,
      -0.16084407032793741, -0.1655151177748804, -0.17023121804418,
      -0.17499237113583616, -0.17979857704984892, -0.18464983578621821,
      -0.18954614734494407, -0.19448751172602652, -0.1994739289294655,
      -0.20450539895526107, -0.20958192180341317, -0.21470349747392192,
      -0.21987012596678715, -0.22508180728200897, -0.23033854141958732,
      -2.7964713926730891, -2.7331181834253249, -2.6702902723651309,
      -2.6079876594925051, -2.5462103448074505, -2.4849583283099652,
      -2.4242316100000494, -2.3640301898777034, -2.3043540679429264,
      -2.2452032441957193, -2.1865777186360815, -2.1284774912640141,
      -2.0709025620795161, -2.0138529310825874, -1.9573285982732276,
      -1.9013295636514389, -1.8458558272172185, -1.7909073889705687,
      -1.736484248911488, -1.6825864070399774, -1.6292138633560358,
      -1.5763666178596643, -1.5240446705508619, -1.4722480214296296,
      -1.4209766704959668, -1.3702306177498733, -1.3200098631913506,
      -1.2703144068203964, -1.2211442486370119, -1.1724993886411974,
      -1.1243798268329523, -1.0767855632122767, -1.0297165977791709,
      -0.98317293053363475, -0.93715456147566867, -0.89166149060527156,
      -0.84669371792244386, -0.80225124342718557, -0.75833406711949747,
      -0.71494218899937934, -0.67207560906683106, -0.62973432732185119,
      -0.5879183437644413, -0.54662765839460148, -0.50586227121233152,
      -0.46562218221763019, -0.42590739141049944, -0.38671789879093782,
      -0.34805370435894611, -0.30991480811452327, -0.272301210057671,
      -0.23521291018838825, -0.19864990850667452, -0.1626122050125306,
      -0.12709979970595653, -0.092112692586951872, -0.057650883655516835,
      -0.023714372911651821, 0.0096968396446442118, 0.042582754013370208,
      0.07494337019452682, 0.10677868818811379, 0.13808870799413048,
      0.16887342961257845, 0.1991328530434564, 0.22886697828676533,
      0.25807580534250379, 0.286759334210673, 0.31491756489127232,
      0.34255049738430271, 0.36965813168976247, 0.3962404678076531,
      0.42229750573797442, 0.44782924548072611, 0.47283568703590761,
      0.49731683040351959, 0.52127267558356249, 0.54470322257603543,
      0.56760847138093862, 0.58998842199827239, 0.61184307442803643,
      0.633172428670231, 0.65397648472485614, 0.67425524259191116,
      0.69400870227139677, 0.71323686376331263, 0.7319397270676592,
      0.75011729218443624, 0.76776955911364331, 0.78489652785528052,
      0.80149819840934866, 0.81757457077584661, 0.83312564495477548,
      0.84815142094613449, 0.86265189874992387, 0.8766270783661434,
      0.89007695979479384, 0.90300154303587421, 0.9154008280893855,
      0.92727481495532682, 0.93862350363369851, 0.94944689412450045,
      0.959744986427733, 0.9695177805433961, 0.97876527647148892,
      0.98748747421201266, 0.99568437376496655, 1.0033559751303509,
      1.0105022783081656, 1.0171232832984105, 1.0232189901010864,
      1.0287893987161922, 1.0338345091437284, 1.0383543213836954,
      1.0423488354360924, 1.0458180513009199, 1.0487619689781771,
      1.0511805884678658, 1.0530739097699842, 1.0544419328845329,
      1.0552846578115123, 1.055602084550922, 1.0553942131027623,
      1.0546610434670325, 1.0534025756437335, 1.0516188096328647,
      1.0493097454344265, 1.0464753830484181, 1.0431157224748406,
      1.0392307637136935, 1.0348205067649765, 1.0298849516286899,
      1.0244240983048338, 1.0184379467934082, 1.0119264970944126,
      1.0048897492078477, 0.99732770313371333, 0.98924035887200934,
      0.980627716422735, 0.9714897757858918, 0.9618265369614788,
      0.95163799994949594, 0.94092416474994367, 0.92968503136282177,
      0.91792059978813012, 0.90563087002586906, 0.89281584207603815,
      0.87947551593863782, 0.86560989161366764, 0.8512189691011276,
      0.83630274840101881, 0.8208612295133394, 0.80489441243809112,
      0.78840229717527321, 0.77138488372488545, 0.753842172086928,
      0.73577416226140091, 0.71718085424830436, 0.6980622480476385,
      0.67841834365940246, 0.65824914108359678, 0.63755464032022191,
      0.61633484136927741, 0.59458974423076327, 0.57231934890467884,
      0.54952365539102555, 0.52620266368980206, 0.50242056452589312,
      0.47872683888094258, 0.45524730402494279, 0.43198195995789329,
      0.4089308066797942, 0.38609384419064519, 0.36347107249044658,
      0.34106249157919732, 0.31886810145689903, 0.29688790212355115,
      0.27512189357915334, 0.25357007582370594, 0.2322324488572079,
      0.2111090126796607, 0.19019976729106414, 0.16950471269141731,
      0.14902384888072137, 0.12875717585897498, 0.10870469362617854,
      0.088866402182332965, 0.0692423015274377, 0.049832391661492628,
      0.030636672584497426, 0.01165514429645232, -0.007112193202642266,
      -0.025665339912786321, -0.044004295833980293, -0.062129060966224066,
      -0.0800396353095183, -0.097736018863861227, -0.11521821162925441,
      -0.13248621360569718, -0.14954002479318973, -0.1663796451917324,
      -0.18300507480132458, -0.19941631362196621, -0.21561336165365724,
      -0.23159621889639881, -0.24736488535018963, -0.26291936101503111,
      -0.27825964589092167, -0.2933857399778621, -0.30829764327585218,
      -0.322995355784892, -0.33747887750498218, -0.35174820843612159,
      -0.365803348578311, -0.37964429793155, -0.39327105649583866,
      -0.40668362427117694, -0.41988200125756536, -0.43286618745500377,
      -0.4456361828634916, -0.45819198748302914, -0.47053360131361632,
      -0.48266102435525376, -0.49457425660794035, -0.506273298071677,
      -0.51775814874646331, -0.52902880863229962, -0.5400852777291858,
      -0.55092755603712118, -0.56155564355610676, -0.57196954028614166,
      -0.58216924622722666, -0.59215476137936163, -0.60192608574254625,
      -0.61148321931678018, -0.62082616210206409, -0.62995491409839788,
      -0.63886947530578153, -0.64756984572421472, -0.656056025353698,
      -0.6643280141942306, -0.67238581224581329, -0.68022941950844551,
      -0.68785883598212794, -0.69527406166685934, -0.70247509656264118,
      -0.70946194066947266, -0.71623459398735367, -0.72279305651628445,
      -0.72913732825626509, -0.73526740920729539, -0.74118329936937555,
      -0.74688499874250569, -0.75237250732668515, -0.75764582512191492,
      -0.762704952128194, -0.76754988834552285, -0.77218063377390167,
      -0.77659718841333, -0.78079955226380848, -0.78478772532533647,
      -0.78856170759791422, -0.7921214990815415, -0.7954670997762191,
      -0.79859850968194623, -0.80151572879872268, -0.80421875712654967,
      -0.80670759466542563, -0.80898224141535191, -0.81104269737632761,
      -0.81288896254835352, -0.814521036931429, -0.81593892052555383,
      -0.81714261333072868, -0.81813211534695351, -0.818907426574228,
      -0.819468547012552, -0.81981547666192589, -0.81994821552234987,
      -0.819866763593823, -0.81957112087634632, -0.81906128736991946,
      -0.818337263074542, -0.81739904799021457, -0.81624664211693676,
      -0.81488004545470882, -0.81329925800353065, -0.81150427976340211,
      -0.80949511073432345, -0.80727175091629455, -0.80483420030931541,
      -0.80218245891338591, -0.79931652672850628, -0.7962364037546763,
      -0.7929420899918963, -0.789433585440166, -0.78571089009948525,
      -0.78177400396985441, -0.77762292705127334, -0.77325765934374213,
      -0.76867820084726068, -0.76388455156182866, -0.75887671148744662,
      -0.75365468062411434, -0.7482184589718317, -0.74256804653059916,
      -0.736703443300416, -0.73062464928128279, -0.724331664473199,
      -0.71782448887616535, -0.71110312249018148, -0.70416756531524727,
      -0.697017817351363, -0.68965387859852811, -0.68207574905674329,
      -0.67428342872600822, -0.66627691760632279, -0.65805621569768724,
      -0.649621323000101, -0.64097223951356486, -0.63210896523807858,
      -0.62303150017364217, -0.61373984432025552, -0.6042339976779183,
      -0.59451396024663117, -0.58457973202639357, -0.574431313017206,
      -0.56406870321906788, -0.553491902631979, -0.54270091125594044,
      -0.531695729090952, -0.52047635613701282, -0.50904279239412387,
      -0.49739503786228434, -0.48563597431547662, -0.47395490856142458,
      -0.46235595626596809, -0.45083911742910865, -0.43940439205084542,
      -0.42805178013117834, -0.41678128167010753, -0.405592896667633,
      -0.39448662512375449, -0.38346246703847253, -0.3725204224117864,
      -0.36166049124369681, -0.35088267353420344, -0.34018696928330544,
      -0.32957337849100427, -0.31904190115729958, -0.30859253728219105,
      -0.29822528686567867, -0.28794014990776262, -0.27773712640844272,
      -0.26761621636771904, -0.25757741978559168, -0.24762073666206028,
      -0.23774616699712534, -0.22795371079078586, -0.21824336804304334,
      -0.20861513875389709, -0.19906902292334697, -0.18960502055139306,
      -0.18022313163803541, -0.170923356183274, -0.16170569418710887,
      -0.15257014564953983, -0.14351671057056703, -0.13454538895019061,
      -0.12565618078840957, -0.11684908608522558, -0.10812410484063771,
      -0.099481237054646052, -0.090920482727250743, -0.082441841858451478,
      -0.074045314448248647, -0.065730900496641945, -0.057498600003631391,
      -0.049348412969217062, -0.041280339393398494, -0.033294379276176664,
      -0.025390532617551, -0.017568799417521555, -0.0098291796760884981,
      -0.0021716733932515483, 0.00540371943098918, 0.012896998796633575,
      0.020308164703681863, 0.027637217152133929, 0.034884156141989718,
      0.042048981673249816, 0.049131693745913162, 0.056132292359980296,
      0.063050777515451142, 0.069887149212325889, 0.076641407450604243,
      0.083313552230286553, 0.089903583551372512, 0.096411501413862316,
      0.10283730581775591, 0.10918099676305369, 0.11544257424975472,
      0.12162203827785971, 0.12771938884736839, 0.13373462595828084,
      0.13966774961059705, 0.14551875980431658, 0.15128765653944032,
      0.1569744398159679, 0.16257910963389918, 0.16810166599323431,
      0.17354210889397356, 0.17890043833611624, 0.18417665431966265,
      0.1893707568446128, 0.19448274591096684, 0.19951262151872451,
      0.20446038366788605, 0.20932603235845129, 0.21410956759042044,
      0.21881098936379326, 0.22343029767856981, 0.22796749253475065,
      0.23242257393233481, 0.23679554187132273, 0.24108639635171442,
      0.24529513737350997, 0.24942176493670926, 0.2534662790413123,
      0.25742867968731914, 0.26130896687472971, 0.26510714060354412,
      0.26882320087376227, 0.27245714768538443, 0.2760089810384101,
      0.27947870093283966, 0.28286630736867291, 0.28617180034590989,
      0.28939517986455071, 0.29253644592459532, 0.29559559852604367,
      0.29857263766889575, 0.30146756335315161, 0.30428037557881155,
      0.30701107434587505, 0.30965965965434228, 0.3122261315042133,
      0.31471048989548805, 0.3171127348281666, 0.31943286630224887,
      0.321670884317735, 0.32382678887462496, 0.32590057997291866,
      0.32789225761261603, 0.32980182179371731, 0.33162927251622232,
      0.33337460978013111, 0.33503783358544365, 0.33661894393215996,
      0.33811794082028007, 0.33953482424980391, 0.3408695942207316,
      0.342122250733063, 0.34329279378679817, 0.34438122338193722,
      0.34538753951847995, 0.34631174219642646, 0.34715383141577683,
      0.34791380717653086, 0.34859166947868869, 0.34918741832225025,
      0.34970105370721571, 0.35013257563358485, 0.35048198410135772,
      0.35074927911053455, 0.35093446066111506, 0.35103752875309924,
      0.35105848338648732, 0.35099732456127919, 0.35085405227747474,
      0.35062866653507413, 0.35032116733407725, 0.34993155467448422,
      0.34945982855629493, 0.34890598897950931, 0.34827003594412764,
      0.3475519694501496, 0.34675178949757546, 0.34586949608640488,
      0.34490508921663832, 0.34385856888827537, 0.34272993510131633,
      0.341519187855761, 0.34022632715160944, 0.33885135298886171,
      0.33739426536751771, 0.3358550642875775, 0.33423374974904085,
      0.33253032175190822, 0.33074478029617932, 0.32887958292869929,
      0.3269887996103869, 0.32509455062107, 0.32319683596074844,
      0.32129565562942225, 0.31939100962709138, 0.31748289795375589,
      0.31557132060941562, 0.31365627759407089, 0.31173776890772154,
      0.30981579455036756, 0.30789035452200886, 0.30596144882264559,
      0.3040290774522777, 0.30209324041090513, 0.30015393769852794,
      0.29821116931514613, 0.2962649352607597, 0.29431523553536848,
      0.2923620701389727, 0.2904054390715724, 0.28844534233316738,
      0.28648177992375778, 0.28451475184334357, 0.28254425809192474,
      0.28057029866950112, 0.278592873576073, 0.27661198281164018,
      0.27462762637620258, 0.27263980426976059, 0.27064851649231392,
      0.26865376304386251, 0.2666555439244066, 0.264653859133946,
      0.26264870867248075, 0.26064009254001086, 0.25862801073653641,
      0.25661246326205728, 0.25459345011657353, 0.252570971300085,
      0.25054502681259194, 0.24851561665409427, 0.24648274082459196,
      0.24444639932408502, 0.24240659215257343, 0.24036331931005722,
      0.23831658079653639, 0.23626637661201094, 0.23421270675648082,
      0.23215557122994609, 0.23009497003240659, 0.22803090316386257,
      0.22596337062431388, 0.22389237241376062, 0.22181790853220268,
      0.21973997897964015, 0.217658583756073, 0.21557372286150123,
      0.21348539629592472, 0.21139360405934365, 0.20929834615175794,
      0.2071996225731674, 0.20509743332357247, 0.20299177840297286,
      0.2008826578113686, 0.19877007154875967, 0.1966540196151462,
      0.19453450201052805, 0.19241151873490525, 0.19028506978827781,
      0.18815515517064577, 0.18602177488200891, 0.18388492892236763,
      0.18174461729172162, 0.17960083999007104, 0.17745359701741578,
      0.17530288837375596, 0.17314871405909146, 0.17099107407342234,
      0.16882996841674858, 0.16666539708907016, 0.16449736009038712,
      0.1623258574206993, 0.16015088908000702, 0.15797245506831009,
      0.15579055538560849, 0.15360519003190229, 0.15141635900719144,
      0.14922406231147597, 0.14702829994475589, 0.14482907190703115,
      0.14262637819830173, 0.14042021881856759, 0.13821059376782896,
      0.13599750304608568, 0.13378094665333778, 0.13156092458958521,
      0.12933743685482807, 0.12711048344906622, 0.12488006437229979,
      0.1226461796245287, 0.120408829205753, 0.11816801311597268,
      0.11592373135518749, 0.11367598392339791, 0.11142477082060365,
      0.10917009204680474, 0.10691194760200125, 0.1046503374861931,
      0.10238526169938027, 0.10011672024156287, 0.097844713112740817,
      0.095569240312914139, 0.093290301842082812, 0.0910078977002467,
      0.088722027887406074, 0.086432692403560843, 0.084139891248710991,
      0.0818436244228565, 0.079543891925997354, 0.0772406937581336,
      0.074934029919265233, 0.072623900409392178, 0.07031030522851453,
      0.067993244376632234, 0.065672717853745122, 0.063348725659853541,
      0.06102126779495734, 0.058690344259056518, 0.056355955052151033,
      0.054018100174240941, 0.0516767796253262, 0.049331993405406824,
      0.046983741514482813, 0.044632023952554167, 0.042276840719620734,
      0.039918191815682832, 0.037556077240740296, 0.0351904969947931,
      0.032821451077841277, 0.030448939489884849, 0.028072962230923773,
      0.025693519300958048, 0.023310610699987716, 0.020924236428012735,
      0.018534396485033119, 0.016141090871048869, 0.013744319586059955,
      0.011344082630066449, 0.0089403800030683073, 0.006533211705065517,
      0.0041225777360580917, 0.0017084780960460733, -0.00070908721497064953,
      -0.0031301181969919656, -0.00555461485001793, -0.0079825771740488632,
      -0.010414005169084084, -0.01284889883512394, -0.015287258172168416,
      -0.01772908318021757, -0.02017437385927133, -0.022623130209329725,
      -0.025075352230392756, -0.027531039922460435, -0.029990193285532721,
      -0.032452812319609628, -0.034910962300693571, -0.037338854186147748,
      -0.039734504057038114, -0.04209791191336474, -0.044429077755127569,
      -0.046728001582326935, -0.048994683394962213, -0.051229123193033729,
      -0.053431320976541463, -0.055601276745485428, -0.057738990499865604,
      -0.059844462239682011, -0.061917691964934615, -0.0639586796756235,
      -0.065967425371748573, -0.067943929053309884, -0.069888190720307428,
      -0.0718002103727412, -0.07367998801061118, -0.075527523633917376,
      -0.077342817242659817, -0.079125868836838475, -0.080876678416453351,
      -0.082595245981504473, -0.084281571531991825, -0.085935655067915381,
      -0.0875574965892752, -0.08914709609607141, -0.09070445358830366,
      -0.0922295690659721, -0.0937224425290768, -0.095183073977617716,
      -0.09661146341159485, -0.098007610831008243, -0.0993715162358578,
      -0.10070317962614364, -0.10200260100186569, -0.10326978036302396,
      -0.10450471770961846, -0.10570741304164916, -0.1068778663591161,
      -0.10801607766201926, -0.10912204695035868, -0.1101957742241343,
      -0.11123725948334617, -0.1122465027279942, -0.11322350395807849,
      -0.11416826317359902, -0.11508078037455592, -0.11596105556094889,
      -0.11680908873277808, -0.11762487989004354, -0.11840842903274514,
      -0.11915973616088302, -0.11987880127445713, -0.12056562437346741,
      -0.12122020545791402, -0.12184254452779675, -0.12243264158311576,
      -0.12299049662387096, -0.12351610965006241, -0.1240094806616901,
      -0.12447060965875402, -0.12489949664125413, -0.12529614160919048,
      -0.12566054456256304, -0.1259927055013719, -0.1262926244256169,
      -0.12656030133529811, -0.1267957362304156, -0.12699892911096941,
      -0.12716987997695928, -0.12730858882838544, -0.12741505566524783,
      -0.12748928048754643, -0.12753126329528125, -0.12754100408845234,
      -0.12751850286705957, -0.1274637596311031, -0.12737677438058284,
      -0.1272575471154988, -0.12710607783585096, -0.12692236654163935,
      -0.12670641323286397, -0.12645821790952486, -0.12617778057162193,
      -0.12586510121915526, -0.1255201798521248, -0.12514301647053058,
      -0.12473361107437256, -0.12429196366365078, -0.12381807423836516,
      -0.1233119427985158, -0.12277356934410269, -0.12220295387512578,
      -0.12160009639158514, -0.12096499689348067, -0.12029765538081245,
      -0.11959807185358048, -0.11886624631178469, -0.1181021787554252,
      -0.11730586918450187, -0.11647731759901479, -0.11561652399896391,
      -0.1147234883843493, -0.11379821075517089, -0.11284069111142869,
      -0.11185092945312275, -0.11082892578025304, -0.10977468009281952,
      -0.10868819239082218, -0.10756946267426118, -0.10641849094313616,
      -0.10523527719744755, -0.10401982143719517, -0.10277212366237899,
      -0.1014921838729991, -0.10018000206905536, -0.098835578250547867,
      -0.097458912417476631, -0.09605000456984164, -0.0946088547076428,
      -0.093135462830880228, -0.09162982893955389, -0.090091953033663741,
      -0.088521835113209837, -0.086919475178192152, -0.085284873228610683,
      -0.083618029264465474, -0.081918943285756468, -0.080187615292483708,
      -0.078424045284647179, -0.076628233262246839, -0.074800179225282482,
      -0.0729398831737546, -0.071047345107662946, -0.0691225650270075,
      -0.067165542931788322, -0.065176278822005329, -0.0631547726976586,
      -0.061101024558748065, -0.059015034405273809, -0.056896802237235714,
      -0.054746328054633822, -0.052563611857468551, -0.050348653645739164,
      -0.04810145341944598, -0.045822011178589056, -0.043510326923168322,
      -0.041166400653183818, -0.038790232368635574, -0.036381822069523576,
      -0.033941169755847725, -0.031468275427608175, -0.028963139084804745,
      -0.02642576072743727, -0.023856140355506372, -0.021254277969011678,
      -0.018620173567953202, -0.015953827152330957, -0.013255238722144971,
      -0.010524408277395175, -0.0077613358180815828, -0.0049660213442042495,
      -0.0021384648557631752, 0.00072133364724172311, 0.0036131402369333049,
      0.0064981082916517182, 0.0093479201892391756, 0.012162575929695635,
      0.014942075513021194, 0.017686418939215798, 0.020395606208279404,
      0.023069637320212121, 0.025708512275013844, 0.028312231072684622,
      0.030880793713224795, 0.033414200196633645, 0.035912450522911553,
      0.0383755446920585, 0.040803482704074495, 0.043196264558959495,
      0.045553890256713608, 0.047876359797336739, 0.050163673180828913,
      0.05241583040719016, 0.054632831476420424, 0.056814676388519711,
      0.058961365143488105, 0.0610728977413255, 0.063149274182031923,
      0.065190494465607429, 0.067196558592051953, 0.069167466561365562,
      0.071103218373548174, 0.073003814028599845, 0.0748692535265206,
      0.076699536867310333, 0.0784946640509694, 0.080254635077497263,
      0.081979449946894156, 0.083669108659160121, 0.0853236112142951,
      0.086942957612299115, 0.088527147853172228, 0.090076181936914357,
      0.0915900598635255, 0.09306878163300572, 0.094512347245355011,
      0.095920756700573317, 0.097294009998660683, 0.098632107139617051,
      0.099935048123442533, 0.101202832950137, 0.10243546161970055,
      0.10363293413213315, 0.10479525048743475, 0.10592241068560544,
      0.10701441472664516, 0.10807126261055404, 0.10909295433733184,
      0.11007948990697872, 0.11103086931949462, 0.11194709257487956,
      0.11282815967313353, 0.11367407061425655, 0.11448482539824865,
      0.11526042402510978, 0.11600086649483994, 0.11670615280743915,
      0.11737628296290742, 0.11801125696124475, 0.11861107480245109,
      0.11917573648652645, 0.11970524201347095, 0.12019959138328443,
      0.12065878459596695, 0.12108282165151851, 0.12147170254993915,
      0.1218254272912288, 0.12214399587538756, 0.12242740830241534,
      0.12267566457231213, 0.12288876468507796, 0.12306670864071287,
      0.1232094964392168, 0.12331712808058978, 0.12338960356483183,
      0.12342692289194288, 0.123429086061923, 0.1233960930747722,
      0.12332794393049037, 0.12322463862907763, 0.12308617717053398,
      0.12291255955485933, 0.12270378578205368, 0.12245985585211712,
      0.12218076976504963, 0.12186652752085116, 0.12151712911952171,
      0.12113257456106136, 0.12071286384546991, 0.12025799697274764,
      0.11976797394289442, 0.11924279475591024, 0.11868245941179509,
      0.11808696791054898, 0.11745632025217193, 0.11679051643666388,
      0.1160895564640249, 0.11535344033425499, 0.11458216804735408,
      0.1137757396033223, 0.11293415500215945, 0.11205741424386573,
      0.11114551732844102, 0.11019846425588536, 0.10921625502619871,
      0.10819888963938117, 0.10714636809543265, 0.10605869039435317,
      0.1049358565361428, 0.1037778665208014, 0.10258472034832887,
      0.10135641801872557, 0.10009295953199134, 0.098794344888126134,
      0.097460574087129978, 0.096091647129002852, 0.094687564013744771,
      0.09324832474135579, 0.09177392931183577, 0.090264377725184863,
      0.088719669981402946, 0.087139806080490129, 0.085524786022446314,
      0.083874609807271586, 0.082189277434965888, 0.08046878890552922,
      0.0787131442189616, 0.076922343375263047, 0.0750963863744335,
      0.073235273216473051, 0.071339003901381592, 0.069407578429158928,
      0.067440996799805614, 0.065439259013321344, 0.063402365069706063,
      0.06133031496895984, 0.0592231087110827, 0.057080746296074555,
      0.054903227723935535, 0.05269055299466549, 0.050442722108264518,
      0.048159735064732576, 0.045841591864069706, 0.043488292506275852,
      0.041099836991351016, 0.038676225319295279, 0.036217457490108587,
      0.033723533503790912, 0.031194453360342309, 0.028630217059762722,
      0.02603082460205218, 0.02339627598721071, 0.020726571215238326,
      0.0180217102861345, 0.015281693199900151, 0.012506519956534887,
      0.0096961905560385975, 0.0068507049984113805, 0.0039700632836532496,
      0.0010542654117641076, -0.0018878554301664232, -0.0048032958815654716,
      -0.0076832213426271771, -0.010527631813351524, -0.013336527293738654,
      -0.0161099077837884, -0.018847773283500797, -0.02155012379287595,
      -0.024216959311913776, -0.026848279840614286, -0.029444085378977462,
      -0.032004375927003337, -0.034529151484691871, -0.037018412052043134,
      -0.039472157629057418, -0.041890388215733987, -0.044273103812073257,
      -0.046620304418075229, -0.048931990033739922, -0.051208160659067241,
      -0.0534488162940573, -0.055653956938709961, -0.0578235825930254,
      -0.05995769325700348, -0.062056288930644223, -0.064119369613947708,
      -0.0661469353069138, -0.068138986009542615, -0.070095521721834142,
      -0.072016542443788342, -0.073902048175405188, -0.0757520389166848,
      -0.07756651466762704, -0.079345475428231935, -0.081088921198499558,
      -0.082796851978430078, -0.084469267768023049, -0.086106168567278721,
      -0.087707554376197081, -0.0892734251947781, -0.090803781023021835,
      -0.092298621860928229, -0.093757947708497325, -0.095181758565729108,
      -0.096570054432623523, -0.097922835309180667, -0.099240101195400485,
      -0.10052185209128303, -0.10176808799682822, -0.10297880891203612,
      -0.10415401483690663, -0.1052937057714399, -0.10639788171563583,
      -0.10746654266949446, -0.10849968863301573, -0.10949731960619974,
      -0.11045943558904656, -0.11138603658155591, -0.11227712258372793,
      -0.11313269359556263, -0.11395274961706006, -0.11473729064822016,
      -0.11548631668904294, -0.11619982773952842, -0.11687782379967655,
      -0.1175203048694874, -0.11812727094896086, -0.11869872203809706,
      -0.11923465813689597, -0.11973507924535753, -0.12019998536348181,
      -0.12062937649126873, -0.12102325262871834, -0.12138161377583066,
      -0.12170445993260565, -0.1219917910990433, -0.1222436072751437,
      -0.12245990846090674, -0.1226406946563325, -0.12278596586142093,
      -0.12289572207617198, -0.12296996330058578, -0.12300868953466224,
      -0.12301190077840136, -0.12297959703180325, -0.12291177829486774,
      -0.12280844456759496, -0.12266959584998485, -0.12249523214203739,
      -0.12228535344375269, -0.12203995975513063, -0.12175905107617124,
      -0.12144262740687455, -0.12109068874724055, -0.12070323509726924,
      -0.12028026645696063, -0.11982178282631464, -0.1193277842053314,
      -0.1187982705940108, -0.11823324199235286, -0.11763269840035764,
      -0.11699663981802511, -0.11632506624535524, -0.11561797768234806,
      -0.11487537412900362, -0.1140972555853218, -0.11328362205130274,
      -0.1124344735269463, -0.11154981001225256, -0.11062963150722149,
      -0.10967393801185316, -0.10868272952614745, -0.10765600605010445,
      -0.10659376758372413, -0.10549601412700652, -0.10436274567995159,
      -0.10319396224255929, -0.10198966381482977, -0.10074985039676285,
      -0.099474521988358655, -0.098163678589617137, -0.096817320200538085,
      -0.095435446821121955, -0.094018058451368458, -0.0925651550912777,
      -0.091076736740849581, -0.089552803400084174, -0.087993355068981427,
      -0.086398391747541409, -0.08476791343576405, -0.083101920133649324,
      -0.081400411841197368, -0.079663388558408044, -0.077890850285281449,
      -0.0760827970218175, -0.074239228768016224, -0.07236014552387765,
      -0.070445547289401791, -0.068495434064588592, -0.066509805849438081,
      -0.064488662643950256, -0.062432004448125106, -0.060339831261962351,
      -0.058212143085462575, -0.056048939918625473, -0.0538502217614511,
      -0.051615988613939318, -0.049346240476090292, -0.047040977347903953,
      -0.044700199229380247, -0.04232390612051927, -0.039912098021320952,
      -0.037464774931785363, -0.034981936851912462, -0.032463583781702179,
      -0.029909715721154584, -0.027320332670269759, -0.024695434629047552,
      -0.022035021597488033, -0.019339093575591174, -0.016607650563357071,
      -0.013840692560785628, -0.011038219567876859, -0.0082002315846303325,
      -0.0053267286110469658, -0.0024177106471262311, 0.00052682230713181621,
      0.0034767489553703432, 0.0063907423700787424, 0.0092685534628949157,
      0.012110182233818932, 0.014915628682850738, 0.0176848928099903,
      0.020417974615237755, 0.023114874098592992, 0.025775591260056019,
      0.028400126099626877, 0.030988478617305575, 0.033540648813091968,
      0.036056636686986283, 0.038536442238988368, 0.040980065469098256,
      0.043387506377315956, 0.045758764963641479, 0.048093841228075106,
      0.050392735170616251, 0.05265544679126518, 0.054881976090021926,
      0.057072323066886463, 0.059226487721858852, 0.06134447005493901,
      0.063426270066127, 0.0654718877554228, 0.067481323122826356,
      0.069454576168337764, 0.071391646891957, 0.073292535293684027,
      0.075157241373518854, 0.076985765131461464, 0.078778106567511913,
      0.080534265681670159, 0.082254242473936257, 0.083938036944310151,
      0.08558564909279183, 0.087197078919381318, 0.08877232642407866,
      0.090311391606883965, 0.091814274467796858, 0.0932809750068176,
      0.094711493223946119, 0.0961058291191825, 0.097463982692526624,
      0.0987859539439786, 0.10007174287353839, 0.10132134948120596,
      0.10253477376698131, 0.10371201573086455, 0.10485307537285554,
      0.10595795269295435, 0.10702664769116095, 0.10805916036747538,
      0.10905549072189767, 0.1100156387544277, 0.11093960446506555,
      0.11182738785381126, 0.1126789889206647, 0.113494407665626,
      0.11427364408869523, 0.11501669818987209, 0.11572356996915684,
      0.11639425942654934, 0.1170287665620497, 0.11762709137565779,
      0.11818923386737376, 0.11871519403719753, 0.11920497188512907,
      0.11965856741116843, 0.12007598061531558, 0.12045721149757058,
      0.1208022600579334, 0.121111126296404, 0.12138381021298245,
      0.12162031180766869, 0.12182063108046268, 0.12198476803136453,
      0.12211272266037421, 0.12220449496749165, 0.12226008495271691,
      0.12227949261604999, 0.12226271795749089, 0.12220976097703956,
      0.12212062167469609, 0.12199530005046036, 0.12183379610433251,
      0.12163610983631241, 0.12140224124640014, 0.12113219033459569,
      0.12082595710089905, 0.12048354154531024, 0.12010494366782919,
      0.11969016346845601, 0.11923920094719058, 0.118752056104033,
      0.11822872893898319, 0.11766921945204123, 0.11707352764320705,
      0.1164416535124807, 0.11577359705986216, 0.11506935828535139,
      0.11432893718894843, 0.11355233377065321, 0.1127395480304659,
      0.11189057996838636, 0.11100542958441467, 0.11008409687855075,
      0.10912658185079467, 0.1081328845011464, 0.1071030048296059,
      0.10603694283617329, 0.10493469852084841, 0.10379627188363139,
      0.10262166292452213, 0.10141087164352069, 0.1001638980406271,
      0.098880742115841261, 0.097561403869163316, 0.0962058833005931,
      0.0948141804101307, 0.093386295197776123, 0.091922227663529407,
      0.090421977807390447, 0.088885545629359269, 0.087312931129435958,
      0.08570413430762043, 0.084059155163912685, 0.082377993698312793,
      0.080660649910820684, 0.078907123801436385, 0.077117415370159911,
      0.075291524616991234, 0.07342945154193041, 0.071531196144977341,
      0.06959675842613211, 0.067626138385394677, 0.065619336022765026,
      0.063576351338243187, 0.061497184331829186, 0.059381835003522981,
      0.057230303353324574, 0.055042589381233992, 0.052818693087251234,
      0.0505586144713763, 0.0482623535336085, 0.045929910273949784,
      0.043561284692397562, 0.041156476788954496, 0.038715486563617882,
      0.036238314016390466, 0.033724959147269459, 0.031175421956257651,
      0.028589702443352266, 0.025967800608556149, 0.023309716451866275,
      0.020615449973285044, 0.017885001172811554, 0.01511837005044589,
      0.012315556606188077, 0.009476560840038048, 0.00660138275199583,
      0.003690022342061422, 0.00074247961023482523, -0.0022412454434840023,
      -0.0052611528190950052, -0.0083128725770202968, -0.011339587115736191,
      -0.014323812483299865, -0.017265548679711296, -0.020164795704970491,
      -0.023021553559077427, -0.025835822242032146, -0.028607601753834658,
      -0.031336892094484883, -0.034023693263982857, -0.036668005262328607,
      -0.039269828089522889, -0.041829161745563427, -0.044346006230453178,
      -0.046820361544189275, -0.049252227686774529, -0.05164160465820615,
      -0.053988492458486893, -0.056292891087614066, -0.058554800545590306,
      -0.060774220832413059, -0.062951151948084788, -0.065085593892603058,
      -0.067177546665970284, -0.069227010268184133, -0.071233984699246841,
      -0.0731984699591562, -0.075120466047914419, -0.076999972965519359,
      -0.078836990711973046, -0.080631519287273509, -0.082383558691422734,
      -0.084093108924418708, -0.085760169986263443, -0.087384741876955441,
      -0.088966824596495186, -0.0905064181448827, -0.092003522522118,
      -0.093458137728201052, -0.09487026376313179, -0.096239900626910374,
      -0.09756704831953672, -0.098851706841010759, -0.10009387619133263,
      -0.10129355637050223, -0.10245074737851959, -0.10356544921538471,
      -0.10463766188109758, -0.10566738537565824, -0.10665461969906662,
      -0.10759936485132277, -0.10850162083242673, -0.1093613876423784,
      -0.11017866528117788, -0.11095345374882509, -0.11168575304532025,
      -0.11237556317066276, -0.11302288412485342, -0.1136277159078915,
      -0.11419005851977762, -0.11470991196051128, -0.11518727623009291,
      -0.11562215132852205, -0.11601453725579922, -0.11636443401192392,
      -0.11667184159689659, -0.11693676001071682, -0.11715918925338498,
      -0.11733912932490075, -0.11747658022526444, -0.11757154195447575,
      -0.1176240145125349, -0.11763399789944179, -0.11760149211519642,
      -0.11752649715979885, -0.117409013033249, -0.1172490397355469,
      -0.11704657726669261, -0.11680162562668607, -0.11651418481552728,
      -0.11618425483321625, -0.11581183567975292, -0.11539692735513737,
      -0.11493952985936969, -0.11443964319244967, -0.11389726735437744,
      -0.11331240234515294, -0.11268504816477627, -0.11201520481324731,
      -0.1113028722905661, -0.11054805059673264, -0.10975073973174697,
      -0.10891093969560911, -0.10802865048831893, -0.10710387210987654,
      -0.10613660456028191, -0.10512684783953508, -0.10407460194763567,
      -0.10297986688458456, -0.1018426426503807, -0.10066292924502517,
      -0.099440726668516749, -0.098176034920856789, -0.096868854002043911,
      -0.095519183912079461, -0.094127024650962038, -0.092692376218693168,
      -0.091215238615271227, -0.089695611840697909, -0.08813349589497152,
      -0.086528890778093739, -0.084881796490062791, -0.083192213030880577,
      -0.081460140400545111, -0.079685578599058421, -0.077868527626418466,
      -0.076008987482627313, -0.0741069581676829, -0.072162439681586754,
      -0.070175432024338388, -0.068145935195937743, -0.06607394919638486,
      -0.063959474025679752, -0.061802509683822393, -0.05960305617081281,
      -0.057361113486650947, -0.0550766816313369, -0.052749760604870632,
      -0.05038035040725207, -0.047968451038481255, -0.045514062498558258,
      -0.043017184787482954, -0.040477817905255481, -0.037895961851875742,
      -0.03527161662734371, -0.032604782231659551, -0.029895458664822988,
      -0.027143645926834353, -0.024349344017693397, -0.021512552937400231,
      -0.018633272685954771, -0.015711503263356297, -0.012747244669607277,
      -0.0097404969047042156, -0.00669125996865072, -0.0035995338614432104,
      -0.0004653185830852391, 0.0027113858664268298, 0.0059305794870892214,
      0.0091922622789057662, 0.012496434241872578, 0.015843095375993627,
      0.01923224568126497, 0.022663885157690494, 0.026138013805266258,
      0.029654631623996314, 0.033213738613876581, 0.036815334774911085,
      0.040459420107095773, 0.044145994610434808, 0.047875058284924,
      0.051646611130567538, 0.055460653147362232, 0.059317184335309137,
      0.063216204694408334, 0.06715771422465977, 0.071141712926063416,
      0.075140765985637639, 0.079087803702047918, 0.082979776787651546,
      0.086816685242448524, 0.090598529066438768, 0.09432530825962239,
      0.097997022821999333, 0.10161367275356956, 0.10517525805433317,
      0.10868177872429011, 0.11213323476344032, 0.11552962617178385,
      0.11887095294932079, 0.12215721509605094, 0.1253884126119745,
      0.12856454549709137, 0.13168561375140245, 0.1347516173749051,
      0.13776255636760276, 0.14071843072949214, 0.14361924046057639,
      0.1464649855608525, 0.14925566603032336, 0.15199128186898603,
      0.1546718330768436, 0.15729731965389301, 0.15986774160013717,
      0.16238309891557323, 0.16484339160020398, 0.16724861965402682,
      0.16959878307704426, 0.17189388186925364, 0.1741339160306577,
      0.1763188855612538, 0.17844879046104445, 0.18052363073002728,
      0.18254340636820457, 0.1845081173755746, 0.18641776375213792,
      0.18827234549789468, 0.19007186261284464, 0.19181631509698802,
      0.19350570295032468, 0.19514002617285464, 0.19671928476457795,
      0.19824347872549461, 0.19971260805560451, 0.20112667275490786,
      0.20248567282340452, 0.20378960826109441, 0.20503847906797776,
      0.20623228524405438, 0.20737102678932423, 0.20845470370378749,
      0.2094833159874441, 0.21045686364029392, 0.21137534666233726,
      0.21223876505357378, 0.2130471188140039, 0.2138004079436269,
      0.21449863244244358, 0.21514179231045327, 0.21572988754765665,
      0.21626291815405305, 0.21674088412964299, 0.21716378547442602,
      0.21753162218840255, 0.21784439427157234, 0.2181021017239356,
      0.21830474454549195, 0.21845232273624177, 0.21854483629618496,
      0.21858228522532139, 0.21856466952365117, 0.21849198919117424,
      0.21836424422789066, 0.21818143463380038, 0.21794356040890356,
      0.21765062155319989, 0.21730261806668963, 0.21689954994937266,
      0.21644141720124904, 0.21592821982231872, 0.2153599578125818,
      0.21473663117203806, 0.21405823990068784, 0.21332478399853083,
      0.2125362634655672, 0.21169267830179686, 0.21079402850721984,
      0.20984031408183612, 0.2088315350256458, 0.2077676913386487,
      0.20664878302084502, 0.20547481007223467, 0.20424577249281761,
      0.20296167028259388, 0.20162250344156343, 0.20022827196972637,
      0.19877897586708271, 0.19727461513363181, 0.19571518976937519,
      0.19410069977431088, 0.19243114514844095, 0.19070652589176335,
      0.18892684200428006, 0.18709209348598907, 0.18520228033689251,
      0.18325740255698808, 0.18125746014627814, 0.17920245310476038,
      0.17709238143243713, 0.17492724512930607, 0.17270704419536953,
      0.17043177863062503, 0.16810144843507513, 0.16571605360871725,
      0.16327559415155407, 0.16078007006358275, 0.15822948134480627,
      0.15562382799522168, 0.15296311001483187, 0.15024732740363456,
      0.14747648016162984, 0.14465056828882003, 0.14176959178520204,
      0.1388335506507789, 0.1358424448855475, 0.132796274489511,
      0.12969503946266617, 0.12653873980501645, 0.1233273755165582,
      0.12006094659729513, 0.11673945304722355, 0.11336289486634715,
      0.10993127205466216, 0.10644458461217252, 0.10290283253887417,
      0.099306015834771166, 0.095654134499859378, 0.091947188534143159,
      0.088185177937618042, 0.084368102710288329, 0.080495962852149855,
      0.076568758363205813, 0.07258648924345501, 0.06854915549289764,
      0.064456757111533564, 0.060309294099362754, 0.056106766456385321,
      0.051849174182601265, 0.047536517278010421, 0.043168795742613009,
      0.038746009576408891, 0.034268158779397984, 0.029735243351580509,
      0.025147263292956357, 0.020504218603525554, 0.015806109283288017,
      0.011052935332243857, 0.0062446967503930473, 0.0013813935377354758,
      -0.0035369743057286906, -0.00851040677999959, -0.013538903885077114,
      -0.018622465620962786, -0.023759288109863424, -0.02886636267485105,
      -0.033898570728566536, -0.0388559122710156, -0.043738387302192552,
      -0.048545995822102971, -0.053278737830741392, -0.057936613328113166,
      -0.062519622314213069, -0.067027764789046249, -0.071461040752607591,
      -0.075819450204902175, -0.080102993145924881, -0.0843116695756808,
      -0.088445479494165133, -0.0925044229013825, -0.096488499797328181,
      -0.10039771018200692, -0.10423205405541409, -0.10799153141755416,
      -0.1116761422684238, -0.11528588660802425, -0.11882076443635539,
      -0.12228077575341718, -0.12566592055920969, -0.12897619885373296,
      -0.13221161063698686, -0.13537215590897159, -0.13845783466968695,
      -0.141468646919133, -0.14440459265730987, -0.14726567188421733,
      -0.15005188459985561, -0.15276323080422449, -0.15539971049732412,
      -0.15796132367915447, -0.16044807034971559, -0.16285995050900734,
      -0.16519696415702975, -0.167459111293783, -0.16964639191926689,
      -0.17175880603348206, -0.17379635363642684, -0.17575903472810331,
      -0.1776468493085096, -0.17945979737764753, -0.18119787893551523,
      -0.18286109398211448, -0.18444944251744361, -0.18596292454150437,
      -0.18740154005429494, -0.18876528905581705, -0.19005417154606913,
      -0.19126818752505256, -0.19240733699276602, -0.19347161994921092,
      -0.19446103639438583, -0.19537558632829211, -0.19621526975092857,
      -0.19698008666229613, -0.19767003706239406, -0.198285120951223,
      -0.19882533832878235, -0.19929068919507278, -0.19968117355009365,
      -0.19999679139384527, -0.20023754272632766, -0.20040342754754076,
      -0.20049444585748449, -0.20051059765615889, -0.20045188294356409,
      -0.2003183017197, -0.2001098539845666, -0.19982653973816389,
      -0.19946835898049192, -0.19903531171155064, -0.19852739793134014,
      -0.19794461763986027, -0.19728697083711116, -0.19655445752309272,
      -0.19574707769780503, -0.19486483136124802, -0.19390771851342176,
      -0.19287573915432618, -0.19176889328396124, -0.19058718090232674,
      -0.1893306020094237, -0.18799915660525052, -0.18659284468980891,
      -0.18511166626309711, -0.18355562132511696, -0.18192470987586665,
      -0.18021893191534785, -0.17843828744355886, -0.17658277646050163,
      -0.17465239896617396, -0.17264715496057817, -0.17056704444371196,
      -0.1684120674155776, -0.16618222387617276, -0.16387751382549989,
      -0.16149793726355638, -0.15904349419034505, -0.15651418460586292,
      -0.153910008510113, -0.15123096590309223, -0.14847705678480291,
      -0.14564828115524445, -0.14274463901441656, -0.13976613036231941,
      -0.13671275519895312, -0.13358451352431727, -0.13038140533841225,
      -0.12710343064123797, -0.12375058943279435, -0.12032288171308153,
      -0.11682030748209934, -0.11324286673984785, -0.10959055948632715,
      -0.10586338572153714, -0.10206134544547776, -0.098184438658149131,
      -0.0942326653595513, -0.0902060255496841, -0.086104519228547588,
      -0.081928146396141821, -0.077676907052466743, -0.073350801197521187,
      -0.068949828831308707, -0.064473989953824584, -0.059923284565073565,
      -0.055297712665050708, -0.050597274253761315, -0.045821969331199808,
      -0.04097179789737182, -0.036046759952271745, -0.03104685549590519,
      -0.025972084528266604, -0.020822447049361426, -0.015597943059183994,
      -0.010298572557740415, -0.0049243355450245829, 0.00052476797895772975,
      0.0060487380142121849, 0.011647574560732843, 0.017321277618526143,
      0.023069847187585424, 0.02889328326791718, 0.034791585859516694,
      0.040764754962385408, 0.046812790576523489, 0.052935692701930714,
      0.059133461338607307, 0.065406096486553322, 0.071753598145768482,
      0.078175966316252954, 0.084673200998006737, 0.0912453021910298,
      0.097892269895322126, 0.10461410411088384, 0.11141080483771482,
      0.11828237207581499, 0.12522880582518447, 0.13225010608582333,
      0.13934627285773138, 0.14651730614090883, 0.15376320593535542,
      0.16104390457608406, 0.16818438924101761, 0.17516421107832134,
      0.1819833700879894, 0.1886418662700293, 0.19513969962443375,
      0.20147687015120988, 0.20765337785035073, 0.21366922272186314,
      0.21952440476574034, 0.22521892398198906, 0.23075278037060271,
      0.23612597393158771, 0.24133850466493767, 0.24639037257065893,
      0.25128157764874537, 0.25601211989920275, 0.26058199932202564,
      0.26499121591721936, 0.26923976968477853, 0.27332766062470853,
      0.27725488873700427, 0.28102145402167034, 0.28462735647870357,
      0.28807259610810487, 0.29135717290987428, 0.294481086884012,
      0.29744433803051773, 0.30024692634939176, 0.30288885184063385,
      0.30537011450424434, 0.30769071434022277, 0.30985065134856937,
      0.31184992552928414, 0.31368853688236709, 0.3153664854078182,
      0.31688377110563754, 0.31824039397582493, 0.3194363540183805,
      0.32047165123330434, 0.32134628562059625, 0.32206025718025644,
      0.32261356591228468, 0.32300621181668104, 0.32323819489344574,
      0.32330951514257844, 0.32322017256407937, 0.32297016715794841,
      0.32255949892418551, 0.32198816786279111, 0.3212561739737646,
      0.32036351725710643, 0.3193101977128161, 0.31809621534089449,
      0.31672157014134017, 0.31518626211415512, 0.31349029125933714,
      0.31163365757688843, 0.30961636106680668, 0.30743840172909431,
      0.30509977956374879, 0.30260049457077287, 0.29994054675016357,
      0.29711993610192411, 0.29413866262605115, 0.290996726322548,
      0.28769412719141119, 0.28423086523264351, 0.28060694044624412,
      0.27682235283221274, 0.27287710239054952, 0.26877118912125442,
      0.26450461302432765, 0.26007737409976889, 0.25548947234757835,
      0.25074090776775604, 0.24583168036030173, 0.24076179012521559,
      0.23553123706249782, 0.23014002117214807, 0.22458814245416653,
      0.2188756009085531, 0.21300239653530789, 0.20696852933443086,
      0.20077399930592188, 0.19441880644978116, 0.18790295076600852,
      0.18122643225460419, 0.1743892509155659, 0.1673914067488998,
      0.16023289975459781, 0.15291372993266805, 0.14543389728310246,
      0.1377934018059091, 0.12999224350107957, 0.12203042236862266,
      0.11390793840852942, 0.10562479162080896, 0.097180982005451833,
      0.088576509562467931, 0.079811374291847093, 0.070885576193599475,
      0.061799115267714977, 0.0525519915142037, 0.04314420493305543,
      0.033575755524280548, 0.023846643287868452, 0.013956868223830077,
      0.0039064303321542093, -0.0063046703871506016, -0.016676433934087354,
      -0.027208860308655825, -0.037901949510856237, -0.048755701540688479,
      -0.05977011639815244, -0.0709451940832484, -0.08228093459597613,
      -0.093777337936335747, -0.10543440410432697, -0.11725213309995031,
      -0.12923052492320541, -0.14136957957409235, -0.15366929705261106,
      -0.16612967735876161, -0.17875072049254409, -0.19153242645395824,
      -0.20447479524300427, -0.21757782685968224, -0.230841521303992,
      -0.24426587857593351, -0.25785089867551103, -0.27159658160271238,
      -0.28550292735755345, -0.29956993594001846, -0.31379760735012341,
      -0.32818594158785175, -0.34273493865322036, -0.35744459854621258,
      -0.37231492126684479, -0.38734590681510056, -0.40253755519099688,
      -0.41788986639451603, -0.43340284042567595, -0.44907647728445887,
      -0.4649107769708824, -0.480905739484929, -0.49706136482661639,
      -0.51337765299592641, -0.52985460399287776, -0.54649221781745116,
      -0.56329049446966617, -0.58024943394950346, -0.59736903625698223,
      -0.61464930139208784, -0.63209022935482539, -0.64969182014519478,
      -0.6674540737631961, -0.68537699020882914, -0.7034605694820939,
      -0.72170481158299082, -0.74010971651151924, -0.75867528426767972,
      -0.77740151485147191, -0.796288408262896, -0.815335964501952,
      -0.8345441835686398, -0.85391306546295931, -0.26186584871477958,
      -0.2597453631781077, -0.25762487764143571, -0.25550439210476378,
      -0.25338390656809184, -0.25126342103141996, -0.24914293549474806,
      -0.2470224499580761, -0.24490196442140416, -0.24278147888473223,
      -0.24066099334806029, -0.23854050781138839, -0.23642002227471648,
      -0.23429953673804454, -0.23217905120137261, -0.2300585656647007,
      -0.22793808012802874, -0.22581759459135681, -0.2236971090546849,
      -0.22157662351801297, -0.21945613798134106, -0.21733565244466913,
      -0.21521516690799719, -0.21309468137132528, -0.21097419583465332,
      -0.20885371029798142, -0.20673322476130951, -0.20461273922463757,
      -0.20249225368796567, -0.20037176815129373, -0.19825128261462177,
      -0.19613079707794986, -0.1940103115412779, -0.19188982600460602,
      -0.18976934046793409, -0.18764885493126215, -0.18552836939459025,
      -0.18340788385791829, -0.18128739832124635, -0.17916691278457444,
      -0.17704642724790254, -0.1749259417112306, -0.17280545617455864,
      -0.17068497063788673, -0.1685644851012148, -0.16644399956454287,
      -0.164323514027871, -0.16220302849119905, -0.16008254295452709,
      -0.15796205741785518, -0.15584157188118325, -0.15372108634451134,
      -0.15160060080783944, -0.14948011527116747, -0.14735962973449557,
      -0.14523914419782363, -0.1431186586611517, -0.14099817312447979,
      -0.13887768758780783, -0.13675720205113595, -0.134636716514464,
      -0.13251623097779205, -0.13039574544112018, -0.12827525990444824,
      -0.12615477436777628, -0.12403428883110434, -0.12191380329443241,
      -0.11979331775776053, -0.1176728322210886, -0.11555234668441666,
      -0.11343186114774476, -0.11131137561107279, -0.10919089007440086,
      -0.10707040453772895, -0.10494991900105699, -0.1028294334643851,
      -0.10070894792771318, -0.098588462391041243, -0.096467976854369336,
      -0.0943474913176974, -0.092227005781025467, -0.090106520244353533,
      -0.087986034707681571, -0.085865549171009678, -0.083745063634337744,
      -0.081624578097665823, -0.079504092560993916, -0.077383607024321954,
      -0.075263121487650034, -0.073142635950978141, -0.071022150414306179,
      -0.068901664877634272, -0.066781179340962352, -0.0646606938042904,
      -0.0625402082676185, -0.060419722730946528, -0.058299237194274628,
      -0.056178751657602714, -0.054058266120930773, -0.051937780584258852,
      -0.049817295047586904, -0.047696809510914991, -0.045576323974243112,
      -0.043455838437571156, -0.041335352900899243, -0.039214867364227329,
      -0.037094381827555388, -0.034973896290883488, -0.032853410754211575,
      -0.030732925217539606, -0.028612439680867692, -0.026491954144195751,
      -0.024371468607523837, -0.022250983070851917, -0.020130497534179975,
      -0.018010011997508069, -0.015889526460836106, -0.013769040924164186,
      -0.011648555387492279, -0.009528069850820331, -0.0074075843141484243,
      -0.0052870987774765038, -0.0031666132408045555, -0.0010461277041326489,
      0.0010743578325392716, 0.00319484336921122, 0.0053153289058831404,
      0.0074358144425550748, 0.0095562999792269884, 0.011676785515898916,
      0.013797271052570857, 0.015917756589242785, 0.018038242125914726,
      0.020158727662586633, 0.022279213199258539, 0.0243996987359305,
      0.026520184272602408, 0.028640669809274329, 0.030761155345946277,
      0.0328816408826182, 0.035002126419290104, 0.037122611955962052,
      0.039243097492633952, 0.041363583029305921, 0.043484068565977821,
      0.045604554102649748, 0.04772503963932169, 0.04984552517599361,
      0.051966010712665558, 0.054086496249337465, 0.056206981786009386,
      0.058327467322681334, 0.060447952859353241, 0.062568438396025161,
      0.064688923932697109, 0.06680940946936903, 0.068929895006040937,
      0.071050380542712885, 0.0731708660793848, 0.075291351616056754,
      0.077411837152728674, 0.079532322689400581, 0.081652808226072487,
      0.0837732937627444, 0.085893779299416384, 0.088014264836088291,
      0.090134750372760211, 0.091028297125024749, 0.0902041060334841,
      0.089379914941943472, 0.088555723850402848, 0.087731532758862238,
      0.086907341667321614, 0.086083150575780976, 0.085258959484240324,
      0.084434768392699713, 0.083610577301159089, 0.082786386209618479,
      0.081962195118077855, 0.0811380040265372, 0.080313812934996578,
      0.079489621843455968, 0.07866543075191533, 0.0778412396603747,
      0.0770170485688341, 0.076192857477293457, 0.075368666385752819,
      0.0745444752942122, 0.073720284202671585, 0.072896093111130961,
      0.072071902019590309, 0.071247710928049685, 0.070423519836509074,
      0.06959932874496845, 0.068775137653427826, 0.06795094656188716,
      0.06712675547034655, 0.066302564378805925, 0.0654783732872653,
      0.064654182195724691, 0.063829991104184039, 0.063005800012643415,
      0.0621816089211028, 0.061357417829562208, 0.060533226738021584,
      0.059709035646480953, 0.0588848445549403, 0.0580606534633997,
      0.057236462371859073, 0.056412271280318442, 0.055588080188777825,
      0.054763889097237173, 0.053939698005696549, 0.053115506914155938,
      0.052291315822615321, 0.05146712473107469, 0.05064293363953408,
      0.049818742547993414, 0.048994551456452796, 0.048170360364912165,
      0.047346169273371548, 0.046521978181830924, 0.045697787090290286,
      0.044873595998749669, 0.044049404907209037, 0.04322521381566842,
      0.042401022724127796, 0.041576831632587144, 0.040752640541046534,
      0.039928449449505909, 0.039104258357965285, 0.038280067266424661,
      0.037455876174884009, 0.036631685083343385, 0.035807493991802761,
      0.034983302900262143, 0.034159111808721526, 0.0333349207171809,
      0.032510729625640257, 0.031686538534099633, 0.030862347442559012,
      0.030038156351018391, 0.029213965259477771, 0.028389774167937126,
      0.0275655830763965, 0.026741391984855884, 0.025917200893315253,
      0.025093009801774632, 0.024268818710234012, 0.02344462761869336,
      0.022620436527152746, 0.021796245435612118, 0.020972054344071504,
      0.02014786325253088, 0.019323672160990228, 0.018499481069449607,
      0.017675289977908983, 0.016851098886368366, 0.016026907794827745,
      0.015202716703287093, 0.014378525611746469, 0.013554334520205848,
      0.012730143428665228, 0.011905952337124603, 0.011081761245583955,
      0.010257570154043334, 0.00943337906250272, 0.0086091879709620962,
      0.0077849968794214686, 0.0069608057878808478, 0.0061366146963401993,
      0.0053124236047995786, 0.0044882325132589614, 0.0036640414217183337,
      0.0028398503301777164, 0.0020156592386370645, 0.0011914681470964437,
      0.000367277055555823, -0.00045691403598480118, -0.0012811051275254184,
      -0.0021052962190660426, -0.0029294873106066911, -0.0037536784021473084,
      -0.0045778694936879361, -0.0054020605852285568, -0.006226251676769174,
      -0.007050442768309826, -0.00787463385985045, -0.008698824951391064,
      -0.0095230160429316917, -0.010347207134472316, -0.011171398226012964,
      -0.011995589317553582, -0.012819780409094199, -0.013643971500634823,
      -0.014468162592175447, -0.0152923536837161, -0.016116544775256723,
      -0.016940735866797341, -0.017764926958337965, -0.018589118049878589,
      -0.0194133091414192, -0.020237500232959855, -0.021061691324500472,
      -0.021885882416041096, -0.02271007350758172, -0.023534264599122338,
      -0.024358455690662986, -0.025182646782203607, -0.026006837873744228,
      -0.026831028965284855, -0.027655220056825469, -0.028479411148366097,
      -0.029303602239906745, -0.030127793331447369, -0.030951984422987987,
      -0.031776175514528611, -0.032600366606069228, -0.03342455769760988,
      -0.034248748789150504, -0.035072939880691129, -0.035897130972231746,
      -0.036721322063772363, -0.037545513155312987, -0.038369704246853611,
      -0.039193895338394229, -0.040018086429934853, -0.040842277521475477,
      -0.04166646861301615, -0.042490659704556767, -0.043314850796097391,
      -0.044139041887638016, -0.044963232979178633, -0.045787424070719257,
      -0.045641131946606642, -0.045300733867308186, -0.0449603357880097,
      -0.044619937708711234, -0.044279539629412772, -0.043939141550114309,
      -0.043598743470815847, -0.043258345391517378, -0.042917947312218922,
      -0.042577549232920453, -0.042237151153621991, -0.041896753074323528,
      -0.041556354995025073, -0.041215956915726576, -0.040875558836428114,
      -0.040535160757129651, -0.040194762677831189, -0.03985436459853272,
      -0.039513966519234264, -0.0391735684399358, -0.03883317036063734,
      -0.03849277228133887, -0.038152374202040415, -0.037811976122741946,
      -0.037471578043443456, -0.037131179964145, -0.036790781884846538,
      -0.036450383805548076, -0.036109985726249606, -0.035769587646951151,
      -0.035429189567652682, -0.035088791488354212, -0.034748393409055757,
      -0.034407995329757288, -0.034067597250458825, -0.033727199171160342,
      -0.03338680109186188, -0.033046403012563418, -0.032706004933264948,
      -0.032365606853966493, -0.032025208774668024, -0.031684810695369561,
      -0.0313444126160711, -0.03100401453677264, -0.030663616457474174,
      -0.030323218378175684, -0.029982820298877225, -0.02964242221957876,
      -0.029302024140280294, -0.028961626060981835, -0.028621227981683376,
      -0.02828082990238491, -0.027940431823086444, -0.027600033743787986,
      -0.02725963566448952, -0.026919237585191057, -0.026578839505892567,
      -0.026238441426594108, -0.025898043347295643, -0.02555764526799718,
      -0.025217247188698718, -0.024876849109400252, -0.02453645103010179,
      -0.024196052950803328, -0.023855654871504862, -0.0235152567922064,
      -0.023174858712907916, -0.022834460633609454, -0.022494062554310988,
      -0.022153664475012526, -0.021813266395714064, -0.021472868316415594,
      -0.02113247023711716, -0.020792072157818697, -0.020451674078520232,
      -0.020111275999221773, -0.01977087791992331, -0.01943047984062482,
      -0.019090081761326358, -0.018749683682027896, -0.018409285602729433,
      -0.018068887523430964, -0.0177284894441325, -0.017388091364834039,
      -0.017047693285535577, -0.016707295206237115, -0.016366897126938652,
      -0.01602649904764019, -0.015686100968341703, -0.015345702889043241,
      -0.015005304809744775, -0.014664906730446313, -0.014324508651147851,
      -0.013984110571849388, -0.013643712492550926, -0.01330331441325246,
      -0.012962916333953998, -0.012622518254655534, -0.012282120175357071,
      -0.011941722096058585, -0.011601324016760121, -0.011260925937461658,
      -0.010920527858163193, -0.01058012977886473, -0.010239731699566271,
      -0.0098993336202678056, -0.0095589355409693433, -0.0092185374616708775,
      -0.0088781393823724152, -0.008537741303073932, -0.0081973432237754662,
      -0.0078569451444770021, -0.0075165470651785415, -0.0071761489858800775,
      -0.0068357509065816143, -0.00649535282728315, -0.0061549547479846888,
      -0.0058145566686862247, -0.0054741585893877624, -0.0051337605100892983,
      -0.0047933624307908117, -0.0044529643514923476, -0.0041125662721938853,
      -0.0037721681928954212, -0.0034317701135969606, -0.0030913720342984966,
      -0.0027509739550000325, -0.00241057587570157, -0.0020701777964031078,
      -0.0017297797171046438, -0.0013893816378061571, -0.0010489835585076931,
      -0.00070858547920923075, -0.00036818739991076668, -2.7789320612304352E-5,
      0.000312608758686158, 0.00065300683798462378, 0.00099340491728308611,
      0.0013338029965815476, 0.00167420107588001, 0.002014599155178474,
      0.0023549972344769615, 0.0026953953137754238, 0.0030357933930738887,
      0.003376191472372351, 0.0037165895516708134, 0.0040569876309692766,
      0.0043973857102677389, 0.0047377837895662021, 0.005078181868864667,
      0.0054185799481631294, 0.0057589780274615926, 0.00609937610676008,
      0.0064397741860585415, 0.0067801722653570047, 0.0071205703446554679,
      0.0074609684239539328, 0.0078013665032523952, 0.00814176458255086,
      0.0084821626618493216, 0.0088225607411477839, 0.009162958820446248,
      0.00950335689974471, 0.0098437549790431986, 0.010184153058341661,
      0.010524551137640125, 0.010833296951756785, 0.011047080908295332,
      0.011260864864833877, 0.011474648821372422, 0.011688432777910969,
      0.011902216734449514, 0.012116000690988058, 0.012329784647526619,
      0.012543568604065164, 0.012757352560603712, 0.012971136517142256,
      0.0131849204736808, 0.013398704430219345, 0.013612488386757892,
      0.013826272343296437, 0.014040056299834982, 0.014253840256373527,
      0.014467624212912073, 0.014681408169450632, 0.014895192125989179,
      0.015108976082527724, 0.015322760039066269, 0.015536543995604814,
      0.015750327952143359, 0.015964111908681904, 0.016177895865220449,
      0.016391679821758997, 0.016605463778297542, 0.0168192477348361,
      0.017033031691374649, 0.017246815647913194, 0.017460599604451739,
      0.017674383560990284, 0.017888167517528829, 0.018101951474067374,
      0.018315735430605919, 0.018529519387144464, 0.018743303343683008,
      0.018957087300221557, 0.019170871256760116, 0.019384655213298661,
      0.019598439169837206, 0.019812223126375754, 0.0200260070829143,
      0.020239791039452844, 0.020453574995991389, 0.020667358952529934,
      0.020881142909068479, 0.021094926865607024, 0.021308710822145568,
      0.021522494778684131, 0.021736278735222676, 0.021950062691761221,
      0.022163846648299769, 0.02237763060483831, 0.022591414561376855,
      0.022805198517915404, 0.023018982474453949, 0.023232766430992494,
      0.023446550387531039, 0.023660334344069583, 0.023874118300608142,
      0.024087902257146691, 0.024301686213685239, 0.024515470170223777,
      0.024729254126762329, 0.024943038083300874, 0.025156822039839415,
      0.02537060599637796, 0.025584389952916509, 0.025798173909455054,
      0.026011957865993612, 0.026225741822532157, 0.026439525779070706,
      0.026653309735609247, 0.026867093692147796, 0.02708087764868634,
      0.027294661605224885, 0.02750844556176343, 0.027722229518301975,
      0.027936013474840524, 0.028149797431379065, 0.028363581387917627,
      0.028577365344456172, 0.028791149300994717, 0.029004933257533262,
      0.029218717214071807, 0.029432501170610352, 0.029646285127148904,
      0.029860069083687442, 0.030073853040225987, 0.030287636996764532,
      0.030501420953303097, 0.030715204909841642, 0.030928988866380187,
      0.031142772822918729, 0.031356556779457277, 0.031570340735995822,
      0.031784124692534367, 0.031997908649072912, 0.032211692605611457,
      0.03242547656215, 0.032639260518688554, 0.032853044475227106,
      0.033066828431765657, 0.0332806123883042, 0.033494396344842747,
      0.033708180301381292, 0.033921964257919837, 0.034135748214458382,
      0.034349532170996927, 0.034563316127535472, 0.034777100084074017,
      0.034990884040612562, 0.035204667997151128, 0.035418451953689666,
      0.03563223591022821, 0.035846019866766762, 0.036059803823305307,
      0.036273587779843845, 0.0364873717363824, 0.036701155692920942,
      0.036914939649459487, 0.037128723605998025, 0.037342507562536577,
      0.037556291519075143, 0.037770075475613681, 0.037983859432152232,
      0.038197643388690777, 0.038411427345229322, 0.03862521130176786,
      0.038838995258306412, 0.039052779214844957, 0.0392665631713835,
      0.039480347127922047, 0.039694131084460606, 0.039907915040999151,
      0.040121698997537696, 0.040335482954076241, 0.040549266910614792,
      0.04076305086715333, 0.040976834823691882, 0.04119061878023042,
      0.041404402736768965, 0.04161818669330751, 0.041831970649846062,
      0.0420457546063846, 0.042259538562923152, 0.0424733225194617,
      0.042687106476000242, 0.04290089043253878, 0.043114674389077332,
      0.043328458345615876, 0.043542242302154421, 0.043756026258692966,
      0.043969810215231518, 0.044183594171770091, 0.044397378128308629,
      0.044611162084847181, 0.044824946041385726, 0.045038729997924271,
      0.045252513954462815, 0.04546629791100136, 0.045680081867539905,
      0.04589386582407845, 0.046107649780616995, 0.046321433737155547,
      0.045865652044252359, 0.045075067449300545, 0.044284482854348724,
      0.04349389825939691, 0.0427033136644451, 0.041912729069493171,
      0.041122144474541357, 0.040331559879589536, 0.039540975284637722,
      0.0387503906896859, 0.037959806094734087, 0.037169221499782273,
      0.036378636904830459, 0.035588052309878646, 0.034797467714926832,
      0.034006883119975011, 0.0332162985250232, 0.032425713930071383,
      0.031635129335119569, 0.030844544740167755, 0.030053960145215934,
      0.029263375550264113, 0.028472790955312306, 0.027682206360360492,
      0.026891621765408678, 0.026101037170456858, 0.025310452575505044,
      0.024519867980553112, 0.023729283385601294, 0.022938698790649484,
      0.022148114195697666, 0.021357529600745852, 0.020566945005794035,
      0.019776360410842225, 0.018985775815890404, 0.01819519122093859,
      0.017404606625986776, 0.016614022031034958, 0.015823437436083141,
      0.015032852841131327, 0.014242268246179513, 0.013451683651227692,
      0.012661099056275882, 0.011870514461324068, 0.01107992986637225,
      0.010289345271420433, 0.0094987606764686226, 0.0087081760815168018,
      0.00791759148656487, 0.0071270068916130594, 0.0063364222966612455,
      0.0055458377017094281, 0.0047552531067576141, 0.0039646685118058,
      0.0031740839168539828, 0.0023834993219021654, 0.0015929147269503514,
      0.00080233013199853057, 1.17455370467201E-5, -0.00077883905790509383,
      -0.0015694236528569147, -0.0023600082478087286, -0.0031505928427605391,
      -0.00394117743771235, -0.0047317620326641704, -0.0055223466276159879,
      -0.0063129312225678053, -0.0071035158175196192, -0.0078941004124714366,
      -0.0086846850074232471, -0.009475269602375179, -0.010265854197326989,
      -0.01105643879227881, -0.011847023387230621, -0.012637607982182438,
      -0.013428192577134259, -0.014218777172086076, -0.015009361767037887,
      -0.015799946361989708, -0.016590530956941515, -0.017381115551893332,
      -0.01817170014684515, -0.018962284741796964, -0.019752869336748781,
      -0.020543453931700591, -0.021334038526652412, -0.02212462312160423,
      -0.022915207716556047, -0.023705792311507858, -0.024496376906459675,
      -0.025286961501411496, -0.026077546096363414, -0.026868130691315235,
      -0.027658715286267052, -0.028449299881218863, -0.02923988447617068,
      -0.030030469071122497, -0.030821053666074315, -0.031611638261026122,
      -0.032402222855977936, -0.033192807450929757, -0.033983392045881564,
      -0.034773976640833384, -0.035564561235785205, -0.036355145830737012,
      -0.037145730425688833, -0.037936315020640654, -0.038726899615592468,
      -0.039517484210544282, -0.040308068805496089, -0.04109865340044791,
      -0.041889237995399724, -0.042679822590351656, -0.043470407185303477,
      -0.04426099178025529, -0.045051576375207104, -0.045842160970158918,
      -0.046632745565110725, -0.047423330160062546, -0.048213914755014367,
      -0.049004499349966181, -0.049795083944917995, -0.050585668539869809,
      -0.051376253134821623, -0.052166837729773444, -0.052957422324725258,
      -0.053748006919677085, -0.054538591514628892, -0.055329176109580706,
      -0.05611976070453252, -0.056910345299484327, -0.057700929894436148,
      -0.058491514489387962, -0.0592820990843399, -0.060072683679291708,
      -0.060863268274243536, -0.061653852869195329, -0.062444437464147157,
      -0.063235022059098964, -0.0640256066540508, -0.0648161912490026,
      -0.065606775843954412, -0.066397360438906233, -0.067187945033858054,
      -0.06797852962880975, -0.068769114223761557, -0.069559698818713392,
      -0.0703502834136652, -0.071140868008617, -0.071931452603568841,
      -0.072722037198520648, -0.073512621793472455, -0.074303206388424275,
      -0.0750937909833761, -0.0758843755783279, -0.076674960173279835,
      -0.077465544768231656, -0.078256129363183477, -0.07904671395813527,
      -0.0798372985530871, -0.080627883148038912, -0.081418467742990719,
      -0.08220905233794254, -0.082999636932894361, -0.083790221527846181,
      -0.084580806122797988, -0.085220107192771261, -0.084194926516495835,
      -0.083169745840220452, -0.082144565163945041, -0.081119384487669643,
      -0.080094203811394246, -0.079069023135118835, -0.078043842458843438,
      -0.077018661782568026, -0.075993481106292615, -0.074968300430017079,
      -0.073943119753741682, -0.072917939077466271, -0.071892758401190873,
      -0.070867577724915462, -0.069842397048640065, -0.068817216372364653,
      -0.067792035696089256, -0.066766855019813859, -0.065741674343538448,
      -0.06471649366726305, -0.063691312990987639, -0.062666132314712242,
      -0.061640951638436838, -0.060615770962161433, -0.059590590285886036,
      -0.058565409609610625, -0.057540228933335227, -0.05651504825705983,
      -0.055489867580784412, -0.054464686904509015, -0.053439506228233617,
      -0.05241432555195806, -0.051389144875682663, -0.050363964199407266,
      -0.049338783523131861, -0.04831360284685645, -0.047288422170581053,
      -0.046263241494305649, -0.045238060818030237, -0.04421288014175484,
      -0.043187699465479443, -0.042162518789204045, -0.041137338112928627,
      -0.04011215743665323, -0.039086976760377833, -0.038061796084102428,
      -0.037036615407827017, -0.036011434731551613, -0.034986254055276222,
      -0.033961073379000811, -0.032935892702725414, -0.03191071202645001,
      -0.030885531350174456, -0.029860350673899062, -0.028835169997623655,
      -0.02780998932134825, -0.026784808645072846, -0.025759627968797445,
      -0.024734447292522038, -0.023709266616246633, -0.022684085939971226,
      -0.021658905263695835, -0.020633724587420424, -0.019608543911145027,
      -0.018583363234869622, -0.017558182558594218, -0.016533001882318814,
      -0.01550782120604341, -0.014482640529768012, -0.013457459853492608,
      -0.012432279177217211, -0.0114070985009418, -0.010381917824666395,
      -0.0093567371483908521, -0.0083315564721154478, -0.0073063757958400435,
      -0.0062811951195646462, -0.005256014443289235, -0.0042308337670138307,
      -0.0032056530907384265, -0.0021804724144630291, -0.0011552917381876249,
      -0.0001301110619122206, 0.00089506961436317672, 0.001920250290638581,
      0.0029454309669139922, 0.0039706116431893895, 0.0049957923194648007,
      0.0060209729957401911, 0.0070461536720155954, 0.008071334348291,
      0.0090965150245664039, 0.010121695700841815, 0.011146876377117212,
      0.012172057053392756, 0.013197237729668153, 0.014222418405943564,
      0.015247599082218968, 0.01627277975849438, 0.017297960434769777,
      0.018323141111045174, 0.019348321787320578, 0.020373502463595976,
      0.021398683139871387, 0.022423863816146791, 0.0234490444924222,
      0.024474225168697596, 0.025499405844973, 0.026524586521248394,
      0.027549767197523806, 0.028574947873799203, 0.029600128550074611,
      0.030625309226350015, 0.031650489902625423, 0.03267567057890082,
      0.033700851255176217, 0.034726031931451774, 0.035751212607727179,
      0.036776393284002576, 0.037801573960277987, 0.038826754636553384,
      0.039851935312828782, 0.040877115989104179, 0.0419022966653796,
      0.042927477341655, 0.0439526580179304, 0.0449778386942058,
      0.0460030193704812, 0.047028200046756605, 0.048053380723032,
      0.049078561399307406, 0.050103742075582824, 0.051128922751858222,
      0.052154103428133619, 0.053179284104409023, 0.054204464780684428,
      0.055229645456959825, 0.056254826133235382, 0.057280006809510786,
      0.058305187485786183, 0.059330368162061588, 0.060355548838336992,
      0.061380729514612389, 0.062405910190887794, 0.063431090867163212,
      0.064456271543438609, 0.065481452219714, 0.0665066328959894,
      0.067531813572264815, 0.068556994248540212, 0.06958217492481561,
      0.070607355601091021, 0.071632536277366432, 0.072657716953641829,
      0.073682897629917227, 0.074708078306192638, 0.075733258982468035,
      0.076758439658743433, 0.077783620335018844, 0.0788088010112944,
      0.079833981687569791, 0.0808591623638452, 0.0818843430401206,
      0.082909523716396, 0.083934704392671408, 0.084959885068946819,
      0.085071260704305873, 0.084268758227974888, 0.083466255751643889,
      0.08266375327531289, 0.0818612507989819, 0.0810587483226509,
      0.0802562458463199, 0.079453743369988908, 0.078651240893657923,
      0.077848738417326938, 0.077046235940995939, 0.07624373346466494,
      0.075441230988333954, 0.074638728512002955, 0.073836226035671859,
      0.073033723559340846, 0.072231221083009861, 0.071428718606678862,
      0.070626216130347877, 0.069823713654016878, 0.069021211177685879,
      0.0682187087013549, 0.067416206225023909, 0.0666137037486929,
      0.065811201272361911, 0.065008698796030912, 0.064206196319699926,
      0.063403693843368913, 0.062601191367037942, 0.061798688890706943,
      0.060996186414375937, 0.060193683938044945, 0.059391181461713953,
      0.058588678985382961, 0.057786176509051969, 0.056983674032720866,
      0.056181171556389867, 0.055378669080058868, 0.054576166603727883,
      0.053773664127396884, 0.0529711616510659, 0.0521686591747349,
      0.051366156698403907, 0.050563654222072915, 0.049761151745741916,
      0.048958649269410917, 0.048156146793079932, 0.047353644316748933,
      0.046551141840417948, 0.045748639364086949, 0.04494613688775595,
      0.044143634411424965, 0.043341131935093959, 0.042538629458762967,
      0.041736126982431981, 0.040933624506100982, 0.040131122029769872,
      0.039328619553438887, 0.038526117077107888, 0.037723614600776889,
      0.03692111212444589, 0.036118609648114905, 0.03531610717178392,
      0.034513604695452921, 0.033711102219121922, 0.032908599742790937,
      0.032106097266459938, 0.031303594790128939, 0.030501092313797957,
      0.029698589837466958, 0.028896087361135966, 0.028093584884804967,
      0.027291082408473975, 0.026488579932142976, 0.025686077455811984,
      0.024883574979481, 0.02408107250315, 0.023278570026819007,
      0.022476067550487897, 0.021673565074156898, 0.020871062597825913,
      0.020068560121494921, 0.019266057645163925, 0.01846355516883293,
      0.017661052692501931, 0.016858550216170939, 0.016056047739839947,
      0.015253545263508955, 0.014451042787177959, 0.013648540310846967,
      0.012846037834515971, 0.012043535358184979, 0.01124103288185398,
      0.010438530405522988, 0.009636027929191996, 0.0088335254528610074,
      0.0080310229765300084, 0.0072285205001990163, 0.0064260180238680208,
      0.0056235155475369107, 0.0048210130712059221, 0.0040185105948749231,
      0.0032160081185439379, 0.0024135056422129389, 0.0016110031658819433,
      0.00080850068955094431, 5.9982132199556948E-6, -0.00079650426311103986,
      -0.0015990067394420319, -0.0024015092157730206, -0.0032040116921040161,
      -0.0040065141684350117, -0.0048090166447660072, -0.0056115191210969959,
      -0.0064140215974279984, -0.007216524073758987, -0.0080190265500899825,
      -0.0088215290264209711, -0.0096240315027519667, -0.010426533979082962,
      -0.011229036455413954, -0.012031538931745064, -0.012834041408076056,
      -0.013636543884407052, -0.014439046360738048, -0.01524154883706904,
      -0.016044051313400032, -0.016846553789731027, -0.017649056266062019,
      -0.018451558742393015, -0.019254061218724007, -0.020056563695055003,
      -0.020859066171385995, -0.02166156864771699, -0.022464071124047982,
      -0.023266573600378978, -0.024069076076709973, -0.024871578553040966,
      -0.025674081029371958, -0.02647658350570295, -0.027279085982033949,
      -0.028081588458364941, -0.028884090934696051, -0.029686593411027043,
      -0.030489095887358035, -0.031291598363689027, -0.032094100840020026,
      -0.032896603316351018, -0.03369910579268201, -0.034501608269013009,
      -0.035304110745344, -0.036106613221674994, -0.036909115698005986,
      -0.037711618174336978, -0.038514120650667977, -0.039316623126998969,
      -0.040119125603329961, -0.04092162807966096, -0.041724130555991952,
      -0.042526633032322944, -0.043329135508653936, -0.044131637984984935,
      -0.044934140461315927, -0.045736642937647037, -0.046539145413978029,
      -0.047341647890309022, -0.048144150366640014, -0.047906189433623479,
      -0.047573612039442825, -0.047241034645262178, -0.046908457251081524,
      -0.04657587985690087, -0.046243302462720216, -0.045910725068539562,
      -0.045578147674358908, -0.045245570280178254, -0.0449129928859976,
      -0.044580415491816947, -0.044247838097636293, -0.043915260703455639,
      -0.043582683309274992, -0.043250105915094338, -0.042917528520913684,
      -0.04258495112673303, -0.042252373732552327, -0.041919796338371673,
      -0.041587218944191019, -0.041254641550010365, -0.040922064155829711,
      -0.040589486761649057, -0.04025690936746841, -0.039924331973287756,
      -0.0395917545791071, -0.039259177184926448, -0.0389265997907458,
      -0.03859402239656514, -0.038261445002384487, -0.037928867608203833,
      -0.037596290214023179, -0.037263712819842525, -0.036931135425661871,
      -0.036598558031481224, -0.03626598063730057, -0.035933403243119916,
      -0.035600825848939262, -0.035268248454758608, -0.034935671060577905,
      -0.034603093666397258, -0.0342705162722166, -0.033937938878035943,
      -0.033605361483855296, -0.033272784089674642, -0.032940206695493988,
      -0.032607629301313334, -0.032275051907132687, -0.031942474512952033,
      -0.031609897118771373, -0.031277319724590719, -0.030944742330410068,
      -0.030612164936229414, -0.03027958754204876, -0.029947010147868113,
      -0.029614432753687459, -0.029281855359506802, -0.028949277965326148,
      -0.028616700571145497, -0.02828412317696484, -0.027951545782784144,
      -0.02761896838860349, -0.027286390994422836, -0.026953813600242182,
      -0.026621236206061528, -0.026288658811880874, -0.025956081417700221,
      -0.02562350402351957, -0.025290926629338916, -0.024958349235158262,
      -0.024625771840977608, -0.024293194446796958, -0.0239606170526163,
      -0.023628039658435646, -0.023295462264255, -0.022962884870074342,
      -0.022630307475893688, -0.022297730081713037, -0.021965152687532383,
      -0.021632575293351729, -0.021299997899171072, -0.020967420504990418,
      -0.020634843110809722, -0.020302265716629068, -0.019969688322448415,
      -0.019637110928267761, -0.019304533534087107, -0.018971956139906456,
      -0.018639378745725802, -0.018306801351545148, -0.017974223957364494,
      -0.017641646563183844, -0.01730906916900319, -0.016976491774822536,
      -0.016643914380641882, -0.016311336986461228, -0.015978759592280574,
      -0.015646182198099923, -0.015313604803919269, -0.014981027409738615,
      -0.014648450015557962, -0.014315872621377309, -0.013983295227196657,
      -0.013650717833015955, -0.013318140438835304, -0.012985563044654647,
      -0.012652985650473996, -0.012320408256293342, -0.011987830862112692,
      -0.011655253467932034, -0.01132267607375138, -0.010990098679570728,
      -0.010657521285390076, -0.010324943891209422, -0.0099923664970287679,
      -0.0096597891028481139, -0.0093272117086674634, -0.00899463431448681,
      -0.0086620569203061555, -0.0083294795261255033, -0.00799690213194485,
      -0.0076643247377641954, -0.0073317473435835423, -0.00699916994940289,
      -0.0066665925552222369, -0.0063340151610415812, -0.00600143776686093,
      -0.0056688603726802751, -0.0053362829784996237, -0.0050037055843189706,
      -0.0046711281901383166, -0.0043385507959576635, -0.0040059734017770104,
      -0.0036733960075963565, -0.0033408186134157017, -0.0030082412192350503,
      -0.0026756638250543955, -0.0023430864308737441, -0.0020105090366930884,
      -0.001677931642512437, -0.001345354248331784, -0.0010127768541511291,
      -0.00068019945997047689, -0.00034762206578982293, -1.5044671609170703E-5,
      0.0003175327225715778, 0.00065011011675213635, 0.000982687510932884,
      0.0013152649051134425, 0.001647842299294191, 0.0019804196934747496,
      0.0023129970876554972, 0.0026455744818360558, 0.0029781518760168039,
      0.0033107292701973633, 0.0036433066643781109, 0.0039758840585587636,
      0.0043084614527394175, 0.0046410388469200706, 0.0049736162411007246,
      0.0053061936352813777, 0.00563877102946203, 0.0059713484236426839,
      0.006303925817823337, 0.0066365032120039909, 0.006969080606184644,
      0.0072444085549880832, 0.0074052238789416684, 0.0075660392028952554,
      0.0077268545268488423, 0.0078876698508024284, 0.0080484851747560145,
      0.0082093004987096, 0.0083701158226631867, 0.0085309311466167728,
      0.0086917464705703589, 0.008852561794523945, 0.0090133771184775779,
      0.0091741924424311172, 0.00933500776638475, 0.0094958230903382911,
      0.0096566384142919223, 0.0098174537382454633, 0.0099782690621990945,
      0.010139084386152636, 0.010299899710106268, 0.010460715034059809,
      0.010621530358013441, 0.010782345681966982, 0.010943161005920613,
      0.011103976329874154, 0.011264791653827785, 0.011425606977781326,
      0.011586422301734959, 0.011747237625688498, 0.011908052949642131,
      0.01206886827359567, 0.012229683597549303, 0.012390498921502843,
      0.012551314245456476, 0.012712129569410062, 0.012872944893363648,
      0.013033760217317236, 0.01319457554127082, 0.013355390865224408,
      0.013516206189177992, 0.01367702151313158, 0.013837836837085166,
      0.013998652161038752, 0.01415946748499234, 0.014320282808945924,
      0.014481098132899512, 0.014641913456853096, 0.014802728780806684,
      0.01496354410476027, 0.015124359428713856, 0.015285174752667443,
      0.015445990076621029, 0.015606805400574617, 0.0157676207245282,
      0.015928436048481789, 0.016089251372435418, 0.016250066696388961,
      0.016410882020342594, 0.016571697344296133, 0.016732512668249766,
      0.016893327992203305, 0.017054143316156938, 0.017214958640110477,
      0.01737577396406411, 0.01753658928801765, 0.017697404611971279,
      0.017858219935924825, 0.018019035259878455, 0.018179850583831994,
      0.01834066590778563, 0.01850148123173917, 0.0186622965556928,
      0.018823111879646338, 0.018983927203599975, 0.019144742527553514,
      0.019305557851507147, 0.019466373175460731, 0.019627188499414319,
      0.019788003823367904, 0.019948819147321491, 0.020109634471275076,
      0.020270449795228664, 0.020431265119182251, 0.020592080443135836,
      0.020752895767089424, 0.020913711091043008, 0.021074526414996592,
      0.021235341738950184, 0.021396157062903768, 0.021556972386857356,
      0.021717787710810937, 0.021878603034764525, 0.022039418358718109,
      0.0222002336826717, 0.022361049006625285, 0.022521864330578872,
      0.022682679654532457, 0.02284349497848609, 0.023004310302439629,
      0.023165125626393262, 0.023325940950346805, 0.023486756274300434,
      0.023647571598253973, 0.02380838692220761, 0.023969202246161149,
      0.024130017570114778, 0.024290832894068321, 0.024451648218021951,
      0.024612463541975493, 0.024773278865929126, 0.024934094189882669,
      0.025094909513836295, 0.025255724837789838, 0.025416540161743471,
      0.025577355485697006, 0.025738170809650643, 0.025898986133604182,
      0.026059801457557812, 0.0262206167815114, 0.026381432105464987,
      0.026542247429418575, 0.026703062753372159, 0.026863878077325747,
      0.027024693401279332, 0.027185508725232919, 0.027346324049186507,
      0.027507139373140092, 0.027667954697093676, 0.02782877002104726,
      0.027989585345000848, 0.028150400668954433, 0.028311215992908024,
      0.028472031316861608, 0.028632846640815196, 0.02879366196476878,
      0.028954477288722368, 0.029115292612675956, 0.029276107936629544,
      0.029436923260583125, 0.029597738584536709, 0.029758553908490297,
      0.029919369232443933, 0.030080184556397473, 0.030240999880351102,
      0.030401815204304645, 0.030562630528258278, 0.030723445852211817,
      0.03088426117616545, 0.031045076500118993, 0.031205891824072622,
      0.031366707148026161, 0.031527522471979791, 0.031688337795933337,
      0.031849153119886967, 0.032009968443840506, 0.032170783767794135,
      0.032331599091747681, 0.032492414415701311, 0.03265322973965485,
      0.032814045063608487, 0.032974860387562026, 0.033135675711515662,
      0.033296491035469243, 0.033457306359422831, 0.033618121683376419,
      0.03377893700733, 0.033939752331283587, 0.033498840103038087,
      0.032857319946686558, 0.03221579979033503, 0.031574279633983508,
      0.030932759477631987, 0.030291239321280458, 0.029649719164928933,
      0.029008199008577408, 0.028366678852225886, 0.027725158695874361,
      0.02708363853952284, 0.026442118383171315, 0.025800598226819786,
      0.025159078070468265, 0.024517557914116743, 0.023876037757765214,
      0.023234517601413509, 0.022592997445062164, 0.021951477288710459,
      0.021309957132359114, 0.020668436976007409, 0.020026916819656071,
      0.019385396663304359, 0.018743876506953021, 0.018102356350601319,
      0.017460836194249971, 0.016819316037898269, 0.016177795881546924,
      0.015536275725195219, 0.014894755568843874, 0.014253235412492167,
      0.013611715256140827, 0.012970195099789118, 0.012328674943437779,
      0.01168715478708607, 0.011045634630734727, 0.010404114474383021,
      0.0097625943180315, 0.0091210741616799713, 0.00847955400532845,
      0.0078380338489769247, 0.0071965136926254, 0.0065549935362738711,
      0.0059134733799223495, 0.0052719532235708244, 0.0046304330672193028,
      0.0039889129108677743, 0.0033473927545162527, 0.0027058725981647276,
      0.002064352441813206, 0.0014228322854616809, 0.00078131212911015588,
      0.00013979197275863081, -0.00050172818359289426, -0.0011432483399444193,
      -0.0017847684962959409, -0.002426288652647466, -0.0030678088089989945,
      -0.0037093289653507, -0.0043508491217020412, -0.00499236927805375,
      -0.0056338894344050879, -0.0062754095907567933, -0.006916929747108138,
      -0.0075584499034598435, -0.0081999700598111916, -0.00884149021616289,
      -0.0094830103725142383, -0.010124530528865944, -0.010766050685217281,
      -0.01140757084156899, -0.012049090997920332, -0.012690611154272037,
      -0.013332131310623378, -0.013973651466975087, -0.014615171623326432,
      -0.015256691779678134, -0.015898211936029479, -0.016539732092381187,
      -0.017181252248732713, -0.017822772405084234, -0.018464292561435759,
      -0.019105812717787281, -0.019747332874138813, -0.020388853030490331,
      -0.021030373186841853, -0.021671893343193378, -0.022313413499544903,
      -0.022954933655896431, -0.023596453812247956, -0.024237973968599474,
      -0.024879494124951003, -0.025521014281302531, -0.026162534437654053,
      -0.026804054594005582, -0.02744557475035711, -0.028087094906708621,
      -0.028728615063060146, -0.029370135219411671, -0.030011655375763197,
      -0.030653175532114902, -0.031294695688466247, -0.031936215844817956,
      -0.0325777360011693, -0.033219256157521, -0.033860776313872354,
      -0.034502296470224056, -0.03514381662657539, -0.035785336782927106,
      -0.03642685693927844, -0.037068377095630149, -0.03770989725198149,
      -0.0383514174083332, -0.038992937564684541, -0.039634457721036243,
      -0.040275977877387591, -0.0409174980337393, -0.041559018190090641,
      -0.04220053834644235, -0.042842058502793684, -0.043483578659145393,
      -0.044125098815496727, -0.044766618971848256, -0.045408139128199965,
      -0.046049659284551313, -0.046691179440903015, -0.047332699597254356,
      -0.047974219753606065, -0.048615739909957406, -0.049257260066309108,
      -0.049898780222660456, -0.050540300379012165, -0.0511818205353635,
      -0.051823340691715208, -0.05246486084806655, -0.053106381004418252,
      -0.0537479011607696, -0.054389421317121309, -0.05503094147347265,
      -0.055672461629824352, -0.0563139817861757, -0.056955501942527409,
      -0.057597022098878743, -0.058238542255230459, -0.058880062411581974,
      -0.059521582567933495, -0.060163102724285024, -0.060804622880636552,
      -0.061446143036988074, -0.0620876631933396, -0.062729183349691131,
      -0.063370703506042653, -0.064012223662394174, -0.0646537438187457,
      -0.065295263975097217, -0.065936784131448753, -0.066578304287800275,
      -0.067219824444151782, -0.067861344600503318, -0.068502864756854839,
      -0.069144384913206361, -0.0697859050695579, -0.070427425225909418,
      -0.07106894538226094, -0.071710465538612475, -0.072351985694964163,
      -0.072724685021037114, -0.0717529577075427, -0.070781230394048836,
      -0.0698095030805544, -0.068837775767060544, -0.067866048453566127,
      -0.066894321140072252, -0.065922593826577836, -0.06495086651308396,
      -0.063979139199589558, -0.063007411886095668, -0.062035684572601252,
      -0.061063957259107383, -0.06009222994561296, -0.059120502632119092,
      -0.058148775318624682, -0.057177048005130807, -0.056205320691636383,
      -0.055233593378142515, -0.054261866064648105, -0.053290138751153959,
      -0.052318411437659806, -0.05134668412416566, -0.050374956810671515,
      -0.049403229497177362, -0.04843150218368323, -0.047459774870189084,
      -0.046488047556694938, -0.045516320243200792, -0.044544592929706639,
      -0.043572865616212507, -0.042601138302718361, -0.041629410989224208,
      -0.040657683675730062, -0.039685956362235916, -0.038714229048741777,
      -0.037742501735247638, -0.036770774421753485, -0.03579904710825934,
      -0.034827319794765194, -0.033855592481271055, -0.032883865167776624,
      -0.031912137854282763, -0.030940410540788346, -0.029968683227294474,
      -0.028996955913800051, -0.028025228600306182, -0.027053501286811766,
      -0.026081773973317894, -0.025110046659823474, -0.024138319346329602,
      -0.023166592032835179, -0.022194864719341317, -0.021223137405846894,
      -0.020251410092353029, -0.019279682778858605, -0.018307955465364734,
      -0.017336228151870314, -0.016364500838376449, -0.015392773524882018,
      -0.014421046211388157, -0.01344931889789374, -0.012477591584399865,
      -0.011505864270905442, -0.010534136957411296, -0.0095624096439171635,
      -0.00859068233042301, -0.0076189550169288717, -0.0066472277034347188,
      -0.0056755003899405729, -0.0047037730764464269, -0.003732045762952288,
      -0.002760318449458149, -0.0017885911359639961, -0.00081686382246985018,
      0.00015486349102429575, 0.0011265908045184347, 0.0020983181180125807,
      0.0030700454315067266, 0.0040417727450008795, 0.0050135000584950115,
      0.0059852273719891644, 0.0069569546854833034, 0.00792868199897745,
      0.0089004093124716022, 0.0098721366259660118, 0.010843863939459894,
      0.011815591252954311, 0.012787318566448172, 0.013759045879942595,
      0.014730773193436464, 0.015702500506930887, 0.016674227820424756,
      0.017645955133919179, 0.018617682447413041, 0.019589409760907468,
      0.020561137074401339, 0.021532864387895759, 0.022504591701389617,
      0.023476319014884051, 0.024448046328377909, 0.025419773641872333,
      0.0263915009553662, 0.027363228268860625, 0.028334955582354493,
      0.029306682895848916, 0.030278410209343055, 0.0312501375228372,
      0.032221864836331347, 0.0331935921498255, 0.034165319463319639,
      0.035137046776813778, 0.036108774090307924, 0.03708050140380207,
      0.038052228717296223, 0.039023956030790362, 0.039995683344284515,
      0.040967410657778647, 0.0419391379712728, 0.042910865284766939,
      0.043882592598261091, 0.044854319911755237, 0.045826047225249369,
      0.046797774538743522, 0.047769501852237661, 0.048741229165731814,
      0.04971295647922596, 0.05068468379272037, 0.051656411106214245,
      0.052628138419708675, 0.053599865733202537, 0.05457159304669696,
      0.055543320360190836, 0.056515047673685245, 0.057486774987179107,
      0.058458502300673537, 0.059430229614167406, 0.060401956927661815,
      0.06137368424115569, 0.062345411554650121, 0.063317138868143982,
      0.0642888661816384, 0.065260593495132274, 0.066232320808626691,
      0.067204048122120552, 0.068175775435615, 0.069147502749108858,
      0.070119230062603261, 0.071090957376097413, 0.072062684689591566,
      0.073034412003085719, 0.074006139316579844, 0.074977866630073983,
      0.075949593943568136, 0.076921321257062289, 0.077893048570556442,
      0.078864775884050581, 0.0798365031975447, 0.080808230511038859,
      0.081779957824533012, 0.082751685138027165, 0.0837234124515213,
      0.084695139765015443, 0.085666867078509581, 0.086638594392003734,
      0.087610321705497887, 0.088582049018992026, 0.087936330096809942,
      0.0861351182229702, 0.084333906349129933, 0.082532694475290685,
      0.080731482601450411, 0.078930270727611176, 0.077129058853770915,
      0.075327846979931667, 0.0735266351060914, 0.071725423232252158,
      0.0699242113584119, 0.068122999484572649, 0.066321787610732388,
      0.06452057573689314, 0.062719363863052865, 0.060918151989213631,
      0.059116940115373363, 0.057315728241534136, 0.055514516367693861,
      0.053713304493854613, 0.051912092620014352, 0.050110880746175111,
      0.048309668872334843, 0.046508456998495082, 0.044707245124655334,
      0.04290603325081558, 0.041104821376975818, 0.039303609503136057,
      0.037502397629296316, 0.035701185755456569, 0.033899973881616807,
      0.032098762007777053, 0.030297550133937291, 0.028496338260097551,
      0.026695126386257789, 0.024893914512418028, 0.023092702638578273,
      0.021291490764738526, 0.019490278890898764, 0.01768906701705901,
      0.015887855143219262, 0.0140866432693795, 0.012285431395539753,
      0.010484219521700006, 0.0086830076478602441, 0.0068817957740204827,
      0.0050805839001802217, 0.0032793720263409737, 0.0014781601525007126,
      -0.00032305172133853532, -0.0021242635951787964, -0.0039254754690180443,
      -0.0057266873428583123, -0.0075278992166975534, -0.0093291110905378144,
      -0.011130322964377055, -0.012931534838217323, -0.014732746712056571,
      -0.016533958585896825, -0.018335170459736087, -0.020136382333576341,
      -0.021937594207415589, -0.023738806081255857, -0.025540017955095091,
      -0.027341229828935359, -0.029142441702774607, -0.030943653576614875,
      -0.032744865450454623, -0.034546077324294377, -0.036347289198134139,
      -0.03814850107197388, -0.039949712945813641, -0.041750924819653396,
      -0.043552136693493157, -0.045353348567332911, -0.047154560441172659,
      -0.048955772315012414, -0.050756984188852175, -0.052558196062691923,
      -0.054359407936531677, -0.056160619810371439, -0.057961831684211179,
      -0.059763043558050941, -0.061564255431890695, -0.06336546730573045,
      -0.065166679179570211, -0.066967891053409945, -0.0687691029272497,
      -0.070570314801089981, -0.072371526674929215, -0.07417273854876949,
      -0.075973950422608724, -0.077775162296449013, -0.079576374170288233,
      -0.0813775860441285, -0.083178797917967742, -0.084980009791808,
      -0.086781221665647251, -0.088582433539487526, -0.090383645413326774,
      -0.092184857287167021, -0.093986069161006255, -0.095787281034846544,
      -0.097588492908685764, -0.099389704782526025, -0.10119091665636529,
      -0.10299212853020553, -0.1047933404040448, -0.10659455227788506,
      -0.10839576415172482, -0.11019697602556457, -0.11199818789940434,
      -0.11379939977324408, -0.11560061164708385, -0.1174018235209236,
      -0.11920303539476337, -0.12100424726860308, -0.12280545914244285,
      -0.12460667101628259, -0.12640788289012236, -0.12820909476396211,
      -0.13001030663780189, -0.13181151851164163, -0.13361273038548138,
      -0.13541394225932113, -0.1372151541331609, -0.13901636600700065,
      -0.1408175778808404, -0.14261878975468015, -0.14442000162851992,
      -0.1462212135023602, -0.14802242537619942, -0.14982363725003967,
      -0.15162484912387894, -0.15342606099771919, -0.15522727287155846,
      -0.15702848474539871, -0.15882969661923796, -0.16063090849307821,
      -0.16243212036691745, -0.16423333224075773, -0.16603454411459698,
      -0.16783575598843722, -0.16963696786227647, -0.17143817973611675,
      -0.173239391609956, -0.17504060348379624, -0.17684181535763549,
      -0.17864302723147577, -0.18044423910531499, -0.18224545097915529,
      -0.18404666285299451, -0.18584787472683478, -0.1876490866006745,
      -0.18945029847451428, -0.19125151034835403, -0.1930527222221938,
      -0.19485393409603355, -0.1966551459698733, -0.19845635784371304,
      -0.20025756971755282, -0.20205878159139257, -0.20385999346523234,
      -0.20566120533907209, -0.20746241721291181, -0.20926362908675156,
      -0.21106484096059133, -0.26186584871477958, -0.2597453631781077,
      -0.25762487764143571, -0.25550439210476378, -0.25338390656809184,
      -0.25126342103141996, -0.24914293549474806, -0.2470224499580761,
      -0.24490196442140416, -0.24278147888473223, -0.24066099334806029,
      -0.23854050781138839, -0.23642002227471648, -0.23429953673804454,
      -0.23217905120137261, -0.2300585656647007, -0.22793808012802874,
      -0.22581759459135681, -0.2236971090546849, -0.22157662351801297,
      -0.21945613798134106, -0.21733565244466913, -0.21521516690799719,
      -0.21309468137132528, -0.21097419583465332, -0.20885371029798142,
      -0.20673322476130951, -0.20461273922463757, -0.20249225368796567,
      -0.20037176815129373, -0.19825128261462177, -0.19613079707794986,
      -0.1940103115412779, -0.19188982600460602, -0.18976934046793409,
      -0.18764885493126215, -0.18552836939459025, -0.18340788385791829,
      -0.18128739832124635, -0.17916691278457444, -0.17704642724790254,
      -0.1749259417112306, -0.17280545617455864, -0.17068497063788673,
      -0.1685644851012148, -0.16644399956454287, -0.164323514027871,
      -0.16220302849119905, -0.16008254295452709, -0.15796205741785518,
      -0.15584157188118325, -0.15372108634451134, -0.15160060080783944,
      -0.14948011527116747, -0.14735962973449557, -0.14523914419782363,
      -0.1431186586611517, -0.14099817312447979, -0.13887768758780783,
      -0.13675720205113595, -0.134636716514464, -0.13251623097779205,
      -0.13039574544112018, -0.12827525990444824, -0.12615477436777628,
      -0.12403428883110434, -0.12191380329443241, -0.11979331775776053,
      -0.1176728322210886, -0.11555234668441666, -0.11343186114774476,
      -0.11131137561107279, -0.10919089007440086, -0.10707040453772895,
      -0.10494991900105699, -0.1028294334643851, -0.10070894792771318,
      -0.098588462391041243, -0.096467976854369336, -0.0943474913176974,
      -0.092227005781025467, -0.090106520244353533, -0.087986034707681571,
      -0.085865549171009678, -0.083745063634337744, -0.081624578097665823,
      -0.079504092560993916, -0.077383607024321954, -0.075263121487650034,
      -0.073142635950978141, -0.071022150414306179, -0.068901664877634272,
      -0.066781179340962352, -0.0646606938042904, -0.0625402082676185,
      -0.060419722730946528, -0.058299237194274628, -0.056178751657602714,
      -0.054058266120930773, -0.051937780584258852, -0.049817295047586904,
      -0.047696809510914991, -0.045576323974243112, -0.043455838437571156,
      -0.041335352900899243, -0.039214867364227329, -0.037094381827555388,
      -0.034973896290883488, -0.032853410754211575, -0.030732925217539606,
      -0.028612439680867692, -0.026491954144195751, -0.024371468607523837,
      -0.022250983070851917, -0.020130497534179975, -0.018010011997508069,
      -0.015889526460836106, -0.013769040924164186, -0.011648555387492279,
      -0.009528069850820331, -0.0074075843141484243, -0.0052870987774765038,
      -0.0031666132408045555, -0.0010461277041326489, 0.0010743578325392716,
      0.00319484336921122, 0.0053153289058831404, 0.0074358144425550748,
      0.0095562999792269884, 0.011676785515898916, 0.013797271052570857,
      0.015917756589242785, 0.018038242125914726, 0.020158727662586633,
      0.022279213199258539, 0.0243996987359305, 0.026520184272602408,
      0.028640669809274329, 0.030761155345946277, 0.0328816408826182,
      0.035002126419290104, 0.037122611955962052, 0.039243097492633952,
      0.041363583029305921, 0.043484068565977821, 0.045604554102649748,
      0.04772503963932169, 0.04984552517599361, 0.051966010712665558,
      0.054086496249337465, 0.056206981786009386, 0.058327467322681334,
      0.060447952859353241, 0.062568438396025161, 0.064688923932697109,
      0.06680940946936903, 0.068929895006040937, 0.071050380542712885,
      0.0731708660793848, 0.075291351616056754, 0.077411837152728674,
      0.079532322689400581, 0.081652808226072487, 0.0837732937627444,
      0.085893779299416384, 0.088014264836088291, 0.090134750372760211,
      0.091028297125024749, 0.0902041060334841, 0.089379914941943472,
      0.088555723850402848, 0.087731532758862238, 0.086907341667321614,
      0.086083150575780976, 0.085258959484240324, 0.084434768392699713,
      0.083610577301159089, 0.082786386209618479, 0.081962195118077855,
      0.0811380040265372, 0.080313812934996578, 0.079489621843455968,
      0.07866543075191533, 0.0778412396603747, 0.0770170485688341,
      0.076192857477293457, 0.075368666385752819, 0.0745444752942122,
      0.073720284202671585, 0.072896093111130961, 0.072071902019590309,
      0.071247710928049685, 0.070423519836509074, 0.06959932874496845,
      0.068775137653427826, 0.06795094656188716, 0.06712675547034655,
      0.066302564378805925, 0.0654783732872653, 0.064654182195724691,
      0.063829991104184039, 0.063005800012643415, 0.0621816089211028,
      0.061357417829562208, 0.060533226738021584, 0.059709035646480953,
      0.0588848445549403, 0.0580606534633997, 0.057236462371859073,
      0.056412271280318442, 0.055588080188777825, 0.054763889097237173,
      0.053939698005696549, 0.053115506914155938, 0.052291315822615321,
      0.05146712473107469, 0.05064293363953408, 0.049818742547993414,
      0.048994551456452796, 0.048170360364912165, 0.047346169273371548,
      0.046521978181830924, 0.045697787090290286, 0.044873595998749669,
      0.044049404907209037, 0.04322521381566842, 0.042401022724127796,
      0.041576831632587144, 0.040752640541046534, 0.039928449449505909,
      0.039104258357965285, 0.038280067266424661, 0.037455876174884009,
      0.036631685083343385, 0.035807493991802761, 0.034983302900262143,
      0.034159111808721526, 0.0333349207171809, 0.032510729625640257,
      0.031686538534099633, 0.030862347442559012, 0.030038156351018391,
      0.029213965259477771, 0.028389774167937126, 0.0275655830763965,
      0.026741391984855884, 0.025917200893315253, 0.025093009801774632,
      0.024268818710234012, 0.02344462761869336, 0.022620436527152746,
      0.021796245435612118, 0.020972054344071504, 0.02014786325253088,
      0.019323672160990228, 0.018499481069449607, 0.017675289977908983,
      0.016851098886368366, 0.016026907794827745, 0.015202716703287093,
      0.014378525611746469, 0.013554334520205848, 0.012730143428665228,
      0.011905952337124603, 0.011081761245583955, 0.010257570154043334,
      0.00943337906250272, 0.0086091879709620962, 0.0077849968794214686,
      0.0069608057878808478, 0.0061366146963401993, 0.0053124236047995786,
      0.0044882325132589614, 0.0036640414217183337, 0.0028398503301777164,
      0.0020156592386370645, 0.0011914681470964437, 0.000367277055555823,
      -0.00045691403598480118, -0.0012811051275254184, -0.0021052962190660426,
      -0.0029294873106066911, -0.0037536784021473084, -0.0045778694936879361,
      -0.0054020605852285568, -0.006226251676769174, -0.007050442768309826,
      -0.00787463385985045, -0.008698824951391064, -0.0095230160429316917,
      -0.010347207134472316, -0.011171398226012964, -0.011995589317553582,
      -0.012819780409094199, -0.013643971500634823, -0.014468162592175447,
      -0.0152923536837161, -0.016116544775256723, -0.016940735866797341,
      -0.017764926958337965, -0.018589118049878589, -0.0194133091414192,
      -0.020237500232959855, -0.021061691324500472, -0.021885882416041096,
      -0.02271007350758172, -0.023534264599122338, -0.024358455690662986,
      -0.025182646782203607, -0.026006837873744228, -0.026831028965284855,
      -0.027655220056825469, -0.028479411148366097, -0.029303602239906745,
      -0.030127793331447369, -0.030951984422987987, -0.031776175514528611,
      -0.032600366606069228, -0.03342455769760988, -0.034248748789150504,
      -0.035072939880691129, -0.035897130972231746, -0.036721322063772363,
      -0.037545513155312987, -0.038369704246853611, -0.039193895338394229,
      -0.040018086429934853, -0.040842277521475477, -0.04166646861301615,
      -0.042490659704556767, -0.043314850796097391, -0.044139041887638016,
      -0.044963232979178633, -0.045787424070719257, -0.045641131946606642,
      -0.045300733867308186, -0.0449603357880097, -0.044619937708711234,
      -0.044279539629412772, -0.043939141550114309, -0.043598743470815847,
      -0.043258345391517378, -0.042917947312218922, -0.042577549232920453,
      -0.042237151153621991, -0.041896753074323528, -0.041556354995025073,
      -0.041215956915726576, -0.040875558836428114, -0.040535160757129651,
      -0.040194762677831189, -0.03985436459853272, -0.039513966519234264,
      -0.0391735684399358, -0.03883317036063734, -0.03849277228133887,
      -0.038152374202040415, -0.037811976122741946, -0.037471578043443456,
      -0.037131179964145, -0.036790781884846538, -0.036450383805548076,
      -0.036109985726249606, -0.035769587646951151, -0.035429189567652682,
      -0.035088791488354212, -0.034748393409055757, -0.034407995329757288,
      -0.034067597250458825, -0.033727199171160342, -0.03338680109186188,
      -0.033046403012563418, -0.032706004933264948, -0.032365606853966493,
      -0.032025208774668024, -0.031684810695369561, -0.0313444126160711,
      -0.03100401453677264, -0.030663616457474174, -0.030323218378175684,
      -0.029982820298877225, -0.02964242221957876, -0.029302024140280294,
      -0.028961626060981835, -0.028621227981683376, -0.02828082990238491,
      -0.027940431823086444, -0.027600033743787986, -0.02725963566448952,
      -0.026919237585191057, -0.026578839505892567, -0.026238441426594108,
      -0.025898043347295643, -0.02555764526799718, -0.025217247188698718,
      -0.024876849109400252, -0.02453645103010179, -0.024196052950803328,
      -0.023855654871504862, -0.0235152567922064, -0.023174858712907916,
      -0.022834460633609454, -0.022494062554310988, -0.022153664475012526,
      -0.021813266395714064, -0.021472868316415594, -0.02113247023711716,
      -0.020792072157818697, -0.020451674078520232, -0.020111275999221773,
      -0.01977087791992331, -0.01943047984062482, -0.019090081761326358,
      -0.018749683682027896, -0.018409285602729433, -0.018068887523430964,
      -0.0177284894441325, -0.017388091364834039, -0.017047693285535577,
      -0.016707295206237115, -0.016366897126938652, -0.01602649904764019,
      -0.015686100968341703, -0.015345702889043241, -0.015005304809744775,
      -0.014664906730446313, -0.014324508651147851, -0.013984110571849388,
      -0.013643712492550926, -0.01330331441325246, -0.012962916333953998,
      -0.012622518254655534, -0.012282120175357071, -0.011941722096058585,
      -0.011601324016760121, -0.011260925937461658, -0.010920527858163193,
      -0.01058012977886473, -0.010239731699566271, -0.0098993336202678056,
      -0.0095589355409693433, -0.0092185374616708775, -0.0088781393823724152,
      -0.008537741303073932, -0.0081973432237754662, -0.0078569451444770021,
      -0.0075165470651785415, -0.0071761489858800775, -0.0068357509065816143,
      -0.00649535282728315, -0.0061549547479846888, -0.0058145566686862247,
      -0.0054741585893877624, -0.0051337605100892983, -0.0047933624307908117,
      -0.0044529643514923476, -0.0041125662721938853, -0.0037721681928954212,
      -0.0034317701135969606, -0.0030913720342984966, -0.0027509739550000325,
      -0.00241057587570157, -0.0020701777964031078, -0.0017297797171046438,
      -0.0013893816378061571, -0.0010489835585076931, -0.00070858547920923075,
      -0.00036818739991076668, -2.7789320612304352E-5, 0.000312608758686158,
      0.00065300683798462378, 0.00099340491728308611, 0.0013338029965815476,
      0.00167420107588001, 0.002014599155178474, 0.0023549972344769615,
      0.0026953953137754238, 0.0030357933930738887, 0.003376191472372351,
      0.0037165895516708134, 0.0040569876309692766, 0.0043973857102677389,
      0.0047377837895662021, 0.005078181868864667, 0.0054185799481631294,
      0.0057589780274615926, 0.00609937610676008, 0.0064397741860585415,
      0.0067801722653570047, 0.0071205703446554679, 0.0074609684239539328,
      0.0078013665032523952, 0.00814176458255086, 0.0084821626618493216,
      0.0088225607411477839, 0.009162958820446248, 0.00950335689974471,
      0.0098437549790431986, 0.010184153058341661, 0.010524551137640125,
      0.010833296951756785, 0.011047080908295332, 0.011260864864833877,
      0.011474648821372422, 0.011688432777910969, 0.011902216734449514,
      0.012116000690988058, 0.012329784647526619, 0.012543568604065164,
      0.012757352560603712, 0.012971136517142256, 0.0131849204736808,
      0.013398704430219345, 0.013612488386757892, 0.013826272343296437,
      0.014040056299834982, 0.014253840256373527, 0.014467624212912073,
      0.014681408169450632, 0.014895192125989179, 0.015108976082527724,
      0.015322760039066269, 0.015536543995604814, 0.015750327952143359,
      0.015964111908681904, 0.016177895865220449, 0.016391679821758997,
      0.016605463778297542, 0.0168192477348361, 0.017033031691374649,
      0.017246815647913194, 0.017460599604451739, 0.017674383560990284,
      0.017888167517528829, 0.018101951474067374, 0.018315735430605919,
      0.018529519387144464, 0.018743303343683008, 0.018957087300221557,
      0.019170871256760116, 0.019384655213298661, 0.019598439169837206,
      0.019812223126375754, 0.0200260070829143, 0.020239791039452844,
      0.020453574995991389, 0.020667358952529934, 0.020881142909068479,
      0.021094926865607024, 0.021308710822145568, 0.021522494778684131,
      0.021736278735222676, 0.021950062691761221, 0.022163846648299769,
      0.02237763060483831, 0.022591414561376855, 0.022805198517915404,
      0.023018982474453949, 0.023232766430992494, 0.023446550387531039,
      0.023660334344069583, 0.023874118300608142, 0.024087902257146691,
      0.024301686213685239, 0.024515470170223777, 0.024729254126762329,
      0.024943038083300874, 0.025156822039839415, 0.02537060599637796,
      0.025584389952916509, 0.025798173909455054, 0.026011957865993612,
      0.026225741822532157, 0.026439525779070706, 0.026653309735609247,
      0.026867093692147796, 0.02708087764868634, 0.027294661605224885,
      0.02750844556176343, 0.027722229518301975, 0.027936013474840524,
      0.028149797431379065, 0.028363581387917627, 0.028577365344456172,
      0.028791149300994717, 0.029004933257533262, 0.029218717214071807,
      0.029432501170610352, 0.029646285127148904, 0.029860069083687442,
      0.030073853040225987, 0.030287636996764532, 0.030501420953303097,
      0.030715204909841642, 0.030928988866380187, 0.031142772822918729,
      0.031356556779457277, 0.031570340735995822, 0.031784124692534367,
      0.031997908649072912, 0.032211692605611457, 0.03242547656215,
      0.032639260518688554, 0.032853044475227106, 0.033066828431765657,
      0.0332806123883042, 0.033494396344842747, 0.033708180301381292,
      0.033921964257919837, 0.034135748214458382, 0.034349532170996927,
      0.034563316127535472, 0.034777100084074017, 0.034990884040612562,
      0.035204667997151128, 0.035418451953689666, 0.03563223591022821,
      0.035846019866766762, 0.036059803823305307, 0.036273587779843845,
      0.0364873717363824, 0.036701155692920942, 0.036914939649459487,
      0.037128723605998025, 0.037342507562536577, 0.037556291519075143,
      0.037770075475613681, 0.037983859432152232, 0.038197643388690777,
      0.038411427345229322, 0.03862521130176786, 0.038838995258306412,
      0.039052779214844957, 0.0392665631713835, 0.039480347127922047,
      0.039694131084460606, 0.039907915040999151, 0.040121698997537696,
      0.040335482954076241, 0.040549266910614792, 0.04076305086715333,
      0.040976834823691882, 0.04119061878023042, 0.041404402736768965,
      0.04161818669330751, 0.041831970649846062, 0.0420457546063846,
      0.042259538562923152, 0.0424733225194617, 0.042687106476000242,
      0.04290089043253878, 0.043114674389077332, 0.043328458345615876,
      0.043542242302154421, 0.043756026258692966, 0.043969810215231518,
      0.044183594171770091, 0.044397378128308629, 0.044611162084847181,
      0.044824946041385726, 0.045038729997924271, 0.045252513954462815,
      0.04546629791100136, 0.045680081867539905, 0.04589386582407845,
      0.046107649780616995, 0.046321433737155547, 0.045865652044252359,
      0.045075067449300545, 0.044284482854348724, 0.04349389825939691,
      0.0427033136644451, 0.041912729069493171, 0.041122144474541357,
      0.040331559879589536, 0.039540975284637722, 0.0387503906896859,
      0.037959806094734087, 0.037169221499782273, 0.036378636904830459,
      0.035588052309878646, 0.034797467714926832, 0.034006883119975011,
      0.0332162985250232, 0.032425713930071383, 0.031635129335119569,
      0.030844544740167755, 0.030053960145215934, 0.029263375550264113,
      0.028472790955312306, 0.027682206360360492, 0.026891621765408678,
      0.026101037170456858, 0.025310452575505044, 0.024519867980553112,
      0.023729283385601294, 0.022938698790649484, 0.022148114195697666,
      0.021357529600745852, 0.020566945005794035, 0.019776360410842225,
      0.018985775815890404, 0.01819519122093859, 0.017404606625986776,
      0.016614022031034958, 0.015823437436083141, 0.015032852841131327,
      0.014242268246179513, 0.013451683651227692, 0.012661099056275882,
      0.011870514461324068, 0.01107992986637225, 0.010289345271420433,
      0.0094987606764686226, 0.0087081760815168018, 0.00791759148656487,
      0.0071270068916130594, 0.0063364222966612455, 0.0055458377017094281,
      0.0047552531067576141, 0.0039646685118058, 0.0031740839168539828,
      0.0023834993219021654, 0.0015929147269503514, 0.00080233013199853057,
      1.17455370467201E-5, -0.00077883905790509383, -0.0015694236528569147,
      -0.0023600082478087286, -0.0031505928427605391, -0.00394117743771235,
      -0.0047317620326641704, -0.0055223466276159879, -0.0063129312225678053,
      -0.0071035158175196192, -0.0078941004124714366, -0.0086846850074232471,
      -0.009475269602375179, -0.010265854197326989, -0.01105643879227881,
      -0.011847023387230621, -0.012637607982182438, -0.013428192577134259,
      -0.014218777172086076, -0.015009361767037887, -0.015799946361989708,
      -0.016590530956941515, -0.017381115551893332, -0.01817170014684515,
      -0.018962284741796964, -0.019752869336748781, -0.020543453931700591,
      -0.021334038526652412, -0.02212462312160423, -0.022915207716556047,
      -0.023705792311507858, -0.024496376906459675, -0.025286961501411496,
      -0.026077546096363414, -0.026868130691315235, -0.027658715286267052,
      -0.028449299881218863, -0.02923988447617068, -0.030030469071122497,
      -0.030821053666074315, -0.031611638261026122, -0.032402222855977936,
      -0.033192807450929757, -0.033983392045881564, -0.034773976640833384,
      -0.035564561235785205, -0.036355145830737012, -0.037145730425688833,
      -0.037936315020640654, -0.038726899615592468, -0.039517484210544282,
      -0.040308068805496089, -0.04109865340044791, -0.041889237995399724,
      -0.042679822590351656, -0.043470407185303477, -0.04426099178025529,
      -0.045051576375207104, -0.045842160970158918, -0.046632745565110725,
      -0.047423330160062546, -0.048213914755014367, -0.049004499349966181,
      -0.049795083944917995, -0.050585668539869809, -0.051376253134821623,
      -0.052166837729773444, -0.052957422324725258, -0.053748006919677085,
      -0.054538591514628892, -0.055329176109580706, -0.05611976070453252,
      -0.056910345299484327, -0.057700929894436148, -0.058491514489387962,
      -0.0592820990843399, -0.060072683679291708, -0.060863268274243536,
      -0.061653852869195329, -0.062444437464147157, -0.063235022059098964,
      -0.0640256066540508, -0.0648161912490026, -0.065606775843954412,
      -0.066397360438906233, -0.067187945033858054, -0.06797852962880975,
      -0.068769114223761557, -0.069559698818713392, -0.0703502834136652,
      -0.071140868008617, -0.071931452603568841, -0.072722037198520648,
      -0.073512621793472455, -0.074303206388424275, -0.0750937909833761,
      -0.0758843755783279, -0.076674960173279835, -0.077465544768231656,
      -0.078256129363183477, -0.07904671395813527, -0.0798372985530871,
      -0.080627883148038912, -0.081418467742990719, -0.08220905233794254,
      -0.082999636932894361, -0.083790221527846181, -0.084580806122797988,
      -0.085220107192771261, -0.084194926516495835, -0.083169745840220452,
      -0.082144565163945041, -0.081119384487669643, -0.080094203811394246,
      -0.079069023135118835, -0.078043842458843438, -0.077018661782568026,
      -0.075993481106292615, -0.074968300430017079, -0.073943119753741682,
      -0.072917939077466271, -0.071892758401190873, -0.070867577724915462,
      -0.069842397048640065, -0.068817216372364653, -0.067792035696089256,
      -0.066766855019813859, -0.065741674343538448, -0.06471649366726305,
      -0.063691312990987639, -0.062666132314712242, -0.061640951638436838,
      -0.060615770962161433, -0.059590590285886036, -0.058565409609610625,
      -0.057540228933335227, -0.05651504825705983, -0.055489867580784412,
      -0.054464686904509015, -0.053439506228233617, -0.05241432555195806,
      -0.051389144875682663, -0.050363964199407266, -0.049338783523131861,
      -0.04831360284685645, -0.047288422170581053, -0.046263241494305649,
      -0.045238060818030237, -0.04421288014175484, -0.043187699465479443,
      -0.042162518789204045, -0.041137338112928627, -0.04011215743665323,
      -0.039086976760377833, -0.038061796084102428, -0.037036615407827017,
      -0.036011434731551613, -0.034986254055276222, -0.033961073379000811,
      -0.032935892702725414, -0.03191071202645001, -0.030885531350174456,
      -0.029860350673899062, -0.028835169997623655, -0.02780998932134825,
      -0.026784808645072846, -0.025759627968797445, -0.024734447292522038,
      -0.023709266616246633, -0.022684085939971226, -0.021658905263695835,
      -0.020633724587420424, -0.019608543911145027, -0.018583363234869622,
      -0.017558182558594218, -0.016533001882318814, -0.01550782120604341,
      -0.014482640529768012, -0.013457459853492608, -0.012432279177217211,
      -0.0114070985009418, -0.010381917824666395, -0.0093567371483908521,
      -0.0083315564721154478, -0.0073063757958400435, -0.0062811951195646462,
      -0.005256014443289235, -0.0042308337670138307, -0.0032056530907384265,
      -0.0021804724144630291, -0.0011552917381876249, -0.0001301110619122206,
      0.00089506961436317672, 0.001920250290638581, 0.0029454309669139922,
      0.0039706116431893895, 0.0049957923194648007, 0.0060209729957401911,
      0.0070461536720155954, 0.008071334348291, 0.0090965150245664039,
      0.010121695700841815, 0.011146876377117212, 0.012172057053392756,
      0.013197237729668153, 0.014222418405943564, 0.015247599082218968,
      0.01627277975849438, 0.017297960434769777, 0.018323141111045174,
      0.019348321787320578, 0.020373502463595976, 0.021398683139871387,
      0.022423863816146791, 0.0234490444924222, 0.024474225168697596,
      0.025499405844973, 0.026524586521248394, 0.027549767197523806,
      0.028574947873799203, 0.029600128550074611, 0.030625309226350015,
      0.031650489902625423, 0.03267567057890082, 0.033700851255176217,
      0.034726031931451774, 0.035751212607727179, 0.036776393284002576,
      0.037801573960277987, 0.038826754636553384, 0.039851935312828782,
      0.040877115989104179, 0.0419022966653796, 0.042927477341655,
      0.0439526580179304, 0.0449778386942058, 0.0460030193704812,
      0.047028200046756605, 0.048053380723032, 0.049078561399307406,
      0.050103742075582824, 0.051128922751858222, 0.052154103428133619,
      0.053179284104409023, 0.054204464780684428, 0.055229645456959825,
      0.056254826133235382, 0.057280006809510786, 0.058305187485786183,
      0.059330368162061588, 0.060355548838336992, 0.061380729514612389,
      0.062405910190887794, 0.063431090867163212, 0.064456271543438609,
      0.065481452219714, 0.0665066328959894, 0.067531813572264815,
      0.068556994248540212, 0.06958217492481561, 0.070607355601091021,
      0.071632536277366432, 0.072657716953641829, 0.073682897629917227,
      0.074708078306192638, 0.075733258982468035, 0.076758439658743433,
      0.077783620335018844, 0.0788088010112944, 0.079833981687569791,
      0.0808591623638452, 0.0818843430401206, 0.082909523716396,
      0.083934704392671408, 0.084959885068946819, 0.085071260704305873,
      0.084268758227974888, 0.083466255751643889, 0.08266375327531289,
      0.0818612507989819, 0.0810587483226509, 0.0802562458463199,
      0.079453743369988908, 0.078651240893657923, 0.077848738417326938,
      0.077046235940995939, 0.07624373346466494, 0.075441230988333954,
      0.074638728512002955, 0.073836226035671859, 0.073033723559340846,
      0.072231221083009861, 0.071428718606678862, 0.070626216130347877,
      0.069823713654016878, 0.069021211177685879, 0.0682187087013549,
      0.067416206225023909, 0.0666137037486929, 0.065811201272361911,
      0.065008698796030912, 0.064206196319699926, 0.063403693843368913,
      0.062601191367037942, 0.061798688890706943, 0.060996186414375937,
      0.060193683938044945, 0.059391181461713953, 0.058588678985382961,
      0.057786176509051969, 0.056983674032720866, 0.056181171556389867,
      0.055378669080058868, 0.054576166603727883, 0.053773664127396884,
      0.0529711616510659, 0.0521686591747349, 0.051366156698403907,
      0.050563654222072915, 0.049761151745741916, 0.048958649269410917,
      0.048156146793079932, 0.047353644316748933, 0.046551141840417948,
      0.045748639364086949, 0.04494613688775595, 0.044143634411424965,
      0.043341131935093959, 0.042538629458762967, 0.041736126982431981,
      0.040933624506100982, 0.040131122029769872, 0.039328619553438887,
      0.038526117077107888, 0.037723614600776889, 0.03692111212444589,
      0.036118609648114905, 0.03531610717178392, 0.034513604695452921,
      0.033711102219121922, 0.032908599742790937, 0.032106097266459938,
      0.031303594790128939, 0.030501092313797957, 0.029698589837466958,
      0.028896087361135966, 0.028093584884804967, 0.027291082408473975,
      0.026488579932142976, 0.025686077455811984, 0.024883574979481,
      0.02408107250315, 0.023278570026819007, 0.022476067550487897,
      0.021673565074156898, 0.020871062597825913, 0.020068560121494921,
      0.019266057645163925, 0.01846355516883293, 0.017661052692501931,
      0.016858550216170939, 0.016056047739839947, 0.015253545263508955,
      0.014451042787177959, 0.013648540310846967, 0.012846037834515971,
      0.012043535358184979, 0.01124103288185398, 0.010438530405522988,
      0.009636027929191996, 0.0088335254528610074, 0.0080310229765300084,
      0.0072285205001990163, 0.0064260180238680208, 0.0056235155475369107,
      0.0048210130712059221, 0.0040185105948749231, 0.0032160081185439379,
      0.0024135056422129389, 0.0016110031658819433, 0.00080850068955094431,
      5.9982132199556948E-6, -0.00079650426311103986, -0.0015990067394420319,
      -0.0024015092157730206, -0.0032040116921040161, -0.0040065141684350117,
      -0.0048090166447660072, -0.0056115191210969959, -0.0064140215974279984,
      -0.007216524073758987, -0.0080190265500899825, -0.0088215290264209711,
      -0.0096240315027519667, -0.010426533979082962, -0.011229036455413954,
      -0.012031538931745064, -0.012834041408076056, -0.013636543884407052,
      -0.014439046360738048, -0.01524154883706904, -0.016044051313400032,
      -0.016846553789731027, -0.017649056266062019, -0.018451558742393015,
      -0.019254061218724007, -0.020056563695055003, -0.020859066171385995,
      -0.02166156864771699, -0.022464071124047982, -0.023266573600378978,
      -0.024069076076709973, -0.024871578553040966, -0.025674081029371958,
      -0.02647658350570295, -0.027279085982033949, -0.028081588458364941,
      -0.028884090934696051, -0.029686593411027043, -0.030489095887358035,
      -0.031291598363689027, -0.032094100840020026, -0.032896603316351018,
      -0.03369910579268201, -0.034501608269013009, -0.035304110745344,
      -0.036106613221674994, -0.036909115698005986, -0.037711618174336978,
      -0.038514120650667977, -0.039316623126998969, -0.040119125603329961,
      -0.04092162807966096, -0.041724130555991952, -0.042526633032322944,
      -0.043329135508653936, -0.044131637984984935, -0.044934140461315927,
      -0.045736642937647037, -0.046539145413978029, -0.047341647890309022,
      -0.048144150366640014, -0.047906189433623479, -0.047573612039442825,
      -0.047241034645262178, -0.046908457251081524, -0.04657587985690087,
      -0.046243302462720216, -0.045910725068539562, -0.045578147674358908,
      -0.045245570280178254, -0.0449129928859976, -0.044580415491816947,
      -0.044247838097636293, -0.043915260703455639, -0.043582683309274992,
      -0.043250105915094338, -0.042917528520913684, -0.04258495112673303,
      -0.042252373732552327, -0.041919796338371673, -0.041587218944191019,
      -0.041254641550010365, -0.040922064155829711, -0.040589486761649057,
      -0.04025690936746841, -0.039924331973287756, -0.0395917545791071,
      -0.039259177184926448, -0.0389265997907458, -0.03859402239656514,
      -0.038261445002384487, -0.037928867608203833, -0.037596290214023179,
      -0.037263712819842525, -0.036931135425661871, -0.036598558031481224,
      -0.03626598063730057, -0.035933403243119916, -0.035600825848939262,
      -0.035268248454758608, -0.034935671060577905, -0.034603093666397258,
      -0.0342705162722166, -0.033937938878035943, -0.033605361483855296,
      -0.033272784089674642, -0.032940206695493988, -0.032607629301313334,
      -0.032275051907132687, -0.031942474512952033, -0.031609897118771373,
      -0.031277319724590719, -0.030944742330410068, -0.030612164936229414,
      -0.03027958754204876, -0.029947010147868113, -0.029614432753687459,
      -0.029281855359506802, -0.028949277965326148, -0.028616700571145497,
      -0.02828412317696484, -0.027951545782784144, -0.02761896838860349,
      -0.027286390994422836, -0.026953813600242182, -0.026621236206061528,
      -0.026288658811880874, -0.025956081417700221, -0.02562350402351957,
      -0.025290926629338916, -0.024958349235158262, -0.024625771840977608,
      -0.024293194446796958, -0.0239606170526163, -0.023628039658435646,
      -0.023295462264255, -0.022962884870074342, -0.022630307475893688,
      -0.022297730081713037, -0.021965152687532383, -0.021632575293351729,
      -0.021299997899171072, -0.020967420504990418, -0.020634843110809722,
      -0.020302265716629068, -0.019969688322448415, -0.019637110928267761,
      -0.019304533534087107, -0.018971956139906456, -0.018639378745725802,
      -0.018306801351545148, -0.017974223957364494, -0.017641646563183844,
      -0.01730906916900319, -0.016976491774822536, -0.016643914380641882,
      -0.016311336986461228, -0.015978759592280574, -0.015646182198099923,
      -0.015313604803919269, -0.014981027409738615, -0.014648450015557962,
      -0.014315872621377309, -0.013983295227196657, -0.013650717833015955,
      -0.013318140438835304, -0.012985563044654647, -0.012652985650473996,
      -0.012320408256293342, -0.011987830862112692, -0.011655253467932034,
      -0.01132267607375138, -0.010990098679570728, -0.010657521285390076,
      -0.010324943891209422, -0.0099923664970287679, -0.0096597891028481139,
      -0.0093272117086674634, -0.00899463431448681, -0.0086620569203061555,
      -0.0083294795261255033, -0.00799690213194485, -0.0076643247377641954,
      -0.0073317473435835423, -0.00699916994940289, -0.0066665925552222369,
      -0.0063340151610415812, -0.00600143776686093, -0.0056688603726802751,
      -0.0053362829784996237, -0.0050037055843189706, -0.0046711281901383166,
      -0.0043385507959576635, -0.0040059734017770104, -0.0036733960075963565,
      -0.0033408186134157017, -0.0030082412192350503, -0.0026756638250543955,
      -0.0023430864308737441, -0.0020105090366930884, -0.001677931642512437,
      -0.001345354248331784, -0.0010127768541511291, -0.00068019945997047689,
      -0.00034762206578982293, -1.5044671609170703E-5, 0.0003175327225715778,
      0.00065011011675213635, 0.000982687510932884, 0.0013152649051134425,
      0.001647842299294191, 0.0019804196934747496, 0.0023129970876554972,
      0.0026455744818360558, 0.0029781518760168039, 0.0033107292701973633,
      0.0036433066643781109, 0.0039758840585587636, 0.0043084614527394175,
      0.0046410388469200706, 0.0049736162411007246, 0.0053061936352813777,
      0.00563877102946203, 0.0059713484236426839, 0.006303925817823337,
      0.0066365032120039909, 0.006969080606184644, 0.0072444085549880832,
      0.0074052238789416684, 0.0075660392028952554, 0.0077268545268488423,
      0.0078876698508024284, 0.0080484851747560145, 0.0082093004987096,
      0.0083701158226631867, 0.0085309311466167728, 0.0086917464705703589,
      0.008852561794523945, 0.0090133771184775779, 0.0091741924424311172,
      0.00933500776638475, 0.0094958230903382911, 0.0096566384142919223,
      0.0098174537382454633, 0.0099782690621990945, 0.010139084386152636,
      0.010299899710106268, 0.010460715034059809, 0.010621530358013441,
      0.010782345681966982, 0.010943161005920613, 0.011103976329874154,
      0.011264791653827785, 0.011425606977781326, 0.011586422301734959,
      0.011747237625688498, 0.011908052949642131, 0.01206886827359567,
      0.012229683597549303, 0.012390498921502843, 0.012551314245456476,
      0.012712129569410062, 0.012872944893363648, 0.013033760217317236,
      0.01319457554127082, 0.013355390865224408, 0.013516206189177992,
      0.01367702151313158, 0.013837836837085166, 0.013998652161038752,
      0.01415946748499234, 0.014320282808945924, 0.014481098132899512,
      0.014641913456853096, 0.014802728780806684, 0.01496354410476027,
      0.015124359428713856, 0.015285174752667443, 0.015445990076621029,
      0.015606805400574617, 0.0157676207245282, 0.015928436048481789,
      0.016089251372435418, 0.016250066696388961, 0.016410882020342594,
      0.016571697344296133, 0.016732512668249766, 0.016893327992203305,
      0.017054143316156938, 0.017214958640110477, 0.01737577396406411,
      0.01753658928801765, 0.017697404611971279, 0.017858219935924825,
      0.018019035259878455, 0.018179850583831994, 0.01834066590778563,
      0.01850148123173917, 0.0186622965556928, 0.018823111879646338,
      0.018983927203599975, 0.019144742527553514, 0.019305557851507147,
      0.019466373175460731, 0.019627188499414319, 0.019788003823367904,
      0.019948819147321491, 0.020109634471275076, 0.020270449795228664,
      0.020431265119182251, 0.020592080443135836, 0.020752895767089424,
      0.020913711091043008, 0.021074526414996592, 0.021235341738950184,
      0.021396157062903768, 0.021556972386857356, 0.021717787710810937,
      0.021878603034764525, 0.022039418358718109, 0.0222002336826717,
      0.022361049006625285, 0.022521864330578872, 0.022682679654532457,
      0.02284349497848609, 0.023004310302439629, 0.023165125626393262,
      0.023325940950346805, 0.023486756274300434, 0.023647571598253973,
      0.02380838692220761, 0.023969202246161149, 0.024130017570114778,
      0.024290832894068321, 0.024451648218021951, 0.024612463541975493,
      0.024773278865929126, 0.024934094189882669, 0.025094909513836295,
      0.025255724837789838, 0.025416540161743471, 0.025577355485697006,
      0.025738170809650643, 0.025898986133604182, 0.026059801457557812,
      0.0262206167815114, 0.026381432105464987, 0.026542247429418575,
      0.026703062753372159, 0.026863878077325747, 0.027024693401279332,
      0.027185508725232919, 0.027346324049186507, 0.027507139373140092,
      0.027667954697093676, 0.02782877002104726, 0.027989585345000848,
      0.028150400668954433, 0.028311215992908024, 0.028472031316861608,
      0.028632846640815196, 0.02879366196476878, 0.028954477288722368,
      0.029115292612675956, 0.029276107936629544, 0.029436923260583125,
      0.029597738584536709, 0.029758553908490297, 0.029919369232443933,
      0.030080184556397473, 0.030240999880351102, 0.030401815204304645,
      0.030562630528258278, 0.030723445852211817, 0.03088426117616545,
      0.031045076500118993, 0.031205891824072622, 0.031366707148026161,
      0.031527522471979791, 0.031688337795933337, 0.031849153119886967,
      0.032009968443840506, 0.032170783767794135, 0.032331599091747681,
      0.032492414415701311, 0.03265322973965485, 0.032814045063608487,
      0.032974860387562026, 0.033135675711515662, 0.033296491035469243,
      0.033457306359422831, 0.033618121683376419, 0.03377893700733,
      0.033939752331283587, 0.033498840103038087, 0.032857319946686558,
      0.03221579979033503, 0.031574279633983508, 0.030932759477631987,
      0.030291239321280458, 0.029649719164928933, 0.029008199008577408,
      0.028366678852225886, 0.027725158695874361, 0.02708363853952284,
      0.026442118383171315, 0.025800598226819786, 0.025159078070468265,
      0.024517557914116743, 0.023876037757765214, 0.023234517601413509,
      0.022592997445062164, 0.021951477288710459, 0.021309957132359114,
      0.020668436976007409, 0.020026916819656071, 0.019385396663304359,
      0.018743876506953021, 0.018102356350601319, 0.017460836194249971,
      0.016819316037898269, 0.016177795881546924, 0.015536275725195219,
      0.014894755568843874, 0.014253235412492167, 0.013611715256140827,
      0.012970195099789118, 0.012328674943437779, 0.01168715478708607,
      0.011045634630734727, 0.010404114474383021, 0.0097625943180315,
      0.0091210741616799713, 0.00847955400532845, 0.0078380338489769247,
      0.0071965136926254, 0.0065549935362738711, 0.0059134733799223495,
      0.0052719532235708244, 0.0046304330672193028, 0.0039889129108677743,
      0.0033473927545162527, 0.0027058725981647276, 0.002064352441813206,
      0.0014228322854616809, 0.00078131212911015588, 0.00013979197275863081,
      -0.00050172818359289426, -0.0011432483399444193, -0.0017847684962959409,
      -0.002426288652647466, -0.0030678088089989945, -0.0037093289653507,
      -0.0043508491217020412, -0.00499236927805375, -0.0056338894344050879,
      -0.0062754095907567933, -0.006916929747108138, -0.0075584499034598435,
      -0.0081999700598111916, -0.00884149021616289, -0.0094830103725142383,
      -0.010124530528865944, -0.010766050685217281, -0.01140757084156899,
      -0.012049090997920332, -0.012690611154272037, -0.013332131310623378,
      -0.013973651466975087, -0.014615171623326432, -0.015256691779678134,
      -0.015898211936029479, -0.016539732092381187, -0.017181252248732713,
      -0.017822772405084234, -0.018464292561435759, -0.019105812717787281,
      -0.019747332874138813, -0.020388853030490331, -0.021030373186841853,
      -0.021671893343193378, -0.022313413499544903, -0.022954933655896431,
      -0.023596453812247956, -0.024237973968599474, -0.024879494124951003,
      -0.025521014281302531, -0.026162534437654053, -0.026804054594005582,
      -0.02744557475035711, -0.028087094906708621, -0.028728615063060146,
      -0.029370135219411671, -0.030011655375763197, -0.030653175532114902,
      -0.031294695688466247, -0.031936215844817956, -0.0325777360011693,
      -0.033219256157521, -0.033860776313872354, -0.034502296470224056,
      -0.03514381662657539, -0.035785336782927106, -0.03642685693927844,
      -0.037068377095630149, -0.03770989725198149, -0.0383514174083332,
      -0.038992937564684541, -0.039634457721036243, -0.040275977877387591,
      -0.0409174980337393, -0.041559018190090641, -0.04220053834644235,
      -0.042842058502793684, -0.043483578659145393, -0.044125098815496727,
      -0.044766618971848256, -0.045408139128199965, -0.046049659284551313,
      -0.046691179440903015, -0.047332699597254356, -0.047974219753606065,
      -0.048615739909957406, -0.049257260066309108, -0.049898780222660456,
      -0.050540300379012165, -0.0511818205353635, -0.051823340691715208,
      -0.05246486084806655, -0.053106381004418252, -0.0537479011607696,
      -0.054389421317121309, -0.05503094147347265, -0.055672461629824352,
      -0.0563139817861757, -0.056955501942527409, -0.057597022098878743,
      -0.058238542255230459, -0.058880062411581974, -0.059521582567933495,
      -0.060163102724285024, -0.060804622880636552, -0.061446143036988074,
      -0.0620876631933396, -0.062729183349691131, -0.063370703506042653,
      -0.064012223662394174, -0.0646537438187457, -0.065295263975097217,
      -0.065936784131448753, -0.066578304287800275, -0.067219824444151782,
      -0.067861344600503318, -0.068502864756854839, -0.069144384913206361,
      -0.0697859050695579, -0.070427425225909418, -0.07106894538226094,
      -0.071710465538612475, -0.072351985694964163, -0.072724685021037114,
      -0.0717529577075427, -0.070781230394048836, -0.0698095030805544,
      -0.068837775767060544, -0.067866048453566127, -0.066894321140072252,
      -0.065922593826577836, -0.06495086651308396, -0.063979139199589558,
      -0.063007411886095668, -0.062035684572601252, -0.061063957259107383,
      -0.06009222994561296, -0.059120502632119092, -0.058148775318624682,
      -0.057177048005130807, -0.056205320691636383, -0.055233593378142515,
      -0.054261866064648105, -0.053290138751153959, -0.052318411437659806,
      -0.05134668412416566, -0.050374956810671515, -0.049403229497177362,
      -0.04843150218368323, -0.047459774870189084, -0.046488047556694938,
      -0.045516320243200792, -0.044544592929706639, -0.043572865616212507,
      -0.042601138302718361, -0.041629410989224208, -0.040657683675730062,
      -0.039685956362235916, -0.038714229048741777, -0.037742501735247638,
      -0.036770774421753485, -0.03579904710825934, -0.034827319794765194,
      -0.033855592481271055, -0.032883865167776624, -0.031912137854282763,
      -0.030940410540788346, -0.029968683227294474, -0.028996955913800051,
      -0.028025228600306182, -0.027053501286811766, -0.026081773973317894,
      -0.025110046659823474, -0.024138319346329602, -0.023166592032835179,
      -0.022194864719341317, -0.021223137405846894, -0.020251410092353029,
      -0.019279682778858605, -0.018307955465364734, -0.017336228151870314,
      -0.016364500838376449, -0.015392773524882018, -0.014421046211388157,
      -0.01344931889789374, -0.012477591584399865, -0.011505864270905442,
      -0.010534136957411296, -0.0095624096439171635, -0.00859068233042301,
      -0.0076189550169288717, -0.0066472277034347188, -0.0056755003899405729,
      -0.0047037730764464269, -0.003732045762952288, -0.002760318449458149,
      -0.0017885911359639961, -0.00081686382246985018, 0.00015486349102429575,
      0.0011265908045184347, 0.0020983181180125807, 0.0030700454315067266,
      0.0040417727450008795, 0.0050135000584950115, 0.0059852273719891644,
      0.0069569546854833034, 0.00792868199897745, 0.0089004093124716022,
      0.0098721366259660118, 0.010843863939459894, 0.011815591252954311,
      0.012787318566448172, 0.013759045879942595, 0.014730773193436464,
      0.015702500506930887, 0.016674227820424756, 0.017645955133919179,
      0.018617682447413041, 0.019589409760907468, 0.020561137074401339,
      0.021532864387895759, 0.022504591701389617, 0.023476319014884051,
      0.024448046328377909, 0.025419773641872333, 0.0263915009553662,
      0.027363228268860625, 0.028334955582354493, 0.029306682895848916,
      0.030278410209343055, 0.0312501375228372, 0.032221864836331347,
      0.0331935921498255, 0.034165319463319639, 0.035137046776813778,
      0.036108774090307924, 0.03708050140380207, 0.038052228717296223,
      0.039023956030790362, 0.039995683344284515, 0.040967410657778647,
      0.0419391379712728, 0.042910865284766939, 0.043882592598261091,
      0.044854319911755237, 0.045826047225249369, 0.046797774538743522,
      0.047769501852237661, 0.048741229165731814, 0.04971295647922596,
      0.05068468379272037, 0.051656411106214245, 0.052628138419708675,
      0.053599865733202537, 0.05457159304669696, 0.055543320360190836,
      0.056515047673685245, 0.057486774987179107, 0.058458502300673537,
      0.059430229614167406, 0.060401956927661815, 0.06137368424115569,
      0.062345411554650121, 0.063317138868143982, 0.0642888661816384,
      0.065260593495132274, 0.066232320808626691, 0.067204048122120552,
      0.068175775435615, 0.069147502749108858, 0.070119230062603261,
      0.071090957376097413, 0.072062684689591566, 0.073034412003085719,
      0.074006139316579844, 0.074977866630073983, 0.075949593943568136,
      0.076921321257062289, 0.077893048570556442, 0.078864775884050581,
      0.0798365031975447, 0.080808230511038859, 0.081779957824533012,
      0.082751685138027165, 0.0837234124515213, 0.084695139765015443,
      0.085666867078509581, 0.086638594392003734, 0.087610321705497887,
      0.088582049018992026, 0.087936330096809942, 0.0861351182229702,
      0.084333906349129933, 0.082532694475290685, 0.080731482601450411,
      0.078930270727611176, 0.077129058853770915, 0.075327846979931667,
      0.0735266351060914, 0.071725423232252158, 0.0699242113584119,
      0.068122999484572649, 0.066321787610732388, 0.06452057573689314,
      0.062719363863052865, 0.060918151989213631, 0.059116940115373363,
      0.057315728241534136, 0.055514516367693861, 0.053713304493854613,
      0.051912092620014352, 0.050110880746175111, 0.048309668872334843,
      0.046508456998495082, 0.044707245124655334, 0.04290603325081558,
      0.041104821376975818, 0.039303609503136057, 0.037502397629296316,
      0.035701185755456569, 0.033899973881616807, 0.032098762007777053,
      0.030297550133937291, 0.028496338260097551, 0.026695126386257789,
      0.024893914512418028, 0.023092702638578273, 0.021291490764738526,
      0.019490278890898764, 0.01768906701705901, 0.015887855143219262,
      0.0140866432693795, 0.012285431395539753, 0.010484219521700006,
      0.0086830076478602441, 0.0068817957740204827, 0.0050805839001802217,
      0.0032793720263409737, 0.0014781601525007126, -0.00032305172133853532,
      -0.0021242635951787964, -0.0039254754690180443, -0.0057266873428583123,
      -0.0075278992166975534, -0.0093291110905378144, -0.011130322964377055,
      -0.012931534838217323, -0.014732746712056571, -0.016533958585896825,
      -0.018335170459736087, -0.020136382333576341, -0.021937594207415589,
      -0.023738806081255857, -0.025540017955095091, -0.027341229828935359,
      -0.029142441702774607, -0.030943653576614875, -0.032744865450454623,
      -0.034546077324294377, -0.036347289198134139, -0.03814850107197388,
      -0.039949712945813641, -0.041750924819653396, -0.043552136693493157,
      -0.045353348567332911, -0.047154560441172659, -0.048955772315012414,
      -0.050756984188852175, -0.052558196062691923, -0.054359407936531677,
      -0.056160619810371439, -0.057961831684211179, -0.059763043558050941,
      -0.061564255431890695, -0.06336546730573045, -0.065166679179570211,
      -0.066967891053409945, -0.0687691029272497, -0.070570314801089981,
      -0.072371526674929215, -0.07417273854876949, -0.075973950422608724,
      -0.077775162296449013, -0.079576374170288233, -0.0813775860441285,
      -0.083178797917967742, -0.084980009791808, -0.086781221665647251,
      -0.088582433539487526, -0.090383645413326774, -0.092184857287167021,
      -0.093986069161006255, -0.095787281034846544, -0.097588492908685764,
      -0.099389704782526025, -0.10119091665636529, -0.10299212853020553,
      -0.1047933404040448, -0.10659455227788506, -0.10839576415172482,
      -0.11019697602556457, -0.11199818789940434, -0.11379939977324408,
      -0.11560061164708385, -0.1174018235209236, -0.11920303539476337,
      -0.12100424726860308, -0.12280545914244285, -0.12460667101628259,
      -0.12640788289012236, -0.12820909476396211, -0.13001030663780189,
      -0.13181151851164163, -0.13361273038548138, -0.13541394225932113,
      -0.1372151541331609, -0.13901636600700065, -0.1408175778808404,
      -0.14261878975468015, -0.14442000162851992, -0.1462212135023602,
      -0.14802242537619942, -0.14982363725003967, -0.15162484912387894,
      -0.15342606099771919, -0.15522727287155846, -0.15702848474539871,
      -0.15882969661923796, -0.16063090849307821, -0.16243212036691745,
      -0.16423333224075773, -0.16603454411459698, -0.16783575598843722,
      -0.16963696786227647, -0.17143817973611675, -0.173239391609956,
      -0.17504060348379624, -0.17684181535763549, -0.17864302723147577,
      -0.18044423910531499, -0.18224545097915529, -0.18404666285299451,
      -0.18584787472683478, -0.1876490866006745, -0.18945029847451428,
      -0.19125151034835403, -0.1930527222221938, -0.19485393409603355,
      -0.1966551459698733, -0.19845635784371304, -0.20025756971755282,
      -0.20205878159139257, -0.20385999346523234, -0.20566120533907209,
      -0.20746241721291181, -0.20926362908675156, -0.21106484096059133 } ;

    test3_DW.FromWorkspace_PWORK.TimePtr = (void *) pTimeValues0;
    test3_DW.FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
    test3_DW.FromWorkspace_IWORK.PrevIndex = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S1>/Unwrap 2^1' */

  /* S-Function Block: test3/Filter/Unwrap 2^1 (inverse_modulus_block) */
  {
    test3_DW.Unwrap21_FirstSample_o = true;
    test3_DW.Unwrap21_Revolutions_o = 0;
  }

  test3_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Integrator: '<S11>/Integrator2' */
  test3_X.Integrator2_CSTATE = test3_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<S15>/Integrator1' incorporates:
   *  Integrator: '<S16>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE = 0.0;
    test3_X.Integrator1_CSTATE_m = 0.0;
  }

  test3_DW.Integrator1_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S15>/Integrator1' */

  /* InitializeConditions for Integrator: '<S16>/Integrator1' */
  test3_DW.Integrator1_IWORK_i = 1;

  /* InitializeConditions for Integrator: '<S14>/Integrator2' */
  test3_X.Integrator2_CSTATE_f = test3_P.Integrator2_IC_l;

  /* InitializeConditions for Integrator: '<S8>/Integrator' */
  test3_X.Integrator_CSTATE = test3_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S11>/Integrator1' incorporates:
   *  Integrator: '<S12>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_p = 0.0;
    test3_X.Integrator1_CSTATE_h = 0.0;
  }

  test3_DW.Integrator1_IWORK_g = 1;

  /* End of InitializeConditions for Integrator: '<S11>/Integrator1' */

  /* InitializeConditions for Integrator: '<S12>/Integrator1' */
  test3_DW.Integrator1_IWORK_d = 1;

  /* InitializeConditions for Integrator: '<S12>/Integrator2' */
  test3_X.Integrator2_CSTATE_i = test3_P.Integrator2_IC_j;

  /* InitializeConditions for Integrator: '<S13>/Integrator1' incorporates:
   *  Integrator: '<S14>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_b = 0.0;
    test3_X.Integrator1_CSTATE_n = 0.0;
  }

  test3_DW.Integrator1_IWORK_gg = 1;

  /* End of InitializeConditions for Integrator: '<S13>/Integrator1' */

  /* InitializeConditions for Integrator: '<S13>/Integrator2' */
  test3_X.Integrator2_CSTATE_c = test3_P.Integrator2_IC_d;

  /* InitializeConditions for Integrator: '<S14>/Integrator1' */
  test3_DW.Integrator1_IWORK_l = 1;

  /* InitializeConditions for Integrator: '<S15>/Integrator2' */
  test3_X.Integrator2_CSTATE_m = test3_P.Integrator2_IC_n;

  /* InitializeConditions for Integrator: '<S16>/Integrator2' */
  test3_X.Integrator2_CSTATE_b = test3_P.Integrator2_IC_h;

  /* InitializeConditions for Integrator: '<S4>/Integrator5' */
  test3_X.Integrator5_CSTATE = test3_P.Integrator5_IC;

  /* InitializeConditions for Integrator: '<S5>/Integrator6' */
  test3_X.Integrator6_CSTATE = test3_P.Integrator6_IC;

  /* InitializeConditions for Integrator: '<S1>/Integrator3' */
  test3_X.Integrator3_CSTATE = test3_P.Integrator3_IC;

  /* InitializeConditions for Integrator: '<S9>/Integrator1' */
  test3_X.Integrator1_CSTATE_ng = test3_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<S10>/Integrator1' */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_me = 0.0;
  }

  test3_DW.Integrator1_IWORK_a = 1;

  /* End of InitializeConditions for Integrator: '<S10>/Integrator1' */

  /* InitializeConditions for Integrator: '<S10>/Integrator2' */
  test3_X.Integrator2_CSTATE_k = test3_P.Integrator2_IC_a;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  test3_DW.sfEvent_g = test3_CALL_EVENT;
  test3_DW.is_active_c2_test3 = 0U;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function2' */
  test3_DW.sfEvent = test3_CALL_EVENT;
  test3_DW.is_active_c4_test3 = 0U;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(test3_M)) {
    rtmSetFirstInitCond(test3_M, 0);
  }
}

/* Model terminate function */
void test3_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S8>/HIL Initialize' */

  /* S-Function Block: test3/basicQCarIO/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(test3_DW.HILInitialize_Card);
    hil_monitor_stop_all(test3_DW.HILInitialize_Card);
    is_switching = false;
    if ((test3_P.HILInitialize_DOTerminate && !is_switching) ||
        (test3_P.HILInitialize_DOExit && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &test3_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = test3_P.HILInitialize_DOFinal;
        }
      }

      num_final_digital_outputs = 16U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((test3_P.HILInitialize_POTerminate && !is_switching) ||
        (test3_P.HILInitialize_POExit && is_switching)) {
      test3_DW.HILInitialize_POValues[0] = test3_P.HILInitialize_POFinal;
      test3_DW.HILInitialize_POValues[1] = test3_P.HILInitialize_POFinal;
      num_final_pwm_outputs = 2U;
    } else {
      num_final_pwm_outputs = 0;
    }

    if ((test3_P.HILInitialize_OOTerminate && !is_switching) ||
        (test3_P.HILInitialize_OOExit && is_switching)) {
      test3_DW.HILInitialize_OOValues[0] = test3_P.HILInitialize_OOFinal;
      test3_DW.HILInitialize_OOValues[1] = test3_P.HILInitialize_OOFinal;
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
      result = hil_write(test3_DW.HILInitialize_Card
                         , NULL, 0
                         , test3_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , test3_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , test3_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , NULL
                         , &test3_DW.HILInitialize_POValues[0]
                         , (t_boolean *) &test3_DW.HILInitialize_DOBits[0]
                         , &test3_DW.HILInitialize_OOValues[0]
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm(test3_DW.HILInitialize_Card,
            test3_P.HILInitialize_POChannels, num_final_pwm_outputs,
            &test3_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital(test3_DW.HILInitialize_Card,
            test3_P.HILInitialize_DOChannels, num_final_digital_outputs,
            (t_boolean *) &test3_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other(test3_DW.HILInitialize_Card,
            test3_P.HILInitialize_OOChannels, num_final_other_outputs,
            &test3_DW.HILInitialize_OOValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test3_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(test3_DW.HILInitialize_Card);
    hil_monitor_delete_all(test3_DW.HILInitialize_Card);
    hil_close(test3_DW.HILInitialize_Card);
    test3_DW.HILInitialize_Card = NULL;
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
  test3_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  test3_update();
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
  test3_initialize();
}

void MdlTerminate(void)
{
  test3_terminate();
}

/* Registration function */
RT_MODEL_test3_T *test3(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test3_M, 0,
                sizeof(RT_MODEL_test3_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&test3_M->solverInfo, &test3_M->Timing.simTimeStep);
    rtsiSetTPtr(&test3_M->solverInfo, &rtmGetTPtr(test3_M));
    rtsiSetStepSizePtr(&test3_M->solverInfo, &test3_M->Timing.stepSize0);
    rtsiSetdXPtr(&test3_M->solverInfo, &test3_M->derivs);
    rtsiSetContStatesPtr(&test3_M->solverInfo, (real_T **) &test3_M->contStates);
    rtsiSetNumContStatesPtr(&test3_M->solverInfo, &test3_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&test3_M->solverInfo,
      &test3_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&test3_M->solverInfo,
      &test3_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&test3_M->solverInfo,
      &test3_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&test3_M->solverInfo, (&rtmGetErrorStatus(test3_M)));
    rtsiSetRTModelPtr(&test3_M->solverInfo, test3_M);
  }

  rtsiSetSimTimeStep(&test3_M->solverInfo, MAJOR_TIME_STEP);
  test3_M->intgData.f[0] = test3_M->odeF[0];
  test3_M->contStates = ((real_T *) &test3_X);
  rtsiSetSolverData(&test3_M->solverInfo, (void *)&test3_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&test3_M->solverInfo, false);
  rtsiSetSolverName(&test3_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = test3_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "test3_M points to
       static memory which is guaranteed to be non-NULL" */
    test3_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    test3_M->Timing.sampleTimes = (&test3_M->Timing.sampleTimesArray[0]);
    test3_M->Timing.offsetTimes = (&test3_M->Timing.offsetTimesArray[0]);

    /* task periods */
    test3_M->Timing.sampleTimes[0] = (0.0);
    test3_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    test3_M->Timing.offsetTimes[0] = (0.0);
    test3_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(test3_M, &test3_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = test3_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    test3_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(test3_M, -1);
  test3_M->Timing.stepSize0 = 0.002;
  test3_M->Timing.stepSize1 = 0.002;
  rtmSetFirstInitCond(test3_M, 1);

  /* External mode info */
  test3_M->Sizes.checksums[0] = (2569458022U);
  test3_M->Sizes.checksums[1] = (735911691U);
  test3_M->Sizes.checksums[2] = (2157054123U);
  test3_M->Sizes.checksums[3] = (3965282115U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    test3_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(test3_M->extModeInfo,
      &test3_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(test3_M->extModeInfo, test3_M->Sizes.checksums);
    rteiSetTPtr(test3_M->extModeInfo, rtmGetTPtr(test3_M));
  }

  test3_M->solverInfoPtr = (&test3_M->solverInfo);
  test3_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&test3_M->solverInfo, 0.002);
  rtsiSetSolverMode(&test3_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  test3_M->blockIO = ((void *) &test3_B);
  (void) memset(((void *) &test3_B), 0,
                sizeof(B_test3_T));

  /* parameters */
  test3_M->defaultParam = ((real_T *)&test3_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &test3_X;
    test3_M->contStates = (x);
    (void) memset((void *)&test3_X, 0,
                  sizeof(X_test3_T));
  }

  /* states (dwork) */
  test3_M->dwork = ((void *) &test3_DW);
  (void) memset((void *)&test3_DW, 0,
                sizeof(DW_test3_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    test3_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 24;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  test3_M->Sizes.numContStates = (19); /* Number of continuous states */
  test3_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  test3_M->Sizes.numY = (0);           /* Number of model outputs */
  test3_M->Sizes.numU = (0);           /* Number of model inputs */
  test3_M->Sizes.sysDirFeedThru = (0); /* The model is not direct feedthrough */
  test3_M->Sizes.numSampTimes = (2);   /* Number of sample times */
  test3_M->Sizes.numBlocks = (133);    /* Number of blocks */
  test3_M->Sizes.numBlockIO = (42);    /* Number of block outputs */
  test3_M->Sizes.numBlockPrms = (176); /* Sum of parameter "widths" */
  return test3_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
