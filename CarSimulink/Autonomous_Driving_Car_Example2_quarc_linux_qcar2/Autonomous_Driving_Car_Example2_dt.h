/*
 * Autonomous_Driving_Car_Example2_dt.h
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "Autonomous_Driving_Car_Example2".
 *
 * Model version              : 1.448
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Apr  9 12:59:41 2025
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
  sizeof(t_channel),
  sizeof(t_jpeg_compress),
  sizeof(t_video_capture),
  sizeof(t_video3d),
  sizeof(t_video3d_stream),
  sizeof(t_int64),
  sizeof(t_uint64),
  sizeof(t_image_rgb_to_hsv),
  sizeof(t_timeout),
  sizeof(t_card),
  sizeof(t_boolean),
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
  "t_channel",
  "t_jpeg_compress",
  "t_video_capture",
  "t_video3d",
  "t_video3d_stream",
  "t_int64",
  "t_uint64",
  "t_image_rgb_to_hsv",
  "t_timeout",
  "t_card",
  "t_boolean",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Autonomous_Driving_Car_Exampl_B.Depth_o2), 23, 0, 1 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_B.motorcurrent), 0, 0, 58 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_B.Channel), 17, 0, 3 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_B.Depth_o1[0]), 1, 0, 230400 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_B.VideoCapture_o1[0]), 3, 0,
    1723698 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_B.Compare), 8, 0, 6 }
  ,

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.SampleTime_PreviousTime), 25, 0,
    9 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.one_shot_block_DSTATE[0]), 0, 0,
    37 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.ImageCompress_Compress), 18, 0,
    3 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.VideoCapture_VideoCapture), 19,
    0, 1 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.Video3DInitialize_Video3D), 20,
    0, 2 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.Depth_Stream), 21, 0, 1 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.ImageTransform_AlgHandle), 24, 0,
    1 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.HILInitialize_Card), 26, 0, 1 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.HILRead_PWORK), 11, 0, 18 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.HILInitialize_DOStates[0]), 6, 0,
    43 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.HILInitialize_POSortedChans[0]),
    7, 0, 2 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.Integrator1_IWORK), 10, 0, 3 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.obstacleDetection_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.ImageCompress_ScanLine[0]), 3, 0,
    18274 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.HILInitialize_DOBits[0]), 8, 0,
    27 },

  { (char_T *)(&Autonomous_Driving_Car_Examp_DW.HILWrite_DigitalBuffer), 27, 0,
    1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  22U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.camera_rate), 0, 0, 16 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.HSVColorThresholding_b_comparis),
    6, 0, 3 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.HILRead_analog_channels[0]), 7,
    0, 15 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.Video3DInitialize_active), 8, 0,
    1 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.distancem_Y0), 0, 0, 181 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.HILInitialize_DOWatchdog), 6, 0,
    13 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.Gain_Gain_g), 1, 0, 1 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.HILInitialize_AIChannels[0]), 7,
    0, 49 },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.HILInitialize_Active), 8, 0, 42
  },

  { (char_T *)(&Autonomous_Driving_Car_Exampl_P.imageDepthForDisplay_Y0), 3, 0,
    4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  10U,
  rtPTransitions
};

/* [EOF] Autonomous_Driving_Car_Example2_dt.h */
