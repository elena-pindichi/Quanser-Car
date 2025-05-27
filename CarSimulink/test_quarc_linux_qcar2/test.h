/*
 * test.h
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

#ifndef RTW_HEADER_test_h_
#define RTW_HEADER_test_h_
#ifndef test_COMMON_INCLUDES_
#define test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_types.h"
#include "quanser_extern.h"
#endif                                 /* test_COMMON_INCLUDES_ */

#include "test_types.h"
#include "rtGetNaN.h"
#include <string.h>
#include <stddef.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmSetFirstInitCond
#define rtmSetFirstInitCond(rtm, val)  ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
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

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define test_rtModel                   RT_MODEL_test_T

/* Block signals (default storage) */
typedef struct {
  real_T thetar[601];
  real_T phir[601];
  real_T Product1;                     /* '<S10>/Product1' */
  real_T analogpower;                  /* '<S7>/HIL Read' */
  real_T motorencoder;                 /* '<S7>/HIL Read' */
  real_T HILRead_o3[4];                /* '<S7>/HIL Read' */
  real_T Integrator1;                  /* '<S14>/Integrator1' */
  real_T Unwrap22;                     /* '<S7>/Unwrap 2^2' */
  real_T Integrator1_g;                /* '<S15>/Integrator1' */
  real_T Product1_p;                   /* '<S13>/Product1' */
  real_T Integrator;                   /* '<S7>/Integrator' */
  real_T Unwrap224;                    /* '<S7>/Unwrap 2^24' */
  real_T Product;                      /* '<S10>/Product' */
  real_T Product_d;                    /* '<S11>/Product' */
  real_T Product1_i;                   /* '<S11>/Product1' */
  real_T Product_m;                    /* '<S12>/Product' */
  real_T Product1_n;                   /* '<S12>/Product1' */
  real_T Unwrap21;                     /* '<S7>/Unwrap 2^1' */
  real_T Product_b;                    /* '<S13>/Product' */
  real_T Product_e;                    /* '<S14>/Product' */
  real_T Product1_b;                   /* '<S14>/Product1' */
  real_T Product_p;                    /* '<S15>/Product' */
  real_T Product1_g;                   /* '<S15>/Product1' */
  real_T Gain3;                        /* '<S16>/Gain3' */
  real_T Integrator5;                  /* '<S3>/Integrator5' */
  real_T Integrator6;                  /* '<S4>/Integrator6' */
  real_T SFunction[2];                 /* '<Root>/S-Function' */
  real_T switch_l;                     /* '<Root>/1 - Arm, 0 - Disarm2' */
  real_T desired;                      /* '<S8>/Multiply1' */
  real_T measured;                     /* '<S8>/Multiply' */
  real_T commandsaturation;            /* '<S7>/command saturation' */
  real_T SteeringBias;                 /* '<S7>/Steering Bias' */
  real_T Unwrap21_o;                   /* '<S1>/Unwrap 2^1' */
  real_T Integrator1_f;                /* '<S9>/Integrator1' */
  real_T Product_g;                    /* '<S9>/Product' */
  real_T Product1_b3;                  /* '<S9>/Product1' */
  real_T Product_f;                    /* '<S3>/Product' */
  real_T Product1_ij;                  /* '<S4>/Product1' */
  real_T Kim;                          /* '<S8>/Ki (% // m)  ' */
  real_T q_next[4];                    /* '<Root>/MATLAB Function' */
  real_T q_ref[52];                    /* '<Root>/MATLAB Function' */
  real_T u_ref[24];                    /* '<Root>/MATLAB Function' */
  boolean_T Compare;                   /* '<S18>/Compare' */
} B_test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[5];  /* '<S7>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[5];  /* '<S7>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[3];/* '<S7>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[2];/* '<S7>/HIL Initialize' */
  real_T HILInitialize_POValues[2];    /* '<S7>/HIL Initialize' */
  real_T HILInitialize_OOValues[2];    /* '<S7>/HIL Initialize' */
  real_T Unwrap22_PreviousInput;       /* '<S7>/Unwrap 2^2' */
  real_T Unwrap22_Revolutions;         /* '<S7>/Unwrap 2^2' */
  real_T Unwrap224_PreviousInput;      /* '<S7>/Unwrap 2^24' */
  real_T Unwrap224_Revolutions;        /* '<S7>/Unwrap 2^24' */
  real_T Unwrap21_PreviousInput;       /* '<S7>/Unwrap 2^1' */
  real_T Unwrap21_Revolutions;         /* '<S7>/Unwrap 2^1' */
  real_T XYFigure_XBuffer[1000000];    /* '<Root>/XY Figure' */
  real_T XYFigure_YBuffer[1000000];    /* '<Root>/XY Figure' */
  real_T Unwrap21_PreviousInput_d;     /* '<S1>/Unwrap 2^1' */
  real_T Unwrap21_Revolutions_o;       /* '<S1>/Unwrap 2^1' */
  t_card HILInitialize_Card;           /* '<S7>/HIL Initialize' */
  real_T SFunction_RWORK[3710];        /* '<Root>/S-Function' */
  void *HILRead_PWORK;                 /* '<S7>/HIL Read' */
  void *SFunction_PWORK[74];           /* '<Root>/S-Function' */
  void *HILWrite_PWORK;                /* '<S7>/HIL Write' */
  struct {
    void *LoggedData;
  } V_PWORK;                           /* '<Root>/V' */

  struct {
    void *LoggedData;
  } Xpos_PWORK;                        /* '<Root>/Xpos' */

  struct {
    void *LoggedData;
  } Yaw_PWORK;                         /* '<Root>/Yaw' */

  struct {
    void *LoggedData;
  } Ypos_PWORK;                        /* '<Root>/Ypos' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<S8>/Scope' */

  int32_T HILInitialize_DOStates[16];  /* '<S7>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[3];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[3];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[2];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[2];/* '<S7>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[2];/* '<S7>/HIL Initialize' */
  int32_T HILRead_EncoderBuffer;       /* '<S7>/HIL Read' */
  int32_T sfEvent;                     /* '<Root>/MATLAB Function' */
  uint32_T HILInitialize_POSortedChans[2];/* '<S7>/HIL Initialize' */
  int_T Integrator1_IWORK;             /* '<S14>/Integrator1' */
  int_T Integrator1_IWORK_i;           /* '<S15>/Integrator1' */
  int_T Integrator1_IWORK_g;           /* '<S10>/Integrator1' */
  int_T Integrator1_IWORK_d;           /* '<S11>/Integrator1' */
  int_T Integrator1_IWORK_gg;          /* '<S12>/Integrator1' */
  int_T Integrator1_IWORK_l;           /* '<S13>/Integrator1' */
  int_T SFunction_IWORK[154];          /* '<Root>/S-Function' */
  int_T XYFigure_IWORK[2];             /* '<Root>/XY Figure' */
  int_T Integrator1_IWORK_a;           /* '<S9>/Integrator1' */
  uint8_T is_active_c2_test;           /* '<Root>/MATLAB Function' */
  boolean_T HILInitialize_DOBits[16];  /* '<S7>/HIL Initialize' */
  boolean_T Unwrap22_FirstSample;      /* '<S7>/Unwrap 2^2' */
  boolean_T Unwrap224_FirstSample;     /* '<S7>/Unwrap 2^24' */
  boolean_T Unwrap21_FirstSample;      /* '<S7>/Unwrap 2^1' */
  boolean_T XYFigure_IsFull;           /* '<Root>/XY Figure' */
  boolean_T Unwrap21_FirstSample_o;    /* '<S1>/Unwrap 2^1' */
  boolean_T doneDoubleBufferReInit;    /* '<Root>/MATLAB Function' */
} DW_test_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator2_CSTATE;           /* '<S10>/Integrator2' */
  real_T Integrator1_CSTATE;           /* '<S14>/Integrator1' */
  real_T Integrator1_CSTATE_m;         /* '<S15>/Integrator1' */
  real_T Integrator2_CSTATE_f;         /* '<S13>/Integrator2' */
  real_T Integrator_CSTATE;            /* '<S7>/Integrator' */
  real_T Integrator1_CSTATE_p;         /* '<S10>/Integrator1' */
  real_T Integrator1_CSTATE_h;         /* '<S11>/Integrator1' */
  real_T Integrator2_CSTATE_i;         /* '<S11>/Integrator2' */
  real_T Integrator1_CSTATE_b;         /* '<S12>/Integrator1' */
  real_T Integrator2_CSTATE_c;         /* '<S12>/Integrator2' */
  real_T Integrator1_CSTATE_n;         /* '<S13>/Integrator1' */
  real_T Integrator2_CSTATE_m;         /* '<S14>/Integrator2' */
  real_T Integrator2_CSTATE_b;         /* '<S15>/Integrator2' */
  real_T Integrator5_CSTATE;           /* '<S3>/Integrator5' */
  real_T Integrator6_CSTATE;           /* '<S4>/Integrator6' */
  real_T Integrator3_CSTATE;           /* '<S1>/Integrator3' */
  real_T Integrator1_CSTATE_ng;        /* '<S8>/Integrator1' */
  real_T Integrator1_CSTATE_me;        /* '<S9>/Integrator1' */
  real_T Integrator2_CSTATE_k;         /* '<S9>/Integrator2' */
} X_test_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator2_CSTATE;           /* '<S10>/Integrator2' */
  real_T Integrator1_CSTATE;           /* '<S14>/Integrator1' */
  real_T Integrator1_CSTATE_m;         /* '<S15>/Integrator1' */
  real_T Integrator2_CSTATE_f;         /* '<S13>/Integrator2' */
  real_T Integrator_CSTATE;            /* '<S7>/Integrator' */
  real_T Integrator1_CSTATE_p;         /* '<S10>/Integrator1' */
  real_T Integrator1_CSTATE_h;         /* '<S11>/Integrator1' */
  real_T Integrator2_CSTATE_i;         /* '<S11>/Integrator2' */
  real_T Integrator1_CSTATE_b;         /* '<S12>/Integrator1' */
  real_T Integrator2_CSTATE_c;         /* '<S12>/Integrator2' */
  real_T Integrator1_CSTATE_n;         /* '<S13>/Integrator1' */
  real_T Integrator2_CSTATE_m;         /* '<S14>/Integrator2' */
  real_T Integrator2_CSTATE_b;         /* '<S15>/Integrator2' */
  real_T Integrator5_CSTATE;           /* '<S3>/Integrator5' */
  real_T Integrator6_CSTATE;           /* '<S4>/Integrator6' */
  real_T Integrator3_CSTATE;           /* '<S1>/Integrator3' */
  real_T Integrator1_CSTATE_ng;        /* '<S8>/Integrator1' */
  real_T Integrator1_CSTATE_me;        /* '<S9>/Integrator1' */
  real_T Integrator2_CSTATE_k;         /* '<S9>/Integrator2' */
} XDot_test_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator2_CSTATE;        /* '<S10>/Integrator2' */
  boolean_T Integrator1_CSTATE;        /* '<S14>/Integrator1' */
  boolean_T Integrator1_CSTATE_m;      /* '<S15>/Integrator1' */
  boolean_T Integrator2_CSTATE_f;      /* '<S13>/Integrator2' */
  boolean_T Integrator_CSTATE;         /* '<S7>/Integrator' */
  boolean_T Integrator1_CSTATE_p;      /* '<S10>/Integrator1' */
  boolean_T Integrator1_CSTATE_h;      /* '<S11>/Integrator1' */
  boolean_T Integrator2_CSTATE_i;      /* '<S11>/Integrator2' */
  boolean_T Integrator1_CSTATE_b;      /* '<S12>/Integrator1' */
  boolean_T Integrator2_CSTATE_c;      /* '<S12>/Integrator2' */
  boolean_T Integrator1_CSTATE_n;      /* '<S13>/Integrator1' */
  boolean_T Integrator2_CSTATE_m;      /* '<S14>/Integrator2' */
  boolean_T Integrator2_CSTATE_b;      /* '<S15>/Integrator2' */
  boolean_T Integrator5_CSTATE;        /* '<S3>/Integrator5' */
  boolean_T Integrator6_CSTATE;        /* '<S4>/Integrator6' */
  boolean_T Integrator3_CSTATE;        /* '<S1>/Integrator3' */
  boolean_T Integrator1_CSTATE_ng;     /* '<S8>/Integrator1' */
  boolean_T Integrator1_CSTATE_me;     /* '<S9>/Integrator1' */
  boolean_T Integrator2_CSTATE_k;      /* '<S9>/Integrator2' */
} XDis_test_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator1_Reset_ZCE;    /* '<S8>/Integrator1' */
} PrevZCX_test_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            test_B
#define BlockIO                        B_test_T
#define rtX                            test_X
#define ContinuousStates               X_test_T
#define rtXdot                         test_XDot
#define StateDerivatives               XDot_test_T
#define tXdis                          test_XDis
#define StateDisabled                  XDis_test_T
#define rtP                            test_P
#define Parameters                     P_test_T
#define rtDWork                        test_DW
#define D_Work                         DW_test_T
#define rtPrevZCSigState               test_PrevZCX
#define PrevZCSigStates                PrevZCX_test_T

