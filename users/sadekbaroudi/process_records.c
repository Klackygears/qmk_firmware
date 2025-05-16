#include "sadekbaroudi.h"
#include "casemodes.h"
#if defined(USERSPACE_RGBLIGHT_ENABLE)
#include "rgb_stuff.h"
#endif
#ifdef HAPTIC_ENABLE
#include "drivers/haptic/DRV2605L.h"
#endif

 // for alternating between 45 degree angle routing and free angle routing with one key
bool kicad_free_angle_routing = false;

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

__attribute__((weak)) bool process_record_secrets(uint16_t keycode, keyrecord_t *record) { return true; }

// Defines actions tor my global custom keycodes. Defined in sadekbaroudi.h file
// Then runs the _keymap's record handler if not processed here
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    #ifdef CASEMODES_ENABLE
    // Process case modes
    if (!process_case_modes(keycode, record)) {
        return false;
    }
    // If console is enabled, it will print the matrix position and status of each key pressed
    #endif

    if (!(process_record_keymap(keycode, record) && process_record_secrets(keycode, record)
// #ifdef USERSPACE_RGB_MATRIX_ENABLE
//         && process_record_user_rgb_matrix(keycode, record)
// #endif
#ifdef USERSPACE_RGBLIGHT_ENABLE
        && process_record_user_rgb_light(keycode, record)
#endif
    && true)) {
        return false;
    }

    switch (keycode) {
        case KC_RGB_T:  // This allows me to use underglow as layer indication, or as normal
#if defined(USERSPACE_RGBLIGHT_ENABLE) || defined(USERSPACE_RGB_MATRIX_ENABLE)
            if (record->event.pressed) {
                userspace_config.rgb_layer_change ^= 1;
                xprintf("rgblight layer change [EEPROM]: %u\n", userspace_config.rgb_layer_change);
                eeconfig_update_user(userspace_config.raw);
                if (userspace_config.rgb_layer_change) {
// #    if defined(USERSPACE_RGBLIGHT_ENABLE) && defined(USERSPACE_RGB_MATRIX_ENABLE)
//                     USERSPACE_RGBLIGHT_ENABLE_noeeprom();
// #    endif
                    layer_state_set(layer_state);  // This is needed to immediately set the layer color (looks better)
                } else {
// #    if defined(USERSPACE_RGBLIGHT_ENABLE) && defined(USERSPACE_RGB_MATRIX_ENABLE)
//                     rgblight_disable_noeeprom();
// #    endif
#    if defined(USERSPACE_RGBLIGHT_ENABLE)
                    rgblight_set_hsv_and_mode(userspace_config.hue, userspace_config.sat, userspace_config.val, userspace_config.mode);
#    endif
                    ;
                }
            }
#endif  // USERSPACE_RGBLIGHT_ENABLE
            break;
        case KC_RGB_BLT:  // This enables the base layer as a static color, or allows you to override using RGB
#if defined(USERSPACE_RGBLIGHT_ENABLE) || defined(USERSPACE_RGB_MATRIX_ENABLE)
            if (record->event.pressed) {
                userspace_config.rgb_base_layer_override ^= 1;
                xprintf("rgblight base layer override change [EEPROM]: %u\n", userspace_config.rgb_base_layer_override);
                eeconfig_update_user(userspace_config.raw);
                if (userspace_config.rgb_base_layer_override) {
// #    if defined(USERSPACE_RGBLIGHT_ENABLE) && defined(USERSPACE_RGB_MATRIX_ENABLE)
//                     USERSPACE_RGBLIGHT_ENABLE_noeeprom();
// #    endif
                    layer_state_set(layer_state);  // This is needed to immediately set the layer color (looks better)
// #    if defined(USERSPACE_RGBLIGHT_ENABLE) && defined(USERSPACE_RGB_MATRIX_ENABLE)
//                 } else {
//                     rgblight_disable_noeeprom();
// #    endif
                }
            }
#endif  // USERSPACE_RGBLIGHT_ENABLE
            break;

#if defined(USERSPACE_RGBLIGHT_ENABLE) || defined(USERSPACE_RGB_MATRIX_ENABLE)
        case RGB_TOG:
            // Split keyboards need to trigger on key-up for edge-case issue
#    ifndef SPLIT_KEYBOARD
            if (record->event.pressed) {
#    else
            if (!record->event.pressed) {
#    endif
#    if defined(USERSPACE_RGBLIGHT_ENABLE) && !defined(RGBLIGHT_DISABLE_KEYCODES)
                rgblight_toggle();
#    endif
// #    if defined(USERSPACE_RGB_MATRIX_ENABLE) && !defined(RGB_MATRIX_DISABLE_KEYCODES)
//                 rgb_matrix_toggle();
// #    endif
            }
            return false;
            break;
        case RGB_MODE_FORWARD ... RGB_MODE_GRADIENT:  // quantum_keycodes.h L400 for definitions
            if (record->event.pressed) {
                xprintf("RGB: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
                bool is_eeprom_updated = false;

                if (userspace_config.rgb_layer_change) {
#    if defined(USERSPACE_RGBLIGHT_ENABLE) && !defined(RGBLIGHT_DISABLE_KEYCODES)
                    // For some reason, this breaks setting base layer colors on the draculad, need to comment this line out
                    rgblight_set_hsv_and_mode(userspace_config.hue, userspace_config.sat, userspace_config.val, userspace_config.mode);
#    endif
                }

// #    if defined(USERSPACE_RGB_MATRIX_ENABLE) && defined(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
//                 if (userspace_config.rgb_matrix_idle_anim) {
//                     userspace_config.rgb_matrix_idle_anim = false;
//                     xprintf("RGB Matrix Idle Animation [EEPROM]: %u\n", userspace_config.rgb_matrix_idle_anim);
//                     is_eeprom_updated = true;
//                 }
// #    endif
                if (is_eeprom_updated) {
                    eeconfig_update_user(userspace_config.raw);
                }
            }
            if (!record->event.pressed) {
#    if defined(USERSPACE_RGBLIGHT_ENABLE) && !defined(RGBLIGHT_DISABLE_KEYCODES)
                rgb_set_user_config_from_current_values();
#    endif
            }
            break;
#endif
        case C_CAPSWORD:
            // NOTE: if you change this behavior, may want to update in keymap.c for COMBO behavior
            #ifdef CASEMODES_ENABLE
            if (record->event.pressed) {
                enable_caps_word();
            }
            #endif
            break;
        case C_HYPHENCASE:
            #ifdef CASEMODES_ENABLE
            if (record->event.pressed) {
                enable_xcase_with(KC_MINS);
            }
            #endif
            break;
        case C_ANYCASE:
            #ifdef CASEMODES_ENABLE
            if (record->event.pressed) {
                enable_xcase();
            }
            #endif
            break;
        case C_UNDERSCORECASE:
            #ifdef CASEMODES_ENABLE
            if (record->event.pressed) {
                enable_xcase_with(KC_UNDS);
            }
            #endif
            break;
        // COMMENT TO DISABLE MACROS
        case M_KI_R_SWAP:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_LCTL);
                SEND_STRING(SS_TAP(X_COMM) SS_DELAY(300));
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);
                // If we're in free angle routing, we tap down to go back to 45 degree angle routing
                if (kicad_free_angle_routing) {
                    SEND_STRING(SS_TAP(X_DOWN) SS_TAP(X_ENTER));
                } else {
                    SEND_STRING(SS_TAP(X_UP) SS_TAP(X_ENTER));
                }
                kicad_free_angle_routing = !kicad_free_angle_routing;
            }
            break;
        case M_KI_R_ANGLE:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_LCTL);
                SEND_STRING(SS_TAP(X_COMM) SS_DELAY(300));
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);
                SEND_STRING(SS_TAP(X_UP) SS_TAP(X_ENTER));
            }
            break;
        case M_KI_R_FREE:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_LCTL);
                SEND_STRING(SS_TAP(X_COMM) SS_DELAY(300));
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);
                SEND_STRING(SS_TAP(X_DOWN) SS_TAP(X_ENTER));
            }
            break;
        case L_GREP:
            if (record->event.pressed) {
                SEND_STRING("grep -rn \"");
            } else {
                // when keycode is released
            }
            break;
        case L_FIND:
            if (record->event.pressed) {
                SEND_STRING("find . -name \"");
            } else {
                // when keycode is released
            }
            break;
        case L_GITCOMMIT:
            if (record->event.pressed) {
                SEND_STRING("git commit -a -m \"\""SS_TAP(X_LEFT));
            } else {
                // when keycode is released
            }
            break;
        case N_DEL_LINE:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_END));
                register_code(KC_LSFT);
                SEND_STRING(SS_TAP(X_HOME));
                unregister_code(KC_LSFT);
            } else {
                // when keycode is released
            }
            break;
        case N_SEL_LINE:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_END));
                register_code(KC_LSFT);
                SEND_STRING(SS_TAP(X_HOME));
                unregister_code(KC_LSFT);
            }
            break;
        case P_ANGBRKT:
            if (record->event.pressed) {
                SEND_STRING("<>"SS_TAP(X_LEFT));
            } else {
                // when keycode is released
            }
            break;
        case P_PAREN:
            if (record->event.pressed) {
                SEND_STRING("()"SS_TAP(X_LEFT));
            } else {
                // when keycode is released
            }
            break;
        case P_CURLY:
            if (record->event.pressed) {
                SEND_STRING("{}"SS_TAP(X_LEFT));
            } else {
                // when keycode is released
            }
            break;
        case P_BRKT:
            if (record->event.pressed) {
                SEND_STRING("[]"SS_TAP(X_LEFT));
            } else {
                // when keycode is released
            }
            break;
        case P_ARROW:
            if (record->event.pressed) {
                SEND_STRING("->");
            } else {
                // when keycode is released
            }
            break;
        case E_ROBOT:
            if (record->event.pressed) {
                SEND_STRING("d[o_0]b");
            } else {
                // when keycode is released
            }
            break;
        case E_CAT:
            if (record->event.pressed) {
                SEND_STRING("=^..^=");
            } else {
                // when keycode is released
            }
            break;
        case G_GOD_ON:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                SEND_STRING(SS_TAP(X_ENTER));
                unregister_code(KC_LSFT);
                SEND_STRING("GOD MODE ENGAGED"SS_TAP(X_ENTER));
            } else {
                // when keycode is released
            }
            break;
        case G_GOD_OFF:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                SEND_STRING(SS_TAP(X_ENTER));
                unregister_code(KC_LSFT);
                SEND_STRING("GOD MODE DISENGAGED"SS_TAP(X_ENTER));
            } else {
                // when keycode is released
            }
            break;
        case G_PULLING:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ENTER)"I am pulling, play safe"SS_TAP(X_ENTER));
            } else {
                // when keycode is released
            }
            break;
        case G_PUSH:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ENTER)"Push the lane out"SS_TAP(X_ENTER));
            } else {
                // when keycode is released
            }
            break;
        // COMMENT TO DISABLE MACROS
    }
    return true;
}
