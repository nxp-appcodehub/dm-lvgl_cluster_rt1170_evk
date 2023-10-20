/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

//static lv_style_t style_0_opa;
//static lv_style_t style_cover_opa;

void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_AUTO);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_main_default
	static lv_style_t style_screen_main_main_default;
	if (style_screen_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_main_default);
	else
		lv_style_init(&style_screen_main_main_default);
	lv_style_set_bg_color(&style_screen_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_screen_main_main_default, 255);
	lv_obj_add_style(ui->screen, &style_screen_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_frame2px
	ui->screen_frame2px = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_frame2px, 100, 150);
	lv_obj_set_size(ui->screen_frame2px, 721, 324);
	lv_obj_set_scrollbar_mode(ui->screen_frame2px, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_frame2px_main_main_default
	static lv_style_t style_screen_frame2px_main_main_default;
	if (style_screen_frame2px_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_frame2px_main_main_default);
	else
		lv_style_init(&style_screen_frame2px_main_main_default);
	lv_style_set_img_recolor(&style_screen_frame2px_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_frame2px_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_frame2px_main_main_default, 255);
	lv_obj_add_style(ui->screen_frame2px, &style_screen_frame2px_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_frame2px, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame2px,&_frame2px_721x324);
	lv_img_set_pivot(ui->screen_frame2px, 0,0);
	lv_img_set_angle(ui->screen_frame2px, 0);

	//Write codes screen_RPMx1000
	ui->screen_RPMx1000 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_RPMx1000, 111, 295);
	lv_obj_set_size(ui->screen_RPMx1000, 42, 34);
	lv_obj_set_scrollbar_mode(ui->screen_RPMx1000, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_rpmx1000_main_main_default
	static lv_style_t style_screen_rpmx1000_main_main_default;
	if (style_screen_rpmx1000_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_rpmx1000_main_main_default);
	else
		lv_style_init(&style_screen_rpmx1000_main_main_default);
	lv_style_set_img_recolor(&style_screen_rpmx1000_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_rpmx1000_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_rpmx1000_main_main_default, 255);
	lv_obj_add_style(ui->screen_RPMx1000, &style_screen_rpmx1000_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_RPMx1000, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_RPMx1000,&_RPMx1000_42x34);
	lv_img_set_pivot(ui->screen_RPMx1000, 0,0);
	lv_img_set_angle(ui->screen_RPMx1000, 0);

	//Write codes screen_div
	ui->screen_div = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_div, 166, 311);
	lv_obj_set_size(ui->screen_div, 229, 4);
	lv_obj_set_scrollbar_mode(ui->screen_div, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_div_main_main_default
	static lv_style_t style_screen_div_main_main_default;
	if (style_screen_div_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_div_main_main_default);
	else
		lv_style_init(&style_screen_div_main_main_default);
	lv_style_set_img_recolor(&style_screen_div_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_div_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_div_main_main_default, 255);
	lv_obj_add_style(ui->screen_div, &style_screen_div_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_div, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_div,&_div_229x4);
	lv_img_set_pivot(ui->screen_div, 0,0);
	lv_img_set_angle(ui->screen_div, 0);

	//Write codes screen_ticks_base
	ui->screen_ticks_base = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_ticks_base, 75, 126);
	lv_obj_set_size(ui->screen_ticks_base, 346, 369);
	lv_obj_set_scrollbar_mode(ui->screen_ticks_base, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_ticks_base_main_main_default
	static lv_style_t style_screen_ticks_base_main_main_default;
	if (style_screen_ticks_base_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_ticks_base_main_main_default);
	else
		lv_style_init(&style_screen_ticks_base_main_main_default);
	lv_style_set_img_recolor(&style_screen_ticks_base_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_ticks_base_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_ticks_base_main_main_default, 255);
	lv_obj_add_style(ui->screen_ticks_base, &style_screen_ticks_base_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_ticks_base, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_ticks_base,&_ticks_base_346x369);
	lv_img_set_pivot(ui->screen_ticks_base, 0,0);
	lv_img_set_angle(ui->screen_ticks_base, 0);

	//Write codes screen_num0
	ui->screen_num0 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num0, 255, 497);
	lv_obj_set_size(ui->screen_num0, 15, 27);
	lv_obj_set_scrollbar_mode(ui->screen_num0, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num0_main_main_default
	static lv_style_t style_screen_num0_main_main_default;
	if (style_screen_num0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num0_main_main_default);
	else
		lv_style_init(&style_screen_num0_main_main_default);
	lv_style_set_img_recolor(&style_screen_num0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num0_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num0_main_main_default, 255);
	lv_obj_add_style(ui->screen_num0, &style_screen_num0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num0, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num0,&_0_15x27);
	lv_img_set_pivot(ui->screen_num0, 0,0);
	lv_img_set_angle(ui->screen_num0, 0);

	//Write codes screen_outer2px_1
	ui->screen_outer2px_1 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_1, 177, 486);
	lv_obj_set_size(ui->screen_outer2px_1, 73, 28);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_1_main_main_default
	static lv_style_t style_screen_outer2px_1_main_main_default;
	if (style_screen_outer2px_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_1_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_1, &style_screen_outer2px_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_1,&_outer2px_1_73x28);
	lv_img_set_pivot(ui->screen_outer2px_1, 0,0);
	lv_img_set_angle(ui->screen_outer2px_1, 0);

	//Write codes screen_num2
	ui->screen_num2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num2, 162, 474);
	lv_obj_set_size(ui->screen_num2, 15, 26);
	lv_obj_set_scrollbar_mode(ui->screen_num2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num2_main_main_default
	static lv_style_t style_screen_num2_main_main_default;
	if (style_screen_num2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num2_main_main_default);
	else
		lv_style_init(&style_screen_num2_main_main_default);
	lv_style_set_img_recolor(&style_screen_num2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num2_main_main_default, 255);
	lv_obj_add_style(ui->screen_num2, &style_screen_num2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num2,&_2_15x26);
	lv_img_set_pivot(ui->screen_num2, 0,0);
	lv_img_set_angle(ui->screen_num2, 0);

	//Write codes screen_outer2px_2
	ui->screen_outer2px_2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_2, 103, 427);
	lv_obj_set_size(ui->screen_outer2px_2, 58, 59);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_2_main_main_default
	static lv_style_t style_screen_outer2px_2_main_main_default;
	if (style_screen_outer2px_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_2_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_2_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_2, &style_screen_outer2px_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_2,&_outer2px_2_58x59);
	lv_img_set_pivot(ui->screen_outer2px_2, 0,0);
	lv_img_set_angle(ui->screen_outer2px_2, 0);

	//Write codes screen_num4
	ui->screen_num4 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num4, 86, 406);
	lv_obj_set_size(ui->screen_num4, 17, 26);
	lv_obj_set_scrollbar_mode(ui->screen_num4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num4_main_main_default
	static lv_style_t style_screen_num4_main_main_default;
	if (style_screen_num4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num4_main_main_default);
	else
		lv_style_init(&style_screen_num4_main_main_default);
	lv_style_set_img_recolor(&style_screen_num4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num4_main_main_default, 255);
	lv_obj_add_style(ui->screen_num4, &style_screen_num4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num4,&_4_17x26);
	lv_img_set_pivot(ui->screen_num4, 0,0);
	lv_img_set_angle(ui->screen_num4, 0);

	//Write codes screen_outer2px_3
	ui->screen_outer2px_3 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_3, 63, 336);
	lv_obj_set_size(ui->screen_outer2px_3, 28, 73);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_3_main_main_default
	static lv_style_t style_screen_outer2px_3_main_main_default;
	if (style_screen_outer2px_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_3_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_3_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_3_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_3, &style_screen_outer2px_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_3,&_outer2px_3_28x73);
	lv_img_set_pivot(ui->screen_outer2px_3, 0,0);
	lv_img_set_angle(ui->screen_outer2px_3, 0);

	//Write codes screen_num6
	ui->screen_num6 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num6, 58, 302);
	lv_obj_set_size(ui->screen_num6, 14, 27);
	lv_obj_set_scrollbar_mode(ui->screen_num6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num6_main_main_default
	static lv_style_t style_screen_num6_main_main_default;
	if (style_screen_num6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num6_main_main_default);
	else
		lv_style_init(&style_screen_num6_main_main_default);
	lv_style_set_img_recolor(&style_screen_num6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num6_main_main_default, 255);
	lv_obj_add_style(ui->screen_num6, &style_screen_num6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num6,&_6_14x27);
	lv_img_set_pivot(ui->screen_num6, 0,0);
	lv_img_set_angle(ui->screen_num6, 0);

	//Write codes screen_outer2px_4
	ui->screen_outer2px_4 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_4, 60, 222);
	lv_obj_set_size(ui->screen_outer2px_4, 28, 73);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_4_main_main_default
	static lv_style_t style_screen_outer2px_4_main_main_default;
	if (style_screen_outer2px_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_4_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_4_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_4_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_4, &style_screen_outer2px_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_4,&_outer2px_4_28x73);
	lv_img_set_pivot(ui->screen_outer2px_4, 0,0);
	lv_img_set_angle(ui->screen_outer2px_4, 0);

	//Write codes screen_num8
	ui->screen_num8 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num8, 80, 195);
	lv_obj_set_size(ui->screen_num8, 16, 27);
	lv_obj_set_scrollbar_mode(ui->screen_num8, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num8_main_main_default
	static lv_style_t style_screen_num8_main_main_default;
	if (style_screen_num8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num8_main_main_default);
	else
		lv_style_init(&style_screen_num8_main_main_default);
	lv_style_set_img_recolor(&style_screen_num8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num8_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num8_main_main_default, 255);
	lv_obj_add_style(ui->screen_num8, &style_screen_num8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num8, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num8,&_8_16x27);
	lv_img_set_pivot(ui->screen_num8, 0,0);
	lv_img_set_angle(ui->screen_num8, 0);

	//Write codes screen_outer2px_5
	ui->screen_outer2px_5 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_5, 96, 142);
	lv_obj_set_size(ui->screen_outer2px_5, 58, 59);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_5_main_main_default
	static lv_style_t style_screen_outer2px_5_main_main_default;
	if (style_screen_outer2px_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_5_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_5_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_5_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_5_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_5, &style_screen_outer2px_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_5,&_outer2px_5_58x59);
	lv_img_set_pivot(ui->screen_outer2px_5, 0,0);
	lv_img_set_angle(ui->screen_outer2px_5, 0);

	//Write codes screen_num10
	ui->screen_num10 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num10, 150, 116);
	lv_obj_set_size(ui->screen_num10, 27, 26);
	lv_obj_set_scrollbar_mode(ui->screen_num10, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num10_main_main_default
	static lv_style_t style_screen_num10_main_main_default;
	if (style_screen_num10_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num10_main_main_default);
	else
		lv_style_init(&style_screen_num10_main_main_default);
	lv_style_set_img_recolor(&style_screen_num10_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num10_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num10_main_main_default, 255);
	lv_obj_add_style(ui->screen_num10, &style_screen_num10_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num10, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num10,&_10_27x26);
	lv_img_set_pivot(ui->screen_num10, 0,0);
	lv_img_set_angle(ui->screen_num10, 0);

	//Write codes screen_outer2px_6
	ui->screen_outer2px_6 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_6, 180, 105);
	lv_obj_set_size(ui->screen_outer2px_6, 73, 28);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_6_main_main_default
	static lv_style_t style_screen_outer2px_6_main_main_default;
	if (style_screen_outer2px_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_6_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_6_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_6_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_6, &style_screen_outer2px_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_6,&_outer2px_6_73x28);
	lv_img_set_pivot(ui->screen_outer2px_6, 0,0);
	lv_img_set_angle(ui->screen_outer2px_6, 0);

	//Write codes screen_num12
	ui->screen_num12 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num12, 252, 93);
	lv_obj_set_size(ui->screen_num12, 26, 27);
	lv_obj_set_scrollbar_mode(ui->screen_num12, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num12_main_main_default
	static lv_style_t style_screen_num12_main_main_default;
	if (style_screen_num12_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num12_main_main_default);
	else
		lv_style_init(&style_screen_num12_main_main_default);
	lv_style_set_img_recolor(&style_screen_num12_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num12_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num12_main_main_default, 255);
	lv_obj_add_style(ui->screen_num12, &style_screen_num12_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num12, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num12,&_12_26x27);
	lv_img_set_pivot(ui->screen_num12, 0,0);
	lv_img_set_angle(ui->screen_num12, 0);

	//Write codes screen_outer2px_7
	ui->screen_outer2px_7 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_7, 280, 107);
	lv_obj_set_size(ui->screen_outer2px_7, 73, 28);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_7, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_7_main_main_default
	static lv_style_t style_screen_outer2px_7_main_main_default;
	if (style_screen_outer2px_7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_7_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_7_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_7_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_7_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_7, &style_screen_outer2px_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_7, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_7,&_outer2px_7_73x28);
	lv_img_set_pivot(ui->screen_outer2px_7, 0,0);
	lv_img_set_angle(ui->screen_outer2px_7, 0);

	//Write codes screen_num14
	ui->screen_num14 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num14, 353, 122);
	lv_obj_set_size(ui->screen_num14, 29, 27);
	lv_obj_set_scrollbar_mode(ui->screen_num14, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num14_main_main_default
	static lv_style_t style_screen_num14_main_main_default;
	if (style_screen_num14_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num14_main_main_default);
	else
		lv_style_init(&style_screen_num14_main_main_default);
	lv_style_set_img_recolor(&style_screen_num14_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num14_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num14_main_main_default, 255);
	lv_obj_add_style(ui->screen_num14, &style_screen_num14_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num14, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num14,&_14_29x27);
	lv_img_set_pivot(ui->screen_num14, 0,0);
	lv_img_set_angle(ui->screen_num14, 0);

	//Write codes screen_outer2px_8
	ui->screen_outer2px_8 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_outer2px_8, 376, 148);
	lv_obj_set_size(ui->screen_outer2px_8, 58, 59);
	lv_obj_set_scrollbar_mode(ui->screen_outer2px_8, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_outer2px_8_main_main_default
	static lv_style_t style_screen_outer2px_8_main_main_default;
	if (style_screen_outer2px_8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_outer2px_8_main_main_default);
	else
		lv_style_init(&style_screen_outer2px_8_main_main_default);
	lv_style_set_img_recolor(&style_screen_outer2px_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_outer2px_8_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_outer2px_8_main_main_default, 255);
	lv_obj_add_style(ui->screen_outer2px_8, &style_screen_outer2px_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_outer2px_8, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_outer2px_8,&_outer2px_8_58x59);
	lv_img_set_pivot(ui->screen_outer2px_8, 0,0);
	lv_img_set_angle(ui->screen_outer2px_8, 0);

	//Write codes screen_num16
	ui->screen_num16 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_num16, 426, 205);
	lv_obj_set_size(ui->screen_num16, 27, 27);
	lv_obj_set_scrollbar_mode(ui->screen_num16, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_num16_main_main_default
	static lv_style_t style_screen_num16_main_main_default;
	if (style_screen_num16_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_num16_main_main_default);
	else
		lv_style_init(&style_screen_num16_main_main_default);
	lv_style_set_img_recolor(&style_screen_num16_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_num16_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_num16_main_main_default, 255);
	lv_obj_add_style(ui->screen_num16, &style_screen_num16_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_num16, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_num16,&_16_27x27);
	lv_img_set_pivot(ui->screen_num16, 0,0);
	lv_img_set_angle(ui->screen_num16, 0);

	//Write codes screen_signal_left
	ui->screen_signal_left = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_signal_left, 46, 46);
	lv_obj_set_size(ui->screen_signal_left, 48, 40);
	lv_obj_set_scrollbar_mode(ui->screen_signal_left, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_signal_left_main_main_default
	static lv_style_t style_screen_signal_left_main_main_default;
	if (style_screen_signal_left_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_signal_left_main_main_default);
	else
		lv_style_init(&style_screen_signal_left_main_main_default);
	lv_style_set_img_recolor(&style_screen_signal_left_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_signal_left_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_signal_left_main_main_default, 255);
	lv_obj_add_style(ui->screen_signal_left, &style_screen_signal_left_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_signal_left, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_signal_left,&_signal_left_48x40);
	lv_img_set_pivot(ui->screen_signal_left, 0,0);
	lv_img_set_angle(ui->screen_signal_left, 0);

	//Write codes screen_signal_right
	ui->screen_signal_right = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_signal_right, 387, 46);
	lv_obj_set_size(ui->screen_signal_right, 48, 40);
	lv_obj_set_scrollbar_mode(ui->screen_signal_right, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_signal_right_main_main_default
	static lv_style_t style_screen_signal_right_main_main_default;
	if (style_screen_signal_right_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_signal_right_main_main_default);
	else
		lv_style_init(&style_screen_signal_right_main_main_default);
	lv_style_set_img_recolor(&style_screen_signal_right_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_signal_right_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_signal_right_main_main_default, 255);
	lv_obj_add_style(ui->screen_signal_right, &style_screen_signal_right_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_signal_right, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_signal_right,&_signal_right_48x40);
	lv_img_set_pivot(ui->screen_signal_right, 0,0);
	lv_img_set_angle(ui->screen_signal_right, 0);

	//Write codes screen_light_brake
	ui->screen_light_brake = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_brake, 478, 331);
	lv_obj_set_size(ui->screen_light_brake, 37, 38);
	lv_obj_set_scrollbar_mode(ui->screen_light_brake, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_brake_main_main_default
	static lv_style_t style_screen_light_brake_main_main_default;
	if (style_screen_light_brake_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_brake_main_main_default);
	else
		lv_style_init(&style_screen_light_brake_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_brake_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_brake_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_brake_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_brake, &style_screen_light_brake_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_brake, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_brake,&_light_brake_37x38);
	lv_img_set_pivot(ui->screen_light_brake, 0,0);
	lv_img_set_angle(ui->screen_light_brake, 0);

	//Write codes screen_light_highbeam
	ui->screen_light_highbeam = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_highbeam, 560, 337);
	lv_obj_set_size(ui->screen_light_highbeam, 42, 26);
	lv_obj_set_scrollbar_mode(ui->screen_light_highbeam, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_highbeam_main_main_default
	static lv_style_t style_screen_light_highbeam_main_main_default;
	if (style_screen_light_highbeam_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_highbeam_main_main_default);
	else
		lv_style_init(&style_screen_light_highbeam_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_highbeam_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_highbeam_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_highbeam_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_highbeam, &style_screen_light_highbeam_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_highbeam, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_highbeam,&_light_highbeam_42x26);
	lv_img_set_pivot(ui->screen_light_highbeam, 0,0);
	lv_img_set_angle(ui->screen_light_highbeam, 0);

	//Write codes screen_light_battery
	ui->screen_light_battery = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_battery, 640, 333);
	lv_obj_set_size(ui->screen_light_battery, 45, 30);
	lv_obj_set_scrollbar_mode(ui->screen_light_battery, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_battery_main_main_default
	static lv_style_t style_screen_light_battery_main_main_default;
	if (style_screen_light_battery_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_battery_main_main_default);
	else
		lv_style_init(&style_screen_light_battery_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_battery_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_battery_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_battery_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_battery, &style_screen_light_battery_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_battery, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_battery,&_light_battery_45x30);
	lv_img_set_pivot(ui->screen_light_battery, 0,0);
	lv_img_set_angle(ui->screen_light_battery, 0);

	//Write codes screen_light_ABS
	ui->screen_light_ABS = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_ABS, 736, 333);
	lv_obj_set_size(ui->screen_light_ABS, 44, 32);
	lv_obj_set_scrollbar_mode(ui->screen_light_ABS, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_abs_main_main_default
	static lv_style_t style_screen_light_abs_main_main_default;
	if (style_screen_light_abs_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_abs_main_main_default);
	else
		lv_style_init(&style_screen_light_abs_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_abs_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_abs_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_abs_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_ABS, &style_screen_light_abs_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_ABS, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_ABS,&_light_ABS_44x32);
	lv_img_set_pivot(ui->screen_light_ABS, 0,0);
	lv_img_set_angle(ui->screen_light_ABS, 0);
#if 0
	//Write codes screen_temp_scale
	ui->screen_temp_scale = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_temp_scale, 618, 616);
	lv_obj_set_size(ui->screen_temp_scale, 137, 57);
	lv_obj_set_scrollbar_mode(ui->screen_temp_scale, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_temp_scale_main_main_default
	static lv_style_t style_screen_temp_scale_main_main_default;
	if (style_screen_temp_scale_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_temp_scale_main_main_default);
	else
		lv_style_init(&style_screen_temp_scale_main_main_default);
	lv_style_set_img_recolor(&style_screen_temp_scale_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_temp_scale_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_temp_scale_main_main_default, 255);
	lv_obj_add_style(ui->screen_temp_scale, &style_screen_temp_scale_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_temp_scale, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_temp_scale,&_temp_scale_137x57);
	lv_img_set_pivot(ui->screen_temp_scale, 0,0);
	lv_img_set_angle(ui->screen_temp_scale, 0);
#endif

	//Write codes screen_oil_gauge
	ui->screen_oil_gauge = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_oil_gauge, 618, 616);
	lv_obj_set_size(ui->screen_oil_gauge, 135, 56);
	lv_obj_set_scrollbar_mode(ui->screen_oil_gauge, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_oil_gauge_main_main_default
	static lv_style_t style_screen_oil_gauge_main_main_default;
	if (style_screen_oil_gauge_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_oil_gauge_main_main_default);
	else
		lv_style_init(&style_screen_oil_gauge_main_main_default);
	lv_style_set_img_recolor(&style_screen_oil_gauge_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_oil_gauge_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_oil_gauge_main_main_default, 255);
	lv_obj_add_style(ui->screen_oil_gauge, &style_screen_oil_gauge_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_oil_gauge, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_oil_gauge,&_oil_gauge_135x56);
	lv_img_set_pivot(ui->screen_oil_gauge, 0,0);
	lv_img_set_angle(ui->screen_oil_gauge, 0);

	//Write codes screen_auto_start
	ui->screen_auto_start = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_auto_start, 637, 442);
	lv_obj_set_size(ui->screen_auto_start, 70, 70);
	lv_obj_set_scrollbar_mode(ui->screen_auto_start, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_auto_start_main_main_default
	static lv_style_t style_screen_auto_start_main_main_default;
	if (style_screen_auto_start_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_auto_start_main_main_default);
	else
		lv_style_init(&style_screen_auto_start_main_main_default);
	lv_style_set_img_recolor(&style_screen_auto_start_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_auto_start_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_auto_start_main_main_default, 255);
	lv_obj_add_style(ui->screen_auto_start, &style_screen_auto_start_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_auto_start, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_auto_start,&_auto_start_70x70);
	lv_img_set_pivot(ui->screen_auto_start, 0,0);
	lv_img_set_angle(ui->screen_auto_start, 0);
	
	//Write codes screen_speed_label
	ui->screen_speed_label = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_speed_label, 336, 285);
	lv_obj_set_size(ui->screen_speed_label, 65, 22);
	lv_obj_set_scrollbar_mode(ui->screen_speed_label, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_speed_label, "km/h");
	lv_label_set_long_mode(ui->screen_speed_label, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_speed_label_main_main_default
	static lv_style_t style_screen_speed_label_main_main_default;
	if (style_screen_speed_label_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_speed_label_main_main_default);
	else
		lv_style_init(&style_screen_speed_label_main_main_default);
	lv_style_set_radius(&style_screen_speed_label_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_speed_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_speed_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_speed_label_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_speed_label_main_main_default, 0);
	lv_style_set_text_color(&style_screen_speed_label_main_main_default, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_speed_label_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_screen_speed_label_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_speed_label_main_main_default, 0);
	lv_style_set_text_align(&style_screen_speed_label_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_speed_label_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_speed_label_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_speed_label_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_speed_label_main_main_default, 0);
	lv_obj_add_style(ui->screen_speed_label, &style_screen_speed_label_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_Gear_label
	ui->screen_Gear_label = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_Gear_label, 283, 358);
	lv_obj_set_size(ui->screen_Gear_label, 65, 26);
	lv_obj_set_scrollbar_mode(ui->screen_Gear_label, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_Gear_label, "Gear");
	lv_label_set_long_mode(ui->screen_Gear_label, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_gear_label_main_main_default
	static lv_style_t style_screen_gear_label_main_main_default;
	if (style_screen_gear_label_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_gear_label_main_main_default);
	else
		lv_style_init(&style_screen_gear_label_main_main_default);
	lv_style_set_radius(&style_screen_gear_label_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_gear_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_gear_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_gear_label_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_gear_label_main_main_default, 0);
	lv_style_set_text_color(&style_screen_gear_label_main_main_default, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_gear_label_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_screen_gear_label_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_gear_label_main_main_default, 0);
	lv_style_set_text_align(&style_screen_gear_label_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_gear_label_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_gear_label_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_gear_label_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_gear_label_main_main_default, 0);
	lv_obj_add_style(ui->screen_Gear_label, &style_screen_gear_label_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_speed
	ui->screen_speed = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_speed, 185, 225);
	lv_obj_set_size(ui->screen_speed, 148, 77);
	lv_obj_set_scrollbar_mode(ui->screen_speed, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_speed, "000");
	lv_label_set_long_mode(ui->screen_speed, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_speed_main_main_default
	static lv_style_t style_screen_speed_main_main_default;
	if (style_screen_speed_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_speed_main_main_default);
	else
		lv_style_init(&style_screen_speed_main_main_default);
	lv_style_set_radius(&style_screen_speed_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_speed_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_speed_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_speed_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_speed_main_main_default, 0);
	lv_style_set_text_color(&style_screen_speed_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_speed_main_main_default, &lv_font_Abel_regular_90);
	lv_style_set_text_letter_space(&style_screen_speed_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_speed_main_main_default, 0);
	lv_style_set_text_align(&style_screen_speed_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_speed_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_speed_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_speed_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_speed_main_main_default, 0);
	lv_obj_add_style(ui->screen_speed, &style_screen_speed_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_Gear
	ui->screen_Gear = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_Gear, 238, 316);
	lv_obj_set_size(ui->screen_Gear, 45, 68);
	lv_obj_set_scrollbar_mode(ui->screen_Gear, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_Gear, "N");
	lv_label_set_long_mode(ui->screen_Gear, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_gear_main_main_default
	static lv_style_t style_screen_gear_main_main_default;
	if (style_screen_gear_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_gear_main_main_default);
	else
		lv_style_init(&style_screen_gear_main_main_default);
	lv_style_set_radius(&style_screen_gear_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_gear_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_gear_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_gear_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_gear_main_main_default, 0);
	lv_style_set_text_color(&style_screen_gear_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_gear_main_main_default, &lv_font_Abel_regular_70);
	lv_style_set_text_letter_space(&style_screen_gear_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_gear_main_main_default, 0);
	lv_style_set_text_align(&style_screen_gear_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_gear_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_gear_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_gear_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_gear_main_main_default, 0);
	lv_obj_add_style(ui->screen_Gear, &style_screen_gear_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
#if 0        
	//Write codes screen_gas_gauge
	ui->screen_gas_gauge = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_gas_gauge, 828, 616);
	lv_obj_set_size(ui->screen_gas_gauge, 135, 57);
	lv_obj_set_scrollbar_mode(ui->screen_gas_gauge, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_gas_gauge_main_main_default
	static lv_style_t style_screen_gas_gauge_main_main_default;
	if (style_screen_gas_gauge_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_gas_gauge_main_main_default);
	else
		lv_style_init(&style_screen_gas_gauge_main_main_default);
	lv_style_set_img_recolor(&style_screen_gas_gauge_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_gas_gauge_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_gas_gauge_main_main_default, 255);
	lv_obj_add_style(ui->screen_gas_gauge, &style_screen_gas_gauge_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_gas_gauge, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_gas_gauge,&_gas_gauge_135x57);
	lv_img_set_pivot(ui->screen_gas_gauge, 0,0);
	lv_img_set_angle(ui->screen_gas_gauge, 0);
#endif
	//Write codes screen_odo
	ui->screen_odo = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_odo, 121, 636);
	lv_obj_set_size(ui->screen_odo, 178, 37);
	lv_obj_set_scrollbar_mode(ui->screen_odo, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_odo_main_main_default
	static lv_style_t style_screen_odo_main_main_default;
	if (style_screen_odo_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_odo_main_main_default);
	else
		lv_style_init(&style_screen_odo_main_main_default);
	lv_style_set_img_recolor(&style_screen_odo_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_odo_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_odo_main_main_default, 255);
	lv_obj_add_style(ui->screen_odo, &style_screen_odo_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_odo, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_odo,&_lichengshu_178x37);
	lv_img_set_pivot(ui->screen_odo, 0,0);
	lv_img_set_angle(ui->screen_odo, 0);

	//Write codes screen_trip
	ui->screen_trip = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_trip, 346, 636);
	lv_obj_set_size(ui->screen_trip, 200, 37);
	lv_obj_set_scrollbar_mode(ui->screen_trip, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_trip_main_main_default
	static lv_style_t style_screen_trip_main_main_default;
	if (style_screen_trip_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_trip_main_main_default);
	else
		lv_style_init(&style_screen_trip_main_main_default);
	lv_style_set_img_recolor(&style_screen_trip_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_trip_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_trip_main_main_default, 255);
	lv_obj_add_style(ui->screen_trip, &style_screen_trip_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_trip, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_trip,&_shengyu_200x37);
	lv_img_set_pivot(ui->screen_trip, 0,0);
	lv_img_set_angle(ui->screen_trip, 0);
#if 0
	//Write codes screen_bearing2
	ui->screen_bearing2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_bearing2, 569, 118);
	lv_obj_set_size(ui->screen_bearing2, 143, 107);
	lv_obj_set_scrollbar_mode(ui->screen_bearing2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_bearing2_main_main_default
	static lv_style_t style_screen_bearing2_main_main_default;
	if (style_screen_bearing2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_bearing2_main_main_default);
	else
		lv_style_init(&style_screen_bearing2_main_main_default);
	lv_style_set_img_recolor(&style_screen_bearing2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_bearing2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_bearing2_main_main_default, 255);
	lv_obj_add_style(ui->screen_bearing2, &style_screen_bearing2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_bearing2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_bearing2,&_bearing2_143x107);
	lv_img_set_pivot(ui->screen_bearing2, 0,0);
	lv_img_set_angle(ui->screen_bearing2, 0);
#endif
	//Write codes screen_compass
	ui->screen_compass = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_compass, 575, 122);
	lv_obj_set_size(ui->screen_compass, 110, 110);
	lv_obj_set_scrollbar_mode(ui->screen_compass, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_compass_main_main_default
	static lv_style_t style_screen_compass_main_main_default;
	if (style_screen_compass_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_compass_main_main_default);
	else
		lv_style_init(&style_screen_compass_main_main_default);
	lv_style_set_img_recolor(&style_screen_compass_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_compass_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_compass_main_main_default, 255);
	lv_obj_add_style(ui->screen_compass, &style_screen_compass_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_compass, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_compass,&_compass_110x110);
	lv_img_set_pivot(ui->screen_compass, 0,0);
	lv_img_set_angle(ui->screen_compass, 0);

	//Write codes screen_compass_pointer
	ui->screen_compass_pointer = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_compass_pointer, 623, 110);
	lv_obj_set_size(ui->screen_compass_pointer, 14, 12);
	lv_obj_set_scrollbar_mode(ui->screen_compass_pointer, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_compass_pointer_main_main_default
	static lv_style_t style_screen_compass_pointer_main_main_default;
	if (style_screen_compass_pointer_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_compass_pointer_main_main_default);
	else
		lv_style_init(&style_screen_compass_pointer_main_main_default);
	lv_style_set_img_recolor(&style_screen_compass_pointer_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_compass_pointer_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_compass_pointer_main_main_default, 255);
	lv_obj_add_style(ui->screen_compass_pointer, &style_screen_compass_pointer_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_compass_pointer, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_compass_pointer,&_compass_pointer_14x12);
	lv_img_set_pivot(ui->screen_compass_pointer, 7,67);
	lv_img_set_angle(ui->screen_compass_pointer, 0);
    
    //Write codes screen_tick1
	ui->screen_tick1 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick1, 255, 475);
	lv_obj_set_size(ui->screen_tick1, 9, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick1_main_main_default
	static lv_style_t style_screen_tick1_main_main_default;
	if (style_screen_tick1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick1_main_main_default);
	else
		lv_style_init(&style_screen_tick1_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick1_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick1, &style_screen_tick1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick1,&_tick1_9x20);
	lv_img_set_pivot(ui->screen_tick1, 0,0);
	lv_img_set_angle(ui->screen_tick1, 0);

	//Write codes screen_tick2
	ui->screen_tick2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick2, 245, 475);
	lv_obj_set_size(ui->screen_tick2, 9, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick2_main_main_default
	static lv_style_t style_screen_tick2_main_main_default;
	if (style_screen_tick2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick2_main_main_default);
	else
		lv_style_init(&style_screen_tick2_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick2_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick2, &style_screen_tick2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick2,&_tick2_9x20);
	lv_img_set_pivot(ui->screen_tick2, 0,0);
	lv_img_set_angle(ui->screen_tick2, 0);

	//Write codes screen_tick3
	ui->screen_tick3 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick3, 236, 474);
	lv_obj_set_size(ui->screen_tick3, 10, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick3_main_main_default
	static lv_style_t style_screen_tick3_main_main_default;
	if (style_screen_tick3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick3_main_main_default);
	else
		lv_style_init(&style_screen_tick3_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick3_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick3, &style_screen_tick3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick3,&_tick3_10x21);
	lv_img_set_pivot(ui->screen_tick3, 0,0);
	lv_img_set_angle(ui->screen_tick3, 0);

	//Write codes screen_tick4
	ui->screen_tick4 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick4, 226, 473);
	lv_obj_set_size(ui->screen_tick4, 11, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick4_main_main_default
	static lv_style_t style_screen_tick4_main_main_default;
	if (style_screen_tick4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick4_main_main_default);
	else
		lv_style_init(&style_screen_tick4_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick4_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick4, &style_screen_tick4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick4,&_tick4_11x21);
	lv_img_set_pivot(ui->screen_tick4, 0,0);
	lv_img_set_angle(ui->screen_tick4, 0);

	//Write codes screen_tick5
	ui->screen_tick5 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick5, 217, 471);
	lv_obj_set_size(ui->screen_tick5, 12, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick5_main_main_default
	static lv_style_t style_screen_tick5_main_main_default;
	if (style_screen_tick5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick5_main_main_default);
	else
		lv_style_init(&style_screen_tick5_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick5_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick5_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick5, &style_screen_tick5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick5,&_tick5_12x21);
	lv_img_set_pivot(ui->screen_tick5, 0,0);
	lv_img_set_angle(ui->screen_tick5, 0);

	//Write codes screen_tick6
	ui->screen_tick6 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick6, 207, 469);
	lv_obj_set_size(ui->screen_tick6, 13, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick6_main_main_default
	static lv_style_t style_screen_tick6_main_main_default;
	if (style_screen_tick6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick6_main_main_default);
	else
		lv_style_init(&style_screen_tick6_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick6_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick6, &style_screen_tick6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick6,&_tick6_13x21);
	lv_img_set_pivot(ui->screen_tick6, 0,0);
	lv_img_set_angle(ui->screen_tick6, 0);

	//Write codes screen_tick7
	ui->screen_tick7 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick7, 198, 466);
	lv_obj_set_size(ui->screen_tick7, 14, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick7, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick7_main_main_default
	static lv_style_t style_screen_tick7_main_main_default;
	if (style_screen_tick7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick7_main_main_default);
	else
		lv_style_init(&style_screen_tick7_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick7_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick7_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick7, &style_screen_tick7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick7, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick7,&_tick7_14x21);
	lv_img_set_pivot(ui->screen_tick7, 0,0);
	lv_img_set_angle(ui->screen_tick7, 0);

	//Write codes screen_tick8
	ui->screen_tick8 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick8, 189, 463);
	lv_obj_set_size(ui->screen_tick8, 15, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick8, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick8_main_main_default
	static lv_style_t style_screen_tick8_main_main_default;
	if (style_screen_tick8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick8_main_main_default);
	else
		lv_style_init(&style_screen_tick8_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick8_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick8_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick8, &style_screen_tick8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick8, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick8,&_tick8_15x21);
	lv_img_set_pivot(ui->screen_tick8, 0,0);
	lv_img_set_angle(ui->screen_tick8, 0);

	//Write codes screen_tick9
	ui->screen_tick9 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick9, 180, 460);
	lv_obj_set_size(ui->screen_tick9, 16, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick9, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick9_main_main_default
	static lv_style_t style_screen_tick9_main_main_default;
	if (style_screen_tick9_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick9_main_main_default);
	else
		lv_style_init(&style_screen_tick9_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick9_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick9_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick9, &style_screen_tick9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick9, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick9,&_tick9_16x21);
	lv_img_set_pivot(ui->screen_tick9, 0,0);
	lv_img_set_angle(ui->screen_tick9, 0);

	//Write codes screen_tick10
	ui->screen_tick10 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick10, 172, 456);
	lv_obj_set_size(ui->screen_tick10, 16, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick10, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick10_main_main_default
	static lv_style_t style_screen_tick10_main_main_default;
	if (style_screen_tick10_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick10_main_main_default);
	else
		lv_style_init(&style_screen_tick10_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick10_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick10_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick10_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick10, &style_screen_tick10_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick10, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick10,&_tick10_16x21);
	lv_img_set_pivot(ui->screen_tick10, 0,0);
	lv_img_set_angle(ui->screen_tick10, 0);

	//Write codes screen_tick11
	ui->screen_tick11 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick11, 163, 452);
	lv_obj_set_size(ui->screen_tick11, 17, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick11, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick11_main_main_default
	static lv_style_t style_screen_tick11_main_main_default;
	if (style_screen_tick11_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick11_main_main_default);
	else
		lv_style_init(&style_screen_tick11_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick11_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick11_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick11_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick11, &style_screen_tick11_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick11, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick11,&_tick11_17x20);
	lv_img_set_pivot(ui->screen_tick11, 0,0);
	lv_img_set_angle(ui->screen_tick11, 0);

	//Write codes screen_tick12
	ui->screen_tick12 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick12, 155, 447);
	lv_obj_set_size(ui->screen_tick12, 17, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick12, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick12_main_main_default
	static lv_style_t style_screen_tick12_main_main_default;
	if (style_screen_tick12_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick12_main_main_default);
	else
		lv_style_init(&style_screen_tick12_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick12_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick12_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick12_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick12, &style_screen_tick12_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick12, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick12,&_tick12_17x21);
	lv_img_set_pivot(ui->screen_tick12, 0,0);
	lv_img_set_angle(ui->screen_tick12, 0);

	//Write codes screen_tick13
	ui->screen_tick13 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick13, 147, 442);
	lv_obj_set_size(ui->screen_tick13, 18, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick13, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick13_main_main_default
	static lv_style_t style_screen_tick13_main_main_default;
	if (style_screen_tick13_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick13_main_main_default);
	else
		lv_style_init(&style_screen_tick13_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick13_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick13_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick13_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick13, &style_screen_tick13_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick13, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick13,&_tick13_18x20);
	lv_img_set_pivot(ui->screen_tick13, 0,0);
	lv_img_set_angle(ui->screen_tick13, 0);

	//Write codes screen_tick14
	ui->screen_tick14 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick14, 140, 436);
	lv_obj_set_size(ui->screen_tick14, 18, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick14, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick14_main_main_default
	static lv_style_t style_screen_tick14_main_main_default;
	if (style_screen_tick14_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick14_main_main_default);
	else
		lv_style_init(&style_screen_tick14_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick14_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick14_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick14_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick14, &style_screen_tick14_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick14, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick14,&_tick14_18x20);
	lv_img_set_pivot(ui->screen_tick14, 0,0);
	lv_img_set_angle(ui->screen_tick14, 0);

	//Write codes screen_tick15
	ui->screen_tick15 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick15, 133, 431);
	lv_obj_set_size(ui->screen_tick15, 19, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick15, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick15_main_main_default
	static lv_style_t style_screen_tick15_main_main_default;
	if (style_screen_tick15_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick15_main_main_default);
	else
		lv_style_init(&style_screen_tick15_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick15_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick15_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick15_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick15, &style_screen_tick15_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick15, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick15,&_tick15_19x19);
	lv_img_set_pivot(ui->screen_tick15, 0,0);
	lv_img_set_angle(ui->screen_tick15, 0);

	//Write codes screen_tick16
	ui->screen_tick16 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick16, 126, 425);
	lv_obj_set_size(ui->screen_tick16, 19, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick16, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick16_main_main_default
	static lv_style_t style_screen_tick16_main_main_default;
	if (style_screen_tick16_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick16_main_main_default);
	else
		lv_style_init(&style_screen_tick16_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick16_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick16_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick16_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick16, &style_screen_tick16_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick16, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick16,&_tick16_19x19);
	lv_img_set_pivot(ui->screen_tick16, 0,0);
	lv_img_set_angle(ui->screen_tick16, 0);

	//Write codes screen_tick17
	ui->screen_tick17 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick17, 119, 418);
	lv_obj_set_size(ui->screen_tick17, 20, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick17, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick17_main_main_default
	static lv_style_t style_screen_tick17_main_main_default;
	if (style_screen_tick17_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick17_main_main_default);
	else
		lv_style_init(&style_screen_tick17_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick17_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick17_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick17_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick17, &style_screen_tick17_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick17, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick17,&_tick17_20x19);
	lv_img_set_pivot(ui->screen_tick17, 0,0);
	lv_img_set_angle(ui->screen_tick17, 0);

	//Write codes screen_tick18
	ui->screen_tick18 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick18, 113, 411);
	lv_obj_set_size(ui->screen_tick18, 20, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick18, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick18_main_main_default
	static lv_style_t style_screen_tick18_main_main_default;
	if (style_screen_tick18_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick18_main_main_default);
	else
		lv_style_init(&style_screen_tick18_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick18_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick18_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick18_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick18, &style_screen_tick18_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick18, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick18,&_tick18_20x19);
	lv_img_set_pivot(ui->screen_tick18, 0,0);
	lv_img_set_angle(ui->screen_tick18, 0);

	//Write codes screen_tick19
	ui->screen_tick19 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick19, 107, 405);
	lv_obj_set_size(ui->screen_tick19, 21, 17);
	lv_obj_set_scrollbar_mode(ui->screen_tick19, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick19_main_main_default
	static lv_style_t style_screen_tick19_main_main_default;
	if (style_screen_tick19_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick19_main_main_default);
	else
		lv_style_init(&style_screen_tick19_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick19_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick19_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick19_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick19, &style_screen_tick19_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick19, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick19,&_tick19_21x17);
	lv_img_set_pivot(ui->screen_tick19, 0,0);
	lv_img_set_angle(ui->screen_tick19, 0);

	//Write codes screen_tick20
	ui->screen_tick20 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick20, 102, 397);
	lv_obj_set_size(ui->screen_tick20, 21, 17);
	lv_obj_set_scrollbar_mode(ui->screen_tick20, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick20_main_main_default
	static lv_style_t style_screen_tick20_main_main_default;
	if (style_screen_tick20_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick20_main_main_default);
	else
		lv_style_init(&style_screen_tick20_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick20_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick20_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick20_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick20, &style_screen_tick20_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick20, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick20,&_tick20_21x17);
	lv_img_set_pivot(ui->screen_tick20, 0,0);
	lv_img_set_angle(ui->screen_tick20, 0);

	//Write codes screen_tick21
	ui->screen_tick21 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick21, 97, 390);
	lv_obj_set_size(ui->screen_tick21, 21, 16);
	lv_obj_set_scrollbar_mode(ui->screen_tick21, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick21_main_main_default
	static lv_style_t style_screen_tick21_main_main_default;
	if (style_screen_tick21_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick21_main_main_default);
	else
		lv_style_init(&style_screen_tick21_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick21_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick21_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick21_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick21, &style_screen_tick21_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick21, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick21,&_tick21_21x16);
	lv_img_set_pivot(ui->screen_tick21, 0,0);
	lv_img_set_angle(ui->screen_tick21, 0);

	//Write codes screen_tick22
	ui->screen_tick22 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick22, 93, 382);
	lv_obj_set_size(ui->screen_tick22, 21, 16);
	lv_obj_set_scrollbar_mode(ui->screen_tick22, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick22_main_main_default
	static lv_style_t style_screen_tick22_main_main_default;
	if (style_screen_tick22_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick22_main_main_default);
	else
		lv_style_init(&style_screen_tick22_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick22_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick22_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick22_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick22, &style_screen_tick22_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick22, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick22,&_tick22_21x16);
	lv_img_set_pivot(ui->screen_tick22, 0,0);
	lv_img_set_angle(ui->screen_tick22, 0);

	//Write codes screen_tick23
	ui->screen_tick23 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick23, 89, 374);
	lv_obj_set_size(ui->screen_tick23, 21, 15);
	lv_obj_set_scrollbar_mode(ui->screen_tick23, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick23_main_main_default
	static lv_style_t style_screen_tick23_main_main_default;
	if (style_screen_tick23_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick23_main_main_default);
	else
		lv_style_init(&style_screen_tick23_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick23_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick23_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick23_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick23, &style_screen_tick23_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick23, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick23,&_tick23_21x15);
	lv_img_set_pivot(ui->screen_tick23, 0,0);
	lv_img_set_angle(ui->screen_tick23, 0);

	//Write codes screen_tick24
	ui->screen_tick24 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick24, 85, 366);
	lv_obj_set_size(ui->screen_tick24, 21, 14);
	lv_obj_set_scrollbar_mode(ui->screen_tick24, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick24_main_main_default
	static lv_style_t style_screen_tick24_main_main_default;
	if (style_screen_tick24_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick24_main_main_default);
	else
		lv_style_init(&style_screen_tick24_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick24_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick24_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick24_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick24, &style_screen_tick24_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick24, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick24,&_tick24_21x14);
	lv_img_set_pivot(ui->screen_tick24, 0,0);
	lv_img_set_angle(ui->screen_tick24, 0);

	//Write codes screen_tick25
	ui->screen_tick25 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick25, 82, 358);
	lv_obj_set_size(ui->screen_tick25, 21, 13);
	lv_obj_set_scrollbar_mode(ui->screen_tick25, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick25_main_main_default
	static lv_style_t style_screen_tick25_main_main_default;
	if (style_screen_tick25_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick25_main_main_default);
	else
		lv_style_init(&style_screen_tick25_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick25_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick25_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick25_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick25, &style_screen_tick25_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick25, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick25,&_tick25_21x13);
	lv_img_set_pivot(ui->screen_tick25, 0,0);
	lv_img_set_angle(ui->screen_tick25, 0);

	//Write codes screen_tick26
	ui->screen_tick26 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick26, 80, 350);
	lv_obj_set_size(ui->screen_tick26, 21, 12);
	lv_obj_set_scrollbar_mode(ui->screen_tick26, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick26_main_main_default
	static lv_style_t style_screen_tick26_main_main_default;
	if (style_screen_tick26_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick26_main_main_default);
	else
		lv_style_init(&style_screen_tick26_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick26_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick26_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick26_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick26, &style_screen_tick26_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick26, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick26,&_tick26_21x12);
	lv_img_set_pivot(ui->screen_tick26, 0,0);
	lv_img_set_angle(ui->screen_tick26, 0);

	//Write codes screen_tick27
	ui->screen_tick27 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick27, 78, 342);
	lv_obj_set_size(ui->screen_tick27, 21, 12);
	lv_obj_set_scrollbar_mode(ui->screen_tick27, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick27_main_main_default
	static lv_style_t style_screen_tick27_main_main_default;
	if (style_screen_tick27_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick27_main_main_default);
	else
		lv_style_init(&style_screen_tick27_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick27_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick27_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick27_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick27, &style_screen_tick27_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick27, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick27,&_tick27_21x12);
	lv_img_set_pivot(ui->screen_tick27, 0,0);
	lv_img_set_angle(ui->screen_tick27, 0);

	//Write codes screen_tick28
	ui->screen_tick28 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick28, 76, 334);
	lv_obj_set_size(ui->screen_tick28, 21, 10);
	lv_obj_set_scrollbar_mode(ui->screen_tick28, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick28_main_main_default
	static lv_style_t style_screen_tick28_main_main_default;
	if (style_screen_tick28_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick28_main_main_default);
	else
		lv_style_init(&style_screen_tick28_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick28_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick28_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick28_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick28, &style_screen_tick28_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick28, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick28,&_tick28_21x10);
	lv_img_set_pivot(ui->screen_tick28, 0,0);
	lv_img_set_angle(ui->screen_tick28, 0);

	//Write codes screen_tick29
	ui->screen_tick29 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick29, 75, 325);
	lv_obj_set_size(ui->screen_tick29, 21, 10);
	lv_obj_set_scrollbar_mode(ui->screen_tick29, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick29_main_main_default
	static lv_style_t style_screen_tick29_main_main_default;
	if (style_screen_tick29_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick29_main_main_default);
	else
		lv_style_init(&style_screen_tick29_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick29_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick29_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick29_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick29, &style_screen_tick29_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick29, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick29,&_tick29_21x10);
	lv_img_set_pivot(ui->screen_tick29, 0,0);
	lv_img_set_angle(ui->screen_tick29, 0);

	//Write codes screen_tick30
	ui->screen_tick30 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick30, 75, 316);
	lv_obj_set_size(ui->screen_tick30, 20, 9);
	lv_obj_set_scrollbar_mode(ui->screen_tick30, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick30_main_main_default
	static lv_style_t style_screen_tick30_main_main_default;
	if (style_screen_tick30_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick30_main_main_default);
	else
		lv_style_init(&style_screen_tick30_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick30_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick30_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick30_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick30, &style_screen_tick30_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick30, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick30,&_tick30_20x9);
	lv_img_set_pivot(ui->screen_tick30, 0,0);
	lv_img_set_angle(ui->screen_tick30, 0);

	//Write codes screen_tick31
	ui->screen_tick31 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick31, 75, 307);
	lv_obj_set_size(ui->screen_tick31, 19, 9);
	lv_obj_set_scrollbar_mode(ui->screen_tick31, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick31_main_main_default
	static lv_style_t style_screen_tick31_main_main_default;
	if (style_screen_tick31_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick31_main_main_default);
	else
		lv_style_init(&style_screen_tick31_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick31_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick31_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick31_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick31, &style_screen_tick31_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick31, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick31,&_tick31_19x9);
	lv_img_set_pivot(ui->screen_tick31, 0,0);
	lv_img_set_angle(ui->screen_tick31, 0);

	//Write codes screen_tick32
	ui->screen_tick32 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick32, 75, 297);
	lv_obj_set_size(ui->screen_tick32, 20, 9);
	lv_obj_set_scrollbar_mode(ui->screen_tick32, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick32_main_main_default
	static lv_style_t style_screen_tick32_main_main_default;
	if (style_screen_tick32_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick32_main_main_default);
	else
		lv_style_init(&style_screen_tick32_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick32_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick32_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick32_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick32, &style_screen_tick32_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick32, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick32,&_tick32_20x9);
	lv_img_set_pivot(ui->screen_tick32, 0,0);
	lv_img_set_angle(ui->screen_tick32, 0);

	//Write codes screen_tick33
	ui->screen_tick33 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick33, 75, 288);
	lv_obj_set_size(ui->screen_tick33, 21, 10);
	lv_obj_set_scrollbar_mode(ui->screen_tick33, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick33_main_main_default
	static lv_style_t style_screen_tick33_main_main_default;
	if (style_screen_tick33_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick33_main_main_default);
	else
		lv_style_init(&style_screen_tick33_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick33_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick33_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick33_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick33, &style_screen_tick33_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick33, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick33,&_tick33_21x10);
	lv_img_set_pivot(ui->screen_tick33, 0,0);
	lv_img_set_angle(ui->screen_tick33, 0);

	//Write codes screen_tick34
	ui->screen_tick34 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick34, 76, 278);
	lv_obj_set_size(ui->screen_tick34, 21, 11);
	lv_obj_set_scrollbar_mode(ui->screen_tick34, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick34_main_main_default
	static lv_style_t style_screen_tick34_main_main_default;
	if (style_screen_tick34_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick34_main_main_default);
	else
		lv_style_init(&style_screen_tick34_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick34_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick34_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick34_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick34, &style_screen_tick34_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick34, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick34,&_tick34_21x11);
	lv_img_set_pivot(ui->screen_tick34, 0,0);
	lv_img_set_angle(ui->screen_tick34, 0);

	//Write codes screen_tick35
	ui->screen_tick35 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick35, 78, 269);
	lv_obj_set_size(ui->screen_tick35, 21, 12);
	lv_obj_set_scrollbar_mode(ui->screen_tick35, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick35_main_main_default
	static lv_style_t style_screen_tick35_main_main_default;
	if (style_screen_tick35_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick35_main_main_default);
	else
		lv_style_init(&style_screen_tick35_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick35_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick35_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick35_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick35, &style_screen_tick35_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick35, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick35,&_tick35_21x12);
	lv_img_set_pivot(ui->screen_tick35, 0,0);
	lv_img_set_angle(ui->screen_tick35, 0);

	//Write codes screen_tick36
	ui->screen_tick36 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick36, 80, 259);
	lv_obj_set_size(ui->screen_tick36, 21, 13);
	lv_obj_set_scrollbar_mode(ui->screen_tick36, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick36_main_main_default
	static lv_style_t style_screen_tick36_main_main_default;
	if (style_screen_tick36_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick36_main_main_default);
	else
		lv_style_init(&style_screen_tick36_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick36_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick36_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick36_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick36, &style_screen_tick36_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick36, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick36,&_tick36_21x13);
	lv_img_set_pivot(ui->screen_tick36, 0,0);
	lv_img_set_angle(ui->screen_tick36, 0);

	//Write codes screen_tick37
	ui->screen_tick37 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick37, 82, 250);
	lv_obj_set_size(ui->screen_tick37, 21, 14);
	lv_obj_set_scrollbar_mode(ui->screen_tick37, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick37_main_main_default
	static lv_style_t style_screen_tick37_main_main_default;
	if (style_screen_tick37_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick37_main_main_default);
	else
		lv_style_init(&style_screen_tick37_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick37_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick37_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick37_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick37, &style_screen_tick37_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick37, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick37,&_tick37_21x14);
	lv_img_set_pivot(ui->screen_tick37, 0,0);
	lv_img_set_angle(ui->screen_tick37, 0);

	//Write codes screen_tick38
	ui->screen_tick38 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick38, 85, 241);
	lv_obj_set_size(ui->screen_tick38, 21, 15);
	lv_obj_set_scrollbar_mode(ui->screen_tick38, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick38_main_main_default
	static lv_style_t style_screen_tick38_main_main_default;
	if (style_screen_tick38_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick38_main_main_default);
	else
		lv_style_init(&style_screen_tick38_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick38_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick38_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick38_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick38, &style_screen_tick38_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick38, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick38,&_tick38_21x15);
	lv_img_set_pivot(ui->screen_tick38, 0,0);
	lv_img_set_angle(ui->screen_tick38, 0);

	//Write codes screen_tick39
	ui->screen_tick39 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick39, 89, 232);
	lv_obj_set_size(ui->screen_tick39, 21, 16);
	lv_obj_set_scrollbar_mode(ui->screen_tick39, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick39_main_main_default
	static lv_style_t style_screen_tick39_main_main_default;
	if (style_screen_tick39_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick39_main_main_default);
	else
		lv_style_init(&style_screen_tick39_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick39_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick39_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick39_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick39, &style_screen_tick39_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick39, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick39,&_tick39_21x16);
	lv_img_set_pivot(ui->screen_tick39, 0,0);
	lv_img_set_angle(ui->screen_tick39, 0);

	//Write codes screen_tick40
	ui->screen_tick40 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick40, 93, 224);
	lv_obj_set_size(ui->screen_tick40, 21, 16);
	lv_obj_set_scrollbar_mode(ui->screen_tick40, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick40_main_main_default
	static lv_style_t style_screen_tick40_main_main_default;
	if (style_screen_tick40_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick40_main_main_default);
	else
		lv_style_init(&style_screen_tick40_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick40_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick40_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick40_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick40, &style_screen_tick40_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick40, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick40,&_tick40_21x16);
	lv_img_set_pivot(ui->screen_tick40, 0,0);
	lv_img_set_angle(ui->screen_tick40, 0);

	//Write codes screen_tick41
	ui->screen_tick41 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick41, 97, 215);
	lv_obj_set_size(ui->screen_tick41, 21, 17);
	lv_obj_set_scrollbar_mode(ui->screen_tick41, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick41_main_main_default
	static lv_style_t style_screen_tick41_main_main_default;
	if (style_screen_tick41_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick41_main_main_default);
	else
		lv_style_init(&style_screen_tick41_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick41_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick41_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick41_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick41, &style_screen_tick41_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick41, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick41,&_tick41_21x17);
	lv_img_set_pivot(ui->screen_tick41, 0,0);
	lv_img_set_angle(ui->screen_tick41, 0);

	//Write codes screen_tick42
	ui->screen_tick42 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick42, 102, 207);
	lv_obj_set_size(ui->screen_tick42, 21, 17);
	lv_obj_set_scrollbar_mode(ui->screen_tick42, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick42_main_main_default
	static lv_style_t style_screen_tick42_main_main_default;
	if (style_screen_tick42_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick42_main_main_default);
	else
		lv_style_init(&style_screen_tick42_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick42_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick42_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick42_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick42, &style_screen_tick42_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick42, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick42,&_tick42_21x17);
	lv_img_set_pivot(ui->screen_tick42, 0,0);
	lv_img_set_angle(ui->screen_tick42, 0);

	//Write codes screen_tick43
	ui->screen_tick43 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick43, 107, 199);
	lv_obj_set_size(ui->screen_tick43, 21, 18);
	lv_obj_set_scrollbar_mode(ui->screen_tick43, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick43_main_main_default
	static lv_style_t style_screen_tick43_main_main_default;
	if (style_screen_tick43_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick43_main_main_default);
	else
		lv_style_init(&style_screen_tick43_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick43_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick43_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick43_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick43, &style_screen_tick43_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick43, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick43,&_tick43_21x18);
	lv_img_set_pivot(ui->screen_tick43, 0,0);
	lv_img_set_angle(ui->screen_tick43, 0);

	//Write codes screen_tick44
	ui->screen_tick44 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick44, 113, 192);
	lv_obj_set_size(ui->screen_tick44, 20, 18);
	lv_obj_set_scrollbar_mode(ui->screen_tick44, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick44_main_main_default
	static lv_style_t style_screen_tick44_main_main_default;
	if (style_screen_tick44_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick44_main_main_default);
	else
		lv_style_init(&style_screen_tick44_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick44_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick44_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick44_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick44, &style_screen_tick44_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick44, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick44,&_tick44_20x18);
	lv_img_set_pivot(ui->screen_tick44, 0,0);
	lv_img_set_angle(ui->screen_tick44, 0);

	//Write codes screen_tick45
	ui->screen_tick45 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick45, 119, 185);
	lv_obj_set_size(ui->screen_tick45, 20, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick45, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick45_main_main_default
	static lv_style_t style_screen_tick45_main_main_default;
	if (style_screen_tick45_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick45_main_main_default);
	else
		lv_style_init(&style_screen_tick45_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick45_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick45_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick45_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick45, &style_screen_tick45_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick45, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick45,&_tick45_20x19);
	lv_img_set_pivot(ui->screen_tick45, 0,0);
	lv_img_set_angle(ui->screen_tick45, 0);

	//Write codes screen_tick46
	ui->screen_tick46 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick46, 126, 178);
	lv_obj_set_size(ui->screen_tick46, 19, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick46, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick46_main_main_default
	static lv_style_t style_screen_tick46_main_main_default;
	if (style_screen_tick46_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick46_main_main_default);
	else
		lv_style_init(&style_screen_tick46_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick46_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick46_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick46_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick46, &style_screen_tick46_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick46, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick46,&_tick46_19x19);
	lv_img_set_pivot(ui->screen_tick46, 0,0);
	lv_img_set_angle(ui->screen_tick46, 0);

	//Write codes screen_tick47
	ui->screen_tick47 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick47, 133, 171);
	lv_obj_set_size(ui->screen_tick47, 19, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick47, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick47_main_main_default
	static lv_style_t style_screen_tick47_main_main_default;
	if (style_screen_tick47_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick47_main_main_default);
	else
		lv_style_init(&style_screen_tick47_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick47_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick47_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick47_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick47, &style_screen_tick47_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick47, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick47,&_tick47_19x20);
	lv_img_set_pivot(ui->screen_tick47, 0,0);
	lv_img_set_angle(ui->screen_tick47, 0);

	//Write codes screen_tick48
	ui->screen_tick48 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick48, 140, 165);
	lv_obj_set_size(ui->screen_tick48, 18, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick48, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick48_main_main_default
	static lv_style_t style_screen_tick48_main_main_default;
	if (style_screen_tick48_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick48_main_main_default);
	else
		lv_style_init(&style_screen_tick48_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick48_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick48_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick48_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick48, &style_screen_tick48_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick48, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick48,&_tick48_18x20);
	lv_img_set_pivot(ui->screen_tick48, 0,0);
	lv_img_set_angle(ui->screen_tick48, 0);

	//Write codes screen_tick49
	ui->screen_tick49 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick49, 147, 159);
	lv_obj_set_size(ui->screen_tick49, 18, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick49, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick49_main_main_default
	static lv_style_t style_screen_tick49_main_main_default;
	if (style_screen_tick49_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick49_main_main_default);
	else
		lv_style_init(&style_screen_tick49_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick49_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick49_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick49_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick49, &style_screen_tick49_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick49, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick49,&_tick49_18x21);
	lv_img_set_pivot(ui->screen_tick49, 0,0);
	lv_img_set_angle(ui->screen_tick49, 0);

	//Write codes screen_tick50
	ui->screen_tick50 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick50, 155, 154);
	lv_obj_set_size(ui->screen_tick50, 17, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick50, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick50_main_main_default
	static lv_style_t style_screen_tick50_main_main_default;
	if (style_screen_tick50_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick50_main_main_default);
	else
		lv_style_init(&style_screen_tick50_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick50_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick50_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick50_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick50, &style_screen_tick50_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick50, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick50,&_tick50_17x21);
	lv_img_set_pivot(ui->screen_tick50, 0,0);
	lv_img_set_angle(ui->screen_tick50, 0);

	//Write codes screen_tick51
	ui->screen_tick51 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick51, 163, 149);
	lv_obj_set_size(ui->screen_tick51, 17, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick51, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick51_main_main_default
	static lv_style_t style_screen_tick51_main_main_default;
	if (style_screen_tick51_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick51_main_main_default);
	else
		lv_style_init(&style_screen_tick51_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick51_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick51_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick51_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick51, &style_screen_tick51_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick51, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick51,&_tick51_17x21);
	lv_img_set_pivot(ui->screen_tick51, 0,0);
	lv_img_set_angle(ui->screen_tick51, 0);

	//Write codes screen_tick52
	ui->screen_tick52 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick52, 172, 145);
	lv_obj_set_size(ui->screen_tick52, 16, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick52, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick52_main_main_default
	static lv_style_t style_screen_tick52_main_main_default;
	if (style_screen_tick52_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick52_main_main_default);
	else
		lv_style_init(&style_screen_tick52_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick52_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick52_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick52_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick52, &style_screen_tick52_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick52, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick52,&_tick52_16x21);
	lv_img_set_pivot(ui->screen_tick52, 0,0);
	lv_img_set_angle(ui->screen_tick52, 0);

	//Write codes screen_tick53
	ui->screen_tick53 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick53, 180, 141);
	lv_obj_set_size(ui->screen_tick53, 16, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick53, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick53_main_main_default
	static lv_style_t style_screen_tick53_main_main_default;
	if (style_screen_tick53_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick53_main_main_default);
	else
		lv_style_init(&style_screen_tick53_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick53_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick53_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick53_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick53, &style_screen_tick53_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick53, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick53,&_tick53_16x21);
	lv_img_set_pivot(ui->screen_tick53, 0,0);
	lv_img_set_angle(ui->screen_tick53, 0);

	//Write codes screen_tick54
	ui->screen_tick54 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick54, 189, 137);
	lv_obj_set_size(ui->screen_tick54, 15, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick54, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick54_main_main_default
	static lv_style_t style_screen_tick54_main_main_default;
	if (style_screen_tick54_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick54_main_main_default);
	else
		lv_style_init(&style_screen_tick54_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick54_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick54_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick54_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick54, &style_screen_tick54_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick54, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick54,&_tick54_15x21);
	lv_img_set_pivot(ui->screen_tick54, 0,0);
	lv_img_set_angle(ui->screen_tick54, 0);

	//Write codes screen_tick55
	ui->screen_tick55 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick55, 198, 134);
	lv_obj_set_size(ui->screen_tick55, 14, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick55, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick55_main_main_default
	static lv_style_t style_screen_tick55_main_main_default;
	if (style_screen_tick55_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick55_main_main_default);
	else
		lv_style_init(&style_screen_tick55_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick55_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick55_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick55_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick55, &style_screen_tick55_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick55, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick55,&_tick55_14x21);
	lv_img_set_pivot(ui->screen_tick55, 0,0);
	lv_img_set_angle(ui->screen_tick55, 0);

	//Write codes screen_tick56
	ui->screen_tick56 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick56, 207, 132);
	lv_obj_set_size(ui->screen_tick56, 13, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick56, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick56_main_main_default
	static lv_style_t style_screen_tick56_main_main_default;
	if (style_screen_tick56_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick56_main_main_default);
	else
		lv_style_init(&style_screen_tick56_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick56_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick56_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick56_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick56, &style_screen_tick56_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick56, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick56,&_tick56_13x21);
	lv_img_set_pivot(ui->screen_tick56, 0,0);
	lv_img_set_angle(ui->screen_tick56, 0);

	//Write codes screen_tick57
	ui->screen_tick57 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick57, 217, 130);
	lv_obj_set_size(ui->screen_tick57, 12, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick57, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick57_main_main_default
	static lv_style_t style_screen_tick57_main_main_default;
	if (style_screen_tick57_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick57_main_main_default);
	else
		lv_style_init(&style_screen_tick57_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick57_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick57_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick57_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick57, &style_screen_tick57_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick57, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick57,&_tick57_12x21);
	lv_img_set_pivot(ui->screen_tick57, 0,0);
	lv_img_set_angle(ui->screen_tick57, 0);

	//Write codes screen_tick58
	ui->screen_tick58 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick58, 226, 128);
	lv_obj_set_size(ui->screen_tick58, 11, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick58, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick58_main_main_default
	static lv_style_t style_screen_tick58_main_main_default;
	if (style_screen_tick58_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick58_main_main_default);
	else
		lv_style_init(&style_screen_tick58_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick58_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick58_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick58_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick58, &style_screen_tick58_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick58, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick58,&_tick58_11x21);
	lv_img_set_pivot(ui->screen_tick58, 0,0);
	lv_img_set_angle(ui->screen_tick58, 0);

	//Write codes screen_tick59
	ui->screen_tick59 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick59, 236, 127);
	lv_obj_set_size(ui->screen_tick59, 10, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick59, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick59_main_main_default
	static lv_style_t style_screen_tick59_main_main_default;
	if (style_screen_tick59_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick59_main_main_default);
	else
		lv_style_init(&style_screen_tick59_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick59_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick59_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick59_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick59, &style_screen_tick59_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick59, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick59,&_tick59_10x21);
	lv_img_set_pivot(ui->screen_tick59, 0,0);
	lv_img_set_angle(ui->screen_tick59, 0);

	//Write codes screen_tick60
	ui->screen_tick60 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick60, 245, 127);
	lv_obj_set_size(ui->screen_tick60, 9, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick60, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick60_main_main_default
	static lv_style_t style_screen_tick60_main_main_default;
	if (style_screen_tick60_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick60_main_main_default);
	else
		lv_style_init(&style_screen_tick60_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick60_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick60_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick60_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick60, &style_screen_tick60_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick60, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick60,&_tick60_9x20);
	lv_img_set_pivot(ui->screen_tick60, 0,0);
	lv_img_set_angle(ui->screen_tick60, 0);

	//Write codes screen_tick61
	ui->screen_tick61 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick61, 255, 127);
	lv_obj_set_size(ui->screen_tick61, 9, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick61, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick61_main_main_default
	static lv_style_t style_screen_tick61_main_main_default;
	if (style_screen_tick61_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick61_main_main_default);
	else
		lv_style_init(&style_screen_tick61_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick61_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick61_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick61_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick61, &style_screen_tick61_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick61, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick61,&_tick61_9x19);
	lv_img_set_pivot(ui->screen_tick61, 0,0);
	lv_img_set_angle(ui->screen_tick61, 0);

	//Write codes screen_tick62
	ui->screen_tick62 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick62, 264, 127);
	lv_obj_set_size(ui->screen_tick62, 9, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick62, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick62_main_main_default
	static lv_style_t style_screen_tick62_main_main_default;
	if (style_screen_tick62_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick62_main_main_default);
	else
		lv_style_init(&style_screen_tick62_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick62_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick62_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick62_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick62, &style_screen_tick62_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick62, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick62,&_tick62_9x20);
	lv_img_set_pivot(ui->screen_tick62, 0,0);
	lv_img_set_angle(ui->screen_tick62, 0);

	//Write codes screen_tick63
	ui->screen_tick63 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick63, 273, 127);
	lv_obj_set_size(ui->screen_tick63, 10, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick63, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick63_main_main_default
	static lv_style_t style_screen_tick63_main_main_default;
	if (style_screen_tick63_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick63_main_main_default);
	else
		lv_style_init(&style_screen_tick63_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick63_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick63_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick63_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick63, &style_screen_tick63_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick63, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick63,&_tick63_10x21);
	lv_img_set_pivot(ui->screen_tick63, 0,0);
	lv_img_set_angle(ui->screen_tick63, 0);

	//Write codes screen_tick64
	ui->screen_tick64 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick64, 282, 128);
	lv_obj_set_size(ui->screen_tick64, 10, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick64, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick64_main_main_default
	static lv_style_t style_screen_tick64_main_main_default;
	if (style_screen_tick64_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick64_main_main_default);
	else
		lv_style_init(&style_screen_tick64_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick64_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick64_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick64_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick64, &style_screen_tick64_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick64, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick64,&_tick64_10x21);
	lv_img_set_pivot(ui->screen_tick64, 0,0);
	lv_img_set_angle(ui->screen_tick64, 0);

	//Write codes screen_tick65
	ui->screen_tick65 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick65, 290, 130);
	lv_obj_set_size(ui->screen_tick65, 12, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick65, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick65_main_main_default
	static lv_style_t style_screen_tick65_main_main_default;
	if (style_screen_tick65_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick65_main_main_default);
	else
		lv_style_init(&style_screen_tick65_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick65_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick65_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick65_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick65, &style_screen_tick65_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick65, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick65,&_tick65_12x21);
	lv_img_set_pivot(ui->screen_tick65, 0,0);
	lv_img_set_angle(ui->screen_tick65, 0);

	//Write codes screen_tick66
	ui->screen_tick66 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick66, 299, 132);
	lv_obj_set_size(ui->screen_tick66, 12, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick66, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick66_main_main_default
	static lv_style_t style_screen_tick66_main_main_default;
	if (style_screen_tick66_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick66_main_main_default);
	else
		lv_style_init(&style_screen_tick66_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick66_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick66_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick66_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick66, &style_screen_tick66_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick66, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick66,&_tick66_12x21);
	lv_img_set_pivot(ui->screen_tick66, 0,0);
	lv_img_set_angle(ui->screen_tick66, 0);

	//Write codes screen_tick67
	ui->screen_tick67 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick67, 307, 134);
	lv_obj_set_size(ui->screen_tick67, 13, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick67, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick67_main_main_default
	static lv_style_t style_screen_tick67_main_main_default;
	if (style_screen_tick67_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick67_main_main_default);
	else
		lv_style_init(&style_screen_tick67_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick67_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick67_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick67_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick67, &style_screen_tick67_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick67, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick67,&_tick67_13x21);
	lv_img_set_pivot(ui->screen_tick67, 0,0);
	lv_img_set_angle(ui->screen_tick67, 0);

	//Write codes screen_tick68
	ui->screen_tick68 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick68, 315, 137);
	lv_obj_set_size(ui->screen_tick68, 14, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick68, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick68_main_main_default
	static lv_style_t style_screen_tick68_main_main_default;
	if (style_screen_tick68_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick68_main_main_default);
	else
		lv_style_init(&style_screen_tick68_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick68_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick68_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick68_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick68, &style_screen_tick68_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick68, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick68,&_tick68_14x21);
	lv_img_set_pivot(ui->screen_tick68, 0,0);
	lv_img_set_angle(ui->screen_tick68, 0);

	//Write codes screen_tick69
	ui->screen_tick69 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick69, 323, 141);
	lv_obj_set_size(ui->screen_tick69, 15, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick69, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick69_main_main_default
	static lv_style_t style_screen_tick69_main_main_default;
	if (style_screen_tick69_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick69_main_main_default);
	else
		lv_style_init(&style_screen_tick69_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick69_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick69_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick69_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick69, &style_screen_tick69_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick69, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick69,&_tick69_15x21);
	lv_img_set_pivot(ui->screen_tick69, 0,0);
	lv_img_set_angle(ui->screen_tick69, 0);

	//Write codes screen_tick70
	ui->screen_tick70 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick70, 331, 145);
	lv_obj_set_size(ui->screen_tick70, 16, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick70, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick70_main_main_default
	static lv_style_t style_screen_tick70_main_main_default;
	if (style_screen_tick70_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick70_main_main_default);
	else
		lv_style_init(&style_screen_tick70_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick70_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick70_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick70_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick70, &style_screen_tick70_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick70, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick70,&_tick70_16x21);
	lv_img_set_pivot(ui->screen_tick70, 0,0);
	lv_img_set_angle(ui->screen_tick70, 0);

	//Write codes screen_tick71
	ui->screen_tick71 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick71, 339, 149);
	lv_obj_set_size(ui->screen_tick71, 16, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick71, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick71_main_main_default
	static lv_style_t style_screen_tick71_main_main_default;
	if (style_screen_tick71_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick71_main_main_default);
	else
		lv_style_init(&style_screen_tick71_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick71_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick71_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick71_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick71, &style_screen_tick71_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick71, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick71,&_tick71_16x21);
	lv_img_set_pivot(ui->screen_tick71, 0,0);
	lv_img_set_angle(ui->screen_tick71, 0);

	//Write codes screen_tick72
	ui->screen_tick72 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick72, 346, 154);
	lv_obj_set_size(ui->screen_tick72, 17, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick72, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick72_main_main_default
	static lv_style_t style_screen_tick72_main_main_default;
	if (style_screen_tick72_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick72_main_main_default);
	else
		lv_style_init(&style_screen_tick72_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick72_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick72_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick72_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick72, &style_screen_tick72_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick72, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick72,&_tick72_17x21);
	lv_img_set_pivot(ui->screen_tick72, 0,0);
	lv_img_set_angle(ui->screen_tick72, 0);

	//Write codes screen_tick73
	ui->screen_tick73 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick73, 354, 159);
	lv_obj_set_size(ui->screen_tick73, 17, 21);
	lv_obj_set_scrollbar_mode(ui->screen_tick73, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick73_main_main_default
	static lv_style_t style_screen_tick73_main_main_default;
	if (style_screen_tick73_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick73_main_main_default);
	else
		lv_style_init(&style_screen_tick73_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick73_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick73_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick73_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick73, &style_screen_tick73_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick73, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick73,&_tick73_17x21);
	lv_img_set_pivot(ui->screen_tick73, 0,0);
	lv_img_set_angle(ui->screen_tick73, 0);

	//Write codes screen_tick74
	ui->screen_tick74 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick74, 360, 165);
	lv_obj_set_size(ui->screen_tick74, 19, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick74, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick74_main_main_default
	static lv_style_t style_screen_tick74_main_main_default;
	if (style_screen_tick74_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick74_main_main_default);
	else
		lv_style_init(&style_screen_tick74_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick74_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick74_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick74_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick74, &style_screen_tick74_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick74, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick74,&_tick74_19x20);
	lv_img_set_pivot(ui->screen_tick74, 0,0);
	lv_img_set_angle(ui->screen_tick74, 0);

	//Write codes screen_tick75
	ui->screen_tick75 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick75, 367, 171);
	lv_obj_set_size(ui->screen_tick75, 19, 20);
	lv_obj_set_scrollbar_mode(ui->screen_tick75, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick75_main_main_default
	static lv_style_t style_screen_tick75_main_main_default;
	if (style_screen_tick75_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick75_main_main_default);
	else
		lv_style_init(&style_screen_tick75_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick75_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick75_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick75_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick75, &style_screen_tick75_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick75, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick75,&_tick75_19x20);
	lv_img_set_pivot(ui->screen_tick75, 0,0);
	lv_img_set_angle(ui->screen_tick75, 0);

	//Write codes screen_tick76
	ui->screen_tick76 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick76, 374, 178);
	lv_obj_set_size(ui->screen_tick76, 19, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick76, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick76_main_main_default
	static lv_style_t style_screen_tick76_main_main_default;
	if (style_screen_tick76_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick76_main_main_default);
	else
		lv_style_init(&style_screen_tick76_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick76_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick76_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick76_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick76, &style_screen_tick76_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick76, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick76,&_tick76_19x19);
	lv_img_set_pivot(ui->screen_tick76, 0,0);
	lv_img_set_angle(ui->screen_tick76, 0);

	//Write codes screen_tick77
	ui->screen_tick77 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick77, 380, 185);
	lv_obj_set_size(ui->screen_tick77, 19, 19);
	lv_obj_set_scrollbar_mode(ui->screen_tick77, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick77_main_main_default
	static lv_style_t style_screen_tick77_main_main_default;
	if (style_screen_tick77_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick77_main_main_default);
	else
		lv_style_init(&style_screen_tick77_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick77_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick77_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick77_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick77, &style_screen_tick77_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick77, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick77,&_tick77_19x19);
	lv_img_set_pivot(ui->screen_tick77, 0,0);
	lv_img_set_angle(ui->screen_tick77, 0);

	//Write codes screen_tick78
	ui->screen_tick78 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick78, 385, 192);
	lv_obj_set_size(ui->screen_tick78, 20, 18);
	lv_obj_set_scrollbar_mode(ui->screen_tick78, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick78_main_main_default
	static lv_style_t style_screen_tick78_main_main_default;
	if (style_screen_tick78_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick78_main_main_default);
	else
		lv_style_init(&style_screen_tick78_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick78_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick78_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick78_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick78, &style_screen_tick78_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick78, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick78,&_tick78_20x18);
	lv_img_set_pivot(ui->screen_tick78, 0,0);
	lv_img_set_angle(ui->screen_tick78, 0);

	//Write codes screen_tick79
	ui->screen_tick79 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick79, 391, 199);
	lv_obj_set_size(ui->screen_tick79, 20, 18);
	lv_obj_set_scrollbar_mode(ui->screen_tick79, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick79_main_main_default
	static lv_style_t style_screen_tick79_main_main_default;
	if (style_screen_tick79_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick79_main_main_default);
	else
		lv_style_init(&style_screen_tick79_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick79_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick79_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick79_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick79, &style_screen_tick79_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick79, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick79,&_tick79_20x18);
	lv_img_set_pivot(ui->screen_tick79, 0,0);
	lv_img_set_angle(ui->screen_tick79, 0);

	//Write codes screen_tick80
	ui->screen_tick80 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick80, 396, 207);
	lv_obj_set_size(ui->screen_tick80, 21, 17);
	lv_obj_set_scrollbar_mode(ui->screen_tick80, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick80_main_main_default
	static lv_style_t style_screen_tick80_main_main_default;
	if (style_screen_tick80_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick80_main_main_default);
	else
		lv_style_init(&style_screen_tick80_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick80_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick80_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick80_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick80, &style_screen_tick80_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick80, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick80,&_tick80_21x17);
	lv_img_set_pivot(ui->screen_tick80, 0,0);
	lv_img_set_angle(ui->screen_tick80, 0);

	//Write codes screen_tick81
	ui->screen_tick81 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick81, 401, 215);
	lv_obj_set_size(ui->screen_tick81, 20, 17);
	lv_obj_set_scrollbar_mode(ui->screen_tick81, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick81_main_main_default
	static lv_style_t style_screen_tick81_main_main_default;
	if (style_screen_tick81_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick81_main_main_default);
	else
		lv_style_init(&style_screen_tick81_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick81_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick81_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick81_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick81, &style_screen_tick81_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick81, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick81,&_tick81_20x17);
	lv_img_set_pivot(ui->screen_tick81, 0,0);
	lv_img_set_angle(ui->screen_tick81, 0);

	//Write codes screen_signal_leftOn
	ui->screen_signal_leftOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_signal_leftOn, 46, 46);
	lv_obj_set_size(ui->screen_signal_leftOn, 48, 40);
	lv_obj_set_scrollbar_mode(ui->screen_signal_leftOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_signal_lefton_main_main_default
	static lv_style_t style_screen_signal_lefton_main_main_default;
	if (style_screen_signal_lefton_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_signal_lefton_main_main_default);
	else
		lv_style_init(&style_screen_signal_lefton_main_main_default);
	lv_style_set_img_recolor(&style_screen_signal_lefton_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_signal_lefton_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_signal_lefton_main_main_default, 255);
	lv_obj_add_style(ui->screen_signal_leftOn, &style_screen_signal_lefton_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_signal_leftOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_signal_leftOn,&_signal_leftOn_48x40);
	lv_img_set_pivot(ui->screen_signal_leftOn, 0,0);
	lv_img_set_angle(ui->screen_signal_leftOn, 0);

	//Write codes screen_signal_rightOn
	ui->screen_signal_rightOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_signal_rightOn, 387, 46);
	lv_obj_set_size(ui->screen_signal_rightOn, 48, 40);
	lv_obj_set_scrollbar_mode(ui->screen_signal_rightOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_signal_righton_main_main_default
	static lv_style_t style_screen_signal_righton_main_main_default;
	if (style_screen_signal_righton_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_signal_righton_main_main_default);
	else
		lv_style_init(&style_screen_signal_righton_main_main_default);
	lv_style_set_img_recolor(&style_screen_signal_righton_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_signal_righton_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_signal_righton_main_main_default, 255);
	lv_obj_add_style(ui->screen_signal_rightOn, &style_screen_signal_righton_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_signal_rightOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_signal_rightOn,&_signal_rightOn_48x40);
	lv_img_set_pivot(ui->screen_signal_rightOn, 0,0);
	lv_img_set_angle(ui->screen_signal_rightOn, 0);

	//Write codes screen_light_brakeOn
	ui->screen_light_brakeOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_brakeOn, 478, 331);
	lv_obj_set_size(ui->screen_light_brakeOn, 37, 38);
	lv_obj_set_scrollbar_mode(ui->screen_light_brakeOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_brakeon_main_main_default
	static lv_style_t style_screen_light_brakeon_main_main_default;
	if (style_screen_light_brakeon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_brakeon_main_main_default);
	else
		lv_style_init(&style_screen_light_brakeon_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_brakeon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_brakeon_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_brakeon_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_brakeOn, &style_screen_light_brakeon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_brakeOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_brakeOn,&_light_brakeOn_37x38);
	lv_img_set_pivot(ui->screen_light_brakeOn, 0,0);
	lv_img_set_angle(ui->screen_light_brakeOn, 0);

	//Write codes screen_light_highbeamOn
	ui->screen_light_highbeamOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_highbeamOn, 560, 337);
	lv_obj_set_size(ui->screen_light_highbeamOn, 42, 26);
	lv_obj_set_scrollbar_mode(ui->screen_light_highbeamOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_highbeamon_main_main_default
	static lv_style_t style_screen_light_highbeamon_main_main_default;
	if (style_screen_light_highbeamon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_highbeamon_main_main_default);
	else
		lv_style_init(&style_screen_light_highbeamon_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_highbeamon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_highbeamon_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_highbeamon_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_highbeamOn, &style_screen_light_highbeamon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_highbeamOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_highbeamOn,&_light_highbeamOn_42x26);
	lv_img_set_pivot(ui->screen_light_highbeamOn, 0,0);
	lv_img_set_angle(ui->screen_light_highbeamOn, 0);

	//Write codes screen_light_batteryOn
	ui->screen_light_batteryOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_batteryOn, 640, 333);
	lv_obj_set_size(ui->screen_light_batteryOn, 45, 30);
	lv_obj_set_scrollbar_mode(ui->screen_light_batteryOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_batteryon_main_main_default
	static lv_style_t style_screen_light_batteryon_main_main_default;
	if (style_screen_light_batteryon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_batteryon_main_main_default);
	else
		lv_style_init(&style_screen_light_batteryon_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_batteryon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_batteryon_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_batteryon_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_batteryOn, &style_screen_light_batteryon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_batteryOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_batteryOn,&_light_batteryOn_45x30);
	lv_img_set_pivot(ui->screen_light_batteryOn, 0,0);
	lv_img_set_angle(ui->screen_light_batteryOn, 0);

	//Write codes screen_light_ABSOn
	ui->screen_light_ABSOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_ABSOn, 736, 333);
	lv_obj_set_size(ui->screen_light_ABSOn, 44, 32);
	lv_obj_set_scrollbar_mode(ui->screen_light_ABSOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_abson_main_main_default
	static lv_style_t style_screen_light_abson_main_main_default;
	if (style_screen_light_abson_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_abson_main_main_default);
	else
		lv_style_init(&style_screen_light_abson_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_abson_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_abson_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_abson_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_ABSOn, &style_screen_light_abson_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_ABSOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_ABSOn,&_light_ABSOn_44x32);
	lv_img_set_pivot(ui->screen_light_ABSOn, 0,0);
	lv_img_set_angle(ui->screen_light_ABSOn, 0); 


	//Write codes screen_light_engine
	ui->screen_light_engine = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_engine, 204, 415);
	lv_obj_set_size(ui->screen_light_engine, 39, 25);
	lv_obj_set_scrollbar_mode(ui->screen_light_engine, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_engine_main_main_default
	static lv_style_t style_screen_light_engine_main_main_default;
	if (style_screen_light_engine_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_engine_main_main_default);
	else
		lv_style_init(&style_screen_light_engine_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_engine_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_engine_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_engine_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_engine, &style_screen_light_engine_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_engine, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_engine,&_light_engine_39x25);
	lv_img_set_pivot(ui->screen_light_engine, 0,0);
	lv_img_set_angle(ui->screen_light_engine, 0);

	//Write codes screen_light_oil
	ui->screen_light_oil = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_oil, 269, 418);
	lv_obj_set_size(ui->screen_light_oil, 52, 20);
	lv_obj_set_scrollbar_mode(ui->screen_light_oil, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_oil_main_main_default
	static lv_style_t style_screen_light_oil_main_main_default;
	if (style_screen_light_oil_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_oil_main_main_default);
	else
		lv_style_init(&style_screen_light_oil_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_oil_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_oil_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_oil_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_oil, &style_screen_light_oil_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_oil, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_oil,&_light_oil_52x20);
	lv_img_set_pivot(ui->screen_light_oil, 0,0);
	lv_img_set_angle(ui->screen_light_oil, 0);

	//Write codes screen_light_engineOn
	ui->screen_light_engineOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_engineOn, 204, 415);
	lv_obj_set_size(ui->screen_light_engineOn, 39, 25);
	lv_obj_set_scrollbar_mode(ui->screen_light_engineOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_engineon_main_main_default
	static lv_style_t style_screen_light_engineon_main_main_default;
	if (style_screen_light_engineon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_engineon_main_main_default);
	else
		lv_style_init(&style_screen_light_engineon_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_engineon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_engineon_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_engineon_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_engineOn, &style_screen_light_engineon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_engineOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_engineOn,&_light_engineOn_39x25);
	lv_img_set_pivot(ui->screen_light_engineOn, 0,0);
	lv_img_set_angle(ui->screen_light_engineOn, 0);

	//Write codes screen_light_oilOn
	ui->screen_light_oilOn = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_light_oilOn, 269, 418);
	lv_obj_set_size(ui->screen_light_oilOn, 52, 20);
	lv_obj_set_scrollbar_mode(ui->screen_light_oilOn, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_light_oilon_main_main_default
	static lv_style_t style_screen_light_oilon_main_main_default;
	if (style_screen_light_oilon_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_light_oilon_main_main_default);
	else
		lv_style_init(&style_screen_light_oilon_main_main_default);
	lv_style_set_img_recolor(&style_screen_light_oilon_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_light_oilon_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_light_oilon_main_main_default, 255);
	lv_obj_add_style(ui->screen_light_oilOn, &style_screen_light_oilon_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_light_oilOn, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_light_oilOn,&_light_oilOn_52x20);
	lv_img_set_pivot(ui->screen_light_oilOn, 0,0);
	lv_img_set_angle(ui->screen_light_oilOn, 0);


	//Write codes screen_car_panel
	ui->screen_car_panel = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_car_panel, 952, 305);
	lv_obj_set_size(ui->screen_car_panel, 180, 220);
	lv_obj_set_scrollbar_mode(ui->screen_car_panel, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_car_panel_main_main_default
	static lv_style_t style_screen_car_panel_main_main_default;
	if (style_screen_car_panel_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_car_panel_main_main_default);
	else
		lv_style_init(&style_screen_car_panel_main_main_default);
	lv_style_set_img_recolor(&style_screen_car_panel_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_car_panel_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_car_panel_main_main_default, 255);
	lv_obj_add_style(ui->screen_car_panel, &style_screen_car_panel_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_car_panel, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_car_panel,&_car_180x220);
	lv_img_set_pivot(ui->screen_car_panel, 0,0);
	lv_img_set_angle(ui->screen_car_panel, 0);

	//Write codes screen_left_1
	ui->screen_left_1 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_left_1, 946, 226);
	lv_obj_set_size(ui->screen_left_1, 49, 46);
	lv_obj_set_scrollbar_mode(ui->screen_left_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_left_1_main_main_default
	static lv_style_t style_screen_left_1_main_main_default;
	if (style_screen_left_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_left_1_main_main_default);
	else
		lv_style_init(&style_screen_left_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_left_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_left_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_left_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_left_1, &style_screen_left_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_left_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_left_1,&_left_1_49x46);
	lv_img_set_pivot(ui->screen_left_1, 0,0);
	lv_img_set_angle(ui->screen_left_1, 0);

	//Write codes screen_left_2
	ui->screen_left_2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_left_2, 960, 256);
	lv_obj_set_size(ui->screen_left_2, 39, 39);
	lv_obj_set_scrollbar_mode(ui->screen_left_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_left_2_main_main_default
	static lv_style_t style_screen_left_2_main_main_default;
	if (style_screen_left_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_left_2_main_main_default);
	else
		lv_style_init(&style_screen_left_2_main_main_default);
	lv_style_set_img_recolor(&style_screen_left_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_left_2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_left_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_left_2, &style_screen_left_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_left_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_left_2,&_left_2_39x39);
	lv_img_set_pivot(ui->screen_left_2, 0,0);
	lv_img_set_angle(ui->screen_left_2, 0);

	//Write codes screen_left_3
	ui->screen_left_3 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_left_3, 973, 286);
	lv_obj_set_size(ui->screen_left_3, 26, 26);
	lv_obj_set_scrollbar_mode(ui->screen_left_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_left_3_main_main_default
	static lv_style_t style_screen_left_3_main_main_default;
	if (style_screen_left_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_left_3_main_main_default);
	else
		lv_style_init(&style_screen_left_3_main_main_default);
	lv_style_set_img_recolor(&style_screen_left_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_left_3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_left_3_main_main_default, 255);
	lv_obj_add_style(ui->screen_left_3, &style_screen_left_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_left_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_left_3,&_left_3_26x26);
	lv_img_set_pivot(ui->screen_left_3, 0,0);
	lv_img_set_angle(ui->screen_left_3, 0);

	//Write codes screen_left_4
	ui->screen_left_4 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_left_4, 1010, 600);
	lv_obj_set_size(ui->screen_left_4, 48, 44);
	lv_obj_set_scrollbar_mode(ui->screen_left_4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_left_4_main_main_default
	static lv_style_t style_screen_left_4_main_main_default;
	if (style_screen_left_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_left_4_main_main_default);
	else
		lv_style_init(&style_screen_left_4_main_main_default);
	lv_style_set_img_recolor(&style_screen_left_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_left_4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_left_4_main_main_default, 255);
	lv_obj_add_style(ui->screen_left_4, &style_screen_left_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_left_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_left_4,&_right_1_48x44);
	lv_img_set_pivot(ui->screen_left_4, 0,0);
	lv_img_set_angle(ui->screen_left_4, 1800);

	//Write codes screen_left_5
	ui->screen_left_5 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_left_5, 1010, 568);
	lv_obj_set_size(ui->screen_left_5, 34, 33);
	lv_obj_set_scrollbar_mode(ui->screen_left_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_left_5_main_main_default
	static lv_style_t style_screen_left_5_main_main_default;
	if (style_screen_left_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_left_5_main_main_default);
	else
		lv_style_init(&style_screen_left_5_main_main_default);
	lv_style_set_img_recolor(&style_screen_left_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_left_5_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_left_5_main_main_default, 255);
	lv_obj_add_style(ui->screen_left_5, &style_screen_left_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_left_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_left_5,&_right_2_34x33);
	lv_img_set_pivot(ui->screen_left_5, 0,0);
	lv_img_set_angle(ui->screen_left_5, 1800);

	//Write codes screen_left_6
	ui->screen_left_6 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_left_6, 1010, 544);
	lv_obj_set_size(ui->screen_left_6, 24, 27);
	lv_obj_set_scrollbar_mode(ui->screen_left_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_left_6_main_main_default
	static lv_style_t style_screen_left_6_main_main_default;
	if (style_screen_left_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_left_6_main_main_default);
	else
		lv_style_init(&style_screen_left_6_main_main_default);
	lv_style_set_img_recolor(&style_screen_left_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_left_6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_left_6_main_main_default, 255);
	lv_obj_add_style(ui->screen_left_6, &style_screen_left_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_left_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_left_6,&_right_3_24x27);
	lv_img_set_pivot(ui->screen_left_6, 0,0);
	lv_img_set_angle(ui->screen_left_6, 1800);

	//Write codes screen_mid_1
	ui->screen_mid_1 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_mid_1, 1012, 220);
	lv_obj_set_size(ui->screen_mid_1, 60, 26);
	lv_obj_set_scrollbar_mode(ui->screen_mid_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_mid_1_main_main_default
	static lv_style_t style_screen_mid_1_main_main_default;
	if (style_screen_mid_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_mid_1_main_main_default);
	else
		lv_style_init(&style_screen_mid_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_mid_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_mid_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_mid_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_mid_1, &style_screen_mid_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_mid_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_mid_1,&_mid_1_60x26);
	lv_img_set_pivot(ui->screen_mid_1, 0,0);
	lv_img_set_angle(ui->screen_mid_1, 0);

	//Write codes screen_mid_2
	ui->screen_mid_2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_mid_2, 1017, 251);
	lv_obj_set_size(ui->screen_mid_2, 48, 22);
	lv_obj_set_scrollbar_mode(ui->screen_mid_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_mid_2_main_main_default
	static lv_style_t style_screen_mid_2_main_main_default;
	if (style_screen_mid_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_mid_2_main_main_default);
	else
		lv_style_init(&style_screen_mid_2_main_main_default);
	lv_style_set_img_recolor(&style_screen_mid_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_mid_2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_mid_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_mid_2, &style_screen_mid_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_mid_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_mid_2,&_mid_2_48x22);
	lv_img_set_pivot(ui->screen_mid_2, 0,0);
	lv_img_set_angle(ui->screen_mid_2, 0);

	//Write codes screen_mid_3
	ui->screen_mid_3 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_mid_3, 1025, 280);
	lv_obj_set_size(ui->screen_mid_3, 33, 17);
	lv_obj_set_scrollbar_mode(ui->screen_mid_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_mid_3_main_main_default
	static lv_style_t style_screen_mid_3_main_main_default;
	if (style_screen_mid_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_mid_3_main_main_default);
	else
		lv_style_init(&style_screen_mid_3_main_main_default);
	lv_style_set_img_recolor(&style_screen_mid_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_mid_3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_mid_3_main_main_default, 255);
	lv_obj_add_style(ui->screen_mid_3, &style_screen_mid_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_mid_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_mid_3,&_mid_3_33x17);
	lv_img_set_pivot(ui->screen_mid_3, 0,0);
	lv_img_set_angle(ui->screen_mid_3, 0);

	//Write codes screen_mid_4
	ui->screen_mid_4 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_mid_4, 1077, 607);
	lv_obj_set_size(ui->screen_mid_4, 60, 26);
	lv_obj_set_scrollbar_mode(ui->screen_mid_4, LV_SCROLLBAR_MODE_ACTIVE);

	//Write style state: LV_STATE_DEFAULT for style_screen_mid_4_main_main_default
	static lv_style_t style_screen_mid_4_main_main_default;
	if (style_screen_mid_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_mid_4_main_main_default);
	else
		lv_style_init(&style_screen_mid_4_main_main_default);
	lv_style_set_img_recolor(&style_screen_mid_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_mid_4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_mid_4_main_main_default, 255);
	lv_obj_add_style(ui->screen_mid_4, &style_screen_mid_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_mid_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_mid_4,&_mid_1_60x26);
	lv_img_set_pivot(ui->screen_mid_4, 0,0);
	lv_img_set_angle(ui->screen_mid_4, 1800);

	//Write codes screen_mid_5
	ui->screen_mid_5 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_mid_5, 1070, 578);
	lv_obj_set_size(ui->screen_mid_5, 48, 22);
	lv_obj_set_scrollbar_mode(ui->screen_mid_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_mid_5_main_main_default
	static lv_style_t style_screen_mid_5_main_main_default;
	if (style_screen_mid_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_mid_5_main_main_default);
	else
		lv_style_init(&style_screen_mid_5_main_main_default);
	lv_style_set_img_recolor(&style_screen_mid_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_mid_5_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_mid_5_main_main_default, 255);
	lv_obj_add_style(ui->screen_mid_5, &style_screen_mid_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_mid_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_mid_5,&_mid_2_48x22);
	lv_img_set_pivot(ui->screen_mid_5, 0,0);
	lv_img_set_angle(ui->screen_mid_5, 1800);

	//Write codes screen_mid_6
	ui->screen_mid_6 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_mid_6, 1065, 550);
	lv_obj_set_size(ui->screen_mid_6, 33, 17);
	lv_obj_set_scrollbar_mode(ui->screen_mid_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_mid_6_main_main_default
	static lv_style_t style_screen_mid_6_main_main_default;
	if (style_screen_mid_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_mid_6_main_main_default);
	else
		lv_style_init(&style_screen_mid_6_main_main_default);
	lv_style_set_img_recolor(&style_screen_mid_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_mid_6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_mid_6_main_main_default, 255);
	lv_obj_add_style(ui->screen_mid_6, &style_screen_mid_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_mid_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_mid_6,&_mid_3_33x17);
	lv_img_set_pivot(ui->screen_mid_6, 0,0);
	lv_img_set_angle(ui->screen_mid_6, 1800);

	//Write codes screen_right_1
	ui->screen_right_1 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_right_1, 1084, 228);
	lv_obj_set_size(ui->screen_right_1, 48, 44);
	lv_obj_set_scrollbar_mode(ui->screen_right_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_right_1_main_main_default
	static lv_style_t style_screen_right_1_main_main_default;
	if (style_screen_right_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_right_1_main_main_default);
	else
		lv_style_init(&style_screen_right_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_right_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_right_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_right_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_right_1, &style_screen_right_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_right_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_right_1,&_right_1_48x44);
	lv_img_set_pivot(ui->screen_right_1, 0,0);
	lv_img_set_angle(ui->screen_right_1, 0);

	//Write codes screen_right_2
	ui->screen_right_2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_right_2, 1084, 260);
	lv_obj_set_size(ui->screen_right_2, 34, 33);
	lv_obj_set_scrollbar_mode(ui->screen_right_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_right_2_main_main_default
	static lv_style_t style_screen_right_2_main_main_default;
	if (style_screen_right_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_right_2_main_main_default);
	else
		lv_style_init(&style_screen_right_2_main_main_default);
	lv_style_set_img_recolor(&style_screen_right_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_right_2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_right_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_right_2, &style_screen_right_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_right_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_right_2,&_right_2_34x33);
	lv_img_set_pivot(ui->screen_right_2, 0,0);
	lv_img_set_angle(ui->screen_right_2, 0);	

	//Write codes screen_right_3
	ui->screen_right_3 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_right_3, 1084, 287);
	lv_obj_set_size(ui->screen_right_3, 24, 27);
	lv_obj_set_scrollbar_mode(ui->screen_right_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_right_3_main_main_default
	static lv_style_t style_screen_right_3_main_main_default;
	if (style_screen_right_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_right_3_main_main_default);
	else
		lv_style_init(&style_screen_right_3_main_main_default);
	lv_style_set_img_recolor(&style_screen_right_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_right_3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_right_3_main_main_default, 255);
	lv_obj_add_style(ui->screen_right_3, &style_screen_right_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_right_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_right_3,&_right_3_24x27);
	lv_img_set_pivot(ui->screen_right_3, 0,0);
	lv_img_set_angle(ui->screen_right_3, 0);	

	//Write codes screen_right_4
	ui->screen_right_4 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_right_4, 1132, 604);
	lv_obj_set_size(ui->screen_right_4, 49, 46);
	lv_obj_set_scrollbar_mode(ui->screen_right_4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_right_4_main_main_default
	static lv_style_t style_screen_right_4_main_main_default;
	if (style_screen_right_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_right_4_main_main_default);
	else
		lv_style_init(&style_screen_right_4_main_main_default);
	lv_style_set_img_recolor(&style_screen_right_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_right_4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_right_4_main_main_default, 255);
	lv_obj_add_style(ui->screen_right_4, &style_screen_right_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_right_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_right_4,&_left_1_49x46);
	lv_img_set_pivot(ui->screen_right_4, 0,0);
	lv_img_set_angle(ui->screen_right_4, 1800);

	//Write codes screen_right_5
	ui->screen_right_5 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_right_5, 1118, 575);
	lv_obj_set_size(ui->screen_right_5, 39, 39);
	lv_obj_set_scrollbar_mode(ui->screen_right_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_right_5_main_main_default
	static lv_style_t style_screen_right_5_main_main_default;
	if (style_screen_right_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_right_5_main_main_default);
	else
		lv_style_init(&style_screen_right_5_main_main_default);
	lv_style_set_img_recolor(&style_screen_right_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_right_5_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_right_5_main_main_default, 255);
	lv_obj_add_style(ui->screen_right_5, &style_screen_right_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_right_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_right_5,&_left_2_39x39);
	lv_img_set_pivot(ui->screen_right_5, 0,0);
	lv_img_set_angle(ui->screen_right_5, 1800);	

	//Write codes screen_right_6
	ui->screen_right_6 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_right_6, 1106, 547);
	lv_obj_set_size(ui->screen_right_6, 26, 26);
	lv_obj_set_scrollbar_mode(ui->screen_right_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_right_6_main_main_default
	static lv_style_t style_screen_right_6_main_main_default;
	if (style_screen_right_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_right_6_main_main_default);
	else
		lv_style_init(&style_screen_right_6_main_main_default);
	lv_style_set_img_recolor(&style_screen_right_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_right_6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_right_6_main_main_default, 255);
	lv_obj_add_style(ui->screen_right_6, &style_screen_right_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_right_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_right_6,&_left_3_26x26);
	lv_img_set_pivot(ui->screen_right_6, 0,0);
	lv_img_set_angle(ui->screen_right_6, 1800);	

	//Write codes screen_TCS_on
	ui->screen_TCS_on = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_TCS_on, 500, 450);
	lv_obj_set_size(ui->screen_TCS_on, 102, 49);
	lv_obj_set_scrollbar_mode(ui->screen_TCS_on, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tcs_on_main_main_default
	static lv_style_t style_screen_tcs_on_main_main_default;
	if (style_screen_tcs_on_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tcs_on_main_main_default);
	else
		lv_style_init(&style_screen_tcs_on_main_main_default);
	lv_style_set_img_recolor(&style_screen_tcs_on_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tcs_on_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tcs_on_main_main_default, 255);
	lv_obj_add_style(ui->screen_TCS_on, &style_screen_tcs_on_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_TCS_on, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_TCS_on,&_panel_1_png_102x49);
	lv_img_set_pivot(ui->screen_TCS_on, 0,0);
	lv_img_set_angle(ui->screen_TCS_on, 0); 
	
#if 0
/*RTC module use*/
	//Write codes screen_date_month
	ui->screen_date_month = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_month, 940, 50);
	lv_obj_set_size(ui->screen_date_month, 57, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_month, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_month, "Oct");
	lv_label_set_long_mode(ui->screen_date_month, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_month_main_main_default
	static lv_style_t style_screen_date_month_main_main_default;
	if (style_screen_date_month_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_month_main_main_default);
	else
		lv_style_init(&style_screen_date_month_main_main_default);
	lv_style_set_radius(&style_screen_date_month_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_month_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_month_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_month_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_month_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_month_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_month_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_month_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_month_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_month_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_month_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_month_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_month_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_month_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_month, &style_screen_date_month_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_date_day
	ui->screen_date_day = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_day, 992, 51);
	lv_obj_set_size(ui->screen_date_day, 31, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_day, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_day, "18");
	lv_label_set_long_mode(ui->screen_date_day, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_day_main_main_default
	static lv_style_t style_screen_date_day_main_main_default;
	if (style_screen_date_day_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_day_main_main_default);
	else
		lv_style_init(&style_screen_date_day_main_main_default);
	lv_style_set_radius(&style_screen_date_day_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_day_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_day_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_day_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_day_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_day_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_day_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_day_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_day_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_day_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_day_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_day_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_day_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_day_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_day, &style_screen_date_day_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_date_0
	ui->screen_date_0 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_0, 1007, 51);
	lv_obj_set_size(ui->screen_date_0, 31, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_0, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_0, ",");
	lv_label_set_long_mode(ui->screen_date_0, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_0_main_main_default
	static lv_style_t style_screen_date_0_main_main_default;
	if (style_screen_date_0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_0_main_main_default);
	else
		lv_style_init(&style_screen_date_0_main_main_default);
	lv_style_set_radius(&style_screen_date_0_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_0_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_0_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_0_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_0_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_0_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_0_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_0_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_0_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_0_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_0_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_0, &style_screen_date_0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_date_year
	ui->screen_date_year = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_year, 1031, 51);
	lv_obj_set_size(ui->screen_date_year, 57, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_year, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_year, "2022");
	lv_label_set_long_mode(ui->screen_date_year, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_year_main_main_default
	static lv_style_t style_screen_date_year_main_main_default;
	if (style_screen_date_year_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_year_main_main_default);
	else
		lv_style_init(&style_screen_date_year_main_main_default);
	lv_style_set_radius(&style_screen_date_year_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_year_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_year_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_year_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_year_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_year_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_year_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_year_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_year_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_year_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_year_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_year_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_year_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_year_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_year, &style_screen_date_year_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_time_hour
	ui->screen_time_hour = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_hour, 1145, 50);
	lv_obj_set_size(ui->screen_time_hour, 33, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_hour, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_hour, "20");
	lv_label_set_long_mode(ui->screen_time_hour, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_hour_main_main_default
	static lv_style_t style_screen_time_hour_main_main_default;
	if (style_screen_time_hour_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_hour_main_main_default);
	else
		lv_style_init(&style_screen_time_hour_main_main_default);
	lv_style_set_radius(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_hour_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_hour_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_hour_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_hour_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_hour_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_hour_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_hour_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_hour_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_hour_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_hour, &style_screen_time_hour_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_time_0
	ui->screen_time_0 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_0, 1173, 50);
	lv_obj_set_size(ui->screen_time_0, 17, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_0, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_0, ":");
	lv_label_set_long_mode(ui->screen_time_0, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_0_main_main_default
	static lv_style_t style_screen_time_0_main_main_default;
	if (style_screen_time_0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_0_main_main_default);
	else
		lv_style_init(&style_screen_time_0_main_main_default);
	lv_style_set_radius(&style_screen_time_0_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_0_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_0_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_0_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_0_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_0_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_0_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_0_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_0_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_0_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_0_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_0, &style_screen_time_0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_time_min
	ui->screen_time_min = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_min, 1188, 50);
	lv_obj_set_size(ui->screen_time_min, 33, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_min, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_min, "20");
	lv_label_set_long_mode(ui->screen_time_min, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_min_main_main_default
	static lv_style_t style_screen_time_min_main_main_default;
	if (style_screen_time_min_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_min_main_main_default);
	else
		lv_style_init(&style_screen_time_min_main_main_default);
	lv_style_set_radius(&style_screen_time_min_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_min_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_min_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_min_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_min_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_min_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_min_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_min_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_min_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_min_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_min_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_min_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_min_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_min_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_min, &style_screen_time_min_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
#endif
/*
	//Write codes screen_time_1
	ui->screen_time_1 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_1, 1167, 50);
	lv_obj_set_size(ui->screen_time_1, 17, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_1, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_1, ":");
	lv_label_set_long_mode(ui->screen_time_1, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_1_main_main_default
	static lv_style_t style_screen_time_1_main_main_default;
	if (style_screen_time_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_1_main_main_default);
	else
		lv_style_init(&style_screen_time_1_main_main_default);
	lv_style_set_radius(&style_screen_time_1_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_1_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_1_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_1_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_1_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_1_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_1_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_1_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_1_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_1, &style_screen_time_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_time_sec
	ui->screen_time_sec = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_sec, 1179, 50);
	lv_obj_set_size(ui->screen_time_sec, 33, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_sec, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_sec, "20");
	lv_label_set_long_mode(ui->screen_time_sec, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_sec_main_main_default
	static lv_style_t style_screen_time_sec_main_main_default;
	if (style_screen_time_sec_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_sec_main_main_default);
	else
		lv_style_init(&style_screen_time_sec_main_main_default);
	lv_style_set_radius(&style_screen_time_sec_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_sec_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_sec_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_sec_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_sec_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_sec_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_sec_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_sec_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_sec_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_sec_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_sec_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_sec_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_sec_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_sec_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_sec, &style_screen_time_sec_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
*/
}

#if 0
void gas_on(lv_ui *ui){
	//Write codes screen_gas_on
	ui->screen_gas_on = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_gas_on, 648, 442);
	lv_obj_set_size(ui->screen_gas_on, 76, 57);
	lv_obj_set_scrollbar_mode(ui->screen_gas_on, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_gas_on_main_main_default
	static lv_style_t style_screen_gas_on_main_main_default;
	if (style_screen_gas_on_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_gas_on_main_main_default);
	else
		lv_style_init(&style_screen_gas_on_main_main_default);
	lv_style_set_img_recolor(&style_screen_gas_on_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_gas_on_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_gas_on_main_main_default, 255);
	lv_obj_add_style(ui->screen_gas_on, &style_screen_gas_on_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_gas_on, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_gas_on,&_panel_2_png_76x57);
	lv_img_set_pivot(ui->screen_gas_on, 0,0);
	lv_img_set_angle(ui->screen_gas_on, 0);
}

void del_gas_on(lv_ui *ui){
	lv_obj_del(ui->screen_gas_on);
}
#endif
void tick_glow(lv_ui *ui){
	//Write codes screen_tick_glow
	ui->screen_tick_glow = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_tick_glow, 66, 117);
	lv_obj_set_size(ui->screen_tick_glow, 363, 387);
	lv_obj_set_scrollbar_mode(ui->screen_tick_glow, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_tick_glow_main_main_default
	static lv_style_t style_screen_tick_glow_main_main_default;
	if (style_screen_tick_glow_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tick_glow_main_main_default);
	else
		lv_style_init(&style_screen_tick_glow_main_main_default);
	lv_style_set_img_recolor(&style_screen_tick_glow_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_tick_glow_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_tick_glow_main_main_default, 255);
	lv_obj_add_style(ui->screen_tick_glow, &style_screen_tick_glow_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_tick_glow, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_tick_glow,&_tick_glow_363x387);
	lv_img_set_pivot(ui->screen_tick_glow, 0,0);
	lv_img_set_angle(ui->screen_tick_glow, 0);  
}

void del_tick_glow(lv_ui *ui){
        lv_obj_del(ui->screen_tick_glow);
}

/*RTC module use*/
void date_time(lv_ui *ui){

	//Write codes screen_date_month
	ui->screen_date_month = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_month, 940, 50);
	lv_obj_set_size(ui->screen_date_month, 57, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_month, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_month, "Oct");
	lv_label_set_long_mode(ui->screen_date_month, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_month_main_main_default
	static lv_style_t style_screen_date_month_main_main_default;
	if (style_screen_date_month_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_month_main_main_default);
	else
		lv_style_init(&style_screen_date_month_main_main_default);
	lv_style_set_radius(&style_screen_date_month_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_month_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_month_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_month_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_month_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_month_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_month_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_month_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_month_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_month_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_month_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_month_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_month_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_month_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_month, &style_screen_date_month_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_date_day
	ui->screen_date_day = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_day, 992, 51);
	lv_obj_set_size(ui->screen_date_day, 31, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_day, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_day, "18");
	lv_label_set_long_mode(ui->screen_date_day, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_day_main_main_default
	static lv_style_t style_screen_date_day_main_main_default;
	if (style_screen_date_day_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_day_main_main_default);
	else
		lv_style_init(&style_screen_date_day_main_main_default);
	lv_style_set_radius(&style_screen_date_day_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_day_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_day_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_day_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_day_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_day_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_day_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_day_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_day_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_day_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_day_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_day_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_day_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_day_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_day, &style_screen_date_day_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_date_0
	ui->screen_date_0 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_0, 1007, 51);
	lv_obj_set_size(ui->screen_date_0, 31, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_0, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_0, ",");
	lv_label_set_long_mode(ui->screen_date_0, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_0_main_main_default
	static lv_style_t style_screen_date_0_main_main_default;
	if (style_screen_date_0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_0_main_main_default);
	else
		lv_style_init(&style_screen_date_0_main_main_default);
	lv_style_set_radius(&style_screen_date_0_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_0_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_0_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_0_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_0_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_0_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_0_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_0_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_0_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_0_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_0_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_0, &style_screen_date_0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_date_year
	ui->screen_date_year = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_date_year, 1031, 51);
	lv_obj_set_size(ui->screen_date_year, 57, 33);
	lv_obj_set_scrollbar_mode(ui->screen_date_year, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_date_year, "2022");
	lv_label_set_long_mode(ui->screen_date_year, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_date_year_main_main_default
	static lv_style_t style_screen_date_year_main_main_default;
	if (style_screen_date_year_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_date_year_main_main_default);
	else
		lv_style_init(&style_screen_date_year_main_main_default);
	lv_style_set_radius(&style_screen_date_year_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_date_year_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_date_year_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_date_year_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_date_year_main_main_default, 0);
	lv_style_set_text_color(&style_screen_date_year_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_date_year_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_date_year_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_date_year_main_main_default, 0);
	lv_style_set_text_align(&style_screen_date_year_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_date_year_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_date_year_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_date_year_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_date_year_main_main_default, 0);
	lv_obj_add_style(ui->screen_date_year, &style_screen_date_year_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_time_hour
	ui->screen_time_hour = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_hour, 1145, 50);
	lv_obj_set_size(ui->screen_time_hour, 33, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_hour, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_hour, "20");
	lv_label_set_long_mode(ui->screen_time_hour, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_hour_main_main_default
	static lv_style_t style_screen_time_hour_main_main_default;
	if (style_screen_time_hour_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_hour_main_main_default);
	else
		lv_style_init(&style_screen_time_hour_main_main_default);
	lv_style_set_radius(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_hour_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_hour_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_hour_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_hour_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_hour_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_hour_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_hour_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_hour_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_hour_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_hour_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_hour, &style_screen_time_hour_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_time_0
	ui->screen_time_0 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_0, 1173, 50);
	lv_obj_set_size(ui->screen_time_0, 17, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_0, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_0, ":");
	lv_label_set_long_mode(ui->screen_time_0, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_0_main_main_default
	static lv_style_t style_screen_time_0_main_main_default;
	if (style_screen_time_0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_0_main_main_default);
	else
		lv_style_init(&style_screen_time_0_main_main_default);
	lv_style_set_radius(&style_screen_time_0_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_0_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_0_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_0_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_0_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_0_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_0_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_0_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_0_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_0_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_0_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_0, &style_screen_time_0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_time_min
	ui->screen_time_min = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_time_min, 1188, 50);
	lv_obj_set_size(ui->screen_time_min, 33, 32);
	lv_obj_set_scrollbar_mode(ui->screen_time_min, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_time_min, "20");
	lv_label_set_long_mode(ui->screen_time_min, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_time_min_main_main_default
	static lv_style_t style_screen_time_min_main_main_default;
	if (style_screen_time_min_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_time_min_main_main_default);
	else
		lv_style_init(&style_screen_time_min_main_main_default);
	lv_style_set_radius(&style_screen_time_min_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_time_min_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_time_min_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_time_min_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_time_min_main_main_default, 0);
	lv_style_set_text_color(&style_screen_time_min_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_time_min_main_main_default, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_letter_space(&style_screen_time_min_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_time_min_main_main_default, 0);
	lv_style_set_text_align(&style_screen_time_min_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_time_min_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_time_min_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_time_min_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_time_min_main_main_default, 0);
	lv_obj_add_style(ui->screen_time_min, &style_screen_time_min_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
}
