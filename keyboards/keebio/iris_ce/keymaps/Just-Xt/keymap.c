// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap.h"

#ifdef TAP_DANCE_ENABLE
   #include "tapdance.c"
#endif

#ifdef COMBO_ENABLE
   #include "combo.c"
#endif

enum custom_layers {
     _MAIN,
     _LOWER,
     _RAISE,
     _ADJUST,
     _GAMING
};

void keyboard_post_init_user(void) {
   
  #ifdef TAP_DANCE_ENABLE
  install_tap_dance_entries();
  #endif
   
  #ifdef COMBO_ENABLE
  install_combo_entries();
  #endif
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐                            ┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐
     KC_ESCAPE, KC_1,    KC_2,     KC_3,     KC_4,     KC_5,                                  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
  //├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     TD(1),
  //├────-────┼──────-──┼────-────┼────-────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
  //├──────-──┼─────-───┼────-────┼─────-───┼───-─────┼───-─────┼───-─────┐        ┌───-─────┼────-────┼───-─────┼─────-───┼─────-───┼─────-───┼───-─────┤
     KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_BSPC,           KC_ENT,   KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
  //└───-─────┴─────-───┴──────-──┴───┬──-──┴───┬──-──┴───┬──-──┴───┬─-───┘        └─-──┬────┴─-──┬────┴──-─┬────┴──-─┬────┴─-───────┴────-────┴──-──────┘
                                       KC_LGUI,  TL_LOWR,  TD(0),                       KC_BSPC,  TL_UPPR,  KC_RALT
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
     KC_NO,    KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,                                 KC_NO,    KC_BTN1,  KC_BTN2,  KC_NO,    KC_NO,    KC_F13,
  //├──────-──┼─────-───┼────-────┼─────-───┼───-─────┼───-─────┼───-─────┐        ┌───-─────┼────-────┼───-─────┼─────-───┼─────-───┼─────-───┼───-─────┤
     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    _______,           _______,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_F14,
  //└───-─────┴─────-───┴──────-──┴───┬──-──┴───┬──-──┴───┬──-──┴───┬─-───┘        └─-──┬────┴─-──┬────┴──-─┬────┴──-─┬────┴─-───────┴────-────┴──-──────┘
                                        _______, _______, _______,                        _______,  _______, _______
                                   // └─────-───┴───-─────┴─────-───┘                   └──────-──┴───-─────┴─────-───┘
  ),

  [_GAMING] = LAYOUT(
  //┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐                            ┌────────-┬────────-┬───────-─┬─────-───┬────-────┬──────-──┐
     KC_ESC,   KC_NO,    KC_1,     KC_2,     KC_3,     KC_4,                                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  //├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_NO,    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,                                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  //├────-────┼──────-──┼────-────┼────-────┼──-──────┼────-────┤                            ├─────-───┼────-────┼──-──────┼───-─────┼──-──────┼────-────┤
     KC_CAPS,  KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,                                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_F15,
  //├──────-──┼─────-───┼────-────┼─────-───┼───-─────┼───-─────┼───-─────┐        ┌───-─────┼────-────┼───-─────┼─────-───┼─────-───┼─────-───┼───-─────┤
     KC_LALT,  KC_LSFT,  KC_X,     KC_NO,    KC_C,     KC_B,     KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_F16,
  //└───-─────┴─────-───┴──────-──┴───┬──-──┴───┬──-──┴───┬──-──┴───┬─-───┘        └─-──┬────┴─-──┬────┴──-─┬────┴──-─┬────┴─-───────┴────-────┴──-──────┘
                                       KC_LGUI,  KC_LCTL,  KC_SPC,                       KC_NO,    KC_NO,    KC_NO
                                   // └─────-───┴───-─────┴─────-───┘                   └──────-──┴───-─────┴─────-───┘
  )
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    const bool caps_lock = host_keyboard_led_state().caps_lock;
    const uint8_t layer = get_highest_layer(layer_state);
    HSV matrix_hsv = rgb_matrix_get_hsv();
    
   if (!caps_lock && !layer)
      return false;

   for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
      for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
         const uint8_t index = g_led_config.matrix_co[row][col];

         if (index < led_min || index >= led_max)
               continue;

         HSV hsv;
         hsv.s = 255;
         hsv.v = matrix_hsv.v;

         uint16_t kc = layer 
            ? keymap_key_to_keycode(layer, (keypos_t){col,row}) 
            : -1; // Leave at -1 because 0 is KC_NO!
            
         switch (kc) {
            case QK_BOOT:
               hsv.h = 0;
               break;
               
            case KC_RIGHT ... KC_UP:
               hsv.h = 135;
               break;
               
            case KC_HOME ... KC_END:
               hsv.h = 160;
               break;
               
            case KC_MS_U ... KC_WH_R:
               hsv.h = 222;
               break;
               
            case KC_F1 ... KC_F12:
               hsv.h = 148;
               break;
               
            case KC_F13 ... KC_F24:
               hsv.h = 85;
               break;
               
            case KC_NO:
               hsv.v = 0;
               break;
            
            default:
               if (caps_lock 
                  && ((row == 0 && col == 5) || (row == 5 && col == 5)))
                  // sets hue to opposite color on hsv circle, and cuts saturation in half
                  hsv.h = matrix_hsv.h+128, hsv.s >>= 1,
                  hsv.v = RGB_MATRIX_MAXIMUM_BRIGHTNESS;
               else
                  continue;
         }

         RGB rgb = hsv_to_rgb(hsv);
         rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
      }
   }

   return false;
}
