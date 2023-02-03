#include QMK_KEYBOARD_H
#include "keymap_portuguese.h"

enum layer_number {
  _QWERTY = 0,
  _SYMBOL,
  _MOVE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | DEL  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ´   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ç  |  ~   |
 * |------+------+------+------+------+------|QUERTY |    | RGUI  |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RSHIFT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    PT_ACUT,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    PT_CCED, PT_TILD,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,TO(_QWERTY), KC_APP, KC_N,    KC_M,    PT_COMM, PT_DOT,  PT_MINS, KC_RSFT,
                       KC_LALT, KC_LGUI, MO(_SYMBOL),KC_SPACE,   KC_ENT, KC_RCTL, KC_BSPC,TG(_MOVE)
 ),

/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |  5   |                    |   6  |   7  |   8  |   9  |   0  | DEL  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS |  !   |  "   |  #   |  $   |  %   |                    |  &   |  /   |   (  |   )  |  =   |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|  |   |  @   |  <   |  >   |  \   |-------.    ,-------|  ^   |   &  |   {  |   }  |  +   |  *   |
 * |------+------+------+------+------+------| QUERTY|    | RGUI  |------+------+------+------+------+------|
 * |LCTRL |  º   |  €   |  £   |  §   |  ¨   |-------|    |-------|  ;   |   :  |   [  |   ]  |  ?   |RSHIFT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_SYMBOL] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
  KC_CAPS, PT_EXLM, PT_DQUO, PT_HASH, PT_DLR , PT_PERC,                   PT_AMPR, PT_SLSH, PT_LPRN, PT_RPRN, PT_EQL , KC_F12,
  _______, PT_PIPE, PT_AT  , PT_LABK, PT_RABK, PT_BSLS,                   PT_CIRC, PT_AMPR, PT_LCBR, PT_RCBR, PT_PLUS, PT_ASTR,
  _______, PT_MORD, PT_EURO, PT_PND , PT_SECT, PT_DIAE, _______, _______, PT_SCLN, PT_COLN, PT_LBRC, PT_RBRC, PT_QUES, KC_RSFT,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
/* MOVE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |-------+------+------+------+------+-----|                    |------+------+------+------+------+------|
 * | TAB  | BRIU | VOLU | MPLY | MPRV |      |                    |      | HOME | END  | DEL  | PSCR |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT| BRID | VOLD | MUTE | MNXT |      |-------.    ,-------| Left | Down |  Up  |Right |      | INS  |
 * |------+------+------+------+------+------| QUERTY|    | RGUI  |------+------+------+------+------+------|
 * |LCTRL | KC_Z | KC_X | KC_C | KC_V | KC_B |-------|    |-------|      | PGDN | PGDU |      | ESC  |RSHIFT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_MOVE] = LAYOUT(
  KC_F1  ,  KC_F2  ,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7  ,  KC_F8 , KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_TAB ,  KC_BRIU,   KC_VOLU, KC_MPLY, KC_MPRV, XXXXXXX,                      XXXXXXX, KC_HOME, KC_END,  KC_DEL,  KC_ESC,  KC_PSCR,
  _______,  KC_BRID,   KC_VOLD, KC_MUTE, KC_MNXT, XXXXXXX,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_INS ,
  _______,  KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,   _______,    _______,  XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX, KC_ESC, _______,
                             _______, _______, _______,  _______,       _______,  _______, _______, _______
),

/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
                             _______, _______, _______, _______, _______,  _______, _______, _______
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SYMBOL, _MOVE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);
// Animation parameters
#define FRAME_DURATION 1500// How long each frame lasts in milliseconds
#define MAX_FRAME_POS 4
// Animation variables
uint32_t timer = 0;
uint8_t current_frame = 0;
int8_t current_frame_inc = 1;

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {

    // Run animation
    if (timer_elapsed(timer) > FRAME_DURATION) {
        // Set timer to updated time
        timer = timer_read();

        if (current_frame == MAX_FRAME_POS)
            current_frame_inc = -1;
        if (current_frame == 0)
            current_frame_inc = 1;

        // Increment frame
        current_frame = (current_frame + current_frame_inc);
    }

    switch (current_frame) {
        case 0:
            oled_write_ln_P(PSTR(" =////="), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("   =////="), false);
            break;
        case 2:
            oled_write_ln_P(PSTR("     =////="), false);
            break;
        case 3:
            oled_write_ln_P(PSTR("       =////="), false);
            break;
        case 4:
            oled_write_ln_P(PSTR("         =////="), false);
            break;
        default:
            oled_write_ln_P(PSTR(" =////="), false);
    }

    led_t led_state = host_keyboard_led_state();
    oled_write_P(PSTR("layer: "), false);
    // Switch on current active layer
    switch (get_highest_layer(layer_state)) {
        case _QWERTY :
            oled_write_ln_P(led_state.caps_lock ? PSTR(" QUERTY") : PSTR("querty"), false);
            break;
        case _SYMBOL :
            oled_write_ln_P(led_state.caps_lock ? PSTR(" SYMBOL") : PSTR("symbol"), false);
            break;
        case _MOVE :
            oled_write_ln_P(led_state.caps_lock ? PSTR(" MOVE") : PSTR("move"), false);
            break;
        case _ADJUST :
            oled_write_ln_P(led_state.caps_lock ? PSTR(" LED") : PSTR("led"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);

    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
