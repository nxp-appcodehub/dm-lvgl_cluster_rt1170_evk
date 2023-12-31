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

#ifndef LV_ATTRIBUTE_IMG__TICK9_16X21
#define LV_ATTRIBUTE_IMG__TICK9_16X21
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__TICK9_16X21 uint8_t _tick9_16x21_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x07, 0x5c, 0x45, 0x3f, 0x3c, 0x15, 0x86, 0x5c, 0x45, 0x49, 0xbf, 0xf7, 0x25, 0xdf, 0xff, 0x06, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0xf7, 0x28, 0x5c, 0x45, 0xa5, 0x3c, 0x15, 0xf6, 0x3c, 0x15, 0xed, 0x5c, 0x45, 0x9d, 0x9c, 0x5d, 0x51, 0xbf, 0xf7, 0x2d, 0xdf, 0xff, 0x0d, 0xdf, 0xff, 0x01, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x05, 0x9c, 0x5d, 0x4e, 0x3c, 0x15, 0xf2, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xfb, 0x3c, 0x15, 0xf4, 0x5c, 0x45, 0xb4, 0x5c, 0x45, 0x59, 0x5c, 0x45, 0x10, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0xf7, 0x25, 0x5c, 0x45, 0x9d, 0x3c, 0x15, 0xfa, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xf9, 0x3c, 0x15, 0xca, 0x5c, 0x45, 0x34, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x04, 0x9c, 0x5d, 0x4a, 0x3c, 0x15, 0xed, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xf9, 0x5c, 0x45, 0x7d, 0xbf, 0xf7, 0x18, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0xf7, 0x21, 0x5c, 0x45, 0x93, 0x3c, 0x15, 0xfa, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xeb, 0x9c, 0x5d, 0x45, 0xdf, 0xff, 0x02, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x03, 0x9c, 0x5d, 0x46, 0x3c, 0x15, 0xea, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfb, 0x5c, 0x45, 0x9f, 0xbf, 0xf7, 0x25, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0xf7, 0x1e, 0x5c, 0x45, 0x8b, 0x3c, 0x15, 0xf9, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xf6, 0x9c, 0x5d, 0x55, 0xdf, 0xff, 0x08, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x02, 0x9c, 0x5d, 0x43, 0x3c, 0x15, 0xe4, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfc, 0x5c, 0x45, 0xc2, 0xbf, 0xf7, 0x32, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0xf7, 0x1a, 0x5c, 0x45, 0x82, 0x3c, 0x15, 0xf9, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xf8, 0x5c, 0x45, 0x70, 0xdf, 0xff, 0x13, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x02, 0x9c, 0x5d, 0x3f, 0x3c, 0x15, 0xde, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xe2, 0x9c, 0x5d, 0x3f, 0xdf, 0xff, 0x01, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0xf7, 0x17, 0x5c, 0x45, 0x7a, 0x3c, 0x15, 0xf8, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfa, 0x5c, 0x45, 0x91, 0xbf, 0xf7, 0x20, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xdf, 0xff, 0x01, 0x9c, 0x5d, 0x3b, 0x3c, 0x15, 0xd6, 0x3c, 0x15, 0xfd, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xf3, 0x9c, 0x5d, 0x4d, 0xdf, 0xff, 0x04, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xbf, 0xf7, 0x14, 0x5c, 0x45, 0x71, 0x3c, 0x15, 0xf8, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfb, 0x5c, 0x45, 0xb3, 0xbf, 0xf7, 0x2c, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xdf, 0xff, 0x01, 0x9c, 0x5d, 0x38, 0x3c, 0x15, 0xcf, 0x3c, 0x15, 0xfd, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xf8, 0x5c, 0x45, 0x63, 0xdf, 0xff, 0x0e, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xdf, 0xff, 0x11, 0x5c, 0x45, 0x6a, 0x3c, 0x15, 0xf7, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfd, 0x3c, 0x15, 0xd6, 0x9c, 0x5d, 0x3a, 0xdf, 0xff, 0x01, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xbf, 0xf7, 0x30, 0x5c, 0x45, 0xc0, 0x3c, 0x15, 0xfc, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfa, 0x5c, 0x45, 0x83, 0xbf, 0xf7, 0x1b, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0x9c, 0x5d, 0x27, 0x5c, 0x45, 0x9e, 0x3c, 0x15, 0xf0, 0x3c, 0x15, 0xfa, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xff, 0x3c, 0x15, 0xfe, 0x3c, 0x15, 0xee, 0x9c, 0x5d, 0x47, 0xdf, 0xff, 0x03, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xdf, 0xff, 0x04, 0xbf, 0xf7, 0x27, 0x9c, 0x5d, 0x4b, 0x5c, 0x45, 0x92, 0x3c, 0x15, 0xe6, 0x3c, 0x15, 0xf9, 0x3c, 0x15, 0xfd, 0x3c, 0x15, 0xfb, 0x5c, 0x45, 0xa5, 0xbf, 0xf7, 0x27, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x04, 0xbf, 0xf7, 0x20, 0x9c, 0x5d, 0x43, 0x5c, 0x45, 0x7c, 0x3c, 0x15, 0xd2, 0x3c, 0x15, 0xf1, 0x9c, 0x5d, 0x58, 0xdf, 0xff, 0x09, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0xff, 0x02, 0xbf, 0xf7, 0x18, 0x5c, 0x45, 0x38, 0x5c, 0x45, 0x53, 0xbf, 0xf7, 0x14, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x07, 0x45, 0x5c, 0x3f, 0x15, 0x3c, 0x86, 0x45, 0x5c, 0x49, 0xf7, 0xbf, 0x25, 0xff, 0xdf, 0x06, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xf7, 0xbf, 0x28, 0x45, 0x5c, 0xa5, 0x15, 0x3c, 0xf6, 0x15, 0x3c, 0xed, 0x45, 0x5c, 0x9d, 0x5d, 0x9c, 0x51, 0xf7, 0xbf, 0x2d, 0xff, 0xdf, 0x0d, 0xff, 0xdf, 0x01, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x05, 0x5d, 0x9c, 0x4e, 0x15, 0x3c, 0xf2, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xfb, 0x15, 0x3c, 0xf4, 0x45, 0x5c, 0xb4, 0x45, 0x5c, 0x59, 0x45, 0x5c, 0x10, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xf7, 0xbf, 0x25, 0x45, 0x5c, 0x9d, 0x15, 0x3c, 0xfa, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xf9, 0x15, 0x3c, 0xca, 0x45, 0x5c, 0x34, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x04, 0x5d, 0x9c, 0x4a, 0x15, 0x3c, 0xed, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xf9, 0x45, 0x5c, 0x7d, 0xf7, 0xbf, 0x18, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xf7, 0xbf, 0x21, 0x45, 0x5c, 0x93, 0x15, 0x3c, 0xfa, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xeb, 0x5d, 0x9c, 0x45, 0xff, 0xdf, 0x02, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x03, 0x5d, 0x9c, 0x46, 0x15, 0x3c, 0xea, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfb, 0x45, 0x5c, 0x9f, 0xf7, 0xbf, 0x25, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xf7, 0xbf, 0x1e, 0x45, 0x5c, 0x8b, 0x15, 0x3c, 0xf9, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xf6, 0x5d, 0x9c, 0x55, 0xff, 0xdf, 0x08, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x02, 0x5d, 0x9c, 0x43, 0x15, 0x3c, 0xe4, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfc, 0x45, 0x5c, 0xc2, 0xf7, 0xbf, 0x32, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xf7, 0xbf, 0x1a, 0x45, 0x5c, 0x82, 0x15, 0x3c, 0xf9, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xf8, 0x45, 0x5c, 0x70, 0xff, 0xdf, 0x13, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x02, 0x5d, 0x9c, 0x3f, 0x15, 0x3c, 0xde, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xe2, 0x5d, 0x9c, 0x3f, 0xff, 0xdf, 0x01, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xf7, 0xbf, 0x17, 0x45, 0x5c, 0x7a, 0x15, 0x3c, 0xf8, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfa, 0x45, 0x5c, 0x91, 0xf7, 0xbf, 0x20, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xdf, 0x01, 0x5d, 0x9c, 0x3b, 0x15, 0x3c, 0xd6, 0x15, 0x3c, 0xfd, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xf3, 0x5d, 0x9c, 0x4d, 0xff, 0xdf, 0x04, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xf7, 0xbf, 0x14, 0x45, 0x5c, 0x71, 0x15, 0x3c, 0xf8, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfb, 0x45, 0x5c, 0xb3, 0xf7, 0xbf, 0x2c, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xdf, 0x01, 0x5d, 0x9c, 0x38, 0x15, 0x3c, 0xcf, 0x15, 0x3c, 0xfd, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xf8, 0x45, 0x5c, 0x63, 0xff, 0xdf, 0x0e, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xdf, 0x11, 0x45, 0x5c, 0x6a, 0x15, 0x3c, 0xf7, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfd, 0x15, 0x3c, 0xd6, 0x5d, 0x9c, 0x3a, 0xff, 0xdf, 0x01, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xf7, 0xbf, 0x30, 0x45, 0x5c, 0xc0, 0x15, 0x3c, 0xfc, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfa, 0x45, 0x5c, 0x83, 0xf7, 0xbf, 0x1b, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0x5d, 0x9c, 0x27, 0x45, 0x5c, 0x9e, 0x15, 0x3c, 0xf0, 0x15, 0x3c, 0xfa, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xff, 0x15, 0x3c, 0xfe, 0x15, 0x3c, 0xee, 0x5d, 0x9c, 0x47, 0xff, 0xdf, 0x03, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xdf, 0x04, 0xf7, 0xbf, 0x27, 0x5d, 0x9c, 0x4b, 0x45, 0x5c, 0x92, 0x15, 0x3c, 0xe6, 0x15, 0x3c, 0xf9, 0x15, 0x3c, 0xfd, 0x15, 0x3c, 0xfb, 0x45, 0x5c, 0xa5, 0xf7, 0xbf, 0x27, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x04, 0xf7, 0xbf, 0x20, 0x5d, 0x9c, 0x43, 0x45, 0x5c, 0x7c, 0x15, 0x3c, 0xd2, 0x15, 0x3c, 0xf1, 0x5d, 0x9c, 0x58, 0xff, 0xdf, 0x09, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xdf, 0x02, 0xf7, 0xbf, 0x18, 0x45, 0x5c, 0x38, 0x45, 0x5c, 0x53, 0xf7, 0xbf, 0x14, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _tick9_16x21 = {
  .header.always_zero = 0,
  .header.w = 16,
  .header.h = 21,
  .data_size = 336 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _tick9_16x21_map,
};
