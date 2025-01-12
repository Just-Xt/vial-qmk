#include QMK_KEYBOARD_H

void install_combo_entries(void) {
    vial_combo_entry_t lalt = 
        {{ KC_A, KC_S, KC_NO, KC_NO }, KC_LALT };
    vial_combo_entry_t lctrl = 
        {{ KC_S, KC_D, KC_NO, KC_NO }, KC_LCTL };
    vial_combo_entry_t lsft = 
        {{ KC_D, KC_F, KC_NO, KC_NO }, KC_LSFT };
        
    vial_combo_entry_t rsft = 
        {{ KC_J, KC_K, KC_NO, KC_NO }, KC_RSFT };
    vial_combo_entry_t rctrl = 
        {{ KC_K, KC_L, KC_NO, KC_NO }, KC_RCTL };
    vial_combo_entry_t ralt =
        {{ KC_L, KC_SCLN, KC_NO, KC_NO }, KC_LALT };
        
    vial_combo_entry_t dfjk_caps =
        {{ KC_D, KC_F, KC_J, KC_K }, KC_CAPS };
        
    vial_combo_entry_t set_gaming_layer = 
        {{ KC_F13, KC_F14, KC_NO, KC_NO }, TO(4) };
    vial_combo_entry_t set_base_layer = 
        {{ KC_F15, KC_F16, KC_NO, KC_NO }, TO(0) };
    
    dynamic_keymap_set_combo(0, &lalt);
    dynamic_keymap_set_combo(1, &lctrl);
    dynamic_keymap_set_combo(2, &lsft);
    
    dynamic_keymap_set_combo(3, &rsft);
    dynamic_keymap_set_combo(4, &rctrl);
    dynamic_keymap_set_combo(5, &ralt);
    
    dynamic_keymap_set_combo(6, &dfjk_caps);
    
    dynamic_keymap_set_combo(7, &set_gaming_layer);
    dynamic_keymap_set_combo(8, &set_base_layer);
}


// const uint16_t PROGMEM double_shift_caps[] = {KC_LSFT, KC_RSFT, COMBO_END}; 

// combo_t custom_key_combos[] = {
//     COMBO(double_shift_caps, KC_CAPS)
// };
