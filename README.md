# keyboard
```
static uint16_t last_key_timer;
uint16_t last_key_pressed = false;
bool return_result = true;
uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return_result = true;
    mod_state = get_mods();
    if(record->event.pressed) // it's pressed
       last_key_timer = timer_read();
    switch (keycode) {
        case KC_BSPACE:
            if (mod_state & MOD_MASK_SHIFT) {
                return_result = true;
                break;
            }
            return_result = false;
            if(record->event.pressed) // it's pressed
                layer_on(2);
            else
                layer_off(2);
            // if it is only a tap(less than 200ms) and the layer wasnt used and only on key up, use normal backspace
            if(timer_elapsed(last_key_timer) < 200 && last_key_pressed == KC_BSPACE && !record->event.pressed)
                tap_code(KC_BSPACE);
            break;
        default:
            return_result = true;
            break;
  }
  last_key_pressed = keycode;
  return return_result;
}
```
