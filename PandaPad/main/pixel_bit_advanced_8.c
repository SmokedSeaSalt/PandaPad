/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --no-compress --font pixel-bit-advanced.ttf --range 32-127 --format lvgl -o pixel_bit_advanced_8.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef PIXEL_BIT_ADVANCED_8
#define PIXEL_BIT_ADVANCED_8 1
#endif

#if PIXEL_BIT_ADVANCED_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf6, 0xdf, 0x7f,

    /* U+0022 "\"" */
    0xfd, 0x7f, 0xf0,

    /* U+0023 "#" */
    0x7d, 0xae, 0xe, 0xb8, 0x3a, 0xff, 0xbe,

    /* U+0024 "$" */
    0x39, 0xde, 0xd, 0x78, 0x3d, 0x60, 0xf7, 0xfe,
    0x70,

    /* U+0025 "%" */
    0xef, 0x77, 0xdb, 0x6d, 0xf7, 0x7f, 0xff,

    /* U+0026 "&" */
    0xfd, 0xa, 0xde, 0x5b, 0x71, 0x7f, 0xff,

    /* U+0027 "'" */
    0xf7, 0xf0,

    /* U+0028 "(" */
    0x7d, 0xbb, 0xaa, 0xbd, 0xf7,

    /* U+0029 ")" */
    0xeb, 0xdd, 0x55, 0xdb, 0xfe,

    /* U+002B "+" */
    0x76, 0xe3, 0xbf, 0xff, 0xe0,

    /* U+002C "," */
    0xf6, 0xfc,

    /* U+002D "-" */
    0xfc, 0x7f, 0xf0,

    /* U+002E "." */
    0xf7, 0xf0,

    /* U+002F "/" */
    0x75, 0xdb, 0xba, 0xee,

    /* U+0030 "0" */
    0x7b, 0x3b, 0x6d, 0xb7, 0x3f, 0xde,

    /* U+0031 "1" */
    0xf4, 0xb4, 0xad, 0xc7, 0xff,

    /* U+0032 "2" */
    0xfe, 0x1f, 0x61, 0xbe, 0x1f, 0xff,

    /* U+0033 "3" */
    0xfe, 0x1f, 0x51, 0xf6, 0x1f, 0xff,

    /* U+0034 "4" */
    0xe2, 0x8b, 0xab, 0x87, 0xbf, 0xce,

    /* U+0035 "5" */
    0xfe, 0x1b, 0xe1, 0xf6, 0x1f, 0xff,

    /* U+0036 "6" */
    0xfe, 0x1b, 0xe1, 0xb6, 0x1f, 0xff,

    /* U+0037 "7" */
    0xfe, 0x1f, 0x79, 0x34, 0xd1, 0xc7,

    /* U+0038 "8" */
    0xfe, 0x1b, 0x61, 0xb6, 0x1f, 0xff,

    /* U+0039 "9" */
    0xfe, 0x1b, 0x61, 0xf6, 0x1f, 0xff,

    /* U+003A ":" */
    0xf7, 0xdf, 0xf8,

    /* U+003B ";" */
    0xf7, 0xdb, 0xf8,

    /* U+003C "<" */
    0x7d, 0xbd, 0xf7,

    /* U+003D "=" */
    0xfc, 0x7f, 0x1f, 0xff, 0xe0,

    /* U+003E ">" */
    0xeb, 0xdb, 0xfe,

    /* U+003F "?" */
    0xfe, 0x1f, 0x79, 0x3c, 0xb3, 0xcf,

    /* U+0040 "@" */
    0xff, 0x81, 0xbd, 0xa5, 0xa5, 0xb5, 0x85, 0xff,
    0xff,

    /* U+0041 "A" */
    0xfe, 0x1b, 0x61, 0xb6, 0xdf, 0xff,

    /* U+0042 "B" */
    0xfa, 0x3b, 0x63, 0xb6, 0x3f, 0xfe,

    /* U+0043 "C" */
    0xfe, 0x1b, 0xee, 0xbe, 0x1f, 0xff,

    /* U+0044 "D" */
    0xfa, 0x3b, 0x6d, 0xb6, 0x3f, 0xfe,

    /* U+0045 "E" */
    0xfe, 0x1b, 0xe2, 0xbe, 0x1f, 0xff,

    /* U+0046 "F" */
    0xfe, 0x1b, 0xe2, 0xba, 0xee, 0x38,

    /* U+0047 "G" */
    0xfe, 0x1b, 0xe9, 0xb6, 0x1f, 0xff,

    /* U+0048 "H" */
    0xfe, 0xdb, 0x61, 0xb6, 0xdf, 0xff,

    /* U+0049 "I" */
    0xfc, 0x76, 0xad, 0xc7, 0xff,

    /* U+004A "J" */
    0xfe, 0x1f, 0x7d, 0xb6, 0x1f, 0xff,

    /* U+004B "K" */
    0xfe, 0xda, 0xe6, 0xae, 0xdf, 0xff,

    /* U+004C "L" */
    0xe2, 0x8a, 0x28, 0xbe, 0x1f, 0xff,

    /* U+004D "M" */
    0xef, 0x76, 0x4d, 0x5b, 0xb7, 0x7f, 0xff,

    /* U+004E "N" */
    0xef, 0x76, 0x6d, 0x5b, 0x37, 0x7f, 0xff,

    /* U+004F "O" */
    0xfe, 0x1b, 0x6d, 0xb6, 0x1f, 0xff,

    /* U+0050 "P" */
    0xfe, 0x1b, 0x61, 0xbe, 0xfe, 0x38,

    /* U+0051 "Q" */
    0xfe, 0x1b, 0x6d, 0xa6, 0x1f, 0xff,

    /* U+0052 "R" */
    0xfe, 0x1b, 0x61, 0xae, 0xdf, 0xff,

    /* U+0053 "S" */
    0xfe, 0x1b, 0xe1, 0xf6, 0x1f, 0xff,

    /* U+0054 "T" */
    0xfc, 0x77, 0xb5, 0x29, 0xce,

    /* U+0055 "U" */
    0xfe, 0xdb, 0x6d, 0xb6, 0x1f, 0xff,

    /* U+0056 "V" */
    0xfe, 0xdb, 0x6d, 0xb7, 0x3f, 0xde,

    /* U+0057 "W" */
    0xef, 0x76, 0xed, 0x59, 0x37, 0x7f, 0xff,

    /* U+0058 "X" */
    0xfe, 0xdb, 0x73, 0xb6, 0xdf, 0xff,

    /* U+0059 "Y" */
    0xfe, 0xdb, 0x61, 0xf6, 0x1f, 0xff,

    /* U+005A "Z" */
    0xfe, 0x1f, 0x73, 0xbe, 0x1f, 0xff,

    /* U+005B "[" */
    0xf9, 0xbb, 0xaa, 0xb9, 0xff,

    /* U+005C "\\" */
    0xea, 0xbd, 0xd5, 0x77,

    /* U+005D "]" */
    0xf9, 0xdd, 0x55, 0xd9, 0xff,

    /* U+005E "^" */
    0x76, 0xeb, 0xfd, 0x80,

    /* U+005F "_" */
    0xfe, 0x1f, 0xff,

    /* U+0060 "`" */
    0xeb, 0xdf, 0x70,

    /* U+0061 "a" */
    0xfe, 0x1b, 0x61, 0xb6, 0xdf, 0xff,

    /* U+0062 "b" */
    0xfa, 0x3b, 0x63, 0xb6, 0x3f, 0xfe,

    /* U+0063 "c" */
    0xfe, 0x1b, 0xee, 0xbe, 0x1f, 0xff,

    /* U+0064 "d" */
    0xfa, 0x3b, 0x6d, 0xb6, 0x3f, 0xfe,

    /* U+0065 "e" */
    0xfe, 0x1b, 0xe2, 0xbe, 0x1f, 0xff,

    /* U+0066 "f" */
    0xfe, 0x1b, 0xe2, 0xba, 0xee, 0x38,

    /* U+0067 "g" */
    0xfe, 0x1b, 0xe9, 0xb6, 0x1f, 0xff,

    /* U+0068 "h" */
    0xfe, 0xdb, 0x61, 0xb6, 0xdf, 0xff,

    /* U+0069 "i" */
    0xfc, 0x76, 0xad, 0xc7, 0xff,

    /* U+006A "j" */
    0xfe, 0x1f, 0x7d, 0xb6, 0x1f, 0xff,

    /* U+006B "k" */
    0xfe, 0xda, 0xe6, 0xae, 0xdf, 0xff,

    /* U+006C "l" */
    0xe2, 0x8a, 0x28, 0xbe, 0x1f, 0xff,

    /* U+006D "m" */
    0xef, 0x76, 0x4d, 0x5b, 0xb7, 0x7f, 0xff,

    /* U+006E "n" */
    0xef, 0x76, 0x6d, 0x5b, 0x37, 0x7f, 0xff,

    /* U+006F "o" */
    0xfe, 0x1b, 0x6d, 0xb6, 0x1f, 0xff,

    /* U+0070 "p" */
    0xfe, 0x1b, 0x61, 0xbe, 0xfe, 0x38,

    /* U+0071 "q" */
    0xfe, 0x1b, 0x6d, 0xa6, 0x1f, 0xff,

    /* U+0072 "r" */
    0xfe, 0x1b, 0x61, 0xae, 0xdf, 0xff,

    /* U+0073 "s" */
    0xfe, 0x1b, 0xe1, 0xf6, 0x1f, 0xff,

    /* U+0074 "t" */
    0xfc, 0x77, 0xb5, 0x29, 0xce,

    /* U+0075 "u" */
    0xfe, 0xdb, 0x6d, 0xb6, 0x1f, 0xff,

    /* U+0076 "v" */
    0xfe, 0xdb, 0x6d, 0xb7, 0x3f, 0xde,

    /* U+0077 "w" */
    0xef, 0x76, 0xed, 0x59, 0x37, 0x7f, 0xff,

    /* U+0078 "x" */
    0xfe, 0xdb, 0x73, 0xb6, 0xdf, 0xff,

    /* U+0079 "y" */
    0xfe, 0xdb, 0x61, 0xf6, 0x1f, 0xff,

    /* U+007A "z" */
    0xfe, 0x1f, 0x73, 0xbe, 0x1f, 0xff,

    /* U+007B "{" */
    0x7a, 0x57, 0xb9, 0x69, 0x69, 0x7b, 0xc0,

    /* U+007C "|" */
    0xf6, 0xdb, 0x6d, 0xfc,

    /* U+007D "}" */
    0xf4, 0xb5, 0xb4, 0xaf, 0x52, 0xf7, 0x80,

    /* U+007E "~" */
    0xfa, 0xbd, 0x7f, 0x7c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 80, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 64, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 96, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 39, .adv_w = 80, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 44, .adv_w = 80, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 49, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 64, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 56, .adv_w = 96, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 59, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 80, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 64, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 64, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 133, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 141, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 80, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 318, .adv_w = 80, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 80, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 327, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 331, .adv_w = 112, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 80, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 337, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 501, .adv_w = 64, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 505, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 512, .adv_w = 112, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 43, .range_length = 84, .glyph_id_start = 11,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
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
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
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
const lv_font_t pixel_bit_advanced_8 = {
#else
lv_font_t pixel_bit_advanced_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    //.user_data = NULL,
};



#endif /*#if PIXEL_BIT_ADVANCED_8*/

