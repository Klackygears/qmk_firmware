#pragma once

#include QMK_KEYBOARD_H

#include "wrappers.h"
#include "eeprom.h"
#ifdef TAP_DANCE_ENABLE
  #include "tap_dances.h"
#endif


enum layer_number {
    _WINBASE = 0,
    _COLBASE,
    _MACBASE,
    _QWERTY,
    _GAMER,
    _GAMR1,
    _GAMR2,
    _NGMR,
    _NUMB,
    _MNMB,
    _SYMB,
    _FUNC,
    _MDIA,
    _MEME
};

// Check to see which keyboard you're using, and define the PLACEHOLDER_SAFE_RANGE based on that.
#if defined(KEYBOARD_fingerpunch_fpm101) \
 || defined(KEYBOARD_fingerpunch_ffkb)
#    define PLACEHOLDER_SAFE_RANGE QK_USER
#else
#    define PLACEHOLDER_SAFE_RANGE SAFE_RANGE
#endif


enum userspace_custom_keycodes {
  KC_MACBASE = PLACEHOLDER_SAFE_RANGE,   //KC_MACBASE = SAFE_RANGE,
  KC_QWERTY,
  KC_WINBASE,
  KC_COLBASE,
  KC_GAMER,
  KC_GAMR1,
  KC_GAMR2,
  NUMB,
  MNMB,
  SYMB,
  FUNC,
  MDIA,
  RGBRST,
  MAKEK,
  MAKEKF,
  BUZY,
  PFWD,
  PBWD,
  SHRUG,
  SPAM,
  SAFE_RANGE_KEYMAP    //SAFE_RANGE_KEYMAP
};


#if RGBLIGHT_ENABLE
uint8_t RGB_current_mode;

#endif
