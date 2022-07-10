// Copyright 2022 @filterpaper
// SPDX-License-Identifier: GPL-2.0;
// Spine keymap for RedSPINE, made for BÉPO layout

#include QMK_KEYBOARD_H
// Philosophy
// - Limit the use of tap/hold modifiers
// - The use of a full keyboard should never be required for anything (=> have access to all keys)
// - Focus on making french typing easy and bépo compliant as much as possible, some trade-offs can be accepted if huge value for english typing (like the W)
// - LeftHand only shortcuts is very precious for mouse navigation
// - Therefore everything Typing related must me on the right hand as much as possible
// => accept that typing in french can’t be done without use of layer
// - Build a priority list of stuff that must be achievable with left hand only (ordered) :
//      - fill up data / numbers
//      - fill up data / numbers
//      - fill up data / numbers
//      - fill up data / numbers
//      - fill up data / numbers
//
// Name             |   thumbs  |   Usage
// =================|===========|====================
#define BÉP0 0 //   |   ·· ··   |   BÉPO
#define BÉP1 1 //   |   ·· ×·   |   BÉPO
// SHORTCUTS ========================================
#define ShCt0 2 //  |   ×· ··   |   Shortcuts for left hand + Navigation and Formatting
#define ShCt1 3 //  |  ××· ··   |   more Shortcuts for left hand + Music control
#define LAYERS 4 // |  ××· ··   |   Enter Locked layers
// FUNCTIONS ========================================
#define NUM 5 //    |   ·× ··   |   Code Related + Numbers
#define MOUSE 6 //  |   ×· ·×   |   Mouse emulation
#define GAM0 7 //   |   LAYERS  |   Gaming layer

