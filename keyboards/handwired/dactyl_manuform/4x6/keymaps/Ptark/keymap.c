#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define _NEO 0
#define _SPECIAL 1
#define _MOVE 2
#define _HOTS 3
#define _GAMING 4
#define _NUM 5
#define _STENO 6
#define _QWERTY 7
#define _TEST 8


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
     * +-----------------------------------------+                             +-----------------------------------------+
     * | ESC  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | SHFT |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |      |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *               |  [   |   ]  |                                                         |      |      |
     *               +-------------+-------------+                             +-------------+-------------+
     *                             |      |      |                             |      |      |
     *                             |------+------|                             |------+------|
     *                             |      |      |                             |      |      |
     *                             +-------------+                             +-------------+
     *                                           +-------------+ +-------------+
     *                                           |      |      | |      |      |
     *                                           |------+------| |------+------|
     *                                           |      |      | |      |      |
     *                                           +-------------+ +-------------+
     */
    [_NEO] = LAYOUT(
KC_ESCAPE,  DE_X,     DE_V,         DE_L,         DE_C,       DE_W,          /**/  DE_K,        DE_H,              DE_G,     DE_F,    DE_Q,  DE_SS,
KC_LALT,    DE_U,     DE_I,         DE_A,         DE_E,       DE_O,          /**/  DE_S,        DE_N,              DE_R,     DE_T,    DE_D,  DE_Y,
KC_LSFT,    DE_UDIA,  DE_ODIA,      DE_ADIA,      DE_P,       DE_Z,          /**/  DE_B,        DE_M,              DE_COMM,  DE_DOT,  DE_J,  KC_ENTER,
/**/        /**/      TO(_GAMING),  TO(_QWERTY),  /**/        /**/           /**/  /**/         /**/               KC_F11,   KC_F12,  /**/   /**/
/**/        /**/      /**/          /**/          KC_LGUI,    KC_SPACE,      /**/  KC_LSFT,     KC_LCTL,           /**/      /**/     /**/   /**/
/**/        /**/      /**/          /**/          TO(_NEO),   MO(_SPECIAL),  /**/  MO(_MOVE),   KC_KB_VOLUME_UP,   /**/      /**/     /**/   /**/
/**/        /**/      /**/          /**/          TO(_HOTS),  TO(_STENO),    /**/  KC_KB_MUTE,  TO(_TEST)  /**/      /**/     /**/   /**/
    ),

    [_SPECIAL] = LAYOUT(
KC_NO,    KC_NO,    DE_UNDS,  DE_LBRC,  DE_RBRC,  DE_CIRC,  /**/  DE_EXLM,  DE_LABK,  DE_RABK,  DE_EQL,   DE_AMPR,  KC_NO,
KC_TRNS,  DE_BSLS,  DE_SLSH,  DE_LCBR,  DE_RCBR,  DE_ASTR,  /**/  DE_QUES,  DE_LPRN,  DE_RPRN,  DE_MINS,  DE_COLN,  DE_AT,
KC_TRNS,  DE_HASH,  DE_DLR,   DE_PIPE,  DE_TILD,  DE_GRV,   /**/  DE_PLUS,  DE_PERC,  DE_DQUO,  DE_QUOT,  DE_SCLN,  KC_TRNS,
/**/      /**/      KC_NO,    KC_NO,    /**/      /**/      /**/  /**/      /**/      KC_TRNS,  KC_TRNS,  /**/      /**/
/**/      /**/      /**/      /**/      KC_TRNS,  KC_TRNS,  /**/  KC_TRNS,  KC_TRNS,  /**/      /**/      /**/
/**/      /**/      /**/      /**/      KC_NO,    KC_TRNS,  /**/  KC_TRNS,  KC_TRNS,  /**/      /**/      /**/      /**/
/**/      /**/      /**/      /**/      KC_NO,    KC_NO,    /**/  KC_TRNS,  KC_TRNS   /**/      /**/      /**/      /**/
    ),

    [_MOVE] = LAYOUT(
KC_NO,    KC_PGUP,    KC_BSPC,  KC_UP,      KC_DELETE,  KC_PGDN,  /**/  KC_PSCR,  DE_7,     DE_8,     DE_9,     DE_PLUS,  DE_MINS,
KC_TRNS,  KC_HOME,    KC_LEFT,  KC_DOWN,    KC_RIGHT,   KC_END,   /**/  DE_0,     DE_4,     DE_5,     DE_6,     DE_COMM,  DE_DOT,
KC_TRNS,  KC_ESCAPE,  KC_TAB,   KC_INSERT,  KC_ENTER,   KC_NO,    /**/  DE_0,     DE_1,     DE_2,     DE_3,     DE_SCLN,  KC_NO,
/**/      /**/        KC_NO,    KC_NO,      /**/        /**/      /**/  /**/      /**/      KC_TRNS,  KC_TRNS,  /**/      /**/
/**/      /**/        /**/      /**/        KC_TRNS,    KC_TRNS,  /**/  KC_TRNS,  KC_TRNS,  /**/      /**/      /**/      /**/
/**/      /**/        /**/      /**/        KC_NO,      DE_0,     /**/  KC_TRNS,  KC_TRNS,  /**/      /**/      /**/      /**/
/**/      /**/        /**/      /**/        KC_NO,      KC_NO,    /**/  KC_TRNS,  KC_TRNS   /**/      /**/      /**/      /**/
    ),

    [_HOTS] = LAYOUT(
KC_ESCAPE,  DE_1,  DE_2,         DE_3,         DE_4,      DE_5,        /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_TAB,     DE_Q,  DE_W,         DE_E,         DE_R,      DE_T,        /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_LSFT,    DE_A,  DE_Y,         DE_D,         DE_H,      DE_B,        /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
/**/        /**/   TO(_GAMING),  TO(_QWERTY),  /**/       /**/         /**/  /**/    /**/    KC_NO,  KC_NO,  /**/    /**/
/**/        /**/   /**/          /**/          KC_LALT,   KC_LALT,     /**/  KC_NO,  KC_NO,  /**/    /**/    /**/    /**/
/**/        /**/   /**/          /**/          TO(_NEO),  KC_NO,       /**/  KC_NO,  KC_NO,  /**/    /**/    /**/    /**/
/**/        /**/   /**/          /**/          KC_NO,     TO(_STENO),  /**/  KC_NO,  KC_NO   /**/    /**/    /**/    /**/
    ),

    [_GAMING] = LAYOUT(
DE_I,  KC_TAB,   DE_Q,   DE_W,         DE_E,       DE_R,        /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
DE_M,  KC_LSFT,  DE_A,   DE_S,         DE_D,       DE_F,        /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
DE_T,  KC_LCTL,  DE_Y,   DE_X,         DE_C,       DE_V,        /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
/**/   /**/      KC_NO,  TO(_QWERTY),  /**/        /**/         /**/  /**/    /**/    KC_NO,  KC_NO,  /**/    /**/
/**/   /**/      /**/    /**/          KC_LALT,    KC_SPACE,    /**/  KC_NO,  KC_NO,  /**/    /**/    /**/    /**/
/**/   /**/      /**/    /**/          TO(_NEO),   MO(_NUM),    /**/  KC_NO,  KC_NO,  /**/    /**/    /**/    /**/
/**/   /**/      /**/    /**/          TO(_HOTS),  TO(_STENO),  /**/  KC_NO,  KC_NO   /**/    /**/    /**/    /**/
    ),

    [_NUM] = LAYOUT(
KC_NO,      KC_LCTL,  DE_1,   DE_2,   DE_3,   KC_NO,    /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_ESCAPE,  DE_0,     DE_4,   DE_5,   DE_6,   KC_NO,    /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_NO,      KC_LCTL,  DE_7,   DE_8,   DE_9,   KC_NO,    /**/  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
/**/        /**/      KC_NO,  KC_NO,  /**/    /**/      /**/  /**/    /**/    KC_NO,  KC_NO,  /**/    /**/
/**/        /**/      /**/    /**/    KC_NO,  KC_NO,    /**/  KC_NO,  KC_NO,  /**/    /**/    /**/    /**/
/**/        /**/      /**/    /**/    KC_NO,  KC_TRNS,  /**/  KC_NO,  KC_NO,  /**/    /**/    /**/    /**/
/**/        /**/      /**/    /**/    KC_NO,  KC_NO,    /**/  KC_NO,  KC_NO   /**/    /**/    /**/    /**/
    ),

    [_STENO] = LAYOUT(
KC_NO,  DE_T,  DE_W,         DE_E,         DE_R,       DE_T,   /**/  DE_T,   DE_U,   DE_I,   DE_O,   DE_P,     DE_UDIA,
KC_NO,  DE_A,  DE_S,         DE_D,         DE_F,       DE_T,   /**/  DE_T,   DE_J,   DE_K,   DE_L,   DE_ODIA,  DE_ADIA,
KC_NO,  DE_1,  DE_2,         DE_3,         DE_4,       DE_5,   /**/  DE_6,   DE_7,   DE_8,   DE_9,   DE_0,     KC_NO,
/**/    /**/   TO(_GAMING),  TO(_QWERTY),  /**/        /**/    /**/  /**/    /**/    KC_NO,  KC_NO,  /**/      /**/
/**/    /**/   /**/          /**/          DE_C,       DE_V,   /**/  DE_N,   DE_M,   /**/    /**/    /**/      /**/
/**/    /**/   /**/          /**/          TO(_NEO),   DE_2,   /**/  DE_3,   KC_NO,  /**/    /**/    /**/      /**/
/**/    /**/   /**/          /**/          TO(_HOTS),  KC_NO,  /**/  KC_NO,  KC_NO   /**/    /**/    /**/      /**/
    ),

    [_QWERTY] = LAYOUT(
KC_ESCAPE,  DE_Q,  DE_W,         DE_E,   DE_R,       DE_T,        /**/  DE_Z,   DE_U,   DE_I,     DE_O,    DE_P,     DE_UDIA,
KC_LSFT,    DE_A,  DE_S,         DE_D,   DE_F,       DE_G,        /**/  DE_H,   DE_J,   DE_K,     DE_L,    DE_ODIA,  DE_ADIA,
KC_LCTL,    DE_Y,  DE_X,         DE_C,   DE_V,       DE_B,        /**/  DE_N,   DE_M,   DE_COMM,  DE_DOT,  DE_MINS,  KC_RSFT,
/**/        /**/   TO(_GAMING),  KC_NO,  /**/        /**/         /**/  /**/    /**/    KC_NO,    KC_NO,   /**/      /**/
/**/        /**/   /**/          /**/    KC_LALT,    KC_SPACE,    /**/  KC_NO,  KC_NO,  /**/      /**/     /**/      /**/
/**/        /**/   /**/          /**/    TO(_NEO),   KC_LGUI,     /**/  KC_NO,  KC_NO,  /**/      /**/     /**/      /**/
/**/        /**/   /**/          /**/    TO(_HOTS),  TO(_STENO),  /**/  KC_NO,  KC_NO   /**/      /**/     /**/      /**/
    ),

    [_TEST] = LAYOUT(
DE_L,  DE_L,  DE_L,  DE_L,  DE_L,      DE_L,  /**/  DE_R,  DE_R,    DE_R,  DE_R,  DE_R,  DE_R,
DE_L,  DE_L,  DE_L,  DE_L,  DE_L,      DE_L,  /**/  DE_R,  DE_R,    DE_R,  DE_R,  DE_R,  DE_R,
DE_L,  DE_L,  DE_L,  DE_L,  DE_L,      DE_L,  /**/  DE_R,  DE_R,    DE_R,  DE_R,  DE_R,  DE_R,
/**/   /**/   DE_L,  DE_L,  /**/       /**/   /**/  /**/   /**/     DE_R,  DE_R,  /**/   /**/
/**/   /**/   /**/   /**/   DE_L,      DE_L,  /**/  DE_R,  DE_R,    /**/   /**/   /**/   /**/
/**/   /**/   /**/   /**/   TO(_NEO),  DE_L,  /**/  DE_R,  DE_R,    /**/   /**/   /**/   /**/
/**/   /**/   /**/   /**/   DE_L,      DE_L,  /**/  DE_R,  KC_TRNS  /**/   /**/   /**/   /**/
    )

};

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}
