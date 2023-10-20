/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_LARGE_CONST
#define LV_ATTRIBUTE_LARGE_CONST
#endif

#ifndef LV_ATTRIBUTE_IMG__COMPASS_POINTER_14X12
#define LV_ATTRIBUTE_IMG__COMPASS_POINTER_14X12
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__COMPASS_POINTER_14X12 uint8_t _compass_pointer_14x12_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x48, 0x15, 0xe4, 0xc8, 0x63, 0xe4, 0xc8, 0x63, 0x20, 0x48, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x03, 0xe4, 0xc8, 0x42, 0xe4, 0xd0, 0xd9, 0xe4, 0xd0, 0xd9, 0xe4, 0xc8, 0x42, 0x00, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x48, 0x20, 0xe4, 0xc8, 0x8f, 0xe4, 0xd0, 0xf9, 0xe4, 0xd0, 0xf9, 0xe4, 0xc8, 0x8f, 0x20, 0x48, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x07, 0xe4, 0xc8, 0x51, 0xe4, 0xd0, 0xee, 0xe4, 0xd0, 0xfe, 0xe4, 0xd0, 0xfe, 0xe4, 0xd0, 0xee, 0xe4, 0xc8, 0x51, 0x00, 0x30, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x48, 0x2d, 0xe4, 0xc8, 0xb0, 0xe4, 0xd0, 0xfb, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xfb, 0xe4, 0xc8, 0xb0, 0x20, 0x48, 0x2d, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x48, 0x0f, 0xe4, 0xc8, 0x64, 0xe4, 0xd0, 0xf6, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xf6, 0xe4, 0xc8, 0x64, 0x20, 0x48, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x30, 0x02, 0xe4, 0xc8, 0x3b, 0xe4, 0xd0, 0xcf, 0xe4, 0xd0, 0xfd, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xfd, 0xe4, 0xd0, 0xcf, 0xe4, 0xc8, 0x3b, 0x00, 0x30, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x48, 0x1a, 0xe4, 0xc8, 0x80, 0xe4, 0xd0, 0xf8, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xf8, 0xe4, 0xc8, 0x80, 0x20, 0x48, 0x1a, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x04, 0xe4, 0xc8, 0x49, 0xe4, 0xd0, 0xe6, 0xe4, 0xd0, 0xfe, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xfe, 0xe4, 0xd0, 0xe6, 0xe4, 0xc8, 0x49, 0x00, 0x30, 0x04, 
  0x20, 0x48, 0x26, 0xe4, 0xc8, 0x9f, 0xe4, 0xd0, 0xfa, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xfa, 0xe4, 0xc8, 0x9f, 0x20, 0x48, 0x26, 
  0xe4, 0xc8, 0x5b, 0xe4, 0xd0, 0xf3, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xf3, 0xe4, 0xc8, 0x5b, 
  0xe4, 0xd0, 0xc1, 0xe4, 0xd0, 0xfc, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xff, 0xe4, 0xd0, 0xfc, 0xe4, 0xd0, 0xc1, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x20, 0x15, 0xc8, 0xe4, 0x63, 0xc8, 0xe4, 0x63, 0x48, 0x20, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x03, 0xc8, 0xe4, 0x42, 0xd0, 0xe4, 0xd9, 0xd0, 0xe4, 0xd9, 0xc8, 0xe4, 0x42, 0x30, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x20, 0x20, 0xc8, 0xe4, 0x8f, 0xd0, 0xe4, 0xf9, 0xd0, 0xe4, 0xf9, 0xc8, 0xe4, 0x8f, 0x48, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x07, 0xc8, 0xe4, 0x51, 0xd0, 0xe4, 0xee, 0xd0, 0xe4, 0xfe, 0xd0, 0xe4, 0xfe, 0xd0, 0xe4, 0xee, 0xc8, 0xe4, 0x51, 0x30, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x48, 0x20, 0x2d, 0xc8, 0xe4, 0xb0, 0xd0, 0xe4, 0xfb, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xfb, 0xc8, 0xe4, 0xb0, 0x48, 0x20, 0x2d, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x20, 0x0f, 0xc8, 0xe4, 0x64, 0xd0, 0xe4, 0xf6, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xf6, 0xc8, 0xe4, 0x64, 0x48, 0x20, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x00, 0x02, 0xc8, 0xe4, 0x3b, 0xd0, 0xe4, 0xcf, 0xd0, 0xe4, 0xfd, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xfd, 0xd0, 0xe4, 0xcf, 0xc8, 0xe4, 0x3b, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x48, 0x20, 0x1a, 0xc8, 0xe4, 0x80, 0xd0, 0xe4, 0xf8, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xf8, 0xc8, 0xe4, 0x80, 0x48, 0x20, 0x1a, 0x00, 0x00, 0x00, 
  0x30, 0x00, 0x04, 0xc8, 0xe4, 0x49, 0xd0, 0xe4, 0xe6, 0xd0, 0xe4, 0xfe, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xfe, 0xd0, 0xe4, 0xe6, 0xc8, 0xe4, 0x49, 0x30, 0x00, 0x04, 
  0x48, 0x20, 0x26, 0xc8, 0xe4, 0x9f, 0xd0, 0xe4, 0xfa, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xfa, 0xc8, 0xe4, 0x9f, 0x48, 0x20, 0x26, 
  0xc8, 0xe4, 0x5b, 0xd0, 0xe4, 0xf3, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xf3, 0xc8, 0xe4, 0x5b, 
  0xd0, 0xe4, 0xc1, 0xd0, 0xe4, 0xfc, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xff, 0xd0, 0xe4, 0xfc, 0xd0, 0xe4, 0xc1, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _compass_pointer_14x12 = {
  .header.always_zero = 0,
  .header.w = 14,
  .header.h = 12,
  .data_size = 168 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _compass_pointer_14x12_map,
};
