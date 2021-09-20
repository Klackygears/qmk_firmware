#include "combo.h"

enum combos {
    //DVORAK COMBOs
    DOTP_EXLM,
    COM_DOT,

    EU_RPRN,
    OU_LPRN,
    AU_RBRC,
    OE_LBRC,
    AO_LCBR,
    AE_RCBR,

    PY_ESC,
    UI_AMPR,
    YU_PERC,
    EP_DLR,
    ODOT_HASH,
    ACOM_AT,
    OQUOT_DQT,

    HD_DQT,
    NT_ASTR,
    NH_SLASH,
    RG_BSLS,
    CG_PIPE,
    RC_UNDS,
    GF_MINS,
    MB_GRV,

    WM_RCTL,
    VW_RALT,
    VM_RGUI,

    JK_LCTL,
    QJ_LALT,
    QK_L_GUI,

    TH_DQT,
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

    //COLEMAK COMBOS
    FP_EXLM,
};
//DVORAK COMBOs
//const uint16_t PROGMEM quot_com[]              = {KC_QUOT, KC_COMMA, COMBO_END};
const uint16_t PROGMEM dot_p[]                 = {KC_DOT, KC_P, COMBO_END};
const uint16_t PROGMEM com_dot[]               = {KC_COMMA, KC_DOT, COMBO_END};

const uint16_t PROGMEM oi_combo[]              = {KC_O, KC_I, COMBO_END};
const uint16_t PROGMEM au_combo[]              = {KC_A, KC_U, COMBO_END};
const uint16_t PROGMEM oe_combo[]              = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM eu_combo[]              = {KC_E, KC_U, COMBO_END};
const uint16_t PROGMEM ou_combo[]              = {KC_O, KC_U, COMBO_END};

const uint16_t PROGMEM ao_combo[]              = {KC_A, KC_O, COMBO_END};
const uint16_t PROGMEM ae_combo[]              = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM py_combo[]              = {KC_P, KC_Y, COMBO_END};
const uint16_t PROGMEM ui_combo[]              = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM yu_combo[]              = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM ep_combo[]              = {KC_E, KC_P, COMBO_END};
const uint16_t PROGMEM odot_combo[]            = {KC_O, KC_DOT, COMBO_END};
const uint16_t PROGMEM acom_combo[]            = {KC_A, KC_COMMA, COMBO_END};
const uint16_t PROGMEM oquot_combo[]           = {KC_O, KC_QUOT, COMBO_END};

