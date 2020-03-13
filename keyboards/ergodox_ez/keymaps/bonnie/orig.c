#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"

#define LCGS(code) LCTL(LGUI(LSFT(code)))
#define LCS(code) LCTL(LSFT(code))

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE,     // can always be here
  EPRM,          
  RGB_SLD,       
  PASSWORD,
  PASSWORD2, 
  EXIT_VIM
  
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    // left hand
    KC_GRV,        KC_ESC,        KC_1,          KC_2,          KC_3,          KC_4,          KC_5,          
    KC_TAB,        KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,          KC_DEL,        
    KC_CLCK,       KC_A,          KC_S,          KC_D,          KC_F,          KC_G,          
    KC_LSFT,       KC_Z,          KC_X,          KC_C,          KC_V,          KC_B,          KC_BSPC,       
    KC_LCTL,       KC_LCMD,       LALT(XXXXXXX), KC_LEFT,       KC_RGHT,       
                                                                               LT(1,KC_HOME), LT(2,KC_END),  
                                                                                              KC_UP,         
                                                                KC_SPC,        KC_ENT,        KC_DOWN,       
        // right hand
        KC_6,          KC_7,          KC_8,          KC_9,          KC_0,          KC_PMNS,       KC_BSPC,       
        KC_PGUP,       KC_Y,          KC_U,          KC_I,          KC_O,          KC_P,          KC_LBRC,       
                       KC_H,          KC_J,          KC_K,          KC_L,          KC_SCLN,       KC_RBRC,       
        KC_PGDN,       KC_N,          KC_M,          KC_COMM,       KC_DOT,        KC_QUOT,       KC_RSFT,       
        KC_HOME,       KC_END,        KC_BSLS,       KC_SLSH,       RCTL_T(KC_EQL),
        KC_LEFT,       KC_RGHT,       
        KC_UP,         
        KC_DOWN,       KC_SPC,        KC_ENT
    ),


  [1] = LAYOUT_ergodox(
    // left hand
    KC_ESC,        KC_F1,         KC_F2,         KC_F3,         KC_F4,         KC_F5,         _______,       
    PASSWORD,       KC_EXLM,       KC_AT,         KC_LCBR,       KC_RCBR,       KC_PIPE,       _______,       
    PASSWORD2,       KC_HASH,       KC_DLR,        KC_LPRN,       KC_RPRN,       KC_GRV,        
    EXIT_VIM,       KC_PERC,       KC_CIRC,       KC_LBRC,       KC_RBRC,       KC_TILD,       _______,       
    _______,       _______,       _______,       _______,       _______,       
                                                                               _______,       _______,       
                                                                                              _______,       
                                                                RGB_VAD,       RGB_VAI,       _______,       
        // right hand
        _______,       KC_F6,         KC_F7,         KC_F8,         KC_F9,         KC_F10,        KC_F11,        
        _______,       KC_UP,         KC_7,          KC_8,          KC_9,          KC_ASTR,       KC_F12,        
                       KC_DOWN,       KC_4,          KC_5,          KC_6,          _______,       _______,       
        _______,       KC_AMPR,       KC_1,          KC_2,          KC_3,          _______,       _______,       
        _______,       KC_DOT,        KC_0,          KC_EQL,        _______,       
        RGB_TOG,       RGB_SLD,       
        _______,       
        _______,       RGB_HUD,       RGB_HUI
    ),


  [2] = LAYOUT_ergodox(
    // left hand
    _______,       _______,       _______,       _______,       _______,       _______,       _______,       
    _______,       _______,       _______,       KC_MS_U,       _______,       _______,       _______,       
    _______,       _______,       KC_MS_L,       KC_MS_D,       KC_MS_R,       _______,       
    _______,       _______,       _______,       _______,       _______,       _______,       _______,       
    _______,       _______,       _______,       KC_BTN1,       KC_BTN2,       
                                                                               _______,       _______,       
                                                                                              _______,       
                                                                _______,       _______,       _______,       
        // right hand
        _______,       _______,       _______,       _______,       _______,       _______,       _______,       
        _______,       _______,       _______,       _______,       _______,       _______,       _______,       
                       _______,       _______,       _______,       _______,       _______,       KC_MPLY,       
        _______,       _______,       _______,       KC_MPRV,       KC_MNXT,       _______,       _______,       
        KC_VOLU,       KC_VOLD,       KC_MUTE,       _______,       _______,       
        _______,       _______,       
        _______,       
        _______,       _______,       KC_WBAK
    ),


};

bool suspended = false;
const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;
	case PASSWORD:
      if (record->event.pressed) {
        SEND_STRING("password");
      }
      return false;
      break; 
	case PASSWORD2:
      if (record->event.pressed) {
        SEND_STRING("Password!1");
      }
      return false;
      break; 
	case EXIT_VIM:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESCAPE)":wq");
      }
      return false;
      break; 	  
	  
	  
	  
	  
	  
	  
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;

};
