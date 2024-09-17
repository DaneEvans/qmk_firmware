/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum sofle_layers {
    // _DEFAULTS = 0,
    // _QWERTY = 0,
    // _COLEMAK,
	_COLEMAKDH, 
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUMPAD,
    _SWITCH
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_COLEMAK,
	KC_COLEMAKDH,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    // KC_D_MUTE,
	KC_SMART_BSP
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [_QWERTY] = LAYOUT_split_3x6_5(
    // //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    // LT(_NUMPAD,KC_TAB),KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,             LT(_SWITCH,KC_Y),  KC_U,    KC_I,    KC_O,   KC_P,  KC_SMART_BSP,
    // //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    //     KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
    // //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    //     KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
    // //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
    //                 KC_MUTE,   KC_X,  KC_LGUI, MO(_LOWER),     KC_SPC,       KC_ENT,   MO(_RAISE), KC_RALT,  MO(_SWITCH), KC_SLSH
    //                                     //`--------------------------'  `--------------------------'
    // ),

    [_COLEMAKDH] = LAYOUT_split_3x6_5( \
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        LT(_NUMPAD,KC_TAB),KC_Q,KC_W, KC_F,    KC_P,    KC_B,           LT(_SWITCH,KC_J),    KC_L,    KC_U,    KC_Y, KC_SCLN, KC_SMART_BSP,  \
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G, 						  KC_M,    KC_N,    KC_E,    KC_I,LT(_NUMPAD,KC_O),KC_QUOT, \
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|		
        KC_TRNS,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, 						  KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,  \
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                        KC_TRNS, KC_TRNS, KC_TRNS, MO(_LOWER), KC_TRNS,   KC_TRNS,    MO(_RAISE), KC_TRNS, KC_TRNS, KC_TRNS  \
                                        //`--------------------------'  `--------------------------'
    ),

    // [_COLEMAK] = LAYOUT_split_3x6_5( \
    // //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    //     LT(_NUMPAD,KC_TAB), 	KC_Q, 	 KC_W, 	  KC_F,    KC_P,    KC_B, 		LT(_SWITCH,KC_J),    KC_L,    KC_U,    KC_Y, KC_SCLN, KC_SMART_BSP,  \
    // //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    //     KC_TRNS,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D, 						  KC_H,    KC_N,    KC_E,    KC_I,LT(_NUMPAD,KC_O),KC_QUOT, \
    // //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|		
    //     KC_TRNS,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, 						  KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,  \
    // //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
    //                     KC_TRNS, KC_TRNS, KC_TRNS, MO(_LOWER), KC_TRNS,   KC_TRNS,    MO(_RAISE), KC_TRNS, KC_TRNS, KC_TRNS  \
    //                                     //`--------------------------'  `--------------------------'
    // ),

    [_LOWER] = LAYOUT_split_3x6_5(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_U, KC_PGUP,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_D, KC_PGDN,                      KC_HOME,   KC_NO,   KC_NO,  KC_END, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                KC_TRNS, KC_TRNS,        KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(_RAISE), KC_RALT,           KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [_RAISE] = LAYOUT_split_3x6_5(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
              KC_TRNS, KC_TRNS,         KC_LGUI,   MO(_LOWER),  KC_SPC,     KC_ENT, _______, KC_RALT,            KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [_ADJUST] = LAYOUT_split_3x6_5(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,KC_COLEMAKDH,KC_COLEMAK,            C(G(KC_LEFT)),KC_NO,KC_NO, C(G(KC_RGHT)), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, KC_QWERTY,                      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
               KC_TRNS, KC_TRNS,        KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  	[_NUMPAD] = LAYOUT_split_3x6_5( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	LT(0,KC_NO),   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, 					   KC_CIRC,   KC_7,   KC_8,   KC_9, KC_ASTR, KC_BSPC, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_MINS,   KC_4,   KC_5,   KC_6,  KC_EQL,  KC_DEL, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|	  
		  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_PLUS,   KC_1,   KC_2,   KC_3, KC_SLSH,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|		  
				KC_TRNS, KC_TRNS, 	   OSM(MOD_MEH),   KC_NO,   KC_TRNS,     KC_ENT,   KC_0,  KC_DOT, KC_TRNS, KC_TRNS \
										//`--------------------------'  `--------------------------'
	),	  

	// layer switcher 
	[_SWITCH] = LAYOUT_split_3x6_5(\
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	      TO(_DEFAULTS),TO(_LOWER),TO(_RAISE),TO(_ADJUST),TO(_NUMPAD),KC_NO, 	    KC_NO,   TO(7),   KC_NO,   KC_NO,   KC_NO,   KC_NO,  \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      KC_NO,   KC_NO, KC_BRIU,   KC_NO,   KC_NO,   KC_NO, 						 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		KC_SYSTEM_SLEEP,   KC_NO, KC_BRID,   KC_NO,   KC_NO,   KC_NO, 						 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|		  		
				KC_TRNS, KC_TRNS, 			  KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO, KC_TRNS, KC_TRNS \
										//`--------------------------'  `--------------------------'
	
	),		

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [_COLEMAKDH] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [_LOWER] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [_RAISE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [_ADJUST] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [_NUMPAD] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [_SWITCH] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
//   [6] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
//   [7] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif

#ifdef OLED_DRIVER_ENABLE
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0x00, 0xA6, 0x00, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

void oled_render_layer_state(void) {
  char string [24]; 
  switch (get_highest_layer(default_layer_state|layer_state))
  {
    //   case _QWERTY:
    //     oled_write_ln_P(PSTR("Layer: QWERTY"),false);
    //     break;
    //   case _COLEMAK:
    //     oled_write_ln_P(PSTR("Layer: COLEMAK"),false);
    //     break;    
      case _COLEMAKDH:
        oled_write_ln_P(PSTR("Layer: COLEMAKDH"),false);
        break;    
      case _LOWER:
        oled_write_ln_P(PSTR("Layer: Lower"),false);
        break;
      case _RAISE:
        oled_write_ln_P(PSTR("Layer: Raise"),false);
        break;
      case _ADJUST:
        oled_write_ln_P(PSTR("Layer: Adjust"),false);
        break;
      case _NUMPAD:
        oled_write_ln_P(PSTR("Layer: Numpad"),false);
        break;	
    //   case _MOVE:
    //     oled_write_ln_P(PSTR("Layer: Movement"),false);
    //     break;
      case _SWITCH:
        oled_write_ln_P(PSTR("Layer: Layer Switch"),false);
        break;		
      default:
        snprintf(string, sizeof(string), "%d",layer_state);
        oled_write_P(PSTR("Layer: Undef-"),false);
        oled_write_ln(string, false);
    }
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	static uint8_t saved_mods   = 0;
    //uint16_t       temp_keycode = keycode;
	
    switch (keycode) {
        // case KC_QWERTY:
        //     if (record->event.pressed) {
        //         set_single_persistent_default_layer(_QWERTY);
        //     }
        //     return false;
        // case KC_COLEMAK:
        //     if (record->event.pressed) {
        //         set_single_persistent_default_layer(_COLEMAK);
        //     }
        //     return false; 
        case KC_COLEMAKDH:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAKDH);
            }
            return false; 
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        // case KC_D_MUTE:
        //     if (record->event.pressed) {

        //         register_mods(MOD_RCTL);
		// 		register_mods(MOD_RSFT);
        //         register_code(KC_M);
        //     } else {
        //         unregister_mods(MOD_RCTL);
		// 		unregister_mods(MOD_RSFT);
        //         unregister_code(KC_M);
        //     }
		case KC_SMART_BSP:
            if (record->event.pressed) {
                saved_mods = get_mods() & MOD_MASK_SHIFT;

                if (saved_mods == MOD_MASK_SHIFT) {  // Both shifts pressed
                    register_code(KC_DEL);
                } else if (saved_mods) {   // One shift pressed
                    del_mods(saved_mods);  // Remove any Shifts present
                    register_code(KC_DEL);
                    add_mods(saved_mods);  // Add shifts again
                } else {
                    register_code(KC_BSPC);
                }
            } else {
                unregister_code(KC_DEL);
                unregister_code(KC_BSPC);
            }
            return false;
		
    }
    return true;
}
