#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum honeycomb_layers {
	_NORM,
	_FUSIOND,
    _FUSIONS
};

// Macro definitions for readability
enum honeycomb_keycodes {
	HW = SAFE_RANGE,
	COPY,
	PASTA,
    FORBIT
};

extern int8_t encoderValue;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_NORM] = LAYOUT( /* Base layout, put whatever defaults. */
		HW,      COPY,    PASTA,   KC_MUTE,
		KC_4,    KC_5,    KC_6,    KC_7,
        KC_8,    KC_9,    KC_A,    TO(_FUSIONS),
		KC_C,    KC_D,    KC_E,    TO(_FUSIOND)
	),

	[_FUSIOND] = LAYOUT( /* Alternate layer */
		_______, _______, FORBIT,  KC_BTN3,
		_______, _______, _______, _______,
		_______, _______, _______, _______,
		_______, _______, _______, _______
	),

	[_FUSIONS] = LAYOUT( /* Alternate layer */
		KC_X,    KC_P,    FORBIT,  KC_BTN3,
		KC_C,    _______, _______, _______,
		_______, _______, _______, _______,
		_______, _______, _______, _______
	)
};

report_mouse_t currentReport = {};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	//uint8_t layer = biton32(layer_state);  // get the current layer

	// Basic example functions
	switch (keycode) {
		case HW:
			if (record->event.pressed) {
					SEND_STRING("Hello, world!");
				} else {
					SEND_STRING("Goodbye, cruel world!");
				}
			break;
			case COPY:
				if (record->event.pressed) {
					tap_code16(LCTL(KC_C)); // Replace with tap_code16(LCMD(KC_C)) to enable for Mac
				}
			break;
			case PASTA:
				if (record->event.pressed) {
					tap_code16(LCTL(KC_V)); // Replace with tap_code16(LCMD(KC_V)) to enable for Mac
				}
			break;
            case FORBIT:
            if (record->event.pressed) {
                // on keydown
                register_code16(KC_LSFT);
                register_code16(KC_BTN1);
            } else {
                // on keyup
                unregister_code16(KC_BTN1);
                unregister_code16(KC_LSFT);
                }
            break;
		return false;
	}
	return true;
};


void matrix_scan_user(void) {
	/* Leaving some LED stuff in here in comment form so you can see how to use it.
    if (shiftLED || capsLED){
		red_led_on;
    } else {
		red_led_off;
    }
    if (numLED){
		grn_led_on;
    } else {
		grn_led_off;
    }
    if (mouseLED){
		blu_led_on;
    } else {
		blu_led_off;
	}*/
    if(IS_LAYER_ON(_FUSIOND) || IS_LAYER_ON(_FUSIOND)) {
	    while (encoderValue < 0){
		    tap_code(KC_WH_D);
	    	encoderValue++;
	    }
	    while (encoderValue > 0){
		    tap_code(KC_WH_U);
		    encoderValue--;
	    }
    } else {
    	    while (encoderValue < 0){
		    tap_code(KC_VOLD);
	    	encoderValue++;
	    }
	    while (encoderValue > 0){
		    tap_code(KC_VOLU);
		    encoderValue--;
         }
    }
};
