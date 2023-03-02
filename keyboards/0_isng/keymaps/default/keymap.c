#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬───┬───┬───┐
     * │Ctrl│ C │ V │Win│
     * └────┴───┴───┴───┘
     */
    [0] = LAYOUT(
       KC_LCTL, KC_C, KC_V, KC_LGUI
    )
};


