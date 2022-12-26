// This is the 'classic' fixed-space bitmap font for Adafruit_GFX since 1.0.
// See gfxfont.h for newer custom bitmap font info.

#ifndef FONT5X7_H
#define FONT5X7_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#elif defined(ESP8266)
 #include <pgmspace.h>
#else
 #define PROGMEM
#endif


static const unsigned char PROGMEM font[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x7C, 0xB6, 0x9E, 0xB6, 0x7C, 0x00,
    0x7C, 0xD6, 0x9E, 0xD6, 0x7C, 0x00,
    0x38, 0x7C, 0xF8, 0x7C, 0x38, 0x00,
    0x30, 0x78, 0xFC, 0x78, 0x30, 0x00,
    0x38, 0xAE, 0xFA, 0xAE, 0x38, 0x00,
    0x38, 0xBC, 0xFE, 0xBC, 0x38, 0x00,
    0x00, 0x30, 0x78, 0x30, 0x00, 0x00,
    0xFE, 0xCE, 0x86, 0xCE, 0xFE, 0x00,
    0x00, 0x30, 0x48, 0x30, 0x00, 0x00,
    0xFE, 0xCE, 0xB6, 0xCE, 0xFE, 0x00,
    0x60, 0x90, 0x74, 0x0C, 0x1C, 0x00,
    0x4C, 0x52, 0xF2, 0x52, 0x4C, 0x00,
    0x80, 0xFE, 0x0A, 0x0A, 0x0E, 0x00,
    0x80, 0xFE, 0x0A, 0x4A, 0x7E, 0x00,
    0xB4, 0x78, 0xCE, 0x78, 0xB4, 0x00,
    0xFE, 0x7C, 0x38, 0x38, 0x10, 0x00,
    0x10, 0x38, 0x38, 0x7C, 0xFE, 0x00,
    0x28, 0x44, 0xFE, 0x44, 0x28, 0x00,
    0xBE, 0xBE, 0x00, 0xBE, 0xBE, 0x00,
    0x0C, 0x12, 0xFE, 0x02, 0xFE, 0x00,
    0x00, 0xCC, 0x12, 0x2A, 0xD4, 0x00,
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00,
    0x28, 0x44, 0xFE, 0x44, 0x28, 0x00,
    0x10, 0x08, 0xFC, 0x08, 0x10, 0x00,
    0x20, 0x40, 0xFC, 0x40, 0x20, 0x00,
    0x10, 0x10, 0x54, 0x38, 0x10, 0x00,
    0x10, 0x38, 0x54, 0x10, 0x10, 0x00,
    0x3C, 0x20, 0x20, 0x20, 0x20, 0x00,
    0x18, 0x3C, 0x18, 0x3C, 0x18, 0x00,
    0x60, 0x70, 0x7C, 0x70, 0x60, 0x00,
    0x0C, 0x1C, 0x7C, 0x1C, 0x0C, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xBE, 0x00, 0x00, 0x00,
    0x00, 0x0E, 0x00, 0x0E, 0x00, 0x00,
    0x28, 0xFE, 0x28, 0xFE, 0x28, 0x00,
    0x48, 0x54, 0xFE, 0x54, 0x24, 0x00,
    0x46, 0x26, 0x10, 0xC8, 0xC4, 0x00,
    0x6C, 0x92, 0xAC, 0x40, 0xA0, 0x00,
    0x00, 0x10, 0x0E, 0x06, 0x00, 0x00,
    0x01, 0x39, 0x45, 0x83, 0x01, 0x00,
    0x00, 0x82, 0x44, 0x38, 0x00, 0x00,
    0x55, 0x39, 0xFF, 0x39, 0x55, 0x00,
    0x10, 0x10, 0x7C, 0x10, 0x10, 0x00,
    0x00, 0x00, 0xE0, 0x60, 0x00, 0x00,
    0x10, 0x10, 0x10, 0x10, 0x10, 0x00,
    0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00,
    0x40, 0x20, 0x11, 0x08, 0x04, 0x00,
    0x7C, 0xA2, 0x92, 0x8A, 0x7C, 0x00,
    0x00, 0x84, 0xFE, 0x80, 0x00, 0x00,
    0xE4, 0x92, 0x92, 0x92, 0x8C, 0x00,
    0x42, 0x82, 0x92, 0x9A, 0x66, 0x00,
    0x30, 0x28, 0x24, 0xFE, 0x20, 0x00,
    0x4E, 0x8A, 0x8B, 0x8B, 0x72, 0x00,
    0x78, 0x94, 0x92, 0x92, 0x62, 0x00,
    0x83, 0x43, 0x23, 0x13, 0x0F, 0x00,
    0x6C, 0x92, 0x92, 0x92, 0x6C, 0x00,
    0x8C, 0x92, 0x92, 0x52, 0x3C, 0x00,
    0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x68, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x28, 0x44, 0x82, 0x00,
    0x28, 0x28, 0x28, 0x28, 0x28, 0x00,
    0x00, 0x82, 0x44, 0x28, 0x10, 0x00,
    0x04, 0x02, 0xB2, 0x12, 0x0C, 0x00,
    0x7C, 0x82, 0xBA, 0xB2, 0x9C, 0x00,
    0xF8, 0x24, 0x22, 0x24, 0xF8, 0x00,
    0xFE, 0x92, 0x92, 0x92, 0x6C, 0x00,
    0x7C, 0x82, 0x82, 0x82, 0x44, 0x00,
    0xFE, 0x82, 0x82, 0x82, 0x7C, 0x00,
    0xFE, 0x92, 0x92, 0x92, 0x82, 0x00,
    0xFE, 0x12, 0x12, 0x12, 0x02, 0x00,
    0x7C, 0x82, 0x82, 0xA2, 0xE6, 0x00,
    0xFE, 0x10, 0x10, 0x10, 0xFE, 0x00,
    0x00, 0x82, 0xFE, 0x82, 0x00, 0x00,
    0x40, 0x80, 0x82, 0x7E, 0x02, 0x00,
    0xFE, 0x10, 0x28, 0x44, 0x82, 0x00,
    0xFE, 0x81, 0x80, 0x80, 0x80, 0x00,
    0xFE, 0x04, 0x38, 0x04, 0xFE, 0x00,
    0xFE, 0x08, 0x10, 0x20, 0xFE, 0x00,
    0x7C, 0x82, 0x82, 0x82, 0x7C, 0x00,
    0xFE, 0x12, 0x12, 0x12, 0x0C, 0x00,
    0x7C, 0x82, 0xA2, 0x42, 0xBC, 0x00,
    0xFE, 0x12, 0x32, 0x52, 0x8C, 0x00,
    0x4C, 0x92, 0x92, 0x92, 0x64, 0x00,
    0x06, 0x02, 0xFE, 0x02, 0x06, 0x00,
    0x7E, 0x80, 0x80, 0x80, 0x7E, 0x00,
    0x3E, 0x40, 0x80, 0x40, 0x3E, 0x00,
    0x7E, 0x80, 0x70, 0x80, 0x7E, 0x00,
    0xC6, 0x28, 0x10, 0x28, 0xC6, 0x00,
    0x06, 0x08, 0xF0, 0x08, 0x06, 0x00,
    0xC2, 0xB2, 0x92, 0x9A, 0x86, 0x00,
    0x00, 0xFE, 0x82, 0x82, 0x82, 0x00,
    0x04, 0x08, 0x10, 0x20, 0x40, 0x00,
    0x00, 0x82, 0x82, 0x82, 0xFE, 0x00,
    0x08, 0x04, 0x02, 0x04, 0x08, 0x00,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
    0x00, 0x06, 0x0E, 0x10, 0x00, 0x00,
    0x40, 0xA8, 0xA8, 0xF0, 0x80, 0x00,
    0xFE, 0x50, 0x88, 0x88, 0x70, 0x00,
    0x70, 0x88, 0x88, 0x88, 0x50, 0x00,
    0x70, 0x88, 0x88, 0x50, 0xFE, 0x00,
    0x70, 0xA8, 0xA8, 0xA8, 0x30, 0x00,
    0x00, 0x10, 0xFC, 0x12, 0x04, 0x00,
    0x30, 0x48, 0x48, 0x38, 0xF0, 0x00,
    0xFE, 0x10, 0x08, 0x08, 0xF0, 0x00,
    0x00, 0x88, 0xFA, 0x80, 0x00, 0x00,
    0x40, 0x80, 0x80, 0x7A, 0x00, 0x00,
    0xFE, 0x20, 0x50, 0x88, 0x00, 0x00,
    0x00, 0x82, 0xFE, 0x80, 0x00, 0x00,
    0xF8, 0x08, 0xF0, 0x08, 0xF0, 0x00,
    0xF8, 0x10, 0x08, 0x08, 0xF0, 0x00,
    0x70, 0x88, 0x88, 0x88, 0x70, 0x00,
    0xF8, 0x30, 0x48, 0x48, 0x30, 0x00,
    0x30, 0x48, 0x48, 0x30, 0xF8, 0x00,
    0xF8, 0x10, 0x08, 0x08, 0x10, 0x00,
    0x90, 0xA8, 0xA8, 0xA8, 0x48, 0x00,
    0x08, 0x08, 0x7E, 0x88, 0x48, 0x00,
    0x78, 0x80, 0x80, 0x40, 0xF8, 0x00,
    0x38, 0x40, 0x80, 0x40, 0x38, 0x00,
    0x78, 0x80, 0x60, 0x80, 0x78, 0x00,
    0x88, 0x50, 0x20, 0x50, 0x88, 0x00,
    0x98, 0x20, 0x20, 0x20, 0xF8, 0x00,
    0x88, 0xC8, 0xA8, 0x98, 0x88, 0x00,
    0x00, 0x10, 0x6C, 0x82, 0x00, 0x00,
    0x00, 0x00, 0xEE, 0x00, 0x00, 0x00,
    0x00, 0x82, 0x6C, 0x10, 0x00, 0x00,
    0x04, 0x02, 0x04, 0x08, 0x04, 0x00,
    0x78, 0x4C, 0x46, 0x4C, 0x78, 0x00,
    0x00, 0x00, 0x00, 0xFE, 0x00, 0xF8,
    0xF8, 0x00, 0xE0, 0x80, 0xC0, 0x60,
    0x60, 0xB0, 0xB0, 0xD8, 0xD8, 0xD8,
    0x98, 0x98, 0xEC, 0xEC, 0x66, 0x66,
    0x66, 0x66, 0xEC, 0xCC, 0x98, 0x98,
    0xD8, 0xD8, 0xD8, 0xB0, 0xB0, 0x64,
    0x6C, 0xCC, 0xDC, 0xCC, 0xCC, 0xC4,
    0x60, 0x30, 0x98, 0xCC, 0xEC, 0xEC,
    0x64, 0x66, 0xEC, 0xEC, 0xD8, 0xD8,
    0xD8, 0xC8, 0xC8, 0xD8, 0xD8, 0x98,
    0x30, 0x60, 0xE0, 0x82, 0x02, 0x02,
    0xF2, 0x02, 0x02, 0xF2, 0x02, 0x02,
    0xF2, 0x02, 0x02, 0xF2, 0x02, 0x02,
    0xF2, 0x02, 0x02, 0xF2, 0x02, 0x02,
    0xF2, 0x02, 0x02, 0x02, 0x02, 0x02,
    0xF2, 0x92, 0x0A, 0x92, 0xF2, 0x02,
    0x02, 0x82, 0x42, 0x42, 0x42, 0x42,
    0x42, 0x42, 0x42, 0x42, 0x42, 0x42,
    0x42, 0x42, 0x42, 0xF2, 0x92, 0x0A,
    0x92, 0xF2, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0xFE, 0xFC, 0x00,
    0x80, 0xB0, 0x70, 0x20, 0x18, 0x98,
    0x18, 0x20, 0x70, 0xB0, 0x80, 0x00,
    0x00, 0x40, 0x60, 0x70, 0x70, 0x70,
    0x70, 0xF0, 0xE0, 0xC0, 0x00, 0x00,
    0x00, 0x01, 0x81, 0x41, 0xA0, 0x10,
    0x90, 0x70, 0x20, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0xC0, 0xF0, 0xD8, 0x8E,
    0xD8, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
    0x06, 0x06, 0x12, 0x0C, 0x00, 0x00,
    0xFF, 0x00, 0x00, 0xFF, 0xF0, 0x3F,
    0xCF, 0xEE, 0xF7, 0x77, 0x71, 0x7E,
    0x7F, 0x3F, 0x03, 0xC1, 0xF9, 0xF1,
    0xF3, 0xF3, 0xF3, 0x70, 0x78, 0x7E,
    0x7E, 0x78, 0x71, 0xF3, 0xF3, 0xF3,
    0xF9, 0xF9, 0xC1, 0x03, 0x3F, 0x7F,
    0x7E, 0x71, 0x79, 0xFC, 0x0E, 0xF6,
    0xF6, 0xF7, 0xF7, 0xF3, 0xF9, 0xBE,
    0x1F, 0x1F, 0x1E, 0xFD, 0xFD, 0xFD,
    0xFD, 0xFE, 0xFE, 0xFD, 0xE1, 0xDF,
    0xBF, 0xB8, 0xBB, 0x73, 0xF6, 0xEE,
    0x1E, 0x7A, 0xF2, 0xA2, 0x22, 0x22,
    0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x23, 0x31, 0x11, 0x08, 0x04, 0x02,
    0x01, 0x80, 0xC0, 0x60, 0x30, 0x18,
    0x08, 0x08, 0x08, 0x0C, 0x1E, 0x12,
    0x21, 0x12, 0x1E, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x30, 0x78,
    0xFE, 0x00, 0x00, 0x07, 0x07, 0x00,
    0x03, 0x1B, 0x1C, 0x08, 0x31, 0x33,
    0x31, 0x08, 0x1C, 0x1B, 0x03, 0x00,
    0x00, 0x05, 0x05, 0x15, 0x15, 0x15,
    0x15, 0x15, 0x0F, 0x07, 0x00, 0x00,
    0x00, 0x3F, 0x29, 0x42, 0x7E, 0x49,
    0x22, 0x10, 0x0A, 0x07, 0x00, 0x00,
    0xF8, 0x3F, 0x1E, 0x05, 0x27, 0x4F,
    0x17, 0x05, 0x1E, 0x3F, 0xF8, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xE0, 0x7F, 0x1F, 0xE0, 0xE7,
    0x7F, 0x7F, 0x38, 0x00, 0x86, 0xFE,
    0xFE, 0xFF, 0x3F, 0x0F, 0xC3, 0xF1,
    0xF9, 0xFC, 0x3C, 0x1E, 0x9E, 0x9E,
    0x9E, 0x9E, 0x3E, 0x7C, 0xFC, 0xF9,
    0xF1, 0xC3, 0x0F, 0x3F, 0xFF, 0xFE,
    0xFE, 0x82, 0x00, 0x78, 0x78, 0xFF,
    0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0xFF,
    0xFF, 0xEE, 0xC6, 0xC7, 0xC7, 0xFF,
    0xFF, 0xF3, 0xF1, 0xF0, 0xE3, 0xFF,
    0xFF, 0xFF, 0xC3, 0x3C, 0xFF, 0xFF,
    0xC1, 0x1C, 0xFF, 0xF1, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x78, 0x48, 0x84, 0x48,
    0x78, 0x00, 0xFC, 0x84, 0xFC, 0x84,
    0x84, 0x84, 0x84, 0x84, 0x84, 0xFC,
    0x00, 0x78, 0x48, 0x84, 0x48, 0x78,
    0x30, 0x30, 0x30, 0x30, 0x00, 0x00,
    0x76, 0x16, 0x18, 0x37, 0x33, 0x03,
    0x00, 0x00, 0x0C, 0x12, 0x0E, 0x0E,
    0x02, 0x84, 0xB0, 0xA0, 0x84, 0x82,
    0x0E, 0x0E, 0x12, 0x0C, 0x00, 0x00,
    0x03, 0x33, 0x3F, 0x08, 0x16, 0x76,
    0xFF, 0x5C, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x20, 0x5C, 0xFF,
    0x00, 0x00, 0x04, 0x02, 0x02, 0x02,
    0x42, 0xC4, 0xD8, 0xD0, 0xC4, 0x42,
    0x02, 0x02, 0x02, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x0C, 0x12, 0x06, 0x06,
};

#endif // FONT5X7_H
