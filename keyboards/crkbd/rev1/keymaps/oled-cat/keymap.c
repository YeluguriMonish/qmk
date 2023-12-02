#include QMK_KEYBOARD_H
#include <stdio.h>

char wpm_str[10];

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        TG(3), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_BSLS, OSM(MOD_LGUI), LCTL_T(KC_A), LT(5, KC_S), LT(1, KC_D), KC_F,
        KC_G, KC_H, KC_J, LT(2, KC_K), LT(4, KC_L), LCTL_T(KC_SCLN), KC_QUOT,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
        KC_SLSH, KC_RSFT, KC_LALT, KC_SPC, KC_ESC, KC_ENT, KC_TAB, KC_BSPC),

    [1] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_LGUI, KC_LSFT,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_4,
                             KC_5, KC_6, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_NO,
                             KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                             KC_TRNS),

    [2] = LAYOUT_split_3x6_3(KC_NO, KC_TILD, KC_AMPR, KC_ASTR, KC_PMNS, KC_PPLS,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_GRV, KC_CIRC, KC_PERC, KC_DLR, KC_PEQL, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_EXLM, KC_AT, KC_HASH, KC_UNDS, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [3] = LAYOUT_split_3x6_3(KC_TRNS, KC_NO, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_F4, KC_F5, KC_F6, KC_NO, KC_MS_L, KC_MS_D,
                             KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1,
                             KC_BTN2, KC_NO, KC_NO),

    [4] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI,
                             KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_NO, KC_NO,
                             KC_RCTL, KC_TRNS, KC_TRNS, KC_RSFT, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [5] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI,
                             KC_LCTL, KC_TRNS, KC_TRNS, KC_LSFT, KC_NO, KC_LEFT,
                             KC_DOWN, KC_UP, KC_RGHT, KC_RCTL, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RCTL,
                             KC_LALT, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO)};

enum combos {
  F_J_OSM_MOD_LSFT,
  G_H_CAPS,
  V_M_UNDS,
  R_U_DASH,
  E_I_COLON,
};

const uint16_t PROGMEM f_j_osm[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM g_h_caps[] = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM v_m_unds[] = {KC_V, KC_M, COMBO_END};
const uint16_t PROGMEM r_u_dash[] = {KC_R, KC_U, COMBO_END};
const uint16_t PROGMEM e_i_colon[] = {KC_E, KC_I, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [F_J_OSM_MOD_LSFT] = COMBO(f_j_osm, OSM(MOD_LSFT)),
    [G_H_CAPS] = COMBO(g_h_caps, KC_CAPS),
    [V_M_UNDS] = COMBO(v_m_unds, KC_UNDS),
    [R_U_DASH] = COMBO(r_u_dash, KC_MINS),
    [E_I_COLON] = COMBO(e_i_colon, KC_COLN),
};
