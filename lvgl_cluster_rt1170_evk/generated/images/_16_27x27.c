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

#ifndef LV_ATTRIBUTE_IMG__16_27X27
#define LV_ATTRIBUTE_IMG__16_27X27
#endif

const LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG__16_27X27 uint8_t _16_27x27_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x10, 0xff, 0x45, 0x29, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc3, 0x18, 0xff, 0x25, 0x21, 0xff, 0x65, 0x29, 0xff, 0x65, 0x29, 0xff, 0x65, 0x29, 0xff, 0x65, 0x29, 0xff, 0x65, 0x29, 0xff, 0x65, 0x29, 0xff, 0x65, 0x29, 0xff, 0x04, 0x21, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x41, 0x08, 0xff, 0x65, 0x29, 0xff, 0x6d, 0x6b, 0xff, 0x72, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xc3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0xe7, 0x39, 0xff, 0xcf, 0x73, 0xff, 0x72, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x31, 0x84, 0xff, 0x04, 0x19, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0x28, 0x42, 0xff, 0x31, 0x84, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0xf0, 0x7b, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x41, 0x08, 0xff, 0x49, 0x4a, 0xff, 0x72, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x51, 0x8c, 0xff, 0x04, 0x21, 0xff, 0x00, 0x00, 0xff, 
  0x24, 0x21, 0xff, 0x2d, 0x63, 0xff, 0x72, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x45, 0x29, 0xff, 0x51, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x72, 0x8c, 0xff, 0x0c, 0x63, 0xff, 0x69, 0x4a, 0xff, 0x29, 0x42, 0xff, 0x29, 0x42, 0xff, 0x29, 0x42, 0xff, 0x29, 0x42, 0xff, 0x29, 0x42, 0xff, 0x29, 0x42, 0xff, 0xa6, 0x31, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x6d, 0x6b, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x31, 0x84, 0xff, 0x2c, 0x63, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0x6a, 0x4a, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x08, 0x42, 0xff, 0xa2, 0x10, 0xff, 0x61, 0x08, 0xff, 0x41, 0x08, 0xff, 0x41, 0x08, 0xff, 0x41, 0x08, 0xff, 0x41, 0x08, 0xff, 0x41, 0x08, 0xff, 0x41, 0x08, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0xf0, 0x7b, 0xff, 0x72, 0x8c, 0xff, 0x8e, 0x6b, 0xff, 0x66, 0x29, 0xff, 0xe7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xa2, 0x10, 0xff, 0x4d, 0x6b, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe4, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x49, 0x42, 0xff, 0x08, 0x42, 0xff, 0xe3, 0x18, 0xff, 0x41, 0x08, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xae, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x8e, 0x6b, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x41, 0x08, 0xff, 0x41, 0x08, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xaf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xc3, 0x18, 0xff, 0x20, 0x00, 0xff, 0x20, 0x00, 0xff, 0x20, 0x00, 0xff, 0x20, 0x00, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0xcf, 0x7b, 0xff, 0xe8, 0x39, 0xff, 0xc7, 0x39, 0xff, 0xc7, 0x39, 0xff, 0xc7, 0x39, 0xff, 0xc7, 0x39, 0xff, 0xc7, 0x39, 0xff, 0x86, 0x31, 0xff, 0x24, 0x21, 0xff, 0x82, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x71, 0x8c, 0xff, 0xec, 0x5a, 0xff, 0x04, 0x21, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x94, 0xff, 0x92, 0x94, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x92, 0x8c, 0xff, 0x8e, 0x6b, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x94, 0xff, 0xf0, 0x7b, 0xff, 0x28, 0x42, 0xff, 0x08, 0x3a, 0xff, 0x08, 0x3a, 0xff, 0x08, 0x3a, 0xff, 0x08, 0x3a, 0xff, 0x08, 0x42, 0xff, 0x8a, 0x52, 0xff, 0x10, 0x7c, 0xff, 0x92, 0x94, 0xff, 0x72, 0x8c, 0xff, 0x28, 0x42, 0xff, 0x41, 0x08, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xc3, 0x18, 0xff, 0x20, 0x00, 0xff, 0x20, 0x00, 0xff, 0x20, 0x00, 0xff, 0x21, 0x00, 0xff, 0x41, 0x08, 0xff, 0x61, 0x08, 0xff, 0x86, 0x29, 0xff, 0x31, 0x84, 0xff, 0x92, 0x94, 0xff, 0x8e, 0x73, 0xff, 0xc3, 0x18, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x82, 0x10, 0xff, 0xec, 0x5a, 0xff, 0x92, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x04, 0x21, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0x6a, 0x4a, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x24, 0x21, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0x6a, 0x4a, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x24, 0x21, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0x6a, 0x4a, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x24, 0x21, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xcf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0x6a, 0x4a, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x24, 0x21, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xaf, 0x73, 0xff, 0x92, 0x8c, 0xff, 0x6e, 0x6b, 0xff, 0xc3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0x6a, 0x4a, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x24, 0x21, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xa2, 0x10, 0xff, 0x6d, 0x6b, 0xff, 0x92, 0x8c, 0xff, 0xcf, 0x7b, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x82, 0x10, 0xff, 0xcb, 0x5a, 0xff, 0x92, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x04, 0x21, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x61, 0x08, 0xff, 0xaa, 0x52, 0xff, 0x92, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0xa6, 0x31, 0xff, 0x41, 0x08, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0x21, 0x00, 0xff, 0x45, 0x29, 0xff, 0x10, 0x7c, 0xff, 0x92, 0x94, 0xff, 0xaf, 0x73, 0xff, 0xc3, 0x18, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0x10, 0x7c, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x86, 0x29, 0xff, 0x72, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x10, 0x7c, 0xff, 0x29, 0x42, 0xff, 0xa6, 0x31, 0xff, 0x86, 0x31, 0xff, 0x86, 0x31, 0xff, 0x86, 0x31, 0xff, 0x08, 0x3a, 0xff, 0xae, 0x73, 0xff, 0x92, 0x94, 0xff, 0x92, 0x8c, 0xff, 0x69, 0x4a, 0xff, 0x61, 0x08, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xc7, 0x39, 0xff, 0x92, 0x8c, 0xff, 0xf0, 0x7b, 0xff, 0xe3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x82, 0x10, 0xff, 0xcb, 0x5a, 0xff, 0x72, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x94, 0xff, 0x92, 0x8c, 0xff, 0xcf, 0x73, 0xff, 0x04, 0x21, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0xa6, 0x31, 0xff, 0x71, 0x8c, 0xff, 0xcf, 0x73, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xaa, 0x52, 0xff, 0x51, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x92, 0x8c, 0xff, 0x72, 0x8c, 0xff, 0x6d, 0x6b, 0xff, 0x45, 0x29, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x82, 0x10, 0xff, 0x08, 0x42, 0xff, 0x65, 0x29, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x62, 0x08, 0xff, 0x25, 0x21, 0xff, 0xe7, 0x39, 0xff, 0x29, 0x42, 0xff, 0x49, 0x4a, 0xff, 0x49, 0x4a, 0xff, 0x49, 0x42, 0xff, 0x08, 0x3a, 0xff, 0x65, 0x29, 0xff, 0xa3, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0xc3, 0xff, 0x29, 0x45, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x18, 0xc3, 0xff, 0x21, 0x25, 0xff, 0x29, 0x65, 0xff, 0x29, 0x65, 0xff, 0x29, 0x65, 0xff, 0x29, 0x65, 0xff, 0x29, 0x65, 0xff, 0x29, 0x65, 0xff, 0x29, 0x65, 0xff, 0x21, 0x04, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x41, 0xff, 0x29, 0x65, 0xff, 0x6b, 0x6d, 0xff, 0x8c, 0x72, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x39, 0xe7, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x72, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x84, 0x31, 0xff, 0x19, 0x04, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x42, 0x28, 0xff, 0x84, 0x31, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x7b, 0xf0, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x41, 0xff, 0x4a, 0x49, 0xff, 0x8c, 0x72, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x51, 0xff, 0x21, 0x04, 0xff, 0x00, 0x00, 0xff, 
  0x21, 0x24, 0xff, 0x63, 0x2d, 0xff, 0x8c, 0x72, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x29, 0x45, 0xff, 0x8c, 0x51, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x72, 0xff, 0x63, 0x0c, 0xff, 0x4a, 0x69, 0xff, 0x42, 0x29, 0xff, 0x42, 0x29, 0xff, 0x42, 0x29, 0xff, 0x42, 0x29, 0xff, 0x42, 0x29, 0xff, 0x42, 0x29, 0xff, 0x31, 0xa6, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 
  0x6b, 0x6d, 0xff, 0x8c, 0x92, 0xff, 0x94, 0x92, 0xff, 0x84, 0x31, 0xff, 0x63, 0x2c, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x4a, 0x6a, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x42, 0x08, 0xff, 0x10, 0xa2, 0xff, 0x08, 0x61, 0xff, 0x08, 0x41, 0xff, 0x08, 0x41, 0xff, 0x08, 0x41, 0xff, 0x08, 0x41, 0xff, 0x08, 0x41, 0xff, 0x08, 0x41, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x7b, 0xf0, 0xff, 0x8c, 0x72, 0xff, 0x6b, 0x8e, 0xff, 0x29, 0x66, 0xff, 0x39, 0xe7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0xa2, 0xff, 0x6b, 0x4d, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe4, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x42, 0x49, 0xff, 0x42, 0x08, 0xff, 0x18, 0xe3, 0xff, 0x08, 0x41, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xae, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x8e, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x08, 0x41, 0xff, 0x08, 0x41, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xaf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x20, 0xff, 0x00, 0x20, 0xff, 0x00, 0x20, 0xff, 0x00, 0x20, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x7b, 0xcf, 0xff, 0x39, 0xe8, 0xff, 0x39, 0xc7, 0xff, 0x39, 0xc7, 0xff, 0x39, 0xc7, 0xff, 0x39, 0xc7, 0xff, 0x39, 0xc7, 0xff, 0x31, 0x86, 0xff, 0x21, 0x24, 0xff, 0x10, 0x82, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x71, 0xff, 0x5a, 0xec, 0xff, 0x21, 0x04, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x94, 0x92, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x8e, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x94, 0x92, 0xff, 0x7b, 0xf0, 0xff, 0x42, 0x28, 0xff, 0x3a, 0x08, 0xff, 0x3a, 0x08, 0xff, 0x3a, 0x08, 0xff, 0x3a, 0x08, 0xff, 0x42, 0x08, 0xff, 0x52, 0x8a, 0xff, 0x7c, 0x10, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x72, 0xff, 0x42, 0x28, 0xff, 0x08, 0x41, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x20, 0xff, 0x00, 0x20, 0xff, 0x00, 0x20, 0xff, 0x00, 0x21, 0xff, 0x08, 0x41, 0xff, 0x08, 0x61, 0xff, 0x29, 0x86, 0xff, 0x84, 0x31, 0xff, 0x94, 0x92, 0xff, 0x73, 0x8e, 0xff, 0x18, 0xc3, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0x82, 0xff, 0x5a, 0xec, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x72, 0xff, 0x21, 0x04, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x4a, 0x6a, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x21, 0x24, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x4a, 0x6a, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x21, 0x24, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x4a, 0x6a, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x21, 0x24, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xcf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x4a, 0x6a, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x21, 0x24, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x73, 0xaf, 0xff, 0x8c, 0x92, 0xff, 0x6b, 0x6e, 0xff, 0x10, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x4a, 0x6a, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x21, 0x24, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0xa2, 0xff, 0x6b, 0x6d, 0xff, 0x8c, 0x92, 0xff, 0x7b, 0xcf, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0x82, 0xff, 0x5a, 0xcb, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x72, 0xff, 0x21, 0x04, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x61, 0xff, 0x52, 0xaa, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x72, 0xff, 0x31, 0xa6, 0xff, 0x08, 0x41, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x00, 0x21, 0xff, 0x29, 0x45, 0xff, 0x7c, 0x10, 0xff, 0x94, 0x92, 0xff, 0x73, 0xaf, 0xff, 0x18, 0xc3, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x29, 0x86, 0xff, 0x8c, 0x72, 0xff, 0x94, 0x92, 0xff, 0x7c, 0x10, 0xff, 0x42, 0x29, 0xff, 0x31, 0xa6, 0xff, 0x31, 0x86, 0xff, 0x31, 0x86, 0xff, 0x31, 0x86, 0xff, 0x3a, 0x08, 0xff, 0x73, 0xae, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x4a, 0x69, 0xff, 0x08, 0x61, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x39, 0xc7, 0xff, 0x8c, 0x92, 0xff, 0x7b, 0xf0, 0xff, 0x18, 0xe3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0x82, 0xff, 0x5a, 0xcb, 0xff, 0x8c, 0x72, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x94, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x73, 0xcf, 0xff, 0x21, 0x04, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x31, 0xa6, 0xff, 0x8c, 0x71, 0xff, 0x73, 0xcf, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0x52, 0xaa, 0xff, 0x8c, 0x51, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x92, 0xff, 0x8c, 0x72, 0xff, 0x6b, 0x6d, 0xff, 0x29, 0x45, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0x82, 0xff, 0x42, 0x08, 0xff, 0x29, 0x65, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x08, 0x62, 0xff, 0x21, 0x25, 0xff, 0x39, 0xe7, 0xff, 0x42, 0x29, 0xff, 0x4a, 0x49, 0xff, 0x4a, 0x49, 0xff, 0x42, 0x49, 0xff, 0x3a, 0x08, 0xff, 0x29, 0x65, 0xff, 0x10, 0xa3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
#endif
};

const LV_ATTRIBUTE_LARGE_CONST lv_img_dsc_t _16_27x27 = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = _16_27x27_map,
};
