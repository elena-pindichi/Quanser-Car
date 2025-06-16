/*
 * flmpc_simulink.h
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

#ifndef RTW_HEADER_flmpc_simulink_h_
#define RTW_HEADER_flmpc_simulink_h_
#ifndef flmpc_simulink_COMMON_INCLUDES_
#define flmpc_simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* flmpc_simulink_COMMON_INCLUDES_ */

#include "flmpc_simulink_types.h"
#include <math.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <string.h>
#include <stddef.h>
#include <float.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T z[2];                         /* '<Root>/Memory1' */
  real_T z_ref[12];                    /* '<Root>/Memory3' */
  real_T w_ref[10];                    /* '<Root>/Memory4' */
  real_T w[2];                         /* '<Root>/FLMPC S-Function' */
  real_T FromWorkspace[9];             /* '<Root>/From Workspace' */
  real_T RateTransition[54];           /* '<Root>/Rate Transition' */
} B_flmpc_simulink_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Buffer_CircBuf[108];          /* '<Root>/Buffer' */
  real_T Memory2_PreviousInput[4];     /* '<Root>/Memory2' */
  real_T Memory1_PreviousInput[2];     /* '<Root>/Memory1' */
  real_T Memory3_PreviousInput[12];    /* '<Root>/Memory3' */
  real_T Memory4_PreviousInput[10];    /* '<Root>/Memory4' */
  real_T RateTransition_Buffer0[54];   /* '<Root>/Rate Transition' */
  real_T idx;                          /* '<S1>/Dynamics' */
  real_T FLMPCSFunction_RWORK[802];    /* '<Root>/FLMPC S-Function' */
  void *FLMPCSFunction_PWORK[47];      /* '<Root>/FLMPC S-Function' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<Root>/From Workspace' */

  int32_T Buffer_inBufPtrIdx;          /* '<Root>/Buffer' */
  int32_T Buffer_outBufPtrIdx;         /* '<Root>/Buffer' */
  int32_T Buffer_bufferLength;         /* '<Root>/Buffer' */
  int_T FLMPCSFunction_IWORK[46];      /* '<Root>/FLMPC S-Function' */
  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<Root>/From Workspace' */
} DW_flmpc_simulink_T;

/* Parameters (default storage) */
struct P_flmpc_simulink_T_ {
  real_T Memory2_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory2'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Memory3_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory3'
                                        */
  real_T Memory4_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory4'
                                        */
  real_T FLMPCSFunction_P1_Size[2];/* Computed Parameter: FLMPCSFunction_P1_Size
                                    * Referenced by: '<Root>/FLMPC S-Function'
                                    */
  real_T FLMPCSFunction_P1[16];        /* Computed Parameter: FLMPCSFunction_P1
                                        * Referenced by: '<Root>/FLMPC S-Function'
                                        */
  real_T FLMPCSFunction_P2_Size[2];/* Computed Parameter: FLMPCSFunction_P2_Size
                                    * Referenced by: '<Root>/FLMPC S-Function'
                                    */
  real_T FLMPCSFunction_P2[9];         /* Computed Parameter: FLMPCSFunction_P2
                                        * Referenced by: '<Root>/FLMPC S-Function'
                                        */
  real_T Buffer_ic;                    /* Expression: 0
                                        * Referenced by: '<Root>/Buffer'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
};

/* Real-time Model Data Structure */
struct tag_RTM_flmpc_simulink_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[2];
      int_T iDims0[2];
      real_T const *UPtrs1[12];
      int_T iDims1[2];
      real_T const *UPtrs2[10];
      int_T iDims2[2];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      int_T oDims0[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_flmpc_simulink_T flmpc_simulink_P;

/* Block signals (default storage) */
extern B_flmpc_simulink_T flmpc_simulink_B;

/* Block states (default storage) */
extern DW_flmpc_simulink_T flmpc_simulink_DW;

/* Model entry point functions */
extern void flmpc_simulink_initialize(void);
extern void flmpc_simulink_step(void);
extern void flmpc_simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_flmpc_simulink_T *const flmpc_simulink_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'flmpc_simulink'
 * '<S1>'   : 'flmpc_simulink/Discretization'
 * '<S2>'   : 'flmpc_simulink/FL U Mapping'
 * '<S3>'   : 'flmpc_simulink/Discretization/Dynamics'
 */
#endif                                 /* RTW_HEADER_flmpc_simulink_h_ */
