// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap.h"

enum custom_layers {
     _MAIN,
     _LOWER,
     _RAISE,
     _ADJUST,
};

enum custom_keycodes {
    SMTD_KEYCODES_BEGIN = SAFE_RANGE,
    CKC_A,
    CKC_S,
    CKC_D,
    CKC_F,
    CKC_J,
    CKC_K,
    CKC_L,
    CKC_SCLN,
    SMTD_KEYCODES_END,
};

#include "sm_td.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐                            ┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐
     KC_ESCAPE, KC_1,    KC_2,     KC_3,     KC_4,     KC_5,                                  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
  //├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,
  //├────-────┼──────-──┼────-────┼────-────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_LCTL,  CKC_A,    CKC_S,    CKC_D,    CKC_F,    KC_G,                                  KC_H,     CKC_J,    CKC_K,    CKC_L,    CKC_SCLN, KC_QUOT,
  //├──────-──┼─────-───┼────-────┼─────-───┼───-─────┼───-─────┼───-─────┐        ┌───-─────┼────-────┼───-─────┼─────-───┼─────-───┼─────-───┼───-─────┤
     KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_BSPC,           KC_ENT,   KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
  //└───-─────┴─────-───┴──────-──┴───┬──-──┴───┬──-──┴───┬──-──┴───┬─-───┘        └─-──┬────┴─-──┬────┴──-─┬────┴──-─┬────┴─-───────┴────-────┴──-──────┘
                                       KC_LGUI,  TL_LOWR,  KC_SPC,                       KC_BSPC,  TL_UPPR,  KC_RALT
                                   // └─────-───┴───-─────┴─────-───┘                   └──────-──┴───-─────┴─────-───┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐                            ┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐
     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  //├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_NO,    KC_NO,    KC_HOME,  KC_UP,    KC_END,   LSFT(KC_7),                            PIPE,    KC_KP_SLASH, BSLASH, KC_GRAVE, HSHTG,    KC_NO,
  //├────-────┼──────-──┼────-────┼────-────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     _______,  KC_NO,    KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_MINUS,                              UNDRSC,   KC_LPRN,  KC_RPRN,  LCRLBRC,  RCRLBRC,  KC_NO,
  //├──────-──┼─────-───┼────-────┼─────-───┼───-─────┼───-─────┼───-─────┐        ┌───-─────┼────-────┼───-─────┼─────-───┼─────-───┼─────-───┼───-─────┤
     _______,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_KP_PLUS, _______,         _______,  KC_EQUAL, LSQRBRC,  RSQRBRC,  LTHAN,    GTHAN,    _______,
  //└───-─────┴─────-───┴──────-──┴───┬──-──┴───┬──-──┴───┬──-──┴───┬─-───┘        └─-──┬────┴─-──┬────┴──-─┬────┴──-─┬────┴─-───────┴────-────┴──-──────┘
                                       _______, _______, _______,                        _______,  _______, _______
                                   // └─────-───┴───-─────┴─────-───┘                   └──────-──┴───-─────┴─────-───┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐                            ┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐
     KC_F12,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                                 KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,  
  //├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     RGB_TOG,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PSCR,
  //├────-────┼──────-──┼────-────┼────-────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     RGB_RMOD, RGB_VAD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  //├──────-──┼─────-───┼────-────┼─────-───┼───-─────┼───-─────┼───-─────┐        ┌───-─────┼────-────┼───-─────┼─────-───┼─────-───┼─────-───┼───-─────┤
     RGB_MOD,  RGB_VAI,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    _______,           _______,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  //└───-─────┴─────-───┴──────-──┴───┬──-──┴───┬──-──┴───┬──-──┴───┬─-───┘        └─-──┬────┴─-──┬────┴──-─┬────┴──-─┬────┴─-───────┴────-────┴──-──────┘
                                        _______, _______, _______,                        _______,  _______, _______
                                   // └─────-───┴───-─────┴─────-───┘                   └──────-──┴───-─────┴─────-───┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐                            ┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐
     QK_BOOT,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_SLEP,
  //├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_NO,    KC_NO,    KC_WH_U,  KC_MS_U,  KC_WH_D,  KC_NO,                                 KC_NO,    KC_BTN4,  KC_BTN5,  KC_NO,    KC_NO,    KC_NO,
  //├────-────┼──────-──┼────-────┼────-────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_NO,    KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,                                 KC_NO,    KC_BTN1,  KC_BTN2,  KC_NO,    KC_NO,    KC_NO,
  //├──────-──┼─────-───┼────-────┼─────-───┼───-─────┼───-─────┼───-─────┐        ┌───-─────┼────-────┼───-─────┼─────-───┼─────-───┼─────-───┼───-─────┤
     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    _______,           _______,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  //└───-─────┴─────-───┴──────-──┴───┬──-──┴───┬──-──┴───┬──-──┴───┬─-───┘        └─-──┬────┴─-──┬────┴──-─┬────┴──-─┬────┴─-───────┴────-────┴──-──────┘
                                        _______, _______, _______,                        _______,  _______, _______
                                   // └─────-───┴───-─────┴─────-───┘                   └──────-──┴───-─────┴─────-───┘
  ),
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_smtd(keycode, record)) {
        return false;
    }
    
    return true;
}

void on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
    switch (keycode) {
        SMTD_MT(CKC_A, KC_A, KC_LEFT_GUI)
        SMTD_MT(CKC_S, KC_S, KC_LEFT_ALT)
        SMTD_MT(CKC_D, KC_D, KC_LEFT_CTRL)
        SMTD_MT(CKC_F, KC_F, KC_LSFT)
        
        SMTD_MT(CKC_J, KC_J, KC_RSFT)
        SMTD_MT(CKC_K, KC_K, KC_RIGHT_CTRL)
        SMTD_MT(CKC_L, KC_L, KC_LEFT_ALT)
        SMTD_MT(CKC_SCLN, KC_SCLN, KC_RIGHT_GUI)
    }
}

// uint32_t get_smtd_timeout(uint16_t keycode, smtd_timeout timeout) {
//     switch (keycode) {
//         case CKC_A:
//             if (timeout == SMTD_TIMEOUT_TAP) return 300;
//     }

//     return get_smtd_timeout_default(timeout);
// }