/* Parameters (default storage) */
struct P_test_T_ {
  real_T XYFigure_maximum_x;           /* Mask Parameter: XYFigure_maximum_x
                                        * Referenced by: '<Root>/XY Figure'
                                        */
  real_T XYFigure_maximum_y;           /* Mask Parameter: XYFigure_maximum_y
                                        * Referenced by: '<Root>/XY Figure'
                                        */
  real_T XYFigure_minimum_x;           /* Mask Parameter: XYFigure_minimum_x
                                        * Referenced by: '<Root>/XY Figure'
                                        */
  real_T XYFigure_minimum_y;           /* Mask Parameter: XYFigure_minimum_y
                                        * Referenced by: '<Root>/XY Figure'
                                        */
  int32_T XYFigure_update_rate;        /* Mask Parameter: XYFigure_update_rate
                                        * Referenced by: '<Root>/XY Figure'
                                        */
  uint32_T HILRead_analog_channels;   /* Mask Parameter: HILRead_analog_channels
                                       * Referenced by: '<S7>/HIL Read'
                                       */
  uint32_T HILRead_encoder_channels; /* Mask Parameter: HILRead_encoder_channels
                                      * Referenced by: '<S7>/HIL Read'
                                      */
  uint32_T HILRead_other_channels[4];  /* Mask Parameter: HILRead_other_channels
                                        * Referenced by: '<S7>/HIL Read'
                                        */
  uint32_T HILWrite_other_channels[2];/* Mask Parameter: HILWrite_other_channels
                                       * Referenced by: '<S7>/HIL Write'
                                       */
  real_T Constant10_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T HILInitialize_OOTerminate;/* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  real_T HILInitialize_OOExit;    /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<S7>/HIL Initialize'
                                   */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;    /* Expression: set_other_outputs_at_switch_in
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_OOFinal;        /* Expression: final_other_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_EIFrequency;    /* Expression: encoder_filter_frequency
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency;    /* Expression: pwm_frequency
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_OOInitial;      /* Expression: initial_other_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T HILInitialize_OOWatchdog;     /* Expression: watchdog_other_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  real_T Constant2_Value;              /* Expression: 25
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S10>/Integrator2'
                                        */
  real_T Unwrap22_Modulus;             /* Expression: modulus
                                        * Referenced by: '<S7>/Unwrap 2^2'
                                        */
  real_T Constant8_Value;              /* Expression: 25
                                        * Referenced by: '<S7>/Constant8'
                                        */
  real_T Integrator2_IC_l;             /* Expression: 0
                                        * Referenced by: '<S13>/Integrator2'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant10_Value_f;           /* Expression: 100
                                        * Referenced by: '<S7>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 1
                                        * Referenced by: '<S7>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 30
                                        * Referenced by: '<S7>/Constant12'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S7>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S7>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<S7>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S7>/Constant7'
                                        */
  real_T Constant9_Value_f;            /* Expression: 1
                                        * Referenced by: '<S7>/Constant9'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S7>/Integrator'
                                        */
  real_T Constant_Value_h;             /* Expression: 2
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T Unwrap224_Modulus;            /* Expression: modulus
                                        * Referenced by: '<S7>/Unwrap 2^24'
                                        */
  real_T Constant_Value_l;             /* Expression: 2
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T Integrator2_IC_j;             /* Expression: 0
                                        * Referenced by: '<S11>/Integrator2'
                                        */
  real_T Constant_Value_i;             /* Expression: 2
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T Integrator2_IC_d;             /* Expression: 0
                                        * Referenced by: '<S12>/Integrator2'
                                        */
  real_T Constant_Value_e;             /* Expression: 2
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T Unwrap21_Modulus;             /* Expression: modulus
                                        * Referenced by: '<S7>/Unwrap 2^1'
                                        */
  real_T Constant_Value_j;             /* Expression: 2
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T Integrator2_IC_n;             /* Expression: 0
                                        * Referenced by: '<S14>/Integrator2'
                                        */
  real_T Constant_Value_n;             /* Expression: 2
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T Integrator2_IC_h;             /* Expression: 0
                                        * Referenced by: '<S15>/Integrator2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/(4*720)
                                        * Referenced by: '<S16>/Gain1'
                                        */
  real_T Gain4_Gain;                   /* Expression: (13*19)/(70*37)
                                        * Referenced by: '<S16>/Gain4'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2*pi
                                        * Referenced by: '<S16>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.033
                                        * Referenced by: '<S16>/Gain3'
                                        */
  real_T Integrator5_IC;               /* Expression: 0
                                        * Referenced by: '<S3>/Integrator5'
                                        */
  real_T Integrator6_IC;               /* Expression: 0
                                        * Referenced by: '<S4>/Integrator6'
                                        */
  real_T Integrator3_IC;               /* Expression: 0
                                        * Referenced by: '<S1>/Integrator3'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<Root>/S-Function'
                                        */
  real_T SFunction_P1[13];             /* Computed Parameter: SFunction_P1
                                        * Referenced by: '<Root>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<Root>/S-Function'
                                        */
  real_T SFunction_P2[6];              /* Computed Parameter: SFunction_P2
                                        * Referenced by: '<Root>/S-Function'
                                        */
  real_T commandsaturation_UpperSat;   /* Expression: 0.8
                                        * Referenced by: '<S8>/command saturation'
                                        */
  real_T commandsaturation_LowerSat;   /* Expression: -0.8
                                        * Referenced by: '<S8>/command saturation'
                                        */
  real_T Kffms_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S8>/Kff  (% // m//s)'
                                        */
  real_T Kpms_Gain;                    /* Expression: 0.1
                                        * Referenced by: '<S8>/Kp (% // m//s)'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S8>/Integrator1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 0.4
                                        * Referenced by: '<S8>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: -0.4
                                        * Referenced by: '<S8>/Integrator1'
                                        */
  real_T commandsaturation1_UpperSat;  /* Expression: 0.5
                                        * Referenced by: '<S8>/command saturation1'
                                        */
  real_T commandsaturation1_LowerSat;  /* Expression: -0.5
                                        * Referenced by: '<S8>/command saturation1'
                                        */
  real_T directionconvention_Gain;     /* Expression: +1
                                        * Referenced by: '<S7>/direction convention'
                                        */
  real_T commandsaturation_UpperSat_n; /* Expression: 0.25
                                        * Referenced by: '<S7>/command saturation'
                                        */
  real_T commandsaturation_LowerSat_i; /* Expression: -0.25
                                        * Referenced by: '<S7>/command saturation'
                                        */
  real_T Gain_Gain;                    /* Expression: +1
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T SteeringBias_Bias;            /* Expression: 0.018
                                        * Referenced by: '<S7>/Steering Bias'
                                        */
  real_T Constant7_Value_o;            /* Expression: 1
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T Constant8_Value_g;            /* Expression: 25
                                        * Referenced by: '<S1>/Constant8'
                                        */
  real_T Constant_Value_p;             /* Expression: 2
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T Unwrap21_Modulus_p;           /* Expression: modulus
                                        * Referenced by: '<S1>/Unwrap 2^1'
                                        */
  real_T Integrator2_IC_a;             /* Expression: 0
                                        * Referenced by: '<S9>/Integrator2'
                                        */
  real_T Kim_Gain;                     /* Expression: 0.1
                                        * Referenced by: '<S8>/Ki (% // m)  '
                                        */
  int32_T HILInitialize_DOWatchdog;
                                 /* Computed Parameter: HILInitialize_DOWatchdog
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  int32_T HILInitialize_EIInitial;/* Computed Parameter: HILInitialize_EIInitial
                                   * Referenced by: '<S7>/HIL Initialize'
                                   */
  int32_T HILInitialize_POModes;    /* Computed Parameter: HILInitialize_POModes
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  int32_T HILInitialize_POConfiguration;
                            /* Computed Parameter: HILInitialize_POConfiguration
                             * Referenced by: '<S7>/HIL Initialize'
                             */
  int32_T HILInitialize_POAlignment;
                                /* Computed Parameter: HILInitialize_POAlignment
                                 * Referenced by: '<S7>/HIL Initialize'
                                 */
  int32_T HILInitialize_POPolarity;
                                 /* Computed Parameter: HILInitialize_POPolarity
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  uint32_T HILInitialize_AIChannels[5];
                                 /* Computed Parameter: HILInitialize_AIChannels
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  uint32_T HILInitialize_DIChannels[15];
                                 /* Computed Parameter: HILInitialize_DIChannels
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  uint32_T HILInitialize_DOChannels[16];
                                 /* Computed Parameter: HILInitialize_DOChannels
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIChannels[3];
                                 /* Computed Parameter: HILInitialize_EIChannels
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIQuadrature;
                               /* Computed Parameter: HILInitialize_EIQuadrature
                                * Referenced by: '<S7>/HIL Initialize'
                                */
  uint32_T HILInitialize_POChannels[2];
                                 /* Computed Parameter: HILInitialize_POChannels
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  uint32_T HILInitialize_OOChannels[2];
                                 /* Computed Parameter: HILInitialize_OOChannels
                                  * Referenced by: '<S7>/HIL Initialize'
                                  */
  boolean_T HILInitialize_Active;    /* Computed Parameter: HILInitialize_Active
                                      * Referenced by: '<S7>/HIL Initialize'
                                      */
  boolean_T HILInitialize_AOTerminate;
                                /* Computed Parameter: HILInitialize_AOTerminate
                                 * Referenced by: '<S7>/HIL Initialize'
                                 */
  boolean_T HILInitialize_AOExit;    /* Computed Parameter: HILInitialize_AOExit
                                      * Referenced by: '<S7>/HIL Initialize'
                                      */
  boolean_T HILInitialize_DOTerminate;
                                /* Computed Parameter: HILInitialize_DOTerminate
                                 * Referenced by: '<S7>/HIL Initialize'
                                 */
  boolean_T HILInitialize_DOExit;    /* Computed Parameter: HILInitialize_DOExit
                                      * Referenced by: '<S7>/HIL Initialize'
                                      */
  boolean_T HILInitialize_POTerminate;
                                /* Computed Parameter: HILInitialize_POTerminate
                                 * Referenced by: '<S7>/HIL Initialize'
                                 */
  boolean_T HILInitialize_POExit;    /* Computed Parameter: HILInitialize_POExit
                                      * Referenced by: '<S7>/HIL Initialize'
                                      */
  boolean_T HILInitialize_CKPStart;/* Computed Parameter: HILInitialize_CKPStart
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKPEnter;/* Computed Parameter: HILInitialize_CKPEnter
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKStart;  /* Computed Parameter: HILInitialize_CKStart
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_CKEnter;  /* Computed Parameter: HILInitialize_CKEnter
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AIPStart;/* Computed Parameter: HILInitialize_AIPStart
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AIPEnter;/* Computed Parameter: HILInitialize_AIPEnter
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPStart;/* Computed Parameter: HILInitialize_AOPStart
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPEnter;/* Computed Parameter: HILInitialize_AOPEnter
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOStart;  /* Computed Parameter: HILInitialize_AOStart
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOEnter;  /* Computed Parameter: HILInitialize_AOEnter
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOReset;  /* Computed Parameter: HILInitialize_AOReset
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOPStart;/* Computed Parameter: HILInitialize_DOPStart
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOPEnter;/* Computed Parameter: HILInitialize_DOPEnter
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOStart;  /* Computed Parameter: HILInitialize_DOStart
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOEnter;  /* Computed Parameter: HILInitialize_DOEnter
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOReset;  /* Computed Parameter: HILInitialize_DOReset
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIPStart;/* Computed Parameter: HILInitialize_EIPStart
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIPEnter;/* Computed Parameter: HILInitialize_EIPEnter
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIStart;  /* Computed Parameter: HILInitialize_EIStart
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIEnter;  /* Computed Parameter: HILInitialize_EIEnter
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POPStart;/* Computed Parameter: HILInitialize_POPStart
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POPEnter;/* Computed Parameter: HILInitialize_POPEnter
                                    * Referenced by: '<S7>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POStart;  /* Computed Parameter: HILInitialize_POStart
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POEnter;  /* Computed Parameter: HILInitialize_POEnter
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POReset;  /* Computed Parameter: HILInitialize_POReset
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_OOReset;  /* Computed Parameter: HILInitialize_OOReset
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOFinal;  /* Computed Parameter: HILInitialize_DOFinal
                                     * Referenced by: '<S7>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOInitial;
                                  /* Computed Parameter: HILInitialize_DOInitial
                                   * Referenced by: '<S7>/HIL Initialize'
                                   */
  boolean_T HILRead_Active;            /* Computed Parameter: HILRead_Active
                                        * Referenced by: '<S7>/HIL Read'
                                        */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S7>/HIL Write'
                                        */
  uint8_T uArm0Disarm2_CurrentSetting;
                              /* Computed Parameter: uArm0Disarm2_CurrentSetting
                               * Referenced by: '<Root>/1 - Arm, 0 - Disarm2'
                               */
  uint8_T XYFigure_Mode;               /* Computed Parameter: XYFigure_Mode
                                        * Referenced by: '<Root>/XY Figure'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_test_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
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
      real_T const *UPtrs0[4];
      int_T iDims0[2];
      real_T const *UPtrs1[52];
      int_T iDims1[2];
      real_T const *UPtrs2[24];
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

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeF[1][19];
  ODE1_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
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
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    boolean_T firstInitCondFlag;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
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
extern P_test_T test_P;

/* Block signals (default storage) */
extern B_test_T test_B;

/* Continuous states (default storage) */
extern X_test_T test_X;

/* Block states (default storage) */
extern DW_test_T test_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_test_T test_PrevZCX;

/* Model entry point functions */
extern void test_initialize(void);
extern void test_output(void);
extern void test_update(void);
extern void test_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern test_rtModel *test(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_test_T *const test_M;

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
 * '<Root>' : 'test'
 * '<S1>'   : 'test/Filter'
 * '<S2>'   : 'test/MATLAB Function'
 * '<S3>'   : 'test/PosX'
 * '<S4>'   : 'test/PosY'
 * '<S5>'   : 'test/Powered by QUARC'
 * '<S6>'   : 'test/Quanser'
 * '<S7>'   : 'test/basicQCarIO'
 * '<S8>'   : 'test/speedController'
 * '<S9>'   : 'test/Filter/Second-Order Low-Pass Filter1'
 * '<S10>'  : 'test/basicQCarIO/Second-Order Low-Pass Filter'
 * '<S11>'  : 'test/basicQCarIO/Second-Order Low-Pass Filter1'
 * '<S12>'  : 'test/basicQCarIO/Second-Order Low-Pass Filter2'
 * '<S13>'  : 'test/basicQCarIO/Second-Order Low-Pass Filter3'
 * '<S14>'  : 'test/basicQCarIO/Second-Order Low-Pass Filter4'
 * '<S15>'  : 'test/basicQCarIO/Second-Order Low-Pass Filter5'
 * '<S16>'  : 'test/basicQCarIO/SpeedEstimation'
 * '<S17>'  : 'test/basicQCarIO/SpeedEstimation1'
 * '<S18>'  : 'test/speedController/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_test_h_ */
