#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"
#include "time.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(3),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Z,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           ST_MACRO_0,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTRL,       KC_LSHIFT,      KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_BSPACE,    KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LT(1,KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    RESET,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_ESCAPE,      KC_CIRC,        KC_TILD,        LSFT(KC_TAB),   KC_TAB,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_CAPSLOCK,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LCTRL,       KC_LALT,        KC_LSHIFT,      KC_ENTER,       KC_DELETE,      KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F10,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_LBRACKET,    KC_RBRACKET,    KC_LPRN,        KC_RPRN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, TD(DANCE_1),    KC_EQUAL,       TD(DANCE_2),    KC_ASTR,        KC_PLUS,                                        KC_GRAVE,       KC_LCBR,        KC_RCBR,        KC_COLN,        KC_SCOLON,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_F11,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_F6,                                          KC_TRANSPARENT, KC_Z,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_MINUS,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_F5,                                                                          KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F3,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {0,245,245}, {0,0,255}, {0,0,255}, {146,208,210}, {0,0,255}, {146,208,210}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {146,208,210}, {146,208,210}, {146,208,210}, {0,0,255}, {0,0,255}, {0,0,255}, {146,208,210}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {249,228,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,245,245}, {188,255,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,245,245}, {188,255,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,245,245}, {188,255,255}, {146,208,210}, {0,0,255}, {74,255,255}, {74,255,255}, {188,255,255}, {146,208,210}, {0,0,255}, {74,255,255}, {74,255,255}, {188,255,255}, {74,255,255}, {0,0,255}, {0,0,255}, {146,208,210}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {74,255,255}, {188,255,255}, {0,0,255}, {0,0,255}, {74,255,255}, {41,255,255}, {188,255,255}, {0,0,255}, {0,0,255}, {41,255,255}, {41,255,255}, {188,255,255}, {146,208,210}, {0,0,255}, {74,255,255}, {41,255,255}, {188,255,255}, {146,208,210}, {0,0,255}, {74,255,255}, {74,255,255}, {188,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,208,210}, {0,0,255}, {0,0,255}, {0,0,255} },

    [2] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {219,255,255}, {41,255,255}, {219,255,255}, {0,0,255}, {0,0,255}, {219,255,255}, {41,255,255}, {219,255,255}, {0,0,255}, {0,0,255}, {219,255,255}, {41,255,255}, {219,255,255}, {146,208,210}, {0,0,255}, {219,255,255}, {41,255,255}, {219,255,255}, {146,208,210}, {0,0,255}, {219,255,255}, {41,255,255}, {219,255,255}, {219,255,255}, {0,0,255}, {0,0,255}, {146,208,210}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,208,210}, {41,255,255}, {146,208,210}, {0,0,255}, {0,0,255}, {146,208,210}, {41,255,255}, {146,208,210}, {0,0,255}, {0,0,255}, {74,255,255}, {41,255,255}, {74,255,255}, {146,208,210}, {0,0,255}, {74,255,255}, {41,255,255}, {74,255,255}, {146,208,210}, {0,0,255}, {219,255,255}, {41,255,255}, {219,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,208,210}, {219,255,255}, {219,255,255}, {219,255,255} },

    [3] = { {32,255,234}, {0,245,245}, {0,204,255}, {146,224,255}, {146,224,255}, {0,245,245}, {0,245,245}, {85,203,158}, {0,245,245}, {0,245,245}, {0,245,245}, {85,203,158}, {85,203,158}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {85,203,158}, {32,255,234}, {0,245,245}, {0,245,245}, {0,245,245}, {32,255,234}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,204,255}, {0,245,245}, {14,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {14,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {15,176,169}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}



static uint16_t last_key_timer;
uint16_t last_key_pressed = false;
bool process_key_default = true;
uint8_t mod_state;


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    printf("last key pressed is %d \n", last_key_pressed);

    // if return result == true, process the key normal without any modifications
    process_key_default = true;
    // get modifications like alt,shift,ctrl
    printf("alt  mod %d \n", (get_mods() & MOD_BIT(KC_LALT)));

    printf("shift mod %d \n",( get_mods() & MOD_BIT(KC_LSHIFT)));

    printf("ctrl mod %d \n", (get_mods() & MOD_BIT(KC_LCTL)));
    if(record->event.pressed) // it's pressed
       last_key_timer = timer_read();

    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_SPACE));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_S) ));
            }
            break;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            process_key_default = false;
            break;
        case KC_A:
            if (get_mods() & MOD_BIT(KC_LALT)){
                if(record->event.pressed){
                    register_code(KC_RALT);
                    register_code(KC_Q);
                }else{
                    unregister_code(KC_Q);
                    unregister_code(KC_RALT);
                }
                process_key_default = false;
            }
            break;
        case KC_U:
            if (get_mods() & MOD_BIT(KC_LALT)){
                if(record->event.pressed){
                    register_code(KC_RALT);
                    register_code(KC_Y);
                }else{
                    unregister_code(KC_Y);
                    unregister_code(KC_RALT);
                }
                process_key_default = false;
            }
            break;
        case KC_S:
            if (get_mods() & MOD_BIT(KC_LALT)){
                if(record->event.pressed){
                    register_code(KC_RALT);
                    register_code(KC_S);
                }else{
                    unregister_code(KC_S);
                    unregister_code(KC_RALT);
                }
                process_key_default = false;
            }
            break;
        case KC_O:
            if (get_mods() & MOD_BIT(KC_LALT)){
                if(record->event.pressed){
                    register_code(KC_RALT);
                    register_code(KC_P);
                }else{
                    unregister_code(KC_P);
                    unregister_code(KC_RALT);
                }
                process_key_default = false;
            }
            break;
        case KC_E:
            if (get_mods() & MOD_BIT(KC_LALT)){
                if(record->event.pressed){
                    register_code(KC_RALT);
                    register_code(KC_5);
                }else{
                    unregister_code(KC_5);
                    unregister_code(KC_RALT);
                }
                process_key_default = false;
            }
            break;
        case KC_Y:
            if (get_mods() & MOD_BIT(KC_LCTRL)){
                if(record->event.pressed){
                    register_code(KC_RCTL);
                    register_code(KC_Z);

                }else{
                    unregister_code(KC_Z);
                    unregister_code(KC_RCTL);
                }
                process_key_default = false;
            }
            break;
        case KC_BSPACE:
            // if shift + backspace behave normal
            if (mod_state & MOD_MASK_SHIFT)
                break;

            process_key_default = false;
            if(record->event.pressed) // it's pressed activate layer 2
                layer_on(2);
            else // it is released, deactivate layer 2
                layer_off(2);

            // Decide if we have to trigger backspace or not
            // if it is only a tap(less than 200ms) and the layer wasnt used and only on key up, trigger backspace
            if(timer_elapsed(last_key_timer) < 200 && last_key_pressed == KC_BSPACE && !record->event.pressed)
                tap_code(KC_BSPACE);
            break;
        default:
            process_key_default = true;
            break;
  }
  printf("process_key_default is %d\n", process_key_default);
  last_key_pressed = keycode;
  return process_key_default;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}



void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PIPE);
        tap_code16(KC_PIPE);
        tap_code16(KC_PIPE);
    }
    if(state->count > 3) {
        tap_code16(KC_PIPE);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_PIPE); break;
        case SINGLE_HOLD: register_code16(KC_BSLASH); break;
        case DOUBLE_TAP: register_code16(KC_PIPE); register_code16(KC_PIPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PIPE); register_code16(KC_PIPE);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_PIPE); break;
        case SINGLE_HOLD: unregister_code16(KC_BSLASH); break;
        case DOUBLE_TAP: unregister_code16(KC_PIPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PIPE); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case SINGLE_HOLD: register_code16(KC_UNDS); break;
        case DOUBLE_TAP: register_code16(KC_MINUS); register_code16(KC_MINUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case SINGLE_HOLD: unregister_code16(KC_UNDS); break;
        case DOUBLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[2].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};

