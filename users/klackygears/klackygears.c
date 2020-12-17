#include "klackygears.h"

bool is_busy_toggled = false;
uint16_t repeat_press_timer;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    /*
     if (!process_record_dynamic_macro(keycode, record)) {
            return false;
        }
    */
    switch (keycode) {
        case KC_MACBASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_MACBASE);
            }
            break;

        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            break;

        case KC_WINBASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_WINBASE);
            }
            break;

        case KC_GAMER:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMER);
            }
            break;

        case KC_GAMR1:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMR1);
            }
            break;

        case KC_GAMR2:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMR2);
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

        case BUZY:
           {
            static uint16_t tap_hold_timer;
            if (record->event.pressed) {
                tap_hold_timer = timer_read();
                register_code(KC_UP);
            } else {
                unregister_code(KC_UP);
                // if held for less than 300ms (0.3 seconds)
                // then toggle auto tap
                if (timer_elapsed(tap_hold_timer) < 300) {
                    is_busy_toggled ^= true; // toggles state
                    repeat_press_timer = timer_read() + rand();
                } else {
                    is_busy_toggled = false;
                }
            }
            break;
           }
    }

    return true;
}

void matrix_scan_user(void) {
    if (is_busy_toggled && timer_elapsed(repeat_press_timer) > 500) {
        repeat_press_timer = timer_read() + rand() % 30;
        tap_code(KC_UP);
    }
}
