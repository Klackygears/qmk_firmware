#include QMK_KEYBOARD_H

#include "joystick.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.


enum layers {
    _UNE
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_UNE] = LAYOUT(
              KC_1
  )
};


//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F4, 0, 512, 1023),
    [1] = JOYSTICK_AXIS_IN(F5, 0, 512, 1023)
};
/*
#ifdef ANALOG_JOYSTICK_ENABLE
static uint8_t precision_val = 70;
static uint8_t axesFlags = 0;
enum axes {
    Precision = 1,
    Axis1High = 2,
    Axis1Low = 4,
    Axis2High = 8,
    Axis2Low = 16
};
#endif */
/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
#ifdef ANALOG_JOYSTICK_ENABLE
        // virtual joystick
#    if JOYSTICK_AXES_COUNT > 1
        case KC_P8:
            if (record->event.pressed) {
                axesFlags |= Axis2Low;
            } else {
                axesFlags &= ~Axis2Low;
            }
            joystick_status.status |= JS_UPDATED;
            break;
        case KC_P2:
            if (record->event.pressed) {
                axesFlags |= Axis2High;
            } else {
                axesFlags &= ~Axis2High;
            }
            joystick_status.status |= JS_UPDATED;
            break;
#    endif
        case KC_P4:
            if (record->event.pressed) {
                axesFlags |= Axis1Low;
            } else {
                axesFlags &= ~Axis1Low;
            }
            joystick_status.status |= JS_UPDATED;
            break;
        case KC_P6:
            if (record->event.pressed) {
                axesFlags |= Axis1High;
            } else {
                axesFlags &= ~Axis1High;
            }
            joystick_status.status |= JS_UPDATED;
            break;
        case KC_P5:
            if (record->event.pressed) {
                axesFlags |= Precision;
            } else {
                axesFlags &= ~Precision;
            }
            joystick_status.status |= JS_UPDATED;
            break;
#endif
    }
    return true;
}
 */
