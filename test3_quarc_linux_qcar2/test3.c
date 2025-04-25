/*
 * test3.c
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

#include "test3.h"
#include "rtwtypes.h"
#include "test3_types.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>
#include "test3_private.h"
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
static void test3_emxInit_int32_T(emxArray_int32_T_test3_T **pEmxArray, int32_T
  numDimensions);
static void emxInitStruct_s_PLLLBDg14rHiR3q(s_PLLLBDg14rHiR3qEakQweE_test_T
  *pStruct);
static void test3_emxEnsureCapacity_int32_T(emxArray_int32_T_test3_T *emxArray,
  int32_T oldNumel);
static void test3_factoryConstruct(int32_T nVarMax, int32_T mConstrMax, const
  emxArray_real_T_test3_T *x0, s_PLLLBDg14rHiR3qEakQweE_test_T *obj);
static void emxInitStruct_s_IhzSggsSakhYrqT(s_IhzSggsSakhYrqTLyRPh4_test3_T
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
static void emxInitStruct_s_ZbRibKlg6Coahma(s_ZbRibKlg6CoahmaZOjRYjD_test_T
  *pStruct);
static void tes_emxEnsureCapacity_boolean_T(emxArray_boolean_T_test3_T *emxArray,
  int32_T oldNumel);
static void test3_factoryConstruct_i(const real_T objfun_workspace_x0[3], const
  emxArray_real_T_test3_T *objfun_workspace_xref, const emxArray_real_T_test3_T *
  objfun_workspace_uref, real_T objfun_workspace_N, int32_T nVar, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_ZbRibKlg6CoahmaZOjRYjD_test_T *obj);
static void emxInitStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *pStruct);
static void emxInitStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_test_T
  *pStruct);
static void emxInitStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *pStruct);
static void emxInitStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *pStruct);
static void emxInitStruct_s_k8kXP0ntDjd4qxs(s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *pStruct);
static void test3_factoryConstruct_ir(int32_T nVar, int32_T nVarMax, int32_T
  mConstrMax, s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj);
static void test3_compressBounds(int32_T nVar, emxArray_int32_T_test3_T *indexLB,
  emxArray_int32_T_test3_T *indexUB, emxArray_int32_T_test3_T *indexFixed, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub, int32_T *mLB,
  int32_T *mUB, int32_T *mFixed);
static void test3_binary_expand_op(real_T in1[2], const emxArray_real_T_test3_T *
  in2, int32_T in3, int32_T in4, const emxArray_real_T_test3_T *in5, int32_T in6);
static void test3_emxFree_real_T(emxArray_real_T_test3_T **pEmxArray);
static real_T test3_eML_blk_kernel_anonFcn1(const real_T x0[3], const
  emxArray_real_T_test3_T *xref, const emxArray_real_T_test3_T *uref, real_T N,
  const emxArray_real_T_test3_T *u);
static boolean_T test3_computeFiniteDifferences(s_ZbRibKlg6CoahmaZOjRYjD_test_T *
  obj, real_T fCurrent, emxArray_real_T_test3_T *xk, emxArray_real_T_test3_T
  *gradf, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub);
static void test3_modifyOverheadPhaseOne_(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj);
static void test3_setProblemType(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj, int32_T
  PROBLEM_TYPE);
static void test3_computeGradLag(emxArray_real_T_test3_T *workspace, int32_T
  nVar, const emxArray_real_T_test3_T *grad, const emxArray_int32_T_test3_T
  *finiteFixed, int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB,
  int32_T mLB, const emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const
  emxArray_real_T_test3_T *lambda);
static void test3_computeDualFeasError(int32_T nVar, const
  emxArray_real_T_test3_T *gradLag, boolean_T *gradOK, real_T *val);
static void test3_test_exit(sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  const s_k8kXP0ntDjd4qxsrByEVbG_test_T *WorkingSet,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, const emxArray_real_T_test3_T *lb,
  const emxArray_real_T_test3_T *ub, int32_T runTimeOptions_MaxFunctionEvalu,
  boolean_T *Flags_gradOK, boolean_T *Flags_fevalOK, boolean_T *Flags_done,
  boolean_T *Flags_stepAccepted, boolean_T *Flags_failedLineSearch, int32_T
  *Flags_stepType);
static real_T test3_computeComplError(const emxArray_real_T_test3_T *xCurrent,
  const emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const
  emxArray_real_T_test3_T *lb, const emxArray_int32_T_test3_T *finiteUB, int32_T
  mUB, const emxArray_real_T_test3_T *ub, const emxArray_real_T_test3_T *lambda,
  int32_T iL0);
static void test3_computeGradLag_l(emxArray_real_T_test3_T *workspace, int32_T
  nVar, const emxArray_real_T_test3_T *grad, const emxArray_int32_T_test3_T
  *finiteFixed, int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB,
  int32_T mLB, const emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const
  emxArray_real_T_test3_T *lambda);
static real_T test3_xnrm2(int32_T n, const emxArray_real_T_test3_T *x, int32_T
  ix0);
static real_T test3_xzlarfg(int32_T n, real_T *alpha1, emxArray_real_T_test3_T
  *x, int32_T ix0);
static void test3_xgemv(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T ia0, int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
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
static void test3_xgemv_b(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y);
static void test3_sortLambdaQP(emxArray_real_T_test3_T *lambda, int32_T
  WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
  WorkingSet_isActiveIdx[6], const emxArray_int32_T_test3_T *WorkingSet_Wid,
  const emxArray_int32_T_test3_T *WorkingSet_Wlocalidx, emxArray_real_T_test3_T *
  workspace);
static void test3_test_exit_k(s7RdrPWkr8UPAUyTdDJkLaG_test3_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const s_k8kXP0ntDjd4qxsrByEVbG_test_T *WorkingSet,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *QRManager, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T
  *ub, int32_T runTimeOptions_MaxFunctionEvalu);
static boolean_T test3_BFGSUpdate(int32_T nvar, emxArray_real_T_test3_T *Bk,
  const emxArray_real_T_test3_T *sk, emxArray_real_T_test3_T *yk,
  emxArray_real_T_test3_T *workspace);
static void test3_emxCopy_real_T_0(emxArray_real_T_0_test3_T *dst, const
  emxArray_real_T_0_test3_T *src);
static void test3_emxCopy_real_T(emxArray_real_T_test3_T **dst,
  emxArray_real_T_test3_T * const *src);
static void test3_emxCopy_int32_T(emxArray_int32_T_test3_T **dst,
  emxArray_int32_T_test3_T * const *src);
static void test3_emxCopyMatrix_int32_T1(int32_T dst[5], const int32_T src[5]);
static void test3_emxCopyMatrix_int32_T2(int32_T dst[6], const int32_T src[6]);
static void test3_emxCopy_boolean_T(emxArray_boolean_T_test3_T **dst,
  emxArray_boolean_T_test3_T * const *src);
static void emxCopyStruct_s_k8kXP0ntDjd4qxs(s_k8kXP0ntDjd4qxsrByEVbG_test_T *dst,
  const s_k8kXP0ntDjd4qxsrByEVbG_test_T *src);
static void test3_countsort(emxArray_int32_T_test3_T *x, int32_T xLen,
  emxArray_int32_T_test3_T *workspace, int32_T xMin, int32_T xMax);
static void test3_removeConstr(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj, int32_T
  idx_global);
static void test3_factorQR(s_l1Gll5dfO9DpqQrvRqAf7E_test_T *obj, const
  emxArray_real_T_test3_T *A, int32_T mrows, int32_T ncols, int32_T ldA);
static boolean_T test3_feasibleX0ForWorkingSet(emxArray_real_T_test3_T
  *workspace, emxArray_real_T_test3_T *xCurrent, const
  s_k8kXP0ntDjd4qxsrByEVbG_test_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *qrmanager);
static real_T test3_maxConstraintViolation(const s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *obj, const emxArray_real_T_test3_T *x);
static void test3_PresolveWorkingSet(s_PLLLBDg14rHiR3qEakQweE_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager);
static void test3_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
  emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, const emxArray_real_T_test3_T *x);
static real_T test3_computeFval(const s_saWPFfMboRdWeRqIEJ4x8C_test_T *obj,
  emxArray_real_T_test3_T *workspace, const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, const emxArray_real_T_test3_T *x);
static void test3_xgemv_bu(int32_T m, int32_T n, const emxArray_real_T_test3_T
  *A, int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y);
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
static void test3_xgemv_buj(int32_T m, int32_T n, const emxArray_real_T_test3_T *
  A, int32_T ia0, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y);
static void test3_solve(const s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj,
  emxArray_real_T_test3_T *rhs);
static void test3_factor(s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj, const
  emxArray_real_T_test3_T *A, int32_T ndims, int32_T ldA);
static void test3_solve_k(const s_vdGXtauKr5HuLAqoxBLhXH_test_T *obj,
  emxArray_real_T_test3_T *rhs);
static void test3_compute_deltax(const emxArray_real_T_test3_T *H,
  s_PLLLBDg14rHiR3qEakQweE_test_T *solution, s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *memspace, const s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, const
  s_saWPFfMboRdWeRqIEJ4x8C_test_T *objective, boolean_T alwaysPositiveDef);
static real_T test3_xnrm2_a(int32_T n, const emxArray_real_T_test3_T *x);
static void test3_feasibleratiotest(const emxArray_real_T_test3_T
  *solution_xstar, const emxArray_real_T_test3_T *solution_searchDir, int32_T
  workingset_nVar, const emxArray_real_T_test3_T *workingset_lb, const
  emxArray_real_T_test3_T *workingset_ub, const emxArray_int32_T_test3_T
  *workingset_indexLB, const emxArray_int32_T_test3_T *workingset_indexUB, const
  int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_test3_T *workingset_isActiveConstr, const int32_T
  workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
  *newBlocking, int32_T *constrType, int32_T *constrIdx);
static void test_addBoundToActiveSetMatrix_(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj,
  int32_T TYPE, int32_T idx_local);
static void test3_iterate(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_PLLLBDg14rHiR3qEakQweE_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, const char_T options_SolverName[7], real_T options_StepTolerance,
  real_T options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
static void test3_emxFree_int32_T(emxArray_int32_T_test3_T **pEmxArray);
static void test3_emxFree_boolean_T(emxArray_boolean_T_test3_T **pEmxArray);
static void emxFreeStruct_s_k8kXP0ntDjd4qxs(s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *pStruct);
static void test3_driver_d(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_PLLLBDg14rHiR3qEakQweE_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, somzaGboVhDG7PNQS6E98jD_test3_T *options, int32_T
  runTimeOptions_MaxIterations);
static void test3_relaxed(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions);
static boolean_T test3_step_o(int32_T *STEP_TYPE, emxArray_real_T_test3_T
  *Hessian, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace,
  s_k8kXP0ntDjd4qxsrByEVbG_test_T *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *QRManager, s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager,
  s_saWPFfMboRdWeRqIEJ4x8C_test_T *QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *
  qpoptions);
static void test3_evalObjAndConstr(const s_IhzSggsSakhYrqTLyRPh4_test3_T
  obj_next_next_next_next_next_ne, const emxArray_real_T_test3_T *x, real_T
  *fval, int32_T *status);
static void test3_driver(emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const coder_internal_stickyStruct_9_T *FcnEvaluator,
  s_ZbRibKlg6CoahmaZOjRYjD_test_T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, int32_T runTimeOptions_MaxFunctionEvalu);
static void emxFreeStruct_s_pIaUYPkQBTqVmAK(s_pIaUYPkQBTqVmAKxFPiGQF_test_T
  *pStruct);
static void emxFreeStruct_s_saWPFfMboRdWeRq(s_saWPFfMboRdWeRqIEJ4x8C_test_T
  *pStruct);
static void emxFreeStruct_s_vdGXtauKr5HuLAq(s_vdGXtauKr5HuLAqoxBLhXH_test_T
  *pStruct);
static void emxFreeStruct_s_l1Gll5dfO9DpqQr(s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *pStruct);
static void emxFreeStruct_s_IhzSggsSakhYrqT(s_IhzSggsSakhYrqTLyRPh4_test3_T
  *pStruct);
static void emxFreeStruct_anonymous_functio(anonymous_function_test3_T *pStruct);
static void emxFreeStruct_s_ZbRibKlg6Coahma(s_ZbRibKlg6CoahmaZOjRYjD_test_T
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
static void emxFreeStruct_s_PLLLBDg14rHiR3q(s_PLLLBDg14rHiR3qEakQweE_test_T
  *pStruct);
static void test3_fmincon(const real_T fun_workspace_x0[3], const
  emxArray_real_T_test3_T *fun_workspace_xref, const emxArray_real_T_test3_T
  *fun_workspace_uref, real_T fun_workspace_N, const emxArray_real_T_test3_T *x0,
  const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
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
  int_T nXc = 16;
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

static void emxInitStruct_s_PLLLBDg14rHiR3q(s_PLLLBDg14rHiR3qEakQweE_test_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->xstarsqp, 1);
  test3_emxInit_real_T(&pStruct->xstarsqp_old, 1);
  test3_emxInit_real_T(&pStruct->grad, 1);
  test3_emxInit_real_T(&pStruct->grad_old, 1);
  test3_emxInit_real_T(&pStruct->lambdasqp, 1);
  test3_emxInit_real_T(&pStruct->lambdaStopTest, 1);
  test3_emxInit_real_T(&pStruct->lambdaStopTestPrev, 1);
  test3_emxInit_real_T(&pStruct->delta_x, 1);
  test3_emxInit_real_T(&pStruct->socDirection, 1);
  test3_emxInit_int32_T(&pStruct->workingset_old, 1);
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
static void test3_factoryConstruct(int32_T nVarMax, int32_T mConstrMax, const
  emxArray_real_T_test3_T *x0, s_PLLLBDg14rHiR3qEakQweE_test_T *obj)
{
  int32_T i;
  obj->nVarMax = nVarMax;
  obj->mNonlinIneq = 0;
  obj->mNonlinEq = 0;
  obj->mIneq = 0;
  obj->mEq = 0;
  obj->iNonIneq0 = 1;
  obj->iNonEq0 = 1;
  obj->sqpFval = 0.0;
  obj->sqpFval_old = 0.0;
  i = obj->xstarsqp->size[0];
  obj->xstarsqp->size[0] = x0->size[0];
  test3_emxEnsureCapacity_real_T(obj->xstarsqp, i);
  i = obj->xstarsqp_old->size[0];
  obj->xstarsqp_old->size[0] = x0->size[0];
  test3_emxEnsureCapacity_real_T(obj->xstarsqp_old, i);
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

static void emxInitStruct_s_IhzSggsSakhYrqT(s_IhzSggsSakhYrqTLyRPh4_test3_T
  *pStruct)
{
  test3_emxInit_real_T(&pStruct->xref, 2);
  test3_emxInit_real_T(&pStruct->uref, 2);
}

static void emxInitStruct_anonymous_functio(anonymous_function_test3_T *pStruct)
{
  emxInitStruct_s_IhzSggsSakhYrqT(&pStruct->workspace);
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

static void emxInitStruct_s_ZbRibKlg6Coahma(s_ZbRibKlg6CoahmaZOjRYjD_test_T
  *pStruct)
{
  emxInitStruct_anonymous_functio(&pStruct->objfun);
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
static void test3_factoryConstruct_i(const real_T objfun_workspace_x0[3], const
  emxArray_real_T_test3_T *objfun_workspace_xref, const emxArray_real_T_test3_T *
  objfun_workspace_uref, real_T objfun_workspace_N, int32_T nVar, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_ZbRibKlg6CoahmaZOjRYjD_test_T *obj)
{
  int32_T idx;
  int32_T loop_ub;
  boolean_T d;
  obj->objfun.workspace.x0[0] = objfun_workspace_x0[0];
  obj->objfun.workspace.x0[1] = objfun_workspace_x0[1];
  obj->objfun.workspace.x0[2] = objfun_workspace_x0[2];
  idx = obj->objfun.workspace.xref->size[0] * obj->objfun.workspace.xref->size[1];
  obj->objfun.workspace.xref->size[0] = 3;
  obj->objfun.workspace.xref->size[1] = objfun_workspace_xref->size[1];
  test3_emxEnsureCapacity_real_T(obj->objfun.workspace.xref, idx);
  loop_ub = 3 * objfun_workspace_xref->size[1];
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
  obj->f_1 = 0.0;
  obj->f_2 = 0.0;
  obj->nVar = nVar;
  obj->mIneq = 0;
  obj->mEq = 0;
  obj->numEvals = 0;
  obj->SpecifyObjectiveGradient = false;
  obj->SpecifyConstraintGradient = false;
  obj->isEmptyNonlcon = true;
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

static void emxInitStruct_s_k8kXP0ntDjd4qxs(s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *pStruct)
{
  pStruct->Aineq.size = 0;
  pStruct->Aeq.size = 0;
  test3_emxInit_real_T(&pStruct->lb, 1);
  test3_emxInit_real_T(&pStruct->ub, 1);
  test3_emxInit_int32_T(&pStruct->indexLB, 1);
  test3_emxInit_int32_T(&pStruct->indexUB, 1);
  test3_emxInit_int32_T(&pStruct->indexFixed, 1);
  test3_emxInit_real_T(&pStruct->ATwset, 1);
  test3_emxInit_real_T(&pStruct->bwset, 1);
  test3_emxInit_real_T(&pStruct->maxConstrWorkspace, 1);
  test3_emxInit_boolean_T(&pStruct->isActiveConstr, 1);
  test3_emxInit_int32_T(&pStruct->Wid, 1);
  test3_emxInit_int32_T(&pStruct->Wlocalidx, 1);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_factoryConstruct_ir(int32_T nVar, int32_T nVarMax, int32_T
  mConstrMax, s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj)
{
  int32_T i;
  obj->mConstr = 0;
  obj->mConstrOrig = 0;
  obj->mConstrMax = mConstrMax;
  obj->nVar = nVar;
  obj->nVarOrig = nVar;
  obj->nVarMax = nVarMax;
  obj->ldA = nVarMax;
  obj->Aineq.size = 0;
  obj->Aeq.size = 0;
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
static real_T test3_eML_blk_kernel_anonFcn1(const real_T x0[3], const
  emxArray_real_T_test3_T *xref, const emxArray_real_T_test3_T *uref, real_T N,
  const emxArray_real_T_test3_T *u)
{
  emxArray_real_T_test3_T *x;
  real_T err_x[3];
  real_T err_u[2];
  real_T d;
  real_T varargout_1;
  real_T x_0;
  real_T x_1;
  int32_T b;
  int32_T e;
  int32_T f;
  int32_T k;
  int32_T loop_ub;
  uint32_T c;
  static const int16_T y[9] = { 10000, 0, 0, 0, 10000, 0, 0, 0, 1 };

  static const real_T b_y[9] = { 1000.0, 0.0, 0.0, 0.0, 1000.0, 0.0, 0.0, 0.0,
    0.1 };

  int32_T d_tmp;
  int32_T x_tmp;
  int32_T x_tmp_0;

  /* '<S1>:1:102' */
  /* '<S1>:1:106' */
  /* '<S1>:1:110' */
  /* '<S1>:1:96' */
  test3_emxInit_real_T(&x, 2);
  loop_ub = x->size[0] * x->size[1];
  x->size[0] = 3;
  x->size[1] = (int32_T)(N + 1.0);
  test3_emxEnsureCapacity_real_T(x, loop_ub);
  loop_ub = (int32_T)(N + 1.0) * 3;
  if (loop_ub - 1 >= 0) {
    memset(&x->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  /* '<S1>:1:97' */
  x->data[0] = x0[0];
  x->data[1] = x0[1];
  x->data[2] = x0[2];

  /* '<S1>:1:98' */
  varargout_1 = 0.0;
  b = (int32_T)N;

  /* '<S1>:1:100' */
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

    /* '<S1>:1:101' */
    /* '<S1>:1:102' */
    /* '<S1>:1:130' */
    d_tmp = 3 * k + 2;
    d = x->data[d_tmp];
    x_tmp_0 = 3 * k + 1;
    x_0 = x->data[x_tmp_0];
    x_tmp = 3 * k;
    x_1 = x->data[x_tmp];
    loop_ub = (k + 1) * 3;
    x->data[loop_ub] = u->data[f] * cos(d) * 0.1 + x_1;
    x->data[1 + loop_ub] = u->data[f] * sin(d) * 0.1 + x_0;
    x->data[2 + loop_ub] = u->data[f] / 0.256 * tan(u->data[f + 1]) * 0.1 + d;

    /* '<S1>:1:104' */
    err_x[0] = x_1 - xref->data[x_tmp];
    err_x[1] = x_0 - xref->data[x_tmp_0];
    err_x[2] = d - xref->data[d_tmp];

    /* '<S1>:1:105' */
    loop_ub = e - f;
    if (loop_ub == 2) {
      for (e = 0; e < loop_ub; e++) {
        err_u[e] = u->data[f + e] - uref->data[(k << 1) + e];
      }
    } else {
      test3_binary_expand_op(err_u, u, f, e - 1, uref, k);
    }

    /* '<S1>:1:106' */
    d = 0.0;
    for (e = 0; e < 3; e++) {
      d += ((b_y[3 * e + 1] * err_x[1] + b_y[3 * e] * err_x[0]) + b_y[3 * e + 2]
            * err_x[2]) * err_x[e];
    }

    varargout_1 = ((err_u[0] * 2.0 + err_u[1] * 0.0) * err_u[0] + (err_u[0] *
      0.0 + err_u[1] * 2.0) * err_u[1]) + (varargout_1 + d);
  }

  /* '<S1>:1:109' */
  err_x[0] = x->data[(x->size[1] - 1) * 3] - xref->data[(xref->size[1] - 1) * 3];
  err_x[1] = x->data[(x->size[1] - 1) * 3 + 1] - xref->data[(xref->size[1] - 1) *
    3 + 1];
  err_x[2] = x->data[(x->size[1] - 1) * 3 + 2] - xref->data[(xref->size[1] - 1) *
    3 + 2];
  test3_emxFree_real_T(&x);

  /* '<S1>:1:110' */
  d = 0.0;
  for (e = 0; e < 3; e++) {
    d += (((real_T)y[3 * e + 1] * err_x[1] + (real_T)y[3 * e] * err_x[0]) +
          (real_T)y[3 * e + 2] * err_x[2]) * err_x[e];
  }

  varargout_1 += d;
  return varargout_1;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T test3_computeFiniteDifferences(s_ZbRibKlg6CoahmaZOjRYjD_test_T *
  obj, real_T fCurrent, emxArray_real_T_test3_T *xk, emxArray_real_T_test3_T
  *gradf, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub)
{
  emxArray_real_T_test3_T *b_xk;
  real_T deltaX;
  real_T tmp;
  real_T ubDiff;
  int32_T b_idx;
  int32_T loop_ub;
  boolean_T evalOK;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T modifiedStep;
  boolean_T tmp_0;
  evalOK = true;
  obj->numEvals = 0;
  b_idx = 0;
  test3_emxInit_real_T(&b_xk, 1);
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

    loop_ub = b_xk->size[0];
    b_xk->size[0] = xk->size[0];
    test3_emxEnsureCapacity_real_T(b_xk, loop_ub);
    loop_ub = xk->size[0];
    if (loop_ub - 1 >= 0) {
      memcpy(&b_xk->data[0], &xk->data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    b_xk->data[b_idx] = xk->data[b_idx] + deltaX;
    ubDiff = test3_eML_blk_kernel_anonFcn1(obj->objfun.workspace.x0,
      obj->objfun.workspace.xref, obj->objfun.workspace.uref,
      obj->objfun.workspace.N, b_xk);
    evalOK = ((!rtIsInf(ubDiff)) && (!rtIsNaN(ubDiff)));
    tmp_0 = !evalOK;
    if (!tmp_0) {
      b_xk->data[b_idx] = xk->data[b_idx];
    }

    obj->f_1 = ubDiff;
    loop_ub = xk->size[0];
    xk->size[0] = b_xk->size[0];
    test3_emxEnsureCapacity_real_T(xk, loop_ub);
    loop_ub = b_xk->size[0];
    if (loop_ub - 1 >= 0) {
      memcpy(&xk->data[0], &b_xk->data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    obj->numEvals++;
    guard1 = false;
    if (tmp_0) {
      if (!modifiedStep) {
        deltaX = -deltaX;
        if (obj->hasLB->data[b_idx]) {
          tmp = b_xk->data[b_idx] + deltaX;
          if ((tmp >= lb->data[b_idx]) && obj->hasUB->data[b_idx] && (tmp <=
               ub->data[b_idx])) {
            modifiedStep = true;
          }
        }

        if ((!obj->hasBounds) || modifiedStep) {
          xk->data[b_idx] = b_xk->data[b_idx] + deltaX;
          ubDiff = test3_eML_blk_kernel_anonFcn1(obj->objfun.workspace.x0,
            obj->objfun.workspace.xref, obj->objfun.workspace.uref,
            obj->objfun.workspace.N, xk);
          evalOK = ((!rtIsInf(ubDiff)) && (!rtIsNaN(ubDiff)));
          if (evalOK) {
            xk->data[b_idx] = b_xk->data[b_idx];
          }

          obj->f_1 = ubDiff;
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
      b_idx++;
    }
  }

  test3_emxFree_real_T(&b_xk);
  return evalOK;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_modifyOverheadPhaseOne_(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj)
{
  int32_T c;
  int32_T idx;
  int32_T idxStartIneq;
  idxStartIneq = obj->sizes[0];
  for (idx = 0; idx < idxStartIneq; idx++) {
    obj->ATwset->data[(obj->nVar + obj->ldA * idx) - 1] = 0.0;
  }

  obj->indexLB->data[obj->sizes[3] - 1] = obj->nVar;
  obj->lb->data[obj->nVar - 1] = 1.0E-5;
  idxStartIneq = obj->isActiveIdx[2];
  c = obj->nActiveConstr;
  for (idx = idxStartIneq; idx <= c; idx++) {
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
static void test3_setProblemType(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj, int32_T
  PROBLEM_TYPE)
{
  int32_T c;
  int32_T colOffsetATw;
  int32_T d;
  int32_T e;
  int32_T e_tmp;
  int32_T idxStartIneq;
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
      offsetIneq_tmp = obj->nVarOrig + 1;
      c = obj->sizes[0];
      for (offsetIneq = 0; offsetIneq < c; offsetIneq++) {
        colOffsetATw = obj->ldA * offsetIneq;
        e = obj->nVar;
        for (idxStartIneq = offsetIneq_tmp; idxStartIneq <= e; idxStartIneq++) {
          obj->ATwset->data[(idxStartIneq + colOffsetATw) - 1] = 0.0;
        }
      }

      offsetIneq = obj->nVarOrig;
      idxStartIneq = obj->sizesNormal[3] + 1;
      c = obj->sizesRegularized[3];
      for (colOffsetATw = idxStartIneq; colOffsetATw <= c; colOffsetATw++) {
        offsetIneq++;
        obj->indexLB->data[colOffsetATw - 1] = offsetIneq;
      }

      if (obj->nWConstr[4] > 0) {
        offsetIneq = obj->sizesRegularized[4];
        for (colOffsetATw = 0; colOffsetATw < offsetIneq; colOffsetATw++) {
          obj->isActiveConstr->data[obj->isActiveIdxRegularized[4] +
            colOffsetATw] = obj->isActiveConstr->data[(obj->isActiveIdx[4] +
            colOffsetATw) - 1];
        }
      }

      offsetIneq = obj->isActiveIdx[4];
      idxStartIneq = obj->isActiveIdxRegularized[4] - 1;
      for (colOffsetATw = offsetIneq; colOffsetATw <= idxStartIneq; colOffsetATw
           ++) {
        obj->isActiveConstr->data[colOffsetATw - 1] = false;
      }

      idxStartIneq = obj->nVarOrig;
      for (colOffsetATw = offsetIneq_tmp; colOffsetATw <= idxStartIneq;
           colOffsetATw++) {
        obj->lb->data[colOffsetATw - 1] = 0.0;
      }

      idxStartIneq = obj->isActiveIdx[2];
      c = obj->nActiveConstr;
      for (offsetIneq = idxStartIneq; offsetIneq <= c; offsetIneq++) {
        colOffsetATw = (offsetIneq - 1) * obj->ldA - 1;
        if (obj->Wid->data[offsetIneq - 1] == 3) {
          e_tmp = obj->Wlocalidx->data[offsetIneq - 1] + offsetIneq_tmp;
          e = e_tmp - 2;
          for (d = offsetIneq_tmp; d <= e; d++) {
            obj->ATwset->data[d + colOffsetATw] = 0.0;
          }

          obj->ATwset->data[(e_tmp + colOffsetATw) - 1] = -1.0;
          e = obj->nVar;
          for (d = e_tmp; d <= e; d++) {
            obj->ATwset->data[d + colOffsetATw] = 0.0;
          }
        } else {
          e = obj->nVar;
          for (d = offsetIneq_tmp; d <= e; d++) {
            obj->ATwset->data[d + colOffsetATw] = 0.0;
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
static void test3_computeGradLag(emxArray_real_T_test3_T *workspace, int32_T
  nVar, const emxArray_real_T_test3_T *grad, const emxArray_int32_T_test3_T
  *finiteFixed, int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB,
  int32_T mLB, const emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const
  emxArray_real_T_test3_T *lambda)
{
  int32_T finiteFixed_0;
  int32_T iL0;
  if (nVar - 1 >= 0) {
    memcpy(&workspace->data[0], &grad->data[0], (uint32_T)nVar * sizeof(real_T));
  }

  for (iL0 = 0; iL0 < mFixed; iL0++) {
    finiteFixed_0 = finiteFixed->data[iL0];
    workspace->data[finiteFixed_0 - 1] += lambda->data[iL0];
  }

  for (finiteFixed_0 = 0; finiteFixed_0 < mLB; finiteFixed_0++) {
    iL0 = finiteLB->data[finiteFixed_0];
    workspace->data[iL0 - 1] -= lambda->data[mFixed + finiteFixed_0];
  }

  iL0 = mLB - 1 < 0 ? mFixed : mFixed + mLB;
  for (finiteFixed_0 = 0; finiteFixed_0 < mUB; finiteFixed_0++) {
    int32_T finiteUB_0;
    finiteUB_0 = finiteUB->data[finiteFixed_0];
    workspace->data[finiteUB_0 - 1] += lambda->data[iL0 + finiteFixed_0];
  }
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
  const s_k8kXP0ntDjd4qxsrByEVbG_test_T *WorkingSet,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, const emxArray_real_T_test3_T *lb,
  const emxArray_real_T_test3_T *ub, int32_T runTimeOptions_MaxFunctionEvalu,
  boolean_T *Flags_gradOK, boolean_T *Flags_fevalOK, boolean_T *Flags_done,
  boolean_T *Flags_stepAccepted, boolean_T *Flags_failedLineSearch, int32_T
  *Flags_stepType)
{
  real_T s;
  real_T smax;
  int32_T idx_max;
  int32_T k;
  int32_T mLB;
  int32_T mLambda;
  int32_T mUB;
  int32_T nVar;
  boolean_T isFeasible;
  *Flags_fevalOK = true;
  *Flags_stepAccepted = false;
  *Flags_failedLineSearch = false;
  *Flags_stepType = 1;
  nVar = WorkingSet->nVar;
  mLB = WorkingSet->sizes[3];
  mUB = WorkingSet->sizes[4];
  mLambda = ((WorkingSet->sizes[0] + WorkingSet->sizes[3]) + WorkingSet->sizes[4])
    - 1;
  for (k = 0; k <= mLambda; k++) {
    TrialState->lambdaStopTest->data[k] = TrialState->lambdasqp->data[k];
  }

  test3_computeGradLag(TrialState->gradLag, WorkingSet->nVar, TrialState->grad,
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

  s = 0.0;
  for (k = 0; k < mLB; k++) {
    s = fmax(s, lb->data[WorkingSet->indexLB->data[k] - 1] -
             TrialState->xstarsqp->data[WorkingSet->indexLB->data[k] - 1]);
  }

  for (k = 0; k < mUB; k++) {
    s = fmax(s, TrialState->xstarsqp->data[WorkingSet->indexUB->data[k] - 1] -
             ub->data[WorkingSet->indexUB->data[k] - 1]);
  }

  MeritFunction->nlpPrimalFeasError = s;
  MeritFunction->feasRelativeFactor = fmax(1.0, s);
  isFeasible = (s <= 1.0E-6 * MeritFunction->feasRelativeFactor);
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
static real_T test3_computeComplError(const emxArray_real_T_test3_T *xCurrent,
  const emxArray_int32_T_test3_T *finiteLB, int32_T mLB, const
  emxArray_real_T_test3_T *lb, const emxArray_int32_T_test3_T *finiteUB, int32_T
  mUB, const emxArray_real_T_test3_T *ub, const emxArray_real_T_test3_T *lambda,
  int32_T iL0)
{
  real_T nlpComplError;
  int32_T idx;
  nlpComplError = 0.0;
  if (mLB + mUB > 0) {
    real_T lbDelta;
    real_T lbLambda;
    int32_T finiteLB_0;
    int32_T ubOffset;
    ubOffset = (iL0 + mLB) - 1;
    for (idx = 0; idx < mLB; idx++) {
      finiteLB_0 = finiteLB->data[idx];
      lbDelta = xCurrent->data[finiteLB_0 - 1] - lb->data[finiteLB_0 - 1];
      lbLambda = lambda->data[(iL0 + idx) - 1];
      nlpComplError = fmax(nlpComplError, fmin(fabs(lbDelta * lbLambda), fmin
        (fabs(lbDelta), lbLambda)));
    }

    for (idx = 0; idx < mUB; idx++) {
      finiteLB_0 = finiteUB->data[idx];
      lbDelta = ub->data[finiteLB_0 - 1] - xCurrent->data[finiteLB_0 - 1];
      lbLambda = lambda->data[ubOffset + idx];
      nlpComplError = fmax(nlpComplError, fmin(fabs(lbDelta * lbLambda), fmin
        (fabs(lbDelta), lbLambda)));
    }
  }

  return nlpComplError;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_computeGradLag_l(emxArray_real_T_test3_T *workspace, int32_T
  nVar, const emxArray_real_T_test3_T *grad, const emxArray_int32_T_test3_T
  *finiteFixed, int32_T mFixed, const emxArray_int32_T_test3_T *finiteLB,
  int32_T mLB, const emxArray_int32_T_test3_T *finiteUB, int32_T mUB, const
  emxArray_real_T_test3_T *lambda)
{
  int32_T finiteFixed_0;
  int32_T iL0;
  if (nVar - 1 >= 0) {
    memcpy(&workspace->data[0], &grad->data[0], (uint32_T)nVar * sizeof(real_T));
  }

  for (iL0 = 0; iL0 < mFixed; iL0++) {
    finiteFixed_0 = finiteFixed->data[iL0];
    workspace->data[finiteFixed_0 - 1] += lambda->data[iL0];
  }

  for (finiteFixed_0 = 0; finiteFixed_0 < mLB; finiteFixed_0++) {
    iL0 = finiteLB->data[finiteFixed_0];
    workspace->data[iL0 - 1] -= lambda->data[mFixed + finiteFixed_0];
  }

  iL0 = mLB - 1 < 0 ? mFixed : mFixed + mLB;
  for (finiteFixed_0 = 0; finiteFixed_0 < mUB; finiteFixed_0++) {
    int32_T finiteUB_0;
    finiteUB_0 = finiteUB->data[finiteFixed_0];
    workspace->data[finiteUB_0 - 1] += lambda->data[iL0 + finiteFixed_0];
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
static void test3_xgemv(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T ia0, int32_T lda, const emxArray_real_T_test3_T *x, int32_T ix0,
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
    test3_xgemv(lastv, lastc, C, ic0, ldc, C, iv0, work);
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
          test3_xgemv(lastv, lastc, obj->Q, ia, b_k, obj->Q, iaii, work);
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
static void test3_xgemv_b(int32_T m, int32_T n, const emxArray_real_T_test3_T *A,
  int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y)
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
    mAll = ((WorkingSet_sizes[0] + WorkingSet_sizes[3]) + WorkingSet_sizes[4]) -
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

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_test_exit_k(s7RdrPWkr8UPAUyTdDJkLaG_test3_T *Flags,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const s_k8kXP0ntDjd4qxsrByEVbG_test_T *WorkingSet,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *QRManager, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T
  *ub, int32_T runTimeOptions_MaxFunctionEvalu)
{
  real_T nlpComplErrorLSQ;
  real_T nlpComplErrorTmp;
  real_T s;
  real_T smax;
  real_T tmp;
  int32_T idx_max;
  int32_T ix;
  int32_T mFixed;
  int32_T mLB;
  int32_T mLambda;
  int32_T mUB;
  int32_T minDim;
  int32_T nVar;
  boolean_T dxTooSmall;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T isFeasible;
  nVar = WorkingSet->nVar - 1;
  mFixed = WorkingSet->sizes[0];
  mLB = WorkingSet->sizes[3];
  mUB = WorkingSet->sizes[4];
  mLambda = ((WorkingSet->sizes[0] + WorkingSet->sizes[3]) + WorkingSet->sizes[4])
    - 1;
  for (minDim = 0; minDim <= mLambda; minDim++) {
    TrialState->lambdaStopTest->data[minDim] = TrialState->lambdasqp->
      data[minDim];
  }

  test3_computeGradLag(TrialState->gradLag, WorkingSet->nVar, TrialState->grad,
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

  s = 0.0;
  for (minDim = 0; minDim < mLB; minDim++) {
    s = fmax(s, lb->data[WorkingSet->indexLB->data[minDim] - 1] -
             TrialState->xstarsqp->data[WorkingSet->indexLB->data[minDim] - 1]);
  }

  for (minDim = 0; minDim < mUB; minDim++) {
    s = fmax(s, TrialState->xstarsqp->data[WorkingSet->indexUB->data[minDim] - 1]
             - ub->data[WorkingSet->indexUB->data[minDim] - 1]);
  }

  MeritFunction->nlpPrimalFeasError = s;
  if (TrialState->sqpIterations == 0) {
    MeritFunction->feasRelativeFactor = fmax(1.0, s);
  }

  isFeasible = (s <= 1.0E-6 * MeritFunction->feasRelativeFactor);
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
    MeritFunction->nlpComplError = test3_computeComplError(TrialState->xstarsqp,
      WorkingSet->indexLB, WorkingSet->sizes[3], lb, WorkingSet->indexUB,
      WorkingSet->sizes[4], ub, TrialState->lambdaStopTest, WorkingSet->sizes[0]
      + 1);
    s = fmax(MeritFunction->nlpDualFeasError, MeritFunction->nlpComplError);
    MeritFunction->firstOrderOpt = s;
    if (TrialState->sqpIterations > 1) {
      test3_computeGradLag_l(memspace->workspace_double, WorkingSet->nVar,
        TrialState->grad, WorkingSet->indexFixed, WorkingSet->sizes[0],
        WorkingSet->indexLB, WorkingSet->sizes[3], WorkingSet->indexUB,
        WorkingSet->sizes[4], TrialState->lambdaStopTestPrev);
      test3_computeDualFeasError(WorkingSet->nVar, memspace->workspace_double,
        &dxTooSmall, &nlpComplErrorLSQ);
      nlpComplErrorTmp = test3_computeComplError(TrialState->xstarsqp,
        WorkingSet->indexLB, WorkingSet->sizes[3], lb, WorkingSet->indexUB,
        WorkingSet->sizes[4], ub, TrialState->lambdaStopTestPrev,
        WorkingSet->sizes[0] + 1);
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
              mLB = WorkingSet->nActiveConstr - 1;
              if (WorkingSet->nActiveConstr > 0) {
                for (minDim = 0; minDim <= mLB; minDim++) {
                  TrialState->lambda->data[minDim] = 0.0;
                }

                mUB = WorkingSet->nVar * WorkingSet->nActiveConstr;
                guard2 = false;
                if (mUB > 0) {
                  for (minDim = 0; minDim <= mLB; minDim++) {
                    idx_max = WorkingSet->ldA * minDim;
                    ix = QRManager->ldq * minDim;
                    for (mUB = 0; mUB <= nVar; mUB++) {
                      QRManager->QR->data[ix + mUB] = WorkingSet->ATwset->
                        data[mUB + idx_max];
                    }
                  }

                  guard2 = true;
                } else if (mUB == 0) {
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
                test3_xgemv_b(WorkingSet->nVar, WorkingSet->nVar, QRManager->Q,
                              QRManager->ldq, TrialState->grad,
                              memspace->workspace_double);
                if (WorkingSet->nVar >= WorkingSet->nActiveConstr) {
                  mUB = WorkingSet->nVar;
                } else {
                  mUB = WorkingSet->nActiveConstr;
                }

                s = fmin(1.4901161193847656E-8, (real_T)mUB *
                         2.2204460492503131E-16) * fabs(QRManager->QR->data[0]);
                if (WorkingSet->nVar <= WorkingSet->nActiveConstr) {
                  mUB = WorkingSet->nVar;
                } else {
                  mUB = WorkingSet->nActiveConstr;
                }

                mLB = 0;
                nVar = 0;
                while ((mLB < mUB) && (fabs(QRManager->QR->data[nVar]) > s)) {
                  mLB++;
                  nVar = (nVar + QRManager->ldq) + 1;
                }

                if (mLB != 0) {
                  for (nVar = mLB; nVar >= 1; nVar--) {
                    idx_max = ((nVar - 1) * QRManager->ldq + nVar) - 2;
                    memspace->workspace_double->data[nVar - 1] /= QRManager->
                      QR->data[idx_max + 1];
                    for (minDim = 0; minDim <= nVar - 2; minDim++) {
                      ix = (nVar - minDim) - 2;
                      memspace->workspace_double->data[ix] -=
                        memspace->workspace_double->data[nVar - 1] *
                        QRManager->QR->data[idx_max - minDim];
                    }
                  }
                }

                if (WorkingSet->nActiveConstr <= mUB) {
                  minDim = WorkingSet->nActiveConstr;
                } else {
                  minDim = mUB;
                }

                for (nVar = 0; nVar < minDim; nVar++) {
                  TrialState->lambda->data[QRManager->jpvt->data[nVar] - 1] =
                    memspace->workspace_double->data[nVar];
                }

                minDim = WorkingSet->sizes[0] + 1;
                for (nVar = minDim; nVar <= mFixed; nVar++) {
                  TrialState->lambda->data[nVar - 1] = -TrialState->lambda->
                    data[nVar - 1];
                }

                test3_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
                                   WorkingSet->sizes, WorkingSet->isActiveIdx,
                                   WorkingSet->Wid, WorkingSet->Wlocalidx,
                                   memspace->workspace_double);
                test3_computeGradLag_l(memspace->workspace_double,
                  WorkingSet->nVar, TrialState->grad, WorkingSet->indexFixed,
                  WorkingSet->sizes[0], WorkingSet->indexLB, WorkingSet->sizes[3],
                  WorkingSet->indexUB, WorkingSet->sizes[4], TrialState->lambda);
                test3_computeDualFeasError(WorkingSet->nVar,
                  memspace->workspace_double, &isFeasible, &s);
                nlpComplErrorLSQ = test3_computeComplError(TrialState->xstarsqp,
                  WorkingSet->indexLB, WorkingSet->sizes[3], lb,
                  WorkingSet->indexUB, WorkingSet->sizes[4], ub,
                  TrialState->lambda, WorkingSet->sizes[0] + 1);
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

static void test3_emxCopy_real_T_0(emxArray_real_T_0_test3_T *dst, const
  emxArray_real_T_0_test3_T *src)
{
  int32_T i;
  for (i = 0; i < 1; i++) {
    dst->size = src->size;
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

static void test3_emxCopyMatrix_int32_T1(int32_T dst[5], const int32_T src[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    dst[i] = src[i];
  }
}

static void test3_emxCopyMatrix_int32_T2(int32_T dst[6], const int32_T src[6])
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

static void emxCopyStruct_s_k8kXP0ntDjd4qxs(s_k8kXP0ntDjd4qxsrByEVbG_test_T *dst,
  const s_k8kXP0ntDjd4qxsrByEVbG_test_T *src)
{
  dst->mConstr = src->mConstr;
  dst->mConstrOrig = src->mConstrOrig;
  dst->mConstrMax = src->mConstrMax;
  dst->nVar = src->nVar;
  dst->nVarOrig = src->nVarOrig;
  dst->nVarMax = src->nVarMax;
  dst->ldA = src->ldA;
  test3_emxCopy_real_T_0(&dst->Aineq, &src->Aineq);
  test3_emxCopy_real_T_0(&dst->Aeq, &src->Aeq);
  test3_emxCopy_real_T(&dst->lb, &src->lb);
  test3_emxCopy_real_T(&dst->ub, &src->ub);
  test3_emxCopy_int32_T(&dst->indexLB, &src->indexLB);
  test3_emxCopy_int32_T(&dst->indexUB, &src->indexUB);
  test3_emxCopy_int32_T(&dst->indexFixed, &src->indexFixed);
  dst->mEqRemoved = src->mEqRemoved;
  test3_emxCopy_real_T(&dst->ATwset, &src->ATwset);
  test3_emxCopy_real_T(&dst->bwset, &src->bwset);
  dst->nActiveConstr = src->nActiveConstr;
  test3_emxCopy_real_T(&dst->maxConstrWorkspace, &src->maxConstrWorkspace);
  test3_emxCopyMatrix_int32_T1(dst->sizes, src->sizes);
  test3_emxCopyMatrix_int32_T1(dst->sizesNormal, src->sizesNormal);
  test3_emxCopyMatrix_int32_T1(dst->sizesPhaseOne, src->sizesPhaseOne);
  test3_emxCopyMatrix_int32_T1(dst->sizesRegularized, src->sizesRegularized);
  test3_emxCopyMatrix_int32_T1(dst->sizesRegPhaseOne, src->sizesRegPhaseOne);
  test3_emxCopyMatrix_int32_T2(dst->isActiveIdx, src->isActiveIdx);
  test3_emxCopyMatrix_int32_T2(dst->isActiveIdxNormal, src->isActiveIdxNormal);
  test3_emxCopyMatrix_int32_T2(dst->isActiveIdxPhaseOne,
    src->isActiveIdxPhaseOne);
  test3_emxCopyMatrix_int32_T2(dst->isActiveIdxRegularized,
    src->isActiveIdxRegularized);
  test3_emxCopyMatrix_int32_T2(dst->isActiveIdxRegPhaseOne,
    src->isActiveIdxRegPhaseOne);
  test3_emxCopy_boolean_T(&dst->isActiveConstr, &src->isActiveConstr);
  test3_emxCopy_int32_T(&dst->Wid, &src->Wid);
  test3_emxCopy_int32_T(&dst->Wlocalidx, &src->Wlocalidx);
  test3_emxCopyMatrix_int32_T1(dst->nWConstr, src->nWConstr);
  dst->probType = src->probType;
  dst->SLACK0 = src->SLACK0;
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
static void test3_removeConstr(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj, int32_T
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
static boolean_T test3_feasibleX0ForWorkingSet(emxArray_real_T_test3_T
  *workspace, emxArray_real_T_test3_T *xCurrent, const
  s_k8kXP0ntDjd4qxsrByEVbG_test_T *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *qrmanager)
{
  emxArray_real_T_test3_T *B;
  real_T c;
  real_T constrViolation_basicX;
  int32_T ar;
  int32_T d;
  int32_T exitg1;
  int32_T h;
  int32_T iAcol;
  int32_T iy;
  int32_T jBcol;
  int32_T ldq;
  int32_T ldw;
  int32_T mLB;
  int32_T mWConstr;
  int32_T nVar_tmp_tmp;
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

    ldw = workingset->ldA;
    if ((workingset->nVar != 0) && (workingset->nActiveConstr != 0)) {
      iy = 0;
      mLB = (workingset->nActiveConstr - 1) * workingset->ldA + 1;
      for (ldq = 1; ldw < 0 ? ldq >= mLB : ldq <= mLB; ldq += ldw) {
        c = 0.0;
        d = (ldq + nVar_tmp_tmp) - 1;
        for (jBcol = ldq; jBcol <= d; jBcol++) {
          c += workingset->ATwset->data[jBcol - 1] * xCurrent->data[jBcol - ldq];
        }

        workspace->data[iy] -= c;
        iy++;
      }
    }

    test3_emxInit_real_T(&B, 2);
    if (workingset->nActiveConstr >= workingset->nVar) {
      for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
        ldw = qrmanager->ldq * jBcol;
        for (ldq = 0; ldq <= mWConstr; ldq++) {
          qrmanager->QR->data[ldq + ldw] = workingset->ATwset->data
            [workingset->ldA * ldq + jBcol];
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
        iy = B->size[0] * B->size[1];
        B->size[0] = qrmanager->QR->size[0];
        B->size[1] = qrmanager->QR->size[1];
        test3_emxEnsureCapacity_real_T(B, iy);
        ldq = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        for (mLB = 0; mLB < ldq; mLB++) {
          B->data[mLB] = qrmanager->QR->data[mLB];
        }

        if (qrmanager->QR->size[0] <= qrmanager->QR->size[1]) {
          ldq = qrmanager->QR->size[0];
        } else {
          ldq = qrmanager->QR->size[1];
        }

        iy = qrmanager->tau->size[0];
        qrmanager->tau->size[0] = ldq;
        test3_emxEnsureCapacity_real_T(qrmanager->tau, iy);
        for (mLB = 0; mLB < ldq; mLB++) {
          qrmanager->tau->data[mLB] = 0.0;
        }

        if (jBcol >= 1) {
          test3_qrf(B, workingset->nActiveConstr, workingset->nVar, jBcol,
                    qrmanager->tau);
        }

        iy = qrmanager->QR->size[0] * qrmanager->QR->size[1];
        qrmanager->QR->size[0] = B->size[0];
        qrmanager->QR->size[1] = B->size[1];
        test3_emxEnsureCapacity_real_T(qrmanager->QR, iy);
        ldq = B->size[0] * B->size[1];
        for (mLB = 0; mLB < ldq; mLB++) {
          qrmanager->QR->data[mLB] = B->data[mLB];
        }
      }

      test3_computeQ_(qrmanager, qrmanager->mrows);
      ldq = qrmanager->ldq;
      ldw = workspace->size[0];
      iy = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      test3_emxEnsureCapacity_real_T(B, iy);
      ar = workspace->size[0] * workspace->size[1];
      if (ar - 1 >= 0) {
        memcpy(&B->data[0], &workspace->data[0], (uint32_T)ar * sizeof(real_T));
      }

      if (workingset->nVar != 0) {
        for (jBcol = 0; ldw < 0 ? jBcol >= ldw : jBcol <= ldw; jBcol += ldw) {
          mLB = jBcol + nVar_tmp_tmp;
          for (iy = jBcol + 1; iy <= mLB; iy++) {
            workspace->data[iy - 1] = 0.0;
          }
        }

        jBcol = -1;
        for (mLB = 0; ldw < 0 ? mLB >= ldw : mLB <= ldw; mLB += ldw) {
          iAcol = -1;
          ar = mLB + nVar_tmp_tmp;
          for (iy = mLB + 1; iy <= ar; iy++) {
            c = 0.0;
            for (d = 0; d <= mWConstr; d++) {
              c += qrmanager->Q->data[(d + iAcol) + 1] * B->data[(d + jBcol) + 1];
            }

            workspace->data[iy - 1] += c;
            iAcol += ldq;
          }

          jBcol += ldw;
        }
      }

      for (mWConstr = 0; mWConstr < 2; mWConstr++) {
        jBcol = ldw * mWConstr - 1;
        for (iy = nVar_tmp_tmp; iy >= 1; iy--) {
          iAcol = (iy - 1) * ldq;
          mLB = iy + jBcol;
          c = workspace->data[mLB];
          if (c != 0.0) {
            workspace->data[mLB] = c / qrmanager->QR->data[(iy + iAcol) - 1];
            for (d = 0; d <= iy - 2; d++) {
              ar = (d + jBcol) + 1;
              workspace->data[ar] -= qrmanager->QR->data[d + iAcol] *
                workspace->data[mLB];
            }
          }
        }
      }
    } else {
      test3_factorQR(qrmanager, workingset->ATwset, workingset->nVar,
                     workingset->nActiveConstr, workingset->ldA);
      test3_computeQ_(qrmanager, qrmanager->minRowCol);
      ldq = qrmanager->ldq;
      ldw = workspace->size[0];
      for (mLB = 0; mLB < 2; mLB++) {
        jBcol = ldw * mLB;
        for (iy = 0; iy <= mWConstr; iy++) {
          iAcol = ldq * iy;
          ar = iy + jBcol;
          c = workspace->data[ar];
          for (d = 0; d < iy; d++) {
            c -= qrmanager->QR->data[d + iAcol] * workspace->data[d + jBcol];
          }

          workspace->data[ar] = c / qrmanager->QR->data[iy + iAcol];
        }
      }

      iy = B->size[0] * B->size[1];
      B->size[0] = workspace->size[0];
      B->size[1] = workspace->size[1];
      test3_emxEnsureCapacity_real_T(B, iy);
      ar = workspace->size[0] * workspace->size[1];
      if (ar - 1 >= 0) {
        memcpy(&B->data[0], &workspace->data[0], (uint32_T)ar * sizeof(real_T));
      }

      if (workingset->nVar != 0) {
        for (jBcol = 0; ldw < 0 ? jBcol >= ldw : jBcol <= ldw; jBcol += ldw) {
          mLB = jBcol + nVar_tmp_tmp;
          for (iy = jBcol + 1; iy <= mLB; iy++) {
            workspace->data[iy - 1] = 0.0;
          }
        }

        iAcol = 1;
        for (iy = 0; ldw < 0 ? iy >= ldw : iy <= ldw; iy += ldw) {
          ar = -1;
          mLB = iAcol + mWConstr;
          for (d = iAcol; d <= mLB; d++) {
            h = iy + nVar_tmp_tmp;
            for (jBcol = iy + 1; jBcol <= h; jBcol++) {
              workspace->data[jBcol - 1] += qrmanager->Q->data[(ar + jBcol) - iy]
                * B->data[d - 1];
            }

            ar += ldq;
          }

          iAcol += ldw;
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

        mWConstr = workspace->size[0] - 1;
        mLB = workingset->sizes[3];
        iy = workingset->sizes[4];
        ldw = workingset->sizes[0];
        c = 0.0;
        if (workingset->sizes[3] > 0) {
          for (ldq = 0; ldq < mLB; ldq++) {
            c = fmax(c, -workspace->data[workingset->indexLB->data[ldq] - 1] -
                     workingset->lb->data[workingset->indexLB->data[ldq] - 1]);
          }
        }

        if (workingset->sizes[4] > 0) {
          for (ldq = 0; ldq < iy; ldq++) {
            c = fmax(c, workspace->data[workingset->indexUB->data[ldq] - 1] -
                     workingset->ub->data[workingset->indexUB->data[ldq] - 1]);
          }
        }

        if (workingset->sizes[0] > 0) {
          for (ldq = 0; ldq < ldw; ldq++) {
            c = fmax(c, fabs(workspace->data[workingset->indexFixed->data[ldq] -
                             1] - workingset->ub->data[workingset->
                             indexFixed->data[ldq] - 1]));
          }
        }

        mLB = workingset->sizes[3];
        iy = workingset->sizes[4];
        ldw = workingset->sizes[0];
        constrViolation_basicX = 0.0;
        if (workingset->sizes[3] > 0) {
          for (ldq = 0; ldq < mLB; ldq++) {
            constrViolation_basicX = fmax(constrViolation_basicX,
              -workspace->data[mWConstr + workingset->indexLB->data[ldq]] -
              workingset->lb->data[workingset->indexLB->data[ldq] - 1]);
          }
        }

        if (workingset->sizes[4] > 0) {
          for (ldq = 0; ldq < iy; ldq++) {
            constrViolation_basicX = fmax(constrViolation_basicX,
              workspace->data[mWConstr + workingset->indexUB->data[ldq]] -
              workingset->ub->data[workingset->indexUB->data[ldq] - 1]);
          }
        }

        if (workingset->sizes[0] > 0) {
          for (ldq = 0; ldq < ldw; ldq++) {
            constrViolation_basicX = fmax(constrViolation_basicX, fabs
              (workspace->data[mWConstr + workingset->indexFixed->data[ldq]] -
               workingset->ub->data[workingset->indexFixed->data[ldq] - 1]));
          }
        }

        for (jBcol = 0; jBcol < nVar_tmp_tmp; jBcol++) {
          if ((c <= 2.2204460492503131E-16) || (c < constrViolation_basicX)) {
            xCurrent->data[jBcol] = workspace->data[jBcol];
          } else {
            xCurrent->data[jBcol] = workspace->data[(mWConstr + jBcol) + 1];
          }
        }

        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return nonDegenerateWset;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T test3_maxConstraintViolation(const s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *obj, const emxArray_real_T_test3_T *x)
{
  real_T v;
  int32_T idx;
  int32_T mFixed;
  int32_T mLB;
  int32_T mUB;
  mLB = obj->sizes[3] - 1;
  mUB = obj->sizes[4] - 1;
  mFixed = obj->sizes[0] - 1;
  v = 0.0;
  if (obj->sizes[3] > 0) {
    for (idx = 0; idx <= mLB; idx++) {
      v = fmax(v, -x->data[obj->indexLB->data[idx] - 1] - obj->lb->data
               [obj->indexLB->data[idx] - 1]);
    }
  }

  if (obj->sizes[4] > 0) {
    for (idx = 0; idx <= mUB; idx++) {
      v = fmax(v, x->data[obj->indexUB->data[idx] - 1] - obj->ub->data
               [obj->indexUB->data[idx] - 1]);
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
static void test3_PresolveWorkingSet(s_PLLLBDg14rHiR3qEakQweE_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
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
              test3_removeConstr(workingset, nVar);
            } else {
              workingset->mEqRemoved++;
              TYPE = workingset->Wid->data[nVar - 1] - 1;
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
        c_tol = test3_maxConstraintViolation(workingset, solution->xstar);
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
static void test3_xgemv_bu(int32_T m, int32_T n, const emxArray_real_T_test3_T
  *A, int32_T lda, const emxArray_real_T_test3_T *x, emxArray_real_T_test3_T *y)
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
    test3_xgemv_bu(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
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
    test3_xgemv_bu(obj->nvar, obj->nvar, H, obj->nvar, x, obj->Hx);
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
static void test3_xgemv_buj(int32_T m, int32_T n, const emxArray_real_T_test3_T *
  A, int32_T ia0, int32_T lda, const emxArray_real_T_test3_T *x,
  emxArray_real_T_test3_T *y)
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
  s_PLLLBDg14rHiR3qEakQweE_test_T *solution, s_pIaUYPkQBTqVmAKxFPiGQF_test_T
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

        test3_xgemv_buj(qrmanager->mrows, mNull, qrmanager->Q, nullStartIdx_tmp,
                        qrmanager->ldq, memspace->workspace_double,
                        solution->searchDir);
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

          test3_xgemv_buj(qrmanager->mrows, mNull, qrmanager->Q,
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
static void test3_feasibleratiotest(const emxArray_real_T_test3_T
  *solution_xstar, const emxArray_real_T_test3_T *solution_searchDir, int32_T
  workingset_nVar, const emxArray_real_T_test3_T *workingset_lb, const
  emxArray_real_T_test3_T *workingset_ub, const emxArray_int32_T_test3_T
  *workingset_indexLB, const emxArray_int32_T_test3_T *workingset_indexUB, const
  int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
  emxArray_boolean_T_test3_T *workingset_isActiveConstr, const int32_T
  workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
  *newBlocking, int32_T *constrType, int32_T *constrIdx)
{
  real_T denomTol;
  real_T phaseOneCorrectionP;
  real_T phaseOneCorrectionX;
  real_T pk_corrected;
  real_T ratio;
  int32_T b;
  int32_T idx;
  int32_T totalUB;
  int32_T workingset_indexLB_0;
  totalUB = workingset_sizes[4];
  *alpha = 1.0E+30;
  *newBlocking = false;
  *constrType = 0;
  *constrIdx = 0;
  denomTol = 2.2204460492503131E-13 * test3_xnrm2_a(workingset_nVar,
    solution_searchDir);
  if (workingset_nWConstr[3] < workingset_sizes[3]) {
    phaseOneCorrectionX = solution_xstar->data[workingset_nVar - 1] * (real_T)
      isPhaseOne;
    phaseOneCorrectionP = solution_searchDir->data[workingset_nVar - 1] *
      (real_T)isPhaseOne;
    b = workingset_sizes[3];
    for (idx = 0; idx <= b - 2; idx++) {
      workingset_indexLB_0 = workingset_indexLB->data[idx];
      pk_corrected = -solution_searchDir->data[workingset_indexLB_0 - 1] -
        phaseOneCorrectionP;
      if ((pk_corrected > denomTol) && (!workingset_isActiveConstr->data
           [(workingset_isActiveIdx[3] + idx) - 1])) {
        ratio = (-solution_xstar->data[workingset_indexLB_0 - 1] -
                 workingset_lb->data[workingset_indexLB_0 - 1]) -
          phaseOneCorrectionX;
        pk_corrected = fmin(fabs(ratio), 1.0E-6 - ratio) / pk_corrected;
        if (pk_corrected < *alpha) {
          *alpha = pk_corrected;
          *constrType = 4;
          *constrIdx = idx + 1;
          *newBlocking = true;
        }
      }
    }

    idx = workingset_indexLB->data[workingset_sizes[3] - 1] - 1;
    phaseOneCorrectionX = -solution_searchDir->data[idx];
    if ((phaseOneCorrectionX > denomTol) && (!workingset_isActiveConstr->data
         [(workingset_isActiveIdx[3] + workingset_sizes[3]) - 2])) {
      ratio = -solution_xstar->data[idx] - workingset_lb->data[idx];
      pk_corrected = fmin(fabs(ratio), 1.0E-6 - ratio) / phaseOneCorrectionX;
      if (pk_corrected < *alpha) {
        *alpha = pk_corrected;
        *constrType = 4;
        *constrIdx = workingset_sizes[3];
        *newBlocking = true;
      }
    }
  }

  if (workingset_nWConstr[4] < workingset_sizes[4]) {
    phaseOneCorrectionX = solution_xstar->data[workingset_nVar - 1] * (real_T)
      isPhaseOne;
    phaseOneCorrectionP = solution_searchDir->data[workingset_nVar - 1] *
      (real_T)isPhaseOne;
    for (idx = 0; idx < totalUB; idx++) {
      b = workingset_indexUB->data[idx];
      pk_corrected = solution_searchDir->data[b - 1] - phaseOneCorrectionP;
      if ((pk_corrected > denomTol) && (!workingset_isActiveConstr->data
           [(workingset_isActiveIdx[4] + idx) - 1])) {
        ratio = (solution_xstar->data[b - 1] - workingset_ub->data[b - 1]) -
          phaseOneCorrectionX;
        pk_corrected = fmin(fabs(ratio), 1.0E-6 - ratio) / pk_corrected;
        if (pk_corrected < *alpha) {
          *alpha = pk_corrected;
          *constrType = 5;
          *constrIdx = idx + 1;
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
static void test_addBoundToActiveSetMatrix_(s_k8kXP0ntDjd4qxsrByEVbG_test_T *obj,
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
static void test3_iterate(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_PLLLBDg14rHiR3qEakQweE_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
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
              test3_xgemv_b(qrmanager->mrows, qrmanager->ncols, qrmanager->Q,
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
            workingset->nVar, workingset->lb, workingset->ub,
            workingset->indexLB, workingset->indexUB, workingset->sizes,
            workingset->isActiveIdx, workingset->isActiveConstr,
            workingset->nWConstr, (objective->objtype == 5), &normDelta,
            &updateFval, &iyend, &idxRotGCol);
          if (updateFval) {
            switch (iyend) {
             case 3:
              workingset->nWConstr[2]++;
              workingset->isActiveConstr->data[(workingset->isActiveIdx[2] +
                idxRotGCol) - 2] = true;
              workingset->nActiveConstr++;
              workingset->Wid->data[workingset->nActiveConstr - 1] = 3;
              workingset->Wlocalidx->data[workingset->nActiveConstr - 1] =
                idxRotGCol;
              break;

             case 4:
              test_addBoundToActiveSetMatrix_(workingset, 4, idxRotGCol);
              break;

             default:
              test_addBoundToActiveSetMatrix_(workingset, 5, idxRotGCol);
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
          solution->maxConstr = test3_maxConstraintViolation(workingset,
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
            normDelta = test3_maxConstraintViolation(workingset,
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

static void emxFreeStruct_s_k8kXP0ntDjd4qxs(s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->lb);
  test3_emxFree_real_T(&pStruct->ub);
  test3_emxFree_int32_T(&pStruct->indexLB);
  test3_emxFree_int32_T(&pStruct->indexUB);
  test3_emxFree_int32_T(&pStruct->indexFixed);
  test3_emxFree_real_T(&pStruct->ATwset);
  test3_emxFree_real_T(&pStruct->bwset);
  test3_emxFree_real_T(&pStruct->maxConstrWorkspace);
  test3_emxFree_boolean_T(&pStruct->isActiveConstr);
  test3_emxFree_int32_T(&pStruct->Wid);
  test3_emxFree_int32_T(&pStruct->Wlocalidx);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_driver_d(const emxArray_real_T_test3_T *H, const
  emxArray_real_T_test3_T *f, s_PLLLBDg14rHiR3qEakQweE_test_T *solution,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *workingset, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *qrmanager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *cholmanager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  objective, somzaGboVhDG7PNQS6E98jD_test3_T *options, int32_T
  runTimeOptions_MaxIterations)
{
  s_k8kXP0ntDjd4qxsrByEVbG_test_T b_workingset;
  real_T maxConstr_new;
  int32_T idxEndIneq;
  int32_T idxStartIneq;
  int32_T mConstr;
  int32_T nVar;
  boolean_T exitg1;
  boolean_T guard1;
  solution->iterations = 0;
  nVar = workingset->nVar - 1;
  emxInitStruct_s_k8kXP0ntDjd4qxs(&b_workingset);
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
    solution->maxConstr = test3_maxConstraintViolation(workingset,
      solution->xstar);
    if (solution->maxConstr > 1.0E-6) {
      solution->xstar->data[workingset->nVar] = solution->maxConstr + 1.0;
      emxCopyStruct_s_k8kXP0ntDjd4qxs(&b_workingset, workingset);
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
        mConstr = b_workingset.sizes[0];
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
      while ((mConstr > b_workingset.sizes[0]) && (mConstr > workingset->nVar))
      {
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
      emxCopyStruct_s_k8kXP0ntDjd4qxs(workingset, &b_workingset);
      if (solution->state == 0) {
      } else {
        solution->maxConstr = test3_maxConstraintViolation(&b_workingset,
          solution->xstar);
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
            emxCopyStruct_s_k8kXP0ntDjd4qxs(workingset, &b_workingset);
            maxConstr_new = test3_maxConstraintViolation(workingset,
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

  emxFreeStruct_s_k8kXP0ntDjd4qxs(&b_workingset);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_relaxed(const emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *grad, s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState,
  sG8JZ69axY52WWR6RKyApQC_test3_T *MeritFunction,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *qpoptions)
{
  s_k8kXP0ntDjd4qxsrByEVbG_test_T b_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_test3_T qpoptions_0;
  real_T beta;
  real_T qpfvalQuadExcess;
  real_T qpfvalQuadExcess_tmp;
  real_T s;
  real_T smax;
  int32_T c_ix;
  int32_T c_ix_tmp;
  int32_T nVarOrig;
  int32_T temp;
  nVarOrig = WorkingSet->nVar;
  beta = 0.0;
  for (temp = 0; temp < nVarOrig; temp++) {
    beta += Hessian->data[Hessian->size[0] * temp + temp];
  }

  beta /= (real_T)WorkingSet->nVar;
  if (TrialState->sqpIterations <= 1) {
    c_ix = QPObjective->nvar;
    if (QPObjective->nvar < 1) {
      nVarOrig = 0;
    } else {
      nVarOrig = 1;
      if (QPObjective->nvar > 1) {
        smax = fabs(grad->data[0]);
        for (temp = 2; temp <= c_ix; temp++) {
          s = fabs(grad->data[temp - 1]);
          if (s > smax) {
            nVarOrig = temp;
            smax = s;
          }
        }
      }
    }

    smax = fmax(1.0, fabs(grad->data[nVarOrig - 1])) * 100.0;
  } else {
    c_ix = WorkingSet->mConstr;
    if (WorkingSet->mConstr < 1) {
      nVarOrig = 0;
    } else {
      nVarOrig = 1;
      if (WorkingSet->mConstr > 1) {
        smax = fabs(TrialState->lambdasqp->data[0]);
        for (temp = 2; temp <= c_ix; temp++) {
          s = fabs(TrialState->lambdasqp->data[temp - 1]);
          if (s > smax) {
            nVarOrig = temp;
            smax = s;
          }
        }
      }
    }

    smax = fabs(TrialState->lambdasqp->data[nVarOrig - 1]);
  }

  QPObjective->nvar = WorkingSet->nVar;
  QPObjective->beta = beta;
  QPObjective->rho = smax;
  QPObjective->hasLinear = true;
  QPObjective->objtype = 4;
  emxInitStruct_s_k8kXP0ntDjd4qxs(&b_WorkingSet);
  emxCopyStruct_s_k8kXP0ntDjd4qxs(&b_WorkingSet, WorkingSet);
  test3_setProblemType(&b_WorkingSet, 2);
  temp = qpoptions->MaxIterations;
  qpoptions->MaxIterations = (qpoptions->MaxIterations + b_WorkingSet.nVar) -
    WorkingSet->nVar;
  qpoptions_0 = *qpoptions;
  test3_driver_d(Hessian, grad, TrialState, memspace, &b_WorkingSet, QRManager,
                 CholManager, QPObjective, &qpoptions_0,
                 qpoptions->MaxIterations);
  qpoptions->MaxIterations = temp;
  if (TrialState->state != -6) {
    nVarOrig = (b_WorkingSet.nVarMax - WorkingSet->nVar) - 1;
    c_ix_tmp = WorkingSet->nVar + 1;
    s = 0.0;
    qpfvalQuadExcess = 0.0;
    if (nVarOrig >= 1) {
      c_ix = WorkingSet->nVar + nVarOrig;
      for (temp = c_ix_tmp; temp <= c_ix; temp++) {
        s += fabs(TrialState->xstar->data[temp - 1]);
      }

      for (temp = 0; temp < nVarOrig; temp++) {
        qpfvalQuadExcess_tmp = TrialState->xstar->data[WorkingSet->nVar + temp];
        qpfvalQuadExcess += qpfvalQuadExcess_tmp * qpfvalQuadExcess_tmp;
      }
    }

    beta = (TrialState->fstar - smax * s) - beta / 2.0 * qpfvalQuadExcess;
    temp = (WorkingSet->nVarMax - WorkingSet->nVar) - 1;
    smax = MeritFunction->penaltyParam;
    s = MeritFunction->linearizedConstrViol;
    qpfvalQuadExcess = 0.0;
    if (temp >= 1) {
      c_ix = WorkingSet->nVar + temp;
      for (temp = c_ix_tmp; temp <= c_ix; temp++) {
        qpfvalQuadExcess += fabs(TrialState->xstar->data[temp - 1]);
      }
    }

    MeritFunction->linearizedConstrViol = qpfvalQuadExcess;
    s -= qpfvalQuadExcess;
    if ((s > 2.2204460492503131E-16) && (beta > 0.0)) {
      if (TrialState->sqpFval == 0.0) {
        smax = 1.0;
      } else {
        smax = 1.5;
      }

      smax = smax * beta / s;
    }

    if (smax < MeritFunction->penaltyParam) {
      MeritFunction->phi = smax * 0.0 + TrialState->sqpFval;
      if ((smax * 0.0 + MeritFunction->initFval) - MeritFunction->phi > (real_T)
          MeritFunction->nPenaltyDecreases * MeritFunction->threshold) {
        MeritFunction->nPenaltyDecreases++;
        if ((MeritFunction->nPenaltyDecreases << 1) > TrialState->sqpIterations)
        {
          MeritFunction->threshold *= 10.0;
        }

        MeritFunction->penaltyParam = fmax(smax, 1.0E-10);
      } else {
        MeritFunction->phi = MeritFunction->penaltyParam * 0.0 +
          TrialState->sqpFval;
      }
    } else {
      MeritFunction->penaltyParam = fmax(smax, 1.0E-10);
      MeritFunction->phi = MeritFunction->penaltyParam * 0.0 +
        TrialState->sqpFval;
    }

    MeritFunction->phiPrimePlus = fmin(beta - MeritFunction->penaltyParam * 0.0,
      0.0);
    nVarOrig = b_WorkingSet.isActiveIdx[2];
    c_ix = b_WorkingSet.nActiveConstr;
    for (temp = nVarOrig; temp <= c_ix; temp++) {
      if (b_WorkingSet.Wid->data[temp - 1] == 3) {
        TrialState->lambda->data[temp - 1] *= (real_T)memspace->
          workspace_int->data[b_WorkingSet.Wlocalidx->data[temp - 1] - 1];
      }
    }
  }

  QPObjective->nvar = WorkingSet->nVar;
  QPObjective->hasLinear = true;
  QPObjective->objtype = 3;
  emxCopyStruct_s_k8kXP0ntDjd4qxs(WorkingSet, &b_WorkingSet);
  emxFreeStruct_s_k8kXP0ntDjd4qxs(&b_WorkingSet);
  test3_setProblemType(WorkingSet, 3);
  test3_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
                     WorkingSet->sizes, WorkingSet->isActiveIdx, WorkingSet->Wid,
                     WorkingSet->Wlocalidx, memspace->workspace_double);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static boolean_T test3_step_o(int32_T *STEP_TYPE, emxArray_real_T_test3_T
  *Hessian, const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace,
  s_k8kXP0ntDjd4qxsrByEVbG_test_T *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T
  *QRManager, s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager,
  s_saWPFfMboRdWeRqIEJ4x8C_test_T *QPObjective, somzaGboVhDG7PNQS6E98jD_test3_T *
  qpoptions)
{
  emxArray_real_T_test3_T *b;
  s_k8kXP0ntDjd4qxsrByEVbG_test_T b_WorkingSet;
  somzaGboVhDG7PNQS6E98jD_test3_T qpoptions_0;
  real_T linearizedConstrViolPrev;
  real_T oldDirIdx;
  int32_T b_nVar;
  int32_T exitg1;
  int32_T iH0;
  int32_T k;
  int32_T mConstrMax;
  int32_T nVar_tmp_tmp;
  boolean_T checkBoundViolation;
  boolean_T guard1;
  boolean_T stepSuccess;
  stepSuccess = true;
  checkBoundViolation = true;
  nVar_tmp_tmp = WorkingSet->nVar - 1;
  for (k = 0; k <= nVar_tmp_tmp; k++) {
    if (*STEP_TYPE != 3) {
      TrialState->xstar->data[k] = TrialState->xstarsqp->data[k];
    } else {
      TrialState->searchDir->data[k] = TrialState->xstar->data[k];
    }
  }

  emxInitStruct_s_k8kXP0ntDjd4qxs(&b_WorkingSet);
  test3_emxInit_real_T(&b, 1);
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
        oldDirIdx = MeritFunction->penaltyParam;
        linearizedConstrViolPrev = MeritFunction->linearizedConstrViol;
        MeritFunction->linearizedConstrViol = 0.0;
        if ((linearizedConstrViolPrev > 2.2204460492503131E-16) &&
            (TrialState->fstar > 0.0)) {
          if (TrialState->sqpFval == 0.0) {
            oldDirIdx = 1.0;
          } else {
            oldDirIdx = 1.5;
          }

          oldDirIdx = oldDirIdx * TrialState->fstar / linearizedConstrViolPrev;
        }

        if (oldDirIdx < MeritFunction->penaltyParam) {
          MeritFunction->phi = oldDirIdx * 0.0 + TrialState->sqpFval;
          if ((oldDirIdx * 0.0 + MeritFunction->initFval) - MeritFunction->phi >
              (real_T)MeritFunction->nPenaltyDecreases *
              MeritFunction->threshold) {
            MeritFunction->nPenaltyDecreases++;
            if ((MeritFunction->nPenaltyDecreases << 1) >
                TrialState->sqpIterations) {
              MeritFunction->threshold *= 10.0;
            }

            MeritFunction->penaltyParam = fmax(oldDirIdx, 1.0E-10);
          } else {
            MeritFunction->phi = MeritFunction->penaltyParam * 0.0 +
              TrialState->sqpFval;
          }
        } else {
          MeritFunction->penaltyParam = fmax(oldDirIdx, 1.0E-10);
          MeritFunction->phi = MeritFunction->penaltyParam * 0.0 +
            TrialState->sqpFval;
        }

        MeritFunction->phiPrimePlus = fmin(TrialState->fstar -
          MeritFunction->penaltyParam * 0.0, 0.0);
      }

      test3_sortLambdaQP(TrialState->lambda, WorkingSet->nActiveConstr,
                         WorkingSet->sizes, WorkingSet->isActiveIdx,
                         WorkingSet->Wid, WorkingSet->Wlocalidx,
                         memspace->workspace_double);
      if ((TrialState->state <= 0) && (TrialState->state != -6)) {
        *STEP_TYPE = 2;
      } else {
        for (k = 0; k <= nVar_tmp_tmp; k++) {
          TrialState->delta_x->data[k] = TrialState->xstar->data[k];
        }

        guard1 = true;
      }
      break;

     case 2:
      iH0 = WorkingSet->nWConstr[0] + WorkingSet->nWConstr[1];
      mConstrMax = iH0 + 1;
      b_nVar = WorkingSet->nActiveConstr;
      for (k = mConstrMax; k <= b_nVar; k++) {
        WorkingSet->isActiveConstr->data[(WorkingSet->isActiveIdx
          [WorkingSet->Wid->data[k - 1] - 1] + WorkingSet->Wlocalidx->data[k - 1])
          - 2] = false;
      }

      WorkingSet->nWConstr[2] = 0;
      WorkingSet->nWConstr[3] = 0;
      WorkingSet->nWConstr[4] = 0;
      WorkingSet->nActiveConstr = iH0;
      b_nVar = b->size[0];
      b->size[0] = TrialState->xstar->size[0];
      test3_emxEnsureCapacity_real_T(b, b_nVar);
      iH0 = TrialState->xstar->size[0];
      for (b_nVar = 0; b_nVar < iH0; b_nVar++) {
        b->data[b_nVar] = TrialState->xstar->data[b_nVar];
      }

      b_nVar = WorkingSet->sizes[3] - 1;
      mConstrMax = WorkingSet->sizes[4] - 1;
      if (lb->size[0] != 0) {
        if (ub->size[0] == 0) {
          for (k = 0; k <= b_nVar; k++) {
            oldDirIdx = WorkingSet->lb->data[WorkingSet->indexLB->data[k] - 1];
            if (-b->data[WorkingSet->indexLB->data[k] - 1] > oldDirIdx) {
              b->data[WorkingSet->indexLB->data[k] - 1] = -oldDirIdx + fabs
                (oldDirIdx);
            }
          }
        } else {
          for (k = 0; k <= b_nVar; k++) {
            oldDirIdx = WorkingSet->lb->data[WorkingSet->indexLB->data[k] - 1];
            if (-b->data[WorkingSet->indexLB->data[k] - 1] > oldDirIdx) {
              if (rtIsInf(ub->data[WorkingSet->indexLB->data[k] - 1])) {
                b->data[WorkingSet->indexLB->data[k] - 1] = -WorkingSet->
                  lb->data[WorkingSet->indexLB->data[k] - 1] + fabs
                  (WorkingSet->lb->data[WorkingSet->indexLB->data[k] - 1]);
              } else {
                b->data[WorkingSet->indexLB->data[k] - 1] = (WorkingSet->
                  ub->data[WorkingSet->indexLB->data[k] - 1] - oldDirIdx) / 2.0;
              }
            }
          }
        }
      }

      if (ub->size[0] != 0) {
        if (lb->size[0] == 0) {
          for (k = 0; k <= mConstrMax; k++) {
            oldDirIdx = WorkingSet->ub->data[WorkingSet->indexUB->data[k] - 1];
            if (b->data[WorkingSet->indexUB->data[k] - 1] > oldDirIdx) {
              b->data[WorkingSet->indexUB->data[k] - 1] = oldDirIdx - fabs
                (oldDirIdx);
            }
          }
        } else {
          for (k = 0; k <= mConstrMax; k++) {
            oldDirIdx = WorkingSet->ub->data[WorkingSet->indexUB->data[k] - 1];
            if (b->data[WorkingSet->indexUB->data[k] - 1] > oldDirIdx) {
              if (rtIsInf(lb->data[WorkingSet->indexUB->data[k] - 1])) {
                b->data[WorkingSet->indexUB->data[k] - 1] = WorkingSet->ub->
                  data[WorkingSet->indexUB->data[k] - 1] - fabs(WorkingSet->
                  ub->data[WorkingSet->indexUB->data[k] - 1]);
              } else {
                b->data[WorkingSet->indexUB->data[k] - 1] = (oldDirIdx -
                  WorkingSet->lb->data[WorkingSet->indexUB->data[k] - 1]) / 2.0;
              }
            }
          }
        }
      }

      b_nVar = TrialState->xstar->size[0];
      TrialState->xstar->size[0] = b->size[0];
      test3_emxEnsureCapacity_real_T(TrialState->xstar, b_nVar);
      iH0 = b->size[0];
      for (b_nVar = 0; b_nVar < iH0; b_nVar++) {
        TrialState->xstar->data[b_nVar] = b->data[b_nVar];
      }

      test3_relaxed(Hessian, TrialState->grad, TrialState, MeritFunction,
                    memspace, WorkingSet, QRManager, CholManager, QPObjective,
                    qpoptions);
      for (k = 0; k <= nVar_tmp_tmp; k++) {
        TrialState->delta_x->data[k] = TrialState->xstar->data[k];
      }

      guard1 = true;
      break;

     default:
      b_nVar = WorkingSet->nVar - 1;
      mConstrMax = WorkingSet->mConstrMax - 1;
      for (k = 0; k <= b_nVar; k++) {
        TrialState->xstarsqp->data[k] = TrialState->xstarsqp_old->data[k];
        TrialState->socDirection->data[k] = TrialState->xstar->data[k];
      }

      for (k = 0; k <= mConstrMax; k++) {
        TrialState->lambdaStopTest->data[k] = TrialState->lambda->data[k];
      }

      for (k = 0; k <= b_nVar; k++) {
        TrialState->xstar->data[k] = TrialState->xstarsqp->data[k];
      }

      emxCopyStruct_s_k8kXP0ntDjd4qxs(&b_WorkingSet, WorkingSet);
      qpoptions_0 = *qpoptions;
      test3_driver_d(Hessian, TrialState->grad, TrialState, memspace,
                     &b_WorkingSet, QRManager, CholManager, QPObjective,
                     &qpoptions_0, qpoptions->MaxIterations);
      for (k = 0; k <= b_nVar; k++) {
        oldDirIdx = TrialState->socDirection->data[k];
        TrialState->socDirection->data[k] = TrialState->xstar->data[k] -
          oldDirIdx;
        TrialState->xstar->data[k] = oldDirIdx;
      }

      stepSuccess = (test3_xnrm2_a(WorkingSet->nVar, TrialState->socDirection) <=
                     2.0 * test3_xnrm2_a(WorkingSet->nVar, TrialState->xstar));
      if (!stepSuccess) {
        for (k = 0; k <= mConstrMax; k++) {
          TrialState->lambda->data[k] = TrialState->lambdaStopTest->data[k];
        }
      } else {
        test3_sortLambdaQP(TrialState->lambda, b_WorkingSet.nActiveConstr,
                           b_WorkingSet.sizes, b_WorkingSet.isActiveIdx,
                           b_WorkingSet.Wid, b_WorkingSet.Wlocalidx,
                           memspace->workspace_double);
      }

      emxCopyStruct_s_k8kXP0ntDjd4qxs(WorkingSet, &b_WorkingSet);
      checkBoundViolation = stepSuccess;
      if (stepSuccess && (TrialState->state != -6)) {
        for (k = 0; k <= nVar_tmp_tmp; k++) {
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
        b_nVar = Hessian->size[0] - 1;
        oldDirIdx = 0.0;
        linearizedConstrViolPrev = 1.0;
        for (k = 0; k <= b_nVar; k++) {
          oldDirIdx = fmax(oldDirIdx, fabs(TrialState->grad->data[k]));
          linearizedConstrViolPrev = fmax(linearizedConstrViolPrev, fabs
            (TrialState->xstar->data[k]));
        }

        oldDirIdx = fmax(2.2204460492503131E-16, oldDirIdx /
                         linearizedConstrViolPrev);
        for (k = 0; k <= b_nVar; k++) {
          iH0 = (b_nVar + 1) * k;
          for (mConstrMax = 0; mConstrMax < k; mConstrMax++) {
            Hessian->data[iH0 + mConstrMax] = 0.0;
          }

          Hessian->data[k + Hessian->size[0] * k] = oldDirIdx;
          iH0 += k;
          mConstrMax = b_nVar - k;
          if (mConstrMax - 1 >= 0) {
            memset(&Hessian->data[iH0 + 1], 0, (uint32_T)((mConstrMax + iH0) -
                    iH0) * sizeof(real_T));
          }
        }
      }
    }
  } while (exitg1 == 0);

  emxFreeStruct_s_k8kXP0ntDjd4qxs(&b_WorkingSet);
  if (checkBoundViolation) {
    mConstrMax = WorkingSet->sizes[3];
    k = WorkingSet->sizes[4];
    b_nVar = b->size[0];
    b->size[0] = TrialState->delta_x->size[0];
    test3_emxEnsureCapacity_real_T(b, b_nVar);
    iH0 = TrialState->delta_x->size[0];
    for (b_nVar = 0; b_nVar < iH0; b_nVar++) {
      b->data[b_nVar] = TrialState->delta_x->data[b_nVar];
    }

    if (lb->size[0] != 0) {
      for (b_nVar = 0; b_nVar < mConstrMax; b_nVar++) {
        linearizedConstrViolPrev = b->data[WorkingSet->indexLB->data[b_nVar] - 1];
        oldDirIdx = (TrialState->xstarsqp->data[WorkingSet->indexLB->data[b_nVar]
                     - 1] + linearizedConstrViolPrev) - lb->data
          [WorkingSet->indexLB->data[b_nVar] - 1];
        if (oldDirIdx < 0.0) {
          b->data[WorkingSet->indexLB->data[b_nVar] - 1] =
            linearizedConstrViolPrev - oldDirIdx;
          TrialState->xstar->data[WorkingSet->indexLB->data[b_nVar] - 1] -=
            oldDirIdx;
        }
      }
    }

    if (ub->size[0] != 0) {
      for (b_nVar = 0; b_nVar < k; b_nVar++) {
        linearizedConstrViolPrev = b->data[WorkingSet->indexUB->data[b_nVar] - 1];
        oldDirIdx = (ub->data[WorkingSet->indexUB->data[b_nVar] - 1] -
                     TrialState->xstarsqp->data[WorkingSet->indexUB->data[b_nVar]
                     - 1]) - linearizedConstrViolPrev;
        if (oldDirIdx < 0.0) {
          b->data[WorkingSet->indexUB->data[b_nVar] - 1] =
            linearizedConstrViolPrev + oldDirIdx;
          TrialState->xstar->data[WorkingSet->indexUB->data[b_nVar] - 1] +=
            oldDirIdx;
        }
      }
    }

    b_nVar = TrialState->delta_x->size[0];
    TrialState->delta_x->size[0] = b->size[0];
    test3_emxEnsureCapacity_real_T(TrialState->delta_x, b_nVar);
    iH0 = b->size[0];
    for (b_nVar = 0; b_nVar < iH0; b_nVar++) {
      TrialState->delta_x->data[b_nVar] = b->data[b_nVar];
    }
  }

  test3_emxFree_real_T(&b);
  return stepSuccess;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_evalObjAndConstr(const s_IhzSggsSakhYrqTLyRPh4_test3_T
  obj_next_next_next_next_next_ne, const emxArray_real_T_test3_T *x, real_T
  *fval, int32_T *status)
{
  boolean_T tmp;
  *fval = test3_eML_blk_kernel_anonFcn1(obj_next_next_next_next_next_ne.x0,
    obj_next_next_next_next_next_ne.xref, obj_next_next_next_next_next_ne.uref,
    obj_next_next_next_next_next_ne.N, x);
  *status = 1;
  tmp = rtIsNaN(*fval);
  if (rtIsInf(*fval) || tmp) {
    if (tmp) {
      *status = -3;
    } else if (*fval < 0.0) {
      *status = -1;
    } else {
      *status = -2;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_driver(emxArray_real_T_test3_T *Hessian, const
  emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  s_PLLLBDg14rHiR3qEakQweE_test_T *TrialState, sG8JZ69axY52WWR6RKyApQC_test3_T
  *MeritFunction, const coder_internal_stickyStruct_9_T *FcnEvaluator,
  s_ZbRibKlg6CoahmaZOjRYjD_test_T *FiniteDifferences,
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T *memspace, s_k8kXP0ntDjd4qxsrByEVbG_test_T
  *WorkingSet, s_l1Gll5dfO9DpqQrvRqAf7E_test_T *QRManager,
  s_vdGXtauKr5HuLAqoxBLhXH_test_T *CholManager, s_saWPFfMboRdWeRqIEJ4x8C_test_T *
  QPObjective, int32_T runTimeOptions_MaxFunctionEvalu)
{
  s7RdrPWkr8UPAUyTdDJkLaG_test3_T Flags;
  somzaGboVhDG7PNQS6E98jD_test3_T expl_temp;
  real_T TrialState_0;
  real_T phi_alpha;
  int32_T b_nVar;
  int32_T e;
  int32_T mConstr;
  int32_T mFixed;
  int32_T mLB;
  int32_T mUB;
  int32_T qpoptions_MaxIterations;
  int32_T u1;
  boolean_T hasLB;
  boolean_T hasUB;
  boolean_T tooSmallX;
  static const char_T g[7] = { 'f', 'm', 'i', 'n', 'c', 'o', 'n' };

  somzaGboVhDG7PNQS6E98jD_test3_T expl_temp_0;
  int32_T exitg1;
  int32_T exitg2;
  int32_T nVar_tmp_tmp;
  boolean_T exitg3;
  nVar_tmp_tmp = WorkingSet->nVar - 1;
  mFixed = WorkingSet->sizes[0];
  mLB = WorkingSet->sizes[3];
  mUB = WorkingSet->sizes[4];
  mConstr = (WorkingSet->sizes[0] + WorkingSet->sizes[3]) + WorkingSet->sizes[4];
  u1 = (WorkingSet->sizes[3] + WorkingSet->sizes[4]) + (WorkingSet->sizes[0] <<
    1);
  if (WorkingSet->nVar >= u1) {
    u1 = WorkingSet->nVar;
  }

  qpoptions_MaxIterations = 10 * u1;
  TrialState->steplength = 1.0;
  test3_test_exit(MeritFunction, WorkingSet, TrialState, lb, ub,
                  runTimeOptions_MaxFunctionEvalu, &Flags.gradOK, &Flags.fevalOK,
                  &Flags.done, &Flags.stepAccepted, &Flags.failedLineSearch,
                  &Flags.stepType);
  TrialState->sqpFval_old = TrialState->sqpFval;
  b_nVar = TrialState->xstarsqp->size[0] - 1;
  for (u1 = 0; u1 <= b_nVar; u1++) {
    TrialState->xstarsqp_old->data[u1] = TrialState->xstarsqp->data[u1];
    TrialState->grad_old->data[u1] = TrialState->grad->data[u1];
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
      for (b_nVar = 0; b_nVar < 7; b_nVar++) {
        expl_temp.SolverName[b_nVar] = g[b_nVar];
      }
    }

    do {
      exitg1 = 0;
      hasLB = !Flags.failedLineSearch;
      if ((!Flags.stepAccepted) && hasLB) {
        if (Flags.stepType != 3) {
          hasLB = (lb->size[0] != 0);
          hasUB = (ub->size[0] != 0);
          if (hasLB) {
            for (u1 = 0; u1 < mLB; u1++) {
              WorkingSet->lb->data[WorkingSet->indexLB->data[u1] - 1] =
                -lb->data[WorkingSet->indexLB->data[u1] - 1] +
                TrialState->xstarsqp->data[WorkingSet->indexLB->data[u1] - 1];
            }
          }

          if (hasUB) {
            for (u1 = 0; u1 < mUB; u1++) {
              WorkingSet->ub->data[WorkingSet->indexUB->data[u1] - 1] = ub->
                data[WorkingSet->indexUB->data[u1] - 1] - TrialState->
                xstarsqp->data[WorkingSet->indexUB->data[u1] - 1];
            }
          }

          if (hasLB && hasUB) {
            for (u1 = 0; u1 < mFixed; u1++) {
              TrialState_0 = ub->data[WorkingSet->indexFixed->data[u1] - 1] -
                TrialState->xstarsqp->data[WorkingSet->indexFixed->data[u1] - 1];
              WorkingSet->ub->data[WorkingSet->indexFixed->data[u1] - 1] =
                TrialState_0;
              WorkingSet->bwset->data[u1] = TrialState_0;
            }
          }

          if (WorkingSet->nActiveConstr > mFixed) {
            if (mFixed + 1 >= 1) {
              b_nVar = mFixed + 1;
            } else {
              b_nVar = 1;
            }

            e = WorkingSet->nActiveConstr;
            for (u1 = b_nVar; u1 <= e; u1++) {
              switch (WorkingSet->Wid->data[u1 - 1]) {
               case 4:
                WorkingSet->bwset->data[u1 - 1] = WorkingSet->lb->
                  data[WorkingSet->indexLB->data[WorkingSet->Wlocalidx->data[u1
                  - 1] - 1] - 1];
                break;

               case 5:
                WorkingSet->bwset->data[u1 - 1] = WorkingSet->ub->
                  data[WorkingSet->indexUB->data[WorkingSet->Wlocalidx->data[u1
                  - 1] - 1] - 1];
                break;
              }
            }
          }
        }

        expl_temp_0 = expl_temp;
        Flags.stepAccepted = test3_step_o(&Flags.stepType, Hessian, lb, ub,
          TrialState, MeritFunction, memspace, WorkingSet, QRManager,
          CholManager, QPObjective, &expl_temp_0);
        if (Flags.stepAccepted) {
          for (u1 = 0; u1 <= nVar_tmp_tmp; u1++) {
            TrialState->xstarsqp->data[u1] += TrialState->delta_x->data[u1];
          }

          test3_evalObjAndConstr
            (FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
             TrialState->xstarsqp, &TrialState->sqpFval, &u1);
          Flags.fevalOK = (u1 == 1);
          TrialState->FunctionEvaluations++;
          if (Flags.fevalOK) {
            MeritFunction->phiFullStep = MeritFunction->penaltyParam * 0.0 +
              TrialState->sqpFval;
          } else {
            MeritFunction->phiFullStep = (rtInf);
          }
        }

        if ((Flags.stepType == 1) && Flags.stepAccepted && Flags.fevalOK &&
            (MeritFunction->phi < MeritFunction->phiFullStep) &&
            (TrialState->sqpFval < TrialState->sqpFval_old)) {
          Flags.stepType = 3;
          Flags.stepAccepted = false;
        } else {
          hasLB = ((Flags.stepType == 3) && Flags.stepAccepted);
          hasUB = Flags.fevalOK;
          b_nVar = WorkingSet->nVar - 1;
          TrialState_0 = 1.0;
          e = 1;
          phi_alpha = MeritFunction->phiFullStep;
          for (u1 = 0; u1 <= b_nVar; u1++) {
            TrialState->searchDir->data[u1] = TrialState->delta_x->data[u1];
          }

          do {
            exitg2 = 0;
            if (TrialState->FunctionEvaluations <
                runTimeOptions_MaxFunctionEvalu) {
              if (hasUB && (phi_alpha <= TrialState_0 * 0.0001 *
                            MeritFunction->phiPrimePlus + MeritFunction->phi)) {
                exitg2 = 1;
              } else {
                TrialState_0 *= 0.7;
                for (u1 = 0; u1 <= b_nVar; u1++) {
                  TrialState->delta_x->data[u1] = TrialState_0 *
                    TrialState->xstar->data[u1];
                }

                if (hasLB) {
                  phi_alpha = TrialState_0 * TrialState_0;
                  if ((b_nVar + 1 >= 1) && (!(phi_alpha == 0.0))) {
                    for (u1 = 0; u1 <= b_nVar; u1++) {
                      TrialState->delta_x->data[u1] += phi_alpha *
                        TrialState->socDirection->data[u1];
                    }
                  }
                }

                tooSmallX = true;
                u1 = 0;
                exitg3 = false;
                while ((!exitg3) && (u1 <= b_nVar)) {
                  if (1.0E-6 * fmax(1.0, fabs(TrialState->xstarsqp->data[u1])) <=
                      fabs(TrialState->delta_x->data[u1])) {
                    tooSmallX = false;
                    exitg3 = true;
                  } else {
                    u1++;
                  }
                }

                if (tooSmallX) {
                  e = -2;
                  exitg2 = 1;
                } else {
                  for (u1 = 0; u1 <= b_nVar; u1++) {
                    TrialState->xstarsqp->data[u1] = TrialState->
                      xstarsqp_old->data[u1] + TrialState->delta_x->data[u1];
                  }

                  test3_evalObjAndConstr
                    (FcnEvaluator->next.next.next.next.next.next.next.next.b_value.workspace,
                     TrialState->xstarsqp, &TrialState->sqpFval, &u1);
                  TrialState->FunctionEvaluations++;
                  hasUB = (u1 == 1);
                  if (hasUB) {
                    phi_alpha = MeritFunction->penaltyParam * 0.0 +
                      TrialState->sqpFval;
                  } else {
                    phi_alpha = (rtInf);
                  }
                }
              }
            } else {
              e = 0;
              exitg2 = 1;
            }
          } while (exitg2 == 0);

          Flags.fevalOK = hasUB;
          TrialState->steplength = TrialState_0;
          if (e > 0) {
            Flags.stepAccepted = true;
          } else {
            Flags.failedLineSearch = true;
          }
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (Flags.stepAccepted && hasLB) {
      for (u1 = 0; u1 <= nVar_tmp_tmp; u1++) {
        TrialState->xstarsqp->data[u1] = TrialState->xstarsqp_old->data[u1] +
          TrialState->delta_x->data[u1];
      }

      for (u1 = 0; u1 < mConstr; u1++) {
        TrialState_0 = TrialState->lambdasqp->data[u1];
        TrialState->lambdasqp->data[u1] = (TrialState->lambda->data[u1] -
          TrialState_0) * TrialState->steplength + TrialState_0;
      }

      TrialState->sqpFval_old = TrialState->sqpFval;
      b_nVar = TrialState->xstarsqp->size[0] - 1;
      for (u1 = 0; u1 <= b_nVar; u1++) {
        TrialState->xstarsqp_old->data[u1] = TrialState->xstarsqp->data[u1];
        TrialState->grad_old->data[u1] = TrialState->grad->data[u1];
      }

      Flags.gradOK = test3_computeFiniteDifferences(FiniteDifferences,
        TrialState->sqpFval, TrialState->xstarsqp, TrialState->grad, lb, ub);
      TrialState->FunctionEvaluations += FiniteDifferences->numEvals;
    } else {
      TrialState->sqpFval = TrialState->sqpFval_old;
      b_nVar = TrialState->xstarsqp->size[0];
      for (u1 = 0; u1 < b_nVar; u1++) {
        TrialState->xstarsqp->data[u1] = TrialState->xstarsqp_old->data[u1];
      }
    }

    test3_test_exit_k(&Flags, memspace, MeritFunction, WorkingSet, TrialState,
                      QRManager, lb, ub, runTimeOptions_MaxFunctionEvalu);
    if ((!Flags.done) && Flags.stepAccepted) {
      Flags.stepAccepted = false;
      Flags.stepType = 1;
      Flags.failedLineSearch = false;
      for (u1 = 0; u1 <= nVar_tmp_tmp; u1++) {
        TrialState_0 = TrialState->grad->data[u1];
        TrialState->delta_gradLag->data[u1] = TrialState_0;
        if (nVar_tmp_tmp + 1 >= 1) {
          TrialState->delta_gradLag->data[u1] = TrialState_0 -
            TrialState->grad_old->data[u1];
        }
      }

      test3_BFGSUpdate(nVar_tmp_tmp + 1, Hessian, TrialState->delta_x,
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

static void emxFreeStruct_s_IhzSggsSakhYrqT(s_IhzSggsSakhYrqTLyRPh4_test3_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->xref);
  test3_emxFree_real_T(&pStruct->uref);
}

static void emxFreeStruct_anonymous_functio(anonymous_function_test3_T *pStruct)
{
  emxFreeStruct_s_IhzSggsSakhYrqT(&pStruct->workspace);
}

static void emxFreeStruct_s_ZbRibKlg6Coahma(s_ZbRibKlg6CoahmaZOjRYjD_test_T
  *pStruct)
{
  emxFreeStruct_anonymous_functio(&pStruct->objfun);
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

static void emxFreeStruct_s_PLLLBDg14rHiR3q(s_PLLLBDg14rHiR3qEakQweE_test_T
  *pStruct)
{
  test3_emxFree_real_T(&pStruct->xstarsqp);
  test3_emxFree_real_T(&pStruct->xstarsqp_old);
  test3_emxFree_real_T(&pStruct->grad);
  test3_emxFree_real_T(&pStruct->grad_old);
  test3_emxFree_real_T(&pStruct->lambdasqp);
  test3_emxFree_real_T(&pStruct->lambdaStopTest);
  test3_emxFree_real_T(&pStruct->lambdaStopTestPrev);
  test3_emxFree_real_T(&pStruct->delta_x);
  test3_emxFree_real_T(&pStruct->socDirection);
  test3_emxFree_int32_T(&pStruct->workingset_old);
  test3_emxFree_real_T(&pStruct->gradLag);
  test3_emxFree_real_T(&pStruct->delta_gradLag);
  test3_emxFree_real_T(&pStruct->xstar);
  test3_emxFree_real_T(&pStruct->lambda);
  test3_emxFree_real_T(&pStruct->searchDir);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void test3_fmincon(const real_T fun_workspace_x0[3], const
  emxArray_real_T_test3_T *fun_workspace_xref, const emxArray_real_T_test3_T
  *fun_workspace_uref, real_T fun_workspace_N, const emxArray_real_T_test3_T *x0,
  const emxArray_real_T_test3_T *lb, const emxArray_real_T_test3_T *ub,
  emxArray_real_T_test3_T *x)
{
  coder_internal_stickyStruct_9_T FcnEvaluator;
  emxArray_real_T_test3_T *Hessian;
  sG8JZ69axY52WWR6RKyApQC_test3_T MeritFunction;
  s_PLLLBDg14rHiR3qEakQweE_test_T TrialState;
  s_ZbRibKlg6CoahmaZOjRYjD_test_T FiniteDifferences;
  s_k8kXP0ntDjd4qxsrByEVbG_test_T WorkingSet;
  s_l1Gll5dfO9DpqQrvRqAf7E_test_T QRManager;
  s_pIaUYPkQBTqVmAKxFPiGQF_test_T memspace;
  s_saWPFfMboRdWeRqIEJ4x8C_test_T QPObjective;
  s_vdGXtauKr5HuLAqoxBLhXH_test_T CholManager;
  real_T fval;
  int32_T Hessian_0;
  int32_T colOffsetATw;
  int32_T i;
  int32_T mConstrMax;
  int32_T maxDims;
  int32_T nVar;
  boolean_T hasLB;
  boolean_T hasUB;
  nVar = x0->size[0] - 1;
  mConstrMax = (lb->size[0] + ub->size[0]) + 1;
  if (x0->size[0] + 1 >= mConstrMax) {
    maxDims = x0->size[0] + 1;
  } else {
    maxDims = mConstrMax;
  }

  test3_emxInit_real_T(&Hessian, 2);
  colOffsetATw = Hessian->size[0] * Hessian->size[1];
  Hessian->size[0] = x0->size[0];
  Hessian->size[1] = x0->size[0];
  test3_emxEnsureCapacity_real_T(Hessian, colOffsetATw);
  colOffsetATw = x0->size[0] * x0->size[0];
  if (colOffsetATw - 1 >= 0) {
    memset(&Hessian->data[0], 0, (uint32_T)colOffsetATw * sizeof(real_T));
  }

  if (x0->size[0] > 0) {
    for (colOffsetATw = 0; colOffsetATw <= nVar; colOffsetATw++) {
      Hessian->data[colOffsetATw + Hessian->size[0] * colOffsetATw] = 1.0;
    }
  }

  emxInitStruct_s_PLLLBDg14rHiR3q(&TrialState);
  test3_factoryConstruct(x0->size[0] + 1, mConstrMax, x0, &TrialState);
  for (colOffsetATw = 0; colOffsetATw <= nVar; colOffsetATw++) {
    TrialState.xstarsqp->data[colOffsetATw] = x0->data[colOffsetATw];
  }

  emxInitStruct_coder_internal_st(&FcnEvaluator);
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[0] =
    fun_workspace_x0[0];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[1] =
    fun_workspace_x0[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.x0[2] =
    fun_workspace_x0[2];
  colOffsetATw =
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->
    size[0] *
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->
    size[1];
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->size
    [0] = 3;
  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->size
    [1] = fun_workspace_xref->size[1];
  test3_emxEnsureCapacity_real_T
    (FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref,
     colOffsetATw);
  colOffsetATw = 3 * fun_workspace_xref->size[1];
  for (i = 0; i < colOffsetATw; i++) {
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.xref->
      data[i] = fun_workspace_xref->data[i];
  }

  colOffsetATw =
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
     colOffsetATw);
  colOffsetATw = fun_workspace_uref->size[1] << 1;
  for (i = 0; i < colOffsetATw; i++) {
    FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.uref->
      data[i] = fun_workspace_uref->data[i];
  }

  FcnEvaluator.next.next.next.next.next.next.next.next.b_value.workspace.N =
    fun_workspace_N;
  emxInitStruct_s_ZbRibKlg6Coahma(&FiniteDifferences);
  test3_factoryConstruct_i(fun_workspace_x0, fun_workspace_xref,
    fun_workspace_uref, fun_workspace_N, x0->size[0], lb, ub, &FiniteDifferences);
  emxInitStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  QRManager.ldq = maxDims;
  colOffsetATw = QRManager.QR->size[0] * QRManager.QR->size[1];
  QRManager.QR->size[0] = maxDims;
  QRManager.QR->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.QR, colOffsetATw);
  colOffsetATw = QRManager.Q->size[0] * QRManager.Q->size[1];
  QRManager.Q->size[0] = maxDims;
  QRManager.Q->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.Q, colOffsetATw);
  colOffsetATw = maxDims * maxDims;
  for (i = 0; i < colOffsetATw; i++) {
    QRManager.Q->data[i] = 0.0;
  }

  colOffsetATw = QRManager.jpvt->size[0];
  QRManager.jpvt->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(QRManager.jpvt, colOffsetATw);
  for (i = 0; i < maxDims; i++) {
    QRManager.jpvt->data[i] = 0;
  }

  QRManager.mrows = 0;
  QRManager.ncols = 0;
  colOffsetATw = QRManager.tau->size[0];
  QRManager.tau->size[0] = maxDims;
  test3_emxEnsureCapacity_real_T(QRManager.tau, colOffsetATw);
  QRManager.minRowCol = 0;
  QRManager.usedPivoting = false;
  emxInitStruct_s_vdGXtauKr5HuLAq(&CholManager);
  colOffsetATw = CholManager.FMat->size[0] * CholManager.FMat->size[1];
  CholManager.FMat->size[0] = maxDims;
  CholManager.FMat->size[1] = maxDims;
  test3_emxEnsureCapacity_real_T(CholManager.FMat, colOffsetATw);
  CholManager.ldm = maxDims;
  CholManager.ndims = 0;
  CholManager.info = 0;
  CholManager.scaleFactor = 0.0;
  CholManager.ConvexCheck = true;
  CholManager.regTol_ = (rtInf);
  CholManager.workspace_ = (rtInf);
  CholManager.workspace2_ = (rtInf);
  emxInitStruct_s_saWPFfMboRdWeRq(&QPObjective);
  colOffsetATw = QPObjective.grad->size[0];
  QPObjective.grad->size[0] = x0->size[0] + 1;
  test3_emxEnsureCapacity_real_T(QPObjective.grad, colOffsetATw);
  colOffsetATw = QPObjective.Hx->size[0];
  QPObjective.Hx->size[0] = x0->size[0];
  test3_emxEnsureCapacity_real_T(QPObjective.Hx, colOffsetATw);
  QPObjective.maxVar = x0->size[0] + 1;
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
  colOffsetATw = memspace.workspace_double->size[0] *
    memspace.workspace_double->size[1];
  memspace.workspace_double->size[0] = maxDims;
  test3_emxEnsureCapacity_real_T(memspace.workspace_double, colOffsetATw);
  if (x0->size[0] + 1 > 2) {
    i = x0->size[0];
  } else {
    i = 1;
  }

  colOffsetATw = memspace.workspace_double->size[0] *
    memspace.workspace_double->size[1];
  memspace.workspace_double->size[1] = i + 1;
  test3_emxEnsureCapacity_real_T(memspace.workspace_double, colOffsetATw);
  colOffsetATw = memspace.workspace_int->size[0];
  memspace.workspace_int->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(memspace.workspace_int, colOffsetATw);
  colOffsetATw = memspace.workspace_sort->size[0];
  memspace.workspace_sort->size[0] = maxDims;
  test3_emxEnsureCapacity_int32_T(memspace.workspace_sort, colOffsetATw);
  emxInitStruct_s_k8kXP0ntDjd4qxs(&WorkingSet);
  test3_factoryConstruct_ir(x0->size[0], x0->size[0] + 1, mConstrMax,
    &WorkingSet);
  test3_compressBounds(x0->size[0], WorkingSet.indexLB, WorkingSet.indexUB,
                       WorkingSet.indexFixed, lb, ub, &colOffsetATw, &maxDims,
                       &nVar);
  WorkingSet.mConstrMax = mConstrMax;
  mConstrMax = (colOffsetATw + maxDims) + nVar;
  WorkingSet.mConstr = mConstrMax;
  WorkingSet.mConstrOrig = mConstrMax;
  WorkingSet.sizes[0] = nVar;
  WorkingSet.sizes[1] = 0;
  WorkingSet.sizes[2] = 0;
  WorkingSet.sizes[3] = colOffsetATw;
  WorkingSet.sizes[4] = maxDims;
  WorkingSet.sizesPhaseOne[0] = nVar;
  WorkingSet.sizesPhaseOne[1] = 0;
  WorkingSet.sizesPhaseOne[2] = 0;
  WorkingSet.sizesPhaseOne[3] = colOffsetATw + 1;
  WorkingSet.sizesPhaseOne[4] = maxDims;
  for (i = 0; i < 5; i++) {
    Hessian_0 = WorkingSet.sizes[i];
    WorkingSet.sizesNormal[i] = Hessian_0;
    WorkingSet.sizesRegularized[i] = Hessian_0;
    WorkingSet.sizesRegPhaseOne[i] = WorkingSet.sizesPhaseOne[i];
  }

  WorkingSet.isActiveIdxRegularized[0] = 1;
  WorkingSet.isActiveIdxRegularized[1] = nVar;
  WorkingSet.isActiveIdxRegularized[2] = 0;
  WorkingSet.isActiveIdxRegularized[3] = 0;
  WorkingSet.isActiveIdxRegularized[4] = colOffsetATw;
  WorkingSet.isActiveIdxRegularized[5] = maxDims;
  for (i = 0; i < 6; i++) {
    WorkingSet.isActiveIdxPhaseOne[i] = WorkingSet.isActiveIdxRegularized[i];
  }

  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxPhaseOne[mConstrMax];
  }

  for (i = 0; i < 6; i++) {
    WorkingSet.isActiveIdx[i] = WorkingSet.isActiveIdxPhaseOne[i];
    WorkingSet.isActiveIdxPhaseOne[i] = WorkingSet.isActiveIdxRegularized[i];
  }

  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxPhaseOne[mConstrMax];
  }

  WorkingSet.isActiveIdxRegPhaseOne[0] = 1;
  WorkingSet.isActiveIdxRegPhaseOne[1] = nVar;
  WorkingSet.isActiveIdxRegPhaseOne[2] = 0;
  WorkingSet.isActiveIdxRegPhaseOne[3] = 0;
  WorkingSet.isActiveIdxRegPhaseOne[4] = colOffsetATw + 1;
  WorkingSet.isActiveIdxRegPhaseOne[5] = maxDims;
  for (i = 0; i < 6; i++) {
    WorkingSet.isActiveIdxNormal[i] = WorkingSet.isActiveIdxPhaseOne[i];
    WorkingSet.isActiveIdxPhaseOne[i] = WorkingSet.isActiveIdxRegPhaseOne[i];
  }

  for (mConstrMax = 0; mConstrMax < 5; mConstrMax++) {
    WorkingSet.isActiveIdxPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxPhaseOne[mConstrMax];
    WorkingSet.isActiveIdxRegularized[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegularized[mConstrMax];
    WorkingSet.isActiveIdxRegPhaseOne[mConstrMax + 1] +=
      WorkingSet.isActiveIdxRegPhaseOne[mConstrMax];
  }

  if (lb->size[0] != 0) {
    for (mConstrMax = 0; mConstrMax < colOffsetATw; mConstrMax++) {
      TrialState.xstarsqp->data[WorkingSet.indexLB->data[mConstrMax] - 1] = 0.0;
    }
  }

  if (ub->size[0] != 0) {
    for (mConstrMax = 0; mConstrMax < maxDims; mConstrMax++) {
      TrialState.xstarsqp->data[WorkingSet.indexUB->data[mConstrMax] - 1] = 0.0;
    }

    for (mConstrMax = 0; mConstrMax < nVar; mConstrMax++) {
      Hessian_0 = WorkingSet.indexFixed->data[mConstrMax];
      TrialState.xstarsqp->data[Hessian_0 - 1] = ub->data[Hessian_0 - 1];
    }
  }

  fval = test3_eML_blk_kernel_anonFcn1(fun_workspace_x0, fun_workspace_xref,
    fun_workspace_uref, fun_workspace_N, TrialState.xstarsqp);
  TrialState.sqpFval = fval;
  test3_computeFiniteDifferences(&FiniteDifferences, fval, TrialState.xstarsqp,
    TrialState.grad, lb, ub);
  TrialState.FunctionEvaluations = FiniteDifferences.numEvals + 1;
  hasLB = (lb->size[0] != 0);
  hasUB = (ub->size[0] != 0);
  if (hasLB) {
    for (mConstrMax = 0; mConstrMax < colOffsetATw; mConstrMax++) {
      WorkingSet.lb->data[WorkingSet.indexLB->data[mConstrMax] - 1] = -lb->
        data[WorkingSet.indexLB->data[mConstrMax] - 1];
    }
  }

  if (hasUB) {
    for (colOffsetATw = 0; colOffsetATw < maxDims; colOffsetATw++) {
      WorkingSet.ub->data[WorkingSet.indexUB->data[colOffsetATw] - 1] = ub->
        data[WorkingSet.indexUB->data[colOffsetATw] - 1];
    }
  }

  if (hasLB && hasUB) {
    for (maxDims = 0; maxDims < nVar; maxDims++) {
      WorkingSet.ub->data[WorkingSet.indexFixed->data[maxDims] - 1] = ub->
        data[WorkingSet.indexFixed->data[maxDims] - 1];
      WorkingSet.bwset->data[maxDims] = ub->data[WorkingSet.indexFixed->
        data[maxDims] - 1];
    }
  }

  test3_setProblemType(&WorkingSet, 3);
  nVar = WorkingSet.isActiveIdx[2];
  maxDims = WorkingSet.mConstrMax;
  for (colOffsetATw = nVar; colOffsetATw <= maxDims; colOffsetATw++) {
    WorkingSet.isActiveConstr->data[colOffsetATw - 1] = false;
  }

  WorkingSet.nWConstr[0] = WorkingSet.sizes[0];
  WorkingSet.nWConstr[1] = 0;
  WorkingSet.nWConstr[2] = 0;
  WorkingSet.nWConstr[3] = 0;
  WorkingSet.nWConstr[4] = 0;
  WorkingSet.nActiveConstr = WorkingSet.nWConstr[0];
  nVar = WorkingSet.sizes[0];
  for (maxDims = 0; maxDims < nVar; maxDims++) {
    WorkingSet.Wid->data[maxDims] = 1;
    WorkingSet.Wlocalidx->data[maxDims] = maxDims + 1;
    WorkingSet.isActiveConstr->data[maxDims] = true;
    colOffsetATw = WorkingSet.ldA * maxDims;
    mConstrMax = WorkingSet.indexFixed->data[maxDims];
    for (i = 0; i <= mConstrMax - 2; i++) {
      WorkingSet.ATwset->data[i + colOffsetATw] = 0.0;
    }

    WorkingSet.ATwset->data[(WorkingSet.indexFixed->data[maxDims] + colOffsetATw)
      - 1] = 1.0;
    mConstrMax = WorkingSet.indexFixed->data[maxDims] + 1;
    i = WorkingSet.nVar;
    for (Hessian_0 = mConstrMax; Hessian_0 <= i; Hessian_0++) {
      WorkingSet.ATwset->data[(Hessian_0 + colOffsetATw) - 1] = 0.0;
    }

    WorkingSet.bwset->data[maxDims] = WorkingSet.ub->data
      [WorkingSet.indexFixed->data[maxDims] - 1];
  }

  MeritFunction.initFval = fval;
  MeritFunction.penaltyParam = 1.0;
  MeritFunction.threshold = 0.0001;
  MeritFunction.nPenaltyDecreases = 0;
  MeritFunction.linearizedConstrViol = 0.0;
  MeritFunction.initConstrViolationEq = 0.0;
  MeritFunction.initConstrViolationIneq = 0.0;
  MeritFunction.phi = 0.0;
  MeritFunction.phiPrimePlus = 0.0;
  MeritFunction.phiFullStep = 0.0;
  MeritFunction.feasRelativeFactor = 0.0;
  MeritFunction.nlpPrimalFeasError = 0.0;
  MeritFunction.nlpDualFeasError = 0.0;
  MeritFunction.nlpComplError = 0.0;
  MeritFunction.firstOrderOpt = 0.0;
  MeritFunction.hasObjective = true;
  test3_driver(Hessian, lb, ub, &TrialState, &MeritFunction, &FcnEvaluator,
               &FiniteDifferences, &memspace, &WorkingSet, &QRManager,
               &CholManager, &QPObjective, 100 * x0->size[0]);
  test3_emxFree_real_T(&Hessian);
  emxFreeStruct_s_k8kXP0ntDjd4qxs(&WorkingSet);
  emxFreeStruct_s_pIaUYPkQBTqVmAK(&memspace);
  emxFreeStruct_s_saWPFfMboRdWeRq(&QPObjective);
  emxFreeStruct_s_vdGXtauKr5HuLAq(&CholManager);
  emxFreeStruct_s_l1Gll5dfO9DpqQr(&QRManager);
  emxFreeStruct_s_ZbRibKlg6Coahma(&FiniteDifferences);
  emxFreeStruct_coder_in_kyv1kfe2(&FcnEvaluator);
  colOffsetATw = x->size[0];
  x->size[0] = TrialState.xstarsqp->size[0];
  test3_emxEnsureCapacity_real_T(x, colOffsetATw);
  colOffsetATw = TrialState.xstarsqp->size[0];
  for (i = 0; i < colOffsetATw; i++) {
    x->data[i] = TrialState.xstarsqp->data[i];
  }

  emxFreeStruct_s_PLLLBDg14rHiR3q(&TrialState);
}

/* Model output function */
void test3_output(void)
{
  emxArray_real_T_test3_T *h;
  emxArray_real_T_test3_T *horizon_idx;
  emxArray_real_T_test3_T *lb;
  emxArray_real_T_test3_T *tmp_0;
  emxArray_real_T_test3_T *u_opt;
  emxArray_real_T_test3_T *ub;
  emxArray_real_T_test3_T *xref;
  real_T tmp[3];
  real_T rtb_TmpSignalConversionAtHILWri[2];
  real_T apnd;
  real_T b_b;
  real_T cdiff;
  real_T ndbl;
  real_T rtb_Clock;
  int32_T ibcol;
  int32_T k;
  int32_T nm1d2;
  int32_T ntilerows;
  boolean_T didZcEventOccur;
  static const real_T g[603] = { 0.0, 0.0, 1.0121970114513341, 0.05,
    0.080000000000000016, 1.0121970114513341, 0.1, 0.16000000000000003,
    1.0121970114513341, 0.15000000000000002, 0.24000000000000005,
    1.0121970114513341, 0.2, 0.32000000000000006, 1.0121970114513341, 0.25, 0.4,
    1.0121970114513341, 0.30000000000000004, 0.48000000000000009,
    1.0121970114513341, 0.35000000000000003, 0.56, 1.0121970114513341, 0.4,
    0.64000000000000012, 1.0121970114513341, 0.45, 0.72000000000000008,
    1.0121970114513341, 0.5, 0.8, 1.0121970114513341, 0.55, 0.88000000000000012,
    1.0121970114513341, 0.60000000000000009, 0.96000000000000019,
    1.0121970114513341, 0.65, 1.04, 1.0121970114513341, 0.70000000000000007,
    1.12, 1.0121970114513341, 0.75, 1.2000000000000002, 1.0121970114513341, 0.8,
    1.2800000000000002, 1.0121970114513341, 0.85000000000000009,
    1.3600000000000003, 1.0121970114513341, 0.9, 1.4400000000000002,
    1.0121970114513341, 0.95000000000000007, 1.5200000000000002,
    1.0121970114513341, 1.0, 1.6, 1.0121970114513341, 1.05, 1.6800000000000002,
    1.0121970114513341, 1.1, 1.7600000000000002, 1.0121970114513341,
    1.1500000000000001, 1.8400000000000003, 1.0121970114513341,
    1.2000000000000002, 1.9200000000000004, 1.0121970114513341, 1.25, 2.0,
    1.0121970114513341, 1.3, 2.08, 1.0121970114513341, 1.35, 2.16,
    1.0121970114513341, 1.4000000000000001, 2.24, 1.0121970114513341,
    1.4500000000000002, 2.3200000000000003, 1.0121970114513341, 1.5,
    2.4000000000000004, 1.0121970114513341, 1.55, 2.4800000000000004,
    1.0121970114513341, 1.6, 2.5600000000000005, 1.0121970114513341,
    1.6500000000000001, 2.6400000000000006, 1.0121970114513341,
    1.7000000000000002, 2.7200000000000006, 1.0121970114513341, 1.75,
    2.8000000000000003, 1.0121970114513341, 1.8, 2.8800000000000003,
    1.0121970114513341, 1.85, 2.9600000000000004, 1.0121970114513341,
    1.9000000000000001, 3.0400000000000005, 1.0121970114513341,
    1.9500000000000002, 3.1200000000000006, 1.0121970114513341, 2.0, 3.2,
    1.0121970114513341, 2.0500000000000003, 3.2800000000000007,
    1.0121970114513341, 2.1, 3.3600000000000003, 1.0121970114513341, 2.15, 3.44,
    1.0121970114513341, 2.2, 3.5200000000000005, 1.0121970114513341, 2.25, 3.6,
    1.0121970114513341, 2.3000000000000003, 3.6800000000000006,
    1.0121970114513341, 2.35, 3.7600000000000002, 1.0121970114513341,
    2.4000000000000004, 3.8400000000000007, 1.0121970114513341, 2.45,
    3.9200000000000004, 1.0121970114513341, 2.5, 4.0, 1.0121970114513341,
    2.5500000000000003, 4.080000000000001, 1.0121970114513341, 2.6, 4.16,
    1.0121970114513341, 2.6500000000000004, 4.2400000000000011,
    1.0121970114513341, 2.7, 4.32, 1.0121970114513341, 2.75, 4.4,
    1.0121970114513341, 2.8000000000000003, 4.48, 1.0121970114513341, 2.85,
    4.5600000000000005, 1.0121970114513341, 2.9000000000000004,
    4.6400000000000006, 1.0121970114513341, 2.95, 4.7200000000000006,
    1.0121970114513341, 3.0, 4.8000000000000007, 1.0121970114513341,
    3.0500000000000003, 4.8800000000000008, 1.0121970114513341, 3.1,
    4.9600000000000009, 1.0121970114513341, 3.1500000000000004,
    5.0400000000000009, 1.0121970114513341, 3.2, 5.120000000000001,
    1.0121970114513341, 3.25, 5.2, 1.0121970114513341, 3.3000000000000003,
    5.2800000000000011, 1.0121970114513341, 3.35, 5.36, 1.0121970114513341,
    3.4000000000000004, 5.4400000000000013, 1.0121970114513341, 3.45,
    5.5200000000000005, 1.0121970114513341, 3.5, 5.6000000000000005,
    1.0121970114513341, 3.5500000000000003, 5.6800000000000006,
    1.0121970114513341, 3.6, 5.7600000000000007, 1.0121970114513341,
    3.6500000000000004, 5.8400000000000007, 1.0121970114513341, 3.7,
    5.9200000000000008, 1.0121970114513341, 3.75, 6.0, 1.0121970114513341,
    3.8000000000000003, 6.080000000000001, 1.0121970114513341, 3.85, 6.16,
    1.0121970114513341, 3.9000000000000004, 6.2400000000000011,
    1.0121970114513341, 3.95, 6.32, 1.0121970114513341, 4.0, 6.4,
    1.0121970114513341, 4.05, 6.48, 1.0121970114513341, 4.1000000000000005,
    6.5600000000000014, 1.0121970114513341, 4.15, 6.6400000000000006,
    1.0121970114513341, 4.2, 6.7200000000000006, 1.0121970114513341, 4.25,
    6.8000000000000007, 1.0121970114513341, 4.3, 6.88, 1.0121970114513341,
    4.3500000000000005, 6.9600000000000009, 1.0121970114513341, 4.4,
    7.0400000000000009, 1.0121970114513341, 4.45, 7.120000000000001,
    1.0121970114513341, 4.5, 7.2, 1.0121970114513341, 4.55, 7.28,
    1.0121970114513341, 4.6000000000000005, 7.3600000000000012,
    1.0121970114513341, 4.65, 7.4400000000000013, 1.0121970114513341, 4.7,
    7.5200000000000005, 1.0121970114513341, 4.75, 7.6000000000000005,
    1.0121970114513341, 4.8000000000000007, 7.6800000000000015,
    1.0121970114513341, 4.8500000000000005, 7.7600000000000016,
    1.0121970114513341, 4.9, 7.8400000000000007, 1.0121970114513341, 4.95,
    7.9200000000000008, 1.0121970114513341, 5.0, 8.0, 1.0121970114513341, 5.05,
    8.08, 1.0121970114513341, 5.1, 8.16, 1.0121970114513341, 5.1499999999999995,
    8.24, 1.0121970114513341, 5.1999999999999993, 8.3199999999999985,
    1.0121970114513341, 5.25, 8.4, 1.0121970114513341, 5.3, 8.48,
    1.0121970114513341, 5.35, 8.56, 1.0121970114513341, 5.3999999999999995,
    8.6399999999999988, 1.0121970114513341, 5.45, 8.72, 1.0121970114513341, 5.5,
    8.8, 1.0121970114513341, 5.55, 8.88, 1.0121970114513341, 5.6,
    8.9599999999999991, 1.0121970114513341, 5.6499999999999995, 9.04,
    1.0121970114513341, 5.7, 9.120000000000001, 1.0121970114513341, 5.75,
    9.2000000000000011, 1.0121970114513341, 5.8, 9.28, 1.0121970114513341, 5.85,
    9.36, 1.0121970114513341, 5.8999999999999995, 9.44, 1.0121970114513341, 5.95,
    9.5200000000000014, 1.0121970114513341, 6.0, 9.6000000000000014,
    1.0121970114513341, 6.05, 9.68, 1.0121970114513341, 6.1, 9.76,
    1.0121970114513341, 6.15, 9.8400000000000016, 1.0121970114513341,
    6.1999999999999993, 9.92, 1.0121970114513341, 6.25, 10.0, 1.0121970114513341,
    6.3, 10.08, 1.0121970114513341, 6.35, 10.16, 1.0121970114513341, 6.4,
    10.240000000000002, 1.0121970114513341, 6.4499999999999993, 10.32,
    1.0121970114513341, 6.5, 10.4, 1.0121970114513341, 6.55, 10.48,
    1.0121970114513341, 6.6, 10.56, 1.0121970114513341, 6.65, 10.64,
    1.0121970114513341, 6.6999999999999993, 10.719999999999999,
    1.0121970114513341, 6.75, 10.8, 1.0121970114513341, 6.8, 10.88,
    1.0121970114513341, 6.85, 10.96, 1.0121970114513341, 6.9, 11.040000000000001,
    1.0121970114513341, 6.9499999999999993, 11.12, 1.0121970114513341, 7.0,
    11.200000000000001, 1.0121970114513341, 7.05, 11.280000000000001,
    1.0121970114513341, 7.1, 11.36, 1.0121970114513341, 7.15, 11.440000000000001,
    1.0121970114513341, 7.1999999999999993, 11.52, 1.0121970114513341, 7.25,
    11.600000000000001, 1.0121970114513341, 7.3, 11.68, 1.0121970114513341, 7.35,
    11.76, 1.0121970114513341, 7.4, 11.840000000000002, 1.0121970114513341,
    7.4499999999999993, 11.92, 1.0121970114513341, 7.5, 12.0, 1.0121970114513341,
    7.55, 12.08, 1.0121970114513341, 7.6, 12.16, 1.0121970114513341, 7.65,
    12.240000000000002, 1.0121970114513341, 7.6999999999999993, 12.32,
    1.0121970114513341, 7.75, 12.4, 1.0121970114513341, 7.8, 12.48,
    1.0121970114513341, 7.85, 12.56, 1.0121970114513341, 7.9, 12.64,
    1.0121970114513341, 7.9499999999999993, 12.719999999999999,
    1.0121970114513341, 8.0, 12.8, 1.0121970114513341, 8.05, 12.880000000000003,
    1.0121970114513341, 8.1, 12.96, 1.0121970114513341, 8.15, 13.040000000000001,
    1.0121970114513341, 8.2, 13.12, 1.0121970114513341, 8.25, 13.200000000000001,
    1.0121970114513341, 8.3, 13.280000000000001, 1.0121970114513341, 8.35, 13.36,
    1.0121970114513341, 8.4, 13.440000000000001, 1.0121970114513341, 8.45, 13.52,
    1.0121970114513341, 8.5, 13.600000000000001, 1.0121970114513341, 8.55,
    13.680000000000001, 1.0121970114513341, 8.6, 13.76, 1.0121970114513341, 8.65,
    13.840000000000002, 1.0121970114513341, 8.7, 13.92, 1.0121970114513341, 8.75,
    14.0, 1.0121970114513341, 8.8, 14.080000000000002, 1.0121970114513341, 8.85,
    14.16, 1.0121970114513341, 8.9, 14.240000000000002, 1.0121970114513341, 8.95,
    14.32, 1.0121970114513341, 9.0, 14.4, 1.0121970114513341, 9.05,
    14.480000000000002, 1.0121970114513341, 9.1, 14.56, 1.0121970114513341, 9.15,
    14.64, 1.0121970114513341, 9.2, 14.719999999999999, 1.0121970114513341, 9.25,
    14.8, 1.0121970114513341, 9.3, 14.880000000000003, 1.0121970114513341, 9.35,
    14.96, 1.0121970114513341, 9.4, 15.040000000000001, 1.0121970114513341, 9.45,
    15.12, 1.0121970114513341, 9.5, 15.200000000000001, 1.0121970114513341, 9.55,
    15.280000000000001, 1.0121970114513341, 9.6, 15.36, 1.0121970114513341, 9.65,
    15.440000000000001, 1.0121970114513341, 9.7, 15.52, 1.0121970114513341, 9.75,
    15.600000000000001, 1.0121970114513341, 9.8, 15.680000000000001,
    1.0121970114513341, 9.85, 15.76, 1.0121970114513341, 9.9, 15.840000000000002,
    1.0121970114513341, 9.95, 15.92, 1.0121970114513341, 10.0, 16.0,
    1.0121970114513341 };

  static const real_T h_0[402] = { 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0, 0.94339811320566047, 0.0, 0.94339811320566047,
    0.0, 0.94339811320566047, 0.0 };

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

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S6>/Constant2'
   *  Integrator: '<S8>/Integrator2'
   */
  test3_B.Product1 = test3_P.Constant2_Value * test3_X.Integrator2_CSTATE;

  /* Product: '<S9>/Product1' incorporates:
   *  Constant: '<S6>/Constant4'
   *  Integrator: '<S9>/Integrator2'
   */
  test3_B.Product1_i = test3_P.Constant4_Value * test3_X.Integrator2_CSTATE_i;

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<S6>/Constant6'
   *  Integrator: '<S10>/Integrator2'
   */
  test3_B.Product1_n = test3_P.Constant6_Value * test3_X.Integrator2_CSTATE_c;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (hil_read_block): '<S6>/HIL Read' */

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

  /* Integrator: '<S12>/Integrator1' */
  if (test3_DW.Integrator1_IWORK != 0) {
    test3_X.Integrator1_CSTATE = test3_B.analogpower;
  }

  /* Integrator: '<S12>/Integrator1' */
  test3_B.Integrator1 = test3_X.Integrator1_CSTATE;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<S6>/Unwrap 2^2' */
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

  /* Integrator: '<S13>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_i != 0) {
    test3_X.Integrator1_CSTATE_m = test3_B.Unwrap22;
  }

  /* Integrator: '<S13>/Integrator1' */
  test3_B.Integrator1_g = test3_X.Integrator1_CSTATE_m;

  /* Product: '<S11>/Product1' incorporates:
   *  Constant: '<S6>/Constant8'
   *  Integrator: '<S11>/Integrator2'
   */
  test3_B.Product1_p = test3_P.Constant8_Value * test3_X.Integrator2_CSTATE_f;

  /* Integrator: '<S6>/Integrator' */
  test3_B.Integrator = test3_X.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<S6>/Unwrap 2^24' */
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

  /* Integrator: '<S8>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_g != 0) {
    test3_X.Integrator1_CSTATE_p = test3_B.Unwrap224;
  }

  /* Product: '<S8>/Product' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S8>/Constant'
   *  Integrator: '<S8>/Integrator1'
   *  Integrator: '<S8>/Integrator2'
   *  Product: '<S8>/Product2'
   *  Sum: '<S8>/Sum'
   *  Sum: '<S8>/Sum1'
   */
  test3_B.Product = ((test3_B.Unwrap224 - test3_X.Integrator1_CSTATE_p) -
                     test3_X.Integrator2_CSTATE * test3_P.Constant_Value_h *
                     test3_P.Constant1_Value) * test3_P.Constant2_Value;

  /* Integrator: '<S9>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_d != 0) {
    test3_X.Integrator1_CSTATE_h = test3_B.HILRead_o3[1];
  }

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant4'
   *  Constant: '<S9>/Constant'
   *  Integrator: '<S9>/Integrator1'
   *  Integrator: '<S9>/Integrator2'
   *  Product: '<S9>/Product2'
   *  Sum: '<S9>/Sum'
   *  Sum: '<S9>/Sum1'
   */
  test3_B.Product_d = ((test3_B.HILRead_o3[1] - test3_X.Integrator1_CSTATE_h) -
                       test3_X.Integrator2_CSTATE_i * test3_P.Constant_Value_l *
                       test3_P.Constant3_Value) * test3_P.Constant4_Value;

  /* Integrator: '<S10>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_gg != 0) {
    test3_X.Integrator1_CSTATE_b = test3_B.HILRead_o3[2];
  }

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S6>/Constant5'
   *  Constant: '<S6>/Constant6'
   *  Integrator: '<S10>/Integrator1'
   *  Integrator: '<S10>/Integrator2'
   *  Product: '<S10>/Product2'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S10>/Sum1'
   */
  test3_B.Product_m = ((test3_B.HILRead_o3[2] - test3_X.Integrator1_CSTATE_b) -
                       test3_X.Integrator2_CSTATE_c * test3_P.Constant_Value_i *
                       test3_P.Constant5_Value) * test3_P.Constant6_Value;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* S-Function (inverse_modulus_block): '<S6>/Unwrap 2^1' */
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

  /* Integrator: '<S11>/Integrator1' */
  if (test3_DW.Integrator1_IWORK_l != 0) {
    test3_X.Integrator1_CSTATE_n = test3_B.Unwrap21;
  }

  /* Product: '<S11>/Product' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S6>/Constant7'
   *  Constant: '<S6>/Constant8'
   *  Integrator: '<S11>/Integrator1'
   *  Integrator: '<S11>/Integrator2'
   *  Product: '<S11>/Product2'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S11>/Sum1'
   */
  test3_B.Product_b = ((test3_B.Unwrap21 - test3_X.Integrator1_CSTATE_n) -
                       test3_X.Integrator2_CSTATE_f * test3_P.Constant_Value_e *
                       test3_P.Constant7_Value) * test3_P.Constant8_Value;

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S6>/Constant10'
   *  Constant: '<S6>/Constant9'
   *  Integrator: '<S12>/Integrator2'
   *  Product: '<S12>/Product2'
   *  Sum: '<S12>/Sum'
   *  Sum: '<S12>/Sum1'
   */
  test3_B.Product_e = ((test3_B.analogpower - test3_B.Integrator1) -
                       test3_X.Integrator2_CSTATE_m * test3_P.Constant_Value_j *
                       test3_P.Constant9_Value_f) * test3_P.Constant10_Value_f;

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S6>/Constant10'
   *  Integrator: '<S12>/Integrator2'
   */
  test3_B.Product1_b = test3_P.Constant10_Value_f * test3_X.Integrator2_CSTATE_m;

  /* Product: '<S13>/Product' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S6>/Constant11'
   *  Constant: '<S6>/Constant12'
   *  Integrator: '<S13>/Integrator2'
   *  Product: '<S13>/Product2'
   *  Sum: '<S13>/Sum'
   *  Sum: '<S13>/Sum1'
   */
  test3_B.Product_p = ((test3_B.Unwrap22 - test3_B.Integrator1_g) -
                       test3_X.Integrator2_CSTATE_b * test3_P.Constant_Value_n *
                       test3_P.Constant11_Value) * test3_P.Constant12_Value;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S6>/Constant12'
   *  Integrator: '<S13>/Integrator2'
   */
  test3_B.Product1_g = test3_P.Constant12_Value * test3_X.Integrator2_CSTATE_b;

  /* Gain: '<S14>/Gain3' incorporates:
   *  Gain: '<S14>/Gain1'
   *  Gain: '<S14>/Gain2'
   *  Gain: '<S14>/Gain4'
   */
  test3_B.Gain3 = test3_P.Gain1_Gain * test3_B.Product1_p * test3_P.Gain4_Gain *
    test3_P.Gain2_Gain * test3_P.Gain3_Gain;

  /* Integrator: '<S2>/Integrator5' */
  test3_B.Integrator5 = test3_X.Integrator5_CSTATE;

  /* Integrator: '<S3>/Integrator6' */
  test3_B.Integrator6 = test3_X.Integrator6_CSTATE;

  /* Clock: '<Root>/Clock' */
  rtb_Clock = test3_M->Timing.t[0];

  /* MATLAB Function: '<Root>/MATLAB Function' */
  test3_DW.sfEvent = test3_CALL_EVENT;

  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:59' */
  /* '<S1>:1:35' */
  /* '<S1>:1:60' */
  /* '<S1>:1:36' */
  /* '<S1>:1:35' */
  /* '<S1>:1:36' */
  /* '<S1>:1:53' */
  b_b = fmin(rtb_Clock + 12.0, 201.0);
  test3_emxInit_real_T(&horizon_idx, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  if (rtIsNaN(rtb_Clock)) {
    ibcol = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, ibcol);
    horizon_idx->data[0] = (rtNaN);
  } else if (b_b < rtb_Clock) {
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 0;
  } else if ((rtIsInf(rtb_Clock) || rtIsInf(b_b)) && (rtb_Clock == b_b)) {
    ibcol = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, ibcol);
    horizon_idx->data[0] = (rtNaN);
  } else if (floor(rtb_Clock) == rtb_Clock) {
    ibcol = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    nm1d2 = (int32_T)(b_b - rtb_Clock);
    horizon_idx->size[1] = nm1d2 + 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, ibcol);
    for (ntilerows = 0; ntilerows <= nm1d2; ntilerows++) {
      horizon_idx->data[ntilerows] = rtb_Clock + (real_T)ntilerows;
    }
  } else {
    ndbl = floor((b_b - rtb_Clock) + 0.5);
    apnd = rtb_Clock + ndbl;
    cdiff = apnd - b_b;
    if (fabs(cdiff) < 4.4408920985006262E-16 * fmax(fabs(rtb_Clock), fabs(b_b)))
    {
      ndbl++;
      apnd = b_b;
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

    ibcol = horizon_idx->size[0] * horizon_idx->size[1];
    horizon_idx->size[0] = 1;
    horizon_idx->size[1] = ntilerows + 1;
    test3_emxEnsureCapacity_real_T(horizon_idx, ibcol);
    if (ntilerows + 1 > 0) {
      horizon_idx->data[0] = rtb_Clock;
      if (ntilerows + 1 > 1) {
        horizon_idx->data[ntilerows] = apnd;
        nm1d2 = ntilerows / 2;
        for (k = 0; k <= nm1d2 - 2; k++) {
          horizon_idx->data[k + 1] = ((real_T)k + 1.0) + rtb_Clock;
          horizon_idx->data[(ntilerows - k) - 1] = apnd - ((real_T)k + 1.0);
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

  /* '<S1>:1:54' */
  /* '<S1>:1:55' */
  /* '<S1>:1:56' */
  memset(&test3_B.xrf[0], 0, 201U * sizeof(real_T));
  memset(&test3_B.yrf[0], 0, 201U * sizeof(real_T));

  /* '<S1>:1:59' */
  test3_emxInit_real_T(&xref, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  ibcol = xref->size[0] * xref->size[1];
  xref->size[0] = 3;
  xref->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(xref, ibcol);
  nm1d2 = horizon_idx->size[1];
  for (ntilerows = 0; ntilerows < nm1d2; ntilerows++) {
    k = ((int32_T)horizon_idx->data[ntilerows] - 1) * 3;
    xref->data[3 * ntilerows] = g[k];
    xref->data[1 + 3 * ntilerows] = g[k + 1];
    xref->data[2 + 3 * ntilerows] = g[k + 2];
  }

  /* '<S1>:1:60' */
  /* '<S1>:1:62' */
  if (horizon_idx->size[1] < 1) {
    nm1d2 = -1;
  } else {
    nm1d2 = horizon_idx->size[1] - 1;
  }

  for (ntilerows = 0; ntilerows <= nm1d2; ntilerows++) {
    test3_B.xrf[ntilerows] = xref->data[3 * ntilerows];
  }

  /* '<S1>:1:63' */
  if (horizon_idx->size[1] < 1) {
    nm1d2 = -1;
  } else {
    nm1d2 = horizon_idx->size[1] - 1;
  }

  for (ntilerows = 0; ntilerows <= nm1d2; ntilerows++) {
    test3_B.yrf[ntilerows] = xref->data[3 * ntilerows + 1];
  }

  /* '<S1>:1:69' */
  /* '<S1>:1:72' */
  test3_emxInit_real_T(&lb, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  k = horizon_idx->size[1] << 1;
  ibcol = lb->size[0];
  lb->size[0] = k;
  test3_emxEnsureCapacity_real_T(lb, ibcol);
  ntilerows = horizon_idx->size[1];
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = nm1d2 << 1;
    lb->data[ibcol] = -0.25;
    lb->data[ibcol + 1] = -0.01;
  }

  /* '<S1>:1:73' */
  test3_emxInit_real_T(&ub, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  ibcol = ub->size[0];
  ub->size[0] = k;
  test3_emxEnsureCapacity_real_T(ub, ibcol);
  ntilerows = horizon_idx->size[1];

  /* SignalConversion generated from: '<S1>/ SFunction ' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  /* '<S1>:1:82' */
  /* '<S1>:1:86' */
  tmp[0] = test3_B.Integrator5;
  tmp[1] = test3_B.Integrator6;
  tmp[2] = test3_B.Integrator;
  test3_emxInit_real_T(&h, 2);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  ibcol = h->size[0] * h->size[1];
  h->size[0] = 2;
  h->size[1] = horizon_idx->size[1];
  test3_emxEnsureCapacity_real_T(h, ibcol);
  for (nm1d2 = 0; nm1d2 < ntilerows; nm1d2++) {
    ibcol = nm1d2 << 1;
    ub->data[ibcol] = 0.25;
    ub->data[ibcol + 1] = 0.01;
    ibcol = ((int32_T)horizon_idx->data[nm1d2] - 1) << 1;
    h->data[nm1d2 << 1] = h_0[ibcol];
    h->data[1 + (nm1d2 << 1)] = h_0[ibcol + 1];
  }

  test3_emxInit_real_T(&tmp_0, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  ibcol = tmp_0->size[0];
  tmp_0->size[0] = k;
  test3_emxEnsureCapacity_real_T(tmp_0, ibcol);
  if (k - 1 >= 0) {
    memset(&tmp_0->data[0], 0, (uint32_T)k * sizeof(real_T));
  }

  test3_emxInit_real_T(&u_opt, 1);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  test3_fmincon(tmp, xref, h, (real_T)horizon_idx->size[1], tmp_0, lb, ub, u_opt);
  test3_emxFree_real_T(&tmp_0);
  test3_emxFree_real_T(&h);
  test3_emxFree_real_T(&xref);
  test3_emxFree_real_T(&ub);
  test3_emxFree_real_T(&lb);
  test3_emxFree_real_T(&horizon_idx);

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* '<S1>:1:89' */
  /* '<S1>:1:90' */
  test3_B.phi = u_opt->data[1];
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

  /* Saturate: '<S7>/command saturation' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  if (u_opt->data[0] > test3_P.commandsaturation_UpperSat) {
    rtb_Clock = test3_P.commandsaturation_UpperSat;
  } else if (u_opt->data[0] < test3_P.commandsaturation_LowerSat) {
    rtb_Clock = test3_P.commandsaturation_LowerSat;
  } else {
    rtb_Clock = u_opt->data[0];
  }

  test3_emxFree_real_T(&u_opt);

  /* Product: '<S7>/Multiply1' incorporates:
   *  Saturate: '<S7>/command saturation'
   */
  test3_B.desired = rtb_Clock * test3_B.switch_l;

  /* Product: '<S7>/Multiply' */
  test3_B.measured = test3_B.Gain3 * test3_B.switch_l;

  /* Sum: '<S7>/Sum' */
  rtb_Clock = test3_B.desired - test3_B.measured;

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S16>/Constant'
   */
  test3_B.Compare = (test3_B.desired == test3_P.Constant_Value);

  /* Integrator: '<S7>/Integrator1' */
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

  /* Sum: '<S7>/Add1' incorporates:
   *  Gain: '<S7>/Kff  (% // m//s)'
   *  Gain: '<S7>/Kp (% // m//s)'
   *  Integrator: '<S7>/Integrator1'
   *  Sum: '<S7>/Add'
   */
  b_b = (test3_P.Kpms_Gain * rtb_Clock + test3_X.Integrator1_CSTATE_ng) +
    test3_P.Kffms_Gain * test3_B.desired;

  /* Saturate: '<S7>/command saturation1' */
  if (b_b > test3_P.commandsaturation1_UpperSat) {
    b_b = test3_P.commandsaturation1_UpperSat;
  } else if (b_b < test3_P.commandsaturation1_LowerSat) {
    b_b = test3_P.commandsaturation1_LowerSat;
  }

  /* Gain: '<S6>/direction convention' incorporates:
   *  Product: '<S7>/Multiply2'
   *  Saturate: '<S7>/command saturation1'
   */
  b_b = b_b * test3_B.switch_l * test3_P.directionconvention_Gain;

  /* Saturate: '<S6>/command saturation' */
  if (b_b > test3_P.commandsaturation_UpperSat_n) {
    /* Saturate: '<S6>/command saturation' */
    test3_B.commandsaturation = test3_P.commandsaturation_UpperSat_n;
  } else if (b_b < test3_P.commandsaturation_LowerSat_i) {
    /* Saturate: '<S6>/command saturation' */
    test3_B.commandsaturation = test3_P.commandsaturation_LowerSat_i;
  } else {
    /* Saturate: '<S6>/command saturation' */
    test3_B.commandsaturation = b_b;
  }

  /* End of Saturate: '<S6>/command saturation' */

  /* Bias: '<S6>/Steering Bias' incorporates:
   *  Gain: '<S6>/Gain'
   */
  test3_B.SteeringBias = test3_P.Gain_Gain * test3_B.phi +
    test3_P.SteeringBias_Bias;
  if (rtmIsMajorTimeStep(test3_M)) {
    /* SignalConversion generated from: '<S6>/HIL Write' */
    rtb_TmpSignalConversionAtHILWri[0] = test3_B.commandsaturation;
    rtb_TmpSignalConversionAtHILWri[1] = test3_B.SteeringBias;

    /* S-Function (hil_write_block): '<S6>/HIL Write' */

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

  /* Product: '<S2>/Product' incorporates:
   *  Trigonometry: '<S2>/Cos'
   */
  test3_B.Product_f = cos(test3_B.Integrator) * test3_B.Gain3;

  /* Product: '<S3>/Product1' incorporates:
   *  Trigonometry: '<S3>/Sin'
   */
  test3_B.Product1_ij = sin(test3_B.Integrator) * test3_B.Gain3;
  if (rtmIsMajorTimeStep(test3_M)) {
  }

  /* Gain: '<S7>/Ki (% // m)  ' */
  test3_B.Kim = test3_P.Kim_Gain * rtb_Clock;
  if (rtmIsMajorTimeStep(test3_M)) {
  }
}

/* Model update function */
void test3_update(void)
{
  /* Update for Integrator: '<S12>/Integrator1' */
  test3_DW.Integrator1_IWORK = 0;

  /* Update for Integrator: '<S13>/Integrator1' */
  test3_DW.Integrator1_IWORK_i = 0;

  /* Update for Integrator: '<S8>/Integrator1' */
  test3_DW.Integrator1_IWORK_g = 0;

  /* Update for Integrator: '<S9>/Integrator1' */
  test3_DW.Integrator1_IWORK_d = 0;

  /* Update for Integrator: '<S10>/Integrator1' */
  test3_DW.Integrator1_IWORK_gg = 0;

  /* Update for Integrator: '<S11>/Integrator1' */
  test3_DW.Integrator1_IWORK_l = 0;
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

  /* Derivatives for Integrator: '<S8>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = test3_B.Product;

  /* Derivatives for Integrator: '<S9>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_i = test3_B.Product_d;

  /* Derivatives for Integrator: '<S10>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_c = test3_B.Product_m;

  /* Derivatives for Integrator: '<S12>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = test3_B.Product1_b;

  /* Derivatives for Integrator: '<S13>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_m = test3_B.Product1_g;

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_f = test3_B.Product_b;

  /* Derivatives for Integrator: '<S6>/Integrator' */
  _rtXdot->Integrator_CSTATE = test3_B.Integrator1_g;

  /* Derivatives for Integrator: '<S8>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_p = test3_B.Product1;

  /* Derivatives for Integrator: '<S9>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_h = test3_B.Product1_i;

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_b = test3_B.Product1_n;

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n = test3_B.Product1_p;

  /* Derivatives for Integrator: '<S12>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_m = test3_B.Product_e;

  /* Derivatives for Integrator: '<S13>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_b = test3_B.Product_p;

  /* Derivatives for Integrator: '<S2>/Integrator5' */
  _rtXdot->Integrator5_CSTATE = test3_B.Product_f;

  /* Derivatives for Integrator: '<S3>/Integrator6' */
  _rtXdot->Integrator6_CSTATE = test3_B.Product1_ij;

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  lsat = (test3_X.Integrator1_CSTATE_ng <= test3_P.Integrator1_LowerSat);
  usat = (test3_X.Integrator1_CSTATE_ng >= test3_P.Integrator1_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (test3_B.Kim > 0.0)) || (usat &&
       (test3_B.Kim < 0.0))) {
    _rtXdot->Integrator1_CSTATE_ng = test3_B.Kim;
  } else {
    /* in saturation */
    _rtXdot->Integrator1_CSTATE_ng = 0.0;
  }

  /* End of Derivatives for Integrator: '<S7>/Integrator1' */
}

/* Model initialize function */
void test3_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S6>/HIL Initialize' */

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

  /* Start for S-Function (inverse_modulus_block): '<S6>/Unwrap 2^2' */

  /* S-Function Block: test3/basicQCarIO/Unwrap 2^2 (inverse_modulus_block) */
  {
    test3_DW.Unwrap22_FirstSample = true;
    test3_DW.Unwrap22_Revolutions = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S6>/Unwrap 2^24' */

  /* S-Function Block: test3/basicQCarIO/Unwrap 2^24 (inverse_modulus_block) */
  {
    test3_DW.Unwrap224_FirstSample = true;
    test3_DW.Unwrap224_Revolutions = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S6>/Unwrap 2^1' */

  /* S-Function Block: test3/basicQCarIO/Unwrap 2^1 (inverse_modulus_block) */
  {
    test3_DW.Unwrap21_FirstSample = true;
    test3_DW.Unwrap21_Revolutions = 0;
  }

  test3_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Integrator: '<S8>/Integrator2' */
  test3_X.Integrator2_CSTATE = test3_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<S9>/Integrator2' */
  test3_X.Integrator2_CSTATE_i = test3_P.Integrator2_IC_j;

  /* InitializeConditions for Integrator: '<S10>/Integrator2' */
  test3_X.Integrator2_CSTATE_c = test3_P.Integrator2_IC_d;

  /* InitializeConditions for Integrator: '<S12>/Integrator1' incorporates:
   *  Integrator: '<S13>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE = 0.0;
    test3_X.Integrator1_CSTATE_m = 0.0;
  }

  test3_DW.Integrator1_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S12>/Integrator1' */

  /* InitializeConditions for Integrator: '<S13>/Integrator1' */
  test3_DW.Integrator1_IWORK_i = 1;

  /* InitializeConditions for Integrator: '<S11>/Integrator2' */
  test3_X.Integrator2_CSTATE_f = test3_P.Integrator2_IC_l;

  /* InitializeConditions for Integrator: '<S6>/Integrator' */
  test3_X.Integrator_CSTATE = test3_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S8>/Integrator1' incorporates:
   *  Integrator: '<S9>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_p = 0.0;
    test3_X.Integrator1_CSTATE_h = 0.0;
  }

  test3_DW.Integrator1_IWORK_g = 1;

  /* End of InitializeConditions for Integrator: '<S8>/Integrator1' */

  /* InitializeConditions for Integrator: '<S9>/Integrator1' */
  test3_DW.Integrator1_IWORK_d = 1;

  /* InitializeConditions for Integrator: '<S10>/Integrator1' incorporates:
   *  Integrator: '<S11>/Integrator1'
   */
  if (rtmIsFirstInitCond(test3_M)) {
    test3_X.Integrator1_CSTATE_b = 0.0;
    test3_X.Integrator1_CSTATE_n = 0.0;
  }

  test3_DW.Integrator1_IWORK_gg = 1;

  /* End of InitializeConditions for Integrator: '<S10>/Integrator1' */

  /* InitializeConditions for Integrator: '<S11>/Integrator1' */
  test3_DW.Integrator1_IWORK_l = 1;

  /* InitializeConditions for Integrator: '<S12>/Integrator2' */
  test3_X.Integrator2_CSTATE_m = test3_P.Integrator2_IC_n;

  /* InitializeConditions for Integrator: '<S13>/Integrator2' */
  test3_X.Integrator2_CSTATE_b = test3_P.Integrator2_IC_h;

  /* InitializeConditions for Integrator: '<S2>/Integrator5' */
  test3_X.Integrator5_CSTATE = test3_P.Integrator5_IC;

  /* InitializeConditions for Integrator: '<S3>/Integrator6' */
  test3_X.Integrator6_CSTATE = test3_P.Integrator6_IC;

  /* InitializeConditions for Integrator: '<S7>/Integrator1' */
  test3_X.Integrator1_CSTATE_ng = test3_P.Integrator1_IC;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  test3_DW.sfEvent = test3_CALL_EVENT;
  test3_DW.is_active_c2_test3 = 0U;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(test3_M)) {
    rtmSetFirstInitCond(test3_M, 0);
  }
}

/* Model terminate function */
void test3_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S6>/HIL Initialize' */

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
  test3_M->Sizes.checksums[0] = (3730588023U);
  test3_M->Sizes.checksums[1] = (3831843368U);
  test3_M->Sizes.checksums[2] = (980540883U);
  test3_M->Sizes.checksums[3] = (3104373542U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    test3_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
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
  test3_M->Sizes.numContStates = (16); /* Number of continuous states */
  test3_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  test3_M->Sizes.numY = (0);           /* Number of model outputs */
  test3_M->Sizes.numU = (0);           /* Number of model inputs */
  test3_M->Sizes.sysDirFeedThru = (0); /* The model is not direct feedthrough */
  test3_M->Sizes.numSampTimes = (2);   /* Number of sample times */
  test3_M->Sizes.numBlocks = (121);    /* Number of blocks */
  test3_M->Sizes.numBlockIO = (37);    /* Number of block outputs */
  test3_M->Sizes.numBlockPrms = (168); /* Sum of parameter "widths" */
  return test3_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
