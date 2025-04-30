/*
 * test3.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "test3".
 *
 * Model version              : 15.50
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Apr 30 11:05:57 2025
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
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>
#include "test3_private.h"
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

  /* '<S1>:1:149' */
  /* '<S1>:1:143' */
  test3_emxInit_real_T(&x, 2);
  tmp = x->size[0] * x->size[1];
  x->size[0] = 4;
  x->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(x, tmp);
  loop_ub = (int32_T)(N + 1.0) << 2;
  if (loop_ub - 1 >= 0) {
    memset(&x->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S1>:1:144' */
  x->data[0] = x0[0];
  x->data[1] = x0[1];
  x->data[2] = x0[2];
  x->data[3] = x0[3];

  /* '<S1>:1:145' */
  varargout_2->size[0] = 0;
  b = (int32_T)N;

  /* '<S1>:1:147' */
  for (loop_ub = 0; loop_ub < b; loop_ub++) {
    c = ((uint32_T)loop_ub << 1) + 1U;
    if (c > ((real_T)loop_ub + 1.0) * 2.0) {
      d = 0;
    } else {
      d = (int32_T)c - 1;
    }

    /* '<S1>:1:148' */
    /* '<S1>:1:149' */
    /* '<S1>:1:161' */
    x_next_idx_2 = x->data[(loop_ub << 2) + 2];
    x_next_idx_3 = x->data[(loop_ub << 2) + 3];
    x_next_idx_0 = u->data[d] * cos(x_next_idx_2) * 0.1 + x->data[loop_ub << 2];
    x_next_idx_1 = u->data[d] * sin(x_next_idx_2) * 0.1 + x->data[(loop_ub << 2)
      + 1];
    x_next_idx_2 += u->data[d] / 0.256 * tan(x_next_idx_3) * 0.1;
    x_next_idx_3 += u->data[d + 1] * 0.1;

    /* '<S1>:1:150' */
    /* '<S1>:1:151' */
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

  /* '<S1>:1:155' */
  /* '<S1>:1:156' */
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

  /* '<S1>:1:129' */
  /* '<S1>:1:133' */
  /* '<S1>:1:137' */
  /* '<S1>:1:123' */
  test3_emxInit_real_T(&x, 2);
  loop_ub = x->size[0] * x->size[1];
  x->size[0] = 4;
  x->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(x, loop_ub);
  loop_ub = (int32_T)(N + 1.0) << 2;
  if (loop_ub - 1 >= 0) {
    memset(&x->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S1>:1:124' */
  x->data[0] = x0[0];
  x->data[1] = x0[1];
  x->data[2] = x0[2];
  x->data[3] = x0[3];

  /* '<S1>:1:125' */
  varargout_1 = 0.0;
  b = (int32_T)N;

  /* '<S1>:1:127' */
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

    /* '<S1>:1:128' */
    /* '<S1>:1:129' */
    /* '<S1>:1:161' */
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

    /* '<S1>:1:131' */
    err_x[0] = x_2 - xref->data[x_tmp];
    err_x[1] = x_0 - xref->data[x_tmp_0];
    err_x[2] = d - xref->data[d_tmp];
    err_x[3] = x_1 - xref->data[x_tmp_1];

    /* '<S1>:1:132' */
    loop_ub = e - f;
    if (loop_ub == 2) {
      for (e = 0; e < loop_ub; e++) {
        err_u[e] = u->data[f + e] - uref->data[(k << 1) + e];
      }
    } else {
      test3_binary_expand_op(err_u, u, f, e - 1, uref, k);
    }

    /* '<S1>:1:133' */
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

  /* '<S1>:1:136' */
  err_x[0] = x->data[(x->size[1] - 1) << 2] - xref->data[(xref->size[1] - 1) <<
    2];
  err_x[1] = x->data[((x->size[1] - 1) << 2) + 1] - xref->data[((xref->size[1] -
    1) << 2) + 1];
  err_x[2] = x->data[((x->size[1] - 1) << 2) + 2] - xref->data[((xref->size[1] -
    1) << 2) + 2];
  err_x[3] = x->data[((x->size[1] - 1) << 2) + 3] - xref->data[((xref->size[1] -
    1) << 2) + 3];
  test3_emxFree_real_T(&x);

  /* '<S1>:1:137' */
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

  /* '<S2>:1:168' */
  /* '<S2>:1:158' */
  test3_emxInit_real_T(&z, 2);
  z_next_idx_1_tmp = z->size[0] * z->size[1];
  z->size[0] = 2;
  z->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(z, z_next_idx_1_tmp);
  loop_ub_tmp = (int32_T)(N + 1.0) << 1;

  /* '<S2>:1:159' */
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

  /* '<S2>:1:160' */
  /* '<S2>:1:161' */
  /* '<S2>:1:118' */
  z_tmp = x0[2] + x0[3];
  z->data[0] = (0.256 * cos(x0[2]) + x0[0]) + cos(z_tmp) * 0.35;
  z->data[1] = (0.256 * sin(x0[2]) + x0[1]) + sin(z_tmp) * 0.35;

  /* '<S2>:1:162' */
  eta->data[0] = x0[2];
  eta->data[1] = rt_atan2d_snf(w->data[1], w->data[0]);

  /* '<S2>:1:163' */
  varargout_2->size[0] = 0;

  /* '<S2>:1:164' */
  varargout_1->size[0] = 0;
  loop_ub_tmp = (int32_T)N;

  /* '<S2>:1:166' */
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

    /* '<S2>:1:167' */
    /* '<S2>:1:168' */
    s1_tmp = (k << 1) + 1;
    s1 = z->data[s1_tmp];
    z_next_idx_1_tmp = k << 1;
    z_next_idx_1 = z->data[z_next_idx_1_tmp];
    z_tmp = w->data[f + 1];
    z_next_idx_0 = (z_tmp * 0.0 + 0.3 * w->data[f]) + (0.0 * s1 + z_next_idx_1);
    z_next_idx_1 = (z_tmp * 0.3 + 0.0 * w->data[f]) + (0.0 * z_next_idx_1 + s1);

    /* '<S2>:1:169' */
    /* '<S2>:1:171' */
    /* '<S2>:1:129' */
    eta_next_idx_0 = eta->data[z_next_idx_1_tmp];
    eta_0 = eta->data[s1_tmp];
    c1 = eta_next_idx_0 + eta_0;
    s1 = sin(c1);

    /* '<S2>:1:129' */
    c1 = cos(c1);

    /* '<S2>:1:130' */
    /* '<S2>:1:172' */
    eta_next_tmp_tmp = sin(eta_0);

    /* '<S2>:1:173' */
    /* '<S2>:1:175' */
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

    /* '<S2>:1:176' */
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

  /* '<S2>:1:144' */
  /* '<S2>:1:148' */
  /* '<S2>:1:137' */
  test3_emxInit_real_T(&z, 2);
  loop_ub = z->size[0] * z->size[1];
  z->size[0] = 2;
  z->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(z, loop_ub);
  loop_ub = (int32_T)(N + 1.0) << 1;
  if (loop_ub - 1 >= 0) {
    memset(&z->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S2>:1:139' */
  /* '<S2>:1:118' */
  err_z_idx_1 = x0[2] + x0[3];
  z->data[0] = (0.256 * cos(x0[2]) + x0[0]) + cos(err_z_idx_1) * 0.35;
  z->data[1] = (0.256 * sin(x0[2]) + x0[1]) + sin(err_z_idx_1) * 0.35;

  /* '<S2>:1:140' */
  varargout_1 = 0.0;
  b = (int32_T)N;

  /* '<S2>:1:142' */
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

    /* '<S2>:1:143' */
    /* '<S2>:1:144' */
    z_tmp = k << 1;
    z_0 = z->data[z_tmp];
    z_tmp_0 = (k << 1) + 1;
    z_1 = z->data[z_tmp_0];

    /* '<S2>:1:146' */
    err_z_idx_1 = w->data[f + 1];
    loop_ub = (k + 1) << 1;
    z->data[loop_ub] = (err_z_idx_1 * 0.0 + 0.3 * w->data[f]) + (0.0 * z_1 + z_0);
    err_z_idx_0 = z_0 - zref->data[z_tmp];
    z->data[1 + loop_ub] = (err_z_idx_1 * 0.3 + 0.0 * w->data[f]) + (0.0 * z_0 +
      z_1);
    err_z_idx_1 = z_1 - zref->data[z_tmp_0];

    /* '<S2>:1:147' */
    loop_ub = e - f;
    if (loop_ub == 2) {
      for (e = 0; e < loop_ub; e++) {
        err_w[e] = w->data[f + e] - wref->data[(k << 1) + e];
      }
    } else {
      test3_binary_expand_op(err_w, w, f, e - 1, wref, k);
    }

    /* '<S2>:1:148' */
    varargout_1 = (((err_z_idx_0 * 10.0 + err_z_idx_1 * 0.0) * err_z_idx_0 +
                    (err_z_idx_0 * 0.0 + err_z_idx_1 * 10.0) * err_z_idx_1) +
                   varargout_1) + ((err_w[1] * 0.0 + err_w[0]) * err_w[0] +
      (err_w[0] * 0.0 + err_w[1]) * err_w[1]);
  }

  /* '<S2>:1:151' */
  err_z_idx_0 = z->data[(z->size[1] - 1) << 1] - zref->data[(zref->size[1] - 1) <<
    1];
  err_z_idx_1 = z->data[((z->size[1] - 1) << 1) + 1] - zref->data[((zref->size[1]
    - 1) << 1) + 1];
  test3_emxFree_real_T(&z);

  /* '<S2>:1:152' */
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
  emxArray_real_T_test3_T *c;
  emxArray_real_T_test3_T *d;
  emxArray_real_T_test3_T *horizon_idx;
  emxArray_real_T_test3_T *lb;
  emxArray_real_T_test3_T *tmp;
  emxArray_real_T_test3_T *u_opt;
  emxArray_real_T_test3_T *ub;
  emxArray_real_T_test3_T *wref_0;
  s6lIrH89xwD47fl4e1dZNiE_test3_T expl_temp;
  sU0htoGcxTaPV5C2NLIldmB_test3_T expl_temp_0;
  real_T wref[58];
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

  static const real_T d_1[58] = { 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0, 0.70710678118654757, 0.0, 0.70710678118654757, 0.0, 0.70710678118654757,
    0.0 };

  static const real_T f[58] = { 0.42850670939904784, 0.42850670939904778,
    0.60350670939904782, 0.60350670939904771, 0.77850670939904787,
    0.77850670939904776, 0.95350670939904769, 0.95350670939904769,
    1.1285067093990477, 1.1285067093990477, 1.3035067093990478,
    1.3035067093990478, 1.4785067093990476, 1.4785067093990476,
    1.6535067093990476, 1.6535067093990476, 1.8285067093990477,
    1.8285067093990477, 2.0035067093990477, 2.0035067093990477,
    2.178506709399048, 2.1785067093990476, 2.3535067093990478,
    2.3535067093990474, 2.5285067093990476, 2.5285067093990472,
    2.7035067093990475, 2.7035067093990475, 2.8785067093990473,
    2.8785067093990473, 3.0535067093990471, 3.0535067093990471,
    3.2285067093990478, 3.2285067093990474, 3.4035067093990476,
    3.4035067093990472, 3.5785067093990475, 3.578506709399047,
    3.7535067093990473, 3.7535067093990468, 3.9285067093990471,
    3.9285067093990471, 4.1035067093990483, 4.1035067093990474,
    4.2785067093990481, 4.2785067093990481, 4.4535067093990479,
    4.453506709399047, 4.6285067093990477, 4.6285067093990477,
    4.8035067093990484, 4.8035067093990484, 4.9785067093990483,
    4.9785067093990474, 5.1535067093990481, 5.1535067093990481,
    5.3285067093990479, 5.328506709399047 };

  int32_T tmp_1;
  int32_T tmp_2;
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

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Integrator: '<S10>/Integrator2'
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

  /* Integrator: '<S14>/Integrator1' */
  if (test3_DW.Integrator1_IWORK != 0) {
    test3_X.Integrator1_CSTATE = test3_B.analogpower;
  }

  /* Integrator: '<S14>/Integrator1' */
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

  /* Integrator: '<S15>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_i != 0) {
    test3_X.Integrator1_CSTATE_m = test3_B.Unwrap22;
  }

  /* Integrator: '<S15>/Integrator1' */
  test3_B.Integrator1_g = test3_X.Integrator1_CSTATE_m;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S8>/Constant8'
   *  Integrator: '<S13>/Integrator2'
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

  /* Integrator: '<S10>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_g != 0) {
    test3_X.Integrator1_CSTATE_p = test3_B.Unwrap224;
  }

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Integrator: '<S10>/Integrator1'
   *  Integrator: '<S10>/Integrator2'
   *  Product: '<S10>/Product2'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S10>/Sum1'
   */
  test3_B.Product = ((test3_B.Unwrap224 - test3_X.Integrator1_CSTATE_p) -
                     test3_X.Integrator2_CSTATE * test3_P.Constant_Value_h *
                     test3_P.Constant1_Value) * test3_P.Constant2_Value;

  /* Integrator: '<S11>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_d != 0) {
    test3_X.Integrator1_CSTATE_h = test3_B.HILRead_o3[1];
  }

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S8>/Constant3'
   *  Constant: '<S8>/Constant4'
   *  Integrator: '<S11>/Integrator1'
   *  Integrator: '<S11>/Integrator2'
   *  Product: '<S11>/Product2'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S11>/Sum1'
   */
  test3_B.Product_d = ((test3_B.HILRead_o3[1] - test3_X.Integrator1_CSTATE_h) -
                       test3_X.Integrator2_CSTATE_i * test3_P.Constant_Value_l *
                       test3_P.Constant3_Value) * test3_P.Constant4_Value;

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S8>/Constant4'
   *  Integrator: '<S11>/Integrator2'
   */
  test3_B.Product1_i = test3_P.Constant4_Value * test3_X.Integrator2_CSTATE_i;

  /* Integrator: '<S12>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_gg != 0) {
    test3_X.Integrator1_CSTATE_b = test3_B.HILRead_o3[2];
  }

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S8>/Constant5'
   *  Constant: '<S8>/Constant6'
   *  Integrator: '<S12>/Integrator1'
   *  Integrator: '<S12>/Integrator2'
   *  Product: '<S12>/Product2'
   *  Sum: '<S12>/Sum'
   *  Sum: '<S12>/Sum1'
   */
  test3_B.Product_m = ((test3_B.HILRead_o3[2] - test3_X.Integrator1_CSTATE_b) -
                       test3_X.Integrator2_CSTATE_c * test3_P.Constant_Value_i *
                       test3_P.Constant5_Value) * test3_P.Constant6_Value;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S8>/Constant6'
   *  Integrator: '<S12>/Integrator2'
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

  /* Integrator: '<S13>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_l != 0) {
    test3_X.Integrator1_CSTATE_n = test3_B.Unwrap21;
  }

  /* Product: '<S13>/Product' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S8>/Constant7'
   *  Constant: '<S8>/Constant8'
   *  Integrator: '<S13>/Integrator1'
   *  Integrator: '<S13>/Integrator2'
   *  Product: '<S13>/Product2'
   *  Sum: '<S13>/Sum'
   *  Sum: '<S13>/Sum1'
   */
  test3_B.Product_b = ((test3_B.Unwrap21 - test3_X.Integrator1_CSTATE_n) -
                       test3_X.Integrator2_CSTATE_f * test3_P.Constant_Value_e *
                       test3_P.Constant7_Value) * test3_P.Constant8_Value;

  /* Product: '<S14>/Product' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S8>/Constant10'
   *  Constant: '<S8>/Constant9'
   *  Integrator: '<S14>/Integrator2'
   *  Product: '<S14>/Product2'
   *  Sum: '<S14>/Sum'
   *  Sum: '<S14>/Sum1'
   */
  test3_B.Product_e = ((test3_B.analogpower - test3_B.Integrator1) -
                       test3_X.Integrator2_CSTATE_m * test3_P.Constant_Value_j *
                       test3_P.Constant9_Value_f) * test3_P.Constant10_Value_f;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S8>/Constant10'
   *  Integrator: '<S14>/Integrator2'
   */
  test3_B.Product1_b = test3_P.Constant10_Value_f * test3_X.Integrator2_CSTATE_m;

  /* Product: '<S15>/Product' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S8>/Constant11'
   *  Constant: '<S8>/Constant12'
   *  Integrator: '<S15>/Integrator2'
   *  Product: '<S15>/Product2'
   *  Sum: '<S15>/Sum'
   *  Sum: '<S15>/Sum1'
   */
  test3_B.Product_p = ((test3_B.Unwrap22 - test3_B.Integrator1_g) -
                       test3_X.Integrator2_CSTATE_b * test3_P.Constant_Value_n *
                       test3_P.Constant11_Value) * test3_P.Constant12_Value;

  /* Product: '<S15>/Product1' incorporates:
   *  Constant: '<S8>/Constant12'
   *  Integrator: '<S15>/Integrator2'
   */
  test3_B.Product1_g = test3_P.Constant12_Value * test3_X.Integrator2_CSTATE_b;

  /* Gain: '<S16>/Gain3' incorporates:
   *  Gain: '<S16>/Gain1'
   *  Gain: '<S16>/Gain2'
   *  Gain: '<S16>/Gain4'
   */
  test3_B.Gain3 = test3_P.Gain1_Gain * test3_B.Product1_p * test3_P.Gain4_Gain *
    test3_P.Gain2_Gain * test3_P.Gain3_Gain;

  /* Integrator: '<S3>/Integrator5' */
  test3_B.Integrator5 = test3_X.Integrator5_CSTATE;

  /* Integrator: '<S4>/Integrator6' */
  test3_B.Integrator6 = test3_X.Integrator6_CSTATE;

  /* Clock: '<Root>/Clock' */
  rtb_Clock = test3_M->Timing.t[0];

  /* SignalConversion generated from: '<S1>/ SFunction ' incorporates:
   *  Integrator: '<Root>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  MATLAB Function: '<Root>/MATLAB Function2'
   *  SignalConversion generated from: '<S2>/ SFunction '
   */
  expl_temp.x0[0] = test3_B.Integrator5;
  expl_temp.x0[1] = test3_B.Integrator6;
  expl_temp.x0[2] = test3_B.Integrator;
  expl_temp.x0[3] = test3_X.Integrator3_CSTATE;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  test3_DW.sfEvent_g = test3_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:90' */
  /* '<S1>:1:68' */
  /* '<S1>:1:91' */
  /* '<S1>:1:69' */
  /* '<S1>:1:68' */
  /* '<S1>:1:69' */
  /* '<S1>:1:86' */
  test3_emxInit_real_T(&horizon_idx, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  didZcEventOccur = rtIsNaN(rtb_Clock);
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
  test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
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

  /* '<S1>:1:87' */
  /* '<S1>:1:90' */
  /* '<S1>:1:91' */
  /* '<S1>:1:97' */
  /* '<S1>:1:100' */
  test3_emxInit_real_T(&lb, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_0 = horizon_idx->size[1] << 1;
  tmp_1 = lb->size[0];
  lb->size[0] = tmp_0;
  test3_emxEnsureCapacity_real_T(lb, tmp_1);
  ntilerows = horizon_idx->size[1];
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = nm1d2 << 1;
    lb->data[ibcol] = -0.4;
    lb->data[ibcol + 1] = -0.2;
  }

  /* '<S1>:1:101' */
  test3_emxInit_real_T(&ub, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = ub->size[0];
  ub->size[0] = tmp_0;
  test3_emxEnsureCapacity_real_T(ub, tmp_1);
  ntilerows = horizon_idx->size[1];

  /* '<S1>:1:110' */
  /* '<S1>:1:111' */
  /* '<S1>:1:114' */
  expl_temp.N = horizon_idx->size[1];
  test3_emxInit_real_T(&c, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = c->size[0] * c->size[1];
  c->size[0] = 4;
  c->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(c, tmp_1);
  test3_emxInit_real_T(&d, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = d->size[0] * d->size[1];
  d->size[0] = 2;
  d->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(d, tmp_1);
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

  test3_emxInit_real_T(&tmp, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_1 = tmp->size[0];
  tmp->size[0] = tmp_0;
  test3_emxEnsureCapacity_real_T(tmp, tmp_1);
  if (tmp_0 - 1 >= 0) {
    memset(&tmp->data[0], 0, (uint32_T)tmp_0 * sizeof(real_T));
  }

  test3_emxInit_real_T(&u_opt, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  SignalConversion generated from: '<S1>/ SFunction '
   */
  test3_fmincon(expl_temp.x0, c, d, (real_T)horizon_idx->size[1], tmp, lb, ub,
                expl_temp, u_opt);
  test3_emxFree_real_T(&c);
  test3_emxFree_real_T(&ub);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Integrator: '<Root>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  SignalConversion generated from: '<S1>/ SFunction '
   */
  /* '<S1>:1:117' */
  /* '<S1>:1:118' */
  test3_DW.sfEvent = test3_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function2': '<S2>:1' */
  /* '<S2>:1:58' */
  /* '<S2>:1:40' */
  /* '<S2>:1:61' */
  /* '<S2>:1:40' */
  /* '<S2>:1:49' */
  /* '<S2>:1:53' */
  for (ntilerows = 0; ntilerows < 29; ntilerows++) {
    /* '<S2>:1:56' */
    /* '<S2>:1:58' */
    ibcol = ntilerows << 1;
    ndbl = d_1[ibcol + 1];
    apnd = d_1[ibcol];
    wref[ibcol] = ndbl * -0.24748737341529164 + apnd * 0.70710678118654757;
    wref[ibcol + 1] = ndbl * 0.24748737341529164 + apnd * 0.70710678118654757;
  }

  /* '<S2>:1:61' */
  /* '<S2>:1:76' */
  b = fmin(rtb_Clock + 5.0, 29.0);
  if (didZcEventOccur) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (b < rtb_Clock) {
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 0;
  } else if ((rtIsInf(rtb_Clock) || rtIsInf(b)) && (rtb_Clock == b)) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
    horizon_idx->data[0] = (rtNaN);
  } else if (floor(rtb_Clock) == rtb_Clock) {
    tmp_1 = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    ntilerows = (int32_T)(b - rtb_Clock);
    horizon_idx->size[1] = ntilerows + 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, tmp_1);
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

  /* '<S2>:1:77' */
  /* '<S2>:1:80' */
  /* '<S2>:1:81' */
  /* '<S2>:1:87' */
  /* '<S2>:1:102' */
  /* '<S2>:1:103' */
  /* '<S2>:1:106' */
  expl_temp_0.N = horizon_idx->size[1];
  expl_temp_0.x0[0] = test3_B.Integrator5;
  expl_temp_0.x0[1] = test3_B.Integrator6;
  expl_temp_0.x0[2] = test3_B.Integrator;
  expl_temp_0.x0[3] = test3_X.Integrator3_CSTATE;
  tmp_0 = horizon_idx->size[1] << 1;
  tmp_1 = d->size[0] * d->size[1];
  d->size[0] = 2;
  d->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(d, tmp_1);
  ntilerows = horizon_idx->size[1];
  test3_emxInit_real_T(&wref_0, 2);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  SignalConversion generated from: '<S2>/ SFunction '
   */
  tmp_1 = wref_0->size[0] * wref_0->size[1];
  wref_0->size[0] = 2;
  wref_0->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(wref_0, tmp_1);
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
  test3_emxEnsureCapacity_real_T(tmp, tmp_1);
  if (tmp_0 - 1 >= 0) {
    memset(&tmp->data[0], 0, (uint32_T)tmp_0 * sizeof(real_T));
  }

  test3_fmincon_l(expl_temp.x0, d, wref_0, (real_T)horizon_idx->size[1], tmp,
                  expl_temp_0, lb);
  test3_emxFree_real_T(&wref_0);
  test3_emxFree_real_T(&tmp);
  test3_emxFree_real_T(&d);
  test3_emxFree_real_T(&horizon_idx);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Integrator: '<Root>/Integrator3'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  SignalConversion generated from: '<S1>/ SFunction '
   *  Trigonometry: '<S3>/Cos'
   *  Trigonometry: '<S4>/Sin'
   */
  /* '<S2>:1:109' */
  /* '<S2>:1:123' */
  ndbl = test3_B.Integrator + test3_X.Integrator3_CSTATE;
  rtb_Clock = sin(ndbl);

  /* '<S2>:1:123' */
  ndbl = cos(ndbl);

  /* '<S2>:1:124' */
  apnd = cos(test3_B.Integrator);
  cdiff = tan(test3_X.Integrator3_CSTATE);
  b = sin(test3_B.Integrator);
  x_idx_0 = apnd - (0.35 * rtb_Clock / 0.256 + b) * cdiff;
  x_idx_2 = -0.35 * rtb_Clock;
  x_idx_1 = (0.35 * ndbl / 0.256 + apnd) * cdiff + b;
  cdiff = 0.35 * ndbl;

  /* '<S2>:1:110' */
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

  /* '<S2>:1:113' */
  /* '<S2>:1:114' */
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
    x_idx_0 = u_opt->data[0];
  } else {
    x_idx_0 = a_idx_0 * lb->data[0] + x_idx_0 * lb->data[1];
  }

  /* Saturate: '<S9>/command saturation' incorporates:
   *  ManualSwitch: '<Root>/Up - NL, Down - FL 2'
   */
  if (x_idx_0 > test3_P.commandsaturation_UpperSat) {
    x_idx_0 = test3_P.commandsaturation_UpperSat;
  } else if (x_idx_0 < test3_P.commandsaturation_LowerSat) {
    x_idx_0 = test3_P.commandsaturation_LowerSat;
  }

  /* Product: '<S9>/Multiply1' incorporates:
   *  Saturate: '<S9>/command saturation'
   */
  test3_B.desired = x_idx_0 * test3_B.switch_l;

  /* Product: '<S9>/Multiply' */
  test3_B.measured = test3_B.Gain3 * test3_B.switch_l;

  /* Sum: '<S9>/Sum' */
  rtb_Clock = test3_B.desired - test3_B.measured;

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
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
  x_idx_0 = (test3_P.Kpms_Gain * rtb_Clock + test3_X.Integrator1_CSTATE_ng) +
    test3_P.Kffms_Gain * test3_B.desired;

  /* Saturate: '<S9>/command saturation1' */
  if (x_idx_0 > test3_P.commandsaturation1_UpperSat) {
    x_idx_0 = test3_P.commandsaturation1_UpperSat;
  } else if (x_idx_0 < test3_P.commandsaturation1_LowerSat) {
    x_idx_0 = test3_P.commandsaturation1_LowerSat;
  }

  /* Gain: '<S8>/direction convention' incorporates:
   *  Product: '<S9>/Multiply2'
   *  Saturate: '<S9>/command saturation1'
   */
  x_idx_0 = x_idx_0 * test3_B.switch_l * test3_P.directionconvention_Gain;

  /* Saturate: '<S8>/command saturation' */
  if (x_idx_0 > test3_P.commandsaturation_UpperSat_n) {
    /* Saturate: '<S8>/command saturation' */
    test3_B.commandsaturation = test3_P.commandsaturation_UpperSat_n;
  } else if (x_idx_0 < test3_P.commandsaturation_LowerSat_i) {
    /* Saturate: '<S8>/command saturation' */
    test3_B.commandsaturation = test3_P.commandsaturation_LowerSat_i;
  } else {
    /* Saturate: '<S8>/command saturation' */
    test3_B.commandsaturation = x_idx_0;
  }

  /* End of Saturate: '<S8>/command saturation' */

  /* Bias: '<S8>/Steering Bias' incorporates:
   *  Gain: '<S8>/Gain'
   *  Integrator: '<Root>/Integrator3'
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

  /* Product: '<S3>/Product' */
  test3_B.Product_f = apnd * test3_B.Gain3;

  /* Product: '<S4>/Product1' */
  test3_B.Product1_ij = b * test3_B.Gain3;

  /* ManualSwitch: '<Root>/Up - NL, Down - FL' */
  if (test3_P.UpNLDownFL_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Up - NL, Down - FL' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function'
     */
    test3_B.switch_o = u_opt->data[1];
  } else {
    /* ManualSwitch: '<Root>/Up - NL, Down - FL' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function2'
     */
    test3_B.switch_o = cdiff * lb->data[0] + ndbl * lb->data[1];
  }

  /* End of ManualSwitch: '<Root>/Up - NL, Down - FL' */
  test3_emxFree_real_T(&u_opt);
  test3_emxFree_real_T(&lb);
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<Root>/Unwrap 2^1' */
    /* S-Function Block: test3/Unwrap 2^1 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = test3_P.Unwrap21_Modulus_p / 2.0;
      real_T du, dy;
      if (test3_DW.Unwrap21_FirstSample_o) {
        test3_DW.Unwrap21_FirstSample_o = false;
        test3_DW.Unwrap21_PreviousInput_d = test3_B.switch_o;
      }

      du = (real_T) test3_B.switch_o - test3_DW.Unwrap21_PreviousInput_d;
      if (du > half_range) {
        test3_DW.Unwrap21_Revolutions_o = test3_DW.Unwrap21_Revolutions_o - 1;
        dy = du - test3_P.Unwrap21_Modulus_p;
      } else if (du < -half_range) {
        test3_DW.Unwrap21_Revolutions_o = test3_DW.Unwrap21_Revolutions_o + 1;
        dy = du + test3_P.Unwrap21_Modulus_p;
      } else {
        dy = du;
      }

      test3_B.Unwrap21_o = test3_B.switch_o + test3_DW.Unwrap21_Revolutions_o *
        test3_P.Unwrap21_Modulus_p;
      test3_DW.Unwrap21_PreviousInput_d = test3_B.switch_o;
    }
  }

  /* Integrator: '<S7>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_a != 0) {
    test3_X.Integrator1_CSTATE_me = test3_B.Unwrap21_o;
  }

  /* Integrator: '<S7>/Integrator1' */
  test3_B.Integrator1_f = test3_X.Integrator1_CSTATE_me;

  /* Product: '<S7>/Product' incorporates:
   *  Constant: '<Root>/Constant7'
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S7>/Constant'
   *  Integrator: '<S7>/Integrator2'
   *  Product: '<S7>/Product2'
   *  Sum: '<S7>/Sum'
   *  Sum: '<S7>/Sum1'
   */
  test3_B.Product_g = ((test3_B.Unwrap21_o - test3_B.Integrator1_f) -
                       test3_X.Integrator2_CSTATE_k * test3_P.Constant_Value_p *
                       test3_P.Constant7_Value_o) * test3_P.Constant8_Value_g;

  /* Product: '<S7>/Product1' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Integrator: '<S7>/Integrator2'
   */
  test3_B.Product1_b3 = test3_P.Constant8_Value_g * test3_X.Integrator2_CSTATE_k;
  if (rtmIsMajorTimeStep(test3_M)) {
  }

  /* Gain: '<S9>/Ki (% // m)  ' */
  test3_B.Kim = test3_P.Kim_Gain * rtb_Clock;
}

/* Model update function */
void test3_update(void)
{
  /* Update for Integrator: '<S14>/Integrator1' */
  test3_DW.Integrator1_IWORK = 0;

  /* Update for Integrator: '<S15>/Integrator1' */
  test3_DW.Integrator1_IWORK_i = 0;

  /* Update for Integrator: '<S10>/Integrator1' */
  test3_DW.Integrator1_IWORK_g = 0;

  /* Update for Integrator: '<S11>/Integrator1' */
  test3_DW.Integrator1_IWORK_d = 0;

  /* Update for Integrator: '<S12>/Integrator1' */
  test3_DW.Integrator1_IWORK_gg = 0;

  /* Update for Integrator: '<S13>/Integrator1' */
  test3_DW.Integrator1_IWORK_l = 0;

  /* Update for Integrator: '<S7>/Integrator1' */
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

  /* Derivatives for Integrator: '<S10>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = test3_B.Product;

  /* Derivatives for Integrator: '<S14>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = test3_B.Product1_b;

  /* Derivatives for Integrator: '<S15>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_m = test3_B.Product1_g;

  /* Derivatives for Integrator: '<S13>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_f = test3_B.Product_b;

  /* Derivatives for Integrator: '<S8>/Integrator' */
  _rtXdot->Integrator_CSTATE = test3_B.Integrator1_g;

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_p = test3_B.Product1;

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_h = test3_B.Product1_i;

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_i = test3_B.Product_d;

  /* Derivatives for Integrator: '<S12>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_b = test3_B.Product1_n;

  /* Derivatives for Integrator: '<S12>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_c = test3_B.Product_m;

  /* Derivatives for Integrator: '<S13>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n = test3_B.Product1_p;

  /* Derivatives for Integrator: '<S14>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_m = test3_B.Product_e;

  /* Derivatives for Integrator: '<S15>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_b = test3_B.Product_p;

  /* Derivatives for Integrator: '<S3>/Integrator5' */
  _rtXdot->Integrator5_CSTATE = test3_B.Product_f;

  /* Derivatives for Integrator: '<S4>/Integrator6' */
  _rtXdot->Integrator6_CSTATE = test3_B.Product1_ij;

  /* Derivatives for Integrator: '<Root>/Integrator3' */
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

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_me = test3_B.Product1_b3;

  /* Derivatives for Integrator: '<S7>/Integrator2' */
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

  /* Start for S-Function (inverse_modulus_block): '<Root>/Unwrap 2^1' */

  /* S-Function Block: test3/Unwrap 2^1 (inverse_modulus_block) */
  {
    test3_DW.Unwrap21_FirstSample_o = true;
    test3_DW.Unwrap21_Revolutions_o = 0;
  }

  test3_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Integrator: '<S10>/Integrator2' */
  test3_X.Integrator2_CSTATE = test3_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<S14>/Integrator1' incorporates:
   *  Integrator: '<S15>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE = 0.0;
    test3_X.Integrator1_CSTATE_m = 0.0;
  }

  test3_DW.Integrator1_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S14>/Integrator1' */

  /* InitializeConditions for Integrator: '<S15>/Integrator1' */
  test3_DW.Integrator1_IWORK_i = 1;

  /* InitializeConditions for Integrator: '<S13>/Integrator2' */
  test3_X.Integrator2_CSTATE_f = test3_P.Integrator2_IC_l;

  /* InitializeConditions for Integrator: '<S8>/Integrator' */
  test3_X.Integrator_CSTATE = test3_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S10>/Integrator1' incorporates:
   *  Integrator: '<S11>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_p = 0.0;
    test3_X.Integrator1_CSTATE_h = 0.0;
  }

  test3_DW.Integrator1_IWORK_g = 1;

  /* End of InitializeConditions for Integrator: '<S10>/Integrator1' */

  /* InitializeConditions for Integrator: '<S11>/Integrator1' */
  test3_DW.Integrator1_IWORK_d = 1;

  /* InitializeConditions for Integrator: '<S11>/Integrator2' */
  test3_X.Integrator2_CSTATE_i = test3_P.Integrator2_IC_j;

  /* InitializeConditions for Integrator: '<S12>/Integrator1' incorporates:
   *  Integrator: '<S13>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_b = 0.0;
    test3_X.Integrator1_CSTATE_n = 0.0;
  }

  test3_DW.Integrator1_IWORK_gg = 1;

  /* End of InitializeConditions for Integrator: '<S12>/Integrator1' */

  /* InitializeConditions for Integrator: '<S12>/Integrator2' */
  test3_X.Integrator2_CSTATE_c = test3_P.Integrator2_IC_d;

  /* InitializeConditions for Integrator: '<S13>/Integrator1' */
  test3_DW.Integrator1_IWORK_l = 1;

  /* InitializeConditions for Integrator: '<S14>/Integrator2' */
  test3_X.Integrator2_CSTATE_m = test3_P.Integrator2_IC_n;

  /* InitializeConditions for Integrator: '<S15>/Integrator2' */
  test3_X.Integrator2_CSTATE_b = test3_P.Integrator2_IC_h;

  /* InitializeConditions for Integrator: '<S3>/Integrator5' */
  test3_X.Integrator5_CSTATE = test3_P.Integrator5_IC;

  /* InitializeConditions for Integrator: '<S4>/Integrator6' */
  test3_X.Integrator6_CSTATE = test3_P.Integrator6_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator3' */
  test3_X.Integrator3_CSTATE = test3_P.Integrator3_IC;

  /* InitializeConditions for Integrator: '<S9>/Integrator1' */
  test3_X.Integrator1_CSTATE_ng = test3_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<S7>/Integrator1' */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_me = 0.0;
  }

  test3_DW.Integrator1_IWORK_a = 1;

  /* End of InitializeConditions for Integrator: '<S7>/Integrator1' */

  /* InitializeConditions for Integrator: '<S7>/Integrator2' */
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
  test3_M->Sizes.checksums[0] = (1769558141U);
  test3_M->Sizes.checksums[1] = (2967582189U);
  test3_M->Sizes.checksums[2] = (1886176119U);
  test3_M->Sizes.checksums[3] = (3906667687U);

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
  test3_M->Sizes.numBlocks = (132);    /* Number of blocks */
  test3_M->Sizes.numBlockIO = (42);    /* Number of block outputs */
  test3_M->Sizes.numBlockPrms = (176); /* Sum of parameter "widths" */
  return test3_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
