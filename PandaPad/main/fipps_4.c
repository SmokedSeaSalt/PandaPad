/*******************************************************************************
 * Size: 4 px
 * Bpp: 1
 * Opts: --bpp 1 --size 4 --no-compress --font Fipps-Regular.ttf --range 32-127 --format lvgl -o fipps_4.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FIPPS_4
#define FIPPS_4 1
#endif

#if FIPPS_4

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xc0,

    /* U+0022 "\"" */
    0xfd, 0x80,

    /* U+0023 "#" */
    0xff, 0xf6,

    /* U+0024 "$" */
    0x2f, 0xff, 0x97,

    /* U+0025 "%" */
    0x0,

    /* U+0026 "&" */
    0xee, 0xdb, 0x70,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x7b, 0x76,

    /* U+0029 ")" */
    0xff, 0x80,

    /* U+002A "*" */
    0xff, 0xf6,

    /* U+002B "+" */
    0xfd, 0x0,

    /* U+002C "," */
    0xf8,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x13, 0x57, 0xee,

    /* U+0030 "0" */
    0x7f, 0xff, 0x70,

    /* U+0031 "1" */
    0x7d, 0xb6,

    /* U+0032 "2" */
    0xff, 0xaf, 0xf0,

    /* U+0033 "3" */
    0xff, 0x7f, 0xe0,

    /* U+0034 "4" */
    0xff, 0xf3, 0x10,

    /* U+0035 "5" */
    0xff, 0xf9, 0x60,

    /* U+0036 "6" */
    0x7f, 0xfd, 0x70,

    /* U+0037 "7" */
    0xff, 0x7a, 0xe0,

    /* U+0038 "8" */
    0x7f, 0xfd, 0x60,

    /* U+0039 "9" */
    0x7f, 0xf5, 0x70,

    /* U+003A ":" */
    0xfc,

    /* U+003B ";" */
    0x6f, 0xa0,

    /* U+003C "<" */
    0x7f, 0xb0,

    /* U+003D "=" */
    0xff, 0x80,

    /* U+003E ">" */
    0xe7, 0xe4,

    /* U+003F "?" */
    0xff, 0x56, 0x63, 0x0,

    /* U+0040 "@" */
    0x37, 0xf7, 0x77, 0x80,

    /* U+0041 "A" */
    0x7f, 0xff, 0xf0,

    /* U+0042 "B" */
    0xff, 0xf9, 0xf0,

    /* U+0043 "C" */
    0xff, 0xef, 0x70,

    /* U+0044 "D" */
    0xff, 0xff, 0xf0,

    /* U+0045 "E" */
    0xff, 0xf9, 0x70,

    /* U+0046 "F" */
    0xff, 0xfe, 0x60,

    /* U+0047 "G" */
    0xff, 0xff, 0x70,

    /* U+0048 "H" */
    0xff, 0xff, 0x70,

    /* U+0049 "I" */
    0xff, 0xc0,

    /* U+004A "J" */
    0x33, 0xff, 0x70,

    /* U+004B "K" */
    0xff, 0xff, 0x70,

    /* U+004C "L" */
    0xcc, 0xcb, 0x70,

    /* U+004D "M" */
    0xff, 0xff, 0xf6, 0x80,

    /* U+004E "N" */
    0xff, 0xff, 0x50,

    /* U+004F "O" */
    0x7f, 0xff, 0x70,

    /* U+0050 "P" */
    0xff, 0xfe, 0x60,

    /* U+0051 "Q" */
    0x7f, 0xff, 0x70,

    /* U+0052 "R" */
    0xff, 0xff, 0x70,

    /* U+0053 "S" */
    0xff, 0xf9, 0x70,

    /* U+0054 "T" */
    0xff, 0x66, 0x60,

    /* U+0055 "U" */
    0xff, 0xfd, 0x70,

    /* U+0056 "V" */
    0xfd, 0x5e, 0xb2, 0x0,

    /* U+0057 "W" */
    0xff, 0xff, 0xf7, 0x80,

    /* U+0058 "X" */
    0xff, 0xdd, 0xdf, 0x80,

    /* U+0059 "Y" */
    0xff, 0xdc, 0x63, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0,

    /* U+005B "[" */
    0xfb, 0x7e,

    /* U+005C "\\" */
    0x4c, 0xa6, 0x53,

    /* U+005D "]" */
    0xff, 0xc0,

    /* U+005E "^" */
    0x5f, 0x80,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xdd, 0x80,

    /* U+0061 "a" */
    0xff, 0xf7,

    /* U+0062 "b" */
    0xe9, 0xff, 0x60,

    /* U+0063 "c" */
    0x7f, 0xd7,

    /* U+0064 "d" */
    0x37, 0xfd, 0x70,

    /* U+0065 "e" */
    0xff, 0xf7,

    /* U+0066 "f" */
    0xff, 0xec,

    /* U+0067 "g" */
    0x7f, 0xff, 0x60,

    /* U+0068 "h" */
    0xef, 0xff, 0xf0,

    /* U+0069 "i" */
    0xff, 0xc0,

    /* U+006A "j" */
    0x6d, 0xbe, 0x80,

    /* U+006B "k" */
    0xf7, 0xff, 0xf5, 0x80,

    /* U+006C "l" */
    0xff, 0xc0,

    /* U+006D "m" */
    0xfe, 0xf7, 0xf0,

    /* U+006E "n" */
    0xff, 0xff,

    /* U+006F "o" */
    0x7f, 0xd6,

    /* U+0070 "p" */
    0xff, 0xfe, 0xe0,

    /* U+0071 "q" */
    0xff, 0x77, 0x30,

    /* U+0072 "r" */
    0xff, 0x60,

    /* U+0073 "s" */
    0xff, 0xfe,

    /* U+0074 "t" */
    0xf6, 0xf2,

    /* U+0075 "u" */
    0xff, 0xd7,

    /* U+0076 "v" */
    0xff, 0x72,

    /* U+0077 "w" */
    0xff, 0xfe, 0xe0,

    /* U+0078 "x" */
    0xfb, 0xbe, 0xa0,

    /* U+0079 "y" */
    0xff, 0xd7, 0x70,

    /* U+007A "z" */
    0xf9, 0xff,

    /* U+007B "{" */
    0x7b, 0x76,

    /* U+007C "|" */
    0x7f, 0xf0,

    /* U+007D "}" */
    0xdb, 0xe8,

    /* U+007E "~" */
    0x6f, 0xe0,

    /* U+007F "" */
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 5, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 64, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 15, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 23, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 24, .adv_w = 48, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 25, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 56, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 59, .adv_w = 32, .box_w = 3, .box_h = 4, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 61, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 65, .adv_w = 48, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 56, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 166, .adv_w = 56, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 169, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 186, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 32, .box_w = 3, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 194, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 210, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 213, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 48, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 64, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 232, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 48, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 32, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 48, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 56, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 242, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0}
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
    -24, -8, -8, -8, -8, -8, -8, -8,
    -8, -8, -8, -8, -8, -16, -8, -8,
    -8, -8, -8, -8, -8, -8, -8, -16,
    -8, -8, -8, -8, -8, -8, -8, -8,
    -8, -16, -8, -8, -8, -8, -8, -8,
    -8, -8, -8, -24, -8, -8, -8, -8,
    -8, -8, -8, -8, -8, -8
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
const lv_font_t fipps_4 = {
#else
lv_font_t fipps_4 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 7,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    //.user_data = NULL,
};



#endif /*#if FIPPS_4*/

