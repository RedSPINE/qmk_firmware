// Copyright 2022 @filterpaper
// SPDX-License-Identifier: GPL-2.0+

#include QMK_KEYBOARD_H

// Seniply layout
// https://stevep99.github.io/seniply

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
    KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_QUOT,
    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,
    KC_Z,       KC_C,       KC_X,       KC_V,       KC_B,                   KC_RBRC,    KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                                    LT(4,KC_TAB),  KC_LSFT,                 LT(5,KC_SPC),  LT(1,KC_ENT)
    ),
    [1] = LAYOUT_split_3x5_2(
    ALGR(KC_Q), KC_6,       ALGR(KC_E), ALGR(KC_R), ALGR(KC_Z),             KC_PSLS,    KC_P7,      KC_P8,      KC_P9,      KC_PPLS,
    ALGR(KC_R), ALGR(KC_4), ALGR(KC_5), ALGR(KC_R), ALGR(KC_G),             KC_PAST,    KC_P4,      KC_P5,      KC_P6,      KC_PMNS,
    S(KC_GRV),   ALGR(KC_X), ALGR(KC_C), ALGR(KC_V), ALGR(KC_B),             KC_P0,      KC_P1,      KC_P2,      KC_P3,      TG(3),
                                        MO(2),      KC_LSFT,                ___,        _______
    ),
    [2] = LAYOUT_split_3x5_2(
    ___,        ___,        ___,        ___,        ___,                    ___,        ___,        KC_MS_U,    ___,        ___,
    ___,        ___,        ___,        ___,        ___,                    ___,        KC_MS_L,    KC_MS_D,    KC_MS_R,    ___,
    ___,        ___,        ___,        ___,        ___,                    ___,        KC_BTN1,    KC_BTN2,    KC_BTN3,    ___,
                                        _______,    ___,                    ___,        _______
    ),
    [3] = LAYOUT_split_3x5_2(
    KC_PSLS,    KC_P7,      KC_P8,      KC_P9,      KC_PPLS,                KC_F12,     KC_F7,      KC_F8,      KC_F9,      ___,
    KC_PAST,    KC_P4,      KC_P5,      KC_P6,      KC_PMNS,                KC_F11,     KC_F4,      KC_F5,      KC_F6,      ___,
    KC_P0,      KC_P1,      KC_P2,      KC_P3,      G(KC_SPC),              KC_F10,     KC_F1,      KC_F2,      KC_F3,      TG(3),
                                        MO(4),      KC_ENT,                 ___,        _______
    ),
    [4] = LAYOUT_split_3x5_2(
    KC_ESC,     G(S(KC_S)), C(KC_F4),   C(S(KC_T)), A(KC_F4),               KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     ___,
    KC_LSFT,    S(KC_TAB),  KC_LALT,    KC_TAB,     C(KC_W),                KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RGHT,    ___,
    KC_LGUI,    C(KC_X),    C(KC_C),    C(KC_S),    C(KC_V),                KC_DEL,     KC_BSPC,    ___,        ___,        ___,
                                        _______,    ___,                    KC_RCTL,    ___
    ),
    [5] = LAYOUT_split_3x5_2(
    ___,        ALGR(KC_W), ALGR(KC_D), ___,        ALGR(KC_T),             ___,        ___,        ___,        ___,        ___,
    KC_BSLS,    KC_LBRC,    KC_P,       KC_N,       ALGR(KC_S),             ___,        ___,        ___,        ___,        ___,
    ___,        KC_4,       KC_5,       C(KC_F),    ___,                    ___,        ___,        ___,        ___,        ___,
                                    ALGR(KC_SPC),   KC_LSFT,                _______,    ___
    ),
};
