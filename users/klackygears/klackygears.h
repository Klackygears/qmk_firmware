#pragma once

#include QMK_KEYBOARD_H

#include "wrappers.h"
#include "eeprom.h"

#ifdef TAP_DANCE_ENABLE
  #include "tap_dances.h"
#endif
#include "secrets.h"

enum userspace_layers {
    _WINBASE = 0,
    _MACBASE = 0,
    _COLBASE = 0,
    _QWERTY = 0,
    _GAMER,
    _GAMR1,
    _GAMR2,
    _NGMR,
    _NUMB,
    _MNMB,
    _SYMB,
    _FUNC,
    _MDIA,
    _MEME,
    _MAUS,
};


enum userspace_custom_keycodes {
  KC_MACBASE = QK_USER,
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
  M_TEAMS,
  USER_SAFE_RANGE,
};


#if RGBLIGHT_ENABLE
uint8_t RGB_current_mode;

#endif

