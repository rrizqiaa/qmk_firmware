// Copyright 2022 N P C (@rrizqiaa)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x08
#define EEPROM_VERSION_ADDR 34

// Dynamic keymap starts after EEPROM version
#define DYNAMIC_KEYMAP_EEPROM_ADDR 35
// Dynamic macro starts after dynamic keymaps (35+(4*10*6*2)) = (35+480)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 515    // **** CHANGE THIS BASED ON MATRIX_ROWS & MATRIX_COLS ****
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 509    // **** CHANGE THIS BASED ON 1024-DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR ****
#define DYNAMIC_KEYMAP_MACRO_COUNT 16

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




/*          Encoder Support 
#define ENCODERS_PAD_A { encoder1a, encoder2a }
#define ENCODERS_PAD_B { encoder1b, encoder2b }

#define ENCODER_DIRECTION_FLIP
#define ENCODER_DEFAULT_POS 0x3 

#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B3 }

#define ENCODER_RESOLUTION 4
#define ENCODER_RESOLUTIONS { 4, 2 }

*/


