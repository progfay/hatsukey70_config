// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      /*
      * ┌───┬───┬───┬───┬───┬───┬───┐         ┌───┬───┬───┬───┬───┬───┬───────┐
      * │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │         │ 7 │ 8 │ 9 │ 0 │ - │ = │  BS   │
      * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐     ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
      * │ Tab │ Q │ W │ E │ R │ T │ Y │     │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
      * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
      * │ Caps │ A │ S │ D │ F │ G │ H │     │ H │ J │ K │ L │ ; │ ' │ Enter  │
      * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┘   ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──────┤
      * │ Shift │ Z │ X │ C │ V │ B │      │ B │ N │ M │ , │ . │ / │ ↑ │ Shift│
      * ├────┬──┴─┬─┴──┬┴───┴┬──┴──┬┴───┐  ├───┴─┬─┴──┬┴───┴───┼───┼───┼───┬──┘
      * │ Fn │Ctrl│Alt │ GUI │ Esc │Spce│  │ Ent │ BS │GUI │Alt│ ← │ ↓ │ → │
      * └────┴────┴────┴─────┴─────┴────┘  └─────┴────┴────┴───┴───┴───┴───┘
      */
      [0] = LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, KC_RSFT,
        MO(1), KC_LCTL, KC_LALT, KC_LGUI, KC_ESC, KC_SPC, KC_ENT, KC_BSPC, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    /*
      * ┌───┬───┬───┬───┬───┬───┬───┐         ┌───┬───┬───┬───┬───┬───┬─────┐
      * │Esc│ F1│ F2│ F3│ F4│ F5│ F6│         │ F7│ F8│ F9│F10│F11│F12│Rebot│
      * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐     ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
      * │     │   │   │   │   │   │   │     │   │   │   │   │   │   │   │   │
      * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
      * │      │   │   │   │   │   │   │     │   │   │   │   │   │   │      │
      * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┘   ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬────┤
      * │       │   │   │   │   │   │      │   │   │   │   │   │   │   │    │
      * ├────┬──┴─┬─┴──┬┴───┴┬──┴──┬┴───┐  ├───┴─┬─┴──┬┴───┴───┼───┼───┼───┬┘
      * │    │    │    │     │     │    │  │     │    │    │   │   │   │   │
      * └────┴────┴────┴─────┴─────┴────┘  └─────┴────┴────┴───┴───┴───┴───┘
      */
      [1] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, QK_RBT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
      ),
};
