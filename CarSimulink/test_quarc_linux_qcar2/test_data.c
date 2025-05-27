/*
 * test_data.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "test".
 *
 * Model version              : 15.67
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Tue May 27 16:31:33 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test.h"

/* Block parameters (default storage) */
P_test_T test_P = {
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
   * Referenced by: '<S7>/HIL Read'
   */
  4U,

  /* Mask Parameter: HILRead_encoder_channels
   * Referenced by: '<S7>/HIL Read'
   */
  0U,

  /* Mask Parameter: HILRead_other_channels
   * Referenced by: '<S7>/HIL Read'
   */
  { 14000U, 4000U, 4001U, 3002U },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S7>/HIL Write'
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
   * Referenced by: '<S18>/Constant'
   */
  0.0,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S7>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<S7>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: final_pwm_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: final_other_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: analog_input_maximums
   * Referenced by: '<S7>/HIL Initialize'
   */
  3.3,

  /* Expression: analog_input_minimums
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: encoder_filter_frequency
   * Referenced by: '<S7>/HIL Initialize'
   */
  1.0E+8,

  /* Expression: pwm_frequency
   * Referenced by: '<S7>/HIL Initialize'
   */
  43945.3125,

  /* Expression: initial_pwm_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_pwm_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: initial_other_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_other_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  0.0,

  /* Expression: 25
   * Referenced by: '<S7>/Constant2'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S10>/Integrator2'
   */
  0.0,

  /* Expression: modulus
   * Referenced by: '<S7>/Unwrap 2^2'
   */
  1.6777215E+7,

  /* Expression: 25
   * Referenced by: '<S7>/Constant8'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S13>/Integrator2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant1'
   */
  1.0,

  /* Expression: 100
   * Referenced by: '<S7>/Constant10'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant11'
   */
  1.0,

  /* Expression: 30
   * Referenced by: '<S7>/Constant12'
   */
  30.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant3'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant5'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant7'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant9'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S7>/Integrator'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S10>/Constant'
   */
  2.0,

  /* Expression: modulus
   * Referenced by: '<S7>/Unwrap 2^24'
   */
  1.6777215E+7,

  /* Expression: 2
   * Referenced by: '<S11>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S11>/Integrator2'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S12>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S12>/Integrator2'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S13>/Constant'
   */
  2.0,

  /* Expression: modulus
   * Referenced by: '<S7>/Unwrap 2^1'
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

  /* Expression: 1/(4*720)
   * Referenced by: '<S16>/Gain1'
   */
  0.00034722222222222224,

  /* Expression: (13*19)/(70*37)
   * Referenced by: '<S16>/Gain4'
   */
  0.095366795366795362,

  /* Expression: 2*pi
   * Referenced by: '<S16>/Gain2'
   */
  6.2831853071795862,

  /* Expression: 0.033
   * Referenced by: '<S16>/Gain3'
   */
  0.033,

  /* Expression: 0
   * Referenced by: '<S3>/Integrator5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Integrator6'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Integrator3'
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<Root>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<Root>/S-Function'
   */
  { 116.0, 101.0, 115.0, 116.0, 95.0, 99.0, 46.0, 99.0, 97.0, 115.0, 97.0, 100.0,
    105.0 },

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<Root>/S-Function'
   */
  { 1.0, 6.0 },

  /* Computed Parameter: SFunction_P2
   * Referenced by: '<Root>/S-Function'
   */
  { 116.0, 101.0, 115.0, 116.0, 95.0, 99.0 },

  /* Expression: 0.8
   * Referenced by: '<S8>/command saturation'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S8>/command saturation'
   */
  -0.8,

  /* Expression: 0.1
   * Referenced by: '<S8>/Kff  (% // m//s)'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<S8>/Kp (% // m//s)'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S8>/Integrator1'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S8>/Integrator1'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S8>/Integrator1'
   */
  -0.4,

  /* Expression: 0.5
   * Referenced by: '<S8>/command saturation1'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S8>/command saturation1'
   */
  -0.5,

  /* Expression: +1
   * Referenced by: '<S7>/direction convention'
   */
  1.0,

  /* Expression: 0.25
   * Referenced by: '<S7>/command saturation'
   */
  0.25,

  /* Expression: -0.25
   * Referenced by: '<S7>/command saturation'
   */
  -0.25,

  /* Expression: +1
   * Referenced by: '<S7>/Gain'
   */
  1.0,

  /* Expression: 0.018
   * Referenced by: '<S7>/Steering Bias'
   */
  0.018,

  /* Expression: 1
   * Referenced by: '<S1>/Constant7'
   */
  1.0,

  /* Expression: 25
   * Referenced by: '<S1>/Constant8'
   */
  25.0,

  /* Expression: 2
   * Referenced by: '<S9>/Constant'
   */
  2.0,

  /* Expression: modulus
   * Referenced by: '<S1>/Unwrap 2^1'
   */
  1.6777215E+7,

  /* Expression: 0
   * Referenced by: '<S9>/Integrator2'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<S8>/Ki (% // m)  '
   */
  0.1,

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<S7>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<S7>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POModes
   * Referenced by: '<S7>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POConfiguration
   * Referenced by: '<S7>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POAlignment
   * Referenced by: '<S7>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPolarity
   * Referenced by: '<S7>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U },

  /* Computed Parameter: HILInitialize_DIChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U },

  /* Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U, 25U,
    26U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U, 2U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<S7>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_POChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 1000U, 11000U },

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<S7>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<S7>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILRead_Active
   * Referenced by: '<S7>/HIL Read'
   */
  true,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S7>/HIL Write'
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
