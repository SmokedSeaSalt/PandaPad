/*******************************************************************************
 * Size: 4 px
 * Bpp: 1
 * Opts: --bpp 1 --size 4 --no-compress --font pixel-bit-advanced.ttf --range 32-127 --format lvgl -o pixel_bit_advanced_4.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef PIXEL_BIT_ADVANCED_4
#define PIXEL_BIT_ADVANCED_4 1
#endif

#if PIXEL_BIT_ADVANCED_4

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff,

    /* U+0022 "\"" */
    0xfc,

    /* U+0023 "#" */
    0xff, 0xfe,

    /* U+0024 "$" */
    0x6f, 0xff, 0xf0,

    /* U+0025 "%" */
    0xfe, 0xff,

    /* U+0026 "&" */
    0xff, 0xff,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x7f, 0xc0,

    /* U+0029 ")" */
    0xbf, 0xc0,

    /* U+002B "+" */
    0xd7, 0xf0,

    /* U+002C "," */
    0xf0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x7f,

    /* U+0030 "0" */
    0xfd, 0xf6,

    /* U+0031 "1" */
    0xdb, 0xf0,

    /* U+0032 "2" */
    0xff, 0xff,

    /* U+0033 "3" */
    0xff, 0xf0,

    /* U+0034 "4" */
    0xdf, 0xb0,

    /* U+0035 "5" */
    0xff, 0xff,

    /* U+0036 "6" */
    0xff, 0xff,

    /* U+0037 "7" */
    0xfd, 0xb0,

    /* U+0038 "8" */
    0xff, 0xff,

    /* U+0039 "9" */
    0xff, 0xff,

    /* U+003A ":" */
    0xff,

    /* U+003B ";" */
    0xff,

    /* U+003C "<" */
    0xfc,

    /* U+003D "=" */
    0xff, 0xf0,

    /* U+003E ">" */
    0xfc,

    /* U+003F "?" */
    0xfd, 0xb0,

    /* U+0040 "@" */
    0xff, 0xf7, 0xff, 0x80,

    /* U+0041 "A" */
    0xfd, 0xdf,

    /* U+0042 "B" */
    0xff, 0xf0,

    /* U+0043 "C" */
    0xff, 0xf0,

    /* U+0044 "D" */
    0xfd, 0xfe,

    /* U+0045 "E" */
    0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xe0,

    /* U+0047 "G" */
    0xff, 0xff,

    /* U+0048 "H" */
    0xfd, 0xdf,

    /* U+0049 "I" */
    0xf6, 0xf0,

    /* U+004A "J" */
    0xff, 0xff,

    /* U+004B "K" */
    0xff, 0xf0,

    /* U+004C "L" */
    0xdb, 0xf0,

    /* U+004D "M" */
    0xff, 0xff,

    /* U+004E "N" */
    0xff, 0xff,

    /* U+004F "O" */
    0xfd, 0xdf,

    /* U+0050 "P" */
    0xff, 0xfc,

    /* U+0051 "Q" */
    0xfd, 0xdf,

    /* U+0052 "R" */
    0xff, 0xff,

    /* U+0053 "S" */
    0xff, 0xff,

    /* U+0054 "T" */
    0xff,

    /* U+0055 "U" */
    0xfd, 0xdf,

    /* U+0056 "V" */
    0xfd, 0xff,

    /* U+0057 "W" */
    0xff, 0xff,

    /* U+0058 "X" */
    0xff, 0xdf,

    /* U+0059 "Y" */
    0xfd, 0xdf,

    /* U+005A "Z" */
    0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xc0,

    /* U+005C "\\" */
    0xde, 0xb0,

    /* U+005D "]" */
    0xff, 0xc0,

    /* U+005E "^" */
    0xdf, 0x80,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xfc,

    /* U+0061 "a" */
    0xfd, 0xdf,

    /* U+0062 "b" */
    0xff, 0xf0,

    /* U+0063 "c" */
    0xff, 0xf0,

    /* U+0064 "d" */
    0xfd, 0xfe,

    /* U+0065 "e" */
    0xff, 0xf0,

    /* U+0066 "f" */
    0xff, 0xe0,

    /* U+0067 "g" */
    0xff, 0xff,

    /* U+0068 "h" */
    0xfd, 0xdf,

    /* U+0069 "i" */
    0xf6, 0xf0,

    /* U+006A "j" */
    0xff, 0xff,

    /* U+006B "k" */
    0xff, 0xf0,

    /* U+006C "l" */
    0xdb, 0xf0,

    /* U+006D "m" */
    0xff, 0xff,

    /* U+006E "n" */
    0xff, 0xff,

    /* U+006F "o" */
    0xfd, 0xdf,

    /* U+0070 "p" */
    0xff, 0xfc,

    /* U+0071 "q" */
    0xfd, 0xdf,

    /* U+0072 "r" */
    0xff, 0xff,

    /* U+0073 "s" */
    0xff, 0xff,

    /* U+0074 "t" */
    0xff,

    /* U+0075 "u" */
    0xfd, 0xdf,

    /* U+0076 "v" */
    0xfd, 0xff,

    /* U+0077 "w" */
    0xff, 0xff,

    /* U+0078 "x" */
    0xff, 0xdf,

    /* U+0079 "y" */
    0xfd, 0xdf,

    /* U+007A "z" */
    0xff, 0xff,

    /* U+007B "{" */
    0xff, 0xc0,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0xff, 0xc0,

    /* U+007E "~" */
    0xff, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 48, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 13, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 48, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 21, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 40, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 46, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 49, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 48, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 40, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 114, .adv_w = 56, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 116, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 48, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 48, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 48, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 56, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 1}
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
const lv_font_t pixel_bit_advanced_4 = {
#else
lv_font_t pixel_bit_advanced_4 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 5,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if PIXEL_BIT_ADVANCED_4*/

