/*
 * Copyright 2020 NXP
 *
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_debug_console.h"
#include "lvgl_support.h"
#include "pin_mux.h"
#include "board.h"
#include "lvgl.h"
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

#include "fsl_soc_src.h"

#include "fsl_snvs_hp.h"
#include "rtc_update.h"

extern lv_ui guider_ui;

// Program ROM constants
//static uint8_t draw_MonthDayTable[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//char date[] = "May 24, 2022";
char date_month[]= "Oct";
char date_day[] ="18";
char date_year[] = "2022";
char time_hour[] = "20";
char time_min[] = "20";
char time_sec[] = "20";

#if 0
#define HOURS       20U
#define MINUTES     20U
#define SECONDS     20U

#define YEAR        2022U
#define MONTH       10U
#define DAY         18U
#endif
//uint8_t toggle_colon = 0;

// Global variables
// time registers
//draw_RtcTimeType draw_RtcTime;
snvs_hp_rtc_datetime_t rtcDate;
#if 0
void draw_RTC_Init(void)
{
	// set up timer for RTC operation
	rtcDate.second  = SECONDS;
	rtcDate.minute  = MINUTES;
	rtcDate.hour    = HOURS;

	rtcDate.day     = DAY;
	rtcDate.month   = MONTH;
	rtcDate.year    = YEAR;
}
#endif
/*
// Animate the Clock & Date
void draw_RTC_Animate(void)
{
	draw_RtcTime.seconds++;                                                      // increment seconds
	if(draw_RtcTime.seconds > 59)                                        // check seconds overflow
	{
		draw_RtcTime.seconds -= 60;
		draw_RtcTime.minutes++;                                              // increment minutes
		if(draw_RtcTime.minutes > 59)                                // check minutes overflow
		{
			draw_RtcTime.minutes -= 60;
			draw_RtcTime.hours++;                                                // increment hours
			if(draw_RtcTime.hours > 23)                          // check hours overflow
			{
				draw_RtcTime.hours -= 24;
				draw_RtcTime.day++;                                          // increment days
				if(draw_RtcTime.day == draw_MonthDayTable[draw_RtcTime.month-1])// check days overflow
				{
					draw_RtcTime.day = 1;
					draw_RtcTime.month++;                                // increment months
					if(draw_RtcTime.month == 13)         // check months overflow
					{
						draw_RtcTime.month = 1;
						draw_RtcTime.year++;                 // increment years
					}
				}
			}
		}
	}

}
*/
#if 1
// Convert Month to text name
void draw_convert_Month_to_Text (void)
{
	if(rtcDate.month == 1)
	{
		date_month[0] = 'J';
		date_month[1] = 'a';
		date_month[2] = 'n';
	}
	else if(rtcDate.month == 2)
	{
		date_month[0] = 'F';
		date_month[1] = 'e';
		date_month[2] = 'b';
	}
	else if(rtcDate.month == 3)
	{
		date_month[0] = 'M';
		date_month[1] = 'a';
		date_month[2] = 'r';
	}
	else if(rtcDate.month == 4)
	{
		date_month[0] = 'A';
		date_month[1] = 'p';
		date_month[2] = 'r';
	}
	else if(rtcDate.month == 5)
	{
		date_month[0] = 'M';
		date_month[1] = 'a';
		date_month[2] = 'y';
	}
	else if(rtcDate.month == 6)
	{
		date_month[0] = 'J';
		date_month[1] = 'u';
		date_month[2] = 'n';
	}
	else if(rtcDate.month == 7)
	{
		date_month[0] = 'J';
		date_month[1] = 'u';
		date_month[2] = 'l';
	}
	else if(rtcDate.month == 8)
	{
		date_month[0] = 'A';
		date_month[1] = 'u';
		date_month[2] = 'g';
	}
	else if(rtcDate.month == 9)
	{
		date_month[0] = 'S';
		date_month[1] = 'e';
		date_month[2] = 'p';
	}
	else if(rtcDate.month == 10)
	{
		date_month[0] = 'O';
		date_month[1] = 'c';
		date_month[2] = 't';
	}
	else if(rtcDate.month == 11)
	{
		date_month[0] = 'N';
		date_month[1] = 'o';
		date_month[2] = 'v';
	}
	else if(rtcDate.month == 12)
	{
		date_month[0] = 'D';
		date_month[1] = 'e';
		date_month[2] = 'c';
	}
	else
	{
		// Nop
	}

}

