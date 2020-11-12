#include QMK_KEYBOARD_H

enum layers {
     _MAIN,
	 _MEDIA,
	 _DISCORD,
	 _PHOTOSHOP
};

// Tap Dance declarations
enum tap_dances{
    TD_TO_DISCORD,
	TD_TO_PHOTOSHOP,
	TD_TO_MEDIA,
	TD_TO_MAIN,
	TD_RESET_SLIDER
	
};


void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder*/
    switch(biton32(layer_state)){
		case _MAIN:
			if (clockwise) {
			  tap_code(KC_VOLU);
			} else {
			  tap_code(KC_VOLD);
			}
			break;
		case _MEDIA:
			if (clockwise) {
			  tap_code(KC_VOLU);
			} else {
			  tap_code(KC_VOLD);
			}
			break;
		case _DISCORD:
			if (clockwise) {
			  tap_code(KC_VOLU);
			} else {
			  tap_code(KC_VOLD);
			}
			break;
		case _PHOTOSHOP:
			if (clockwise) {
			  tap_code(KC_UP);
			} else {
			  tap_code(KC_DOWN);
			}
			break;
		default:
			if (clockwise) {
			  tap_code(KC_VOLU);
			} else {
			  tap_code(KC_VOLD);
			}
			break;
	}
  }
}

//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { //buttion closest to usb is first
  [_MAIN] = LAYOUT_ortho_1x5(
     TD(TD_TO_DISCORD), TO(_DISCORD), KC_C, KC_D, TD(TD_TO_PHOTOSHOP)
  ),
  [_MEDIA] = LAYOUT_ortho_1x5(
     TD(TD_TO_MAIN), KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP
  ),
  // discord / among us
  [_DISCORD] = LAYOUT_ortho_1x5(
     TD(TD_TO_MAIN), TD(TD_TO_MEDIA), KC_Q, KC_R, MEH(KC_UP)
  )
  ,
  [_PHOTOSHOP] = LAYOUT_ortho_1x5(
     TD(TD_RESET_SLIDER) , C(KC_Z),C(KC_Y), KC_P, KC_G
  )
};



// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_TO_DISCORD] = ACTION_TAP_DANCE_LAYER_MOVE(KC_MUTE, _DISCORD),
	[TD_TO_PHOTOSHOP] = ACTION_TAP_DANCE_LAYER_MOVE(KC_E, _PHOTOSHOP),
	[TD_TO_MEDIA] = ACTION_TAP_DANCE_LAYER_MOVE(KC_E, _MEDIA),
	[TD_TO_MAIN] = ACTION_TAP_DANCE_LAYER_MOVE(KC_MUTE, _MAIN),
	[TD_RESET_SLIDER] = ACTION_TAP_DANCE_LAYER_MOVE(KC_0, _MAIN)
};



