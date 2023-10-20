/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

void events_init(lv_ui *ui)
{
}
#if 0
static void screen_imgbtn1_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_PRESSED:
	{
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
		{
			if (guider_ui.screen_2_del == true)
				setup_scr_screen_2(&guider_ui);
			lv_scr_load_anim(guider_ui.screen_2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 10, 10, false);
		}
		guider_ui.screen_del = false;
	}
		break;
	default:
		break;
	}
}

void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_imgbtn1_1, screen_imgbtn1_1_event_handler, LV_EVENT_ALL, NULL);
}

static void screen_2_imgbtn2_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_PRESSED:
	{
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
		{
			if (guider_ui.screen_del == true)
				setup_scr_screen(&guider_ui);
			lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 10, 10, false);
		}
		guider_ui.screen_2_del = false;
	}
		break;
	default:
		break;
	}
}

void events_init_screen_2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_2_imgbtn2_1, screen_2_imgbtn2_1_event_handler, LV_EVENT_ALL, NULL);
}
#endif