const uint16_t PROGMEM hd_combo[]              = {KC_H, KC_D, COMBO_END};
const uint16_t PROGMEM nt_combo[]              = {KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM nh_combo[]              = {KC_N, KC_H, COMBO_END};
const uint16_t PROGMEM rg_combo[]              = {KC_R, KC_G, COMBO_END};
const uint16_t PROGMEM cg_combo[]              = {KC_C, KC_G, COMBO_END};
const uint16_t PROGMEM rc_combo[]              = {KC_R, KC_C, COMBO_END};
const uint16_t PROGMEM gf_combo[]              = {KC_G, KC_F, COMBO_END};
const uint16_t PROGMEM tm_combo[]              = {KC_T, KC_M, COMBO_END};
const uint16_t PROGMEM mb_combo[]              = {KC_M, KC_B, COMBO_END};

const uint16_t PROGMEM wm_combo[]              = {KC_W, KC_M, COMBO_END};
const uint16_t PROGMEM vw_combo[]              = {KC_V, KC_W, COMBO_END};
const uint16_t PROGMEM vm_combo[]              = {KC_V, KC_M, COMBO_END};

const uint16_t PROGMEM jk_combo[]              = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM qj_combo[]              = {KC_Q, KC_J, COMBO_END};
const uint16_t PROGMEM qk_combo[]              = {KC_Q, KC_K, COMBO_END};


//const uint16_t PROGMEM sn_combo[]              = {KC_S, KC_N, COMBO_END};
//const uint16_t PROGMEM tg_combo[]              = {KC_T, KC_G, COMBO_END};
//const uint16_t PROGMEM nc_combo[]              = {KC_N, KC_C, COMBO_END};

const uint16_t PROGMEM ux_combo[]              = {KC_U, KC_X, COMBO_END};
const uint16_t PROGMEM ek_combo[]              = {KC_E, KC_K, COMBO_END};
const uint16_t PROGMEM kx_combo[]              = {KC_K, KC_X, COMBO_END};
const uint16_t PROGMEM foursslsh_combo[]       = {KC_4, KC_PSLS, COMBO_END};
const uint16_t PROGMEM fourmin_combo[]         = {KC_4, KC_PMNS, COMBO_END};
const uint16_t PROGMEM fourdot_combo[]         = {KC_4, KC_DOT, COMBO_END};
const uint16_t PROGMEM ynumb_combo[]           = {KC_Y, KC_P, KC_DOT, COMBO_END};
const uint16_t PROGMEM endhome_combo[]         = {KC_HOME, KC_END, COMBO_END};

//COLEMAK COMBOS
const uint16_t PROGMEM fp_combo[]              = {KC_F, KC_P, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
    //DVORAK COMBOs
    [DOTP_EXLM]  = COMBO(dot_p, KC_EXLM),
    [COM_DOT]   = COMBO(com_dot, KC_QUES),

    [EU_RPRN]   = COMBO(eu_combo, KC_RPRN),
    [OU_LPRN]   = COMBO(ou_combo, KC_LPRN),
    [AU_RBRC]   = COMBO(au_combo, KC_RBRC),
    [OE_LBRC]   = COMBO(oe_combo, KC_LBRC),

    [AO_LCBR]   = COMBO(ao_combo, KC_LCBR),
    [AE_RCBR]   = COMBO(ae_combo, KC_RCBR),

    [PY_ESC]    = COMBO(py_combo, KC_ESC),
    [UI_AMPR]   = COMBO(ui_combo, KC_AMPR),
    [YU_PERC]   = COMBO(yu_combo, KC_PERC),
    [EP_DLR]    = COMBO(ep_combo, KC_DLR),
    [ODOT_HASH] = COMBO(odot_combo, KC_HASH),
    [ACOM_AT]   = COMBO(acom_combo, KC_AT),
    [OQUOT_DQT] = COMBO(oquot_combo, KC_DQT),

    [HD_DQT]    = COMBO(hd_combo, KC_DQT),
    [NT_ASTR]   = COMBO(nt_combo, KC_ASTR),
    [NH_SLASH]   = COMBO(nh_combo, KC_SLASH),
    [RG_BSLS]   = COMBO(rg_combo, KC_BSLS),
    [CG_PIPE]   = COMBO(cg_combo, KC_PIPE),
    [RC_UNDS]   = COMBO(rc_combo, KC_UNDS),
    [GF_MINS]   = COMBO(gf_combo, KC_MINS),
    [TM_EQL]    = COMBO(tm_combo, KC_EQL),
    [MB_GRV]    = COMBO(mb_combo, KC_GRV),

    [WM_RCTL]    = COMBO(wm_combo, KC_RCTL),
    [VW_RALT]    = COMBO(vw_combo, KC_RALT),
    [VM_RGUI]    = COMBO(vm_combo, KC_RGUI),

    [JK_LCTL]    = COMBO(jk_combo, KC_LCTL),
    [QJ_LALT]    = COMBO(qj_combo, KC_LALT),
    [QK_L_GUI]    = COMBO(qk_combo, KC_LGUI),


    //[SN_MINS]   = COMBO(sn_combo, KC_MINS),
    //[TD_DQT]    = COMBO(td_combo, KC_DQT),
    //[TG_BSLS]   = COMBO(tg_combo, KC_BSLS),
    //[NC_UNDS]   = COMBO(nc_combo, KC_UNDS),

    [UX_GRV]    = COMBO(ux_combo, KC_GRV),
    [EK_TILD]   = COMBO(ek_combo, KC_TILD),
    [KX_CIRC]   = COMBO(kx_combo, KC_CIRC),
    [SLSHAST]   = COMBO(foursslsh_combo, KC_PAST),
    [MINPLUS]   = COMBO(fourmin_combo, KC_PPLS),
    [DOTEQ]     = COMBO(fourdot_combo, KC_EQL),
    [NUMBY]     = COMBO_ACTION(ynumb_combo),
    [NUMBHOME]   = COMBO_ACTION(endhome_combo),

    //COLEMAK COMBOS
    [FP_EXLM]  = COMBO(fp_combo, KC_EXLM),
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
