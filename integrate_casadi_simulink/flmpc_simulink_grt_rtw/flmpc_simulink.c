/*
 * flmpc_simulink.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "flmpc_simulink".
 *
 * Model version              : 1.84
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Fri Jun 13 15:04:52 2025
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flmpc_simulink.h"
#include "rtwtypes.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#include "flmpc_simulink_private.h"
#include "rt_defines.h"
#include <float.h>

/* Block signals (default storage) */
B_flmpc_simulink_T flmpc_simulink_B;

/* Block states (default storage) */
DW_flmpc_simulink_T flmpc_simulink_DW;

/* Real-time model */
static RT_MODEL_flmpc_simulink_T flmpc_simulink_M_;
RT_MODEL_flmpc_simulink_T *const flmpc_simulink_M = &flmpc_simulink_M_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (flmpc_simulink_M->Timing.TaskCounters.TID[1])++;
  if ((flmpc_simulink_M->Timing.TaskCounters.TID[1]) > 5) {
                                 /* Sample time: [0.60000000000000009s, 0.0s] */
    flmpc_simulink_M->Timing.TaskCounters.TID[1] = 0;
  }

  flmpc_simulink_M->Timing.sampleHits[1] =
    (flmpc_simulink_M->Timing.TaskCounters.TID[1] == 0) ? 1 : 0;
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

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    real_T q;
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void flmpc_simulink_step(void)
{
  real_T rtb_Buffer[54];
  real_T wref[12];
  real_T Vr[6];
  real_T b[6];
  real_T b_tmp[6];
  real_T phir[6];
  real_T thetar[6];
  real_T y[6];
  real_T rtb_q[4];
  real_T eta[2];
  real_T RateTransition;
  real_T RateTransition_0;
  real_T a_idx_1;
  real_T c1;
  real_T dp_corr;
  real_T rtb_q_next_idx_0;
  real_T rtb_q_next_idx_1;
  real_T rtb_q_next_idx_2;
  real_T rtb_q_next_idx_3;
  real_T s1;
  real_T x_tmp_tmp;
  real_T x_tmp_tmp_0;
  int32_T exitg1;
  int32_T i;
  int32_T memIdx;
  int32_T nSamps;
  int32_T uIdx;

  /* Memory: '<Root>/Memory2' */
  rtb_q[0] = flmpc_simulink_DW.Memory2_PreviousInput[0];
  rtb_q[1] = flmpc_simulink_DW.Memory2_PreviousInput[1];
  rtb_q[2] = flmpc_simulink_DW.Memory2_PreviousInput[2];
  rtb_q[3] = flmpc_simulink_DW.Memory2_PreviousInput[3];

  /* Memory: '<Root>/Memory1' */
  flmpc_simulink_B.z[0] = flmpc_simulink_DW.Memory1_PreviousInput[0];
  flmpc_simulink_B.z[1] = flmpc_simulink_DW.Memory1_PreviousInput[1];

  /* Memory: '<Root>/Memory3' */
  memcpy(&flmpc_simulink_B.z_ref[0], &flmpc_simulink_DW.Memory3_PreviousInput[0],
         12U * sizeof(real_T));

  /* Memory: '<Root>/Memory4' */
  memcpy(&flmpc_simulink_B.w_ref[0], &flmpc_simulink_DW.Memory4_PreviousInput[0],
         10U * sizeof(real_T));

  /* S-Function (casadi_fun): '<Root>/FLMPC S-Function' */

  /* Level2 S-Function Block: '<Root>/FLMPC S-Function' (casadi_fun) */
  {
    SimStruct *rts = flmpc_simulink_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* MATLAB Function: '<Root>/FL U Mapping' incorporates:
   *  MATLAB Function: '<S1>/Dynamics'
   *  Memory: '<Root>/Memory2'
   *  S-Function (casadi_fun): '<Root>/FLMPC S-Function'
   */
  eta[0] = rtb_q[2];
  eta[1] = rtb_q[3];
  rtb_q_next_idx_0 = eta[0] + eta[1];
  s1 = sin(rtb_q_next_idx_0);
  c1 = cos(rtb_q_next_idx_0);
  dp_corr = cos(eta[0]);
  x_tmp_tmp_0 = tan(eta[1]);
  x_tmp_tmp = sin(eta[0]);
  rtb_q_next_idx_0 = dp_corr - (0.35 * s1 / 0.256 + x_tmp_tmp) * x_tmp_tmp_0;
  rtb_q_next_idx_2 = -0.35 * s1;
  rtb_q_next_idx_1 = (0.35 * c1 / 0.256 + dp_corr) * x_tmp_tmp_0 + x_tmp_tmp;
  rtb_q_next_idx_3 = 0.35 * c1;
  if (fabs(rtb_q_next_idx_1) > fabs(rtb_q_next_idx_0)) {
    s1 = rtb_q_next_idx_0 / rtb_q_next_idx_1;
    c1 = 1.0 / (s1 * rtb_q_next_idx_3 - rtb_q_next_idx_2);
    rtb_q_next_idx_3 = rtb_q_next_idx_3 / rtb_q_next_idx_1 * c1;
    a_idx_1 = -c1;
    rtb_q_next_idx_0 = -rtb_q_next_idx_2 / rtb_q_next_idx_1 * c1;
    c1 *= s1;
  } else {
    s1 = rtb_q_next_idx_1 / rtb_q_next_idx_0;
    c1 = 1.0 / (rtb_q_next_idx_3 - s1 * rtb_q_next_idx_2);
    rtb_q_next_idx_3 = rtb_q_next_idx_3 / rtb_q_next_idx_0 * c1;
    a_idx_1 = -s1 * c1;
    rtb_q_next_idx_0 = -rtb_q_next_idx_2 / rtb_q_next_idx_0 * c1;
  }

  eta[0] = rtb_q_next_idx_3 * flmpc_simulink_B.w[0] + rtb_q_next_idx_0 *
    flmpc_simulink_B.w[1];
  eta[1] = a_idx_1 * flmpc_simulink_B.w[0] + c1 * flmpc_simulink_B.w[1];

  /* End of MATLAB Function: '<Root>/FL U Mapping' */
  /* FromWorkspace: '<Root>/From Workspace' */
  {
    real_T *pDataValues = (real_T *)
      flmpc_simulink_DW.FromWorkspace_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      flmpc_simulink_DW.FromWorkspace_PWORK.TimePtr;
    int_T currTimeIndex = flmpc_simulink_DW.FromWorkspace_IWORK.PrevIndex;
    real_T t = flmpc_simulink_M->Timing.t[0];

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

    flmpc_simulink_DW.FromWorkspace_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 9; ++elIdx) {
              (&flmpc_simulink_B.FromWorkspace[0])[elIdx] =
                pDataValues[currTimeIndex];
              pDataValues += 500;
            }
          }
        } else {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 9; ++elIdx) {
              (&flmpc_simulink_B.FromWorkspace[0])[elIdx] =
                pDataValues[currTimeIndex + 1];
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
            (&flmpc_simulink_B.FromWorkspace[0])[elIdx] = (real_T) rtInterpolate
              (d1, d2, f1, f2);
            pDataValues += 500;
          }
        }
      }
    }
  }

  /* Buffer: '<Root>/Buffer' */
  uIdx = 0;
  nSamps = 9;
  memIdx = flmpc_simulink_DW.Buffer_inBufPtrIdx;
  if (flmpc_simulink_DW.Buffer_inBufPtrIdx > 99) {
    for (i = 0; i < 108 - flmpc_simulink_DW.Buffer_inBufPtrIdx; i++) {
      flmpc_simulink_DW.Buffer_CircBuf[flmpc_simulink_DW.Buffer_inBufPtrIdx + i]
        = flmpc_simulink_B.FromWorkspace[i];
    }

    uIdx = 108 - flmpc_simulink_DW.Buffer_inBufPtrIdx;
    memIdx = 0;
    nSamps = flmpc_simulink_DW.Buffer_inBufPtrIdx - 99;
  }

  for (i = 0; i < nSamps; i++) {
    flmpc_simulink_DW.Buffer_CircBuf[memIdx + i] =
      flmpc_simulink_B.FromWorkspace[uIdx + i];
  }

  flmpc_simulink_DW.Buffer_inBufPtrIdx += 9;
  if (flmpc_simulink_DW.Buffer_inBufPtrIdx >= 108) {
    flmpc_simulink_DW.Buffer_inBufPtrIdx -= 108;
  }

  flmpc_simulink_DW.Buffer_bufferLength += 9;
  if (flmpc_simulink_DW.Buffer_bufferLength > 108) {
    flmpc_simulink_DW.Buffer_outBufPtrIdx =
      (flmpc_simulink_DW.Buffer_outBufPtrIdx +
       flmpc_simulink_DW.Buffer_bufferLength) - 108;
    if (flmpc_simulink_DW.Buffer_outBufPtrIdx > 108) {
      flmpc_simulink_DW.Buffer_outBufPtrIdx -= 108;
    }

    flmpc_simulink_DW.Buffer_bufferLength = 108;
  }

  if (flmpc_simulink_M->Timing.TaskCounters.TID[1] == 0) {
    flmpc_simulink_DW.Buffer_bufferLength -= 54;
    if (flmpc_simulink_DW.Buffer_bufferLength < 0) {
      flmpc_simulink_DW.Buffer_outBufPtrIdx +=
        flmpc_simulink_DW.Buffer_bufferLength;
      if (flmpc_simulink_DW.Buffer_outBufPtrIdx < 0) {
        flmpc_simulink_DW.Buffer_outBufPtrIdx += 108;
      }

      flmpc_simulink_DW.Buffer_bufferLength = 0;
    }

    uIdx = 0;
    memIdx = flmpc_simulink_DW.Buffer_outBufPtrIdx;
    nSamps = 54;
    if (flmpc_simulink_DW.Buffer_outBufPtrIdx > 54) {
      for (i = 0; i < 108 - flmpc_simulink_DW.Buffer_outBufPtrIdx; i++) {
        rtb_Buffer[i] =
          flmpc_simulink_DW.Buffer_CircBuf[flmpc_simulink_DW.Buffer_outBufPtrIdx
          + i];
      }

      uIdx = 108 - flmpc_simulink_DW.Buffer_outBufPtrIdx;
      nSamps = flmpc_simulink_DW.Buffer_outBufPtrIdx - 54;
      memIdx = 0;
    }

    for (i = 0; i < nSamps; i++) {
      rtb_Buffer[uIdx + i] = flmpc_simulink_DW.Buffer_CircBuf[memIdx + i];
    }

    memIdx += nSamps;
    if (memIdx == 108) {
      memIdx = 0;
    }

    flmpc_simulink_DW.Buffer_outBufPtrIdx = memIdx;

    /* RateTransition: '<Root>/Rate Transition' incorporates:
     *  Buffer: '<Root>/Buffer'
     */
    memcpy(&flmpc_simulink_B.RateTransition[0],
           &flmpc_simulink_DW.RateTransition_Buffer0[0], 54U * sizeof(real_T));
  }

  /* End of Buffer: '<Root>/Buffer' */

  /* MATLAB Function: '<S1>/Dynamics' incorporates:
   *  Memory: '<Root>/Memory2'
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_q_next_idx_0 = eta[0] * dp_corr * 0.1 + rtb_q[0];
  rtb_q_next_idx_1 = eta[0] * x_tmp_tmp * 0.1 + rtb_q[1];
  rtb_q_next_idx_2 = eta[0] / 0.256 * x_tmp_tmp_0 * 0.1 + rtb_q[2];
  rtb_q_next_idx_3 = 0.1 * eta[1] + rtb_q[3];
  for (i = 0; i < 6; i++) {
    c1 = flmpc_simulink_B.RateTransition[9 * i + 7];
    dp_corr = flmpc_simulink_B.RateTransition[9 * i + 8];
    s1 = sqrt(c1 * c1 + dp_corr * dp_corr);
    Vr[i] = s1;
    x_tmp_tmp_0 = flmpc_simulink_B.RateTransition[9 * i + 6] * c1 -
      flmpc_simulink_B.RateTransition[9 * i + 5] * dp_corr;
    b_tmp[i] = x_tmp_tmp_0;
    b[i] = x_tmp_tmp_0 * x_tmp_tmp_0;
    y[i] = rt_powd_snf(s1, 6.0);
    thetar[i] = rt_atan2d_snf(dp_corr, c1);
  }

  s1 = 0.0;
  i = 0;
  while ((i + 1 < 6) && (rtIsInf(thetar[i]) || rtIsNaN(thetar[i]))) {
    i++;
  }

  if (i + 1 < 6) {
    c1 = thetar[i];
    do {
      exitg1 = 0;
      i++;
      while ((i + 1 <= 6) && (rtIsInf(thetar[i]) || rtIsNaN(thetar[i]))) {
        i++;
      }

      if (i + 1 > 6) {
        exitg1 = 1;
      } else {
        c1 = thetar[i] - c1;
        dp_corr = c1 / 6.2831853071795862;
        if (fabs(rt_remd_snf(dp_corr, 1.0)) <= 0.5) {
          dp_corr = trunc(dp_corr);
        } else {
          dp_corr = rt_roundd_snf(dp_corr);
        }

        if (fabs(c1) >= 3.1415926535897931) {
          s1 += dp_corr;
        }

        c1 = thetar[i];
        thetar[i] -= 6.2831853071795862 * s1;
      }
    } while (exitg1 == 0);
  }

  for (i = 0; i < 6; i++) {
    phir[i] = atan(0.256 * b_tmp[i] / rt_powd_snf(Vr[i], 3.0));
  }

  /* Update for Memory: '<Root>/Memory3' incorporates:
   *  MATLAB Function: '<S1>/Dynamics'
   */
  memset(&flmpc_simulink_DW.Memory3_PreviousInput[0], 0, 12U * sizeof(real_T));

  /* MATLAB Function: '<S1>/Dynamics' incorporates:
   *  Memory: '<Root>/Memory3'
   *  RateTransition: '<Root>/Rate Transition'
   */
  for (i = 0; i < 6; i++) {
    s1 = thetar[i];
    x_tmp_tmp = phir[i];
    c1 = s1 + x_tmp_tmp;

    /* Update for Memory: '<Root>/Memory3' */
    uIdx = i << 1;
    dp_corr = cos(c1);
    x_tmp_tmp_0 = cos(s1);
    flmpc_simulink_DW.Memory3_PreviousInput[uIdx] =
      (flmpc_simulink_B.RateTransition[9 * i + 1] + 0.256 * x_tmp_tmp_0) +
      dp_corr * 0.35;
    c1 = sin(c1);
    a_idx_1 = sin(s1);
    flmpc_simulink_DW.Memory3_PreviousInput[uIdx + 1] =
      (flmpc_simulink_B.RateTransition[9 * i + 2] + 0.256 * a_idx_1) + c1 * 0.35;
    s1 = Vr[i];
    RateTransition = flmpc_simulink_B.RateTransition[9 * i + 7];
    RateTransition_0 = flmpc_simulink_B.RateTransition[9 * i + 8];
    RateTransition = ((flmpc_simulink_B.RateTransition[9 * i + 4] *
                       RateTransition - flmpc_simulink_B.RateTransition[9 * i +
                       3] * RateTransition_0) * s1 * s1 -
                      (flmpc_simulink_B.RateTransition[9 * i + 5] *
                       RateTransition + flmpc_simulink_B.RateTransition[9 * i +
                       6] * RateTransition_0) * (3.0 * b_tmp[i])) * (0.256 * s1)
      / (0.065536 * b[i] + y[i]);
    x_tmp_tmp = tan(x_tmp_tmp);
    wref[uIdx] = (x_tmp_tmp_0 - (0.35 * c1 / 0.256 + a_idx_1) * x_tmp_tmp) * s1
      + -0.35 * c1 * RateTransition;
    wref[uIdx + 1] = ((0.35 * dp_corr / 0.256 + x_tmp_tmp_0) * x_tmp_tmp +
                      a_idx_1) * s1 + 0.35 * dp_corr * RateTransition;
  }

  flmpc_simulink_DW.idx++;

  /* Update for Memory: '<Root>/Memory2' */
  flmpc_simulink_DW.Memory2_PreviousInput[0] = rtb_q_next_idx_0;
  flmpc_simulink_DW.Memory2_PreviousInput[1] = rtb_q_next_idx_1;
  flmpc_simulink_DW.Memory2_PreviousInput[2] = rtb_q_next_idx_2;
  flmpc_simulink_DW.Memory2_PreviousInput[3] = rtb_q_next_idx_3;

  /* MATLAB Function: '<S1>/Dynamics' */
  rtb_q_next_idx_3 += rtb_q_next_idx_2;

  /* Update for Memory: '<Root>/Memory1' incorporates:
   *  MATLAB Function: '<S1>/Dynamics'
   */
  flmpc_simulink_DW.Memory1_PreviousInput[0] = (0.256 * cos(rtb_q_next_idx_2) +
    rtb_q_next_idx_0) + cos(rtb_q_next_idx_3) * 0.35;
  flmpc_simulink_DW.Memory1_PreviousInput[1] = (0.256 * sin(rtb_q_next_idx_2) +
    rtb_q_next_idx_1) + sin(rtb_q_next_idx_3) * 0.35;

  /* Update for Memory: '<Root>/Memory4' incorporates:
   *  MATLAB Function: '<S1>/Dynamics'
   */
  memcpy(&flmpc_simulink_DW.Memory4_PreviousInput[0], &wref[0], 10U * sizeof
         (real_T));

  /* Update for RateTransition: '<Root>/Rate Transition' incorporates:
   *  Buffer: '<Root>/Buffer'
   */
  if (flmpc_simulink_M->Timing.TaskCounters.TID[1] == 0) {
    memcpy(&flmpc_simulink_DW.RateTransition_Buffer0[0], &rtb_Buffer[0], 54U *
           sizeof(real_T));
  }

  /* End of Update for RateTransition: '<Root>/Rate Transition' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(flmpc_simulink_M->rtwLogInfo, (flmpc_simulink_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(flmpc_simulink_M)!=-1) &&
        !((rtmGetTFinal(flmpc_simulink_M)-flmpc_simulink_M->Timing.t[0]) >
          flmpc_simulink_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(flmpc_simulink_M, "Simulation finished");
    }

    if (rtmGetStopRequested(flmpc_simulink_M)) {
      rtmSetErrorStatus(flmpc_simulink_M, "Simulation finished");
    }
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
  if (!(++flmpc_simulink_M->Timing.clockTick0)) {
    ++flmpc_simulink_M->Timing.clockTickH0;
  }

  flmpc_simulink_M->Timing.t[0] = flmpc_simulink_M->Timing.clockTick0 *
    flmpc_simulink_M->Timing.stepSize0 + flmpc_simulink_M->Timing.clockTickH0 *
    flmpc_simulink_M->Timing.stepSize0 * 4294967296.0;
  rate_scheduler();
}

/* Model initialize function */
void flmpc_simulink_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)flmpc_simulink_M, 0,
                sizeof(RT_MODEL_flmpc_simulink_T));
  rtsiSetSolverName(&flmpc_simulink_M->solverInfo,"FixedStepDiscrete");
  flmpc_simulink_M->solverInfoPtr = (&flmpc_simulink_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = flmpc_simulink_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "flmpc_simulink_M points to
       static memory which is guaranteed to be non-NULL" */
    flmpc_simulink_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    flmpc_simulink_M->Timing.sampleTimes =
      (&flmpc_simulink_M->Timing.sampleTimesArray[0]);
    flmpc_simulink_M->Timing.offsetTimes =
      (&flmpc_simulink_M->Timing.offsetTimesArray[0]);

    /* task periods */
    flmpc_simulink_M->Timing.sampleTimes[0] = (0.1);
    flmpc_simulink_M->Timing.sampleTimes[1] = (0.60000000000000009);

    /* task offsets */
    flmpc_simulink_M->Timing.offsetTimes[0] = (0.0);
    flmpc_simulink_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(flmpc_simulink_M, &flmpc_simulink_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = flmpc_simulink_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    flmpc_simulink_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(flmpc_simulink_M, -1);
  flmpc_simulink_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    flmpc_simulink_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(flmpc_simulink_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(flmpc_simulink_M->rtwLogInfo, (NULL));
    rtliSetLogT(flmpc_simulink_M->rtwLogInfo, "tout");
    rtliSetLogX(flmpc_simulink_M->rtwLogInfo, "");
    rtliSetLogXFinal(flmpc_simulink_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(flmpc_simulink_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(flmpc_simulink_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(flmpc_simulink_M->rtwLogInfo, 0);
    rtliSetLogDecimation(flmpc_simulink_M->rtwLogInfo, 1);
    rtliSetLogY(flmpc_simulink_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(flmpc_simulink_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(flmpc_simulink_M->rtwLogInfo, (NULL));
  }

  flmpc_simulink_M->solverInfoPtr = (&flmpc_simulink_M->solverInfo);
  flmpc_simulink_M->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&flmpc_simulink_M->solverInfo, 0.1);
  rtsiSetSolverMode(&flmpc_simulink_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &flmpc_simulink_B), 0,
                sizeof(B_flmpc_simulink_T));

  /* states (dwork) */
  (void) memset((void *)&flmpc_simulink_DW, 0,
                sizeof(DW_flmpc_simulink_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &flmpc_simulink_M->NonInlinedSFcns.sfcnInfo;
    flmpc_simulink_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(flmpc_simulink_M)));
    flmpc_simulink_M->Sizes.numSampTimes = (2);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &flmpc_simulink_M->Sizes.numSampTimes);
    flmpc_simulink_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr
      (flmpc_simulink_M)[0]);
    flmpc_simulink_M->NonInlinedSFcns.taskTimePtrs[1] = (&rtmGetTPtr
      (flmpc_simulink_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,flmpc_simulink_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(flmpc_simulink_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(flmpc_simulink_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (flmpc_simulink_M));
    rtssSetStepSizePtr(sfcnInfo, &flmpc_simulink_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(flmpc_simulink_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &flmpc_simulink_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &flmpc_simulink_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &flmpc_simulink_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &flmpc_simulink_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &flmpc_simulink_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &flmpc_simulink_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &flmpc_simulink_M->solverInfoPtr);
  }

  flmpc_simulink_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&flmpc_simulink_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  1*sizeof(SimStruct));
    flmpc_simulink_M->childSfunctions =
      (&flmpc_simulink_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    flmpc_simulink_M->childSfunctions[0] =
      (&flmpc_simulink_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: flmpc_simulink/<Root>/FLMPC S-Function (casadi_fun) */
    {
      SimStruct *rts = flmpc_simulink_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = flmpc_simulink_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = flmpc_simulink_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = flmpc_simulink_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &flmpc_simulink_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &flmpc_simulink_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, flmpc_simulink_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &flmpc_simulink_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &flmpc_simulink_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &flmpc_simulink_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &flmpc_simulink_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &flmpc_simulink_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          int_T *dimensions = (int_T *)
            &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.iDims0;
          sfcnUPtrs[0] = flmpc_simulink_B.z;
          sfcnUPtrs[1] = &flmpc_simulink_B.z[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 2;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtrAsInt(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidthAsInt(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          int_T *dimensions = (int_T *)
            &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.iDims1;

          {
            int_T i1;
            const real_T *u1 = flmpc_simulink_B.z_ref;
            for (i1=0; i1 < 12; i1++) {
              sfcnUPtrs[i1] = &u1[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 2;
          dimensions[1] = 6;
          _ssSetInputPortDimensionsPtrAsInt(rts, 1, dimensions);
          _ssSetInputPortNumDimensions(rts, 1, 2);
          ssSetInputPortWidthAsInt(rts, 1, 12);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          int_T *dimensions = (int_T *)
            &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.iDims2;

          {
            int_T i1;
            const real_T *u2 = flmpc_simulink_B.w_ref;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u2[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 2;
          dimensions[1] = 5;
          _ssSetInputPortDimensionsPtrAsInt(rts, 2, dimensions);
          _ssSetInputPortNumDimensions(rts, 2, 2);
          ssSetInputPortWidthAsInt(rts, 2, 10);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.oDims0;
          dimensions[0] = 2;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtrAsInt(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidthAsInt(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *) flmpc_simulink_B.w));
        }
      }

      /* path info */
      ssSetModelName(rts, "FLMPC S-Function");
      ssSetPath(rts, "flmpc_simulink/FLMPC S-Function");
      ssSetRTModel(rts,flmpc_simulink_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)flmpc_simulink_P.FLMPCSFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)flmpc_simulink_P.FLMPCSFunction_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &flmpc_simulink_DW.FLMPCSFunction_RWORK[0]);
      ssSetIWork(rts, (int_T *) &flmpc_simulink_DW.FLMPCSFunction_IWORK[0]);
      ssSetPWork(rts, (void **) &flmpc_simulink_DW.FLMPCSFunction_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &flmpc_simulink_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 3);

        /* RWORK */
        ssSetDWorkWidthAsInt(rts, 0, 802);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &flmpc_simulink_DW.FLMPCSFunction_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidthAsInt(rts, 1, 46);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &flmpc_simulink_DW.FLMPCSFunction_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 2, 47);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &flmpc_simulink_DW.FLMPCSFunction_PWORK[0]);
      }

      /* registration */
      casadi_fun(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(flmpc_simulink_M->rtwLogInfo, 0.0,
    rtmGetTFinal(flmpc_simulink_M), flmpc_simulink_M->Timing.stepSize0,
    (&rtmGetErrorStatus(flmpc_simulink_M)));

  {
    int32_T i;

    /* Start for FromWorkspace: '<Root>/From Workspace' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0,
        8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0,
        20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0,
        32.0, 33.0, 34.0, 35.0, 36.0, 37.0, 38.0, 39.0, 40.0, 41.0, 42.0, 43.0,
        44.0, 45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0, 55.0,
        56.0, 57.0, 58.0, 59.0, 60.0, 61.0, 62.0, 63.0, 64.0, 65.0, 66.0, 67.0,
        68.0, 69.0, 70.0, 71.0, 72.0, 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0,
        80.0, 81.0, 82.0, 83.0, 84.0, 85.0, 86.0, 87.0, 88.0, 89.0, 90.0, 91.0,
        92.0, 93.0, 94.0, 95.0, 96.0, 97.0, 98.0, 99.0, 100.0, 101.0, 102.0,
        103.0, 104.0, 105.0, 106.0, 107.0, 108.0, 109.0, 110.0, 111.0, 112.0,
        113.0, 114.0, 115.0, 116.0, 117.0, 118.0, 119.0, 120.0, 121.0, 122.0,
        123.0, 124.0, 125.0, 126.0, 127.0, 128.0, 129.0, 130.0, 131.0, 132.0,
        133.0, 134.0, 135.0, 136.0, 137.0, 138.0, 139.0, 140.0, 141.0, 142.0,
        143.0, 144.0, 145.0, 146.0, 147.0, 148.0, 149.0, 150.0, 151.0, 152.0,
        153.0, 154.0, 155.0, 156.0, 157.0, 158.0, 159.0, 160.0, 161.0, 162.0,
        163.0, 164.0, 165.0, 166.0, 167.0, 168.0, 169.0, 170.0, 171.0, 172.0,
        173.0, 174.0, 175.0, 176.0, 177.0, 178.0, 179.0, 180.0, 181.0, 182.0,
        183.0, 184.0, 185.0, 186.0, 187.0, 188.0, 189.0, 190.0, 191.0, 192.0,
        193.0, 194.0, 195.0, 196.0, 197.0, 198.0, 199.0, 200.0, 201.0, 202.0,
        203.0, 204.0, 205.0, 206.0, 207.0, 208.0, 209.0, 210.0, 211.0, 212.0,
        213.0, 214.0, 215.0, 216.0, 217.0, 218.0, 219.0, 220.0, 221.0, 222.0,
        223.0, 224.0, 225.0, 226.0, 227.0, 228.0, 229.0, 230.0, 231.0, 232.0,
        233.0, 234.0, 235.0, 236.0, 237.0, 238.0, 239.0, 240.0, 241.0, 242.0,
        243.0, 244.0, 245.0, 246.0, 247.0, 248.0, 249.0, 250.0, 251.0, 252.0,
        253.0, 254.0, 255.0, 256.0, 257.0, 258.0, 259.0, 260.0, 261.0, 262.0,
        263.0, 264.0, 265.0, 266.0, 267.0, 268.0, 269.0, 270.0, 271.0, 272.0,
        273.0, 274.0, 275.0, 276.0, 277.0, 278.0, 279.0, 280.0, 281.0, 282.0,
        283.0, 284.0, 285.0, 286.0, 287.0, 288.0, 289.0, 290.0, 291.0, 292.0,
        293.0, 294.0, 295.0, 296.0, 297.0, 298.0, 299.0, 300.0, 301.0, 302.0,
        303.0, 304.0, 305.0, 306.0, 307.0, 308.0, 309.0, 310.0, 311.0, 312.0,
        313.0, 314.0, 315.0, 316.0, 317.0, 318.0, 319.0, 320.0, 321.0, 322.0,
        323.0, 324.0, 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0,
        333.0, 334.0, 335.0, 336.0, 337.0, 338.0, 339.0, 340.0, 341.0, 342.0,
        343.0, 344.0, 345.0, 346.0, 347.0, 348.0, 349.0, 350.0, 351.0, 352.0,
        353.0, 354.0, 355.0, 356.0, 357.0, 358.0, 359.0, 360.0, 361.0, 362.0,
        363.0, 364.0, 365.0, 366.0, 367.0, 368.0, 369.0, 370.0, 371.0, 372.0,
        373.0, 374.0, 375.0, 376.0, 377.0, 378.0, 379.0, 380.0, 381.0, 382.0,
        383.0, 384.0, 385.0, 386.0, 387.0, 388.0, 389.0, 390.0, 391.0, 392.0,
        393.0, 394.0, 395.0, 396.0, 397.0, 398.0, 399.0, 400.0, 401.0, 402.0,
        403.0, 404.0, 405.0, 406.0, 407.0, 408.0, 409.0, 410.0, 411.0, 412.0,
        413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0, 421.0, 422.0,
        423.0, 424.0, 425.0, 426.0, 427.0, 428.0, 429.0, 430.0, 431.0, 432.0,
        433.0, 434.0, 435.0, 436.0, 437.0, 438.0, 439.0, 440.0, 441.0, 442.0,
        443.0, 444.0, 445.0, 446.0, 447.0, 448.0, 449.0, 450.0, 451.0, 452.0,
        453.0, 454.0, 455.0, 456.0, 457.0, 458.0, 459.0, 460.0, 461.0, 462.0,
        463.0, 464.0, 465.0, 466.0, 467.0, 468.0, 469.0, 470.0, 471.0, 472.0,
        473.0, 474.0, 475.0, 476.0, 477.0, 478.0, 479.0, 480.0, 481.0, 482.0,
        483.0, 484.0, 485.0, 486.0, 487.0, 488.0, 489.0, 490.0, 491.0, 492.0,
        493.0, 494.0, 495.0, 496.0, 497.0, 498.0, 499.0 } ;

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
        7.71543070741483, 7.8156311062124244, 7.91583150501002,
        8.0160319038076153, 8.11623230260521, 8.2164327014028071,
        8.3166331002004, 8.4168334989979972, 8.5170338977955922,
        8.6172342965931872, 8.7174346953907822, 8.8176350941883772,
        8.9178354929859722, 9.0180358917835672, 9.1182362905811623,
        9.2184366893787573, 9.3186370881763541, 9.4188374869739473,
        9.5190378857715441, 9.6192382845691391, 9.7194386833667341,
        9.81963908216433, 9.9198394809619241, 10.020039879759521,
        10.120240278557114, 10.220440677354709, 10.320641076152306,
        10.420841474949901, 10.521041873747494, 10.621242272545091,
        10.721442671342686, 10.821643070140281, 10.921843468937876,
        11.022043867735471, 11.122244266533068, 11.222444665330661,
        11.322645064128256, 11.422845462925853, 11.523045861723448,
        11.623246260521043, 11.723446659318638, 11.823647058116233,
        11.92384745691383, 12.024047855711423, 12.124248254509018,
        12.224448653306615, 12.324649052104208, 12.424849450901803,
        12.5250498496994, 12.625250248496995, 12.72545064729459,
        12.825651046092185, 12.92585144488978, 13.026051843687377,
        13.12625224248497, 13.226452641282567, 13.326653040080162,
        13.426853438877755, 13.527053837675352, 13.627254236472947,
        13.727454635270542, 13.827655034068137, 13.927855432865732,
        14.028055831663327, 14.128256230460924, 14.228456629258517,
        14.328657028056114, 14.428857426853709, 14.529057825651302,
        14.629258224448899, 14.729458623246494, 14.82965902204409,
        14.929859420841684, 15.030059819639279, 15.130260218436876,
        15.230460617234471, 15.330661016032064, 15.430861414829661,
        15.531061813627256, 15.631262212424849, 15.731462611222446,
        15.831663010020041, 15.931863408817637, 16.032063807615231,
        16.132264206412827, 16.232464605210421, 16.332665004008017,
        16.432865402805614, 16.533065801603207, 16.6332662004008,
        16.733466599198398, 16.833666997995994, 16.933867396793588,
        17.034067795591184, 17.134268194388778, 17.234468593186374,
        17.334668991983968, 17.434869390781564, 17.535069789579161,
        17.635270188376754, 17.735470587174348, 17.835670985971944,
        17.935871384769541, 18.036071783567134, 18.136272182364731,
        18.236472581162325, 18.336672979959921, 18.436873378757515,
        18.537073777555111, 18.637274176352708, 18.7374745751503,
        18.837674973947895, 18.937875372745491, 19.038075771543088,
        19.138276170340681, 19.238476569138278, 19.338676967935871,
        19.438877366733468, 19.539077765531065, 19.639278164328658,
        19.739478563126255, 19.839678961923848, 19.939879360721442,
        20.040079759519042, 20.140280158316635, 20.240480557114228,
        20.340680955911825, 20.440881354709418, 20.541081753507015,
        20.641282152304612, 20.741482551102205, 20.841682949899802,
        20.941883348697395, 21.042083747494988, 21.142284146292589,
        21.242484545090182, 21.342684943887775, 21.442885342685372,
        21.543085741482965, 21.643286140280562, 21.743486539078159,
        21.843686937875752, 21.943887336673349, 22.044087735470942,
        22.144288134268535, 22.244488533066136, 22.344688931863729,
        22.444889330661322, 22.545089729458919, 22.645290128256512,
        22.745490527054113, 22.845690925851706, 22.9458913246493,
        23.046091723446896, 23.146292122244489, 23.246492521042086,
        23.346692919839683, 23.446893318637276, 23.547093717434869,
        23.647294116232466, 23.747494515030059, 23.847694913827659,
        23.947895312625253, 24.048095711422846, 24.148296110220443,
        24.248496509018036, 24.348696907815633, 24.44889730661323,
        24.549097705410823, 24.649298104208416, 24.749498503006013,
        24.849698901803606, 24.949899300601206, 25.0500996993988,
        25.150300098196393, 25.25050049699399, 25.350700895791583,
        25.45090129458918, 25.551101693386777, 25.65130209218437,
        25.751502490981963, 25.85170288977956, 25.951903288577157,
        26.052103687374753, 26.152304086172347, 26.25250448496994,
        26.352704883767537, 26.452905282565133, 26.553105681362727,
        26.653306080160323, 26.753506478957917, 26.85370687775551,
        26.953907276553107, 27.054107675350703, 27.1543080741483,
        27.254508472945894, 27.354708871743487, 27.454909270541084,
        27.55510966933868, 27.655310068136274, 27.75551046693387,
        27.855710865731464, 27.955911264529057, 28.056111663326654,
        28.15631206212425, 28.256512460921847, 28.35671285971944,
        28.456913258517034, 28.55711365731463, 28.657314056112227,
        28.757514454909821, 28.857714853707417, 28.957915252505011,
        29.058115651302604, 29.158316050100204, 29.258516448897797,
        29.358716847695394, 29.458917246492987, 29.559117645290581,
        29.659318044088181, 29.759518442885774, 29.859718841683367,
        29.959919240480964, 30.060119639278557, 30.160320038076151,
        30.260520436873751, 30.360720835671344, 30.460921234468941,
        30.561121633266534, 30.661322032064128, 30.761522430861728,
        30.861722829659321, 30.961923228456914, 31.062123627254511,
        31.162324026052104, 31.262524424849698, 31.362724823647298,
        31.462925222444891, 31.563125621242488, 31.663326020040081,
        31.763526418837674, 31.863726817635275, 31.963927216432868,
        32.064127615230461, 32.164328014028058, 32.264528412825655,
        32.364728811623252, 32.464929210420841, 32.565129609218438,
        32.665330008016035, 32.765530406813625, 32.865730805611229,
        32.965931204408818, 33.066131603206415, 33.166332002004012,
        33.2665324008016, 33.3667327995992, 33.466933198396795,
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
        37.4749491503006, 37.5751495490982, 37.675349947895789,
        37.775550346693386, 37.875750745490983, 37.97595114428858,
        38.076151543086176, 38.176351941883773, 38.276552340681363,
        38.37675273947896, 38.476953138276556, 38.577153537074146,
        38.677353935871743, 38.77755433466934, 38.877754733466936,
        38.977955132264526, 39.07815553106213, 39.178355929859727,
        39.278556328657316, 39.378756727454913, 39.47895712625251,
        39.5791575250501, 39.6793579238477, 39.779558322645293,
        39.879758721442883, 39.97995912024048, 40.080159519038084,
        40.180359917835673, 40.28056031663327, 40.380760715430867,
        40.480961114228457, 40.581161513026053, 40.68136191182365,
        40.78156231062124, 40.881762709418837, 40.981963108216434,
        41.08216350701403, 41.182363905811627, 41.282564304609224,
        41.382764703406821, 41.48296510220441, 41.583165501002007,
        41.683365899799604, 41.783566298597194, 41.88376669739479,
        41.983967096192387, 42.084167494989977, 42.184367893787574,
        42.284568292585178, 42.384768691382767, 42.484969090180364,
        42.585169488977961, 42.685369887775551, 42.785570286573147,
        42.885770685370744, 42.985971084168334, 43.086171482965931,
        43.186371881763527, 43.286572280561124, 43.386772679358721,
        43.486973078156318, 43.587173476953915, 43.687373875751504,
        43.7875742745491, 43.8877746733467, 43.987975072144287,
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
        2.7317698353819746, 2.75220318963954, 2.77221410184941,
        2.7917930995653522, 2.8109310169610082, 2.8296189948298891,
        2.8478484805853834, 2.8656112282607515, 2.8828992985091304,
        2.8997050586035273, 2.9160211824368258, 2.9318406505217802,
        2.9471567499910227, 2.9619630745970573, 2.9762535247122597,
        2.9900223073288807, 3.0032639361460438, 3.0159732855082337,
        3.0281458902008787, 3.0397781190995867, 3.0508671822170843,
        3.0614111307032283, 3.0714088568449989, 3.0808600940665061,
        3.0897654169289819, 3.0981262411307831, 3.1059448235073974,
        3.1132242620314332, 3.1199684958126297, 3.126182305097847,
        3.1318713112710745, 3.1370419768534274, 3.141701605503143,
        3.1458583420155883, 3.1495211723232561, 3.1526999234957631,
        3.1554052637398526, 3.1576487023993929, 3.1594425899553817,
        3.1608001180259366, 3.1617353193663065, 3.1622630678688646,
        3.1623990785631086, 3.1621599076156617, 3.1615629523302764,
        3.1606264511478268, 3.1593694836463153, 3.1578119705408705,
        3.1559746736837448, 3.1538791960643189, 3.1515479818090966,
        3.1490043161817112, 3.1462723255829186, 3.1433769775506022,
        3.1403440807597689, 3.1372002850225544, 3.1339730812882212,
        3.1306908016431514, 3.1273826000875666, 3.1240777977330527,
        3.1208045239272324, 3.1175894146794811, 3.1144576114594007,
        3.1114327611968178, 3.1085370162817858, 3.1057910345645832,
        3.1032139793557141, 3.1008235194259068, 3.0986358290061178,
        3.0966655877875273, 3.094925980921543, 3.093428699019797,
        3.0921839381541458, 3.0912003998566742, 3.0904852911196885,
        3.0900443243957283, 3.0898817175975481, 3.0900001940981383,
        3.0904009827307077, 3.0910838177886952, 3.0920469390257614,
        3.0932870916557982, 3.0947995263529156, 3.0965779992514562,
        3.098614771945984, 3.1009006114912903, 3.1034247904023911,
        3.1061750866545292, 3.1091377836831713, 3.1122976703840122,
        3.1156380411129705, 3.11914069568619, 3.1227859393800426,
        3.1265525829311218, 3.1304179425362504, 3.1343578398524765,
        3.1383466019970716, 3.1423570615475347, 3.1463605565415893,
        3.1503269304822812, 3.1542246778868, 3.1580222074809856,
        3.1616888954367357, 3.1651951599991128, 3.1685124614863436,
        3.1716133022898183, 3.1744712268740907, 3.1770608217768812,
        3.1793577156090733, 3.1813385790547137, 3.1829811248710151,
        3.1842641078883531, 3.1851673250102683, 3.1856716152134652,
        3.1857588595478137, 3.1854119811363439, 3.184614945175257,
        3.1833527589339132, 3.1816114717548358, 3.1793781750537184,
        3.176641002319414, 3.1733891291139407, 3.1696127730724815,
        3.1653031939033851, 3.1604526933881592, 3.1550546153814829,
        3.1491033458111937, 3.1425943126782983, 3.1355239860569624,
        3.1278898780945186, 3.1196905430114654, 3.110925577101463,
        3.1015956187313369, 3.0917023483410744, 3.0812484884438329,
        3.0702378036259286, 3.0586751005468433, 3.0465662279392252,
        3.0339180766088836, 3.0207385794347932, 3.0070367113690937,
        2.9928224864003039, 2.97810672675102, 2.9629003643892182,
        2.9472142102206158, 2.9310589510516483, 2.9144451495894668,
        2.8973832444419361, 2.8798835501176407, 2.8619562570258767,
        2.8436114314766603, 2.8248590156807203, 2.8057088277495037,
        2.7861705616951733, 2.766253787430605, 2.7459679507693933,
        2.7253223734258478, 2.7043262530149947, 2.6829886630525772,
        2.6613185529550494, 2.6393247480395856, 2.6170159495240761,
        2.5944007345271256, 2.5714875560680563, 2.5482847430669038,
        2.5248005003444214, 2.5010429086220771, 2.4770199245220583,
        2.4527393805672637, 2.4282089851813105, 2.4034363226885325,
        2.3784288533139741, 2.3531939131834032, 2.3277387143233,
        2.3020703446608595, 2.2761957680239941, 2.2501218241413317,
        2.2238552286422171, 2.1974025730567095, 2.1707703248155839,
        2.1439648272503335, 2.1169922995931656, 2.089858836977001,
        2.0625704164416092, 2.0351329817026538, 2.0075525448212383,
        1.9798351979188609, 1.9519871131778381, 1.9240145428413029,
        1.8959238192131997, 1.8677213546582838, 1.8394136416021298,
        1.8110072525311234, 1.7825088399924631, 1.7539251365941659,
        1.725262955005058, 1.6965291879547837, 1.6677308082337985,
        1.6388748686933696, 1.6099685022455859, 1.581018921863343,
        1.5520334205803539, 1.5230193714911442, 1.4939842277510553,
        1.4649355225762379, 1.4358808692436646, 1.406827961091115,
        1.377784571517187, 1.3487585539812899, 1.3197578420036453,
        1.2907904491652955, 1.2618644691080916, 1.2329880755346974,
        1.2041695222085953, 1.1754171429540783, 1.1467393516562567,
        1.1181446422610493, 1.0896415887751931, 1.0612388452662413,
        1.0329451458625518, 1.00476930475331, 0.97672021618850258,
        0.94880685447893742, 0.92103827399623617, 0.8934236091136587,
        0.86597205935326671, 0.83869282245825283, 0.81159506214172372,
        0.7846879071398678, 0.757980451211938, 0.731481753140255,
        0.705200836730215, 0.67914669081028534, 0.65332826923199816,
        0.62775449086996238, 0.602434239621855, 0.57737636440842577,
        0.55258967917349, 0.52808296288393719, 0.50386495952973254,
        0.47994437812390134, 0.45632989270254681, 0.43303014232484249,
        0.41005373107302812, 0.38740922805241851, 0.3651051673913992,
        0.343150048241422, 0.32155233477701378, 0.30032045619577197,
        0.279462806718359, 0.25898774558851667, 0.23890359707305306,
        0.21921865046184377, 0.19994116006784013, 0.18107934522706312,
        0.16264139029860106, 0.14463544466461653, 0.12706962273034186,
        0.10995200392408087, 0.093290632697204584, 0.07709351852415719,
        0.061368635902456906, 0.046123924352685711, 0.031367288418500859,
        0.017106597666630221, 0.0033496866868690488, -0.0098956557966513176,
        -0.022621955252841795, -0.034822514605850931, -0.046491497586213709,
        -0.057623928865305846, -0.068215694055342876, -0.078263539709379978,
        -0.087765073321311629, -0.096718763325873924, -0.10512393909864075,
        -0.1129807909560257, -0.12029037015528403, -0.12705458889450891,
        -0.13327622031263403, -0.13895889848943224, -0.14410711844551768,
        -0.14872623614234215, -0.15282246848219835, -0.15640289330821916,
        -0.15947544940437633, -0.16204893649548169, -0.16413301524718704,
        -0.16573820726598382, -0.16687589509920273, -0.16755832223501504,
        -0.16779859310243142, -0.167610673071302, -0.16700938845231711,
        -0.1660104264970067, -0.16463033539774041, -0.16288652428772754,
        -0.16079726324101745, -0.1583816832724991, -0.155659776337901,
        -0.15265239533379169, -0.14938125409757938, -0.14586892740751212,
        -0.14213885098267759, -0.13821532148300328, -0.13412349650925676,
        -0.12988939460304441, -0.12553989517851988, -0.1211025748631917,
        -0.11660457592929514, -0.11207181965966238, -0.10752896365408313,
        -0.10299940182930339, -0.098505264419027391, -0.094067417973917558,
        -0.089705465361591935, -0.08543774576662716, -0.081281334690557358,
        -0.077252043951873087, -0.073364421686023237, -0.069631752345414147,
        -0.0660660566994086, -0.062678091834327737, -0.059477351153449765,
        -0.05647206437701037, -0.053669197542202569, -0.05107445300317686,
        -0.048692269431041227, -0.046525821813860613, -0.044577021456657942,
        -0.04284651598141339, -0.041333689327064216, -0.04003666174950548,
        -0.038952289821589589, -0.03807616643312605, -0.037402620790882239,
        -0.036924718418582643, -0.036634261156909195, -0.036521787163501296,
        -0.036576570912955735, -0.036786623196826684, -0.037138691123625778,
        -0.037618258118821982, -0.038209543924841792, -0.038895504601069018,
        -0.039657832523844957, -0.04047695638646806, -0.041332041199194612,
        -0.042200988289237969, -0.043060450392623774, -0.043886575380061105,
        -0.044656866464984596, -0.045350687588516125, -0.045949267348590277,
        -0.046435698999953812, -0.046794940454166052, -0.047013814279598706,
        -0.047081007701435973, -0.046987072601674409, -0.0467244255191231,
        -0.046287347649403489, -0.045671984844949554, -0.044876347615007528,
        -0.043900311125636242, -0.042745615199707009, -0.041415864316903313,
        -0.03991652761372122, -0.03825493888346946, -0.036440296576269036,
        -0.034483663799053058, -0.032397968315567516, -0.030198002546370846,
        -0.027900423568833432, -0.025523753117138562, -0.023088377582281997,
        -0.020616548012071391, -0.018132380111127396, -0.015661854240882876,
        -0.01323281541958317, -0.010874973322286026, -0.0086199022808617909,
        -0.0065010412839927945, -0.0045536939771742583, -0.0028150286627138,
        -0.00132407829973111, -0.00012174050415870043, 0.00074922245125856721,
        0.0012441836369635733, 0.0013166514665865459, 0.00091826969694535168,
        -1.1825719544609839E-6, 3.0, 2.9990806866852404, 2.9986824470102635,
        2.9987550587299916, 2.9992501643235219, 3.0001212709941303,
        3.001323750669266, 3.0028148400005534, 3.0045536403637958,
        3.0065011178589724, 3.0086201033102387, 3.0108752922659239,
        3.0132332449985348, 3.0156623865047534, 3.0181330065054417,
        3.020617259445634, 3.0230891644945408, 3.0255246055455496,
        3.0279013312162255, 3.030198954848307, 3.03239895450771,
        3.0344846729845285, 3.03644131779303, 3.0382559611716569,
        3.0399175400830307, 3.041416856213949, 3.0427465759753849,
        3.043901230502486, 3.0448772156545787, 3.0456727920151634,
        3.0462880848919176, 3.046725084316694, 3.0469876450455242,
        3.0470814865586116, 3.0470141930603396, 3.0467952134792662,
        3.0464358614681251, 3.0459493154038273, 3.0453506183874586,
        3.0446566782442805, 3.0438862675237353, 3.0430600234994336,
        3.0422004442402297, 3.0413313832134237, 3.0404761889889391,
        3.039656961461549, 3.0388945367572657, 3.0382084872333253,
        3.0376171214781973, 3.0371374843115846, 3.0367853567844203,
        3.0365752561788657, 3.0365204360083182, 3.0366328860174021,
        3.0369233321819746, 3.0374012367091248, 3.0380747980371714,
        3.0389509508356638, 3.0400353660053865, 3.04133245067835,
        3.0428453482177997, 3.0445759382182094, 3.0465248365052866,
        3.0486913951359687, 3.0510737023984236, 3.0536685828120516,
        3.0564715971274841, 3.0594770423265811, 3.0626779516224385,
        3.0660660944593778, 3.0696319765129583, 3.0733648396899627,
        3.0772526621284122, 3.0812821581975527, 3.085438778497867,
        3.0897067098610651, 3.0940688753500893, 3.0985069342591127,
        3.1030012821135409, 3.1075310506700107, 3.1120741079163885,
        3.1166070580717706, 3.1211052415864886, 3.1255427351421021,
        3.1298923943472, 3.1341266404374259, 3.1382185919635663,
        3.1421422284723848, 3.1458723905749411, 3.1493847799465846,
        3.1526559593269621, 3.1556633525200124, 3.1583852443939713,
        3.1608007808813627, 3.1628899689790111, 3.16463367674803,
        3.1660136333138293, 3.1670124288661121, 3.1676135146588758,
        3.1678012030104097, 3.1675606673033005, 3.1668779419844255,
        3.165739922564959, 3.1641343656203667, 3.1620498887904094,
        3.1594759707791411, 3.1564029513549108, 3.1528220313503605,
        3.1487252726624266, 3.144105598252338, 3.1389567921456214,
        3.1332734994320925, 3.1270512262658636, 3.1202863398653418,
        3.1129760685132255, 3.1051185015565084, 3.0967125894064789,
        3.0877581435387169, 3.0782558364931, 3.068207201873796,
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

      flmpc_simulink_DW.FromWorkspace_PWORK.TimePtr = (void *) pTimeValues0;
      flmpc_simulink_DW.FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
      flmpc_simulink_DW.FromWorkspace_IWORK.PrevIndex = 0;
    }

    for (i = 0; i < 54; i++) {
      /* Start for RateTransition: '<Root>/Rate Transition' */
      flmpc_simulink_B.RateTransition[i] =
        flmpc_simulink_P.RateTransition_InitialCondition;
    }
  }

  {
    int32_T i;

    /* InitializeConditions for Memory: '<Root>/Memory2' */
    flmpc_simulink_DW.Memory2_PreviousInput[0] =
      flmpc_simulink_P.Memory2_InitialCondition;
    flmpc_simulink_DW.Memory2_PreviousInput[1] =
      flmpc_simulink_P.Memory2_InitialCondition;
    flmpc_simulink_DW.Memory2_PreviousInput[2] =
      flmpc_simulink_P.Memory2_InitialCondition;
    flmpc_simulink_DW.Memory2_PreviousInput[3] =
      flmpc_simulink_P.Memory2_InitialCondition;

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    flmpc_simulink_DW.Memory1_PreviousInput[0] =
      flmpc_simulink_P.Memory1_InitialCondition;
    flmpc_simulink_DW.Memory1_PreviousInput[1] =
      flmpc_simulink_P.Memory1_InitialCondition;

    /* InitializeConditions for Memory: '<Root>/Memory3' */
    for (i = 0; i < 12; i++) {
      flmpc_simulink_DW.Memory3_PreviousInput[i] =
        flmpc_simulink_P.Memory3_InitialCondition;
    }

    /* End of InitializeConditions for Memory: '<Root>/Memory3' */

    /* InitializeConditions for Memory: '<Root>/Memory4' */
    for (i = 0; i < 10; i++) {
      flmpc_simulink_DW.Memory4_PreviousInput[i] =
        flmpc_simulink_P.Memory4_InitialCondition;
    }

    /* End of InitializeConditions for Memory: '<Root>/Memory4' */

    /* InitializeConditions for Buffer: '<Root>/Buffer' */
    for (i = 0; i < 108; i++) {
      flmpc_simulink_DW.Buffer_CircBuf[i] = flmpc_simulink_P.Buffer_ic;
    }

    flmpc_simulink_DW.Buffer_inBufPtrIdx = 54;
    flmpc_simulink_DW.Buffer_bufferLength = 54;
    flmpc_simulink_DW.Buffer_outBufPtrIdx = 0;

    /* End of InitializeConditions for Buffer: '<Root>/Buffer' */

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
    for (i = 0; i < 54; i++) {
      flmpc_simulink_DW.RateTransition_Buffer0[i] =
        flmpc_simulink_P.RateTransition_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<Root>/Rate Transition' */

    /* SystemInitialize for MATLAB Function: '<S1>/Dynamics' */
    flmpc_simulink_DW.idx = 1.0;
  }
}

/* Model terminate function */
void flmpc_simulink_terminate(void)
{
  /* Terminate for S-Function (casadi_fun): '<Root>/FLMPC S-Function' */
  /* Level2 S-Function Block: '<Root>/FLMPC S-Function' (casadi_fun) */
  {
    SimStruct *rts = flmpc_simulink_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}
