// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    ENC_MODE = SAFE_RANGE,
};

bool brightness_mode = false; 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT(
        LCS(KC_ESC),           LGUI(KC_E),              KC_CALCULATOR,   ENC_MODE,    
        KC_MEDIA_PLAY_PAUSE,   KC_MEDIA_FAST_FORWARD,   LCTL(KC_C),      LCTL(KC_V) 
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ENC_MODE:
            if (record->event.pressed) {
                brightness_mode = !brightness_mode; // Toggle the brightness mode
            }
            return false; // Skip all further processing of this key
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (brightness_mode) {
        tap_code(clockwise ? KC_BRIU : KC_BRID); // Adjust brightness
    } else {
        tap_code(clockwise ? KC_VOLU : KC_VOLD); // Adjust volume
    }
    return false;
}
