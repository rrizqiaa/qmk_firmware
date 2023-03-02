#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬───┬───┬───┐
     * │Ctrl│ C │ V │Win│
     * └────┴───┴───┴───┘
     */
    [_QWERTY] = LAYOUT(
       KC_LCTL, KC_C, KC_V, KC_LGUI
    )
};
