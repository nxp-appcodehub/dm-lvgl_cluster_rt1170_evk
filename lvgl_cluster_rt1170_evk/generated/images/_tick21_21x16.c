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

#ifndef LV_ATTRIBUTE_IMG__TICK21_21X16
#define LV_ATTRIBUTE_IMG__TICK21_21X16
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__TICK21_21X16 uint8_t _tick21_21x16_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x0c, 0xbf, 0xf7, 0x34, 0xd9, 0x54, 0x64, 0xd9, 0x54, 0x6b, 0xbf, 0xf7, 0x18, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x08, 0xbf, 0xf7, 0x2d, 0x19, 0x65, 0x5f, 0xd9, 0x54, 0xc3, 0x98, 0x34, 0xf6, 0x98, 0x34, 0xe6, 0x19, 0x65, 0x49, 0xdf, 0xff, 0x04, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x05, 0xbf, 0xf7, 0x26, 0x19, 0x65, 0x54, 0xd9, 0x54, 0xb1, 0x98, 0x34, 0xf6, 0x98, 0x34, 0xfc, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfa, 0xd9, 0x54, 0x9d, 0xbf, 0xf7, 0x25, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x03, 0xbf, 0xf7, 0x20, 0x19, 0x65, 0x4c, 0xd9, 0x54, 0xa1, 0x98, 0x34, 0xf2, 0x98, 0x34, 0xfb, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xf2, 0x19, 0x65, 0x58, 0xdf, 0xff, 0x09, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x02, 0xbf, 0xf7, 0x1a, 0x19, 0x65, 0x45, 0xd9, 0x54, 0x8f, 0x98, 0x34, 0xeb, 0x98, 0x34, 0xfa, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfc, 0xd9, 0x54, 0xbd, 0xbf, 0xf7, 0x33, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x01, 0xbf, 0xf7, 0x14, 0x19, 0x65, 0x3e, 0xd9, 0x54, 0x7f, 0x98, 0x34, 0xe2, 0x98, 0x34, 0xf9, 0x98, 0x34, 0xfe, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xf3, 0xd9, 0x54, 0x66, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x01, 0xbf, 0xf7, 0x0e, 0x19, 0x65, 0x37, 0xd9, 0x54, 0x70, 0x98, 0x34, 0xd6, 0x98, 0x34, 0xf8, 0x98, 0x34, 0xfe, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfd, 0x98, 0x34, 0xf7, 0xd9, 0x54, 0xb9, 0xd9, 0x54, 0x3d, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x09, 0xbf, 0xf7, 0x2f, 0x19, 0x65, 0x63, 0x98, 0x34, 0xc8, 0x98, 0x34, 0xf7, 0x98, 0x34, 0xfd, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xf9, 0x98, 0x34, 0xde, 0x19, 0x65, 0x71, 0xbf, 0xf7, 0x32, 0xdf, 0xff, 0x08, 
  0xbf, 0xf7, 0x0f, 0x19, 0x65, 0x56, 0xd9, 0x54, 0xb7, 0x98, 0x34, 0xf6, 0x98, 0x34, 0xfc, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfc, 0x98, 0x34, 0xf2, 0xd9, 0x54, 0x9a, 0x19, 0x65, 0x45, 0xbf, 0xf7, 0x14, 0xff, 0xff, 0x01, 0xff, 0xff, 0x00, 
  0x19, 0x65, 0x42, 0x98, 0x34, 0xea, 0x98, 0x34, 0xfb, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfe, 0x98, 0x34, 0xf7, 0x98, 0x34, 0xc6, 0x19, 0x65, 0x5b, 0xbf, 0xf7, 0x25, 0xdf, 0xff, 0x04, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xbf, 0xf7, 0x25, 0xd9, 0x54, 0x9e, 0x98, 0x34, 0xfa, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfa, 0x98, 0x34, 0xe5, 0xd9, 0x54, 0x7c, 0x19, 0x65, 0x37, 0xbf, 0xf7, 0x0b, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xdf, 0xff, 0x04, 0x19, 0x65, 0x49, 0x98, 0x34, 0xe7, 0x98, 0x34, 0xfe, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfd, 0x98, 0x34, 0xf5, 0xd9, 0x54, 0xa6, 0x19, 0x65, 0x4a, 0xbf, 0xf7, 0x19, 0xdf, 0xff, 0x01, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xbf, 0xf7, 0x1b, 0xd9, 0x54, 0x83, 0x98, 0x34, 0xf8, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfe, 0x98, 0x34, 0xf8, 0x98, 0x34, 0xd0, 0x19, 0x65, 0x62, 0xbf, 0xf7, 0x2a, 0xdf, 0xff, 0x05, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x02, 0x19, 0x65, 0x3d, 0x98, 0x34, 0xd2, 0x98, 0x34, 0xfd, 0x98, 0x34, 0xff, 0x98, 0x34, 0xfb, 0x98, 0x34, 0xec, 0xd9, 0x54, 0x87, 0x19, 0x65, 0x3d, 0xbf, 0xf7, 0x0e, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0xf7, 0x10, 0x19, 0x65, 0x67, 0x98, 0x34, 0xf5, 0x98, 0x34, 0xf6, 0xd9, 0x54, 0xb3, 0x19, 0x65, 0x50, 0xbf, 0xf7, 0x1d, 0xdf, 0xff, 0x02, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x01, 0xbf, 0xf7, 0x28, 0xd9, 0x54, 0x94, 0xd9, 0x54, 0x65, 0xbf, 0xf7, 0x2f, 0xdf, 0xff, 0x07, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x0c, 0xf7, 0xbf, 0x34, 0x54, 0xd9, 0x64, 0x54, 0xd9, 0x6b, 0xf7, 0xbf, 0x18, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x08, 0xf7, 0xbf, 0x2d, 0x65, 0x19, 0x5f, 0x54, 0xd9, 0xc3, 0x34, 0x98, 0xf6, 0x34, 0x98, 0xe6, 0x65, 0x19, 0x49, 0xff, 0xdf, 0x04, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x05, 0xf7, 0xbf, 0x26, 0x65, 0x19, 0x54, 0x54, 0xd9, 0xb1, 0x34, 0x98, 0xf6, 0x34, 0x98, 0xfc, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfa, 0x54, 0xd9, 0x9d, 0xf7, 0xbf, 0x25, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x03, 0xf7, 0xbf, 0x20, 0x65, 0x19, 0x4c, 0x54, 0xd9, 0xa1, 0x34, 0x98, 0xf2, 0x34, 0x98, 0xfb, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xf2, 0x65, 0x19, 0x58, 0xff, 0xdf, 0x09, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x02, 0xf7, 0xbf, 0x1a, 0x65, 0x19, 0x45, 0x54, 0xd9, 0x8f, 0x34, 0x98, 0xeb, 0x34, 0x98, 0xfa, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfc, 0x54, 0xd9, 0xbd, 0xf7, 0xbf, 0x33, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x01, 0xf7, 0xbf, 0x14, 0x65, 0x19, 0x3e, 0x54, 0xd9, 0x7f, 0x34, 0x98, 0xe2, 0x34, 0x98, 0xf9, 0x34, 0x98, 0xfe, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xf3, 0x54, 0xd9, 0x66, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x01, 0xf7, 0xbf, 0x0e, 0x65, 0x19, 0x37, 0x54, 0xd9, 0x70, 0x34, 0x98, 0xd6, 0x34, 0x98, 0xf8, 0x34, 0x98, 0xfe, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfd, 0x34, 0x98, 0xf7, 0x54, 0xd9, 0xb9, 0x54, 0xd9, 0x3d, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x09, 0xf7, 0xbf, 0x2f, 0x65, 0x19, 0x63, 0x34, 0x98, 0xc8, 0x34, 0x98, 0xf7, 0x34, 0x98, 0xfd, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xf9, 0x34, 0x98, 0xde, 0x65, 0x19, 0x71, 0xf7, 0xbf, 0x32, 0xff, 0xdf, 0x08, 
  0xf7, 0xbf, 0x0f, 0x65, 0x19, 0x56, 0x54, 0xd9, 0xb7, 0x34, 0x98, 0xf6, 0x34, 0x98, 0xfc, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfc, 0x34, 0x98, 0xf2, 0x54, 0xd9, 0x9a, 0x65, 0x19, 0x45, 0xf7, 0xbf, 0x14, 0xff, 0xff, 0x01, 0xff, 0xff, 0x00, 
  0x65, 0x19, 0x42, 0x34, 0x98, 0xea, 0x34, 0x98, 0xfb, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfe, 0x34, 0x98, 0xf7, 0x34, 0x98, 0xc6, 0x65, 0x19, 0x5b, 0xf7, 0xbf, 0x25, 0xff, 0xdf, 0x04, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xf7, 0xbf, 0x25, 0x54, 0xd9, 0x9e, 0x34, 0x98, 0xfa, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfa, 0x34, 0x98, 0xe5, 0x54, 0xd9, 0x7c, 0x65, 0x19, 0x37, 0xf7, 0xbf, 0x0b, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xdf, 0x04, 0x65, 0x19, 0x49, 0x34, 0x98, 0xe7, 0x34, 0x98, 0xfe, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfd, 0x34, 0x98, 0xf5, 0x54, 0xd9, 0xa6, 0x65, 0x19, 0x4a, 0xf7, 0xbf, 0x19, 0xff, 0xdf, 0x01, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xf7, 0xbf, 0x1b, 0x54, 0xd9, 0x83, 0x34, 0x98, 0xf8, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfe, 0x34, 0x98, 0xf8, 0x34, 0x98, 0xd0, 0x65, 0x19, 0x62, 0xf7, 0xbf, 0x2a, 0xff, 0xdf, 0x05, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x02, 0x65, 0x19, 0x3d, 0x34, 0x98, 0xd2, 0x34, 0x98, 0xfd, 0x34, 0x98, 0xff, 0x34, 0x98, 0xfb, 0x34, 0x98, 0xec, 0x54, 0xd9, 0x87, 0x65, 0x19, 0x3d, 0xf7, 0xbf, 0x0e, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xf7, 0xbf, 0x10, 0x65, 0x19, 0x67, 0x34, 0x98, 0xf5, 0x34, 0x98, 0xf6, 0x54, 0xd9, 0xb3, 0x65, 0x19, 0x50, 0xf7, 0xbf, 0x1d, 0xff, 0xdf, 0x02, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x01, 0xf7, 0xbf, 0x28, 0x54, 0xd9, 0x94, 0x54, 0xd9, 0x65, 0xf7, 0xbf, 0x2f, 0xff, 0xdf, 0x07, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _tick21_21x16 = {
  .header.always_zero = 0,
  .header.w = 21,
  .header.h = 16,
  .data_size = 336 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _tick21_21x16_map,
};