#pragma once

// place overrides here
#define QMK_ESC_OUTPUT F4 // usually COL
#define QMK_ESC_INPUT D1 // usually ROW
#define QMK_LED B0
#define QMK_SPEAKER C6

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader


#define PERMISSIVE_HOLD

#define PREVENT_STUCK_MODIFIERS
#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT


/* ws2812 RGB LED */
#define RGB_DI_PIN D4
#ifdef RGBLIGHT_ENABLE
#define RGBLED_NUM 15    // Number of LEDs
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_LAYERS
#endif

 #ifdef RGB_DI_PIN
 #undef RGBLIGHT_ANIMATIONS

 #define RGBLIGHT_HUE_STEP 8
 #define RGBLIGHT_SAT_STEP 8
 #define RGBLIGHT_VAL_STEP 8
 #endif

   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//     #define RGBLIGHT_EFFECT_SNAKE
//     #undef  RGBLIGHT_EFFECT_SNAKE_LENGTH
//     #define RGBLIGHT_EFFECT_SNAKE_LENGTH 20
   #define RGBLIGHT_EFFECT_KNIGHT
   #undef  RGBLIGHT_EFFECT_KNIGHT_LENGTH
   #define RGBLIGHT_EFFECT_KNIGHT_LENGTH 20
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING

