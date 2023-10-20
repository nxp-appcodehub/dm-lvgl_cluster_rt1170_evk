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

#ifndef LV_ATTRIBUTE_IMG__TICK1_9X20
#define LV_ATTRIBUTE_IMG__TICK1_9X20
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__TICK1_9X20 uint8_t _tick1_9x20_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0xdf, 0xff, 0x0c, 0x9d, 0x45, 0x48, 0x7d, 0x05, 0x46, 0x7d, 0x05, 0x46, 0x7d, 0x05, 0x46, 0x7d, 0x05, 0x46, 0x7d, 0x05, 0x46, 0x9d, 0x45, 0x32, 0xdf, 0xff, 0x06, 
  0xdf, 0xff, 0x41, 0x9d, 0x45, 0xf3, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xf5, 0x9d, 0x45, 0xad, 0xdf, 0xff, 0x2a, 
  0xdf, 0xf7, 0x43, 0x9d, 0x45, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfc, 0x9d, 0x45, 0xb9, 0xdf, 0xff, 0x2e, 
  0x9d, 0x45, 0x45, 0x7d, 0x0d, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfc, 0x9d, 0x45, 0xbf, 0xdf, 0xff, 0x2f, 
  0x7d, 0x05, 0x46, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfc, 0x9d, 0x45, 0xc3, 0xdf, 0xff, 0x31, 
  0x7d, 0x05, 0x47, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x9d, 0x45, 0xcc, 0xdf, 0xff, 0x34, 
  0x7d, 0x05, 0x4a, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x9d, 0x45, 0xce, 0xdf, 0xff, 0x35, 
  0x7d, 0x05, 0x4b, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x9d, 0x45, 0xd9, 0xdf, 0xff, 0x38, 
  0x7d, 0x05, 0x51, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfd, 0x9d, 0x45, 0xdc, 0xdf, 0xff, 0x39, 
  0x7d, 0x05, 0x52, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfe, 0x9d, 0x45, 0xe2, 0xdf, 0xff, 0x3b, 
  0x7d, 0x05, 0x56, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfe, 0x9d, 0x45, 0xea, 0xdf, 0xff, 0x3e, 
  0x7d, 0x05, 0x5a, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xfe, 0x9d, 0x45, 0xec, 0xdf, 0xff, 0x3e, 
  0x7d, 0x05, 0x5c, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x9d, 0x45, 0xf8, 0xdf, 0xff, 0x42, 
  0x7d, 0x05, 0x64, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x9d, 0x45, 0xf9, 0xdf, 0xf7, 0x43, 
  0x7d, 0x05, 0x65, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x0d, 0xf9, 0x9d, 0x45, 0x44, 
  0x7d, 0x05, 0x6e, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0x46, 
  0x7d, 0x05, 0x71, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0x47, 
  0x7d, 0x05, 0x75, 0x7d, 0x05, 0xfa, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xff, 0x7d, 0x05, 0xf9, 0x7d, 0x05, 0x4a, 
  0x7d, 0x05, 0x7b, 0x7d, 0x05, 0xf6, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xfc, 0x7d, 0x05, 0xf5, 0x7d, 0x05, 0x49, 
  0x7d, 0x05, 0x59, 0x7d, 0x05, 0xb5, 0x7d, 0x05, 0xc3, 0x7d, 0x05, 0xc3, 0x7d, 0x05, 0xc3, 0x7d, 0x05, 0xc3, 0x7d, 0x05, 0xc3, 0x7d, 0x05, 0xb1, 0x7d, 0x05, 0x38, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0xff, 0xdf, 0x0c, 0x45, 0x9d, 0x48, 0x05, 0x7d, 0x46, 0x05, 0x7d, 0x46, 0x05, 0x7d, 0x46, 0x05, 0x7d, 0x46, 0x05, 0x7d, 0x46, 0x45, 0x9d, 0x32, 0xff, 0xdf, 0x06, 
  0xff, 0xdf, 0x41, 0x45, 0x9d, 0xf3, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xf5, 0x45, 0x9d, 0xad, 0xff, 0xdf, 0x2a, 
  0xf7, 0xdf, 0x43, 0x45, 0x9d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfc, 0x45, 0x9d, 0xb9, 0xff, 0xdf, 0x2e, 
  0x45, 0x9d, 0x45, 0x0d, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfc, 0x45, 0x9d, 0xbf, 0xff, 0xdf, 0x2f, 
  0x05, 0x7d, 0x46, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfc, 0x45, 0x9d, 0xc3, 0xff, 0xdf, 0x31, 
  0x05, 0x7d, 0x47, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x45, 0x9d, 0xcc, 0xff, 0xdf, 0x34, 
  0x05, 0x7d, 0x4a, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x45, 0x9d, 0xce, 0xff, 0xdf, 0x35, 
  0x05, 0x7d, 0x4b, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x45, 0x9d, 0xd9, 0xff, 0xdf, 0x38, 
  0x05, 0x7d, 0x51, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfd, 0x45, 0x9d, 0xdc, 0xff, 0xdf, 0x39, 
  0x05, 0x7d, 0x52, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfe, 0x45, 0x9d, 0xe2, 0xff, 0xdf, 0x3b, 
  0x05, 0x7d, 0x56, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfe, 0x45, 0x9d, 0xea, 0xff, 0xdf, 0x3e, 
  0x05, 0x7d, 0x5a, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xfe, 0x45, 0x9d, 0xec, 0xff, 0xdf, 0x3e, 
  0x05, 0x7d, 0x5c, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x45, 0x9d, 0xf8, 0xff, 0xdf, 0x42, 
  0x05, 0x7d, 0x64, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x45, 0x9d, 0xf9, 0xf7, 0xdf, 0x43, 
  0x05, 0x7d, 0x65, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x0d, 0x7d, 0xf9, 0x45, 0x9d, 0x44, 
  0x05, 0x7d, 0x6e, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0x46, 
  0x05, 0x7d, 0x71, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0x47, 
  0x05, 0x7d, 0x75, 0x05, 0x7d, 0xfa, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xff, 0x05, 0x7d, 0xf9, 0x05, 0x7d, 0x4a, 
  0x05, 0x7d, 0x7b, 0x05, 0x7d, 0xf6, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xfc, 0x05, 0x7d, 0xf5, 0x05, 0x7d, 0x49, 
  0x05, 0x7d, 0x59, 0x05, 0x7d, 0xb5, 0x05, 0x7d, 0xc3, 0x05, 0x7d, 0xc3, 0x05, 0x7d, 0xc3, 0x05, 0x7d, 0xc3, 0x05, 0x7d, 0xc3, 0x05, 0x7d, 0xb1, 0x05, 0x7d, 0x38, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _tick1_9x20 = {
  .header.always_zero = 0,
  .header.w = 9,
  .header.h = 20,
  .data_size = 180 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _tick1_9x20_map,
};
