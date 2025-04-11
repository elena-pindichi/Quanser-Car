/*
 * Autonomous_Driving_Car_Example2_private.h
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

#ifndef RTW_HEADER_Autonomous_Driving_Car_Example2_private_h_
#define RTW_HEADER_Autonomous_Driving_Car_Example2_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Autonomous_Driving_Car_Example2_types.h"

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);

/* private model entry point functions */
extern void Autonomous_Driving_Car_Example2_derivatives(void);

#endif               /* RTW_HEADER_Autonomous_Driving_Car_Example2_private_h_ */
