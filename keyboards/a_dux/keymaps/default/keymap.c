// Copyright 2022 @filterpaper
// SPDX-License-Identifier: GPL-2.0;
// Spine keymap for RedSPINE, made for BÉPO layout

#include QMK_KEYBOARD_H
#define GAME1 7
//#define TD_0 ACTION_TAP_DANCE_LAYER_TOGGLE(, 4) 

// Seniply layout
// https://stevep99.github.io/seniply

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(// BÉPO typing
    KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_QUOT,
    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,
    KC_Z,       KC_C,       KC_X,       KC_V,       KC_B,                   KC_RBRC,    KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                                        MO(2),      KC_LSFT,                LT(5,KC_SPC),  LT(1,KC_ENT)
    ),
    [1] = LAYOUT_split_3x5_2(// Everything code related and numbers
    ALGR(KC_Q), ALGR(KC_2), KC_MINS,    ALGR(KC_3), KC_6,                   KC_PSLS,    KC_P7,      KC_P8,      KC_P9,      KC_PPLS,
    ALGR(KC_Z), KC_4,       KC_5,       KC_1,       ALGR(KC_G),             KC_PAST,    KC_P4,      KC_P5,      KC_P6,      KC_PMNS,
    S(KC_GRV),  ALGR(KC_X), ALGR(KC_C), KC_GRV,     ALGR(KC_B),             KC_P0,      KC_P1,      KC_P2,      KC_P3,      KC_PDOT,
                                        MO(3),      KC_RALT,                ___,        KC_TRNS
    ),
    [2] = LAYOUT_split_3x5_2(// Shortcutes Left Hand Only                   Arrow keys emulation, and BSPC
    KC_ESC,     C(KC_D),    KC_DEL,     KC_BSPC,    A(KC_F4),               KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_F2,
    KC_LSFT,    LT(6,KC_LGUI),KC_LALT,  KC_TAB,     C(KC_W),                KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_ENT,
    KC_LCTL,    C(KC_X),    C(KC_C),    C(KC_S),    C(KC_V),                KC_DEL,     KC_BSPC,    ___,        ___,        ___,
                                        KC_TRNS,    TG(4),                  KC_RCTL,    MO(3)
    ),
    [3] = LAYOUT_split_3x5_2(//                                             Mouse emulation
    TG(3),      KC_WH_D,    KC_MS_U,    KC_WH_U,    KC_ACL2,                TG(3),      KC_WH_U,    KC_MS_U,    KC_WH_D,    KC_ACL2,
    ___,        KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_ACL1,                TG(GAME1),  KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_ACL1,
    KC_LCTL,    KC_BTN3,    KC_BTN2,    KC_BTN1,    KC_ACL0,                ___,        KC_BTN1,    KC_BTN2,    KC_BTN3,    KC_ACL0,
                                        KC_TRNS,    KC_LSFT,                ___,        KC_TRNS
    ),
    [4] = LAYOUT_split_3x5_2(//
    KC_PSLS,    KC_P7,      KC_P8,      KC_P9,      KC_PPLS,                KC_F12,     KC_F7,      KC_F8,      KC_F9,      ___,
    KC_PAST,    KC_P4,      KC_P5,      KC_P6,      KC_PMNS,                KC_F11,     KC_F4,      KC_F5,      KC_F6,      ___,
    KC_P0,      KC_P1,      KC_P2,      KC_P3,      KC_PDOT,                KC_F10,     KC_F1,      KC_F2,      KC_F3,      ___,
                                        KC_BSPC,    KC_ENT,                 TG(4),      ___
    ),    
    [5] = LAYOUT_split_3x5_2(// More BÉPO Letters for typing                Music
    ALGR(KC_A),        ALGR(KC_W), ALGR(KC_D), ALGR(KC_E), ALGR(KC_T),             ___,        KC_VOLD,    KC_MUTE,    KC_VOLU,    ___,
    KC_BSLS,    KC_LBRC,    KC_P,       KC_N,       ALGR(KC_R),             ___,        KC_MPRV,    KC_MPLY,    KC_MNXT,    ___,
    ALGR(KC_S), KC_4,       KC_5,       ALGR(KC_V),    C(KC_F),             ___,        ___,        ___,        ___,        ___,
                                        ALGR(KC_SPC),   KC_LSFT,            KC_TRNS,    ___
    ),
    [6] = LAYOUT_split_3x5_2(// Windows Shortcuts LeftHand only
    ___,        ___,        G(KC_L),    G(KC_D),    G(KC_SPC),              ___,        ___,        ___,        ___,        ___,
    ___,        KC_TRNS,    G(S(KC_S)), G(KC_E),    G(KC_R),                ___,        ___,        ___,        ___,        ___,
    ___,        ___,        ___,        G(KC_X),    G(KC_V),                ___,        ___,        ___,        ___,        ___,
                                        KC_TRNS,    TG(3),                  ___,        _______
    ),
    // ========================================================= GAMING =========================================================
    [GAME1] = LAYOUT_split_3x5_2(// League of Legends / Strive / Gaming Layout #1
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,                   KC_ENT,     KC_U,       KC_I,       KC_O,       KC_P,
    KC_LSFT,    KC_Q,       KC_W,       KC_E,       KC_R,                   TG(GAME1),  KC_J,       KC_K,       KC_L,       KC_SCLN,
    KC_TAB,     KC_A,       KC_S,       KC_D,       KC_F,                   KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                                        KC_SPC,    KC_LCTL,                 KC_V,       KC_B
    )
};
