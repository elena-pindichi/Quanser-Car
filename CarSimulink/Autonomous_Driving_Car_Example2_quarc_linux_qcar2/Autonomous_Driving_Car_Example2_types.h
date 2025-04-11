/*
 * Autonomous_Driving_Car_Example2_types.h
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

#ifndef RTW_HEADER_Autonomous_Driving_Car_Example2_types_h_
#define RTW_HEADER_Autonomous_Driving_Car_Example2_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_t_channel_
#define DEFINED_TYPEDEF_FOR_t_channel_

typedef enum {
  CHANNEL_0 = 0,                       /* Default value */
  CHANNEL_1,
  CHANNEL_2,
  CHANNEL_3,
  CHANNEL_4,
  CHANNEL_5,
  CHANNEL_6,
  CHANNEL_7,
  CHANNEL_8,
  CHANNEL_9,
  CHANNEL_10,
  CHANNEL_11,
  CHANNEL_12,
  CHANNEL_13,
  CHANNEL_14,
  CHANNEL_15,
  CHANNEL_16,
  CHANNEL_17,
  CHANNEL_18,
  CHANNEL_19,
  CHANNEL_20,
  CHANNEL_21,
  CHANNEL_22,
  CHANNEL_23,
  CHANNEL_24,
  CHANNEL_25,
  CHANNEL_26,
  CHANNEL_27,
  CHANNEL_28,
  CHANNEL_29,
  CHANNEL_30,
  CHANNEL_31,
  CHANNEL_32,
  CHANNEL_33,
  CHANNEL_34,
  CHANNEL_35,
  CHANNEL_36,
  CHANNEL_37,
  CHANNEL_38,
  CHANNEL_39,
  CHANNEL_40,
  CHANNEL_41,
  CHANNEL_42,
  CHANNEL_43,
  CHANNEL_44,
  CHANNEL_45,
  CHANNEL_46,
  CHANNEL_47,
  CHANNEL_48,
  CHANNEL_49,
  CHANNEL_50,
  CHANNEL_51,
  CHANNEL_52,
  CHANNEL_53,
  CHANNEL_54,
  CHANNEL_55,
  CHANNEL_56,
  CHANNEL_57,
  CHANNEL_58,
  CHANNEL_59,
  CHANNEL_60,
  CHANNEL_61,
  CHANNEL_62,
  CHANNEL_63,
  CHANNEL_64,
  CHANNEL_65,
  CHANNEL_66,
  CHANNEL_67,
  CHANNEL_68,
  CHANNEL_69,
  CHANNEL_70,
  CHANNEL_71,
  CHANNEL_72,
  CHANNEL_73,
  CHANNEL_74,
  CHANNEL_75,
  CHANNEL_76,
  CHANNEL_77,
  CHANNEL_78,
  CHANNEL_79,
  CHANNEL_80,
  CHANNEL_81,
  CHANNEL_82,
  CHANNEL_83,
  CHANNEL_84,
  CHANNEL_85,
  CHANNEL_86,
  CHANNEL_87,
  CHANNEL_88,
  CHANNEL_89,
  CHANNEL_90,
  CHANNEL_91,
  CHANNEL_92,
  CHANNEL_93,
  CHANNEL_94,
  CHANNEL_95,
  CHANNEL_96,
  CHANNEL_97,
  CHANNEL_98,
  CHANNEL_99,
  CHANNEL_100,
  CHANNEL_101,
  CHANNEL_102,
  CHANNEL_103,
  CHANNEL_104,
  CHANNEL_105,
  CHANNEL_106,
  CHANNEL_107,
  CHANNEL_108,
  CHANNEL_109,
  CHANNEL_110,
  CHANNEL_111,
  CHANNEL_112,
  CHANNEL_113,
  CHANNEL_114,
  CHANNEL_115,
  CHANNEL_116,
  CHANNEL_117,
  CHANNEL_118,
  CHANNEL_119,
  CHANNEL_120,
  CHANNEL_121,
  CHANNEL_122,
  CHANNEL_123,
  CHANNEL_124,
  CHANNEL_125,
  CHANNEL_126,
  CHANNEL_127,
  CHANNEL_128,
  CHANNEL_129,
  CHANNEL_130,
  CHANNEL_131,
  CHANNEL_132,
  CHANNEL_133,
  CHANNEL_134,
  CHANNEL_135,
  CHANNEL_136,
  CHANNEL_137,
  CHANNEL_138,
  CHANNEL_139,
  CHANNEL_140,
  CHANNEL_141,
  CHANNEL_142,
  CHANNEL_143,
  CHANNEL_144,
  CHANNEL_145,
  CHANNEL_146,
  CHANNEL_147,
  CHANNEL_148,
  CHANNEL_149,
  CHANNEL_150,
  CHANNEL_151,
  CHANNEL_152,
  CHANNEL_153,
  CHANNEL_154,
  CHANNEL_155,
  CHANNEL_156,
  CHANNEL_157,
  CHANNEL_158,
  CHANNEL_159,
  CHANNEL_160,
  CHANNEL_161,
  CHANNEL_162,
  CHANNEL_163,
  CHANNEL_164,
  CHANNEL_165,
  CHANNEL_166,
  CHANNEL_167,
  CHANNEL_168,
  CHANNEL_169,
  CHANNEL_170,
  CHANNEL_171,
  CHANNEL_172,
  CHANNEL_173,
  CHANNEL_174,
  CHANNEL_175,
  CHANNEL_176,
  CHANNEL_177,
  CHANNEL_178,
  CHANNEL_179,
  CHANNEL_180,
  CHANNEL_181,
  CHANNEL_182,
  CHANNEL_183,
  CHANNEL_184,
  CHANNEL_185,
  CHANNEL_186,
  CHANNEL_187,
  CHANNEL_188,
  CHANNEL_189,
  CHANNEL_190,
  CHANNEL_191,
  CHANNEL_192,
  CHANNEL_193,
  CHANNEL_194,
  CHANNEL_195,
  CHANNEL_196,
  CHANNEL_197,
  CHANNEL_198,
  CHANNEL_199,
  CHANNEL_200,
  CHANNEL_201,
  CHANNEL_202,
  CHANNEL_203,
  CHANNEL_204,
  CHANNEL_205,
  CHANNEL_206,
  CHANNEL_207,
  CHANNEL_208,
  CHANNEL_209,
  CHANNEL_210,
  CHANNEL_211,
  CHANNEL_212,
  CHANNEL_213,
  CHANNEL_214,
  CHANNEL_215,
  CHANNEL_216,
  CHANNEL_217,
  CHANNEL_218,
  CHANNEL_219,
  CHANNEL_220,
  CHANNEL_221,
  CHANNEL_222,
  CHANNEL_223,
  CHANNEL_224,
  CHANNEL_225,
  CHANNEL_226,
  CHANNEL_227,
  CHANNEL_228,
  CHANNEL_229,
  CHANNEL_230,
  CHANNEL_231,
  CHANNEL_232,
  CHANNEL_233,
  CHANNEL_234,
  CHANNEL_235,
  CHANNEL_236,
  CHANNEL_237,
  CHANNEL_238,
  CHANNEL_239,
  CHANNEL_240,
  CHANNEL_241,
  CHANNEL_242,
  CHANNEL_243,
  CHANNEL_244,
  CHANNEL_245,
  CHANNEL_246,
  CHANNEL_247,
  CHANNEL_248,
  CHANNEL_249,
  CHANNEL_250,
  CHANNEL_251,
  CHANNEL_252,
  CHANNEL_253,
  CHANNEL_254,
  CHANNEL_255
} t_channel;

#endif

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_real_T */

#ifndef typedef_emxArray_real_T_Autonomous_Dr_T
#define typedef_emxArray_real_T_Autonomous_Dr_T

typedef struct emxArray_real_T emxArray_real_T_Autonomous_Dr_T;

#endif                             /* typedef_emxArray_real_T_Autonomous_Dr_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_int32_T */

#ifndef typedef_emxArray_int32_T_Autonomous_D_T
#define typedef_emxArray_int32_T_Autonomous_D_T

typedef struct emxArray_int32_T emxArray_int32_T_Autonomous_D_T;

#endif                             /* typedef_emxArray_int32_T_Autonomous_D_T */

/* Parameters (default storage) */
typedef struct P_Autonomous_Driving_Car_Exam_T_ P_Autonomous_Driving_Car_Exam_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Autonomous_Driving_Ca_T RT_MODEL_Autonomous_Driving_C_T;

#endif                 /* RTW_HEADER_Autonomous_Driving_Car_Example2_types_h_ */
