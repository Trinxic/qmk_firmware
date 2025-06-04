#pragma once

#include "keycodes.h"

// Windows/Linux
#define W_UNDO LCTL(KC_Z)
#define W_CUT LCTL(KC_X)
#define W_COPY LCTL(KC_C)
#define W_PASTE LCTL(KC_V)
#define W_BOLD LCTL(KC_B)
// MacOS
#define M_UNDO LGUI(KC_Z)
#define M_CUT LGUI(KC_X)
#define M_COPY LGUI(KC_C)
#define M_PASTE LGUI(KC_V)
#define M_BOLD LGUI(KC_B)

/* Here if I want to redesign..
// 5 column
#define __NUM_ROW_L0_5__ KC_0, KC_1, KC_2, KC_3, KC_4
#define __NUM_ROW_R0_5__ KC_5, KC_6, KC_7, KC_8, KC_9

#define __DVORAK_L1_5__ KC_SCLN, KC_COMA, KC_DOT, KC_P, KC_Y
#define __DVORAK_L2_5__ KC_A, KC_O, KC_E, KC_U, KC_I
#define __DVORAK_L3_5__ KC_QUOT, KC_Q, KC_J, KC_K, KC_X
#define __DVORAK_R1_5__ KC_F, KC_G, KC_C, KC_R, KC_L
#define __DVORAK_R3_5__ KC_D, KC_H, KC_T, KC_N, KC_S
#define __DVORAK_R2_5__ KC_B, KC_M, KC_W, KC_V, KC_Z

#define __QWERTY_L1_5__ KC_Q, KC_W, KC_E, KC_R, KC_T,
#define __QWERTY_L2_5__ KC_A, KC_S, KC_D, KC_F, KC_G,
#define __QWERTY_L3_5__ KC_Z, KC_X, KC_C, KC_V, KC_B,
#define __QWERTY_R1_5__ KC_Y, KC_U, KC_I, KC_O, KC_P
#define __QWERTY_R3_5__ KC_H, KC_J, KC_K, KC_L, KC_SCLN,
#define __QWERTY_R2_5__ KC_N, KC_M, KC_COMA, KC_DOT, KC_SLSH,

#define __GAME_L1_5__ KC_T, KC_Q, KC_W, KC_E, KC_R
#define __GAME_L2_5__ KC_LSFT, KC_A, KC_S, KC_D, KC_F
#define __GAME_L3_5__ KC_LCTL, KC_Z, KC_X, KC_C, KC_V
// QWERTY_R can just be used for GAME_R

#define __SYMBOLS_L1_5__ KC_SCLN, KC_COMA, KC_DOT, KC_ASTR, KC_CIRC
#define __SYMBOLS_L2_5__ KC_HASH, KC_LPRN, KC_RPRN, KC_SLSH, KC_BSLS
#define __SYMBOLS_L3_5__ KC_QUOT, KC_LBRC, KC_RBRC, KC_EXLM, KC_GRV
#define __SYMBOLS_R1_5__ KC_PLUS, KC_1, KC_2, KC_3, KC_PERC
#define __SYMBOLS_R2_5__ KC_EQL, KC_4, KC_5, KC_6, KC_0
#define __SYMBOLS_R3_5__ KC_MINS, KC_7, KC_8, KC_9, KC_DLR


// 6 column
#define ____NUM_ROW_L0_6____ KC_ESC, __NUM_ROW_L0_5__
#define ____NUM_ROW_R0_6____ __NUM_ROW_R0_5__, KC_BSPC

#define ____DVORAK_L1_6____ KC_TAB, __DVORAK_L1_5__
#define ____DVORAK_L2_6____ KC_LSFT, __DVORAK_L2_5__
#define ____DVORAK_L3_6____ KC_LCTL, __DVORAK_L3_5__
#define ____DVORAK_R1_6____ __DVORAK_L1_5__, KC_ENT
#define ____DVORAK_R2_6____ __DVORAK_L2_5__, KC_MINS
#define ____DVORAK_R3_6____ __DVORAK_L3_5__, KC_RSFT

#define ____QWERTY_L1_6____ KC_TAB, __QWERTY_L1_5__
#define ____QWERTY_L2_6____ KC_LSFT, __QWERTY_L2_5__
#define ____QWERTY_L3_6____ KC_LCTL, __QWERTY_L3_5__
#define ____QWERTY_R1_6____ __QWERTY_L1_5__, KC_ENT
#define ____QWERTY_R2_6____ __QWERTY_L2_5__, KC_MINS
#define ____QWERTY_R3_6____ __QWERTY_L3_5__, KC_RSFT

#define ____GAME_L1_6____ KC_TAB, __GAME_L1_5__
#define ____GAME_L2_6____ KC_G, __GAME_L2_5__
#define ____GAME_L3_6____ KC_B, __GAME_L3_5__

#define ____SYMBOLS_L0_6____ _______, _______, _______, _______, _______, _______,
#define ____SYMBOLS_L1_6____ KC_ESC, __SYMBOLS_L1_5__
#define ____SYMBOLS_L2_6____ _______, __SYMBOLS_L2_5__
#define ____SYMBOLS_L3_6____ _______, __SYMBOLS_L3_5__
#define ____SYMBOLS_R0_6____ _______, _______, _______, _______, _______, _______,
#define ____SYMBOLS_R1_6____ __SYMBOLS_R1_5__, TO(_FUNC)
#define ____SYMBOLS_R2_6____ __SYMBOLS_R2_5__, KC_AT
#define ____SYMBOLS_R3_6____ __SYMBOLS_R3_5__, _______
*/
