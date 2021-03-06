/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2020. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#ifndef ANDROID_PERFSERVICE_TYPES_H
#define ANDROID_PERFSERVICE_TYPES_H

/* Scenarios, MUST align with PerfService.java */
enum {
    SCN_NONE            = 0,
    SCN_APP_SWITCH      = 1,  /* apply both for */
    SCN_PACKAGE_SWITCH  = 2,
    SCN_GAME_LAUNCH     = 3,
    SCN_APP_LAUNCH      = 4,
    SCN_APP_ROTATE      = 5,
    SCN_APP_TOUCH       = 6,
    SCN_SW_FRAME_UPDATE = 7,
    SCN_GAMING          = 8,
    SCN_SW_LEVEL_BOOST  = 9,
    SCN_SPORTS_MODE     = 10,
    SCN_NORMAL_MODE     = 11,
    SCN_GALLERY_BOOST   = 12,
    SCN_SW_BOOST_1      = 13,
    SCN_SW_BOOST_2      = 14,
    SCN_SW_BOOST_3      = 15,
    SCN_NUM             = 16,
    SCN_APP_RUN_BASE = SCN_NUM,
};

enum {
    STATE_PAUSED    = 0,
    STATE_RESUMED   = 1,
    STATE_DESTORYED = 2,
    STATE_DEAD      = 3,
    STATE_STOPPED   = 4,
    STATE_NUM       = 5,
};

enum {
    CMD_GET_CPU_FREQ_LEVEL_COUNT        = 0,
    CMD_GET_CPU_FREQ_LITTLE_LEVEL_COUNT = 1,
    CMD_GET_CPU_FREQ_BIG_LEVEL_COUNT    = 2,
    CMD_GET_GPU_FREQ_LEVEL_COUNT        = 3,
    CMD_GET_MEM_FREQ_LEVEL_COUNT        = 4,
    CMD_GET_PERF_INDEX_MIN              = 5,
    CMD_GET_PERF_INDEX_MAX              = 6,
    CMD_GET_PERF_NORMALIZED_INDEX_MAX   = 7,
    CMD_GET_CLUSTER_NUM                 = 8,
    CMD_GET_CLUSTER_CPU_NUM             = 9,
    CMD_GET_CLUSTER_CPU_FREQ_MIN        = 10,
    CMD_GET_CLUSTER_CPU_FREQ_MAX        = 11,
    CMD_GET_FOREGROUND_TYPE             = 12,
};

