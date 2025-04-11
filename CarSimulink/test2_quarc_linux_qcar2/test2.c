/*
 * test2.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "test2".
 *
 * Model version              : 15.16
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Apr  9 16:42:23 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test2.h"
#include <math.h>
#include "rtwtypes.h"
#include "test2_private.h"
#include "zero_crossing_types.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "test2_dt.h"

/* Block signals (default storage) */
B_test2_T test2_B;

/* Continuous states */
X_test2_T test2_X;

/* Block states (default storage) */
DW_test2_T test2_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_test2_T test2_PrevZCX;

/* Real-time model */
static RT_MODEL_test2_T test2_M_;
RT_MODEL_test2_T *const test2_M = &test2_M_;

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
  int_T nXc = 9;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  test2_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void test2_output(void)
{
  real_T rtb_TmpSignalConversionAtHILWri[2];
  real_T rtb_Sum_a;
  real_T u0;
  boolean_T didZcEventOccur;
  if (rtmIsMajorTimeStep(test2_M)) {
    /* set solver stop time */
    if (!(test2_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&test2_M->solverInfo, ((test2_M->Timing.clockTickH0
        + 1) * test2_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&test2_M->solverInfo, ((test2_M->Timing.clockTick0 +
        1) * test2_M->Timing.stepSize0 + test2_M->Timing.clockTickH0 *
        test2_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(test2_M)) {
    test2_M->Timing.t[0] = rtsiGetT(&test2_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(test2_M)) {
  }

  /* Product: '<S5>/Product1' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Integrator: '<S5>/Integrator2'
   */
  test2_B.Product1 = test2_P.Constant2_Value * test2_X.Integrator2_CSTATE;

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S3>/Constant8'
   *  Integrator: '<S8>/Integrator2'
   */
  test2_B.Product1_p = test2_P.Constant8_Value * test2_X.Integrator2_CSTATE_f;
  if (rtmIsMajorTimeStep(test2_M)) {
    /* S-Function (hil_read_block): '<S3>/HIL Read' */

    /* S-Function Block: test2/basicQCarIO/HIL Read (hil_read_block) */
    {
      t_error result = hil_read(test2_DW.HILInitialize_Card,
        test2_P.HILRead_analog_channels, 2U,
        &test2_P.HILRead_encoder_channels, 1U,
        NULL, 0U,
        &test2_P.HILRead_other_channels, 1U,
        &test2_B.motorcurrent[0],
        &test2_DW.HILRead_EncoderBuffer,
        NULL,
        &test2_B.motorvelocity
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
      } else {
        test2_B.motorencoder = test2_DW.HILRead_EncoderBuffer;
      }
    }
  }

  /* Integrator: '<S7>/Integrator1' */
  if (test2_DW.Integrator1_IWORK != 0) {
    test2_X.Integrator1_CSTATE = test2_B.motorcurrent[0];
  }

  /* Integrator: '<S7>/Integrator1' */
  test2_B.Integrator1 = test2_X.Integrator1_CSTATE;

  /* Integrator: '<S6>/Integrator1' */
  if (test2_DW.Integrator1_IWORK_a != 0) {
    test2_X.Integrator1_CSTATE_l = test2_B.motorcurrent[1];
  }

  /* Integrator: '<S6>/Integrator1' */
  test2_B.Integrator1_c = test2_X.Integrator1_CSTATE_l;
  if (rtmIsMajorTimeStep(test2_M)) {
  }

  /* Gain: '<S3>/Gain3' incorporates:
   *  Gain: '<S3>/Gain1'
   *  Gain: '<S3>/Gain2'
   *  Gain: '<S3>/Gain4'
   */
  test2_B.Gain3 = test2_P.Gain1_Gain * test2_B.Product1_p * test2_P.Gain4_Gain *
    test2_P.Gain2_Gain * test2_P.Gain3_Gain;
  if (rtmIsMajorTimeStep(test2_M)) {
    /* S-Function (inverse_modulus_block): '<S3>/Unwrap 2^24' */
    /* S-Function Block: test2/basicQCarIO/Unwrap 2^24 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = test2_P.Unwrap224_Modulus / 2.0;
      real_T du, dy;
      if (test2_DW.Unwrap224_FirstSample) {
        test2_DW.Unwrap224_FirstSample = false;
        test2_DW.Unwrap224_PreviousInput = test2_B.motorvelocity;
      }

      du = (real_T) test2_B.motorvelocity - test2_DW.Unwrap224_PreviousInput;
      if (du > half_range) {
        test2_DW.Unwrap224_Revolutions = test2_DW.Unwrap224_Revolutions - 1;
        dy = du - test2_P.Unwrap224_Modulus;
      } else if (du < -half_range) {
        test2_DW.Unwrap224_Revolutions = test2_DW.Unwrap224_Revolutions + 1;
        dy = du + test2_P.Unwrap224_Modulus;
      } else {
        dy = du;
      }

      test2_B.Unwrap224 = test2_B.motorvelocity + test2_DW.Unwrap224_Revolutions
        * test2_P.Unwrap224_Modulus;
      test2_DW.Unwrap224_PreviousInput = test2_B.motorvelocity;
    }
  }

  /* Integrator: '<S5>/Integrator1' */
  if (test2_DW.Integrator1_IWORK_g != 0) {
    test2_X.Integrator1_CSTATE_p = test2_B.Unwrap224;
  }

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S5>/Constant'
   *  Integrator: '<S5>/Integrator1'
   *  Integrator: '<S5>/Integrator2'
   *  Product: '<S5>/Product2'
   *  Sum: '<S5>/Sum'
   *  Sum: '<S5>/Sum1'
   */
  test2_B.Product = ((test2_B.Unwrap224 - test2_X.Integrator1_CSTATE_p) -
                     test2_X.Integrator2_CSTATE * test2_P.Constant_Value_h *
                     test2_P.Constant1_Value) * test2_P.Constant2_Value;

  /* Product: '<S6>/Product' incorporates:
   *  Constant: '<S3>/Constant3'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S6>/Constant'
   *  Integrator: '<S6>/Integrator2'
   *  Product: '<S6>/Product2'
   *  Sum: '<S6>/Sum'
   *  Sum: '<S6>/Sum1'
   */
  test2_B.Product_b = ((test2_B.motorcurrent[1] - test2_B.Integrator1_c) -
                       test2_X.Integrator2_CSTATE_m * test2_P.Constant_Value_m *
                       test2_P.Constant3_Value) * test2_P.Constant4_Value;

  /* Product: '<S6>/Product1' incorporates:
   *  Constant: '<S3>/Constant4'
   *  Integrator: '<S6>/Integrator2'
   */
  test2_B.Product1_c = test2_P.Constant4_Value * test2_X.Integrator2_CSTATE_m;

  /* Product: '<S7>/Product' incorporates:
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S3>/Constant6'
   *  Constant: '<S7>/Constant'
   *  Integrator: '<S7>/Integrator2'
   *  Product: '<S7>/Product2'
   *  Sum: '<S7>/Sum'
   *  Sum: '<S7>/Sum1'
   */
  test2_B.Product_a = ((test2_B.motorcurrent[0] - test2_B.Integrator1) -
                       test2_X.Integrator2_CSTATE_l * test2_P.Constant_Value_a *
                       test2_P.Constant5_Value) * test2_P.Constant6_Value;

  /* Product: '<S7>/Product1' incorporates:
   *  Constant: '<S3>/Constant6'
   *  Integrator: '<S7>/Integrator2'
   */
  test2_B.Product1_n = test2_P.Constant6_Value * test2_X.Integrator2_CSTATE_l;
  if (rtmIsMajorTimeStep(test2_M)) {
    /* S-Function (inverse_modulus_block): '<S3>/Unwrap 2^1' */
    /* S-Function Block: test2/basicQCarIO/Unwrap 2^1 (inverse_modulus_block) */
    {
      static const real_T sampling_period = 0.002;
      real_T half_range = test2_P.Unwrap21_Modulus / 2.0;
      real_T du, dy;
      if (test2_DW.Unwrap21_FirstSample) {
        test2_DW.Unwrap21_FirstSample = false;
        test2_DW.Unwrap21_PreviousInput = test2_B.motorencoder;
      }

      du = (real_T) test2_B.motorencoder - test2_DW.Unwrap21_PreviousInput;
      if (du > half_range) {
        test2_DW.Unwrap21_Revolutions = test2_DW.Unwrap21_Revolutions - 1;
        dy = du - test2_P.Unwrap21_Modulus;
      } else if (du < -half_range) {
        test2_DW.Unwrap21_Revolutions = test2_DW.Unwrap21_Revolutions + 1;
        dy = du + test2_P.Unwrap21_Modulus;
      } else {
        dy = du;
      }

      test2_B.Unwrap21 = test2_B.motorencoder + test2_DW.Unwrap21_Revolutions *
        test2_P.Unwrap21_Modulus;
      test2_DW.Unwrap21_PreviousInput = test2_B.motorencoder;
    }
  }

  /* Integrator: '<S8>/Integrator1' */
  if (test2_DW.Integrator1_IWORK_l != 0) {
    test2_X.Integrator1_CSTATE_n = test2_B.Unwrap21;
  }

  /* Product: '<S8>/Product' incorporates:
   *  Constant: '<S3>/Constant7'
   *  Constant: '<S3>/Constant8'
   *  Constant: '<S8>/Constant'
   *  Integrator: '<S8>/Integrator1'
   *  Integrator: '<S8>/Integrator2'
   *  Product: '<S8>/Product2'
   *  Sum: '<S8>/Sum'
   *  Sum: '<S8>/Sum1'
   */
  test2_B.Product_bv = ((test2_B.Unwrap21 - test2_X.Integrator1_CSTATE_n) -
                        test2_X.Integrator2_CSTATE_f * test2_P.Constant_Value_e *
                        test2_P.Constant7_Value) * test2_P.Constant8_Value;

  /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Sin: '<Root>/Sine Wave1'
   */
  if (test2_P.uArm0Disarm1_CurrentSetting == 1) {
    u0 = sin(test2_P.SineWave1_Freq * test2_M->Timing.t[0] +
             test2_P.SineWave1_Phase) * test2_P.SineWave1_Amp +
      test2_P.SineWave1_Bias;
  } else {
    u0 = test2_P.Constant_Value_m2;
  }

  /* Gain: '<S3>/direction convention' incorporates:
   *  ManualSwitch: '<Root>/1 - Arm, 0 - Disarm1'
   */
  u0 *= test2_P.directionconvention_Gain;

  /* Saturate: '<S3>/command saturation' */
  if (u0 > test2_P.commandsaturation_UpperSat) {
    /* Saturate: '<S3>/command saturation' */
    test2_B.commandsaturation = test2_P.commandsaturation_UpperSat;
  } else if (u0 < test2_P.commandsaturation_LowerSat) {
    /* Saturate: '<S3>/command saturation' */
    test2_B.commandsaturation = test2_P.commandsaturation_LowerSat;
  } else {
    /* Saturate: '<S3>/command saturation' */
    test2_B.commandsaturation = u0;
  }

  /* End of Saturate: '<S3>/command saturation' */

  /* Bias: '<S3>/Steering Bias' incorporates:
   *  Gain: '<S3>/Gain'
   *  Sin: '<Root>/Sine Wave'
   */
  test2_B.SteeringBias = (sin(test2_P.SineWave_Freq * test2_M->Timing.t[0] +
    test2_P.SineWave_Phase) * test2_P.SineWave_Amp + test2_P.SineWave_Bias) *
    test2_P.Gain_Gain + test2_P.SteeringBias_Bias;
  if (rtmIsMajorTimeStep(test2_M)) {
    /* SignalConversion generated from: '<S3>/HIL Write' */
    rtb_TmpSignalConversionAtHILWri[0] = test2_B.commandsaturation;
    rtb_TmpSignalConversionAtHILWri[1] = test2_B.SteeringBias;

    /* S-Function (hil_write_block): '<S3>/HIL Write' */

    /* S-Function Block: test2/basicQCarIO/HIL Write (hil_write_block) */
    {
      t_error result;
      result = hil_write(test2_DW.HILInitialize_Card,
                         NULL, 0U,
                         NULL, 0U,
                         NULL, 0U,
                         test2_P.HILWrite_other_channels, 2U,
                         NULL,
                         NULL,
                         NULL,
                         &rtb_TmpSignalConversionAtHILWri[0]
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
      }
    }

    /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' */
    if (test2_P.uArm0Disarm2_CurrentSetting == 1) {
      /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' incorporates:
       *  Constant: '<Root>/Constant10'
       */
      test2_B.switch_l = test2_P.Constant10_Value;
    } else {
      /* ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' incorporates:
       *  Constant: '<Root>/Constant9'
       */
      test2_B.switch_l = test2_P.Constant9_Value;
    }

    /* End of ManualSwitch: '<Root>/1 - Arm, 0 - Disarm2' */

    /* Saturate: '<S4>/command saturation' incorporates:
     *  Constant: '<Root>/Constant11'
     */
    if (test2_P.Constant11_Value > test2_P.commandsaturation_UpperSat_l) {
      u0 = test2_P.commandsaturation_UpperSat_l;
    } else if (test2_P.Constant11_Value < test2_P.commandsaturation_LowerSat_i)
    {
      u0 = test2_P.commandsaturation_LowerSat_i;
    } else {
      u0 = test2_P.Constant11_Value;
    }

    /* Product: '<S4>/Multiply1' incorporates:
     *  Saturate: '<S4>/command saturation'
     */
    test2_B.desired = u0 * test2_B.switch_l;

    /* Gain: '<S4>/Kff  (% // m//s)' */
    test2_B.Kffms = test2_P.Kffms_Gain * test2_B.desired;
  }

  /* Product: '<S4>/Multiply' */
  test2_B.measured = test2_B.Gain3 * test2_B.switch_l;

  /* Sum: '<S4>/Sum' */
  rtb_Sum_a = test2_B.desired - test2_B.measured;
  if (rtmIsMajorTimeStep(test2_M)) {
    /* RelationalOperator: '<S9>/Compare' incorporates:
     *  Constant: '<S9>/Constant'
     */
    test2_B.Compare = (test2_B.desired == test2_P.Constant_Value);
  }

  /* Integrator: '<S4>/Integrator1' */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&test2_M->solverInfo)) {
    didZcEventOccur = (((test2_PrevZCX.Integrator1_Reset_ZCE == POS_ZCSIG) !=
                        (int32_T)test2_B.Compare) &&
                       (test2_PrevZCX.Integrator1_Reset_ZCE !=
                        UNINITIALIZED_ZCSIG));
    test2_PrevZCX.Integrator1_Reset_ZCE = test2_B.Compare;

    /* evaluate zero-crossings */
    if (didZcEventOccur) {
      test2_X.Integrator1_CSTATE_ng = test2_P.Integrator1_IC;
    }
  }

  if (test2_X.Integrator1_CSTATE_ng >= test2_P.Integrator1_UpperSat) {
    test2_X.Integrator1_CSTATE_ng = test2_P.Integrator1_UpperSat;
  } else if (test2_X.Integrator1_CSTATE_ng <= test2_P.Integrator1_LowerSat) {
    test2_X.Integrator1_CSTATE_ng = test2_P.Integrator1_LowerSat;
  }

  /* Sum: '<S4>/Add1' incorporates:
   *  Gain: '<S4>/Kp (% // m//s)'
   *  Integrator: '<S4>/Integrator1'
   *  Sum: '<S4>/Add'
   */
  u0 = (test2_P.Kpms_Gain * rtb_Sum_a + test2_X.Integrator1_CSTATE_ng) +
    test2_B.Kffms;

  /* Saturate: '<S4>/command saturation1' */
  if (u0 > test2_P.commandsaturation1_UpperSat) {
    u0 = test2_P.commandsaturation1_UpperSat;
  } else if (u0 < test2_P.commandsaturation1_LowerSat) {
    u0 = test2_P.commandsaturation1_LowerSat;
  }

  /* Product: '<S4>/Multiply2' incorporates:
   *  Saturate: '<S4>/command saturation1'
   */
  test2_B.pwmdutycycle = u0 * test2_B.switch_l;
  if (rtmIsMajorTimeStep(test2_M)) {
  }

  /* Gain: '<S4>/Ki (% // m)  ' */
  test2_B.Kim = test2_P.Kim_Gain * rtb_Sum_a;
}

/* Model update function */
void test2_update(void)
{
  /* Update for Integrator: '<S7>/Integrator1' */
  test2_DW.Integrator1_IWORK = 0;

  /* Update for Integrator: '<S6>/Integrator1' */
  test2_DW.Integrator1_IWORK_a = 0;

  /* Update for Integrator: '<S5>/Integrator1' */
  test2_DW.Integrator1_IWORK_g = 0;

  /* Update for Integrator: '<S8>/Integrator1' */
  test2_DW.Integrator1_IWORK_l = 0;
  if (rtmIsMajorTimeStep(test2_M)) {
    rt_ertODEUpdateContinuousStates(&test2_M->solverInfo);
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
  if (!(++test2_M->Timing.clockTick0)) {
    ++test2_M->Timing.clockTickH0;
  }

  test2_M->Timing.t[0] = rtsiGetSolverStopTime(&test2_M->solverInfo);

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
    if (!(++test2_M->Timing.clockTick1)) {
      ++test2_M->Timing.clockTickH1;
    }

    test2_M->Timing.t[1] = test2_M->Timing.clockTick1 *
      test2_M->Timing.stepSize1 + test2_M->Timing.clockTickH1 *
      test2_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void test2_derivatives(void)
{
  XDot_test2_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_test2_T *) test2_M->derivs);

  /* Derivatives for Integrator: '<S5>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = test2_B.Product;

  /* Derivatives for Integrator: '<S8>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_f = test2_B.Product_bv;

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = test2_B.Product1_n;

  /* Derivatives for Integrator: '<S6>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_l = test2_B.Product1_c;

  /* Derivatives for Integrator: '<S5>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_p = test2_B.Product1;

  /* Derivatives for Integrator: '<S6>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_m = test2_B.Product_b;

  /* Derivatives for Integrator: '<S7>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_l = test2_B.Product_a;

  /* Derivatives for Integrator: '<S8>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n = test2_B.Product1_p;

  /* Derivatives for Integrator: '<S4>/Integrator1' */
  lsat = (test2_X.Integrator1_CSTATE_ng <= test2_P.Integrator1_LowerSat);
  usat = (test2_X.Integrator1_CSTATE_ng >= test2_P.Integrator1_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (test2_B.Kim > 0.0)) || (usat &&
       (test2_B.Kim < 0.0))) {
    _rtXdot->Integrator1_CSTATE_ng = test2_B.Kim;
  } else {
    /* in saturation */
    _rtXdot->Integrator1_CSTATE_ng = 0.0;
  }

  /* End of Derivatives for Integrator: '<S4>/Integrator1' */
}

/* Model initialize function */
void test2_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S3>/HIL Initialize' */

  /* S-Function Block: test2/basicQCarIO/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qcar2", "0", &test2_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test2_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(test2_DW.HILInitialize_Card,
      "gyro_fs=250;gyro_rate=500;gyro_bw=125;gyro_ord=3;accel_fs=16;accel_rate=1000;accel_bw=250;accel_ord=3;temp_bw=4000;enc0_dir=0;enc1_dir=0;enc2_dir=0;steer_bias=0.05;",
      165);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test2_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(test2_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test2_M, _rt_error_message);
      return;
    }

    if ((test2_P.HILInitialize_AIPStart && !is_switching) ||
        (test2_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &test2_DW.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMinimums[i1] = test2_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &test2_DW.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMaximums[i1] = test2_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_AIChannels, 5U,
        &test2_DW.HILInitialize_AIMinimums[0],
        &test2_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(test2_DW.HILInitialize_Card,
      test2_P.HILInitialize_DIChannels, 15U, test2_P.HILInitialize_DOChannels,
      16U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test2_M, _rt_error_message);
      return;
    }

    if ((test2_P.HILInitialize_DOStart && !is_switching) ||
        (test2_P.HILInitialize_DOEnter && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &test2_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = test2_P.HILInitialize_DOInitial;
        }
      }

      result = hil_write_digital(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_DOChannels, 16U, (t_boolean *)
        &test2_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if (test2_P.HILInitialize_DOReset) {
      {
        int_T i1;
        int32_T *dw_DOStates = &test2_DW.HILInitialize_DOStates[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOStates[i1] = test2_P.HILInitialize_DOWatchdog;
        }
      }

      result = hil_watchdog_set_digital_expiration_state
        (test2_DW.HILInitialize_Card, test2_P.HILInitialize_DOChannels, 16U, (
          const t_digital_state *) &test2_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if ((test2_P.HILInitialize_EIPStart && !is_switching) ||
        (test2_P.HILInitialize_EIPEnter && is_switching)) {
      test2_DW.HILInitialize_QuadratureModes[0] =
        test2_P.HILInitialize_EIQuadrature;
      test2_DW.HILInitialize_QuadratureModes[1] =
        test2_P.HILInitialize_EIQuadrature;
      test2_DW.HILInitialize_QuadratureModes[2] =
        test2_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_EIChannels, 3U, (t_encoder_quadrature_mode *)
        &test2_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }

      test2_DW.HILInitialize_FilterFrequency[0] =
        test2_P.HILInitialize_EIFrequency;
      test2_DW.HILInitialize_FilterFrequency[1] =
        test2_P.HILInitialize_EIFrequency;
      test2_DW.HILInitialize_FilterFrequency[2] =
        test2_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_EIChannels, 3U,
        &test2_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if ((test2_P.HILInitialize_EIStart && !is_switching) ||
        (test2_P.HILInitialize_EIEnter && is_switching)) {
      test2_DW.HILInitialize_InitialEICounts[0] =
        test2_P.HILInitialize_EIInitial;
      test2_DW.HILInitialize_InitialEICounts[1] =
        test2_P.HILInitialize_EIInitial;
      test2_DW.HILInitialize_InitialEICounts[2] =
        test2_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_EIChannels, 3U,
        &test2_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if ((test2_P.HILInitialize_POPStart && !is_switching) ||
        (test2_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;
      test2_DW.HILInitialize_POModeValues[0] = test2_P.HILInitialize_POModes;
      test2_DW.HILInitialize_POModeValues[1] = test2_P.HILInitialize_POModes;
      result = hil_set_pwm_mode(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_POChannels, 2U, (t_pwm_mode *)
        &test2_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }

      if (test2_DW.HILInitialize_POModeValues[0] == PWM_DUTY_CYCLE_MODE ||
          test2_DW.HILInitialize_POModeValues[0] == PWM_ONE_SHOT_MODE ||
          test2_DW.HILInitialize_POModeValues[0] == PWM_TIME_MODE ||
          test2_DW.HILInitialize_POModeValues[0] == PWM_RAW_MODE) {
        test2_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (test2_P.HILInitialize_POChannels[0]);
        test2_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          test2_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        test2_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (test2_P.HILInitialize_POChannels[0]);
        test2_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          test2_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (test2_DW.HILInitialize_POModeValues[1] == PWM_DUTY_CYCLE_MODE ||
          test2_DW.HILInitialize_POModeValues[1] == PWM_ONE_SHOT_MODE ||
          test2_DW.HILInitialize_POModeValues[1] == PWM_TIME_MODE ||
          test2_DW.HILInitialize_POModeValues[1] == PWM_RAW_MODE) {
        test2_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (test2_P.HILInitialize_POChannels[1]);
        test2_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          test2_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        test2_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (test2_P.HILInitialize_POChannels[1]);
        test2_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          test2_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(test2_DW.HILInitialize_Card,
          &test2_DW.HILInitialize_POSortedChans[0], num_duty_cycle_modes,
          &test2_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test2_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(test2_DW.HILInitialize_Card,
          &test2_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &test2_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test2_M, _rt_error_message);
          return;
        }
      }

      test2_DW.HILInitialize_POModeValues[0] =
        test2_P.HILInitialize_POConfiguration;
      test2_DW.HILInitialize_POModeValues[1] =
        test2_P.HILInitialize_POConfiguration;
      test2_DW.HILInitialize_POAlignValues[0] =
        test2_P.HILInitialize_POAlignment;
      test2_DW.HILInitialize_POAlignValues[1] =
        test2_P.HILInitialize_POAlignment;
      test2_DW.HILInitialize_POPolarityVals[0] =
        test2_P.HILInitialize_POPolarity;
      test2_DW.HILInitialize_POPolarityVals[1] =
        test2_P.HILInitialize_POPolarity;
      result = hil_set_pwm_configuration(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_POChannels, 2U,
        (t_pwm_configuration *) &test2_DW.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &test2_DW.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &test2_DW.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if ((test2_P.HILInitialize_POStart && !is_switching) ||
        (test2_P.HILInitialize_POEnter && is_switching)) {
      test2_DW.HILInitialize_POValues[0] = test2_P.HILInitialize_POInitial;
      test2_DW.HILInitialize_POValues[1] = test2_P.HILInitialize_POInitial;
      result = hil_write_pwm(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_POChannels, 2U, &test2_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if (test2_P.HILInitialize_POReset) {
      test2_DW.HILInitialize_POValues[0] = test2_P.HILInitialize_POWatchdog;
      test2_DW.HILInitialize_POValues[1] = test2_P.HILInitialize_POWatchdog;
      result = hil_watchdog_set_pwm_expiration_state(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_POChannels, 2U, &test2_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if ((test2_P.HILInitialize_OOStart && !is_switching) ||
        (test2_P.HILInitialize_OOEnter && is_switching)) {
      test2_DW.HILInitialize_OOValues[0] = test2_P.HILInitialize_OOInitial;
      test2_DW.HILInitialize_OOValues[1] = test2_P.HILInitialize_OOInitial;
      result = hil_write_other(test2_DW.HILInitialize_Card,
        test2_P.HILInitialize_OOChannels, 2U, &test2_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }

    if (test2_P.HILInitialize_OOReset) {
      test2_DW.HILInitialize_OOValues[0] = test2_P.HILInitialize_OOWatchdog;
      test2_DW.HILInitialize_OOValues[1] = test2_P.HILInitialize_OOWatchdog;
      result = hil_watchdog_set_other_expiration_state
        (test2_DW.HILInitialize_Card, test2_P.HILInitialize_OOChannels, 2U,
         &test2_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test2_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (inverse_modulus_block): '<S3>/Unwrap 2^24' */

  /* S-Function Block: test2/basicQCarIO/Unwrap 2^24 (inverse_modulus_block) */
  {
    test2_DW.Unwrap224_FirstSample = true;
    test2_DW.Unwrap224_Revolutions = 0;
  }

  /* Start for S-Function (inverse_modulus_block): '<S3>/Unwrap 2^1' */

  /* S-Function Block: test2/basicQCarIO/Unwrap 2^1 (inverse_modulus_block) */
  {
    test2_DW.Unwrap21_FirstSample = true;
    test2_DW.Unwrap21_Revolutions = 0;
  }

  test2_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Integrator: '<S5>/Integrator2' */
  test2_X.Integrator2_CSTATE = test2_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<S8>/Integrator2' */
  test2_X.Integrator2_CSTATE_f = test2_P.Integrator2_IC_l;

  /* InitializeConditions for Integrator: '<S7>/Integrator1' incorporates:
   *  Integrator: '<S6>/Integrator1'
   */
  if (rtmIsFirstInitCond(test2_M)) {
    test2_X.Integrator1_CSTATE = 0.0;
    test2_X.Integrator1_CSTATE_l = 0.0;
  }

  test2_DW.Integrator1_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S7>/Integrator1' */

  /* InitializeConditions for Integrator: '<S6>/Integrator1' */
  test2_DW.Integrator1_IWORK_a = 1;

  /* InitializeConditions for Integrator: '<S5>/Integrator1' incorporates:
   *  Integrator: '<S8>/Integrator1'
   */
  if (rtmIsFirstInitCond(test2_M)) {
    test2_X.Integrator1_CSTATE_p = 0.0;
    test2_X.Integrator1_CSTATE_n = 0.0;
  }

  test2_DW.Integrator1_IWORK_g = 1;

  /* End of InitializeConditions for Integrator: '<S5>/Integrator1' */

  /* InitializeConditions for Integrator: '<S6>/Integrator2' */
  test2_X.Integrator2_CSTATE_m = test2_P.Integrator2_IC_i;

  /* InitializeConditions for Integrator: '<S7>/Integrator2' */
  test2_X.Integrator2_CSTATE_l = test2_P.Integrator2_IC_i4;

  /* InitializeConditions for Integrator: '<S8>/Integrator1' */
  test2_DW.Integrator1_IWORK_l = 1;

  /* InitializeConditions for Integrator: '<S4>/Integrator1' */
  test2_X.Integrator1_CSTATE_ng = test2_P.Integrator1_IC;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(test2_M)) {
    rtmSetFirstInitCond(test2_M, 0);
  }
}

/* Model terminate function */
void test2_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S3>/HIL Initialize' */

  /* S-Function Block: test2/basicQCarIO/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(test2_DW.HILInitialize_Card);
    hil_monitor_stop_all(test2_DW.HILInitialize_Card);
    is_switching = false;
    if ((test2_P.HILInitialize_DOTerminate && !is_switching) ||
        (test2_P.HILInitialize_DOExit && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &test2_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = test2_P.HILInitialize_DOFinal;
        }
      }

      num_final_digital_outputs = 16U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((test2_P.HILInitialize_POTerminate && !is_switching) ||
        (test2_P.HILInitialize_POExit && is_switching)) {
      test2_DW.HILInitialize_POValues[0] = test2_P.HILInitialize_POFinal;
      test2_DW.HILInitialize_POValues[1] = test2_P.HILInitialize_POFinal;
      num_final_pwm_outputs = 2U;
    } else {
      num_final_pwm_outputs = 0;
    }

    if ((test2_P.HILInitialize_OOTerminate && !is_switching) ||
        (test2_P.HILInitialize_OOExit && is_switching)) {
      test2_DW.HILInitialize_OOValues[0] = test2_P.HILInitialize_OOFinal;
      test2_DW.HILInitialize_OOValues[1] = test2_P.HILInitialize_OOFinal;
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
      result = hil_write(test2_DW.HILInitialize_Card
                         , NULL, 0
                         , test2_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , test2_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , test2_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , NULL
                         , &test2_DW.HILInitialize_POValues[0]
                         , (t_boolean *) &test2_DW.HILInitialize_DOBits[0]
                         , &test2_DW.HILInitialize_OOValues[0]
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm(test2_DW.HILInitialize_Card,
            test2_P.HILInitialize_POChannels, num_final_pwm_outputs,
            &test2_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital(test2_DW.HILInitialize_Card,
            test2_P.HILInitialize_DOChannels, num_final_digital_outputs,
            (t_boolean *) &test2_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other(test2_DW.HILInitialize_Card,
            test2_P.HILInitialize_OOChannels, num_final_other_outputs,
            &test2_DW.HILInitialize_OOValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test2_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(test2_DW.HILInitialize_Card);
    hil_monitor_delete_all(test2_DW.HILInitialize_Card);
    hil_close(test2_DW.HILInitialize_Card);
    test2_DW.HILInitialize_Card = NULL;
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
  test2_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  test2_update();
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
  test2_initialize();
}

void MdlTerminate(void)
{
  test2_terminate();
}

/* Registration function */
RT_MODEL_test2_T *test2(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test2_M, 0,
                sizeof(RT_MODEL_test2_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&test2_M->solverInfo, &test2_M->Timing.simTimeStep);
    rtsiSetTPtr(&test2_M->solverInfo, &rtmGetTPtr(test2_M));
    rtsiSetStepSizePtr(&test2_M->solverInfo, &test2_M->Timing.stepSize0);
    rtsiSetdXPtr(&test2_M->solverInfo, &test2_M->derivs);
    rtsiSetContStatesPtr(&test2_M->solverInfo, (real_T **) &test2_M->contStates);
    rtsiSetNumContStatesPtr(&test2_M->solverInfo, &test2_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&test2_M->solverInfo,
      &test2_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&test2_M->solverInfo,
      &test2_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&test2_M->solverInfo,
      &test2_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&test2_M->solverInfo, (&rtmGetErrorStatus(test2_M)));
    rtsiSetRTModelPtr(&test2_M->solverInfo, test2_M);
  }

  rtsiSetSimTimeStep(&test2_M->solverInfo, MAJOR_TIME_STEP);
  test2_M->intgData.f[0] = test2_M->odeF[0];
  test2_M->contStates = ((real_T *) &test2_X);
  rtsiSetSolverData(&test2_M->solverInfo, (void *)&test2_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&test2_M->solverInfo, false);
  rtsiSetSolverName(&test2_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = test2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "test2_M points to
       static memory which is guaranteed to be non-NULL" */
    test2_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    test2_M->Timing.sampleTimes = (&test2_M->Timing.sampleTimesArray[0]);
    test2_M->Timing.offsetTimes = (&test2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    test2_M->Timing.sampleTimes[0] = (0.0);
    test2_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    test2_M->Timing.offsetTimes[0] = (0.0);
    test2_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(test2_M, &test2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = test2_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    test2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(test2_M, -1);
  test2_M->Timing.stepSize0 = 0.002;
  test2_M->Timing.stepSize1 = 0.002;
  rtmSetFirstInitCond(test2_M, 1);

  /* External mode info */
  test2_M->Sizes.checksums[0] = (2274986473U);
  test2_M->Sizes.checksums[1] = (2653449047U);
  test2_M->Sizes.checksums[2] = (2190051454U);
  test2_M->Sizes.checksums[3] = (3318896719U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    test2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(test2_M->extModeInfo,
      &test2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(test2_M->extModeInfo, test2_M->Sizes.checksums);
    rteiSetTPtr(test2_M->extModeInfo, rtmGetTPtr(test2_M));
  }

  test2_M->solverInfoPtr = (&test2_M->solverInfo);
  test2_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&test2_M->solverInfo, 0.002);
  rtsiSetSolverMode(&test2_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  test2_M->blockIO = ((void *) &test2_B);
  (void) memset(((void *) &test2_B), 0,
                sizeof(B_test2_T));

  /* parameters */
  test2_M->defaultParam = ((real_T *)&test2_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &test2_X;
    test2_M->contStates = (x);
    (void) memset((void *)&test2_X, 0,
                  sizeof(X_test2_T));
  }

  /* states (dwork) */
  test2_M->dwork = ((void *) &test2_DW);
  (void) memset((void *)&test2_DW, 0,
                sizeof(DW_test2_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    test2_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 24;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  test2_M->Sizes.numContStates = (9);  /* Number of continuous states */
  test2_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  test2_M->Sizes.numY = (0);           /* Number of model outputs */
  test2_M->Sizes.numU = (0);           /* Number of model inputs */
  test2_M->Sizes.sysDirFeedThru = (0); /* The model is not direct feedthrough */
  test2_M->Sizes.numSampTimes = (2);   /* Number of sample times */
  test2_M->Sizes.numBlocks = (89);     /* Number of blocks */
  test2_M->Sizes.numBlockIO = (25);    /* Number of block outputs */
  test2_M->Sizes.numBlockPrms = (159); /* Sum of parameter "widths" */
  return test2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