// Convert Day-Decimal to day-char
void draw_convert_day_to_Text(void)
{

	date_day[0] = (rtcDate.day / 10) + 0x30;
	date_day[1] = (rtcDate.day % 10) + 0x30;

}

// Convert year-Decimal to year-char
void draw_convert_year_to_Text(void)
{
    // 8,9,10,11
	date_year[3] = (rtcDate.year % 10) + 0x30;
	date_year[2] = ((rtcDate.year/10) % 10) + 0x30;
	date_year[1]  = ((rtcDate.year/100) % 10) + 0x30;
	date_year[0]  = ((rtcDate.year/1000) % 10) + 0x30;

}

// Convert time-Decimal to time-char
void draw_convert_Time_to_Text(void)
{

	// hour
	time_hour[0] = (rtcDate.hour / 10) + 0x30;
	time_hour[1] = (rtcDate.hour % 10) + 0x30;
	// min
	time_min[0] = (rtcDate.minute / 10) + 0x30;
	time_min[1] = (rtcDate.minute % 10) + 0x30;
	// sec
	//time_sec[0] = (rtcDate.second / 10) + 0x30;
	//time_sec[1] = (rtcDate.second % 10) + 0x30;

}
#endif

/* Set Weekday */
const char * calcWeekDay(uint16_t year,uint8_t month, uint8_t day)
{
	int weekday;
    if (month == 1 || month == 2 ) {
        month += 12;
        year --;
    }
     weekday = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	 
	 switch (weekday) {
		 case 0: return "ÐÇÆÚÒ»";
		 case 1: return "ÐÇÆÚ¶þ";
		 case 2: return "ÐÇÆÚÈý";
		 case 3: return "ÐÇÆÚËÄ";
		 case 4: return "ÐÇÆÚÎå";
		 case 5: return "ÐÇÆÚÁù";
		 case 6: return "ÐÇÆÚÈÕ";
		 default: return  "ÐÇÆÚÈÕ";
	 }
}

//update time on screen
void draw_date_Time_update(void)
{
  SNVS_HP_RTC_GetDatetime(SNVS, &rtcDate);
  //set date
  draw_convert_Month_to_Text();
  draw_convert_day_to_Text();
  draw_convert_year_to_Text();
  lv_label_set_text(guider_ui.screen_date_month, date_month);
  lv_label_set_text(guider_ui.screen_date_day, date_day);
  lv_label_set_text(guider_ui.screen_date_year, date_year);

  /*
  if(toggle_colon)
  {
  //		lv_obj_clear_flag(guider_ui.screen_drawing_canvas_triangle_L_1, LV_OBJ_FLAG_HIDDEN);
  lv_label_set_text(guider_ui.screen_drawing_Time_level_drawing_0, ":");
  toggle_colon = 0;
}
	else
  {
  //		lv_obj_add_flag(guider_ui.screen_drawing_canvas_triangle_L_1, LV_OBJ_FLAG_HIDDEN);
  lv_label_set_text(guider_ui.screen_drawing_Time_level_drawing_0, " ");
  toggle_colon = 1;
}
  */
  //set time
  draw_convert_Time_to_Text();
  lv_label_set_text(guider_ui.screen_time_hour, time_hour);
  lv_label_set_text(guider_ui.screen_time_min, time_min);
  //lv_label_set_text(guider_ui.screen_time_sec, time_sec);
  
}