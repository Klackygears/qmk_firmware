#pragma once

#include QMK_KEYBOARD_H

#include "wrappers.h"
#include "eeprom.h"
#ifdef TAP_DANCE_ENABLE
  #include "tap_dances.h"
#endif // TAP_DANCE_ENABLE


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
#if defined(KEYBOARD_fingerpunch_ffkb)
#    define PLACEHOLDER_SAFE_RANGE FP_SAFE_RANGE
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
  //DYNAMIC_MACRO_RANGE,
  NEW_SAFE_RANGE    //SAFE_RANGE_KEYMAP
};


/*
#ifdef UNICODEMAP_ENABLE
enum unicode_names {
  BANG,
  IRONY,
  SNEK,
};

const uint32_t PROGMEM unicode_map[] = {
  [BANG]  = 0x203D,  // ‽
  [IRONY] = 0x2E2E,  // ⸮
  [SNEK]  = 0x1F40D, // 🐍
};
#endif // UNICODEMAP_ENABLE
*/


//#include "dynamic_macro.h"



#if RGBLIGHT_ENABLE
uint8_t RGB_current_mode;

#endif
