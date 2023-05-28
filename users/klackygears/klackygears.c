#include "klackygears.h"

bool is_busy_toggled = false;
uint16_t repeat_press_timer;
uint16_t repeat_maus_timer;
static uint16_t mute_hold_timer = 0;  //create a timer variable

#ifdef AUDIO_ENABLE
  float imperial[][2] = SONG(IMPERIAL_MARCH);
  float ztreasure[][2] = SONG(ZELDA_TREASURE);
  float victory[][2] = SONG(VICTORY_FANFARE_SHORT);
  float mush[][2] = SONG(MARIO_MUSHROOM);
  float coin[][2] = SONG(COIN_SOUND);
  float rroll[][2] = SONG(RICK_ROLL);
  float oneup[][2] = SONG(ONE_UP_SOUND);
  float windo[][2] = SONG(UNICODE_WINDOWS);
#endif

__attribute__ ((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed

    switch (keycode) {
        case KC_MACBASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_MACBASE);
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(coin);
                #endif
            }
            break;

        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(windo);
                #endif
            }
            break;

        case KC_WINBASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_WINBASE);
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(imperial);
                #endif
            }
            break;

        case KC_COLBASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLBASE);
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(oneup);
                #endif
            }
            break;

        case KC_GAMER:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMER);
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(rroll);
                #endif
            }
            break;

        case KC_GAMR1:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMR1);
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(victory);
                #endif
            }
            break;

        case KC_GAMR2:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMR2);
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(mush);
                #endif
            }
            break;
        case RGBRST:

      #ifdef RGBLIGHT_ENABLE
            if (record->event.pressed) {
                eeconfig_update_rgblight_default();
                rgblight_enable();
            }
      #endif
            break;

        case MAKEK:
            if (record->event.pressed) {
                SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP);
            }
            break;

        case MAKEKF:
            if (!record->event.pressed) {
                SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP ":flash");
            }

            break;

        case SHRUG:
            if (record->event.pressed) {
                SEND_STRING(":Shrug:");
                // send_unicode_hex_string(0x2122);
            }
            break;

        case SPAM:
            #ifdef MOUSEKEY_ENABLE
           {
            static uint16_t tap_hold_timer;
            if (record->event.pressed) {
                #ifdef AUDIO_ENABLE
                 PLAY_SONG(ztreasure);
                #endif
                tap_hold_timer = timer_read();
                register_code(KC_BTN1);
            } else {
                unregister_code(KC_BTN1);
                // if held for less than 300ms (0.3 seconds)
                // then toggle auto tap
                if (timer_elapsed(tap_hold_timer) < 300) {
                    is_busy_toggled ^= true; // toggles state
                    repeat_maus_timer = timer_read() + 1000000;
                } else {
                    is_busy_toggled = false;
                }
            }
            return false;
           }
            #else

            if (record->event.pressed) {
                register_code(KC_S);
            }

            #endif

            break;

        case PFWD:
           {
            static uint16_t run_timer;
            if (record->event.pressed) {
                run_timer = timer_read();
                register_code(KC_W);
              } else {
                if (timer_elapsed(run_timer) > 4000) {
                } else {
                    unregister_code(KC_W);
                }
              }
              return false;
           }
              break;

           case PBWD:
           {
            if (record->event.pressed) {
                register_code(KC_S);
              } else {
                  unregister_code(KC_S);
                  unregister_code(KC_W);
                }
              return false;
           }
            break;

           case M_TEAMS:
            if (record->event.pressed) {                           //when keycode MUTE_TEAMS is pressed
             mute_hold_timer = timer_read();                       //mark the time the key was pressed
             tap_code16(LCTL(LSFT(KC_M)));                         //tap Ctrl + Shift + M (mute shortcut)
           } else {                                                //when keycode MUTE_TEAMS is released
            if (timer_elapsed(mute_hold_timer) > MUTE_HOLD_DELAY)  //if held longer than MUTE_HOLD_DELAY
                tap_code16(LCTL(LSFT(KC_M)));                      //tap the mute shortcut again
           }                                                       //otherwise do nothing
            break;
    }
    return process_record_secrets(keycode, record);
    //return true;
}

void matrix_scan_user(void) {

    if (is_busy_toggled && timer_elapsed(repeat_maus_timer) > 500) {
        repeat_maus_timer = timer_read() + 1000000;
        tap_code(KC_BTN1);
    }
}

