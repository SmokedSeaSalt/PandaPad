/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --no-compress --font Fipps-Regular.ttf --range 32-127 --format lvgl -o fipps_8.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FIPPS_8
#define FIPPS_8 1
#endif

#if FIPPS_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x6b, 0xbb, 0xbb, 0xfb, 0xf7,

    /* U+0022 "\"" */
    0x7a, 0xba, 0xff, 0x7c,

    /* U+0023 "#" */
    0x3c, 0x56, 0x83, 0xd7, 0x83, 0xd7, 0x7e, 0x3c,

    /* U+0024 "$" */
    0x18, 0x2e, 0x43, 0xaf, 0xaf, 0xc6, 0xeb, 0x6b,
    0x87, 0xef, 0x7e, 0x18,

    /* U+0025 "%" */
    0x0,

    /* U+0026 "&" */
    0x38, 0x4c, 0xbc, 0xb6, 0xc3, 0xb7, 0xb6, 0xcb,
    0x7f, 0x3f,

    /* U+0027 "'" */
    0x6b, 0xbf, 0x70,

    /* U+0028 "(" */
    0x32, 0xef, 0x6b, 0x5a, 0xdb, 0x79, 0xc0,

    /* U+0029 ")" */
    0x65, 0xb6, 0xb5, 0xad, 0x77, 0xf3, 0x0,

    /* U+002A "*" */
    0x18, 0x6e, 0xab, 0xc7, 0xab, 0xef, 0x7e, 0x1c,

    /* U+002B "+" */
    0x31, 0x68, 0xf7, 0x78, 0xc0,

    /* U+002C "," */
    0x32, 0xd7, 0x7f, 0x30,

    /* U+002D "-" */
    0x7a, 0x3f, 0xdf,

    /* U+002E "." */
    0x6b, 0xf7,

    /* U+002F "/" */
    0xc, 0x2c, 0x59, 0x72, 0xcb, 0x96, 0x5c, 0xb1,
    0xe1, 0xc0,

    /* U+0030 "0" */
    0x3c, 0x46, 0xbb, 0xbb, 0xab, 0xbb, 0xbb, 0xc7,
    0x7f, 0x3e,

    /* U+0031 "1" */
    0x32, 0xe7, 0xb5, 0xad, 0x6b, 0x79, 0xc0,

    /* U+0032 "2" */
    0x7c, 0x86, 0xfb, 0x3b, 0x36, 0x4c, 0xbe, 0x83,
    0xff, 0x7f,

    /* U+0033 "3" */
    0x7c, 0x86, 0xfb, 0x7b, 0x26, 0x3b, 0x7b, 0x87,
    0xfe, 0x7c,

    /* U+0034 "4" */
    0x66, 0xbb, 0xbb, 0xbb, 0x83, 0xfb, 0x7b, 0xb,
    0xf, 0x7,

    /* U+0035 "5" */
    0xfe, 0x83, 0xbf, 0xbc, 0x86, 0xfb, 0x7b, 0x87,
    0xfe, 0x7c,

    /* U+0036 "6" */
    0x3c, 0x46, 0xbe, 0xb8, 0x86, 0xbb, 0xbb, 0xc7,
    0x7e, 0x3c,

    /* U+0037 "7" */
    0x7e, 0x83, 0xfb, 0x17, 0x2e, 0x2c, 0x5c, 0x58,
    0x78, 0x38,

    /* U+0038 "8" */
    0x3c, 0x46, 0xbb, 0xbb, 0xc6, 0xbb, 0xbb, 0xc7,
    0x7e, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x46, 0xbb, 0xbb, 0xc3, 0x7b, 0x3b, 0x47,
    0x7e, 0x3c,

    /* U+003A ":" */
    0x6b, 0xfb, 0xf7,

    /* U+003B ";" */
    0x32, 0xde, 0xb5, 0xdf, 0xcc,

    /* U+003C "<" */
    0x18, 0xb5, 0xee, 0xd9, 0xb3, 0xc7,

    /* U+003D "=" */
    0x7a, 0x3f, 0xe3, 0xfd, 0xf0,

    /* U+003E ">" */
    0x62, 0xcd, 0x9b, 0x5e, 0xef, 0x18,

    /* U+003F "?" */
    0x3e, 0x21, 0xaf, 0x7f, 0xb7, 0xb8, 0xb8, 0x78,
    0x2c, 0x1e, 0x7, 0x0,

    /* U+0040 "@" */
    0x1f, 0x8, 0x65, 0xee, 0xe3, 0xb6, 0xee, 0x3d,
    0xfd, 0x83, 0x3f, 0xc7, 0xf0,

    /* U+0041 "A" */
    0x3c, 0x46, 0xbb, 0xbb, 0x83, 0xbb, 0xbb, 0xbb,
    0xff, 0x77,

    /* U+0042 "B" */
    0x7c, 0x86, 0xbb, 0xbb, 0x87, 0xbb, 0xbb, 0x87,
    0xff, 0x7e,

    /* U+0043 "C" */
    0x3e, 0x43, 0xbf, 0xbf, 0xb8, 0xb8, 0xbe, 0xc3,
    0x7f, 0x3f,

    /* U+0044 "D" */
    0x7c, 0x86, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x87,
    0xff, 0x7e,

    /* U+0045 "E" */
    0x7d, 0xe, 0xfd, 0xe8, 0x77, 0xef, 0x43, 0xfe,
    0xfc,

    /* U+0046 "F" */
    0x7d, 0xe, 0xfd, 0xe8, 0x77, 0xef, 0xd8, 0xf0,
    0xe0,

    /* U+0047 "G" */
    0x3e, 0x43, 0xbf, 0xbf, 0xb3, 0xbb, 0xbb, 0xc7,
    0x7f, 0x3e,

    /* U+0048 "H" */
    0x66, 0xbb, 0xbb, 0xbb, 0x83, 0xbb, 0xbb, 0xbb,
    0xff, 0x77,

    /* U+0049 "I" */
    0x6b, 0xbb, 0xbb, 0xbb, 0xf7,

    /* U+004A "J" */
    0x6, 0xb, 0xb, 0xb, 0x6b, 0xbb, 0xbb, 0xc7,
    0x7f, 0x3e,

    /* U+004B "K" */
    0x66, 0xbb, 0xbb, 0xbb, 0x87, 0xbb, 0xbb, 0xbb,
    0xff, 0x77,

    /* U+004C "L" */
    0x61, 0x62, 0xc5, 0x8b, 0x16, 0x2f, 0x43, 0xfe,
    0xfc,

    /* U+004D "M" */
    0x61, 0xac, 0xb9, 0xce, 0xab, 0xb6, 0xef, 0xbb,
    0xee, 0xcb, 0xf3, 0xdc, 0x70,

    /* U+004E "N" */
    0x66, 0xbb, 0x9b, 0xab, 0xb3, 0xbb, 0xbb, 0xbb,
    0xff, 0x77,

    /* U+004F "O" */
    0x3c, 0x46, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xc7,
    0x7f, 0x3e,

    /* U+0050 "P" */
    0x7c, 0x86, 0xbb, 0xbb, 0x87, 0xbe, 0xbc, 0xb0,
    0xf0, 0x70,

    /* U+0051 "Q" */
    0x3c, 0x46, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xc6,
    0x7b, 0x3f, 0x7,

    /* U+0052 "R" */
    0x7c, 0x86, 0xbb, 0xbb, 0x86, 0xbb, 0xbb, 0xbb,
    0xff, 0x77,

    /* U+0053 "S" */
    0x3e, 0x43, 0xbf, 0xbf, 0xc6, 0x7b, 0x7b, 0x87,
    0xff, 0x7e,

    /* U+0054 "T" */
    0x7e, 0x83, 0xef, 0x6f, 0x2c, 0x2c, 0x2c, 0x2c,
    0x3c, 0x1c,

    /* U+0055 "U" */
    0x66, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xc7,
    0x7f, 0x3e,

    /* U+0056 "V" */
    0x63, 0x5a, 0xed, 0x77, 0xbd, 0xba, 0xd9, 0x6c,
    0xce, 0x3e, 0xe, 0x0,

    /* U+0057 "W" */
    0x61, 0xac, 0xbb, 0x2e, 0xcb, 0xbe, 0xed, 0xba,
    0xaf, 0x77, 0x7f, 0xce, 0xe0,

    /* U+0058 "X" */
    0x63, 0x5a, 0xef, 0x7b, 0x76, 0x72, 0xda, 0xf7,
    0x7b, 0xf7, 0xb1, 0xc0,

    /* U+0059 "Y" */
    0x61, 0xac, 0xbb, 0xaf, 0x77, 0x63, 0x8d, 0xc1,
    0x60, 0x58, 0x1e, 0x3, 0x80,

    /* U+005A "Z" */
    0x7e, 0x83, 0xfb, 0x37, 0x2e, 0x5c, 0xbe, 0x83,
    0xff, 0x7f,

    /* U+005B "[" */
    0xf4, 0xef, 0x6b, 0x5a, 0xd3, 0xfb, 0xc0,

    /* U+005C "\\" */
    0x61, 0x62, 0xc6, 0xc5, 0x8d, 0x8b, 0x1b, 0x16,
    0x3c, 0x38,

    /* U+005D "]" */
    0x74, 0xf6, 0xb5, 0xad, 0x73, 0xfb, 0xc0,

    /* U+005E "^" */
    0x31, 0x6a, 0xff, 0x7c,

    /* U+005F "_" */
    0x7d, 0xf, 0xfb, 0xf0,

    /* U+0060 "`" */
    0x65, 0xb6, 0xf3, 0x80,

    /* U+0061 "a" */
    0x3e, 0x47, 0x3b, 0x43, 0xbb, 0xc3, 0x7f, 0x3f,

    /* U+0062 "b" */
    0x60, 0xb8, 0xbc, 0x86, 0xbb, 0xbb, 0xbb, 0x87,
    0xfe, 0x7c,

    /* U+0063 "c" */
    0x3c, 0x8e, 0xfd, 0xcb, 0xd8, 0xdf, 0x9f,

    /* U+0064 "d" */
    0x6, 0xb, 0x3b, 0x43, 0xbb, 0xbb, 0xbb, 0xc3,
    0x7f, 0x3f,

    /* U+0065 "e" */
    0x3c, 0x46, 0xbb, 0x83, 0xbf, 0xc3, 0x7f, 0x3f,

    /* U+0066 "f" */
    0x1c, 0x4d, 0x7c, 0x3d, 0xeb, 0xd6, 0x2c, 0x78,
    0x70,

    /* U+0067 "g" */
    0x3e, 0x43, 0xbb, 0xbb, 0xbb, 0xc3, 0x7b, 0x7b,
    0x87, 0xfe, 0x7c,

    /* U+0068 "h" */
    0x60, 0xb0, 0xbc, 0x86, 0xbb, 0xbb, 0xbb, 0xbb,
    0xff, 0x67,

    /* U+0069 "i" */
    0x6b, 0xfb, 0xbb, 0xbb, 0xf7,

    /* U+006A "j" */
    0x32, 0xde, 0xb5, 0xad, 0x6b, 0x5a, 0xef, 0xe6,
    0x0,

    /* U+006B "k" */
    0x60, 0xb6, 0xbb, 0xb7, 0x8e, 0xb6, 0xbb, 0xbb,
    0xff, 0x67,

    /* U+006C "l" */
    0x6b, 0xbb, 0xbb, 0xbb, 0xf7,

    /* U+006D "m" */
    0x7f, 0x22, 0x6b, 0x6e, 0xdb, 0xb6, 0xed, 0xbf,
    0xfd, 0xb7,

    /* U+006E "n" */
    0x7c, 0x86, 0xbb, 0xbb, 0xbb, 0xbb, 0xff, 0x67,

    /* U+006F "o" */
    0x3c, 0x46, 0xbb, 0xbb, 0xbb, 0xc7, 0x7e, 0x3c,

    /* U+0070 "p" */
    0x7c, 0x86, 0xbb, 0xbb, 0xbb, 0x87, 0xbe, 0xb8,
    0xb0, 0xf0, 0x70,

    /* U+0071 "q" */
    0x3e, 0x43, 0xbb, 0xbb, 0xbb, 0xc3, 0x7b, 0x3b,
    0xb, 0xf, 0x7,

    /* U+0072 "r" */
    0x39, 0x3b, 0xec, 0xb2, 0xcf, 0x1c,

    /* U+0073 "s" */
    0x3e, 0x43, 0xbf, 0xc6, 0x7b, 0x87, 0xfe, 0x7c,

    /* U+0074 "t" */
    0x31, 0x65, 0xa3, 0xdd, 0x65, 0x9b, 0x3c, 0x70,

    /* U+0075 "u" */
    0x66, 0xbb, 0xbb, 0xbb, 0xbb, 0xc7, 0x7f, 0x3e,

    /* U+0076 "v" */
    0x66, 0xbb, 0xbb, 0xbb, 0xd7, 0x6e, 0x3c, 0x18,

    /* U+0077 "w" */
    0x61, 0xaf, 0xbb, 0x6e, 0xdb, 0xaa, 0xf7, 0x77,
    0xf8, 0xcc,

    /* U+0078 "x" */
    0x66, 0xbb, 0xd7, 0x6e, 0x56, 0xbb, 0xff, 0x66,

    /* U+0079 "y" */
    0x66, 0xbb, 0xbb, 0xbb, 0xbb, 0xc3, 0x7b, 0x3b,
    0x47, 0x7e, 0x3c,

    /* U+007A "z" */
    0x7e, 0x83, 0xfb, 0x46, 0xbe, 0x83, 0xff, 0x7f,

    /* U+007B "{" */
    0x18, 0xb5, 0xd6, 0xbb, 0x65, 0x9b, 0x3c, 0x70,

    /* U+007C "|" */
    0x6b, 0xbb, 0xbb, 0xbb, 0xbf, 0x70,

    /* U+007D "}" */
    0x62, 0xcd, 0x96, 0x6d, 0x75, 0xae, 0xf1, 0x80,

    /* U+007E "~" */
    0x3c, 0xae, 0xbf, 0xe7, 0x80,

    /* U+007F "" */
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 30, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 44, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 71, .adv_w = 64, .box_w = 5, .box_h = 6, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 75, .adv_w = 96, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 78, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 112, .box_w = 8, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 64, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 190, .adv_w = 64, .box_w = 5, .box_h = 8, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 195, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 206, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 237, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 403, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 531, .adv_w = 112, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 539, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 602, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 64, .box_w = 5, .box_h = 13, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 626, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 678, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 689, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 756, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 64, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 112, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 791, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    16, 16,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 71,
    39, 72,
    39, 82,
    39, 83,
    39, 84,
    39, 85,
    45, 71,
    45, 85,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 71,
    49, 72,
    49, 82,
    49, 83,
    49, 84,
    49, 85,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 71,
    53, 72,
    53, 82,
    53, 83,
    53, 84,
    53, 85,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    61, 61,
    71, 66,
    71, 68,
    71, 69,
    71, 70,
    71, 71,
    71, 72,
    71, 82,
    71, 83,
    71, 84,
    71, 85
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -48, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -32, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -32,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -32, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -48, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 54,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t fipps_8 = {
#else
lv_font_t fipps_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    //.user_data = NULL,
};



#endif /*#if FIPPS_8*/

