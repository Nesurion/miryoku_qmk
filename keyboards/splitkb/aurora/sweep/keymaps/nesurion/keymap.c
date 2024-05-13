#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LGUI_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RGUI_T(KC_SCLN), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LT(1,KC_TAB), LT(3,KC_SPC), LT(2,KC_ENT), KC_BSPC),
	[1] = LAYOUT_split_3x5_2(LGUI(KC_GRV), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_LGUI, KC_LCTL, KC_LALT, KC_LSFT, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_LEFT), KC_PGDN, KC_PGUP, LALT(KC_RGHT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_split_3x5_2(KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_MINS, KC_VOLD, KC_MRWD, KC_MPLY, KC_MFFD, KC_VOLU, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_EQL, KC_NO, KC_RSFT, KC_RALT, KC_RCTL, KC_RGUI, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_AMPR, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_LGUI, KC_LCTL, KC_LALT, KC_LSFT, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_NO, KC_NO, KC_NO, KC_NO)
};

const uint16_t PROGMEM thumbcombos_base_left[] = {LT(1,KC_TAB), LT(3,KC_SPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_right[] = {LT(2,KC_ENT), KC_BSPC, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(thumbcombos_base_left, KC_ESC),
  COMBO(thumbcombos_base_right, KC_DEL)
};

// Disable status LED
void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}
