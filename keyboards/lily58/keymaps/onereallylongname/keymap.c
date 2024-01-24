#include QMK_KEYBOARD_H
#include "keymap_portuguese.h"

enum layer_number {
  _QWERTY = 0,
  _SYMBOL,
  _MOVE,
  _CTRL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | DEL  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ´   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ç  |  ~   |
 * |------+------+------+------+------+------| code  |    | APP   |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RSHIFT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    PT_CCED, PT_TILD,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, RWIN(KC_1), KC_APP, KC_N,    KC_M,    PT_COMM, PT_DOT,  PT_MINS, KC_RSFT,
                       KC_LALT, KC_LGUI, MO(_SYMBOL), KC_SPACE,  KC_ENT, KC_RCTL, KC_BSPC,MO(_MOVE)
 ),

/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS |  !   |  "   |  #   |  $   |  %   |                    |  &   |  /   |   (  |   )  |  =   |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LAlt |  |   |  @   |  \   |  <   |  >   |-------.    ,-------|  ^   |   &  |   {  |   }  |  *   |  +   |
 * |------+------+------+------+------+------| QUERTY|    | RGUI  |------+------+------+------+------+------|
 * |LCTRL |  º   |  ª   |  €   |  §   |  £   |-------|    |-------|  ;   |   :  |   [  |   ]  |  ?   |RSHIFT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_SYMBOL] = LAYOUT(
  KC_F1  ,  KC_F2 ,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                  KC_F7  ,  KC_F8 , KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_CAPS, PT_EXLM, PT_DQUO, PT_HASH, PT_DLR , PT_PERC,                  PT_AMPR, PT_SLSH, PT_LPRN, PT_RPRN, PT_EQL , PT_QUOT,
  KC_LALT, PT_PIPE, PT_AT  , KC_GRV,  PT_LABK, PT_RABK,                  PT_CIRC, PT_AMPR, PT_LCBR, PT_RCBR, PT_ASTR, PT_PLUS,
  _______, PT_MORD, PT_FORD, PT_EURO, PT_SECT, PT_PND, _______, _______, PT_SCLN, PT_COLN, PT_LBRC, PT_RBRC, PT_QUES, KC_RSFT,
                             _______, _______, _______, _______, _______,  _______, XXXXXXX, TO(_MOVE)
),
/* MOVE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | DEL  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   1  |   2  |   3  |   4  |   5  |                    |      | HOME | END  | DEL  | ESC  | PSCR |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT|   6  |   7  |   8  |   9  |   0  |-------.    ,-------| Left | Down |  Up  |Right |      | INS  |
 * |------+------+------+------+------+------| QUERTY|    | RGUI  |------+------+------+------+------+------|
 * |LCTRL |  F2  |  F3  |  F4  |  F5  |  F6  |-------|    |-------|      | PGDN | PGDU |      | ESC  |RSHIFT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_MOVE] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  KC_TAB ,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                           XXXXXXX, KC_HOME, KC_END,  KC_DEL,  KC_ESC,  KC_PSCR,
  _______,  KC_6,   KC_7,    KC_8,    KC_9,    KC_0,                           KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_INS ,
  _______,  KC_F2,  KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______,     _______,  XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX, KC_ESC, _______,
                          _______, _______, _______,  _______,     _______,  _______, _______, XXXXXXX
),

/* CTRL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | BRIU | VOLU | MPLY | MPRV |      |                    |  F13 |  F14 |  F15 | F16  | F17  | F18  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LAlt | BRID | VOLD | MUTE | MNXT |      |-------.    ,-------|      |RGB ON| HUE+ | SAT+ | VAL+ |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+-------+-----|
 * |      |      |      |      |      |      |-------|    |-------|      | MODE | HUE- | SAT- | VAL- |RSHIFT|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP|QWERTY|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_CTRL] = LAYOUT(
  KC_F1  ,  KC_F2 ,   KC_F3,   KC_F4,   KC_F5,  KC_F6,                    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  XXXXXXX, KC_BRIU, KC_VOLU, KC_MPLY, KC_MPRV, XXXXXXX,                   KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,
  KC_LALT, KC_BRID, KC_VOLD, KC_MUTE, KC_MNXT, XXXXXXX,                   XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, TO(_QWERTY), XXXXXXX
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SYMBOL, _MOVE, _CTRL);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

void print_top_animation(uint8_t frameNumber) {

    switch (frameNumber) {
        case 0:
            oled_write_ln_P(PSTR("          *      "), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("         ***     "), false);
            break;
        case 2:
            oled_write_ln_P(PSTR("        ** **    "), false);
            break;
        case 3:
            oled_write_ln_P(PSTR("       **   **   "), false);
            break;
        case 4:
            oled_write_ln_P(PSTR("      **     **  "), false);
            break;
         case 5:
            oled_write_ln_P(PSTR("     **       ** "), false);
            break;
         case 6:
            oled_write_ln_P(PSTR("    **         **"), false);
            break;
       default:
            oled_write_ln_P(PSTR("   **           **"), false);
    }
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);
// Animation parameters
#define FRAME_DURATION 400// How long each frame lasts in milliseconds
#define POINTER_FRAME_DURATION 1000// How long each pointer frame lasts in milliseconds
#define MAX_FRAME_POS 7
// Animation variables
uint32_t timer = 0;
uint8_t current_frame = 0;
int8_t current_frame_inc = 1;
uint32_t timer_pointer = 0;
int8_t current_pointer_frame = 0;

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    uint16_t time_since_last_frame = timer_elapsed(timer);
    if ( time_since_last_frame > FRAME_DURATION) {
        // Set timer to updated time
        timer = timer_read();

        current_pointer_frame = current_pointer_frame ? 0 : 1;
    }

    uint16_t time_since_last_pointer = timer_elapsed(timer_pointer);
    if ( time_since_last_pointer > FRAME_DURATION) {
        // Set timer to updated time
        timer_pointer = timer_read();

        if (current_frame == MAX_FRAME_POS)
            current_frame_inc = -1;
        if (current_frame == 0)
            current_frame_inc = 1;

        // Increment frame
        current_frame = (current_frame + current_frame_inc);
    }

    print_top_animation(current_frame);

    // oled_write_P(PSTR("layer: "), false);
    // Switch on current active layer
    led_t led_state = host_keyboard_led_state();
    switch (get_highest_layer(layer_state)) {
        case _QWERTY :
            if (current_pointer_frame)
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR(" >QWERTY<   SYMBOL")
              : PSTR(" >qwerty<   symbol"), false);
            }
            else
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR(" -QWERTY-   SYMBOL")
              : PSTR(" -qwerty-   symbol"), false);
            }
            oled_write_ln_P(led_state.caps_lock
            ? PSTR("  MOVE      CTRL")
            : PSTR("  move      ctrl"), false);
            break;
        case _SYMBOL :
            if (current_pointer_frame)
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR("  QWERTY   >SYMBOL< ")
              : PSTR("  qwerty   >symbol< "), false);
            }
            else
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR("  QWERTY   -SYMBOL-")
              : PSTR("  qwerty   -symbol-"), false);
            }
            oled_write_ln_P(led_state.caps_lock
            ? PSTR("  MOVE      CTRL")
            : PSTR("  move      ctrl"), false);
            break;
        case _MOVE :
            oled_write_ln_P(led_state.caps_lock
            ? PSTR("  QWERTY    SYMBOL")
            : PSTR("  qwerty    symbol"), false);
            if (current_pointer_frame)
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR(" >MOVE<     CTRL")
              : PSTR(" >move<     ctrl"), false);
            }
            else
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR(" -MOVE-     CTRL")
              : PSTR(" -move-     ctrl"), false);
            }
            break;
        case _CTRL :
            oled_write_ln_P(led_state.caps_lock
            ? PSTR("  QWERTY    SYMBOL")
            : PSTR("  qwerty    symbol"), false);
            if (current_pointer_frame)
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR("  MOVE     >CTRL< ")
              : PSTR("  move     >ctrl< "), false);
            }
            else
            {
              oled_write_ln_P(led_state.caps_lock
              ? PSTR("  MOVE     -CTRL-")
              : PSTR("  move     -ctrl-"), false);
            }
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_P(PSTR(":Undefined:"), false);
    }

    print_top_animation(current_frame);

  } else {
    oled_write(read_logo(), false);
  }
    return false;
}

#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    // set_timelog();
  }
  return true;
}
