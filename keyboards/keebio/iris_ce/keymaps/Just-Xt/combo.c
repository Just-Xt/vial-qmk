#include QMK_KEYBOARD_H

void install_combo_entries(void) {
    vial_combo_entry_t double_shift_caps = 
        {{ KC_LSFT, KC_RSFT, KC_NO, KC_NO }, KC_CAPS };
        
    vial_combo_entry_t set_gaming_layer = 
        {{ KC_F13, KC_F14, KC_NO, KC_NO }, TO(4) };
    vial_combo_entry_t set_base_layer = 
        {{ KC_F15, KC_F16, KC_NO, KC_NO }, TO(0) };
                                   
    dynamic_keymap_set_combo(0, &double_shift_caps);
    dynamic_keymap_set_combo(1, &set_gaming_layer);
    dynamic_keymap_set_combo(2, &set_base_layer);
}


// const uint16_t PROGMEM double_shift_caps[] = {KC_LSFT, KC_RSFT, COMBO_END}; 

// combo_t custom_key_combos[] = {
//     COMBO(double_shift_caps, KC_CAPS)
// };
