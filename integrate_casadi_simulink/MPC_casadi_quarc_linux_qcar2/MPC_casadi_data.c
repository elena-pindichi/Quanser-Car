/*
 * MPC_casadi_data.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "MPC_casadi".
 *
 * Model version              : 15.64
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Tue May 27 13:15:47 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MPC_casadi.h"

/* Block parameters (default storage) */
P_MPC_casadi_T MPC_casadi_P = {
  /* Mask Parameter: XYFigure_maximum_x
   * Referenced by: '<Root>/XY Figure'
   */
  5.0,

  /* Mask Parameter: XYFigure_maximum_y
   * Referenced by: '<Root>/XY Figure'
   */
  5.0,

  /* Mask Parameter: XYFigure_minimum_x
   * Referenced by: '<Root>/XY Figure'
   */
  -5.0,

  /* Mask Parameter: XYFigure_minimum_y
   * Referenced by: '<Root>/XY Figure'
   */
  -5.0,

  /* Mask Parameter: XYFigure_update_rate
   * Referenced by: '<Root>/XY Figure'
   */
  100,

  /* Mask Parameter: HILRead_analog_channels
   * Referenced by: '<S9>/HIL Read'
   */
  4U,

  /* Mask Parameter: HILRead_encoder_channels
   * Referenced by: '<S9>/HIL Read'
   */
  0U,

  /* Mask Parameter: HILRead_other_channels
   * Referenced by: '<S9>/HIL Read'
   */
  { 14000U, 4000U, 4001U, 3002U },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S9>/HIL Write'
   */
  { 11000U, 1000U },

  /* Expression: 1
   * Referenced by: '<Root>/Constant10'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S21>/Constant'
   */
  0.0,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<S9>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: final_pwm_outputs
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: final_other_outputs
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: analog_input_maximums
   * Referenced by: '<S9>/HIL Initialize'
   */
  3.3,

  /* Expression: analog_input_minimums
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: encoder_filter_frequency
   * Referenced by: '<S9>/HIL Initialize'
   */
  1.0E+8,

  /* Expression: pwm_frequency
   * Referenced by: '<S9>/HIL Initialize'
   */
  43945.3125,

  /* Expression: initial_pwm_outputs
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_pwm_outputs
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: initial_other_outputs
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_other_outputs
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: 25
   * Referenced by: '<S9>/Constant2'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S13>/Integrator2'
   */
  0.0,

  /* Expression: modulus
   * Referenced by: '<S9>/Unwrap 2^2'
   */
  1.6777215E+7,

  /* Expression: 25
   * Referenced by: '<S9>/Constant8'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S16>/Integrator2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant1'
   */
  1.0,

  /* Expression: 100
   * Referenced by: '<S9>/Constant10'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant11'
   */
  1.0,

  /* Expression: 30
   * Referenced by: '<S9>/Constant12'
   */
  30.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant3'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant5'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant7'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant9'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S9>/Integrator'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S13>/Constant'
   */
  2.0,

  /* Expression: modulus
   * Referenced by: '<S9>/Unwrap 2^24'
   */
  1.6777215E+7,

  /* Expression: 2
   * Referenced by: '<S14>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S14>/Integrator2'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S15>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S15>/Integrator2'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S16>/Constant'
   */
  2.0,

  /* Expression: modulus
   * Referenced by: '<S9>/Unwrap 2^1'
   */
  1.6777215E+7,

  /* Expression: 2
   * Referenced by: '<S17>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S17>/Integrator2'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S18>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S18>/Integrator2'
   */
  0.0,

  /* Expression: 1/(4*720)
   * Referenced by: '<S19>/Gain1'
   */
  0.00034722222222222224,

  /* Expression: (13*19)/(70*37)
   * Referenced by: '<S19>/Gain4'
   */
  0.095366795366795362,

  /* Expression: 2*pi
   * Referenced by: '<S19>/Gain2'
   */
  6.2831853071795862,

  /* Expression: 0.033
   * Referenced by: '<S19>/Gain3'
   */
  0.033,

  /* Expression: 0
   * Referenced by: '<Root>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Memory1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Memory2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S5>/Integrator5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Integrator6'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Integrator3'
   */
  0.0,

  /* Expression: 0.8
   * Referenced by: '<S10>/command saturation'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S10>/command saturation'
   */
  -0.8,

  /* Expression: 0.1
   * Referenced by: '<S10>/Kff  (% // m//s)'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<S10>/Kp (% // m//s)'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S10>/Integrator1'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S10>/Integrator1'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S10>/Integrator1'
   */
  -0.4,

  /* Expression: 0.5
   * Referenced by: '<S10>/command saturation1'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S10>/command saturation1'
   */
  -0.5,

  /* Expression: +1
   * Referenced by: '<S9>/direction convention'
   */
  1.0,

  /* Expression: 0.25
   * Referenced by: '<S9>/command saturation'
   */
  0.25,

  /* Expression: -0.25
   * Referenced by: '<S9>/command saturation'
   */
  -0.25,

  /* Expression: +1
   * Referenced by: '<S9>/Gain'
   */
  1.0,

  /* Expression: 0.018
   * Referenced by: '<S9>/Steering Bias'
   */
  0.018,

  /* Expression: 0
   * Referenced by: '<S1>/RT'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Constant7'
   */
  1.0,

  /* Expression: 25
   * Referenced by: '<S3>/Constant8'
   */
  25.0,

  /* Expression: 2
   * Referenced by: '<S12>/Constant'
   */
  2.0,

  /* Expression: modulus
   * Referenced by: '<S3>/Unwrap 2^1'
   */
  1.6777215E+7,

  /* Expression: 0
   * Referenced by: '<S12>/Integrator2'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<S10>/Ki (% // m)  '
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<Root>/Buffer'
   */
  0.0,

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<S9>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<S9>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POModes
   * Referenced by: '<S9>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POConfiguration
   * Referenced by: '<S9>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POAlignment
   * Referenced by: '<S9>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPolarity
   * Referenced by: '<S9>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U },

  /* Computed Parameter: HILInitialize_DIChannels
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U },

  /* Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U, 25U,
    26U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 0U, 1U, 2U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<S9>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_POChannels
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 1000U, 11000U },

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILRead_Active
   * Referenced by: '<S9>/HIL Read'
   */
  true,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S9>/HIL Write'
   */
  false,

  /* Computed Parameter: uArm0Disarm2_CurrentSetting
   * Referenced by: '<Root>/1 - Arm, 0 - Disarm2'
   */
  1U,

  /* Computed Parameter: XYFigure_Mode
   * Referenced by: '<Root>/XY Figure'
   */
  1U
};
