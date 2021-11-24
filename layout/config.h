/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef DEBOUNCE
#define DEBOUNCE 7

#undef TAPPING_TERM
#define TAPPING_TERM 202

#define PERMISSIVE_HOLD

#define TAPPING_FORCE_HOLD

#undef IGNORE_MOD_TAP_INTERRUPT

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 900000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define RGB_MATRIX_STARTUP_SPD 60
