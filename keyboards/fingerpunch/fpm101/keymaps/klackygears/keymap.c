#include QMK_KEYBOARD_H
#include "klackygears.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MACBASE] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    KC_ESC,  _______________DVORAK_L1___________________,                                                       _______________DVORAK_R1___________________, KC_BSPC,
    RGB_TOG, _______________DVORAK_L2___________________, _______,                                     _______, _______________DVORAK_R2___________________, RGB_TOG,
    RGB_MOD, _______________MACDVK_L3___________________, M_TEAMS,                                     KC_SCT1, _______________MACDVK_R3___________________, RGB_MOD,
                      _______, ________MAC_THUMB_L______, MO(_MAUS), KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, _______, ________MAC_THUMB_R______, KC_MUTE
),

[_QWERTY] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    KC_ESC,  _________________QWERTY_L1_________________,                                                       _________________QWERTY_R1_________________, KC_BSPC,
    KC_CAPS, _________________QWERTY_L1_________________, MO(_FUNC),                                   _______, _________________QWERTY_R2_________________, KC_ENT,
    KC_LSFT, _________________QWERTY_L1_________________, M_TEAMS,                                     KC_SCT1, _________________QWERTY_R3_________________, KC_RSFT,
                  _______, KC_LGUI, KC_LALT, MO(_MNMB), MO(_SYMB), KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, _______, MO(_SYMB), MO(_MNMB), MO(_MDIA), KC_MUTE
),

[_COLBASE] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    KC_ESC,  _________________COLEMAK_L1________________,                                                       _________________COLEMAK_R1________________, KC_BSPC,
    AU_TOGG, _________________COLEMAK_L2________________, _WINBASE,                                    _______, _________________COLEMAK_R2________________, RGB_TOG,
    CK_TOGG, _________________COLEMAK_L3________________, M_TEAMS,                                     KC_SCT1, _________________COLEMAK_R3________________, RGB_MOD,
                      _______, ________WIN_THUMB_L______, MO(_MAUS), KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, _______, ________WIN_THUMB_R______, KC_MUTE
),

[_WINBASE] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                  TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    KC_TAB,  _______________DVORAK_L1___________________,                                                        _______________DVORAK_R1___________________, KC_BSPC,
    _______, _______________DVORAK_L2___________________, _______,                                      _______, _______________DVORAK_R2___________________, RGB_TOG,
    CK_TOGG, _______________WINDVK_L3___________________, M_TEAMS,                                      KC_SCT1, _______________WINDVK_R3___________________, RGB_MOD,
                      _______, ________WIN_THUMB_L______, MO(_MAUS), KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, _______, ________WIN_THUMB_R______, KC_MUTE
),

[_GAMER] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    KC_TAB,  _________________QWERTY_L1_________________,                                                       _________________QWERTY_R1_________________, KC_BSPC,
    KC_CAPS, _________________QWERTY_L1_________________, _______,                                     _______, _________________QWERTY_R2_________________, KC_ENT,
    KC_LSFT, _________________QWERTY_L1_________________, M_TEAMS,                                     _______, _________________QWERTY_R3_________________, KC_RSFT,
                  _______, KC_LGUI, KC_LALT, MO(_MNMB), MO(_SYMB), KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, _______, MO(_SYMB), MO(_MNMB), MO(_MDIA), KC_MUTE
),

[_SYMB] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    _______, _________________PUNC_L1_ALT_______________,                                                       _________________PUNC_R1___________________, _______,
    _______, _________________PUNC_L3___________________, _______,                                     _______, _________________PUNC_R2___________________, _______,
    RGB_MOD, _________________PUNC_L3_ALT_______________, M_TEAMS,                                     _______, _________________PUNC_R3___________________, _______,
                      _______, KC_NUM,  KC_LSCR, KC_DEL,  _______, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, _______, _______, KC_CAPS, KC_SCT1, _______
),

[_FUNC] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________LYOUT_____________________, EE_CLR,                                    EE_CLR, _________________NUMBER_R__________________, KC_BSPC,
    _______, _____________FUNC_L1_______________________,                                                       _______, _____________FUNC_1_______________, _______,
    _______, ________MAC_MISSION_CTRL__________, LGUI(KC_L), _______,                                  _______, _______, _____________FUNC_2_______________, _______,
    RGB_MOD, _____________FUNC_L3_______________________, M_TEAMS,                                     _______, _______, _____________FUNC_3_______________, _______,
                      _______, _______, _______, _______, _______, _______,    _______,    _______,    _______, KC_CAPS, KC_PSCR, KC_LSCR, _______
),

