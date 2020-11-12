#include QMK_KEYBOARD_H

enum layers {
     _MAIN,
	 _MEDIA,
	 _DISCORD
};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder*/
    // if layer == _MAIN
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
	}
  }
}

//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { //buttion closest to usb is first
  [_MAIN] = LAYOUT_ortho_1x5(
     TO(_DISCORD), KC_B, KC_C, KC_D, KC_E
  ),
  [_MEDIA] = LAYOUT_ortho_1x5(
     KC_MUTE, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP
  ),
  [_DISCORD] = LAYOUT_ortho_1x5(
     TO(_MAIN), TO(_MEDIA), KC_C, KC_D, MEH(KC_UP)
  )
};
