// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┐
     * │ Esc │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │Bck │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴────┤
     * │ Tab  │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─────┬─┘
     * │Shift   │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │  Shift│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬───┬──┴┬───┐
     * │Ctrl│Win │Alt │                        │ Fn │ <  │ \/│ ^ │ > │
     * └────┴────┴────┴────────────────────────┴────┴────┴───┴───┴───┘
     */
    [0] = LAYOUT_14x4(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BACKSPACE, MS_BTN1, MS_BTN2,
        KC_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT,                       KC_SPC,                     MO(1), KC_RIGHT, KC_DOWN, KC_UP, KC_LEFT
    ),

    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┐
     * │ |   │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │   │   │Bck │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴────┤
     * │ Tab  │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ` │ Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─────┬─┘
     * │Shift   │ - │ _ │ = │ + │ ~ │   │   │   │   │ \ │  Shift│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬───┬──┴┬───┐
     * │Ctrl│Win │Alt │                        │ Fn │ <  │ \/│ ^ │ > │
     * └────┴────┴────┴────────────────────────┴────┴────┴───┴───┴───┘
     */
    [1] = LAYOUT_14x4(
        KC_PIPE, KC_EXCLAIM, KC_AT,   KC_HASH,  KC_DLR,  KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,      KC_RPRN, _______, _______,  _______, _______, _______,
        _______, KC_1,       KC_2,    KC_3,     KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,         KC_0,    KC_GRAVE, _______,
        _______, KC_MINUS,   KC_UNDS, KC_EQUAL, KC_PLUS, KC_TILDE, _______, _______, _______, _______, KC_BACKSLASH, _______,
        _______, _______,    _______,                       _______,                     _______, _______, _______, _______, _______
    )
};
