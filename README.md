# Moonlander 36 Keys layout with dual key instant layer switch / WIP

My custom based oryx qmk layout with 36 keys. Using the base layout build with oryx https://configure.zsa.io/moonlander/layouts/J0QQm/xWl7K/latest and some custom qmk modification. For example an instant layout toggle for fast typist. 

## Debug
hid_listen.exe
combined with:
```
void keyboard_post_init_user(void) {
  rgb_matrix_enable();
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
}
```
