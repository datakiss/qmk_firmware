#include "lets_split.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define BASE 0 // default layer
#define NAV 1
#define NUM 2 // num
#define SYMB 3
#define MDIA 4 // media keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(\
    GUI_T(KC_TAB), KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
    CTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,     KC_G,           KC_H,    KC_J,    KC_K,    KC_L,    LT(NUM, KC_SCLN), KC_ENT, \
    KC_LSFT,       KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SFT_T(KC_QUOT), \
    MO(MDIA),      KC_LCTL,   KC_LGUI, KC_LALT, MO(SYMB), CTL_T(KC_BSPC), LT(NAV, KC_SPC),  MO(SYMB), KC_RALT, KC_RGUI, KC_RCTL, MO(MDIA) \
  ),
  [NAV] = LAYOUT( \
    _______, KC_F1,   KC_F2,                     KC_F3,                     KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL, \
    _______, KC_LCBR, LSFT(LCTL(LALT(KC_LBRC))), LSFT(LCTL(LALT(KC_RBRC))), KC_HOME, KC_PGUP, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_F11,  KC_F12, \
    _______, KC_RCBR, LSFT(LCTL(LALT(KC_COMM))), LSFT(LCTL(LALT(KC_DOT))),  KC_END,  KC_PGDN, _______, KC_WBAK, KC_WFWD, KC_PSCR, _______, _______, \
    _______, _______, _______,                   _______,                   _______, _______, _______, _______, _______, _______, _______, _______ \
  ),
  [NUM] = LAYOUT( \
    _______, _______, KC_AMPR, KC_ASTR, KC_MINS, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______, \
    _______, _______, KC_DLR,  KC_PERC, KC_CIRC, _______, _______, KC_4,    KC_5,    KC_6,    _______, _______, \
    _______, _______, KC_EXLM, KC_AT,   KC_HASH, _______, _______, KC_1,    KC_2,    KC_3,    _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, KC_0,    _______, _______, _______, _______  \
  ),
  [SYMB] = LAYOUT( \
    GUI_T(KC_GRV),  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
    _______, KC_CAPS, KC_LPRN, KC_RPRN, KC_WBAK, KC_WFWD, _______, _______, KC_LPRN, KC_RPRN, KC_EQL,  KC_BSLS, \
    _______, _______, KC_LCBR, KC_RCBR, _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______, \
    _______, _______, GUI_T(KC_LBRC), ALT_T(KC_RBRC), _______, _______, _______, _______, ALT_T(KC_LBRC), GUI_T(KC_RBRC), _______, _______  \
  ),
  [MDIA] =  LAYOUT( \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,  \
    _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
  )
};
