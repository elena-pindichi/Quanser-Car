/*
 * test1.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "test1".
 *
 * Model version              : 15.0
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Apr  9 10:58:55 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test1.h"
#include "test1_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "test1_dt.h"

/* Block signals (default storage) */
B_test1_T test1_B;

/* Continuous states */
X_test1_T test1_X;

/* Block states (default storage) */
DW_test1_T test1_DW;

/* Real-time model */
static RT_MODEL_test1_T test1_M_;
RT_MODEL_test1_T *const test1_M = &test1_M_;

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
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  test1_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void test1_output(void)
{
  if (rtmIsMajorTimeStep(test1_M)) {
    /* set solver stop time */
    if (!(test1_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&test1_M->solverInfo, ((test1_M->Timing.clockTickH0
        + 1) * test1_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&test1_M->solverInfo, ((test1_M->Timing.clockTick0 +
        1) * test1_M->Timing.stepSize0 + test1_M->Timing.clockTickH0 *
        test1_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(test1_M)) {
    test1_M->Timing.t[0] = rtsiGetT(&test1_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(test1_M)) {
    /* S-Function (hil_read_block): '<Root>/HIL Read' */

    /* S-Function Block: test1/HIL Read (hil_read_block) */
    {
      t_error result = hil_read(test1_DW.HILInitialize_Card,
        NULL, 0U,
        NULL, 0U,
        NULL, 0U,
        test1_P.HILRead_other_channels, 5U,
        NULL,
        NULL,
        NULL,
        &test1_DW.HILRead_OtherBuffer[0]
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
      } else {
        test1_B.HILRead_o1 = test1_DW.HILRead_OtherBuffer[0];
        test1_B.HILRead_o2 = test1_DW.HILRead_OtherBuffer[1];
        test1_B.HILRead_o3 = test1_DW.HILRead_OtherBuffer[2];
        test1_B.HILRead_o4 = test1_DW.HILRead_OtherBuffer[3];
        test1_B.HILRead_o5 = test1_DW.HILRead_OtherBuffer[4];
      }
    }

    /* UnitDelay: '<Root>/Unit Delay' */
    test1_B.UnitDelay = test1_DW.UnitDelay_DSTATE;
  }

  /* Integrator: '<Root>/Integrator1' */
  test1_B.Integrator1 = test1_X.Integrator1_CSTATE;

  /* Sum: '<Root>/Sum' incorporates:
   *  Clock: '<Root>/Clock'
   *  Constant: '<Root>/Constant1'
   *  Gain: '<Root>/Gain'
   *  Product: '<S1>/Product'
   *  Sum: '<S1>/Sum'
   */
  test1_B.Sum = (test1_P.Gain_Gain * test1_M->Timing.t[0] * test1_B.HILRead_o1 +
                 test1_P.Constant1_Value) + test1_B.UnitDelay;

  /* Integrator: '<Root>/Integrator' */
  test1_B.Integrator = test1_X.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(test1_M)) {
    /* S-Function (hil_write_block): '<Root>/HIL Write' incorporates:
     *  Constant: '<Root>/Constant'
     */

    /* S-Function Block: test1/HIL Write (hil_write_block) */
    {
      t_error result;
      result = hil_write(test1_DW.HILInitialize_Card,
                         NULL, 0U,
                         NULL, 0U,
                         NULL, 0U,
                         &test1_P.HILWrite_other_channels, 1U,
                         NULL,
                         NULL,
                         NULL,
                         &test1_P.Constant_Value
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
      }
    }
  }
}

/* Model update function */
void test1_update(void)
{
  if (rtmIsMajorTimeStep(test1_M)) {
    /* Update for UnitDelay: '<Root>/Unit Delay' */
    test1_DW.UnitDelay_DSTATE = test1_B.HILRead_o1;
  }

  if (rtmIsMajorTimeStep(test1_M)) {
    rt_ertODEUpdateContinuousStates(&test1_M->solverInfo);
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
  if (!(++test1_M->Timing.clockTick0)) {
    ++test1_M->Timing.clockTickH0;
  }

  test1_M->Timing.t[0] = rtsiGetSolverStopTime(&test1_M->solverInfo);

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
    if (!(++test1_M->Timing.clockTick1)) {
      ++test1_M->Timing.clockTickH1;
    }

    test1_M->Timing.t[1] = test1_M->Timing.clockTick1 *
      test1_M->Timing.stepSize1 + test1_M->Timing.clockTickH1 *
      test1_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void test1_derivatives(void)
{
  XDot_test1_T *_rtXdot;
  _rtXdot = ((XDot_test1_T *) test1_M->derivs);

  /* Derivatives for Integrator: '<Root>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = test1_B.Integrator;

  /* Derivatives for Integrator: '<Root>/Integrator' */
  _rtXdot->Integrator_CSTATE = test1_B.HILRead_o1;
}

/* Model initialize function */
void test1_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: test1/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qcar2", "0", &test1_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test1_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(test1_DW.HILInitialize_Card,
      "gyro_fs=250;gyro_rate=500;gyro_bw=125;gyro_ord=3;accel_fs=16;accel_rate=1000;accel_bw=250;accel_ord=3;temp_bw=4000;enc0_dir=0;enc1_dir=0;enc2_dir=0;steer_bias=0.05;",
      165);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test1_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(test1_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test1_M, _rt_error_message);
      return;
    }

    if ((test1_P.HILInitialize_AIPStart && !is_switching) ||
        (test1_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &test1_DW.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMinimums[i1] = test1_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &test1_DW.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMaximums[i1] = test1_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_AIChannels, 5U,
        &test1_DW.HILInitialize_AIMinimums[0],
        &test1_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(test1_DW.HILInitialize_Card,
      test1_P.HILInitialize_DIChannels, 15U, test1_P.HILInitialize_DOChannels,
      16U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(test1_M, _rt_error_message);
      return;
    }

    if ((test1_P.HILInitialize_DOStart && !is_switching) ||
        (test1_P.HILInitialize_DOEnter && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &test1_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = test1_P.HILInitialize_DOInitial;
        }
      }

      result = hil_write_digital(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_DOChannels, 16U, (t_boolean *)
        &test1_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if (test1_P.HILInitialize_DOReset) {
      {
        int_T i1;
        int32_T *dw_DOStates = &test1_DW.HILInitialize_DOStates[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOStates[i1] = test1_P.HILInitialize_DOWatchdog;
        }
      }

      result = hil_watchdog_set_digital_expiration_state
        (test1_DW.HILInitialize_Card, test1_P.HILInitialize_DOChannels, 16U, (
          const t_digital_state *) &test1_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if ((test1_P.HILInitialize_EIPStart && !is_switching) ||
        (test1_P.HILInitialize_EIPEnter && is_switching)) {
      test1_DW.HILInitialize_QuadratureModes[0] =
        test1_P.HILInitialize_EIQuadrature;
      test1_DW.HILInitialize_QuadratureModes[1] =
        test1_P.HILInitialize_EIQuadrature;
      test1_DW.HILInitialize_QuadratureModes[2] =
        test1_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_EIChannels, 3U, (t_encoder_quadrature_mode *)
        &test1_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }

      test1_DW.HILInitialize_FilterFrequency[0] =
        test1_P.HILInitialize_EIFrequency;
      test1_DW.HILInitialize_FilterFrequency[1] =
        test1_P.HILInitialize_EIFrequency;
      test1_DW.HILInitialize_FilterFrequency[2] =
        test1_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_EIChannels, 3U,
        &test1_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if ((test1_P.HILInitialize_EIStart && !is_switching) ||
        (test1_P.HILInitialize_EIEnter && is_switching)) {
      test1_DW.HILInitialize_InitialEICounts[0] =
        test1_P.HILInitialize_EIInitial;
      test1_DW.HILInitialize_InitialEICounts[1] =
        test1_P.HILInitialize_EIInitial;
      test1_DW.HILInitialize_InitialEICounts[2] =
        test1_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_EIChannels, 3U,
        &test1_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if ((test1_P.HILInitialize_POPStart && !is_switching) ||
        (test1_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;
      test1_DW.HILInitialize_POModeValues[0] = test1_P.HILInitialize_POModes;
      test1_DW.HILInitialize_POModeValues[1] = test1_P.HILInitialize_POModes;
      result = hil_set_pwm_mode(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_POChannels, 2U, (t_pwm_mode *)
        &test1_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }

      if (test1_DW.HILInitialize_POModeValues[0] == PWM_DUTY_CYCLE_MODE ||
          test1_DW.HILInitialize_POModeValues[0] == PWM_ONE_SHOT_MODE ||
          test1_DW.HILInitialize_POModeValues[0] == PWM_TIME_MODE ||
          test1_DW.HILInitialize_POModeValues[0] == PWM_RAW_MODE) {
        test1_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (test1_P.HILInitialize_POChannels[0]);
        test1_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          test1_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        test1_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (test1_P.HILInitialize_POChannels[0]);
        test1_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          test1_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (test1_DW.HILInitialize_POModeValues[1] == PWM_DUTY_CYCLE_MODE ||
          test1_DW.HILInitialize_POModeValues[1] == PWM_ONE_SHOT_MODE ||
          test1_DW.HILInitialize_POModeValues[1] == PWM_TIME_MODE ||
          test1_DW.HILInitialize_POModeValues[1] == PWM_RAW_MODE) {
        test1_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (test1_P.HILInitialize_POChannels[1]);
        test1_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          test1_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        test1_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (test1_P.HILInitialize_POChannels[1]);
        test1_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          test1_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(test1_DW.HILInitialize_Card,
          &test1_DW.HILInitialize_POSortedChans[0], num_duty_cycle_modes,
          &test1_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test1_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(test1_DW.HILInitialize_Card,
          &test1_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &test1_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test1_M, _rt_error_message);
          return;
        }
      }

      test1_DW.HILInitialize_POModeValues[0] =
        test1_P.HILInitialize_POConfiguration;
      test1_DW.HILInitialize_POModeValues[1] =
        test1_P.HILInitialize_POConfiguration;
      test1_DW.HILInitialize_POAlignValues[0] =
        test1_P.HILInitialize_POAlignment;
      test1_DW.HILInitialize_POAlignValues[1] =
        test1_P.HILInitialize_POAlignment;
      test1_DW.HILInitialize_POPolarityVals[0] =
        test1_P.HILInitialize_POPolarity;
      test1_DW.HILInitialize_POPolarityVals[1] =
        test1_P.HILInitialize_POPolarity;
      result = hil_set_pwm_configuration(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_POChannels, 2U,
        (t_pwm_configuration *) &test1_DW.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &test1_DW.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &test1_DW.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if ((test1_P.HILInitialize_POStart && !is_switching) ||
        (test1_P.HILInitialize_POEnter && is_switching)) {
      test1_DW.HILInitialize_POValues[0] = test1_P.HILInitialize_POInitial;
      test1_DW.HILInitialize_POValues[1] = test1_P.HILInitialize_POInitial;
      result = hil_write_pwm(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_POChannels, 2U, &test1_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if (test1_P.HILInitialize_POReset) {
      test1_DW.HILInitialize_POValues[0] = test1_P.HILInitialize_POWatchdog;
      test1_DW.HILInitialize_POValues[1] = test1_P.HILInitialize_POWatchdog;
      result = hil_watchdog_set_pwm_expiration_state(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_POChannels, 2U, &test1_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if ((test1_P.HILInitialize_OOStart && !is_switching) ||
        (test1_P.HILInitialize_OOEnter && is_switching)) {
      test1_DW.HILInitialize_OOValues[0] = test1_P.HILInitialize_OOInitial;
      test1_DW.HILInitialize_OOValues[1] = test1_P.HILInitialize_OOInitial;
      result = hil_write_other(test1_DW.HILInitialize_Card,
        test1_P.HILInitialize_OOChannels, 2U, &test1_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }

    if (test1_P.HILInitialize_OOReset) {
      test1_DW.HILInitialize_OOValues[0] = test1_P.HILInitialize_OOWatchdog;
      test1_DW.HILInitialize_OOValues[1] = test1_P.HILInitialize_OOWatchdog;
      result = hil_watchdog_set_other_expiration_state
        (test1_DW.HILInitialize_Card, test1_P.HILInitialize_OOChannels, 2U,
         &test1_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(test1_M, _rt_error_message);
        return;
      }
    }
  }

  /* InitializeConditions for Integrator: '<Root>/Integrator1' */
  test1_X.Integrator1_CSTATE = test1_P.Integrator1_IC;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  test1_DW.UnitDelay_DSTATE = test1_P.UnitDelay_InitialCondition;

  /* InitializeConditions for Integrator: '<Root>/Integrator' */
  test1_X.Integrator_CSTATE = test1_P.Integrator_IC;
}

/* Model terminate function */
void test1_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: test1/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(test1_DW.HILInitialize_Card);
    hil_monitor_stop_all(test1_DW.HILInitialize_Card);
    is_switching = false;
    if ((test1_P.HILInitialize_DOTerminate && !is_switching) ||
        (test1_P.HILInitialize_DOExit && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &test1_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = test1_P.HILInitialize_DOFinal;
        }
      }

      num_final_digital_outputs = 16U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((test1_P.HILInitialize_POTerminate && !is_switching) ||
        (test1_P.HILInitialize_POExit && is_switching)) {
      test1_DW.HILInitialize_POValues[0] = test1_P.HILInitialize_POFinal;
      test1_DW.HILInitialize_POValues[1] = test1_P.HILInitialize_POFinal;
      num_final_pwm_outputs = 2U;
    } else {
      num_final_pwm_outputs = 0;
    }

    if ((test1_P.HILInitialize_OOTerminate && !is_switching) ||
        (test1_P.HILInitialize_OOExit && is_switching)) {
      test1_DW.HILInitialize_OOValues[0] = test1_P.HILInitialize_OOFinal;
      test1_DW.HILInitialize_OOValues[1] = test1_P.HILInitialize_OOFinal;
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
      result = hil_write(test1_DW.HILInitialize_Card
                         , NULL, 0
                         , test1_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , test1_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , test1_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , NULL
                         , &test1_DW.HILInitialize_POValues[0]
                         , (t_boolean *) &test1_DW.HILInitialize_DOBits[0]
                         , &test1_DW.HILInitialize_OOValues[0]
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm(test1_DW.HILInitialize_Card,
            test1_P.HILInitialize_POChannels, num_final_pwm_outputs,
            &test1_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital(test1_DW.HILInitialize_Card,
            test1_P.HILInitialize_DOChannels, num_final_digital_outputs,
            (t_boolean *) &test1_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other(test1_DW.HILInitialize_Card,
            test1_P.HILInitialize_OOChannels, num_final_other_outputs,
            &test1_DW.HILInitialize_OOValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(test1_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(test1_DW.HILInitialize_Card);
    hil_monitor_delete_all(test1_DW.HILInitialize_Card);
    hil_close(test1_DW.HILInitialize_Card);
    test1_DW.HILInitialize_Card = NULL;
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
  test1_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  test1_update();
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
  test1_initialize();
}

void MdlTerminate(void)
{
  test1_terminate();
}

/* Registration function */
RT_MODEL_test1_T *test1(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test1_M, 0,
                sizeof(RT_MODEL_test1_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&test1_M->solverInfo, &test1_M->Timing.simTimeStep);
    rtsiSetTPtr(&test1_M->solverInfo, &rtmGetTPtr(test1_M));
    rtsiSetStepSizePtr(&test1_M->solverInfo, &test1_M->Timing.stepSize0);
    rtsiSetdXPtr(&test1_M->solverInfo, &test1_M->derivs);
    rtsiSetContStatesPtr(&test1_M->solverInfo, (real_T **) &test1_M->contStates);
    rtsiSetNumContStatesPtr(&test1_M->solverInfo, &test1_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&test1_M->solverInfo,
      &test1_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&test1_M->solverInfo,
      &test1_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&test1_M->solverInfo,
      &test1_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&test1_M->solverInfo, (&rtmGetErrorStatus(test1_M)));
    rtsiSetRTModelPtr(&test1_M->solverInfo, test1_M);
  }

  rtsiSetSimTimeStep(&test1_M->solverInfo, MAJOR_TIME_STEP);
  test1_M->intgData.f[0] = test1_M->odeF[0];
  test1_M->contStates = ((real_T *) &test1_X);
  rtsiSetSolverData(&test1_M->solverInfo, (void *)&test1_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&test1_M->solverInfo, false);
  rtsiSetSolverName(&test1_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = test1_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "test1_M points to
       static memory which is guaranteed to be non-NULL" */
    test1_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    test1_M->Timing.sampleTimes = (&test1_M->Timing.sampleTimesArray[0]);
    test1_M->Timing.offsetTimes = (&test1_M->Timing.offsetTimesArray[0]);

    /* task periods */
    test1_M->Timing.sampleTimes[0] = (0.0);
    test1_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    test1_M->Timing.offsetTimes[0] = (0.0);
    test1_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(test1_M, &test1_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = test1_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    test1_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(test1_M, -1);
  test1_M->Timing.stepSize0 = 0.002;
  test1_M->Timing.stepSize1 = 0.002;

  /* External mode info */
  test1_M->Sizes.checksums[0] = (2633127957U);
  test1_M->Sizes.checksums[1] = (3991472277U);
  test1_M->Sizes.checksums[2] = (928236149U);
  test1_M->Sizes.checksums[3] = (1001698019U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    test1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(test1_M->extModeInfo,
      &test1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(test1_M->extModeInfo, test1_M->Sizes.checksums);
    rteiSetTPtr(test1_M->extModeInfo, rtmGetTPtr(test1_M));
  }

  test1_M->solverInfoPtr = (&test1_M->solverInfo);
  test1_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&test1_M->solverInfo, 0.002);
  rtsiSetSolverMode(&test1_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  test1_M->blockIO = ((void *) &test1_B);
  (void) memset(((void *) &test1_B), 0,
                sizeof(B_test1_T));

  /* parameters */
  test1_M->defaultParam = ((real_T *)&test1_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &test1_X;
    test1_M->contStates = (x);
    (void) memset((void *)&test1_X, 0,
                  sizeof(X_test1_T));
  }

  /* states (dwork) */
  test1_M->dwork = ((void *) &test1_DW);
  (void) memset((void *)&test1_DW, 0,
                sizeof(DW_test1_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    test1_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 24;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  test1_M->Sizes.numContStates = (2);  /* Number of continuous states */
  test1_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  test1_M->Sizes.numY = (0);           /* Number of model outputs */
  test1_M->Sizes.numU = (0);           /* Number of model inputs */
  test1_M->Sizes.sysDirFeedThru = (0); /* The model is not direct feedthrough */
  test1_M->Sizes.numSampTimes = (2);   /* Number of sample times */
  test1_M->Sizes.numBlocks = (24);     /* Number of blocks */
  test1_M->Sizes.numBlockIO = (9);     /* Number of block outputs */
  test1_M->Sizes.numBlockPrms = (113); /* Sum of parameter "widths" */
  return test1_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
