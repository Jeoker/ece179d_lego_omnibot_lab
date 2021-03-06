/*
 * File: Lab2a_template.h
 *
 * Code generated for Simulink model 'Lab2a_template'.
 *
 * Model version                  : 1.76
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * TLC version                    : 8.6 (Jan 30 2014)
 * C/C++ source code generated on : Wed Oct 21 17:18:50 2015
 *
 * Target selection: realtime.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lab2a_template_h_
#define RTW_HEADER_Lab2a_template_h_
#include <string.h>
#include <math.h>
#include <float.h>
#include <stddef.h>
#ifndef Lab2a_template_COMMON_INCLUDES_
# define Lab2a_template_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "driver_nxt.h"
#endif                                 /* Lab2a_template_COMMON_INCLUDES_ */

#include "Lab2a_template_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals for system '<Root>/traj generation' */
typedef struct {
  real_T ref_cur;                      /* '<Root>/traj generation' */
  real_T ref_dcur;                     /* '<Root>/traj generation' */
} B_trajgeneration_Lab2a_templa_T;

/* Block signals (auto storage) */
typedef struct {
  real_T timeresetswitch;              /* '<Root>/time reset switch' */
  real_T Gain;                         /* '<S1>/Gain' */
  real_T Sum1;                         /* '<S4>/Sum1' */
  real_T Internal;                     /* '<S11>/Internal' */
  real_T Gain2;                        /* '<S4>/Gain2' */
  real_T Saturation;                   /* '<S1>/Saturation' */
  real_T Gain1;                        /* '<S2>/Gain1' */
  real_T Sum1_i;                       /* '<S5>/Sum1' */
  real_T Internal_b;                   /* '<S12>/Internal' */
  real_T Gain2_h;                      /* '<S5>/Gain2' */
  real_T Saturation1;                  /* '<S2>/Saturation1' */
  real_T Gain2_c;                      /* '<S3>/Gain2' */
  real_T Sum1_n;                       /* '<S6>/Sum1' */
  real_T Internal_g;                   /* '<S13>/Internal' */
  real_T Gain2_o;                      /* '<S6>/Gain2' */
  real_T Saturation2;                  /* '<S3>/Saturation2' */
  int8_T DataTypeConversion;           /* '<S1>/Data Type Conversion' */
  int8_T DataTypeConversion2;          /* '<S2>/Data Type Conversion2' */
  int8_T DataTypeConversion4;          /* '<S3>/Data Type Conversion4' */
  B_trajgeneration_Lab2a_templa_T sf_trajgeneration2;/* '<Root>/traj generation2' */
  B_trajgeneration_Lab2a_templa_T sf_trajgeneration1;/* '<Root>/traj generation1' */
  B_trajgeneration_Lab2a_templa_T sf_trajgeneration;/* '<Root>/traj generation' */
} B_Lab2a_template_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Internal_DSTATE;              /* '<S11>/Internal' */
  real_T Internal_DSTATE_g;            /* '<S17>/Internal' */
  real_T Internal_DSTATE_k;            /* '<S12>/Internal' */
  real_T Internal_DSTATE_m;            /* '<S21>/Internal' */
  real_T Internal_DSTATE_j;            /* '<S13>/Internal' */
  real_T Internal_DSTATE_jg;           /* '<S25>/Internal' */
  real_T t_off;                        /* '<Root>/timer w// reset' */
  real_T last_rst;                     /* '<Root>/timer w// reset' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<Root>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<Root>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<Root>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                /* '<Root>/To Workspace7' */

  struct {
    void *LoggedData;
  } ToWorkspace9_PWORK;                /* '<S1>/To Workspace9' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S1>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace10_PWORK;               /* '<S2>/To Workspace10' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S2>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace11_PWORK;               /* '<S3>/To Workspace11' */

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                /* '<S3>/To Workspace8' */
} DW_Lab2a_template_T;

