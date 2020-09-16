#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
 

char layer_state_str[24];
 
  enum userspace_layers {
    _DEFAULTS = 0,
	_COLEMAK - 0,
    _QWERTY,
    _NUM,
    _SYM,
    _COMMAND,
    _NUMPAD,
	_SWITCH,
    _MOVE,
    
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
		// colemak 
	[_COLEMAK] = LAYOUT( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	    KC_TRNS, 	KC_Q, 	 KC_W, 	  KC_F,    KC_P,    KC_G, 					LT(_SWITCH,KC_J),    KC_L,    KC_U,    KC_Y, KC_SCLN, KC_TRNS,  \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D, 						  KC_H,    KC_N,    KC_E,    KC_I,LT(5,KC_O),KC_TRNS, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|		
		KC_TRNS,    KC_Z,    KC_X,    KC_C,    KC_V, KC_TRNS, 						  KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_TRNS,  \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
		                                   KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS \
										//`--------------------------'  `--------------------------'
	),
	// qwerty
	[_QWERTY] = LAYOUT( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	LT(5,KC_TAB), 	KC_Q, 	KC_W, 	KC_E, 	KC_R, 	KC_T, 							LT(_SWITCH,KC_Y), KC_U, 	KC_I, 	 KC_O, 	 KC_P, 	KC_BSPC,      \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	KC_LSFT, 		KC_A, 	KC_S, 	KC_D, 	KC_F, 	KC_G, 							KC_H, 	  KC_J, 	KC_K, 	 KC_L, LT(5,KC_SCLN), KC_QUOT,\
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	KC_LCTL, 		KC_Z, 	KC_X, 	KC_C, 	KC_V, 	KC_B, 							KC_N, 	  KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,       \
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
										 KC_LGUI,   MO(2),  KC_SPC, 	KC_ENT,    MO(3), KC_RALT  \
									   //`--------------------------'  `--------------------------'
	),

										   
										   
	// numbers  - L thumb 
	[_NUM] = LAYOUT( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, 					      KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,  \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_WH_U,   KC_PGUP, 				   KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,   KC_NO,  KC_DEL,  \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_WH_D,   KC_PGDN,					     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT,   MO(4), KC_RALT  \
										//`--------------------------'  `--------------------------'
	),
	
	// symbols  - R thumb 
	[_SYM] = LAYOUT( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	     KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, 					   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, \
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV,  \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD, \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											KC_LGUI,   MO(4),  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT    \
										//`--------------------------'  `--------------------------'
	),
	
	// commands - both thumbs 
	[_COMMAND] = LAYOUT( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	      RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, 						 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_NO, \
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|

	    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,   KC_NO,   DF(0), 					 C(G(KC_LEFT)),   KC_NO,   KC_NO,   C(G(KC_RGHT)),   KC_NO,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,   KC_NO,   DF(1), 					     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
										    KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT  \
										//`--------------------------'  `--------------------------'
	),
	
	// numpad 
	[_NUMPAD] = LAYOUT( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	LT(0,KC_NO),   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, 					   KC_CIRC,   KC_P7,   KC_P8,   KC_P9, KC_ASTR, KC_BSPC, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_MINS,   KC_P4,   KC_P5,   KC_P6,  KC_EQL,  KC_DEL, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|	  
		  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_PLUS,   KC_P1,   KC_P2,   KC_P3, KC_SLSH,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|		  
									   OSM(MOD_MEH),   KC_NO,   KC_NO,     KC_ENT,   KC_P0,  KC_PDOT \
										//`--------------------------'  `--------------------------'
	),	  
		  
	// layer switcher 
	[_SWITCH] = LAYOUT(\
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	      TO(0),   TO(1),   TO(2),   TO(3),   TO(4),   TO(5), 					     KC_NO,   TO(7),   KC_NO,   KC_NO,   KC_NO,   RESET,  \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      KC_NO,   KC_NO, KC_BRIU,   KC_NO,   KC_NO,   KC_NO, 						 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, EEP_RST, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		KC_SYSTEM_SLEEP,   KC_NO, KC_BRID,   KC_NO,   KC_NO,   KC_NO, 						 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|		  		
											  KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO  \
										//`--------------------------'  `--------------------------'
	
	),		  
		  
	// amovement 
	[_MOVE] = LAYOUT( \
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	LT(0,KC_NO),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_HOME,  KC_UP,  KC_PGUP,   KC_NO,   KC_NO,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 					   KC_LEFT,  KC_ENT, KC_RGHT,   KC_NO,   KC_NO,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|	  		 
		 KC_APP,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 						KC_END, KC_DOWN, KC_PGDN,  KC_DEL,   KC_NO,   KC_NO, \
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|		  
		                                      KC_NO,   KC_NO,   KC_NO,    KC_TRNS,   KC_NO,   KC_NO  \
										//`--------------------------'  `--------------------------'
	)

};


