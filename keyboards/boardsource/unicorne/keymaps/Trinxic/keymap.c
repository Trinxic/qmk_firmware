#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#if __has_include("wrappers.h")
#    include "wrappers.h"
#endif

// ------------------- Layers ------------------- //
enum layers {  // Layers
    _DVRK,
    _QWRT,
    _SYMB,
    _NAV,
    _GAME,
    _GAME2,
    _FUNC,
    _SYS
};

/* Layer Blueprint:
    [_{NAME}] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                            XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                        //'--------------------------'  '--------------------------'
    ),
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVRK] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
        XXXXXXX, KC_SCLN, KC_COMM,  KC_DOT,    KC_P,    KC_Y,                         KC_F,    KC_G,    KC_C,    KC_R,    KC_L, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,	KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                         KC_D,    KC_H,    KC_T,    KC_N,    KC_S, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_QUOT,    KC_Q,    KC_J,    KC_K,    KC_X,                         KC_B,    KC_M,    KC_W,    KC_V,    KC_Z, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                            KC_LGUI, KC_BSPC, MO(_NAV), MO(_SYMB),  KC_SPC, MO(_NAV)
                                        //'--------------------------'  '--------------------------'
    ),
    [_QWRT] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
        XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,	KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                            KC_LGUI, KC_BSPC, MO(_NAV), MO(_SYMB),  KC_SPC, KC_RALT
                                        //'--------------------------'  '--------------------------'
    ),
    [_SYMB] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
        XXXXXXX, _______, _______, _______, KC_ASTR, KC_CIRC,                      KC_PLUS,    KC_1,    KC_2,    KC_3, KC_PERC, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, KC_HASH, KC_LPRN, KC_RPRN, KC_SLSH, KC_BSLS,                      KC_MINS,    KC_4,    KC_5,    KC_6,    KC_0, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, _______, KC_LBRC, KC_RBRC, KC_EXLM,  KC_GRV,                       KC_EQL,    KC_7,    KC_8,    KC_9,  KC_DLR, _______,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                           _______, _______, MO(_NAV),    XXXXXXX, _______, _______
                                        //'--------------------------'  '--------------------------'
    ),
    [_NAV] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
        XXXXXXX,TO(_FUNC),XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,  KC_END, KC_PGDN, KC_PGUP, KC_HOME, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______,  W_UNDO,   W_CUT,  W_COPY, W_PASTE,  W_BOLD,                      XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______,  M_UNDO,   M_CUT,  M_COPY, M_PASTE,  M_BOLD,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                            KC_LGUI, XXXXXXX, XXXXXXX,  MO(_SYMB), _______, _______
                                        //'--------------------------'  '--------------------------'
    ),
    [_GAME] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
           KC_P,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,                         KC_T,    KC_Y,    KC_U,    KC_I,    KC_O, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_SCLN, KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,                         KC_G,    KC_H,    KC_J,    KC_K,    KC_L, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_SLSH, KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,                         KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                          KC_LALT, MO(_GAME2), KC_SPC,  MO(_SYMB), TO(_DVRK), KC_LGUI
                                        //'--------------------------'  '--------------------------'
    ),
    [_GAME2] = LAYOUT_split_3x6_3(  // simply just for nums access for _GAME layer
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
      TO(_FUNC),    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_PLUS, XXXXXXX, XXXXXXX,XXXXXXX,TO(_FUNC), XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      KC_MINS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_EQL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                            XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                        //'--------------------------'  '--------------------------'
    ),
    [_FUNC] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
         KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,                      KC_VOLU, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,   KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,                      KC_MUTE, KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_LALT,                      KC_VOLD, KC_MPRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                        TO(_SYS), TO(_DVRK), TO(_GAME), TO(_GAME), TO(_DVRK), TO(_SYS)
                                        //'--------------------------'  '--------------------------'
    ),
    [_SYS] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------,                    ,-----------------------------------------------------,
        XXXXXXX,  QK_RBT, XXXXXXX, BL_BRTG,   BL_UP, XXXXXXX,                      RGB_MOD, RGB_VAI, RGB_SPI, XXXXXXX,  QK_RBT, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, BL_TOGG, BL_DOWN, XXXXXXX,                      RGB_TOG, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     RGB_RMOD, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX,
    //'--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------'
                                       TO(_QWRT), TO(_DVRK), TO(_GAME),  TO(_GAME), TO(_DVRK), TO(_QWRT)
                                        //'--------------------------'  '--------------------------'
    )
};


// don't touch.. idk what this does at the moment
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif

// Layer Timeout
void matrix_scan_user(void) {
    if (  // any 'toggled' layer is active
        (get_highest_layer(layer_state) == _FUNC
        || get_highest_layer(layer_state) == _SYS)
        && last_input_activity_elapsed() > 10000  // 10 seconds
    ) {
        layer_move(_DVRK);
        oled_off();  // not working...
    }

    // if (  // no mod keys are pressed for >2 seconds
}


// ------------------- Combos ------------------- //
// const uint16_t PROGMEM LR_shift_to_caps[] = {KC_LSFT, KC_RSFT, COMBO_END};
const uint16_t PROGMEM chord_caps[] = {KC_Q, KC_J, KC_W, KC_V, COMBO_END};
const uint16_t PROGMEM tab[] = {KC_DOT, KC_P, COMBO_END};
const uint16_t PROGMEM tab_symb[] = {KC_DOT, KC_ASTR, COMBO_END};
const uint16_t PROGMEM esc[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM esc_game[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM enter[] = {KC_C, KC_R, COMBO_END};
const uint16_t PROGMEM enter_symb[] = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM symb_to_func[] = {KC_3, KC_PERC, COMBO_END};
const uint16_t PROGMEM left_alt[] = {KC_QUOTE, KC_Q, COMBO_END};
const uint16_t PROGMEM left_alt_shift[] = {KC_QUOT, KC_Q, KC_J, COMBO_END};
const uint16_t PROGMEM left_alt_shift_ctrl[] = {KC_QUOT, KC_Q, KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM left_shift[] = {KC_Q, KC_J, COMBO_END};
const uint16_t PROGMEM left_ctrl[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM left_ctrl_alt[] = {KC_QUOT, KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM left_ctrl_shift[] = {KC_Q, KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM right_alt[] = {KC_V, KC_Z, COMBO_END};
const uint16_t PROGMEM right_alt_shift[] = {KC_W, KC_V, KC_Z, COMBO_END};
const uint16_t PROGMEM right_alt_shift_ctrl[] = {KC_M, KC_W, KC_V, KC_Z, COMBO_END};
const uint16_t PROGMEM right_shift[] = {KC_W, KC_V, COMBO_END};
const uint16_t PROGMEM right_ctrl[] = {KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM right_ctrl_alt[] = {KC_M, KC_W, KC_Z, COMBO_END};
const uint16_t PROGMEM right_ctrl_shift[] = {KC_M, KC_W, KC_V, COMBO_END};
combo_t key_combos[] = {
    // COMBO(LR_shift_to_caps, KC_CAPS),
    COMBO(chord_caps, KC_CAPS),
    COMBO(tab, KC_TAB),
    COMBO(tab_symb, KC_TAB),
    COMBO(esc, KC_ESC),
    COMBO(esc_game, KC_ESC),
    COMBO(enter, KC_ENT),
    COMBO(enter_symb, KC_ENT),
    COMBO(symb_to_func, TO(_FUNC)),
    COMBO(left_alt, KC_LALT),
    COMBO(left_alt_shift, LALT(KC_LSFT)),
    COMBO(left_alt_shift_ctrl, LALT(LCTL(KC_LSFT))),
    COMBO(left_shift, KC_LSFT),
    COMBO(left_ctrl, KC_LCTL),
    COMBO(left_ctrl_alt, LCTL(KC_LALT)),
    COMBO(left_ctrl_shift, LCTL(KC_LSFT)),
    COMBO(right_alt, KC_RALT),
    COMBO(right_alt_shift, RALT(KC_RSFT)),
    COMBO(right_alt_shift_ctrl, RALT(RCTL(KC_RSFT))),
    COMBO(right_shift, KC_RSFT),
    COMBO(right_ctrl, KC_RCTL),
    COMBO(right_ctrl_alt, RCTL(KC_RALT)),
    COMBO(right_ctrl_shift, RCTL(KC_RSFT)),
};


// ------------------ ?Macros? ------------------ //
// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Store the current modifier state in the variable for later reference
    mod_state = get_mods();
    switch (keycode) {
        case KC_BSPC:
            {  // Initialize a boolean variable that keeps track
               // of the delete key status: registered or not?
            static bool delkey_registered;
            if (record->event.pressed) {  // Detect the activation of either shift keys
                if (mod_state & MOD_MASK_SHIFT) {  // First temporarily canceling both shifts so that
                                                   // shift isn't applied to the KC_DEL keycode
                    del_mods(MOD_MASK_SHIFT);
                    register_code(KC_DEL);

                    // Update the boolean variable to reflect the status of KC_DEL
                    delkey_registered = true;

                    // Reapplying modifier state so that the held shift key(s)
                    // still work even after having tapped the Backspace/Delete key.
                    set_mods(mod_state);
                    return false;
                }
            } else { // on release of KC_BSPC
                // In case KC_DEL is still being sent even after the release of KC_BSPC
                if (delkey_registered) {
                    unregister_code(KC_DEL);
                    delkey_registered = false;
                    return false;
                }
            }
            // Let QMK process the KC_BSPC keycode as usual outside of shift
            return true;
        }
    }
    return true;
};


// ---------------- OLED Screens ---------------- //
#ifdef OLED_ENABLE  // commment out to show colored text (ik there's a term for this but i forgot)

// Rotate Screens
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    bool vertical_text = false;
    if (vertical_text) {  // vertical
        if (!is_keyboard_left()) { return OLED_ROTATION_180; }
        return rotation;
    } else {  // horizontal
        return OLED_ROTATION_270;
    }
}

// Layer Status
void render_current_layer(void) {
    oled_set_cursor(0, 1);
    switch (get_highest_layer(layer_state)) {
        case _DVRK:
            oled_write_P(PSTR(" DVRK\n"), false); break;
        case _QWRT:
            oled_write_P(PSTR(" QWRT\n"), false); break;
        case _SYMB:
            oled_write_P(PSTR(" SYMB\n"), false); break;
        case _NAV:
            oled_write_P(PSTR(" NAV \n"), false); break;
        case _GAME:
            oled_write_P(PSTR(" GAME\n"), false); break;
        case _GAME2:
            oled_write_P(PSTR("GAME2\n"), false); break;
        case _FUNC:
            oled_write_P(PSTR(" FUNC\n"), false); break;
        case _SYS:
            oled_write_P(PSTR(" SYS \n"), false); break;
        default:
            oled_write_P(PSTR("ERROR\n"), false); break;
    }
}

// Logos
static void render_apple_logo(void) {
    static const char PROGMEM raw_logo_apple[] = {  // `const unsigned char`
          0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,128,128,  0,  0,  0,
        112,124, 62, 62,159,135,128,128,128,  0,  0,  0,  0,  0,  0,  0,
          0,  0,  0,224,248,252,254,255,255,255,255,255,255,255,255,254,
        254,254,255,255,255,255,255,255,255, 31, 15,  6,  0,  0,  0,  0,
          0,  0,  0, 31,255,255,255,255,255,255,255,255,255,255,255,255,
        255,255,255,255,255,255,255,255,255,248,224,192,192,  0,  0,  0,
          0,  0,  0,  0,  0,  3,  7, 15, 31, 63,127,127,127, 63, 63, 31,
         31, 31, 31, 63, 63,127,127, 63, 63, 31, 15,  3,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo_apple, sizeof(raw_logo_apple));
}
static void render_arch_logo(void) {
    static const char PROGMEM raw_arch_logo[] = {
          0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,224,
        240,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
          0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,224,248,242,247,239,
        255,255,255,252,240,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
          0,  0,  0,  0,  0,  0,192,240,252,254,255,255,127,  7,  3,  1,
          1,  3,  7,127,255,255,255,252,184,160,128,  0,  0,  0,  0,  0,
          0,  0,  0,  8, 12,  7,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,
          0,  0,  0,  0,  0,  0,  1,  1,  3,  3,  7, 14,  8,  0,  0,  0,
    };
    oled_write_raw_P(raw_arch_logo, sizeof(raw_arch_logo));
}
static void render_windows_logo(void) {
    static const char PROGMEM raw_windows_logo[] = {
          0,  0,  0,128,128,128,128,192,192,192,192,192,192,224,  0,224,
        224,224,224,224,240,240,240,240,240,240,248,248,248,  0,  0,  0,
          0,  0,  0,255,255,255,255,255,255,255,255,255,255,255,  0,255,
        255,255,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,
          0,  0,  0,254,254,254,254,254,254,254,254,254,254,254,  0,254,
        254,254,254,254,254,254,254,254,254,254,254,254,254,  0,  0,  0,
          0,  0,  0,  3,  3,  3,  3,  3,  3,  7,  7,  7,  7,  7,  0,  7,
         15, 15, 15, 15, 15, 15, 15, 15, 31, 31, 31, 31, 31,  0,  0,  0,
    };
    oled_write_raw_P(raw_windows_logo, sizeof(raw_windows_logo));
}

static int os_num;

void set_os_logo(void) {
    if (!is_keyboard_master()) { return; }
    oled_set_cursor(0, 5);
    switch (os_num) {
        case 1:
            render_apple_logo();
            break;
        case 2:
            render_windows_logo();
            break;
        case 0:
        default:
            render_arch_logo();
    }
}

// Display Current OS on start-up
bool process_detected_host_os_kb(os_variant_t detected_os) {
    if (!process_detected_host_os_user(detected_os)) {
        return false;
    }
    if (is_keyboard_master()) {
        switch (detected_os) {
            case OS_MACOS:
            case OS_IOS:
                os_num = 1;
                break;
            case OS_WINDOWS:
                os_num = 2;
                break;
            case OS_LINUX:
                os_num = 0;
                break;
            case OS_UNSURE:
                os_num = 0;
            default:
                // oled_write(PSTR("OS: ?"), false);
                break;
        }
    }
    set_os_logo();
    return true;
}

// Mod Key Icons (Paired)
static const char PROGMEM mod_icons[4][4][64] = {  // 1 = pressed
    {  // ctl_shft
/*0 0*/ {  0,240,248,  4,  2,130,194, 98, 50, 98,194,130,  2,  4,248,  0,  0,240,248,  4,  2, 66, 98,242,250,242, 98, 66,  2,  4,248,  0,  0, 31, 63,112, 96, 97, 96, 96, 96, 96, 96, 97, 32, 16, 15,  0,  0, 31, 63,112, 96, 96, 96,111,111,111, 96, 96, 32, 16, 15,  0},
/*0 1*/ {  0,240,248,  4,  2,130,194, 98, 50, 98,194,130,  2,  4,248,  0,  0,240,248,252,124, 60, 28, 12, 28, 60,124,252,248,240,  0,  0,  0, 31, 63,112, 96, 97, 96, 96, 96, 96, 96, 97, 32, 16, 15,  0,  0, 31, 63,127,127,127, 96, 96, 96,127,127,127, 63, 31,  0,  0},
/*1 0*/ {  0,240,248,252,252,124, 60,156, 60,124,252,252,248,240,  0,  0,  0,240,248,  4,  2, 66, 98,242,250,242, 98, 66,  2,  4,248,  0,  0, 31, 63,127,124,126,127,127,127,126,124,127, 63, 31,  0,  0,  0, 31, 63,112, 96, 96, 96,111,111,111, 96, 96, 32, 16, 15,  0},
/*1 1*/ {  0,240,248,252,252,124, 60,156, 60,124,252,252,248,240,  0,  0,  0,240,248,252,124, 60, 28, 12, 28, 60,124,252,248,240,  0,  0,  0, 31, 63,127,124,126,127,127,127,126,124,127, 63, 31,  0,  0,  0, 31, 63,127,127,127, 96, 96, 96,127,127,127, 63, 31,  0,  0},
    }, {  // gui_alt (linux/unknown)
/*0 0*/ {  0,240,248,  4,114,250,154,154,154,154,154,186, 50,  4,248,  0,  0,240,248,  4,  2,194,226, 50, 50, 50,226,194,  2,  4,248,  0,  0, 31, 63,112,102,110,108,108,108,108,108,111, 39, 16, 15,  0,  0, 31, 63,112, 96,103,103, 97, 97, 97,103,103, 32, 16, 15,  0},
/*0 1*/ {  0,240,248,  4,114,250,154,154,154,154,154,186, 50,  4,248,  0,  0,240,248,252,124, 60,156,156,156, 60,124,252,248,240,  0,  0,  0, 31, 63,112,102,110,108,108,108,108,108,111, 39, 16, 15,  0,  0, 31, 63,127,112,112,125,125,125,112,112,127, 63, 31,  0,  0},
/*1 0*/ {  0,240,248, 28, 12,204,204,204,204,204,140,156,248,240,  0,  0,  0,240,248,  4,  2,194,226, 50, 50, 50,226,194,  2,  4,248,  0,  0, 31, 63,115, 98,102,102,102,102,102, 96,113, 63, 31,  0,  0,  0, 31, 63,112, 96,103,103, 97, 97, 97,103,103, 32, 16, 15,  0},
/*1 1*/ {  0,240,248, 28, 12,204,204,204,204,204,140,156,248,240,  0,  0,  0,240,248,252,124, 60,156,156,156, 60,124,252,248,240,  0,  0,  0, 31, 63,115, 98,102,102,102,102,102, 96,113, 63, 31,  0,  0,  0, 31, 63,127,112,112,125,125,125,112,112,127, 63, 31,  0,  0},
    }, {  // gui_alt (mac/ios)
/*0 0*/ {  0,240,248,  4, 18, 42,242, 34, 34, 34,242, 42, 18,  4,248,  0,  0,240,248,  4,  2, 18, 18, 34,194,  2, 18, 18,  2,  4,248,  0,  0, 31, 63,112,100,106,103, 98, 98, 98,103,106, 36, 16, 15,  0,  0, 31, 63,112, 96, 96, 96, 96, 97, 98,100,100, 32, 16, 15,  0},
/*0 1*/ {  0,240,248,  4, 18, 42,242, 34, 34, 34,242, 42, 18,  4,248,  0,  0,240,248,252,220,220,188,124,252,220,220,252,248,240,  0,  0,  0, 31, 63,112,100,106,103, 98, 98, 98,103,106, 36, 16, 15,  0,  0, 31, 63,127,127,127,127,124,123,119,119,127, 63, 31,  0,  0},
/*1 0*/ {  0,240,248,220,172, 28,188,188,188, 28,172,220,248,240,  0,  0,  0,240,248,  4,  2, 18, 18, 34,194,  2, 18, 18,  2,  4,248,  0,  0, 31, 63,119,107,112,123,123,123,112,107,119, 63, 31,  0,  0,  0, 31, 63,112, 96, 96, 96, 96, 97, 98,100,100, 32, 16, 15,  0},
/*1 1*/ {  0,240,248,220,172, 28,188,188,188, 28,172,220,248,240,  0,  0,  0,240,248,252,220,220,188,124,252,220,220,252,248,240,  0,  0,  0, 31, 63,119,107,112,123,123,123,112,107,119, 63, 31,  0,  0,  0, 31, 63,127,127,127,127,124,123,119,119,127, 63, 31,  0,  0},
    }, {  // gui_alt (windows)
/*0 0*/ {  0,240,248,  4,  2,114,114,114,  2,114,114,114,  2,  4,248,  0,  0,240,248,  4,  2,194,226, 50, 50, 50,226,194,  2,  4,248,  0,  0, 31, 63,112, 96,103,103,103, 96,103,103,103, 32, 16, 15,  0,  0, 31, 63,112, 96,103,103, 97, 97, 97,103,103, 32, 16, 15,  0},
/*0 1*/ {  0,240,248,  4,  2,114,114,114,  2,114,114,114,  2,  4,248,  0,  0,240,248,252,124, 60,156,156,156, 60,124,252,248,240,  0,  0,  0, 31, 63,112, 96,103,103,103, 96,103,103,103, 32, 16, 15,  0,  0, 31, 63,127,112,112,125,125,125,112,112,127, 63, 31,  0,  0},
/*1 0*/ {  0,240,248,252, 28, 28, 28,252, 28, 28, 28,252,248,240,  0,  0,  0,240,248,  4,  2,194,226, 50, 50, 50,226,194,  2,  4,248,  0,  0, 31, 63,127,113,113,113,127,113,113,113,127, 63, 31,  0,  0,  0, 31, 63,112, 96,103,103, 97, 97, 97,103,103, 32, 16, 15,  0},
/*1 1*/ {  0,240,248,252, 28, 28, 28,252, 28, 28, 28,252,248,240,  0,  0,  0,240,248,252,124, 60,156,156,156, 60,124,252,248,240,  0,  0,  0, 31, 63,127,113,113,113,127,113,113,113,127, 63, 31,  0,  0,  0, 31, 63,127,112,112,125,125,125,112,112,127, 63, 31,  0,  0},
    }
};

