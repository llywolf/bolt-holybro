/**
 * ,---------,       ____  _ __
 * |  ,-^-,  |      / __ )(_) /_______________ _____  ___
 * | (  O  ) |     / __  / / __/ ___/ ___/ __ `/_  / / _ \
 * | / ,--´  |    / /_/ / / /_/ /__/ /  / /_/ / / /_/  __/
 *    +------`   /_____/_/\__/\___/_/   \__,_/ /___/\___/
 *
 * Crazyflie control firmware
 *
 * Copyright (C) 2022 Bitcraze AB
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, in version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * platform_defaults_bolt.h - platform specific default values for the bolt platform
 */

#pragma once

#ifndef __INCLUDED_FROM_PLATFORM_DEFAULTS__
    #pragma GCC error "Do not include this file directly, include platform_defaults.h instead."
#endif

// Defines for default values in the bolt platform

// Default values for battery limits
#define DEFAULT_BAT_LOW_VOLTAGE                   6.4f
#define DEFAULT_BAT_CRITICAL_LOW_VOLTAGE          6.0f
#define DEFAULT_BAT_LOW_DURATION_TO_TRIGGER_SEC   5

// Default value for system shutdown in minutes after radio silence.
// Requires kbuild config ENABLE_AUTO_SHUTDOWN to be activated.
#define DEFAULT_SYSTEM_SHUTDOWN_TIMEOUT_MIN       5

// Default PID gains
#define PID_ROLL_RATE_KP  2.7f // 250.0
#define PID_ROLL_RATE_KI  1 // 500.0
#define PID_ROLL_RATE_KD  -0.01f// 2.5
#define PID_ROLL_RATE_KFF  0.0
#define PID_ROLL_RATE_INTEGRATION_LIMIT    0.174532925f // 33.3

#define PID_PITCH_RATE_KP  2.7f // 250.0
#define PID_PITCH_RATE_KI  1 // 500.0
#define PID_PITCH_RATE_KD  -0.01f// 2.5
#define PID_PITCH_RATE_KFF  0.0
#define PID_PITCH_RATE_INTEGRATION_LIMIT    0.174532925f // 33.3

#define PID_YAW_RATE_KP  2.7f // 250.0
#define PID_YAW_RATE_KI  1 // 500.0
#define PID_YAW_RATE_KD  -0.01f// 2.5
#define PID_YAW_RATE_KFF  0.0
#define PID_YAW_RATE_INTEGRATION_LIMIT    0.174532925f // 33.3

#define PID_ROLL_KP  4.5f // 6.0
#define PID_ROLL_KI  0 // 3.0
#define PID_ROLL_KD  0.0
#define PID_ROLL_KFF 0.0
#define PID_ROLL_INTEGRATION_LIMIT    0.034906585f // 20.0

#define PID_PITCH_KP  4.5f // 6.0
#define PID_PITCH_KI  0 // 3.0
#define PID_PITCH_KD  0.0
#define PID_PITCH_KFF 0.0
#define PID_PITCH_INTEGRATION_LIMIT   0.034906585f // 20.0

#define PID_YAW_KP  10 // 6.0
#define PID_YAW_KI  0 // 1.0
#define PID_YAW_KD  0 // 0.35
#define PID_YAW_KFF 0.0
#define PID_YAW_INTEGRATION_LIMIT     0.13962634f // 360.0

#define PID_VEL_X_KP 25.0f
#define PID_VEL_X_KI 1.0f
#define PID_VEL_X_KD 0.0f
#define PID_VEL_X_KFF 0.0f

#define PID_VEL_Y_KP 25.0f
#define PID_VEL_Y_KI 1.0f
#define PID_VEL_Y_KD 0.0f
#define PID_VEL_Y_KFF 0.0f

#define PID_VEL_Z_KP 25.0f
#define PID_VEL_Z_KI 15.0f
#define PID_VEL_Z_KD 0.0f
#define PID_VEL_Z_KFF 0.0f

#define PID_VEL_Z_KP_BARO_Z_HOLD 3.0f
#define PID_VEL_Z_KI_BARO_Z_HOLD 1.0f
#define PID_VEL_Z_KD_BARO_Z_HOLD 1.5f
#define PID_VEL_Z_KFF_BARO_Z_HOLD 0.0f

#define PID_VEL_ROLL_MAX 5f // 20.0f
#define PID_VEL_PITCH_MAX 5f // 20.0f
#define PID_VEL_THRUST_BASE 36000.0f
#define PID_VEL_THRUST_BASE_BARO_Z_HOLD 38000.0f
#define PID_VEL_THRUST_MIN 20000.0f

#define PID_POS_X_KP 0.35f // 2.0f
#define PID_POS_X_KI 0.25f // 0.0f
#define PID_POS_X_KD -0.35f // 0.0f
#define PID_POS_X_KFF 0.0f

#define PID_POS_Y_KP 0.35f // 2.0f
#define PID_POS_Y_KI 0.25f // 0.0f
#define PID_POS_Y_KD -0.35f // 0.0f
#define PID_POS_Y_KFF 0.0f

#define PID_POS_Z_KP 5.882352941f // 2.0f
#define PID_POS_Z_KI 0 // 0.5f
#define PID_POS_Z_KD -5.050505051f // 0.0f
#define PID_POS_Z_KFF 0.0f

#define PID_POS_VEL_X_MAX 1.0f
#define PID_POS_VEL_Y_MAX 1.0f
#define PID_POS_VEL_Z_MAX 1.0f
