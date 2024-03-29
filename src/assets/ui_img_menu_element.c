
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t ui_img_menu_element_map[] = {

    0xff,0xff,0xff,0xff,0x4c,0x70,0x47,0x00,0xff,0xff,0xff,0x01,0xff,0xff,0xff,0x11,
    0xff,0xff,0xff,0xef,0xff,0xff,0xff,0x04,0xff,0xff,0xff,0xc7,0xff,0xff,0xff,0xdc,
    0xff,0xff,0xff,0x23,0xff,0xff,0xff,0x70,0xff,0xff,0xff,0x58,0xff,0xff,0xff,0xab,
    0xff,0xff,0xff,0x44,0xff,0xff,0xff,0x84,0xff,0xff,0xff,0x33,0xff,0xff,0xff,0x97,

    0x22,0x11,0x11,0x11,0x11,0x22,0x22,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,
    0x22,0x11,0x11,0x11,0x11,0x22,0x22,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,
    0x22,0x11,0x11,0x11,0x11,0x2c,0xb4,0x00,0x07,0xbc,0x11,0x11,0x11,0x11,0x11,0x11,
    0x22,0x11,0x11,0x11,0x25,0xd4,0x00,0x00,0x00,0x44,0xd3,0x11,0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x22,0x2b,0x40,0x00,0x00,0x00,0x00,0x4b,0x22,0x22,0x11,0x11,0x11,
    0x11,0x11,0x11,0x22,0xd0,0x00,0x00,0x47,0x40,0x00,0x04,0xd2,0x22,0x11,0x11,0x11,
    0x11,0x11,0x11,0x2e,0x70,0x00,0x79,0x83,0x89,0x70,0x00,0x7e,0x22,0x11,0x11,0x11,
    0x11,0x11,0x11,0x2f,0x00,0x07,0xc3,0x22,0x13,0xa7,0x00,0x4d,0x22,0x11,0x11,0x11,
    0x11,0x11,0x11,0x26,0x00,0x09,0x22,0x11,0x11,0x29,0x00,0x06,0x55,0x11,0x11,0x11,
    0x11,0x11,0x11,0x87,0x00,0x4c,0x22,0x11,0x11,0x5c,0x40,0x06,0x35,0x11,0x11,0x11,
    0x11,0x11,0x11,0x8d,0x99,0x98,0x22,0x11,0x11,0x5e,0x70,0x06,0x55,0x11,0x11,0x11,
    0x11,0x11,0x11,0x23,0x88,0x32,0x22,0x11,0x11,0x5c,0x00,0x0f,0x55,0x11,0x11,0x11,
    0x11,0x22,0x28,0xcf,0x66,0xb9,0x85,0x11,0x13,0xa6,0x00,0x0f,0x53,0x22,0x22,0x11,
    0x11,0x23,0x96,0x00,0x00,0x00,0x79,0x31,0x8b,0x40,0x00,0x49,0x5f,0x93,0x22,0x11,
    0x11,0x3f,0x00,0x00,0x00,0x00,0x00,0xbe,0x3b,0x00,0x00,0x63,0xa0,0x4f,0x32,0x11,
    0x15,0xf0,0x00,0x00,0x67,0x00,0x00,0x04,0xee,0x70,0x04,0xc3,0x70,0x00,0xd2,0x11,
    0x1c,0x40,0x00,0x79,0xe8,0xab,0x00,0x00,0xf3,0xd0,0x68,0x2a,0x70,0x00,0x4c,0x22,
    0x2b,0x00,0x07,0xa2,0x11,0x53,0xd4,0x00,0x4c,0xeb,0xc2,0x11,0x97,0x00,0x0b,0x32,
    0x10,0x00,0x0a,0x22,0x22,0x55,0x5f,0x00,0x09,0x33,0x22,0x21,0x19,0x00,0x04,0xc2,
    0x10,0x00,0x73,0x22,0x22,0x55,0x5a,0x00,0x0a,0x22,0x22,0x22,0x13,0x70,0x00,0xd2,
    0x20,0x00,0x63,0x11,0x11,0x22,0x2a,0x00,0x0d,0x22,0x22,0x22,0x28,0x60,0x00,0xd2,
    0x20,0x00,0x63,0x11,0x11,0x22,0x2a,0x00,0x0f,0x22,0x22,0x22,0x18,0x70,0x00,0xd2,
    0x20,0x00,0x0c,0x11,0x11,0x22,0x2a,0x00,0x0b,0x32,0x22,0x22,0x1a,0x00,0x04,0xa2,
    0x26,0x00,0x06,0xe5,0x11,0x23,0x3a,0x40,0x00,0xd3,0x22,0x22,0xe6,0x00,0x06,0x82,
    0x2a,0x40,0x00,0x6a,0x88,0xef,0x93,0xb0,0x00,0x0f,0xe8,0x89,0x60,0x00,0x4a,0x11,
    0x25,0x60,0x00,0x00,0x47,0x00,0x78,0xc7,0x00,0x00,0x07,0x40,0x00,0x00,0xb5,0x11,
    0x22,0x86,0x00,0x00,0x00,0x00,0x0d,0x2a,0x70,0x00,0x00,0x00,0x00,0x06,0x35,0x11,
    0x22,0x18,0xb4,0x00,0x00,0x00,0x06,0x82,0x86,0x00,0x00,0x00,0x04,0xb3,0x55,0x11,
    0x11,0x11,0x1a,0xb4,0x00,0x46,0xd8,0x11,0x15,0x97,0x44,0x04,0xba,0x11,0x11,0x11,
    0x11,0x11,0x11,0x3c,0x99,0xae,0x22,0x11,0x22,0x2e,0x99,0xac,0x32,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,0x12,0x52,0x22,0x11,0x11,0x22,0x12,0x52,0x12,0x11,0x11,0x11,
    0x11,0x11,0x11,0x22,0x22,0x22,0x22,0x11,0x11,0x22,0x22,0x22,0x22,0x11,0x11,0x11,

};

const lv_image_dsc_t ui_img_menu_element = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_I4,
  .header.flags = 0,
  .header.w = 32,
  .header.h = 32,
  .header.stride = 16,
  .data_size = sizeof(ui_img_menu_element_map),
  .data = ui_img_menu_element_map,
};
