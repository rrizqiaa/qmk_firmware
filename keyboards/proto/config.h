// Copyright 2022 N P C (@rrizqiaa)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1, F0 }
#define MATRIX_COL_PINS { D6, B7, B6, B1, B4, E6, D7, C6, D4, D0, D1, D2, D3, B0, B2 }

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
