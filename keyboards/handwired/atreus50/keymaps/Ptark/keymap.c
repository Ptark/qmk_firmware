// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "keymap_german.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _NEO,
    _SPECIAL,
    _MOVE,
    _SWITCH,
    _HOTS,
    _GAMING,
    _NUM,
    _STENO,
    _RESET,
};

// #define _NEO 0
// #define _SPECIAL 1
// #define _MOVE 2
// #define _HOTS 3
// #define _GAMING 4
// #define _RESET 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_NEO] = LAYOUT(
MO(_SWITCH),  DE_X,     DE_V,     DE_L,     DE_C,     DE_W,      /****/         /****/      DE_K,     DE_H,     DE_G,     DE_F,    DE_Q,  DE_SS,
KC_LALT,      DE_U,     DE_I,     DE_A,     DE_E,     DE_O,      /****/         /****/      DE_S,     DE_N,     DE_R,     DE_T,    DE_D,  DE_Y,
KC_LSFT,      DE_UDIA,  DE_ODIA,  DE_ADIA,  DE_P,     DE_Z,      /****/         /****/      DE_B,     DE_M,     DE_COMM,  DE_DOT,  DE_J,  KC_ENTER,
MO(_RESET),   KC_NO,    KC_NO,    KC_LALT,  KC_LGUI,  KC_SPACE,  MO(_SPECIAL),  MO(_MOVE),  KC_LSFT,  KC_LCTL,  KC_NO,    DE_T,    DE_T,  DE_T
  ),
  [_SPECIAL] = LAYOUT(
KC_NO,    KC_NO,    DE_UNDS,  DE_LBRC,  DE_RBRC,  DE_CIRC,   /****/    /****/      DE_EXLM,  DE_LABK,  DE_RABK,  DE_EQL,   DE_AMPR,  KC_NO,
KC_LALT,  DE_BSLS,  DE_SLSH,  DE_LCBR,  DE_RCBR,  DE_ASTR,   /****/    /****/      DE_QUES,  DE_LPRN,  DE_RPRN,  DE_MINS,  DE_COLN,  DE_AT,
KC_LSFT,  DE_HASH,  DE_DLR,   DE_PIPE,  DE_TILD,  DE_GRV,    /****/    /****/      DE_PLUS,  DE_PERC,  DE_DQUO,  DE_QUOT,  DE_SCLN,  KC_NO,
KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LGUI,  KC_SPACE,  KC_TRNS,  MO(_MOVE),  KC_LSFT,  KC_LCTL,  KC_NO,    KC_NO,    KC_NO,    KC_NO
  ),
  [_MOVE] = LAYOUT(
KC_NO,    KC_PGUP,    KC_BSPC,  KC_UP,      KC_DELETE,  KC_PGDN,   /****/  /****/    KC_PSCR,  KC_7,     KC_8,         KC_9,   DE_PLUS,  DE_MINS,
KC_LALT,  KC_HOME,    KC_LEFT,  KC_DOWN,    KC_RIGHT,   KC_END,    /****/  /****/    KC_NO,    KC_4,     KC_5,         KC_6,   DE_COMM,  DE_DOT,
KC_NO,    KC_ESCAPE,  KC_TAB,   KC_INSERT,  KC_ENTER,   KC_NO,     /****/  /****/    KC_NO,    KC_1,     KC_2,         KC_3,   DE_SCLN,  KC_NO,
KC_NO,    KC_NO,      KC_NO,    KC_NO,      KC_LGUI,    KC_SPACE,  KC_0,   KC_TRNS,  KC_LSFT,  KC_LCTL,  TO(_GAMING),  KC_NO,  KC_NO,    KC_NO
  ),
  [_SWITCH] = LAYOUT(
KC_TRNS,  KC_NO,  KC_NO,       KC_NO,        KC_NO,      KC_NO,  /****/  /****/  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
KC_NO,    KC_NO,  TO(_STENO),  TO(_GAMING),  TO(_HOTS),  KC_NO,  /****/  /****/  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
KC_NO,    KC_NO,  KC_NO,       KC_NO,        KC_NO,      KC_NO,  /****/  /****/  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
KC_NO,    KC_NO,  KC_NO,       KC_NO,        KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  QK_BOOT,  KC_NO,  KC_NO,  KC_NO
  ),
  [_HOTS] = LAYOUT(
TO(_NEO),   DE_1,   DE_2,   DE_3,   DE_4,     DE_5,     /****/  /****/  KC_NO,  KC_NO,  KC_NO,     KC_NO,  KC_NO,  KC_NO,
KC_TAB,     DE_Q,   DE_W,   DE_E,   DE_R,     DE_T,     /****/  /****/  KC_NO,  KC_NO,  KC_NO,     KC_NO,  KC_NO,  KC_NO,
KC_LSFT,    DE_A,   DE_Y,   DE_D,   DE_H,     DE_B,     /****/  /****/  DE_V,   KC_NO,  KC_NO,     KC_NO,  KC_NO,  KC_NO,
KC_ESCAPE,  KC_NO,  KC_NO,  KC_NO,  KC_LALT,  KC_LALT,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  TO(_NEO),  KC_NO,  KC_NO,  KC_NO
  ),
  [_GAMING] = LAYOUT(
TO(_NEO),   KC_TAB,   DE_Q,   DE_W,     DE_E,     DE_R,      /****/     /****/  DE_T,   DE_Z,   DE_U,      DE_I,     DE_O,    DE_P,
KC_ESCAPE,  KC_LSFT,  DE_A,   DE_S,     DE_D,     DE_F,      /****/     /****/  DE_G,   DE_H,   DE_J,      DE_K,     DE_L,    DE_ODIA,
KC_NO,      KC_LCTL,  DE_Y,   DE_X,     DE_C,     DE_V,      /****/     /****/  DE_B,   DE_N,   DE_M,      DE_COMM,  DE_DOT,  KC_ENTER,
KC_NO,      KC_NO,    KC_NO,  KC_LGUI,  KC_LALT,  KC_SPACE,  MO(_NUM),  KC_NO,  KC_NO,  KC_NO,  TO(_NEO),  KC_NO,    KC_NO,   KC_NO
  ),
  [_NUM] = LAYOUT(
KC_NO,      KC_TAB,   DE_1,   DE_2,     DE_3,     KC_NO,     /****/    /****/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_ESCAPE,  DE_0,     DE_4,   DE_5,     DE_6,     KC_NO,     /****/    /****/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_NO,      KC_LCTL,  DE_7,   DE_8,     DE_9,     KC_NO,     /****/    /****/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_NO,      KC_NO,    KC_NO,  KC_LGUI,  KC_LALT,  KC_SPACE,  KC_TRNS,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
  ),
  [_STENO] = LAYOUT(
TO(_NEO),  DE_Q,   DE_W,   DE_E,   DE_R,   KC_NO,  /****/  /****/  DE_UDIA,  DE_P,     DE_O,   DE_I,   DE_U,   KC_NO,
KC_NO,     DE_F,   DE_S,   DE_D,   DE_H,   KC_NO,  /****/  /****/  DE_ADIA,  DE_ODIA,  DE_L,   DE_K,   DE_J,   KC_NO,
KC_NO,     KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  /****/  /****/  KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_NO,     KC_NO,  KC_NO,  KC_NO,  DE_C,   DE_V,   DE_2,   DE_3,   DE_N,     DE_M,     KC_NO,  KC_NO,  KC_NO,  KC_NO
  ),
  [_RESET] = LAYOUT(
KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  /****/  /****/  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  /****/  /****/  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  /****/  /****/  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
KC_TRNS,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  QK_BOOT,  KC_NO,  KC_NO,  KC_NO
  )
};
//
// // Each layer gets a name for readability, which is then used in the keymap matrix below.
// // The underscores don't mean anything - you can have a layer called STUFF or any other name.
// // Layer names don't all need to be of the same length, obviously, and you can also skip them
// // entirely and just use numbers.
// enum layer_names {
//     _QWERTY,
//     _COLEMAK,
//     _DVORAK,
//     _LOWER,
//     _RAISE,
//     _MOVEMENT,
//     _ADJUST,
// };
//
// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
//   COLEMAK,
//   DVORAK,
//   LOWER,
//   RAISE,
//   MOVEMENT,
//   BACKLIT
// };
//
// // Fillers to make layering more clear
// #define X0 MT(MOD_LCTL, KC_ESC)  // Hold for Left Ctrl, Tap for ESC
// #define X3 MO(_MOVEMENT)
// #define X4 MT(MOD_LSFT, KC_ENT)  // Hold for Left Shift, Tap for Enter
//
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//
//   [_QWERTY] = LAYOUT(
//     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
//     X0,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, X4,
//     KC_GRV,  KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  X3,      KC_RSFT, KC_BSPC, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
//   ),
//
//   [_COLEMAK] = LAYOUT(
//     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_MINS,
//     X0,      KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
//     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, X4,
//     KC_GRV,  KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  X3,      KC_RSFT, KC_BSPC, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
//   ),
//
//   [_DVORAK] = LAYOUT(
//     KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                      KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_MINS,
//     X0,      KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                      KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,
//     KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,                      KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    X4,
//     KC_GRV,  KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  X3,      KC_RSFT, KC_BSPC, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
//   ),
//
//   [_LOWER] = LAYOUT(
//     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
//     KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
//     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,                    KC_F12,  KC_END,  _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
//   ),
//
//   [_RAISE] = LAYOUT(
//     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
//     KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
//     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,                    KC_F12,  KC_NUHS, KC_NUBS, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
//   ),
//
//   [_MOVEMENT] = LAYOUT(
//     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_UP,   KC_LPRN, KC_RPRN, KC_DEL,
//     KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_LEFT, KC_DOWN, KC_RGHT, KC_RCBR, KC_PIPE,
//     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,                    KC_F12,  KC_END,  _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_PGUP, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
//   ),
//
// /* Adjust (Lower + Raise)
//  * |------+------+------+------+------+------.             ,------+------+------+------+------+------|
//  * |      | Reset|      |      |      |      |             |      |      |      |      |      |  Del |
//  * |------+------+------+------+------+------|             |------+------+------+------+------+------|
//  * |      |      |      |Audoff|Aud on|AGnorm|             |AGswap|Qwerty|Colemk|Dvorak|      |      |
//  * |------+------+------+------+------+------|             |------+------+------+------+------+------|
//  * |      |Voice-|Voice+|Musoff|Mus on|      |             |      |      |      |      |      |      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
//  * `-------------------------------------------------------------------------------------------------'
//  */
//   [_ADJUST] = LAYOUT(
//     _______, QK_BOOT,   RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,                   RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, KC_DEL,
//     _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM,                   AG_SWAP, QWERTY,  COLEMAK, DVORAK,  _______, _______,
//     _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,                     MI_OFF,  _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//   )
//
// };
//
// #ifdef AUDIO_ENABLE
// float tone_startup[][2] = {
//   {NOTE_B5, 20},
//   {NOTE_B6, 8},
//   {NOTE_DS6, 20},
//   {NOTE_B6, 8}
// };
//
// float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
// float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
// float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
//
// float tone_goodbye[][2] = SONG(GOODBYE_SOUND);
//
// float music_scale[][2]     = SONG(MUSIC_SCALE_SOUND);
// #endif
//
// void persistent_default_layer_set(uint16_t default_layer) {
//   eeconfig_update_default_layer(default_layer);
//   default_layer_set(default_layer);
// }
//
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//         case QWERTY:
//           if (record->event.pressed) {
//             #ifdef AUDIO_ENABLE
//               PLAY_SONG(tone_qwerty);
//             #endif
//             persistent_default_layer_set(1UL<<_QWERTY);
//           }
//           return false;
//           break;
//         case COLEMAK:
//           if (record->event.pressed) {
//             #ifdef AUDIO_ENABLE
//               PLAY_SONG(tone_colemak);
//             #endif
//             persistent_default_layer_set(1UL<<_COLEMAK);
//           }
//           return false;
//           break;
//         case DVORAK:
//           if (record->event.pressed) {
//             #ifdef AUDIO_ENABLE
//               PLAY_SONG(tone_dvorak);
//             #endif
//             persistent_default_layer_set(1UL<<_DVORAK);
//           }
//           return false;
//           break;
//         case LOWER:
//           if (record->event.pressed) {
//             layer_on(_LOWER);
//             update_tri_layer(_LOWER, _RAISE, _ADJUST);
//           } else {
//             layer_off(_LOWER);
//             update_tri_layer(_LOWER, _RAISE, _ADJUST);
//           }
//           return false;
//           break;
//         case RAISE:
//           if (record->event.pressed) {
//             layer_on(_RAISE);
//             update_tri_layer(_LOWER, _RAISE, _ADJUST);
//           } else {
//             layer_off(_RAISE);
//             update_tri_layer(_LOWER, _RAISE, _ADJUST);
//           }
//           return false;
//           break;
//         case BACKLIT:
//           if (record->event.pressed) {
//             register_code(KC_RSFT);
//             #ifdef BACKLIGHT_ENABLE
//               backlight_step();
//             #endif
//           } else {
//             unregister_code(KC_RSFT);
//           }
//           return false;
//           break;
//       }
//     return true;
// };
//
// void matrix_init_user(void) {
//     #ifdef AUDIO_ENABLE
//         startup_user();
//     #endif
// }
//
// #ifdef AUDIO_ENABLE
//
// void startup_user()
// {
//     _delay_ms(20); // gets rid of tick
//     PLAY_SONG(tone_startup);
// }
//
// void shutdown_user()
// {
//     PLAY_SONG(tone_goodbye);
//     _delay_ms(150);
//     stop_all_notes();
// }
//
// void music_on_user(void)
// {
//     music_scale_user();
// }
//
// void music_scale_user(void)
// {
//     PLAY_SONG(music_scale);
// }
//
// #endif
