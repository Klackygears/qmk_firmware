

#pragma once


/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/

//#define MATRIX_COL_PINS { B4, E6, D7, C6, D4 }

#define MATRIX_COL_PINS { D4, C6, D7, E6, B4 }

#define MATRIX_ROW_PINS { F5 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW


/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#define RGBLED_NUM 60  // Number of LEDs


#define RGBLIGHT_LIMIT_VAL 180



#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_RAINBOW_SWIRL_RANGE
#define RGBLIGHT_RAINBOW_SWIRL_RANGE 75
#define RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_SNAKE_LENGTH
#define RGBLIGHT_EFFECT_SNAKE_LENGTH 20
#define RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_KNIGHT_LENGTH
#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 20
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_TWINKLE_PROBABILITY 1 / 127