static void render_ctl_shift(int ctl, int shft) {
    oled_write_raw_P(  // [2] and [3] have ctrl so 0|2 + 0|1 can produce all for 4 combinations.. so smart
        mod_icons[0][2*ctl + shft],
        sizeof(mod_icons[0][2*ctl + shft])
    );
}

static void render_gui_alt(int gui, int alt) {
    oled_write_raw_P(
        mod_icons[1 + os_num][2*gui + alt],
        sizeof(mod_icons[1 + os_num][2*gui + alt])
    );
}

void render_mod_status(uint8_t mod_status) {
    if ((mod_status & MOD_MASK_CTRL) &&
        (mod_status & MOD_MASK_SHIFT) &&
        (mod_status & MOD_MASK_GUI) &&
        (mod_status & MOD_MASK_ALT)
    ) { set_os_logo(); } else {
        oled_set_cursor(0, 5);
        render_ctl_shift(
            (mod_status & MOD_MASK_CTRL) ? 1 : 0,
            ((mod_status & MOD_MASK_SHIFT) || host_keyboard_led_state().caps_lock) ? 1 : 0
        );

        oled_set_cursor(0, 7);
        render_gui_alt(
            (mod_status & MOD_MASK_GUI) ? 1 : 0,
            (mod_status & MOD_MASK_ALT) ? 1 : 0
        );
    }
}

