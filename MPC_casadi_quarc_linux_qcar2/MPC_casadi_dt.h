/*
 * MPC_casadi_dt.h
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "MPC_casadi".
 *
 * Model version              : 15.69
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Tue May 27 11:11:33 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(t_card),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "t_card",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&MPC_casadi_B.Product1), 0, 0, 131 },

  { (char_T *)(&MPC_casadi_B.Compare), 8, 0, 1 }
  ,

  { (char_T *)(&MPC_casadi_DW.Buffer_CircBuf[0]), 0, 0, 2000192 },

  { (char_T *)(&MPC_casadi_DW.HILInitialize_Card), 17, 0, 1 },

  { (char_T *)(&MPC_casadi_DW.HILRead_PWORK), 11, 0, 12 },

  { (char_T *)(&MPC_casadi_DW.Buffer_inBufPtrIdx), 6, 0, 35 },

  { (char_T *)(&MPC_casadi_DW.HILInitialize_POSortedChans[0]), 7, 0, 2 },

  { (char_T *)(&MPC_casadi_DW.Integrator1_IWORK), 10, 0, 10 },

  { (char_T *)(&MPC_casadi_DW.is_active_c4_MPC_casadi), 3, 0, 3 },

  { (char_T *)(&MPC_casadi_DW.HILInitialize_DOBits[0]), 8, 0, 26 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  10U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&MPC_casadi_P.XYFigure_maximum_x), 0, 0, 4 },

  { (char_T *)(&MPC_casadi_P.XYFigure_update_rate), 6, 0, 1 },

  { (char_T *)(&MPC_casadi_P.HILRead_analog_channels), 7, 0, 8 },

  { (char_T *)(&MPC_casadi_P.Constant10_Value), 0, 0, 77 },

  { (char_T *)(&MPC_casadi_P.HILInitialize_DOWatchdog), 6, 0, 6 },

  { (char_T *)(&MPC_casadi_P.HILInitialize_AIChannels[0]), 7, 0, 44 },

  { (char_T *)(&MPC_casadi_P.HILInitialize_Active), 8, 0, 37 },

  { (char_T *)(&MPC_casadi_P.uArm0Disarm2_CurrentSetting), 3, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  8U,
  rtPTransitions
};

/* [EOF] MPC_casadi_dt.h */
