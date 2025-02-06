#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
/* enum layer_names { */
/*     _QWERTY, */
/*     _COLEMAK, */
/*     _DVORAK, */
/*     _LOWER, */
/*     _RAISE, */
/*     _ADJUST */
/* }; */

/* enum custom_keycodes { */
/*   QWERTY = SAFE_RANGE, */
/*   COLEMAK, */
/*   DVORAK, */
/*   LOWER, */
/*   RAISE, */
/*   ADJUST, */
/* }; */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_NO,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    LT(2, KC_G),    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, RSFT_T(KC_QUOT),
  LGUI_T(KC_LEFT), KC_Z,    KC_X,    KC_C,    LT(1,KC_V),    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RGUI_T(KC_RIGHT),
  KC_NO,        KC_NO,   KC_NO, LALT_T(KC_DOWN), LCTL_T(KC_TAB),    LSFT_T(KC_BSPC),
                                                                                  LT(1, KC_SPC),    RCTL_T(KC_ENT),   LALT_T(KC_UP),KC_NO, KC_NO,   KC_NO
),
[1] = LAYOUT(
             KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
                                                        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,


           KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,
                                                                          KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,

                 KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,
                                                                          KC_6, KC_7, KC_8, KC_9, KC_0, KC_END,

                 KC_NO, KC_MINUS, KC_UNDS, KC_EQL, KC_PLUS, KC_BSLS, // 4 left row
                                                                          KC_HOME, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_DEL,
                  KC_NO, KC_NO, KC_NO,KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS,KC_NO, KC_NO, KC_NO
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | GUI  |Lower |Space |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */

[2] = LAYOUT(


                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                                          /* QK_MACRO_3, QK_MACRO_0, QK_MACRO_1,QK_MACRO_2, KC_VOLD, KC_VOLU, */
                                                                          LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)), LALT(KC_F4), KC_NO, KC_NO,LGUI(KC_Q),

                 BL_TOGG, BL_STEP, BL_UP, BL_DOWN, QK_BOOTLOADER, KC_NO,

                                                                           /* KC_HOME, LCTL(KC_LEFT), LCTL(KC_RIGHT),KC_END,  KC_NO, QK_MACRO_1, */
                                                                         KC_MS_L, KC_MS_D,KC_MS_U,KC_MS_R, KC_HOME,KC_END,

                 KC_NO, LGUI_T(KC_NO),KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,
                 /* KC_NO, KC_NO,KC_NO, KC_NO, KC_NO, KC_NO, */

                                                                          KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, QK_MACRO_2,

                 /* KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, */

            RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD,

                                                                           KC_BTN1,KC_WH_D,KC_WH_U,KC_BTN2, QK_MACRO_0, QK_MACRO_3,

                                                                           /* LGUI(LCTL(KC_LEFT)),KC_PAGE_DOWN,KC_PAGE_UP, LGUI(LCTL(KC_RIGHT)),QK_MACRO_4, LCTL(LALT(KC_DEL)), */

                 KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,

                                                                          KC_TRNS,  KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
)

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |     |    \  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
/* [_LOWER] = LAYOUT( */
/*   KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, */
/*   KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, */
/*   KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, */
/*   BL_STEP, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,S(KC_NUHS),S(KC_NUBS),KC_HOME,KC_END, _______, */
/*   _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY */
/* ), */

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
/* [_RAISE] = LAYOUT( */
/*   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, */
/*   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, */
/*   KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, */
/*   _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______, */
/*   _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY */
/* ), */

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset|RGB Tg|RGB Md|Hue Up|Hue Dn|Sat Up|Sat Dn|Val Up|Val Dn|      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
/* [_ADJUST] =  LAYOUT( */
/*   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, */
/*   _______, QK_BOOT  , RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, KC_DEL, */
/*   _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK, DVORAK,  _______, _______, */
/*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
/*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ */
/* ) */


};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_0:
                SEND_STRING(" <- ");
                return false;
            /* case QK_MACRO_1: */
            /*     SEND_STRING(" %in% "); */
            /*     return false; */
            case QK_MACRO_2:
                SEND_STRING(" |> ");
                return false;
            case QK_MACRO_3:
                SEND_STRING(" %>% ");
                return false;
        }
    }

    return true;
};


/* const uint16_t PROGMEM test_combo1[] = {KC_J, KC_K, COMBO_END}; */
/* const uint16_t PROGMEM test_combo2[] = {KC_F, KC_J, COMBO_END}; */
/* const uint16_t PROGMEM test_combo3[] = {KC_E, KC_I, COMBO_END}; */
/* const uint16_t PROGMEM test_combo4[] = {KC_F, KC_SPC, COMBO_END}; */
/* const uint16_t PROGMEM test_combo5[] = {KC_TAB,KC_ENT, COMBO_END}; */
/* combo_t key_combos[COMBO_COUNT] = { */
/*     COMBO(test_combo1, KC_ESC), */
/*     COMBO(test_combo2, OSM(MOD_LSFT)), // keycodes with modifiers are possible too! */
/*     COMBO(test_combo3, CW_TOGG) */
/*     /\* COMBO(test_combo4, KC_UNDS), *\/ */
/*     /\* COMBO(test_combo5, KC_A) *\/ */
/* }; */
/* #ifdef AUDIO_ENABLE */
/* float tone_qwerty[][2]     = SONG(QWERTY_SOUND); */
/* float tone_dvorak[][2]     = SONG(DVORAK_SOUND); */
/* float tone_colemak[][2]    = SONG(COLEMAK_SOUND); */
/* #endif */

/* void persistent_default_layer_set(uint16_t default_layer) { */
/*   eeconfig_update_default_layer(default_layer); */
/*   default_layer_set(default_layer); */
/* } */

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
/*   switch (keycode) { */
/*     case QWERTY: */
/*       if (record->event.pressed) { */
/*         #ifdef AUDIO_ENABLE */
/*           PLAY_SONG(tone_qwerty); */
/*         #endif */
/*         persistent_default_layer_set(1UL<<_QWERTY); */
/*       } */
/*       return false; */
/*       break; */
/*     case COLEMAK: */
/*       if (record->event.pressed) { */
/*         #ifdef AUDIO_ENABLE */
/*           PLAY_SONG(tone_colemak); */
/*         #endif */
/*         persistent_default_layer_set(1UL<<_COLEMAK); */
/*       } */
/*       return false; */
/*       break; */
/*     case DVORAK: */
/*       if (record->event.pressed) { */
/*         #ifdef AUDIO_ENABLE */
/*           PLAY_SONG(tone_dvorak); */
/*         #endif */
/*         persistent_default_layer_set(1UL<<_DVORAK); */
/*       } */
/*       return false; */
/*       break; */
/*     case LOWER: */
/*       if (record->event.pressed) { */
/*         layer_on(_LOWER); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } else { */
/*         layer_off(_LOWER); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } */
/*       return false; */
/*       break; */
/*     case RAISE: */
/*       if (record->event.pressed) { */
/*         layer_on(_RAISE); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } else { */
/*         layer_off(_RAISE); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } */
/*       return false; */
/*       break; */
/*     case ADJUST: */
/*       if (record->event.pressed) { */
/*         layer_on(_ADJUST); */
/*       } else { */
/*         layer_off(_ADJUST); */
/*       } */
/*       return false; */
/*       break; */
/*   } */
/*   return true; */
/* } */