// Seniply layout
// https://stevep99.github.io/seniply

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BÉP0] = LAYOUT_split_3x5_2(// BÉPO
//  Bb          Éé          Pp          Oo          Èè                      !(^)        Vv          Dd          Ll          Mm
//  Aa          Uu          Ii          Ee          ;,                      Cc          Tt          Ss          Rr          Nn
//  Àà          Xx          Yy          :.          Kk                      Ww          Qq          Gg          Hh          Ff
//                                      ShCt0       Enter/Num               Space/BÉPO2 Shift
    KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_QUOT,
    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,
    KC_Z,       KC_C,       KC_X,       KC_V,       KC_B,                   KC_RBRC,    KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                                      MO(ShCt0),    LT(NUM,KC_ENT),         LT(NUM,KC_SPC),   KC_LSFT 
    ),
    [BÉP1] = LAYOUT_split_3x5_2(// More BÉPO with Transparency
//  Ææ          ♥(´)        (˙)(¨)      Œœ          `(`)
//  Çç          Ùù          Jj          ?’          §&
//  Zz                                  ·…          
//                                      Insec       Shift
    ALGR(KC_A), ALGR(KC_W), ALGR(KC_D), ALGR(KC_R), ALGR(KC_T),             KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_BSLS,    ALGR(KC_S), KC_P,       KC_N,       ALGR(KC_E),             KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_LBRC,    KC_TRNS,    KC_TRNS,    ALGR(KC_V), KC_TRNS,                KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                        ALGR(KC_SPC),   KC_LSFT,            KC_TRNS,    ___
    ),
    [NUM] = LAYOUT_split_3x5_2(// Everything code related and numbers
//  |           <           =≠          >           @^                      /÷          7           8           9           +±
//  \           ([          )]          '           "—                      *×          4           5           6           -−
//  #¶          {           }           $           ~                       0           1           2           3           %‰
//                                      L3          MOD                     NONE        PRESSED
    ALGR(KC_Q), ALGR(KC_2), KC_MINS,    ALGR(KC_3), KC_6,                   KC_9,       KC_P7,      KC_P8,      KC_P9,      KC_7,
    ALGR(KC_Z), KC_4,       KC_5,       ALGR(KC_G), KC_1,                   KC_0,       KC_P4,      KC_P5,      KC_P6,      KC_8,
    S(KC_GRV),  ALGR(KC_X), ALGR(KC_C), KC_GRV,     ALGR(KC_B),             KC_P0,      KC_P1,      KC_P2,      KC_P3,      KC_EQL,
                                        MO(MOUSE),  KC_RALT,                ___,        KC_TRNS
    ),
    [ShCt0] = LAYOUT_split_3x5_2(// Shortcuts Left Hand Only                Navigation and Formatting
//  ESC         CTRL+D      DEL         CTRL+A      ALT+F4                  PAGE_UP     HOME        ARROW_UP    END         F2
//  SHIFT       WINDOWS/L6  LALT        TAB         CTRL+Z                  PAGE_DOWN   ARROW_LEFT  ARROW_DOWN  ARROW_RIGHT CTRL+F
//  LAYERS      CTRL+X      CTRL+C      CTRL+S      CTRL+V                  DEL         BACKSPACE                           
//                                      PRESSED     NONE                    CTRL        NONE
    KC_ESC,     C(KC_D),    KC_DEL,     C(KC_Q),    A(KC_F4),               KC_PGaUP,   KC_HOME,    KC_UP,      KC_END,     KC_F2,
    KC_LSFT,    LT(6,KC_LGUI),KC_LALT,  KC_TAB,     C(KC_W),                KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RGHT,    C(KC_F),
    ___,        C(KC_X),    C(KC_C),    C(KC_S),    C(KC_V),                KC_DEL,     KC_BSPC,    ___,        ___,        ___,
                                        KC_TRNS,    ___,                    KC_RCTL,    MO(MOUSE)
    ),
    [MOUSE] = LAYOUT_split_3x5_2(// Mouse emulation                         Mouse emulation
//  LEAVE       WHEEL_DOWN  CURSOR_UP   WHEEL_UP    SPEED_2                 LEAVE       WHEEL_UP    CURSOR_UP   WHEEL_DOWN  SPEED_2
//  SHIFT       CURSOR_LEFT CURSOR_DOWN CURSOR_RGHT SPEED_1                             CURSOR_LEFT CURSOR_DOWN CURSOR_RGHT SPEED_1
//  CTRL        RIGHT_CLK   MIDDLE_CLK  LEFT_CLK    SPEED_0                             LEFT_CLK    MIDDLE_CLK  RIGHT_CLK   SPEED_0
//
    TG(MOUSE),  KC_WH_D,    KC_MS_U,    KC_WH_U,    KC_ACL2,                TG(MOUSE),  KC_WH_U,    KC_MS_U,    KC_WH_D,    KC_ACL2,
    KC_LSFT,    KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_ACL1,                TG(GAM0),   KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_ACL1,
    KC_LCTL,    KC_BTN3,    KC_BTN2,    KC_BTN1,    KC_ACL0,                ___,        KC_BTN1,    KC_BTN2,    KC_BTN3,    KC_ACL0,
                                        KC_TRNS,    KC_LSFT,                ___,        KC_TRNS
    ),
    [LAYERS] = LAYOUT_split_3x5_2(//
    ___,        ___,        ___,        ___,        ___,                    ___,        ___,        ___,        ___,        ___,
    ___,        ___,        ___,        ___,        ___,                    ___,        ___,        ___,        ___,        ___,
    ___,        ___,        ___,        ___,        ___,                    ___,        ___,        ___,        ___,        ___,
                                        ___,        ___,                    ___,        ___
    ),    

    [ShCt1] = LAYOUT_split_3x5_2(// More Shortcuts LeftHand only         Music
//                          
//
//
//
    ___,        ___,        G(KC_L),    G(KC_D),    G(KC_SPC),              ___,        KC_VOLD,    KC_MUTE,    KC_VOLU,    ___,
    ___,        KC_TRNS,    G(S(KC_S)), G(KC_E),    G(KC_R),                ___,        KC_MPRV,    KC_MPLY,    KC_MNXT,    ___,
    ___,        ___,        ___,        G(KC_X),    G(KC_V),                ___,        ___,        ___,        ___,        ___,
                                        KC_TRNS,    TG(3),                  ___,        _______
    ),

    // ========================================================= GAMING =========================================================

    [GAM0] = LAYOUT_split_3x5_2(// League of Legends / Strive / Gaming Layout #0
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,                   KC_ENT,     KC_U,       KC_I,       KC_O,       KC_P,
    KC_LSFT,    KC_Q,       KC_W,       KC_E,       KC_R,                   TG(GAM0),   KC_J,       KC_K,       KC_L,       KC_SCLN,
    KC_TAB,     KC_A,       KC_S,       KC_D,       KC_F,                   KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                                        KC_SPC,    KC_LCTL,                 KC_V,       KC_B
    )
};
