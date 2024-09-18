// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H



//Used in combination with ahk script to create (swedish) åäö characters.
#define OHH LCA(KC_LBRC) // ahk is configured to make this "å"
#define AEH LCA(KC_QUOT) // ä
#define UHH LCA(KC_SCLN) // ö


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(

	/*
	*   ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
	*   │  1  │  2  │  3  │  4  │  5  │ `~  │ Esc │      │  -_ │  =+ │  6  │  7  │  8  │  9  │  0  │
	*   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
	*   │  Q  │  W  │  E  │  R  │  T  │  [{ │  ]} │      │  Bs │ Del │  Y  │  U  │  I  │  O  │  P  │
	*   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
	*   │  A  │  S  │  D  │  F  │  G  │  ;: │ Lay │      │ Lay │ '"  │  H  │  J  │  K  │  L  │  Å  │
	*   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
	*   │  Z  │  X  │  C  │  V  │ ,<  │ /?  │ Tab │      │ \|  │ .>  │  B  │  N  │  M  │  Ö  │  Ä  │
	*   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
	*   │ Ctl │ App │ Win │ Alt │ Sft │ Spc │ Ent │      │ Ent │ Spc │ Sft │ Alt │ Win │ App │ Ctl │
	*   └─────┴─────┴─────┴─────┴─────┴─────┴─────┘      └─────┴─────┴─────┴─────┴─────┴─────┴─────┘
	*/

	KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,  KC_ESC,           KC_MINS, KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_RBRC,          KC_BSPC, KC_DEL,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_SCLN, TT(1),            TT(1),   KC_QUOT, KC_H,    KC_J,    KC_K,    KC_L,    OHH,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_COMM, KC_SLSH, KC_TAB,           KC_BSLS, KC_DOT,  KC_B,    KC_N,    KC_M,    UHH,     AEH,
    KC_LCTL, KC_APP,  KC_LWIN, KC_LALT, KC_LSFT, KC_SPC,  KC_ENT,           KC_ENT,  KC_SPC,  KC_RSFT, KC_RALT, KC_RWIN, KC_APP , KC_RCTL

	),
	[1] = LAYOUT(

	KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,      _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    _______, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______, _______,      _______, _______, KC_COMM, KC_P7,   KC_P8,   KC_P9,   _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______,      _______, _______, KC_P0,   KC_P4,   KC_P5,   KC_P6,   _______,
    _______, _______, _______, _______, _______, _______, _______,      _______, _______, KC_DOT,  KC_P1,   KC_P2,   KC_P3,   _______,
    _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______

	)
};
