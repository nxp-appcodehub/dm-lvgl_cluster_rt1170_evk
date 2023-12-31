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

#ifndef LV_ATTRIBUTE_IMG__TICK2_9X20
#define LV_ATTRIBUTE_IMG__TICK2_9X20
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__TICK2_9X20 uint8_t _tick2_9x20_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x11, 0x9d, 0x45, 0x5a, 0x7d, 0x05, 0x79, 0x7d, 0x05, 0x70, 0x7d, 0x05, 0x65, 0x7d, 0x05, 0x5c, 0x7d, 0x05, 0x56, 0x7d, 0x05, 0x52, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x2c, 0x9d, 0x45, 0xb3, 0x7d, 0x05, 0xf6, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf8, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x32, 0x9d, 0x45, 0xc7, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xf7, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x38, 0x9d, 0x45, 0xd9, 0x7d, 0x05, 0xfd, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfe, 0x7d, 0x05, 0xf0, 
  0xff, 0xff, 0x00, 0xdf, 0xf7, 0x3f, 0x9d, 0x45, 0xec, 0x7d, 0x05, 0xfe, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfe, 0x7d, 0x05, 0xed, 
  0xdf, 0xff, 0x00, 0xbd, 0x5d, 0x44, 0x7d, 0x0d, 0xf8, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x7d, 0x05, 0xe2, 
  0xdf, 0xff, 0x02, 0x9d, 0x45, 0x48, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x7d, 0x05, 0xe0, 
  0xdf, 0xff, 0x05, 0x9d, 0x45, 0x50, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x7d, 0x05, 0xd6, 
  0xdf, 0xff, 0x0a, 0x9d, 0x45, 0x5b, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x7d, 0x05, 0xd2, 
  0xdf, 0xff, 0x10, 0x9d, 0x45, 0x68, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xcc, 
  0xdf, 0xff, 0x16, 0x9d, 0x45, 0x76, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xc4, 
  0xdf, 0xff, 0x1c, 0x9d, 0x45, 0x87, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xc3, 
  0xdf, 0xff, 0x22, 0x9d, 0x45, 0x98, 0x7d, 0x05, 0xfb, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfb, 0x7d, 0x05, 0xb6, 
  0xdf, 0xff, 0x28, 0x9d, 0x45, 0xa9, 0x7d, 0x05, 0xfb, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfb, 0x7d, 0x05, 0xb4, 
  0xdf, 0xff, 0x2e, 0x9d, 0x45, 0xba, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfb, 0x7d, 0x05, 0xad, 
  0xdf, 0xff, 0x34, 0x9d, 0x45, 0xcc, 0x7d, 0x05, 0xfd, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfb, 0x7d, 0x05, 0xa7, 
  0xdf, 0xff, 0x3b, 0x9d, 0x45, 0xe0, 0x7d, 0x05, 0xfe, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfb, 0x7d, 0x05, 0xa3, 
  0xdf, 0xf7, 0x40, 0x9d, 0x45, 0xf1, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0x99, 
  0x9d, 0x45, 0x43, 0x7d, 0x0d, 0xf3, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0xf6, 0x7d, 0x05, 0x96, 
  0x7d, 0x05, 0x17, 0x7d, 0x05, 0x61, 0x7d, 0x05, 0x6f, 0x7d, 0x05, 0x7c, 0x7d, 0x05, 0x86, 0x7d, 0x05, 0x90, 0x7d, 0x05, 0x99, 0x7d, 0x05, 0xa2, 0x7d, 0x05, 0x5e, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x11, 0x45, 0x9d, 0x5a, 0x05, 0x7d, 0x79, 0x05, 0x7d, 0x70, 0x05, 0x7d, 0x65, 0x05, 0x7d, 0x5c, 0x05, 0x7d, 0x56, 0x05, 0x7d, 0x52, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x2c, 0x45, 0x9d, 0xb3, 0x05, 0x7d, 0xf6, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf8, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x32, 0x45, 0x9d, 0xc7, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xf7, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x38, 0x45, 0x9d, 0xd9, 0x05, 0x7d, 0xfd, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfe, 0x05, 0x7d, 0xf0, 
  0xff, 0xff, 0x00, 0xf7, 0xdf, 0x3f, 0x45, 0x9d, 0xec, 0x05, 0x7d, 0xfe, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfe, 0x05, 0x7d, 0xed, 
  0xff, 0xdf, 0x00, 0x5d, 0xbd, 0x44, 0x0d, 0x7d, 0xf8, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x05, 0x7d, 0xe2, 
  0xff, 0xdf, 0x02, 0x45, 0x9d, 0x48, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x05, 0x7d, 0xe0, 
  0xff, 0xdf, 0x05, 0x45, 0x9d, 0x50, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x05, 0x7d, 0xd6, 
  0xff, 0xdf, 0x0a, 0x45, 0x9d, 0x5b, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x05, 0x7d, 0xd2, 
  0xff, 0xdf, 0x10, 0x45, 0x9d, 0x68, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xcc, 
  0xff, 0xdf, 0x16, 0x45, 0x9d, 0x76, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xc4, 
  0xff, 0xdf, 0x1c, 0x45, 0x9d, 0x87, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xc3, 
  0xff, 0xdf, 0x22, 0x45, 0x9d, 0x98, 0x05, 0x7d, 0xfb, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfb, 0x05, 0x7d, 0xb6, 
  0xff, 0xdf, 0x28, 0x45, 0x9d, 0xa9, 0x05, 0x7d, 0xfb, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfb, 0x05, 0x7d, 0xb4, 
  0xff, 0xdf, 0x2e, 0x45, 0x9d, 0xba, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfb, 0x05, 0x7d, 0xad, 
  0xff, 0xdf, 0x34, 0x45, 0x9d, 0xcc, 0x05, 0x7d, 0xfd, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfb, 0x05, 0x7d, 0xa7, 
  0xff, 0xdf, 0x3b, 0x45, 0x9d, 0xe0, 0x05, 0x7d, 0xfe, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfb, 0x05, 0x7d, 0xa3, 
  0xf7, 0xdf, 0x40, 0x45, 0x9d, 0xf1, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0x99, 
  0x45, 0x9d, 0x43, 0x0d, 0x7d, 0xf3, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0xf6, 0x05, 0x7d, 0x96, 
  0x05, 0x7d, 0x17, 0x05, 0x7d, 0x61, 0x05, 0x7d, 0x6f, 0x05, 0x7d, 0x7c, 0x05, 0x7d, 0x86, 0x05, 0x7d, 0x90, 0x05, 0x7d, 0x99, 0x05, 0x7d, 0xa2, 0x05, 0x7d, 0x5e, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _tick2_9x20 = {
  .header.always_zero = 0,
  .header.w = 9,
  .header.h = 20,
  .data_size = 180 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _tick2_9x20_map,
};
