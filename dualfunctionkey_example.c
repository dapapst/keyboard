static uint16_t last_key_timer;
uint16_t last_key_pressed = false;
bool process_key_default = true;
uint8_t mod_state;


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    
    // if process_key_default == true, process the key normal without any modifications
    process_key_default = true;
    // get modifications like alt,shift,ctrl
    mod_state = get_mods();
    if(record->event.pressed) // it's pressed
       last_key_timer = timer_read();

    switch (keycode) {
        case KC_BSPACE:
            // if shift + backspace behave normal
            if (mod_state & MOD_MASK_SHIFT) 
                break;
            
            // custom logic for backspace
           process_key_default = false;
                
            if(record->event.pressed) // it's pressed activate layer 2
                layer_on(2);
            else // it is released, deactivate layer 2
                layer_off(2);
                
            // Decide if we have to trigger backspace or not
            // if it is only a tap(less than 200ms) and the layer wasnt used and only on key up, trigger backspace
            if(timer_elapsed(last_key_timer) < 200 && last_key_pressed == KC_BSPACE && !record->event.pressed)
                tap_code(KC_BSPACE);
x
            break;
        default:
            process_key_default = true;
            break;
  }
  last_key_pressed = keycode;
  return process_key_default;
}
