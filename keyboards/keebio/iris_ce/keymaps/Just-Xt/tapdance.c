#include QMK_KEYBOARD_H

#define TAP_TAPPING_TERM 200
void install_tap_dance_entries(void) {
   
    vial_tap_dance_entry_t td0 = 
      { KC_SPC, KC_RCTL, KC_NO, KC_NO, 215 };
                                   
    vial_tap_dance_entry_t td1 = 
      { KC_LBRC, KC_RBRC, KC_NO, KC_NO, TAP_TAPPING_TERM };
      
    dynamic_keymap_set_tap_dance(0, &td0); // the first value corresponds to the TD(i) slot
    dynamic_keymap_set_tap_dance(1, &td1);
}