/* Parameters (auto storage) */
struct P_Lab2a_template_T_ {
  real_T KdA;                          /* Variable: KdA
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T KdB;                          /* Variable: KdB
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T KdC;                          /* Variable: KdC
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T KiA;                          /* Variable: KiA
                                        * Referenced by: '<S4>/Gain2'
                                        */
  real_T KiB;                          /* Variable: KiB
                                        * Referenced by: '<S5>/Gain2'
                                        */
  real_T KiC;                          /* Variable: KiC
                                        * Referenced by: '<S6>/Gain2'
                                        */
  real_T KpA;                          /* Variable: KpA
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T KpB;                          /* Variable: KpB
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T KpC;                          /* Variable: KpC
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Ts_traj;                      /* Variable: Ts_traj
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T traj_A[100];                  /* Variable: traj_A
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T traj_B[100];                  /* Variable: traj_B
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T traj_C[100];                  /* Variable: traj_C
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T traj_dA[100];                 /* Variable: traj_dA
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T traj_dB[100];                 /* Variable: traj_dB
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T traj_dC[100];                 /* Variable: traj_dC
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T OffReset_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Off//Reset'
                                        */
  real_T On_Value;                     /* Expression: 1
                                        * Referenced by: '<Root>/On'
                                        */
  real_T Gain_Gain;                    /* Expression: pi/180
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Internal_A;                   /* Computed Parameter: Internal_A
                                        * Referenced by: '<S11>/Internal'
                                        */
  real_T Internal_C;                   /* Computed Parameter: Internal_C
                                        * Referenced by: '<S11>/Internal'
                                        */
  real_T Internal_D;                   /* Computed Parameter: Internal_D
                                        * Referenced by: '<S11>/Internal'
                                        */
  real_T Internal_X0;                  /* Expression: 0
                                        * Referenced by: '<S11>/Internal'
                                        */
  real_T Internal_A_b;                 /* Computed Parameter: Internal_A_b
                                        * Referenced by: '<S17>/Internal'
                                        */
  real_T Internal_B;                   /* Computed Parameter: Internal_B
                                        * Referenced by: '<S17>/Internal'
                                        */
  real_T Internal_C_i;                 /* Computed Parameter: Internal_C_i
                                        * Referenced by: '<S17>/Internal'
                                        */
  real_T Internal_D_g;                 /* Computed Parameter: Internal_D_g
                                        * Referenced by: '<S17>/Internal'
                                        */
  real_T Internal_X0_h;                /* Expression: 0
                                        * Referenced by: '<S17>/Internal'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -100
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T Internal_A_j;                 /* Computed Parameter: Internal_A_j
                                        * Referenced by: '<S12>/Internal'
                                        */
  real_T Internal_C_a;                 /* Computed Parameter: Internal_C_a
                                        * Referenced by: '<S12>/Internal'
                                        */
  real_T Internal_D_gd;                /* Computed Parameter: Internal_D_gd
                                        * Referenced by: '<S12>/Internal'
                                        */
  real_T Internal_X0_l;                /* Expression: 0
                                        * Referenced by: '<S12>/Internal'
                                        */
  real_T Internal_A_k;                 /* Computed Parameter: Internal_A_k
                                        * Referenced by: '<S21>/Internal'
                                        */
  real_T Internal_B_n;                 /* Computed Parameter: Internal_B_n
                                        * Referenced by: '<S21>/Internal'
                                        */
  real_T Internal_C_k;                 /* Computed Parameter: Internal_C_k
                                        * Referenced by: '<S21>/Internal'
                                        */
  real_T Internal_D_l;                 /* Computed Parameter: Internal_D_l
                                        * Referenced by: '<S21>/Internal'
                                        */
  real_T Internal_X0_hl;               /* Expression: 0
                                        * Referenced by: '<S21>/Internal'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -100
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Gain2_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real_T Internal_A_l;                 /* Computed Parameter: Internal_A_l
                                        * Referenced by: '<S13>/Internal'
                                        */
  real_T Internal_C_in;                /* Computed Parameter: Internal_C_in
                                        * Referenced by: '<S13>/Internal'
                                        */
  real_T Internal_D_f;                 /* Computed Parameter: Internal_D_f
                                        * Referenced by: '<S13>/Internal'
                                        */
  real_T Internal_X0_e;                /* Expression: 0
                                        * Referenced by: '<S13>/Internal'
                                        */
  real_T Internal_A_l2;                /* Computed Parameter: Internal_A_l2
                                        * Referenced by: '<S25>/Internal'
                                        */
  real_T Internal_B_b;                 /* Computed Parameter: Internal_B_b
                                        * Referenced by: '<S25>/Internal'
                                        */
  real_T Internal_C_aj;                /* Computed Parameter: Internal_C_aj
                                        * Referenced by: '<S25>/Internal'
                                        */
  real_T Internal_D_m;                 /* Computed Parameter: Internal_D_m
                                        * Referenced by: '<S25>/Internal'
                                        */
  real_T Internal_X0_c;                /* Expression: 0
                                        * Referenced by: '<S25>/Internal'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S3>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -100
                                        * Referenced by: '<S3>/Saturation2'
                                        */
  uint8_T timeresetswitch_CurrentSetting;/* Computed Parameter: timeresetswitch_CurrentSetting
                                          * Referenced by: '<Root>/time reset switch'
                                          */
};