// it appears that these are different to the board numbering. 
// when you specify n here, it lightss up n+1 on the board diagram - actually may be an entirely different pattern 

// _QWERTY,
// Light on inner column and underglow 
const rgblight_segment_t PROGMEM layer_qwerty_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 10, HSV_AZURE}
);

// _NUM,
// Light on inner column and underglow 
const rgblight_segment_t PROGMEM layer_num_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 10, HSV_TEAL}
);
// _SYMBOL,
// Light on inner column and underglow 
const rgblight_segment_t PROGMEM layer_symbol_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 10, HSV_BLUE}
);
// _COMMAND,
// Light on inner column and underglow 
const rgblight_segment_t PROGMEM layer_command_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 10, HSV_PURPLE}
);


//_NUMPAD
//havent worked out how to do each side individually either 
const rgblight_segment_t PROGMEM layer_numpad_lights[] = RGBLIGHT_LAYER_SEGMENTS(
{0, 10, HSV_ORANGE}
);
const rgblight_segment_t PROGMEM layer_numpad_rh_lights[] = RGBLIGHT_LAYER_SEGMENTS(
	{0, 10, HSV_ORANGE},
	{10, 5, HSV_BLUE},
    {15, 3, HSV_BLUE},
	{18, 3, HSV_BLUE}
);

// _MOVE,
// Light on inner column and underglow 
const rgblight_segment_t PROGMEM layer_move_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 10, HSV_PINK}
);

// _SWITCHER   // light up top row
const rgblight_segment_t PROGMEM layer_switcher_lights[] = RGBLIGHT_LAYER_SEGMENTS( 
    {0, 6, HSV_GREEN},
	{9, 2, HSV_GREEN},
	{17, 2, HSV_GREEN},
	{23, 2, HSV_GREEN}
);


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer_colemak_lights, 
	layer_num_lights,// overrides layer 1
	layer_symbol_lights,
    layer_command_lights,       
	layer_numpad_lights, 
	layer_numpad_rh_lights,
	layer_move_lights,
	layer_switcher_lights  // Overrides other layers
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
	rgblight_mode(10);// haven't found a way to set this in a more useful way 

}

void matrix_scan_user(void) {
	#ifdef SSD1306OLED
		iota_gfx_task();
    #endif
}

void matrix_init_user(void) {
    //#ifdef RGBLIGHT_ENABLE
    //  RGB_current_mode = rgblight_config.mode;
    //#endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}

layer_state_t layer_state_set_user(layer_state_t state) {
	//rgblight_setrgb (0x00,  0x00, 0xFF);
	rgblight_set_layer_state(0, layer_state_cmp(state, _DEFAULTS) && layer_state_cmp(default_layer_state,_COLEMAK));
	
	rgblight_set_layer_state(1, layer_state_cmp(state, _NUM));
	rgblight_set_layer_state(2, layer_state_cmp(state, _SYM));
	rgblight_set_layer_state(3, layer_state_cmp(state, _COMMAND));
	rgblight_set_layer_state(4, layer_state_cmp(state, _NUMPAD));
	if (!has_usb())
		rgblight_set_layer_state(5, layer_state_cmp(state, _NUMPAD));
	rgblight_set_layer_state(6, layer_state_cmp(state, _MOVE));
	rgblight_set_layer_state(7, layer_state_cmp(state, _SWITCH));
    return state;
}

/*
bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
*/



//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);


const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);


const char *read_layer_state(void) {
  switch (get_highest_layer(layer_state))
  {
  case _DEFAULTS: // default layers 
    switch(biton32(default_layer_state))
    {
      case _QWERTY:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: QWERTY");
        break;
      case _COLEMAK:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: COLEMAK");
        break;    
        
     default: // either a new default, or the board just started up 
        snprintf(layer_state_str, sizeof(layer_state_str), "Default Layer: %ld ", default_layer_state);
        break;
    }
    break;
  case _NUM:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numbers");
    break;
  case _SYM:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Symbols");
    break;
  case _COMMAND:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Command");
    break;
  case _NUMPAD:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
    break;	
  case _MOVE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Movement");
    break;
  case _SWITCH:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Layer Switcher");
    break;		
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }
  return layer_state_str;
}


void matrix_render_user(struct CharacterMatrix *matrix) {
  if (has_usb()) {
    // If you want to change the display of OLED, you need to change here
    matrix_write_ln(matrix, read_layer_state());
    matrix_write_ln(matrix, read_keylog());
    //matrix_write_ln(matrix, read_keylogs());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui));
    //matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_timelog());
  } else {
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}
#endif//SSD1306OLED


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef SSD1306OLED
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
   return true;
 
}
