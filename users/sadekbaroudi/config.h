#pragma once

// check to see if we are using the stenographobe, and skip if so... it has its own whole combo scheme
// see keyboards/fingerpunch/stenographobe/keymaps/*/config.h
#ifndef KEYBOARD_fingerpunch_stenographobe
#define COMBO_COUNT 15
#endif

#define COMBO_TERM 75

#ifdef MOUSEKEY_ENABLE
#  define MOUSEKEY_INTERVAL 16
#  define MOUSEKEY_DELAY 0
#  define MOUSEKEY_TIME_TO_MAX 60
#  define MOUSEKEY_MAX_SPEED 7
#  define MOUSEKEY_WHEEL_DELAY 0
#endif

#define TAP_CODE_DELAY 25

#define LEADER_TIMEOUT 300
#define LEADER_PER_KEY_TIMING

#define QUICK_TAP_TERM 0
#define IGNORE_MOD_TAP_INTERRUPT

#ifdef AUTO_MOUSE_DEFAULT_LAYER
    #undef AUTO_MOUSE_DEFAULT_LAYER
#endif
#define AUTO_MOUSE_DEFAULT_LAYER 6

// #ifdef CIRQUE_ENABLE
//     #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// #endif

// Define only one of the two below, but not both.
// Read here for details: https://github.com/sadekbaroudi/qmk_firmware/tree/master/keyboards/fingerpunch#layer-lighting

// #define FP_LAYER_LIGHTING_AUTO_MOUSE_ENABLE

#define FP_POINTING_SNIPING_LAYER_ENABLE
#define FP_POINTING_SCROLLING_LAYER_ENABLE
#define FP_POINTING_ZOOMING_LAYER_ENABLE

#define FP_LAYER_LIGHTING_HUE_2 FP_HSV_MINT
#define FP_LAYER_LIGHTING_HUE_3 FP_HSV_LAVENDER
#define FP_LAYER_LIGHTING_HUE_4 FP_HSV_LEMON
#define FP_LAYER_LIGHTING_HUE_5 FP_HSV_MELON

// These are the colors I used on my ffkb low pro ks-27 with the xvx horizon purple and green keycaps
// #define FP_LAYER_LIGHTING_HUE_2 HSV_GREEN
// #define FP_LAYER_LIGHTING_HUE_3 HSV_ORANGE
// #define FP_LAYER_LIGHTING_HUE_4 HSV_YELLOW
// #define FP_LAYER_LIGHTING_HUE_5 HSV_CYAN
// #define FP_LAYER_LIGHTING_HUE_6 HSV_WHITE

#ifdef FP_POINTING_SCROLLING_LAYER
    #undef FP_POINTING_SCROLLING_LAYER
#endif
#define FP_POINTING_SCROLLING_LAYER 4
#ifdef FP_POINTING_SCROLLING_LAYER
    #undef FP_POINTING_ZOOMING_LAYER
#endif
#define FP_POINTING_ZOOMING_LAYER 3

#define RGBLIGHT_LAYERS_RETAIN_VAL

// To enable this, just pass RGB_MATRIX_REACTIVE_LAYERS=yes at the command line when building
// Also, you must make sure that RGB_MATRIX_SOLID_REACTIVE_SIMPLE is enabled
#if defined(RGB_MATRIX_ENABLE) && defined(RGB_MATRIX_REACTIVE_LAYERS)
#define FP_LAYER_LIGHTING_MODE_2 RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define FP_LAYER_LIGHTING_MODE_3 RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define FP_LAYER_LIGHTING_MODE_4 RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define FP_LAYER_LIGHTING_MODE_5 RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#endif

// To enable this, just pass RGBLIGHT_SNAKE_LAYERS=yes at the command line when building
// Also, you must make sure that RGBLIGHT_MODE_SNAKE is enabled
#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_SNAKE_LAYERS)
#define FP_LAYER_LIGHTING_MODE_2 RGBLIGHT_MODE_SNAKE+1
#define FP_LAYER_LIGHTING_MODE_3 RGBLIGHT_MODE_SNAKE+1
#define FP_LAYER_LIGHTING_MODE_4 RGBLIGHT_MODE_SNAKE+1
#define FP_LAYER_LIGHTING_MODE_5 RGBLIGHT_MODE_SNAKE+1
#endif

// To enable this, just pass RGBLIGHT_TWINKLE_LAYERS=yes at the command line when building
// Also, you must make sure that RGBLIGHT_MODE_TWINKLE is enabled
#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_TWINKLE_LAYERS)
#define FP_LAYER_LIGHTING_MODE_2 RGBLIGHT_MODE_TWINKLE+1
#define FP_LAYER_LIGHTING_MODE_3 RGBLIGHT_MODE_TWINKLE+1
#define FP_LAYER_LIGHTING_MODE_4 RGBLIGHT_MODE_TWINKLE+1
#define FP_LAYER_LIGHTING_MODE_5 RGBLIGHT_MODE_TWINKLE+1
#endif

// To enable this, just pass RGB_LED_RING=yes at the command line when building
#if defined(RGBLIGHT_ENABLE) && defined(RGB_LED_RING)
#undef RGBLED_NUM
#define RGBLED_NUM 12
#endif

// To enable this, just pass RGB_MATRIX_BAND_VAL_LAYERS=yes at the command line when building
#if defined(RGB_MATRIX_ENABLE) && defined(RGB_MATRIX_BAND_VAL_LAYERS)
#define FP_LAYER_LIGHTING_MODE_2 RGB_MATRIX_BAND_VAL
#define FP_LAYER_LIGHTING_MODE_3 RGB_MATRIX_BAND_VAL
#define FP_LAYER_LIGHTING_MODE_4 RGB_MATRIX_BAND_VAL
#define FP_LAYER_LIGHTING_MODE_5 RGB_MATRIX_BAND_VAL
#endif