/* Real-time Model Data Structure */
struct tag_RTM_Lab2a_template_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Lab2a_template_T Lab2a_template_P;

/* Block signals (auto storage) */
extern B_Lab2a_template_T Lab2a_template_B;

/* Block states (auto storage) */
extern DW_Lab2a_template_T Lab2a_template_DW;

/* Model entry point functions */
extern void Lab2a_template_initialize(void);
extern void Lab2a_template_output(void);
extern void Lab2a_template_update(void);
extern void Lab2a_template_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Lab2a_template_T *const Lab2a_template_M;

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
 * '<Root>' : 'Lab2a_template'
 * '<S1>'   : 'Lab2a_template/MOTOR A'
 * '<S2>'   : 'Lab2a_template/MOTOR B'
 * '<S3>'   : 'Lab2a_template/MOTOR C'
 * '<S4>'   : 'Lab2a_template/PID controller A'
 * '<S5>'   : 'Lab2a_template/PID controller B'
 * '<S6>'   : 'Lab2a_template/PID controller C'
 * '<S7>'   : 'Lab2a_template/timer w// reset'
 * '<S8>'   : 'Lab2a_template/traj generation'
 * '<S9>'   : 'Lab2a_template/traj generation1'
 * '<S10>'  : 'Lab2a_template/traj generation2'
 * '<S11>'  : 'Lab2a_template/velocity filter'
 * '<S12>'  : 'Lab2a_template/velocity filter  '
 * '<S13>'  : 'Lab2a_template/velocity filter     '
 * '<S14>'  : 'Lab2a_template/MOTOR A/Motor'
 * '<S15>'  : 'Lab2a_template/MOTOR B/Motor1'
 * '<S16>'  : 'Lab2a_template/MOTOR C/Motor2'
 * '<S17>'  : 'Lab2a_template/PID controller A/LTI System1'
 * '<S18>'  : 'Lab2a_template/PID controller A/LTI System1/IO Delay'
 * '<S19>'  : 'Lab2a_template/PID controller A/LTI System1/Input Delay'
 * '<S20>'  : 'Lab2a_template/PID controller A/LTI System1/Output Delay'
 * '<S21>'  : 'Lab2a_template/PID controller B/LTI System1'
 * '<S22>'  : 'Lab2a_template/PID controller B/LTI System1/IO Delay'
 * '<S23>'  : 'Lab2a_template/PID controller B/LTI System1/Input Delay'
 * '<S24>'  : 'Lab2a_template/PID controller B/LTI System1/Output Delay'
 * '<S25>'  : 'Lab2a_template/PID controller C/LTI System1'
 * '<S26>'  : 'Lab2a_template/PID controller C/LTI System1/IO Delay'
 * '<S27>'  : 'Lab2a_template/PID controller C/LTI System1/Input Delay'
 * '<S28>'  : 'Lab2a_template/PID controller C/LTI System1/Output Delay'
 * '<S29>'  : 'Lab2a_template/velocity filter/IO Delay'
 * '<S30>'  : 'Lab2a_template/velocity filter/Input Delay'
 * '<S31>'  : 'Lab2a_template/velocity filter/Output Delay'
 * '<S32>'  : 'Lab2a_template/velocity filter  /IO Delay'
 * '<S33>'  : 'Lab2a_template/velocity filter  /Input Delay'
 * '<S34>'  : 'Lab2a_template/velocity filter  /Output Delay'
 * '<S35>'  : 'Lab2a_template/velocity filter     /IO Delay'
 * '<S36>'  : 'Lab2a_template/velocity filter     /Input Delay'
 * '<S37>'  : 'Lab2a_template/velocity filter     /Output Delay'
 */
#endif                                 /* RTW_HEADER_Lab2a_template_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