// Display Words-per-minute
int peak_wpm, curr_wpm;
void render_wpm(void) {  // eventually replace with Luna?
    curr_wpm = get_current_wpm();

    // get WPM Peak | reset if wpm is 0
    oled_set_cursor(1, 12);
    if (curr_wpm == 0) { peak_wpm = 0; }
    if (curr_wpm > peak_wpm || last_input_activity_elapsed() > 3500) {
        peak_wpm = curr_wpm;
    }
    oled_write(get_u8_str(peak_wpm, '0'), false);

    oled_set_cursor(0, 13);
    oled_write(PSTR("-----"), false);
    oled_set_cursor(1, 14);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);
    oled_set_cursor(1, 15);
    oled_write(PSTR("WPM"), false);
}


void render_caps_lock(void) {  // unused
    oled_set_cursor(1, 10);
    oled_write_P(
        host_keyboard_led_state().caps_lock ? PSTR("CAPS") : PSTR("\n"),
        false
    );
}


void render_master_oled(void) {  // Left Side
    render_current_layer();
    render_mod_status(get_mods() | get_oneshot_mods());
    // render_wpm();
}

void render_slave_oled(void) {  // Right Side
    render_current_layer();
    // render_mod_status(get_mods() | get_oneshot_mods());
}

bool oled_task_user() {
    if(is_keyboard_master()) render_master_oled();
    else render_slave_oled();

    return false;
}

#endif

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