enum {
    CMD_SET_CPU_CORE_MIN            = 0,
    CMD_SET_CPU_CORE_MAX            = 1,
    CMD_SET_CPU_CORE_BIG_LITTLE_MIN = 2,
    CMD_SET_CPU_CORE_BIG_LITTLE_MAX = 3,
    CMD_SET_CPU_FREQ_MIN            = 4,
    CMD_SET_CPU_FREQ_MAX            = 5,
    CMD_SET_CPU_FREQ_BIG_LITTLE_MIN = 6,
    CMD_SET_CPU_FREQ_BIG_LITTLE_MAX = 7,
    CMD_SET_GPU_FREQ_MIN            = 8,
    CMD_SET_GPU_FREQ_MAX            = 9,
    CMD_SET_VCORE                   = 10,
    CMD_SET_SCREEN_OFF_STATE        = 11,
    CMD_SET_CPUFREQ_HISPEED_FREQ    = 12,
    CMD_SET_CPUFREQ_MIN_SAMPLE_TIME = 13,
    CMD_SET_CPUFREQ_ABOVE_HISPEED_DELAY = 14,
    CMD_SET_CLUSTER_CPU_CORE_MIN    = 15,
    CMD_SET_CLUSTER_CPU_CORE_MAX    = 16,
    CMD_SET_CLUSTER_CPU_FREQ_MIN    = 17,
    CMD_SET_CLUSTER_CPU_FREQ_MAX    = 18,
    CMD_SET_ROOT_CLUSTER            = 19,
    CMD_SET_CPU_UP_THRESHOLD        = 20,
    CMD_SET_CPU_DOWN_THRESHOLD      = 21,
    CMD_SET_PERF_INDEX              = 22,
    CMD_SET_NORMALIZED_PERF_INDEX   = 23,
    CMD_SET_PPM_MODE                = 24,
    CMD_SET_RUSH_BOOST_ENABLED      = 25,
    CMD_SET_HEAVY_TASK_ENABLED      = 26,
    CMD_SET_SCN_VALID               = 27,
    CMD_SET_IBOOST_UP_THRESHOLD     = 28,
    CMD_SET_IBOOST_DOWN_THRESHOLD   = 29,
    CMD_SET_WIPHY_CAM               = 30,
    CMD_SET_HPS_POWER_MODE          = 31,
    CMD_SET_DVFS_POWER_MODE         = 32,
    CMD_SET_DCM_MODE                = 33,
    CMD_SET_CLUSTER_CPU_CORE_HARD_MIN = 34,
    CMD_SET_PPM_HICA_VAR            = 35,
    CMD_SET_HPS_UP_TIMES            = 36,
    CMD_SET_HPS_DOWN_TIMES          = 37,
    CMD_SET_PPM_L_TO_4L_LL_HOLD_TIME = 38,
    CMD_SET_SCHED_HTASK_THRESH      = 39,
    CMD_SET_SCHED_AVG_HTASK_AC      = 40,
    CMD_SET_SCHED_AVG_HTASK_THRESH  = 41,
    CMD_SET_ENFORCE_PWR_MODE        = 42,
    CMD_SET_PACK_BOOST_MODE         = 43,
    CMD_SET_PACK_BOOST_TIMEOUT      = 44,
};

enum {
    SCREEN_OFF_DISABLE      = 0,
    SCREEN_OFF_ENABLE       = 1,
    SCREEN_OFF_WAIT_RESTORE = 2,
};

enum {
    DISPLAY_TYPE_GAME   = 0,
    DISPLAY_TYPE_OTHERS = 1,
    DISPLAY_TYPE_NO_TOUCH_BOOST = 2,
};

enum {
    NOTIFY_USER_TYPE_PID = 0,
    NOTIFY_USER_TYPE_FRAME_UPDATE = 1,
    NOTIFY_USER_TYPE_DISPLAY_TYPE = 2,
    NOTIFY_USER_TYPE_SCENARIO_ON  = 3,
    NOTIFY_USER_TYPE_SCENARIO_OFF = 4,
    NOTIFY_USER_TYPE_CORE_ONLINE  = 5,
    NOTIFY_USER_TYPE_PERF_MODE    = 6,
    NOTIFY_USER_TYPE_OTHERS       = 7,
    NOTIFY_USER_TYPE_DETECT       = 8,
};

enum {
    PERF_MODE_IGNORE = -1,
    PERF_MODE_NORMAL = 0,
    PERF_MODE_SPORTS = 1,
    PERF_MODE_USER_SETTING = 2,
};

enum {
    PPM_MODE_LOW_POWER   = 0,
    PPM_MODE_JUST_MAKE   = 1,
    PPM_MODE_PERFORMANCE = 2,
    PPM_MODE_NUM         = 3,
};

enum {
    DCM_MODE_NORMAL   = 0,
    DCM_MODE_SPORTS   = 1,
    DCM_MODE_NUM      = 2,
};

enum {
    PPM_HICA_VAR_SPORTS = 0,
    PPM_HICA_VAR_NORMAL = 1,
    PPM_HICA_VAR_NUM    = 2,
};

enum {
    CMD_GET_PACK_IN_WHITE_LIST = 0,
    CMD_GET_PACK_BOOST_MODE    = 1,
    CMD_GET_PACK_BOOST_TIMEOUT = 2,
};

#endif // ANDROID_PERFSERVICE_H

