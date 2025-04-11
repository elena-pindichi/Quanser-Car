/*
 * untitled.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Apr  9 10:31:35 2025
 *
 * Target selection: quarc_linux_qcar2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "untitled_dt.h"

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Continuous states */
X_untitled_T untitled_X;

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

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
  untitled_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void untitled_output(void)
{
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* set solver stop time */
    if (!(untitled_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&untitled_M->solverInfo,
                            ((untitled_M->Timing.clockTickH0 + 1) *
        untitled_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&untitled_M->solverInfo,
                            ((untitled_M->Timing.clockTick0 + 1) *
        untitled_M->Timing.stepSize0 + untitled_M->Timing.clockTickH0 *
        untitled_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(untitled_M)) {
    untitled_M->Timing.t[0] = rtsiGetT(&untitled_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(untitled_M)) {
    /* S-Function (hil_read_block): '<Root>/HIL Read' */

    /* S-Function Block: untitled/HIL Read (hil_read_block) */
    {
      t_error result = hil_read(untitled_DW.HILInitialize_Card,
        NULL, 0U,
        NULL, 0U,
        NULL, 0U,
        untitled_P.HILRead_other_channels, 5U,
        NULL,
        NULL,
        NULL,
        &untitled_DW.HILRead_OtherBuffer[0]
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
      } else {
        untitled_B.HILRead_o1 = untitled_DW.HILRead_OtherBuffer[0];
        untitled_B.HILRead_o2 = untitled_DW.HILRead_OtherBuffer[1];
        untitled_B.HILRead_o3 = untitled_DW.HILRead_OtherBuffer[2];
        untitled_B.HILRead_o4 = untitled_DW.HILRead_OtherBuffer[3];
        untitled_B.HILRead_o5 = untitled_DW.HILRead_OtherBuffer[4];
      }
    }
  }

  /* Integrator: '<Root>/Integrator1' */
  untitled_B.Integrator1 = untitled_X.Integrator1_CSTATE;
  if (rtmIsMajorTimeStep(untitled_M)) {
  }

  /* Integrator: '<Root>/Integrator' */
  untitled_B.Integrator = untitled_X.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* S-Function (hil_write_block): '<Root>/HIL Write' incorporates:
     *  Constant: '<Root>/Constant'
     */

    /* S-Function Block: untitled/HIL Write (hil_write_block) */
    {
      t_error result;
      result = hil_write(untitled_DW.HILInitialize_Card,
                         NULL, 0U,
                         NULL, 0U,
                         NULL, 0U,
                         &untitled_P.HILWrite_other_channels, 1U,
                         NULL,
                         NULL,
                         NULL,
                         &untitled_P.Constant_Value
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
      }
    }
  }
}

/* Model update function */
void untitled_update(void)
{
  if (rtmIsMajorTimeStep(untitled_M)) {
    rt_ertODEUpdateContinuousStates(&untitled_M->solverInfo);
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
  if (!(++untitled_M->Timing.clockTick0)) {
    ++untitled_M->Timing.clockTickH0;
  }

  untitled_M->Timing.t[0] = rtsiGetSolverStopTime(&untitled_M->solverInfo);

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
    if (!(++untitled_M->Timing.clockTick1)) {
      ++untitled_M->Timing.clockTickH1;
    }

    untitled_M->Timing.t[1] = untitled_M->Timing.clockTick1 *
      untitled_M->Timing.stepSize1 + untitled_M->Timing.clockTickH1 *
      untitled_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void untitled_derivatives(void)
{
  XDot_untitled_T *_rtXdot;
  _rtXdot = ((XDot_untitled_T *) untitled_M->derivs);

  /* Derivatives for Integrator: '<Root>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = untitled_B.Integrator;

  /* Derivatives for Integrator: '<Root>/Integrator' */
  _rtXdot->Integrator_CSTATE = untitled_B.HILRead_o1;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: untitled/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qcar2", "0", &untitled_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(untitled_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(untitled_DW.HILInitialize_Card,
      "gyro_fs=250;gyro_rate=500;gyro_bw=125;gyro_ord=3;accel_fs=16;accel_rate=1000;accel_bw=250;accel_ord=3;temp_bw=4000;enc0_dir=0;enc1_dir=0;enc2_dir=0;steer_bias=0.05;",
      165);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(untitled_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(untitled_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(untitled_M, _rt_error_message);
      return;
    }

    if ((untitled_P.HILInitialize_AIPStart && !is_switching) ||
        (untitled_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &untitled_DW.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMinimums[i1] = untitled_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &untitled_DW.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 5; i1++) {
          dw_AIMaximums[i1] = untitled_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_AIChannels, 5U,
        &untitled_DW.HILInitialize_AIMinimums[0],
        &untitled_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(untitled_DW.HILInitialize_Card,
      untitled_P.HILInitialize_DIChannels, 15U,
      untitled_P.HILInitialize_DOChannels, 16U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(untitled_M, _rt_error_message);
      return;
    }

    if ((untitled_P.HILInitialize_DOStart && !is_switching) ||
        (untitled_P.HILInitialize_DOEnter && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &untitled_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = untitled_P.HILInitialize_DOInitial;
        }
      }

      result = hil_write_digital(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_DOChannels, 16U, (t_boolean *)
        &untitled_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if (untitled_P.HILInitialize_DOReset) {
      {
        int_T i1;
        int32_T *dw_DOStates = &untitled_DW.HILInitialize_DOStates[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOStates[i1] = untitled_P.HILInitialize_DOWatchdog;
        }
      }

      result = hil_watchdog_set_digital_expiration_state
        (untitled_DW.HILInitialize_Card, untitled_P.HILInitialize_DOChannels,
         16U, (const t_digital_state *) &untitled_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if ((untitled_P.HILInitialize_EIPStart && !is_switching) ||
        (untitled_P.HILInitialize_EIPEnter && is_switching)) {
      untitled_DW.HILInitialize_QuadratureModes[0] =
        untitled_P.HILInitialize_EIQuadrature;
      untitled_DW.HILInitialize_QuadratureModes[1] =
        untitled_P.HILInitialize_EIQuadrature;
      untitled_DW.HILInitialize_QuadratureModes[2] =
        untitled_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_EIChannels, 3U, (t_encoder_quadrature_mode *)
        &untitled_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }

      untitled_DW.HILInitialize_FilterFrequency[0] =
        untitled_P.HILInitialize_EIFrequency;
      untitled_DW.HILInitialize_FilterFrequency[1] =
        untitled_P.HILInitialize_EIFrequency;
      untitled_DW.HILInitialize_FilterFrequency[2] =
        untitled_P.HILInitialize_EIFrequency;
      result = hil_set_encoder_filter_frequency(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_EIChannels, 3U,
        &untitled_DW.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if ((untitled_P.HILInitialize_EIStart && !is_switching) ||
        (untitled_P.HILInitialize_EIEnter && is_switching)) {
      untitled_DW.HILInitialize_InitialEICounts[0] =
        untitled_P.HILInitialize_EIInitial;
      untitled_DW.HILInitialize_InitialEICounts[1] =
        untitled_P.HILInitialize_EIInitial;
      untitled_DW.HILInitialize_InitialEICounts[2] =
        untitled_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_EIChannels, 3U,
        &untitled_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if ((untitled_P.HILInitialize_POPStart && !is_switching) ||
        (untitled_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;
      untitled_DW.HILInitialize_POModeValues[0] =
        untitled_P.HILInitialize_POModes;
      untitled_DW.HILInitialize_POModeValues[1] =
        untitled_P.HILInitialize_POModes;
      result = hil_set_pwm_mode(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_POChannels, 2U, (t_pwm_mode *)
        &untitled_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }

      if (untitled_DW.HILInitialize_POModeValues[0] == PWM_DUTY_CYCLE_MODE ||
          untitled_DW.HILInitialize_POModeValues[0] == PWM_ONE_SHOT_MODE ||
          untitled_DW.HILInitialize_POModeValues[0] == PWM_TIME_MODE ||
          untitled_DW.HILInitialize_POModeValues[0] == PWM_RAW_MODE) {
        untitled_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (untitled_P.HILInitialize_POChannels[0]);
        untitled_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          untitled_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        untitled_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (untitled_P.HILInitialize_POChannels[0]);
        untitled_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          untitled_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (untitled_DW.HILInitialize_POModeValues[1] == PWM_DUTY_CYCLE_MODE ||
          untitled_DW.HILInitialize_POModeValues[1] == PWM_ONE_SHOT_MODE ||
          untitled_DW.HILInitialize_POModeValues[1] == PWM_TIME_MODE ||
          untitled_DW.HILInitialize_POModeValues[1] == PWM_RAW_MODE) {
        untitled_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (untitled_P.HILInitialize_POChannels[1]);
        untitled_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          untitled_P.HILInitialize_POFrequency;
        num_duty_cycle_modes++;
      } else {
        untitled_DW.HILInitialize_POSortedChans[1U - num_frequency_modes] =
          (untitled_P.HILInitialize_POChannels[1]);
        untitled_DW.HILInitialize_POSortedFreqs[1U - num_frequency_modes] =
          untitled_P.HILInitialize_POFrequency;
        num_frequency_modes++;
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(untitled_DW.HILInitialize_Card,
          &untitled_DW.HILInitialize_POSortedChans[0], num_duty_cycle_modes,
          &untitled_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(untitled_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(untitled_DW.HILInitialize_Card,
          &untitled_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &untitled_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(untitled_M, _rt_error_message);
          return;
        }
      }

      untitled_DW.HILInitialize_POModeValues[0] =
        untitled_P.HILInitialize_POConfiguration;
      untitled_DW.HILInitialize_POModeValues[1] =
        untitled_P.HILInitialize_POConfiguration;
      untitled_DW.HILInitialize_POAlignValues[0] =
        untitled_P.HILInitialize_POAlignment;
      untitled_DW.HILInitialize_POAlignValues[1] =
        untitled_P.HILInitialize_POAlignment;
      untitled_DW.HILInitialize_POPolarityVals[0] =
        untitled_P.HILInitialize_POPolarity;
      untitled_DW.HILInitialize_POPolarityVals[1] =
        untitled_P.HILInitialize_POPolarity;
      result = hil_set_pwm_configuration(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_POChannels, 2U,
        (t_pwm_configuration *) &untitled_DW.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &untitled_DW.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &untitled_DW.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if ((untitled_P.HILInitialize_POStart && !is_switching) ||
        (untitled_P.HILInitialize_POEnter && is_switching)) {
      untitled_DW.HILInitialize_POValues[0] = untitled_P.HILInitialize_POInitial;
      untitled_DW.HILInitialize_POValues[1] = untitled_P.HILInitialize_POInitial;
      result = hil_write_pwm(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_POChannels, 2U,
        &untitled_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if (untitled_P.HILInitialize_POReset) {
      untitled_DW.HILInitialize_POValues[0] =
        untitled_P.HILInitialize_POWatchdog;
      untitled_DW.HILInitialize_POValues[1] =
        untitled_P.HILInitialize_POWatchdog;
      result = hil_watchdog_set_pwm_expiration_state
        (untitled_DW.HILInitialize_Card, untitled_P.HILInitialize_POChannels, 2U,
         &untitled_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if ((untitled_P.HILInitialize_OOStart && !is_switching) ||
        (untitled_P.HILInitialize_OOEnter && is_switching)) {
      untitled_DW.HILInitialize_OOValues[0] = untitled_P.HILInitialize_OOInitial;
      untitled_DW.HILInitialize_OOValues[1] = untitled_P.HILInitialize_OOInitial;
      result = hil_write_other(untitled_DW.HILInitialize_Card,
        untitled_P.HILInitialize_OOChannels, 2U,
        &untitled_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }

    if (untitled_P.HILInitialize_OOReset) {
      untitled_DW.HILInitialize_OOValues[0] =
        untitled_P.HILInitialize_OOWatchdog;
      untitled_DW.HILInitialize_OOValues[1] =
        untitled_P.HILInitialize_OOWatchdog;
      result = hil_watchdog_set_other_expiration_state
        (untitled_DW.HILInitialize_Card, untitled_P.HILInitialize_OOChannels, 2U,
         &untitled_DW.HILInitialize_OOValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(untitled_M, _rt_error_message);
        return;
      }
    }
  }

  /* InitializeConditions for Integrator: '<Root>/Integrator1' */
  untitled_X.Integrator1_CSTATE = untitled_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator' */
  untitled_X.Integrator_CSTATE = untitled_P.Integrator_IC;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: untitled/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(untitled_DW.HILInitialize_Card);
    hil_monitor_stop_all(untitled_DW.HILInitialize_Card);
    is_switching = false;
    if ((untitled_P.HILInitialize_DOTerminate && !is_switching) ||
        (untitled_P.HILInitialize_DOExit && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &untitled_DW.HILInitialize_DOBits[0];
        for (i1=0; i1 < 16; i1++) {
          dw_DOBits[i1] = untitled_P.HILInitialize_DOFinal;
        }
      }

      num_final_digital_outputs = 16U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((untitled_P.HILInitialize_POTerminate && !is_switching) ||
        (untitled_P.HILInitialize_POExit && is_switching)) {
      untitled_DW.HILInitialize_POValues[0] = untitled_P.HILInitialize_POFinal;
      untitled_DW.HILInitialize_POValues[1] = untitled_P.HILInitialize_POFinal;
      num_final_pwm_outputs = 2U;
    } else {
      num_final_pwm_outputs = 0;
    }

    if ((untitled_P.HILInitialize_OOTerminate && !is_switching) ||
        (untitled_P.HILInitialize_OOExit && is_switching)) {
      untitled_DW.HILInitialize_OOValues[0] = untitled_P.HILInitialize_OOFinal;
      untitled_DW.HILInitialize_OOValues[1] = untitled_P.HILInitialize_OOFinal;
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
      result = hil_write(untitled_DW.HILInitialize_Card
                         , NULL, 0
                         , untitled_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , untitled_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , untitled_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , NULL
                         , &untitled_DW.HILInitialize_POValues[0]
                         , (t_boolean *) &untitled_DW.HILInitialize_DOBits[0]
                         , &untitled_DW.HILInitialize_OOValues[0]
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm(untitled_DW.HILInitialize_Card,
            untitled_P.HILInitialize_POChannels, num_final_pwm_outputs,
            &untitled_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital(untitled_DW.HILInitialize_Card,
            untitled_P.HILInitialize_DOChannels, num_final_digital_outputs,
            (t_boolean *) &untitled_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other(untitled_DW.HILInitialize_Card,
            untitled_P.HILInitialize_OOChannels, num_final_other_outputs,
            &untitled_DW.HILInitialize_OOValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(untitled_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(untitled_DW.HILInitialize_Card);
    hil_monitor_delete_all(untitled_DW.HILInitialize_Card);
    hil_close(untitled_DW.HILInitialize_Card);
    untitled_DW.HILInitialize_Card = NULL;
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
  untitled_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  untitled_update();
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
  untitled_initialize();
}

void MdlTerminate(void)
{
  untitled_terminate();
}

/* Registration function */
RT_MODEL_untitled_T *untitled(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled_M, 0,
                sizeof(RT_MODEL_untitled_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&untitled_M->solverInfo,
                          &untitled_M->Timing.simTimeStep);
    rtsiSetTPtr(&untitled_M->solverInfo, &rtmGetTPtr(untitled_M));
    rtsiSetStepSizePtr(&untitled_M->solverInfo, &untitled_M->Timing.stepSize0);
    rtsiSetdXPtr(&untitled_M->solverInfo, &untitled_M->derivs);
    rtsiSetContStatesPtr(&untitled_M->solverInfo, (real_T **)
                         &untitled_M->contStates);
    rtsiSetNumContStatesPtr(&untitled_M->solverInfo,
      &untitled_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&untitled_M->solverInfo,
      &untitled_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&untitled_M->solverInfo,
      &untitled_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&untitled_M->solverInfo,
      &untitled_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&untitled_M->solverInfo, (&rtmGetErrorStatus
      (untitled_M)));
    rtsiSetRTModelPtr(&untitled_M->solverInfo, untitled_M);
  }

  rtsiSetSimTimeStep(&untitled_M->solverInfo, MAJOR_TIME_STEP);
  untitled_M->intgData.f[0] = untitled_M->odeF[0];
  untitled_M->contStates = ((real_T *) &untitled_X);
  rtsiSetSolverData(&untitled_M->solverInfo, (void *)&untitled_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&untitled_M->solverInfo, false);
  rtsiSetSolverName(&untitled_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = untitled_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "untitled_M points to
       static memory which is guaranteed to be non-NULL" */
    untitled_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    untitled_M->Timing.sampleTimes = (&untitled_M->Timing.sampleTimesArray[0]);
    untitled_M->Timing.offsetTimes = (&untitled_M->Timing.offsetTimesArray[0]);

    /* task periods */
    untitled_M->Timing.sampleTimes[0] = (0.0);
    untitled_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    untitled_M->Timing.offsetTimes[0] = (0.0);
    untitled_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(untitled_M, &untitled_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = untitled_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    untitled_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(untitled_M, -1);
  untitled_M->Timing.stepSize0 = 0.002;
  untitled_M->Timing.stepSize1 = 0.002;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (2488324635U);
  untitled_M->Sizes.checksums[1] = (932738418U);
  untitled_M->Sizes.checksums[2] = (3194061504U);
  untitled_M->Sizes.checksums[3] = (2990851891U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_M->extModeInfo,
      &untitled_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_M->extModeInfo, untitled_M->Sizes.checksums);
    rteiSetTPtr(untitled_M->extModeInfo, rtmGetTPtr(untitled_M));
  }

  untitled_M->solverInfoPtr = (&untitled_M->solverInfo);
  untitled_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&untitled_M->solverInfo, 0.002);
  rtsiSetSolverMode(&untitled_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  untitled_M->blockIO = ((void *) &untitled_B);
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* parameters */
  untitled_M->defaultParam = ((real_T *)&untitled_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &untitled_X;
    untitled_M->contStates = (x);
    (void) memset((void *)&untitled_X, 0,
                  sizeof(X_untitled_T));
  }

  /* states (dwork) */
  untitled_M->dwork = ((void *) &untitled_DW);
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    untitled_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 24;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  untitled_M->Sizes.numContStates = (2);/* Number of continuous states */
  untitled_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  untitled_M->Sizes.numY = (0);        /* Number of model outputs */
  untitled_M->Sizes.numU = (0);        /* Number of model inputs */
  untitled_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled_M->Sizes.numSampTimes = (2);/* Number of sample times */
  untitled_M->Sizes.numBlocks = (15);  /* Number of blocks */
  untitled_M->Sizes.numBlockIO = (7);  /* Number of block outputs */
  untitled_M->Sizes.numBlockPrms = (110);/* Sum of parameter "widths" */
  return untitled_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
