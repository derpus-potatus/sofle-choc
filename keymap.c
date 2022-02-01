#include QMK_KEYBOARD_H

// Keymap and layers
enum sofle_layers {
    _QWERTYWIN = 0,
    _QWERTYMAC,
    _LOWER,
    _RAISE,
    _ADJUST,
};


#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

// Not used unless persistent default layer is desired
enum custom_keycodes {
    KC_WIN = SAFE_RANGE,
    KC_MAC
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTYWIN
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | GRV  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| MPLY  |    | Caps  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTRL| LGUI | LALT | Lower| / Space /       \Space \  |RAISE | Enter| RALT | RGUI  |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_QWERTYWIN] = LAYOUT(
  //,------------------------------------------------.                    ,---------------------------------------------------.
  KC_ESC,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_MINS,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_GRV,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,      KC_MPLY,  KC_CAPS, KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT),
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                  KC_LCTRL, KC_LGUI, KC_LALT, MO(_LOWER),KC_SPC,   KC_SPC, MO(_RAISE), KC_ENT, KC_RALT, KC_RGUI
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
/* QWERTYMAC
* ,-----------------------------------------.                    ,-----------------------------------------.
* | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* | GRV  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
* |------+------+------+------+------+------| MPLY  |    | Caps  |------+------+------+------+------+------|
* |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
* `-----------------------------------------/       /     \      \-----------------------------------------'
*            | LCTRL| LALT | LGUI | Lower| / Space /       \Space \  |RAISE | Enter| RALT | RGUI  |
*            |      |      |      |      |/       /         \      \ |      |      |      |      |
*            `----------------------------------'           '------''---------------------------'
*/
 [_QWERTYMAC] = LAYOUT(
 //,------------------------------------------------.                    ,---------------------------------------------------.
 KC_ESC,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
 //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
 KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_MINS,
 //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
 KC_GRV,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
 //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
 KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,      KC_MPLY,  KC_CAPS, KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT),
 //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 KC_LCTRL, KC_LALT, KC_LGUI, MO(_LOWER),KC_SPC,   KC_SPC, MO(_RAISE), KC_ENT, KC_RALT, KC_RGUI
 //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
 /* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | trans|  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|      |      |      |      |      |                    |      |      |  Up  |      |      | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|      |      |      |      |      |-------.    ,-------|      | Left | Down | Right|      |      |
 * |------+------+------+------+------+------| trans |    | trans |------+------+------+------+------+------|
 * | trans|      |      |      |      |      |-------|    |-------| PGUP | PGDN |      |      |      | trans|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | trans| trans|trans | trans| / trans /       \ trans\  |trans |trans | trans| trans |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  //,------------------------------------------------.                    ,---------------------------------------------------.
  _______,  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,  KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  _______,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO,  KC_NO,   KC_UP,   KC_NO,   KC_NO,  KC_F12,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  _______,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO,  KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,  KC_NO,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  _______,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO, _______,    _______, KC_PGUP,KC_PGDN, KC_NO,   KC_NO,   KC_NO,  _______,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * | trans| trans| trans| trans| trans| trans|                    | trans| trans| trans| LBRC | RBRC | Del  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|      |      |      |      |      |                    |      |      |  Up  |      | Pscr |  EQL |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | trans|      |      |      |      |      |-------.    ,-------|      | Left | Down | Right|      | Pipe |
 * |------+------+------+------+------+------| trans |    | trans |------+------+------+------+------+------|
 * | trans|      |      |      |      |      |-------|    |-------| Home | End  |      |      |Insert| trans|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | trans| trans|trans | trans| / trans /       \ trans\  |trans |trans | trans| trans |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  //,------------------------------------------------.                    ,---------------------------------------------------.
  _______, _______, _______,_______,_______, _______,                      _______, _______, _______,KC_LBRC, KC_RBRC,  KC_DEL,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  _______, KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_UP,  KC_NO,   KC_PSCR,  KC_EQL,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  _______, KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,                        KC_NO,   KC_LEFT, KC_DOWN,KC_RIGHT,KC_NO,    KC_BSLS,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  _______, KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,   _______,    _______, KC_HOME, KC_END,  KC_NO,  KC_NO,   KC_INS,   _______,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
/* ADJUST
 * Adjustment layer is mirrored due to bug I haven't resolved with RGB Matrix. RGB functions only affect the side of the split its triggered on.
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | RESET|      |PAUSE |SCROLL|NUMLCK| NKRO |                    | NKRO |NUMLCK|SCROLL|PAUSE |      | RESET|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | DEBUG|      |      |      |      |      |                    |      |      |      |      |      | DEBUG|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |RGBTOG|bri up|hue up|sat up|spd up|      |-------.    ,-------|      |spd up|sat up|hue up|bri up|RGBTOG|
 * |------+------+------+------+------+------| trans |    | trans |------+------+------+------+------+------|
 * |RGBMOD|bri dn|hue dn|sat dn|spd dn| WIN  |-------|    |-------| MAC  |spd dn|sat dn|hue dn|bri dn|RGBMOD|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | trans| trans|trans | trans| / trans /       \ trans\  |trans |trans | trans| trans |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT(
  //,------------------------------------------------.                    ,---------------------------------------------------.
  RESET,   KC_NO,  KC_PAUS, KC_SCRL, KC_NUM,  NK_TOGG,                     NK_TOGG, KC_NUM,  KC_SCRL, KC_PAUS, KC_NO,   RESET,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  DEBUG,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   DEBUG,
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  RGB_TOG, RGB_VAI,RGB_HUI, RGB_SAI, RGB_SPI, KC_NO,                       KC_NO,   RGB_SPI, RGB_SAI, RGB_HUI, RGB_VAI, RGB_TOG,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  RGB_MOD, RGB_VAD,RGB_HUD, RGB_SAD, RGB_SPD, KC_WIN,  _______,    _______,KC_MAC,  RGB_SPD, RGB_SAD, RGB_HUD, RGB_VAD, RGB_MOD,
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    //          \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


// RGB Matrix Configuration
#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = { {
  // Key Matrix to LED Index
    // Left
    { 28, 21, 20, 11, 10,      0 },
    { 27, 22, 19, 12,  9,      1 },
    { 26, 23, 18, 13,  8,      2 },
    { 25, 24, 17, 14,  7,      3 },
    { 16, 15,  6,  5,  4, NO_LED },

    // Right
    { 57, 50, 49, 40, 39,     29 },
    { 56, 51, 48, 41, 38,     30 },
    { 55, 52, 47, 42, 37,     31 },
    { 54, 53, 46, 43, 36,     32 },
    { 45, 44, 35, 34, 33, NO_LED }

}, {
  // LED Index to Physical Position
    // LEFT
    {  95,   7 }, {  95,  21 }, {  95,  36 }, {  95,  50 }, { 115,  64 },
    {  95,  64 }, {  76,  62 }, {  76,  48 }, {  76,  33 }, {  76,  19 },
    {  76,   5 }, {  57,   3 }, {  57,  17 }, {  57,  31 }, {  57,  46 },
    {  57,  62 }, {  38,  64 }, {  38,  48 }, {  38,  33 }, {  38,  19 },
    {  38,   5 }, {  19,   7 }, {  19,  21 }, {  19,  36 }, {  19,  50 },
    {   0,  50 }, {   0,  36 }, {   0,  21 }, {   0,   7 },

    // RIGHT
    { 129,   7 }, { 129,  21 }, { 129,  36 }, { 129,  50 }, { 119, 64 },
    { 129,  64 }, { 148,  62 }, { 148,  48 }, { 148,  33 }, { 148, 19 },
    { 148,   5 }, { 167,   3 }, { 167,  17 }, { 167,  31 }, { 167, 46 },
    { 167,  62 }, { 186,  64 }, { 186,  48 }, { 186,  33 }, { 186, 19 },
    { 186,   5 }, { 209,   7 }, { 209,  21 }, { 209,  36 }, { 209, 50 },
    { 224,  50 }, { 224,  36 }, { 224,  21 }, { 224,   7 }

}, {
  // LED Index to Flag
    // LEFT
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1,

    // RIGHT
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1, 1,
    1, 1, 1, 1

} };

#endif


// OLED configuration
#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };


    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current default persistent layer
    oled_write_ln_P(PSTR("OS\n"), false);
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTYWIN:
            oled_write_ln_P(PSTR("win"), false);
            break;
        case _QWERTYMAC:
            oled_write_ln_P(PSTR("mac"), false);
            break;
    }
    // Print Layer state
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTYWIN:
            oled_write_ln_P(PSTR("qwert\n"), false);
            break;
        case _QWERTYMAC:
            oled_write_ln_P(PSTR("qwert\n"), false);
            break;
        case _RAISE:
            oled_write_ln_P(PSTR("raise\n"), false);
            break;
        case _LOWER:
            oled_write_ln_P(PSTR("lower\n"), false);
            break;
        case _ADJUST:
            oled_write_ln_P(PSTR("adj\n\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("undef\n\n"), false);
    }

		// Print Host Keyboard LED Status
    oled_write_ln_P(PSTR("MODS\n"), false);
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("num\n") : PSTR("     "), false);
    oled_write_P(led_state.caps_lock ? PSTR("cap\n") : PSTR("     "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("scr\n") : PSTR("     "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif


// Persistent Layer
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case KC_WIN:
        if (record->event.pressed) {
          set_single_persistent_default_layer(_QWERTYWIN);
        }
        return false;
      case KC_MAC:
        if (record->event.pressed) {
          set_single_persistent_default_layer(_QWERTYMAC);
        }
        return false;
    }
    return true;
}


// Encoder mapping
#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    switch (get_highest_layer(layer_state)) {
      case _QWERTYWIN:
      case _QWERTYMAC:
        if (clockwise) {
          tap_code(KC_MPRV);
        } else {
          tap_code(KC_MNXT);
        }
        break;
      case _LOWER:
      case _RAISE:
        if (clockwise) {
          tap_code(KC_VOLD);
        } else {
          tap_code(KC_VOLU);
        }
        break;
    }
  } else {
    if (index == 1) {
      switch (get_highest_layer(layer_state)) {
        case _QWERTYWIN:
        case _QWERTYMAC:
          if (clockwise) {
            tap_code(KC_UP);
          } else {
            tap_code(KC_DOWN);
          }
          break;
        case _LOWER:
        case _RAISE:
          if (clockwise) {
            tap_code(KC_LEFT);
          } else {
            tap_code(KC_RIGHT);
          }
          break;
        }
      }
    }
    return false;
  }

#endif
