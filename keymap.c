#include QMK_KEYBOARD_H
#include "keymap_french.h"

#define _QW 0
#define _FN 1
#define _ACCENT 2
#define _NAV 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
   * ,-----------------------------------------------------------------------------------------.
   * |  ` |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc    |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | Esc     |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |       Shift     |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Cmd  |  Alt  |              Space                |  Alt  |  Cmd  |  Fn  |  Ctrl |
   * `-----------------------------------------------------------------------------------------'
   */
	[_QW] = LAYOUT_60_ansi(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, KC_LALT, LT(_ACCENT, KC_SPC), MO(_FN), TO(_ACCENT), TO(_NAV), KC_RCTL
      ),
/* Fn
   * ,-----------------------------------------------------------------------------------------.
   * |  ` | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10  | F11  | F12  |   Del   |
   * |-----------------------------------------------------------------------------------------+
   * |        | â Â |     |     |     |     |     |     |     |     |     |     |     |        |
   * |-----------------------------------------------------------------------------------------+
   * |   Esc    | à À |     |     |     |     |     |     |     |     |     |     |            |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |                 |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |       |       |      |       |
   * `-----------------------------------------------------------------------------------------'
   */
	[_FN] = LAYOUT_60_ansi(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
      ),
/* VIM
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |      |      |      |        |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
   * |-----------------------------------------------------------------------------------------+
   * |          |     |     |     |     |     |     |     |     |     |     |     |            |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |                 |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |      |       |       |       |
   * `-----------------------------------------------------------------------------------------'
   */
	[_ACCENT] = LAYOUT_60_ansi(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		TG(_ACCENT), KC_NO, KC_NO, FR_EACU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
      ),
/* NAV
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |      |      |      |  Bkspc |
   * |-----------------------------------------------------------------------------------------+
   * |        |     | VolU|     |     |     |     |     |     |     |     |     |     |        |
   * |-----------------------------------------------------------------------------------------+
   * | TG(3)   | Prev |VolD |Next |     |     |     |     |     |     |     |     |     ENTER  |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |       UP        |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |      |  LEFT |  DOWN |  RGHT |
   * `-----------------------------------------------------------------------------------------'
   */
	[_NAV] = LAYOUT_60_ansi(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,
		KC_NO, KC_NO, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		TG(_NAV), KC_MPRV, KC_VOLD, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT,
		KC_NO, KC_MUTE, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT
      ),

};

// led control
uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
  case _FN:
    rgblight_sethsv_noeeprom(HSV_PINK);
    break;
  case _ACCENT:
    rgblight_sethsv_noeeprom(HSV_GREEN);
    break;
  case _NAV:
    rgblight_sethsv_noeeprom(HSV_RED);
    break;
  default: //  for any other layers, or the default layer
    rgblight_sethsv_noeeprom(HSV_CYAN);
    break;
  }
  return state;
}
