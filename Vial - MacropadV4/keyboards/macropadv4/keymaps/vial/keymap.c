// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*                                 ENC1 ENC2 ENC3
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     * │ A │ B │ C │ D │ E │ F │ G │ H │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │
     * └───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x11(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_A,    KC_B,    KC_C,    KC_D,    QK_MIDI_ON,    QK_MIDI_OFF,    QK_MIDI_TOGGLE,    QK_MIDI_NOTE_C_0
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    //                  Encoder 1                           Encoder 2                         Encoder 3
};
#endif
