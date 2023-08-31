#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
                 KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5,
                                                                            KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, //right 1

                 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, //left 2

                                                                            KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, //right 2

                 KC_ESC, KC_A, KC_S, KC_D, KC_F, LT(2,KC_G),
                                                                            KC_H, KC_J, KC_K, KC_L, KC_SCLN, RSFT_T(KC_QUOT),

                 LGUI_T(KC_LEFT), KC_Z, KC_X, KC_C, LT(1,KC_V), KC_B,
                                                                          KC_NO, KC_NO,

                                                                          KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RGUI_T(KC_RIGHT),

                 LALT_T(KC_DOWN),    LCTL_T(KC_TAB),    LSFT_T(KC_BSPC),

                                                                         LT(1, KC_SPC),    RCTL_T(KC_ENT),   LALT_T(KC_UP)),


	[1] = LAYOUT(
                 KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
                                                                          KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
                 KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,
                                                                          KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
                 KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,
                                                                          KC_6, KC_7, KC_8, KC_9, KC_0, KC_DOT,
                 KC_NO, KC_MINUS, KC_UNDS, KC_EQL,KC_PLUS, KC_BSLS, // 4 left row
                                                                          KC_NO, KC_NO,
                                                                          KC_SPC, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_DEL,
                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                                          KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(

                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                 BL_TOGG, BL_STEP, BL_UP, BL_DOWN, QK_BOOTLOADER, KC_NO,

                                                                           KC_HOME, KC_END, CW_TOGG, KC_INS,  LALT(KC_F4), LGUI(KC_Q),

                 KC_NO, LGUI_T(KC_NO),KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,

                                                                          KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, QK_MACRO_2,


            RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD,


                                                                          KC_NO, KC_NO,

                                                                           LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)), LGUI(KC_LEFT),LGUI(KC_RIGHT), QK_MACRO_0, LCTL(LALT(KC_DEL)),

                 KC_TRNS, KC_TRNS, KC_TRNS,

                                                                          KC_TRNS,  KC_TRNS, KC_TRNS)

	/* [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
    /*              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
    /*              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
    /*              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS) */
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
            case QK_MACRO_1:
                SEND_STRING(" %in% ");
                return false;
            case QK_MACRO_2:
                SEND_STRING(" %>% ");
                return false;
            case QK_MACRO_3:
                SEND_STRING("```{r}"SS_TAP(X_ENT)SS_TAP(X_ENT)"```"SS_TAP(X_UP));
                return false;
        }
    }

    return true;
};


const uint16_t PROGMEM test_combo1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM test_combo3[] = {KC_E, KC_I, COMBO_END};
/* const uint16_t PROGMEM test_combo4[] = {KC_F, KC_SPC, COMBO_END}; */
/* const uint16_t PROGMEM test_combo5[] = {KC_TAB,KC_ENT, COMBO_END}; */
combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, OSM(MOD_LSFT)), // keycodes with modifiers are possible too!
    COMBO(test_combo3, CW_TOGG)
    /* COMBO(test_combo4, KC_UNDS), */
    /* COMBO(test_combo5, KC_A) */
};
