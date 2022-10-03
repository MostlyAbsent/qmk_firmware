/* Copyright 2022 durken (https://github.com/durken1/)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum {
  TD_QUOTE_BACKTICK,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for quote, twice for backtick
    [TD_QUOTE_BACKTICK] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRAVE),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_3(KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_NO, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_MEH, KC_SPC, OSM(MOD_LSFT), OSM(MOD_LALT), OSL(1), OSM(MOD_RCTL)),
  [1] = LAYOUT_split_3x5_3(KC_ESC, KC_AT, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_SCLN, KC_COLN, KC_TAB, KC_UNDS, KC_HASH, KC_DQUO, TD(TD_QUOTE_BACKTICK), KC_BSLS, KC_LPRN, KC_RPRN, KC_PIPE, KC_ENT, KC_TILD, KC_NO, KC_NO, KC_NO, KC_DLR, KC_LBRC, KC_LCBR, KC_RCBR, KC_RBRC, KC_NO, KC_EXLM, KC_PMNS, KC_NO, KC_NO, TO(2), KC_NO),
	[2] = LAYOUT_split_3x5_3(KC_ESC, KC_MPLY, KC_MRWD, KC_MFFD, KC_UNDS, KC_PMNS, KC_P7, KC_P8, KC_P9, KC_NO, KC_TAB, KC_NO, KC_VOLD, KC_VOLU, KC_PPLS, KC_PEQL, KC_P4, KC_P5, KC_P6, KC_ENT, KC_NO, KC_ASTR, KC_BRID, KC_BRIU, KC_PDOT, KC_P0, KC_P1, KC_P2, KC_P3, KC_NO, TO(0), KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x5_3(MT(LAG(KC_ESC), KC_ESC), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MT(LGUI(KC_TAB), KC_TAB), KC_NO, KC_NO, KC_NO, KC_DEL, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT, MT(LGUI(KC_GRAVE), KC_GRAVE), KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), MT(LGUI(KC_O), KC_SPC), KC_NO, KC_NO, KC_LGUI, KC_NO)
};
