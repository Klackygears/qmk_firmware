#include "combo.h"

enum combos {
    QUOT_COM,
    COM_DOT,
    OI_RBRC,
    OU_LBRC,
    EI_RPRN,
    EU_LPRN,
    AO_LCBR,
    AE_RCBR,
    PY_ESC,
    UI_AMPR,
    YU_PERC,
    EP_DLR,
    ODOT_HASH,
    ACOM_AT,
    OQUOT_DQT,
    TH_ASTR,
    NT_SLSH,
    NH_PLUS,
    SN_MINS,
    TD_DQT,
    TM_EQL,
    TG_BSLS,
    NC_UNDS,
    UX_GRV,
    EK_TILD,
    KX_CIRC,
    THREENTER,
    SLSHAST,
    MINPLUS,
    DOTEQ,
    NUMBY,
    NUMBHOME,
};

const uint16_t PROGMEM quot_com[]              = {KC_QUOT, KC_COMMA, COMBO_END};
const uint16_t PROGMEM com_dot[]               = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM oi_combo[]              = {KC_O, KC_I, COMBO_END};
const uint16_t PROGMEM ou_combo[]              = {KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM ei_combo[]              = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM eu_combo[]              = {KC_E, KC_U, COMBO_END};
const uint16_t PROGMEM ao_combo[]              = {KC_A, KC_O, COMBO_END};
const uint16_t PROGMEM ae_combo[]              = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM py_combo[]              = {KC_P, KC_Y, COMBO_END};
const uint16_t PROGMEM ui_combo[]              = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM yu_combo[]              = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM ep_combo[]              = {KC_E, KC_P, COMBO_END};
const uint16_t PROGMEM odot_combo[]            = {KC_O, KC_DOT, COMBO_END};
const uint16_t PROGMEM acom_combo[]            = {KC_A, KC_COMMA, COMBO_END};
const uint16_t PROGMEM oquot_combo[]           = {KC_O, KC_QUOT, COMBO_END};
const uint16_t PROGMEM th_combo[]              = {KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM nt_combo[]              = {KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM nh_combo[]              = {KC_N, KC_H, COMBO_END};
const uint16_t PROGMEM sn_combo[]              = {KC_S, KC_N, COMBO_END};
const uint16_t PROGMEM td_combo[]              = {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM tm_combo[]              = {KC_T, KC_M, COMBO_END};
const uint16_t PROGMEM tg_combo[]              = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM nc_combo[]              = {KC_N, KC_C, COMBO_END};
const uint16_t PROGMEM ux_combo[]              = {KC_U, KC_X, COMBO_END};
const uint16_t PROGMEM ek_combo[]              = {KC_E, KC_K, COMBO_END};
const uint16_t PROGMEM kx_combo[]              = {KC_K, KC_X, COMBO_END};
const uint16_t PROGMEM foursslsh_combo[]       = {KC_4, KC_PSLS, COMBO_END};
const uint16_t PROGMEM fourmin_combo[]         = {KC_4, KC_PMNS, COMBO_END};
const uint16_t PROGMEM fourdot_combo[]         = {KC_4, KC_DOT, COMBO_END};
const uint16_t PROGMEM ynumb_combo[]           = {KC_Y, KC_P, KC_DOT, COMBO_END};
const uint16_t PROGMEM endhome_combo[]         = {KC_HOME, KC_END, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
    [QUOT_COM]  = COMBO(quot_com, KC_EXLM),
    [COM_DOT]   = COMBO(com_dot, KC_QUES),
    [EI_RPRN]   = COMBO(ei_combo, KC_RPRN),
    [EU_LPRN]   = COMBO(eu_combo, KC_LPRN),
    [OI_RBRC]   = COMBO(oi_combo, KC_RBRC),
    [OU_LBRC]   = COMBO(ou_combo, KC_LBRC),
    [AO_LCBR]   = COMBO(ao_combo, KC_LCBR),
    [AE_RCBR]   = COMBO(ae_combo, KC_RCBR),
    [PY_ESC]    = COMBO(py_combo, KC_ESC),
    [UI_AMPR]   = COMBO(ui_combo, KC_AMPR),
    [YU_PERC]   = COMBO(yu_combo, KC_PERC),
    [EP_DLR]    = COMBO(ep_combo, KC_DLR),
    [ODOT_HASH] = COMBO(odot_combo, KC_HASH),
    [ACOM_AT]   = COMBO(acom_combo, KC_AT),
    [OQUOT_DQT] = COMBO(oquot_combo, KC_DQT),
    [TH_ASTR]   = COMBO(th_combo, KC_ASTR),
    [NT_SLSH]   = COMBO(nt_combo, KC_SLSH),
    [NH_PLUS]   = COMBO(nh_combo, KC_PLUS),
    [SN_MINS]   = COMBO(sn_combo, KC_MINS),
    [TD_DQT]    = COMBO(td_combo, KC_DQT),
    [TM_EQL]    = COMBO(tm_combo, KC_EQL),
    [TG_BSLS]   = COMBO(tg_combo, KC_BSLS),
    [NC_UNDS]   = COMBO(nc_combo, KC_UNDS),
    [UX_GRV]    = COMBO(ux_combo, KC_GRV),
    [EK_TILD]   = COMBO(ek_combo, KC_TILD),
    [KX_CIRC]   = COMBO(kx_combo, KC_CIRC),
    [SLSHAST]   = COMBO(foursslsh_combo, KC_PAST),
    [MINPLUS]   = COMBO(fourmin_combo, KC_PPLS),
    [DOTEQ]     = COMBO(fourdot_combo, KC_EQL),
    [NUMBY]     = COMBO_ACTION(ynumb_combo),
    [NUMBHOME]   = COMBO_ACTION(endhome_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case NUMBY:
      if (pressed) {
        layer_invert(8);
      }
      break;
    case NUMBHOME:
      if (pressed) {
        layer_invert(8);
      }
      break;
  }
};
