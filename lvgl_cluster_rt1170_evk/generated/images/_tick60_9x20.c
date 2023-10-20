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

#ifndef LV_ATTRIBUTE_IMG__TICK60_9X20
#define LV_ATTRIBUTE_IMG__TICK60_9X20
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__TICK60_9X20 uint8_t _tick60_9x20_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0xe4, 0xe8, 0x29, 0xe4, 0xe8, 0x9b, 0xe4, 0xe8, 0xad, 0xe4, 0xe8, 0xbb, 0xe4, 0xe8, 0xc7, 0xe4, 0xe8, 0xd2, 0xe4, 0xe8, 0xdf, 0xe4, 0xe8, 0xe0, 0xe4, 0xe8, 0x88, 
  0x29, 0xea, 0x42, 0x05, 0xe9, 0xf4, 0xe4, 0xe8, 0xfb, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xf9, 0xe4, 0xe8, 0x97, 
  0x9e, 0xff, 0x3f, 0x29, 0xea, 0xec, 0xe4, 0xe8, 0xfe, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfa, 0xe4, 0xe8, 0x9b, 
  0xdf, 0xff, 0x38, 0x49, 0xea, 0xd9, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfb, 0xe4, 0xe8, 0xa6, 
  0xdf, 0xff, 0x32, 0x49, 0xea, 0xc7, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfb, 0xe4, 0xe8, 0xa7, 
  0xdf, 0xff, 0x2c, 0x49, 0xea, 0xb6, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfb, 0xe4, 0xe8, 0xb0, 
  0xdf, 0xff, 0x26, 0x49, 0xea, 0xa4, 0xe4, 0xe8, 0xfb, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfb, 0xe4, 0xe8, 0xb5, 
  0xdf, 0xff, 0x20, 0x49, 0xea, 0x92, 0xe4, 0xe8, 0xfa, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xba, 
  0xdf, 0xff, 0x1a, 0x49, 0xea, 0x82, 0xe4, 0xe8, 0xfa, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xc3, 
  0xdf, 0xff, 0x15, 0x49, 0xea, 0x73, 0xe4, 0xe8, 0xfa, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xc4, 
  0xdf, 0xff, 0x0e, 0x49, 0xea, 0x64, 0xe4, 0xe8, 0xf9, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xd0, 
  0xdf, 0xff, 0x08, 0x49, 0xea, 0x57, 0xe4, 0xe8, 0xf9, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xd2, 
  0xdf, 0xff, 0x04, 0x49, 0xea, 0x4d, 0xe4, 0xe8, 0xf9, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xda, 
  0xdf, 0xff, 0x01, 0x49, 0xea, 0x47, 0xe4, 0xe8, 0xf9, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xe1, 
  0xdf, 0xff, 0x00, 0xec, 0xea, 0x43, 0x05, 0xe9, 0xf7, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfe, 0xe4, 0xe8, 0xe4, 
  0xff, 0xff, 0x00, 0x9e, 0xff, 0x3c, 0x29, 0xea, 0xe6, 0xe4, 0xe8, 0xfe, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfe, 0xe4, 0xe8, 0xef, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x37, 0x49, 0xea, 0xd4, 0xe4, 0xe8, 0xfd, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfe, 0xe4, 0xe8, 0xf1, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x31, 0x49, 0xea, 0xc3, 0xe4, 0xe8, 0xfc, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xff, 0xe4, 0xe8, 0xfe, 0xe4, 0xe8, 0xf9, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x29, 0x49, 0xea, 0xac, 0xe4, 0xe8, 0xf5, 0xe4, 0xe8, 0xf9, 0x05, 0xe9, 0xf8, 0x29, 0xea, 0xf3, 0x49, 0xea, 0xea, 0x49, 0xea, 0xdf, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x07, 0x49, 0xea, 0x35, 0xe4, 0xe8, 0x4b, 0xe4, 0xe8, 0x47, 0x29, 0xea, 0x44, 0x9e, 0xff, 0x41, 0xdf, 0xff, 0x3e, 0xdf, 0xff, 0x3a, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0xe8, 0xe4, 0x29, 0xe8, 0xe4, 0x9b, 0xe8, 0xe4, 0xad, 0xe8, 0xe4, 0xbb, 0xe8, 0xe4, 0xc7, 0xe8, 0xe4, 0xd2, 0xe8, 0xe4, 0xdf, 0xe8, 0xe4, 0xe0, 0xe8, 0xe4, 0x88, 
  0xea, 0x29, 0x42, 0xe9, 0x05, 0xf4, 0xe8, 0xe4, 0xfb, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xf9, 0xe8, 0xe4, 0x97, 
  0xff, 0x9e, 0x3f, 0xea, 0x29, 0xec, 0xe8, 0xe4, 0xfe, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfa, 0xe8, 0xe4, 0x9b, 
  0xff, 0xdf, 0x38, 0xea, 0x49, 0xd9, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfb, 0xe8, 0xe4, 0xa6, 
  0xff, 0xdf, 0x32, 0xea, 0x49, 0xc7, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfb, 0xe8, 0xe4, 0xa7, 
  0xff, 0xdf, 0x2c, 0xea, 0x49, 0xb6, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfb, 0xe8, 0xe4, 0xb0, 
  0xff, 0xdf, 0x26, 0xea, 0x49, 0xa4, 0xe8, 0xe4, 0xfb, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfb, 0xe8, 0xe4, 0xb5, 
  0xff, 0xdf, 0x20, 0xea, 0x49, 0x92, 0xe8, 0xe4, 0xfa, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xba, 
  0xff, 0xdf, 0x1a, 0xea, 0x49, 0x82, 0xe8, 0xe4, 0xfa, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xc3, 
  0xff, 0xdf, 0x15, 0xea, 0x49, 0x73, 0xe8, 0xe4, 0xfa, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xc4, 
  0xff, 0xdf, 0x0e, 0xea, 0x49, 0x64, 0xe8, 0xe4, 0xf9, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xd0, 
  0xff, 0xdf, 0x08, 0xea, 0x49, 0x57, 0xe8, 0xe4, 0xf9, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xd2, 
  0xff, 0xdf, 0x04, 0xea, 0x49, 0x4d, 0xe8, 0xe4, 0xf9, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xda, 
  0xff, 0xdf, 0x01, 0xea, 0x49, 0x47, 0xe8, 0xe4, 0xf9, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xe1, 
  0xff, 0xdf, 0x00, 0xea, 0xec, 0x43, 0xe9, 0x05, 0xf7, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfe, 0xe8, 0xe4, 0xe4, 
  0xff, 0xff, 0x00, 0xff, 0x9e, 0x3c, 0xea, 0x29, 0xe6, 0xe8, 0xe4, 0xfe, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfe, 0xe8, 0xe4, 0xef, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x37, 0xea, 0x49, 0xd4, 0xe8, 0xe4, 0xfd, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfe, 0xe8, 0xe4, 0xf1, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x31, 0xea, 0x49, 0xc3, 0xe8, 0xe4, 0xfc, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xff, 0xe8, 0xe4, 0xfe, 0xe8, 0xe4, 0xf9, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x29, 0xea, 0x49, 0xac, 0xe8, 0xe4, 0xf5, 0xe8, 0xe4, 0xf9, 0xe9, 0x05, 0xf8, 0xea, 0x29, 0xf3, 0xea, 0x49, 0xea, 0xea, 0x49, 0xdf, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x07, 0xea, 0x49, 0x35, 0xe8, 0xe4, 0x4b, 0xe8, 0xe4, 0x47, 0xea, 0x29, 0x44, 0xff, 0x9e, 0x41, 0xff, 0xdf, 0x3e, 0xff, 0xdf, 0x3a, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _tick60_9x20 = {
  .header.always_zero = 0,
  .header.w = 9,
  .header.h = 20,
  .data_size = 180 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _tick60_9x20_map,
};
