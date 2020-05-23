#include "helix.h"

// Each keymap.c should use is_keyboard_master() instead of 'is_master'.
// But keep 'is_master' for a while for backwards compatibility
//  for the old keymap.c.
uint8_t is_master = false;


#ifdef RGB_MATRIX_ENABLE

  // Logical Layout
  // Columns
  // Left
  // 0  1  2  3  4  5
  //                   ROWS
  // 25 24 19 18 11 10   0
  //    03    02    01
  // 26 23 20 17 12 09   1
  //    04    05    06
  // 27 22 21 16 13 08   2
  //
  //          15 14 07   3
  //
  // Right
  // 0  1  2  3  4  5
  //                    ROWS
  // 25 24 19 18 11 10   4
  //    03    02    01
  // 26 23 20 17 12 09   5
  //    04    05    06
  // 27 22 21 16 13 08   6
  //
  //          15 14 07   7
  //
  // Physical Layout
  // Columns
  // 0  1  2  3  4  5  6  7  8  9  10 11 12 13
  //                                           ROWS
  // 25 24 19 18 11 10       10 11 18 19 24 25  0
  //    03    02    01       01    02    03
  // 26 23 20 17 12 09       09 12 17 20 23 26  1
  //    04                               04
  // 27 22 21 16 13 08       08 13 16 21 22 27  2
  //          05    06       06    05
  //           15 14 07     07 14 15              3

led_config_t g_led_config = { {
    {  5,  4,  3,  2,  1,  0,  NO_LED},
    {  6,  7,  8,  9, 10, 11,  NO_LED},
    { 17, 16, 15, 14, 13, 12,  NO_LED},
    { 18, 19, 20, 21, 22, 23, 24 },
    { 31, 30, 29, 28, 27, 26, 25 },
    { NO_LED, 32, 33, 34, 35, 36, 37 },
    { NO_LED, 43, 42, 41, 40, 39, 38 },
    { NO_LED, 44, 45, 46, 47, 48, 49 },
    {     56, 55, 54, 53, 52, 51, 50 },
    {     57, 58, 59, 60, 61, 62, 63 }
}, {
    {  86,   0 }, 	{  69,   0 }, 	{  52,   0 }, 	{  34,   0 }, 	{  17,   0 }, 	{   0,   0 },
    {   0,  16 }, 	{  17,  16 }, 	{  34,  16 }, 	{  52,  16 }, 	{  69,  16 }, 	{  86,  16 },
    {  86,  32 }, 	{  69,  32 }, 	{  52,  32 }, 	{  34,  32 }, 	{  17,  32 }, 	{   0,  32 },
    {   0,  48 }, 	{  17,  48 }, 	{  34,  48 }, 	{  52,  48 }, 	{  69,  48 }, 	{  86,  48 }, 	{ 103,  48 },
    { 103,  64 }, 	{  86,  64 }, 	{  69,  64 }, 	{  52,  64 }, 	{  34,  64 }, 	{  17,  64 }, 	{   0,  64 },
    { 138,   0 }, 	{ 155,   0 }, 	{ 172,   0 }, 	{ 190,   0 }, 	{ 207,   0 }, 	{ 224,   0 },
    { 224,  16 }, 	{ 207,  16 }, 	{ 190,  16 }, 	{ 172,  16 }, 	{ 155,  16 }, 	{ 138,  16 },
    { 138,  32 }, 	{ 155,  32 }, 	{ 172,  32 }, 	{ 190,  32 }, 	{ 207,  32 }, 	{ 224,  32 },
    { 224,  48 }, 	{ 207,  48 }, 	{ 190,  48 }, 	{ 172,  48 }, 	{ 155,  48 }, 	{ 138,  48 }, 	{ 121,  48 },
    { 121,  64 }, 	{ 138,  64 }, 	{ 155,  64 }, 	{ 172,  64 }, 	{ 190,  64 }, 	{ 207,  64 }, 	{ 224,  64 }
}, {
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4, 4,
    1, 1, 1, 1, 1, 1, 1,
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4, 4,
    1, 1, 1, 1, 1, 1, 1

    /* 2, 2, 2, 2, 2, 2, 1,
    4, 4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 1, 1, 1, 2,
    2, 2, 2, 2, 2, 1, 4,
    4, 4, 4, 4, 4, 1, 1,
    4, 4, 4, 4, 4, 4, 4,
    4, 4, 1, 1, 1 */
} };
#endif

#ifdef SSD1306OLED
#include "ssd1306.h"

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	return process_record_gfx(keycode,record) && process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    //led_set_user(usb_led);
}
#endif

void matrix_init_kb(void) {
    // Each keymap.c should use is_keyboard_master() instead of is_master.
    // But keep is_master for a while for backwards compatibility
    //  for the old keymap.c.
    is_master = is_keyboard_master();

	matrix_init_user();
};

void keyboard_post_init_kb(void) {
#if defined(DEBUG_MATRIX_SCAN_RATE)
    debug_enable = true;
#endif
    keyboard_post_init_user();
}

#if defined(SPLIT_KEYBOARD) && defined(SSD1306OLED)
void matrix_slave_scan_user(void) {
    matrix_scan_user();
}
#endif
