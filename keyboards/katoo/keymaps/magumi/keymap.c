#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*LAYOUT 
     *|   Esc |     ` | 1 | 2 | 3 | 4 | 5 | 6    |      | 7 | 8 | 9 | - | = | Backspace |         |   Del   |          
     *|-------------------------------------------      ----------------------------------------------------|
     *|  Home |     Tab | Q | W | E | R | T      |      | Y | U | I | O | P | [ | ] | \ |         | INSERT  |
     *|-------------------------------------------      ----------------------------------------------------|
     *|   End |     CAPSLOCK | A | S | D | F | G |      | H | J | K | L | ; | ' | ENTER |         | VOL + - |
     *|-------------------------------------------      ----------------------------------------------------|
     *|             SHIFT | Z | X | C | V | B    |      | B | N | M | , | . | / | SHIFT    |  UP  |         |
     *|-------------------------------------------      ----------------------------------------------------|
     *|             CTRL | ALT   | SPACE | WIN   |      | SPACE | FN |     CTRL     | LEFT | DOWN | RIGHT   |
     */
    [0] = LAYOUT(
        KC_ESC,  KC_DEL,  KC_2,    KC_MINS, KC_GRV,  KC_1,    KC_EQL,  KC_BSPC, 
        KC_HOME, KC_INS,  KC_P,    KC_TAB,  KC_Q,    KC_LBRC, KC_RBRC, KC_BSLS, 
        KC_END,  KC_MPLY, KC_CAPS, KC_A,    KC_SCLN, KC_QUOT, KC_ENT,  
        KC_LSFT, KC_Z,    KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   
        KC_LCTL, KC_RCTL, KC_LEFT, KC_RGHT, 
        KC_UNDS, KC_PLUS, KC_VOLD, KC_VOLU, KC_DOWN, KC_3,    KC_4,    KC_5,    KC_6,    
        KC_W,    KC_E,    KC_R,    KC_T,    
        KC_S,    KC_D,    KC_F,    KC_G,    
        KC_X,    KC_C,    KC_V,    KC_B,    
        KC_SPC,  KC_LGUI, KC_LALT, KC_7,    KC_8,    KC_9,    KC_0,    
        KC_Y,    KC_U,    KC_I,    KC_O,    
        KC_H,    KC_J,    KC_K,    KC_L,    
        KC_B,    KC_N,    KC_M,    KC_COMM, 
        KC_SPC,  OSL(1)   
    )
};