[_MNMB] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    _______, _________________MACNAV_L1_________________,                                                       _________________NUMB_R1___________________, KC_WINBASE,
    _______, _________________MACNAV_L2_________________, _______,                                     _______, _________________NUMB_R2___________________, _______,
    RGB_MOD, _________________MACNAV_L3_________________, M_TEAMS,                                     _______, _________________NUMB_R3_MAC_______________, _______,
                      _______, _______, _______, _______, _______, _______,    _______,    _______,    _______, RSFT_T(KC_ENT), KC_RSFT, _______, _______
),


[_NUMB] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    _______, _________________WINNAV_L1_________________,                                                       _________________NUMB_R1___________________, KC_WINBASE,
    _______, _________________WINNAV_L2_________________, TO(_MEME),                                   _______, _________________NUMB_R2___________________, _______,
    RGB_MOD, _________________WINNAV_L3_________________, M_TEAMS,                                     _______, _________________NUMB_R3_WIN_______________, _______,
                 _______, _______, TO(_WINBASE), _______, _______, _______,    _______,    _______,    _______, RSFT_T(KC_ENT), KC_RSFT, _______, LCTL(KC_HOME)
),

[_MDIA] = LAYOUT_fpm101_wrapper(
    KC_ESC,  _________________NUMBER_L__________________, MO(_MAUS),                                 TO(_MAUS), _________________NUMBER_R__________________, KC_BSPC,
    _______, _________________LYOUT_____________________,                                                       _________________RGB_1_____________________, RGB_TOG,
    _______, MU_TOGG, _______, _______, _______, CK_UP,   _______,                                     _______, _________________RGB_2_____________________, _______,
    RGB_MOD, MU_NEXT, MU_TOGG, CK_TOGG, CK_RST,  CK_DOWN, M_TEAMS,                                     _______, _________________MEDIA_____________________, _______,
                      _______, _______, _______, _______, _______, _______,    _______,    _______,    _______, _______, _______, _______, _______
),

[_MAUS] = LAYOUT_fpm101_wrapper(
    KC_ACL0, KC_ACL1, KC_ACL2, FP_POINT_DPI_RESET, FP_POINT_DPI_DN, FP_POINT_DPI_UP, _______,                                TO(_WINBASE), _______, _______, _______, _______, _______, KC_BSPC,
    _______, _______, _______, _______, _______, _______,                                                       _______, _______, _______, _______, _______, _______,
    _______, KC_BTN4, KC_BTN3, KC_BTN2, KC_BTN1, _______, _______,                                     _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, LSFT(KC_BTN3), _______, _______,                                     _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______, _______, _______, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, _______, _______, _______, _______, _______
),

[_MEME] = LAYOUT_fpm101_wrapper(
    _______, _________________KC_BLANK__________________, _______,                                     _______, _______, _______, _______, _______, _______, _______,
    _______, _________________KC_BLANK__________________,                                                       _________________KC_BLANK__________________, _______,
    _______, _________________KC_BLANK__________________, _______,                                     _______, _________________KC_BLANK__________________, _______,
    _______, _________________KC_BLANK__________________, TO(_WINBASE),                                _______, _________________KC_BLANK__________________, _______,
                      _______, _______, _______, _______, _______, _______,    _______,    _______,    _______, _______, _______, _______, _______
)


};



#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_WINBASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_MACBASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_QWERTY]  =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_COLBASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_GAMER]   =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_SYMB]    =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_FUNC]    =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_MNMB]    =   { ENCODER_CCW_CW(LCTL(KC_PGUP), LCTL(KC_PGDN)), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_NUMB]    =   { ENCODER_CCW_CW(LCTL(KC_PGUP), LCTL(KC_PGDN)), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [_MDIA]    =   { ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
    [_MAUS]    =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
};
#endif


//make fingerpunch/fpm101:klackygears:flash CONVERT_TO=elite_pi RGB_MATRIX_ENABLE=yes FP_TRACKBALL_ENABLE=yes ENCODER_ENABLE=yes
