/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Planck PCB default pin-out */
// #define MATRIX_ROW_PINS { D3, D2, D1, D0 }
// #define MATRIX_COL_PINS { D4, D7, E6, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4 }
#define FORCE_NKRO
#define MATRIX_ROW_PINS \
    { D0, D1, D2, D3 }
// #define MATRIX_COL_PINS { B6, B3, F7, B2, B1, F6, F5, D4, D7, B4, C6, E6, B5 }
#define MATRIX_COL_PINS \
    { B5, E6, C6, B4, D7, D4, F5, F6, B1, B2, F7, B3, B6 }
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN B7
// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 12     // Number of LEDs
// #define RGBLIGHT_HUE_STEP 10
// #define RGBLIGHT_SAT_STEP 17
// #define RGBLIGHT_VAL_STEP 17
//
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
