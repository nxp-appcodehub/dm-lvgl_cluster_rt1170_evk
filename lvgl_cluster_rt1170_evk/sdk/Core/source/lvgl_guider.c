/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "FreeRTOS.h"
#include "task.h"

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

#include "queue.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* 1 ms per tick. */
#ifndef LVGL_TICK_MS
#define LVGL_TICK_MS 1U
#endif

/* lv_task_handler is called every 5-tick. */
#ifndef LVGL_TASK_PERIOD_TICK
#define LVGL_TASK_PERIOD_TICK 5U
#endif

#define HOURS       20U
#define MINUTES     20U
#define SECONDS     20U

#define YEAR        2022U
#define MONTH       10U
#define DAY         18U
/*******************************************************************************
 * Variables
 ******************************************************************************/
static volatile bool s_lvgl_initialized = false;
static volatile bool s_time_initialized = false;
lv_ui guider_ui;


static volatile uint32_t s_tick        = 0U;
static volatile bool s_lvglTaskPending = false;

static void shell_task(void *pvParameters);;
extern void Shell_Init(void);

//static lv_style_t style_0_opa;

snvs_hp_rtc_datetime_t g_rtcdate;
volatile uint8_t g_timeupdated;
QueueHandle_t queueHandle;
/*******************************************************************************
 * Prototypes
 ******************************************************************************/

#if LV_USE_LOG
static void print_cb(const char *buf)
{
    PRINTF("\r%s\n", buf);
}
#endif

void rtc_config(void)
{
  snvs_hp_rtc_datetime_t rtcDate;
  snvs_hp_rtc_config_t snvsRtcConfig;
  
  SNVS_HP_RTC_GetDefaultConfig(&snvsRtcConfig);
  SNVS_HP_RTC_Init(SNVS, &snvsRtcConfig);
  
  //draw_RTC_Init();
  // set up timer for RTC operation
  rtcDate.second  = SECONDS;
  rtcDate.minute  = MINUTES;
  rtcDate.hour    = HOURS;
  
  rtcDate.day     = DAY;
  rtcDate.month   = MONTH;
  rtcDate.year    = YEAR;
  
  SNVS_HP_RTC_SetDatetime(SNVS, &rtcDate);
  SNVS_HP_RTC_StartTimer(SNVS);
  
  SNVS_HP_RTC_GetDatetime(SNVS, &rtcDate);
}

static void Clock_Thread(void *pvParameters)
{
  snvs_hp_rtc_datetime_t rtcDate;
  
  queueHandle = xQueueCreate(1, sizeof(snvs_hp_rtc_datetime_t)); 
  
  while(1) {
    if (g_timeupdated) {
      /* Set RTC time to default time and date and start the RTC*/
      SNVS_HP_RTC_StopTimer(SNVS);
      SNVS_HP_RTC_SetDatetime(SNVS, &g_rtcdate);
      SNVS_HP_RTC_StartTimer(SNVS);
      rtcDate = g_rtcdate;
      g_timeupdated = 0;
    }
    else {
      /* Get date time */
      SNVS_HP_RTC_GetDatetime(SNVS, &rtcDate);
      if (s_time_initialized){        
        draw_date_Time_update();        
      }

    }
    
    xQueueOverwrite(queueHandle, &rtcDate);
    vTaskDelay(configTICK_RATE_HZ);  //1 second
  }
}

void update_style_cover(lv_ui *ui){
  
//  lv_style_reset(&style_0_opa);
//  lv_style_init(&style_0_opa);  
//  lv_style_set_img_opa(&style_0_opa, LV_OPA_COVER);
  
  lv_obj_clear_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_light_brakeOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_light_highbeamOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_light_batteryOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_light_ABSOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_light_engineOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_light_oilOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_auto_start, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_TCS_on, LV_OBJ_FLAG_HIDDEN);
  
  lv_obj_clear_flag(guider_ui.screen_left_1, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_left_2, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_left_3, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_left_4, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_left_5, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_left_6, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_mid_1, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_mid_2, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_mid_3, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_mid_4, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_mid_5, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_mid_6, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_right_1, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_right_2, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_right_3, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_right_4, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_right_5, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(guider_ui.screen_right_6, LV_OBJ_FLAG_HIDDEN);
}
/*
void update_style_cover(lv_ui *ui){
  
  lv_style_reset(&style_0_opa);
  lv_style_init(&style_0_opa);  
  lv_style_set_img_opa(&style_0_opa, LV_OPA_COVER);
  
  lv_obj_add_style(guider_ui.screen_signal_leftOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_signal_rightOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_light_brakeOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_light_highbeamOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_light_batteryOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_light_ABSOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_light_engineOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_light_oilOn, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_auto_start, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_TCS_on, &style_0_opa, 0);
  
  lv_obj_add_style(guider_ui.screen_left_1, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_left_2, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_left_3, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_left_4, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_left_5, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_left_6, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_mid_1, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_mid_2, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_mid_3, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_mid_4, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_mid_5, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_mid_6, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_right_1, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_right_2, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_right_3, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_right_4, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_right_5, &style_0_opa, 0);
  lv_obj_add_style(guider_ui.screen_right_6, &style_0_opa, 0);
}
*/
void update_style_0(lv_ui *ui){
  
  lv_obj_add_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_light_brakeOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_light_highbeamOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_light_batteryOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_light_ABSOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_light_engineOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_light_oilOn, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_auto_start, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_TCS_on, LV_OBJ_FLAG_HIDDEN);
  
  lv_obj_add_flag(guider_ui.screen_left_1, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_left_2, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_left_3, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_left_4, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_left_5, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_left_6, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_mid_1, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_mid_2, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_mid_3, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_mid_4, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_mid_5, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_mid_6, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_right_1, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_right_2, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_right_3, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_right_4, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_right_5, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_right_6, LV_OBJ_FLAG_HIDDEN);
}

void update_tick_style_0(lv_ui *ui){
  
  lv_obj_add_flag(guider_ui.screen_tick1, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick2, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick3, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick4, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick5, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick6, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick7, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick8, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick9, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick10, LV_OBJ_FLAG_HIDDEN);

  lv_obj_add_flag(guider_ui.screen_tick11, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick12, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick13, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick14, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick15, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick16, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick17, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick18, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick19, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick20, LV_OBJ_FLAG_HIDDEN);

  lv_obj_add_flag(guider_ui.screen_tick21, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick22, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick23, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick24, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick25, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick26, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick27, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick28, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick29, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick30, LV_OBJ_FLAG_HIDDEN);

  lv_obj_add_flag(guider_ui.screen_tick31, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick32, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick33, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick34, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick35, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick36, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick37, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick38, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick39, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick40, LV_OBJ_FLAG_HIDDEN);

  lv_obj_add_flag(guider_ui.screen_tick41, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick42, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick43, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick44, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick45, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick46, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick47, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick48, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick49, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick50, LV_OBJ_FLAG_HIDDEN); 

  lv_obj_add_flag(guider_ui.screen_tick51, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick52, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick53, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick54, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick55, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick56, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick57, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick58, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick59, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick60, LV_OBJ_FLAG_HIDDEN); 

  lv_obj_add_flag(guider_ui.screen_tick61, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick62, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick63, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick64, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick65, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick66, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick67, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick68, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick69, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick70, LV_OBJ_FLAG_HIDDEN); 
 
  lv_obj_add_flag(guider_ui.screen_tick71, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick72, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick73, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick74, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick75, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick76, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick77, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick78, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick79, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(guider_ui.screen_tick80, LV_OBJ_FLAG_HIDDEN);
  
  lv_obj_add_flag(guider_ui.screen_tick81, LV_OBJ_FLAG_HIDDEN);
}
/*
void update_style_0(lv_ui *ui){
  
  lv_obj_remove_style(guider_ui.screen_signal_leftOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_signal_rightOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_light_brakeOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_light_highbeamOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_light_batteryOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_light_ABSOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_light_engineOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_light_oilOn, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_auto_start, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_TCS_on, &style_0_opa, 0);
  
  lv_obj_remove_style(guider_ui.screen_left_1, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_left_2, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_left_3, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_left_4, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_left_5, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_left_6, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_mid_1, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_mid_2, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_mid_3, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_mid_4, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_mid_5, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_mid_6, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_right_1, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_right_2, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_right_3, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_right_4, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_right_5, &style_0_opa, 0);
  lv_obj_remove_style(guider_ui.screen_right_6, &style_0_opa, 0); 
}
*/
void Start_anim(void)
{
    update_style_cover(&guider_ui); 
    tick_glow(&guider_ui);

}

void Del_anim(void)
{
    update_style_0(&guider_ui);
    del_tick_glow(&guider_ui);
    
}

static void Panel_main_Task(void *param)
{
  int i = 0;

#if LV_USE_LOG
    lv_log_register_print_cb(print_cb);
#endif

    lv_port_pre_init();
    lv_init();
    lv_port_disp_init();
//    lv_port_indev_init();

    s_lvgl_initialized = true;    
    
    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);
    lv_task_handler();
    
    vTaskDelay(1000);
    setup_panel_ui(&guider_ui);
    date_time(&guider_ui);
    
    s_time_initialized = true;
        
    draw_date_Time_update();
    lv_task_handler();
    vTaskDelay(2000);

        for (; ; )
        {          
          i++;
          
          if (i == 1)
          {
            //draw_date_Time_update();
            Start_anim(); 
            update_tick_style_0(&guider_ui);
            vTaskDelay(2000);
          }
          
          if (i == 10)
          {
            Del_anim();
            vTaskDelay(400);
          }
          
          if (i == 20)
          {
            Start_anim(); 
            //draw_date_Time_update();
            vTaskDelay(400);
          }
          
          if (i == 30)
          {
            Del_anim();
            //draw_date_Time_update();
            vTaskDelay(400);
          }
          
          if (i == 40)
          {
            Start_anim();  
            //draw_date_Time_update();
            vTaskDelay(400);
          }
          
          if (i == 50)
          {
            Del_anim();
            vTaskDelay(100);
            //draw_date_Time_update();
          }        
         
          if (i == 100)
          {
            lv_obj_clear_flag(guider_ui.screen_auto_start, LV_OBJ_FLAG_HIDDEN);
            vTaskDelay(10);
            //draw_date_Time_update();
          }
          
          if (i == 101)
          {
            lv_obj_clear_flag(guider_ui.screen_tick1, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "001");
            lv_label_set_text(guider_ui.screen_Gear, "1");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 102)
          {
            lv_obj_clear_flag(guider_ui.screen_tick2, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "002");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 103)
          {
            lv_obj_clear_flag(guider_ui.screen_tick3, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "003");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 104)
          {
            lv_obj_clear_flag(guider_ui.screen_tick4, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "004");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
           vTaskDelay(5);
          }
          
          if (i == 105)
          {
            lv_obj_clear_flag(guider_ui.screen_tick5, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "005");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 106)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick6, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "006");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 107)
          {
            lv_obj_clear_flag(guider_ui.screen_tick7, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "007");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 108)
          {
            lv_obj_add_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick8, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "008");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 109)
          {
            lv_obj_clear_flag(guider_ui.screen_tick9, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "009");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 110)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick10, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "010");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 111)
          {
            lv_obj_clear_flag(guider_ui.screen_tick11, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "011");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 112)
          {
            lv_obj_add_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick12, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "012");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 113)
          {
            lv_obj_clear_flag(guider_ui.screen_tick13, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "013");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 114)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick14, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "014");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 115)
          {
            lv_obj_clear_flag(guider_ui.screen_tick15, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "015");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 116)
          {
            lv_obj_add_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick16, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "016");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 117)
          {
            lv_obj_clear_flag(guider_ui.screen_tick17, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "017");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 118)
          {
            lv_obj_clear_flag(guider_ui.screen_tick18, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "018");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 119)
          {
            lv_obj_clear_flag(guider_ui.screen_tick19, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "019");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 120)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick20, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "020");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 121)
          {
            lv_obj_clear_flag(guider_ui.screen_tick21, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "021");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }  
          
          if (i == 122)
          {
            lv_obj_add_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick22, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "022");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 123)
          {
            lv_obj_clear_flag(guider_ui.screen_tick23, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "023");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 124)
          {
            lv_obj_clear_flag(guider_ui.screen_tick24, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "025");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 125)
          {
            lv_obj_clear_flag(guider_ui.screen_tick25, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "028");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 126)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick26, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "030");
            lv_label_set_text(guider_ui.screen_Gear, "2");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 127)
          {
            lv_obj_clear_flag(guider_ui.screen_tick27, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "032");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 128)
          {
            lv_obj_add_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick28, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "035");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 129)
          {
            lv_obj_clear_flag(guider_ui.screen_tick29, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "038");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
          }
          
          if (i == 130)
          {
            lv_obj_clear_flag(guider_ui.screen_tick30, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "040");
            lv_img_set_angle(guider_ui.screen_compass_pointer,(i - 100) * 30);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 131)
          {
            lv_obj_clear_flag(guider_ui.screen_tick31, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "042");
            vTaskDelay(5);
          }
          
          if (i == 132)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick32, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "045");
            vTaskDelay(5);
          }
          
          if (i == 133)
          {
            lv_obj_clear_flag(guider_ui.screen_tick33, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "048");
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 134)
          {
            lv_obj_add_flag(guider_ui.screen_signal_leftOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_tick34, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "050");
            lv_label_set_text(guider_ui.screen_Gear, "3");
            vTaskDelay(5);
          }
          
          if (i == 135)
          {
            lv_obj_clear_flag(guider_ui.screen_tick35, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "052");
            vTaskDelay(5);
          }
          
          if (i == 136)
          {
            lv_obj_clear_flag(guider_ui.screen_tick36, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "055");
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 137)
          {
            lv_obj_clear_flag(guider_ui.screen_tick37, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "058");
            vTaskDelay(5);
          }
          
          if (i == 138)
          {
            lv_obj_clear_flag(guider_ui.screen_tick38, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "060");
            vTaskDelay(5);
          }
          
          if (i == 139)
          {
            lv_obj_clear_flag(guider_ui.screen_tick39, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "0062");
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 140)
          {
            lv_obj_clear_flag(guider_ui.screen_tick40, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "065");
            vTaskDelay(5);
          }
          
          if (i == 141)
          {
            lv_obj_clear_flag(guider_ui.screen_tick41, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "068");
            vTaskDelay(5);
          }
          
          if (i == 142)
          {
            lv_obj_clear_flag(guider_ui.screen_tick42, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "070");
            lv_label_set_text(guider_ui.screen_Gear, "4");
            vTaskDelay(5);
            //draw_date_Time_update();
          } 
          
          if (i == 143)
          {
            lv_obj_clear_flag(guider_ui.screen_tick43, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "072");
            vTaskDelay(5);
          }
          
          if (i == 144)
          {
            lv_obj_clear_flag(guider_ui.screen_tick44, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "075");
            vTaskDelay(5);
          }
          
          if (i == 145)
          {
            lv_obj_clear_flag(guider_ui.screen_tick45, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "078");
            vTaskDelay(5);
          }
          
          if (i == 146)
          {
            lv_obj_clear_flag(guider_ui.screen_tick46, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "080");
            lv_label_set_text(guider_ui.screen_Gear, "5");
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 147)
          {
            lv_obj_clear_flag(guider_ui.screen_tick47, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "082");
            vTaskDelay(5);
          }
          
          if (i == 148)
          {
            lv_obj_clear_flag(guider_ui.screen_tick48, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "085");
            vTaskDelay(5);
          }
          
          if (i == 149)
          {
            lv_obj_clear_flag(guider_ui.screen_tick49, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "088");
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 150)
          {
            lv_obj_clear_flag(guider_ui.screen_tick50, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "090");
            vTaskDelay(5);
          }
          
          if (i == 151)
          {
            lv_obj_clear_flag(guider_ui.screen_tick51, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "092");
            vTaskDelay(5);
          }
          
          if (i == 152)
          {
            lv_obj_clear_flag(guider_ui.screen_tick52, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "095");
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 153)
          {
            lv_obj_clear_flag(guider_ui.screen_tick53, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "096");
            vTaskDelay(5);
          }
          
          if (i == 154)
          {
            lv_obj_clear_flag(guider_ui.screen_tick54, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "097");
            vTaskDelay(5);
          }
          
          if (i == 155)
          {
            lv_obj_clear_flag(guider_ui.screen_tick55, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "098");
            vTaskDelay(5);
          }
          
          if (i == 156)
          {
            lv_obj_clear_flag(guider_ui.screen_tick56, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "099");
            vTaskDelay(5);
          }
          
          if (i == 157)
          {
            lv_obj_clear_flag(guider_ui.screen_tick57, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "100");
            lv_label_set_text(guider_ui.screen_Gear, "6");
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 158)
          {
            lv_obj_clear_flag(guider_ui.screen_tick58, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "101");
            vTaskDelay(5);
          }
          
          if (i == 159)
          {
            lv_obj_clear_flag(guider_ui.screen_tick59, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "102");
            vTaskDelay(5);
          }
          
          if (i == 160)
          {
            lv_obj_clear_flag(guider_ui.screen_tick60, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "103");
            vTaskDelay(5);
          }
          
          if (i == 161)
          {
            lv_obj_clear_flag(guider_ui.screen_tick61, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "104");
            vTaskDelay(5);
          }
          
          if (i == 162)
          {
            lv_obj_clear_flag(guider_ui.screen_tick62, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "105");
            vTaskDelay(5);
          }
          
          if (i == 163)
          {
            lv_obj_clear_flag(guider_ui.screen_tick63, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "106");
            vTaskDelay(5);
          }  
          
          if (i == 164)
          {
            lv_obj_clear_flag(guider_ui.screen_tick64, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "107");
            vTaskDelay(5);
          }
          
          if (i == 165)
          {
            lv_obj_clear_flag(guider_ui.screen_tick65, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "108");
            vTaskDelay(5);
          }
          
          if (i == 166)
          {
            lv_obj_clear_flag(guider_ui.screen_tick66, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "109");
            vTaskDelay(5);
          }
          
          if (i == 167)
          {
            lv_obj_clear_flag(guider_ui.screen_tick67, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "110");
            lv_obj_clear_flag(guider_ui.screen_TCS_on, LV_OBJ_FLAG_HIDDEN);
            vTaskDelay(5);
            //draw_date_Time_update();
          }
          
          if (i == 168)
          {
            lv_obj_clear_flag(guider_ui.screen_tick68, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "111");
            vTaskDelay(5);
          }
          
          if (i == 169)
          {
            lv_obj_clear_flag(guider_ui.screen_tick69, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "112");
            vTaskDelay(5);
          }
          
          if (i == 170)
          {
            lv_obj_clear_flag(guider_ui.screen_tick70, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "113");
            vTaskDelay(5);
          }
          
          if (i == 172)
          {
            lv_obj_clear_flag(guider_ui.screen_tick71, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "114");
            vTaskDelay(5);
          }
          
          if (i == 174)
          {
            lv_obj_clear_flag(guider_ui.screen_tick72, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "115");
            vTaskDelay(5);
          }
          
          if (i == 178)
          {
            lv_obj_clear_flag(guider_ui.screen_tick73, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "116");
            vTaskDelay(10);
          }
          
          if (i == 182)
          {
            lv_obj_clear_flag(guider_ui.screen_tick74, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "117");
            vTaskDelay(100);
          }
          
          if (i == 188)
          {
            lv_obj_clear_flag(guider_ui.screen_tick75, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "118");
            vTaskDelay(100);
            
          }
          
          if (i == 196)
          {
            lv_obj_clear_flag(guider_ui.screen_tick76, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "119");
            vTaskDelay(100);
            
          }
          
          if (i == 206)
          {
            lv_obj_clear_flag(guider_ui.screen_tick77, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "120");
            vTaskDelay(200);
            
          }
          
          if (i == 218)
          {
            lv_obj_clear_flag(guider_ui.screen_tick78, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "121");
            vTaskDelay(200);
            
          }
          
          if (i == 232)
          {
            lv_obj_clear_flag(guider_ui.screen_tick79, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "122");
            vTaskDelay(200);
          }
          
          if (i == 248)
          {
            lv_obj_clear_flag(guider_ui.screen_tick80, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "123");
            vTaskDelay(300);
            
          }
          
          if (i == 260)
          {
            lv_obj_clear_flag(guider_ui.screen_tick81, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "124");
            vTaskDelay(400);
            
          }
          /*first round end*/ 
          if (i == 360)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_light_brakeOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick81, LV_OBJ_FLAG_HIDDEN);
            vTaskDelay(5);
          }
          
          if (i == 361)
          {
            lv_obj_add_flag(guider_ui.screen_tick80, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "123");
            vTaskDelay(5);
          }
          
          if (i == 363)
          {
            lv_obj_add_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick79, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "122");
            vTaskDelay(5);
          }
          
          if (i == 364)
          {
            lv_obj_add_flag(guider_ui.screen_tick78, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "121");
            vTaskDelay(5);
          }
          
          if (i == 365)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick77, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "120");
            vTaskDelay(5);
          }
          
          if (i == 366)
          {
            lv_obj_add_flag(guider_ui.screen_tick76, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "119");
            vTaskDelay(5);
          }
          
          if (i == 367)
          {
            lv_obj_add_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick75, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "118");
            vTaskDelay(5);
          }
          
          if (i == 368)
          {
            lv_obj_add_flag(guider_ui.screen_tick74, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "117");
            vTaskDelay(5);
          }
          
          if (i == 369)
          {
            lv_obj_clear_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick73, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "116");
            vTaskDelay(5);
          }
          
          if (i == 370)
          {
            lv_obj_add_flag(guider_ui.screen_tick72, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "115");
            vTaskDelay(5);
          }
          
          if (i == 371)
          {
            lv_obj_add_flag(guider_ui.screen_signal_rightOn, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick71, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "114");
            vTaskDelay(5);
          }
          
          if (i == 372)
          {
            lv_obj_add_flag(guider_ui.screen_tick70, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "113");
            vTaskDelay(5);
          }
          
          if (i == 373)
          {
            lv_obj_add_flag(guider_ui.screen_tick69, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "112");
            vTaskDelay(5);
          }
          
          if (i == 374)
          {
            lv_obj_add_flag(guider_ui.screen_tick68, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "111");
            vTaskDelay(5);
          }
          
          if (i == 375)
          {
            lv_obj_add_flag(guider_ui.screen_tick67, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "110");
            lv_obj_add_flag(guider_ui.screen_TCS_on, LV_OBJ_FLAG_HIDDEN);
            vTaskDelay(5);
          }
          
          if (i == 376)
          {
            lv_obj_add_flag(guider_ui.screen_tick66, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "109");
            vTaskDelay(5);
          }
          
          if (i == 377)
          {
            lv_obj_add_flag(guider_ui.screen_tick65, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "108");
            vTaskDelay(5);
          }
          
          if (i == 378)
          {
            lv_obj_add_flag(guider_ui.screen_tick64, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "107");
            vTaskDelay(5);
          }
          
          if (i == 380)
          {
            lv_obj_add_flag(guider_ui.screen_tick63, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_light_brakeOn, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "106");
//            vTaskDelay(1000);
          }
          /*second round end*/        
          if (i == 381)
          {
            vTaskDelay(1000);
            lv_obj_clear_flag(guider_ui.screen_tick63, LV_OBJ_FLAG_HIDDEN);
            vTaskDelay(5);
          }  
          
          if (i == 382)
          {
            lv_obj_clear_flag(guider_ui.screen_tick64, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "107");
            vTaskDelay(5);
          }
          
          if (i == 383)
          {
            lv_obj_clear_flag(guider_ui.screen_tick65, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "108");
            vTaskDelay(5);
          }
          
          if (i == 384)
          {
            lv_obj_clear_flag(guider_ui.screen_tick66, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "109");
            vTaskDelay(5);
          }
          
          if (i == 385)
          {
            lv_obj_clear_flag(guider_ui.screen_tick67, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "110");
            vTaskDelay(5);
          }
          
          if (i == 386)
          {
            lv_obj_clear_flag(guider_ui.screen_tick68, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "111");
            vTaskDelay(5);
          }
          
          if (i == 387)
          {
            lv_obj_clear_flag(guider_ui.screen_tick69, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "112");
            vTaskDelay(5);
          }
          
          if (i == 388)
          {
            lv_obj_clear_flag(guider_ui.screen_tick70, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "113");
            vTaskDelay(5);
          }
          
          if (i == 389)
          {
            lv_obj_clear_flag(guider_ui.screen_tick71, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "114");
            vTaskDelay(5);
          }
          
          if (i == 390)
          {
            lv_obj_clear_flag(guider_ui.screen_tick72, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "115");
            vTaskDelay(5);
          }
          
          if (i == 391)
          {
            lv_obj_clear_flag(guider_ui.screen_tick73, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "116");
            vTaskDelay(10);
          }
          
          if (i == 392)
          {
            lv_obj_clear_flag(guider_ui.screen_tick74, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "117");
            vTaskDelay(100);
          }
          
          if (i == 393)
          {
            lv_obj_clear_flag(guider_ui.screen_tick75, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "118");
            vTaskDelay(100);
          }
          
          if (i == 394)
          {
            lv_obj_clear_flag(guider_ui.screen_tick76, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "119");
            vTaskDelay(100);
          }
          
          if (i == 395)
          {
            lv_obj_clear_flag(guider_ui.screen_tick77, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "120");
            vTaskDelay(200);
          }
          
          if (i == 396)
          {
            lv_obj_clear_flag(guider_ui.screen_tick78, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "121");
            vTaskDelay(200);
          }
          
          if (i == 397)
          {
            lv_obj_clear_flag(guider_ui.screen_tick79, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "122");
            vTaskDelay(200);
          }
          
          if (i == 398)
          {
            lv_obj_clear_flag(guider_ui.screen_tick80, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "123");
            vTaskDelay(300);
          }
          
          if (i == 399)
          {
            lv_obj_clear_flag(guider_ui.screen_tick81, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(guider_ui.screen_speed, "124");
//            vTaskDelay(400);
            
          }
          
          if (i == 400)
          {
            vTaskDelay(400);
            lv_obj_add_flag(guider_ui.screen_tick1, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick2, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick3, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick4, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick7, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick8, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick9, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick10, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick11, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick12, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick13, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick14, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick15, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick16, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick17, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick18, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick19, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick20, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick21, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick22, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick23, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick24, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick25, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick26, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick27, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick28, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick29, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick30, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick31, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick32, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick33, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick34, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick35, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick36, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick37, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick38, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick39, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick40, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick41, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick42, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick43, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick44, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick45, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick46, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick47, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick48, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick49, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick50, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick51, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick52, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick53, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick54, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick55, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick56, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick57, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick58, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick59, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick60, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick61, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick62, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick63, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick64, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick65, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick66, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick67, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick68, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick69, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick70, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick71, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick72, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick73, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick74, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick75, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick76, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick77, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick78, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick79, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_tick80, LV_OBJ_FLAG_HIDDEN);     
            lv_obj_add_flag(guider_ui.screen_tick81, LV_OBJ_FLAG_HIDDEN); 
            
            lv_label_set_text(guider_ui.screen_speed, "000");
            lv_label_set_text(guider_ui.screen_Gear, "N");
            
            lv_obj_add_flag(guider_ui.screen_auto_start, LV_OBJ_FLAG_HIDDEN);
            
            lv_img_set_angle(guider_ui.screen_compass_pointer, 0);
            vTaskDelay(5);
            
          }
          
          if (i == 410)
          {
            lv_obj_clear_flag(guider_ui.screen_left_1, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_left_2, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_left_3, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_left_4, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_left_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_left_6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_mid_1, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_mid_2, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_mid_3, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_mid_4, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_mid_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_mid_6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_right_1, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_right_2, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_right_3, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_right_4, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_right_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_right_6, LV_OBJ_FLAG_HIDDEN);
            
            vTaskDelay(1000);
          }
          
          if (i == 420)
          {
            lv_obj_add_flag(guider_ui.screen_left_4, LV_OBJ_FLAG_HIDDEN);
            vTaskDelay(800);
          }
          
          if (i == 421)
          {
            lv_obj_add_flag(guider_ui.screen_left_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_mid_4, LV_OBJ_FLAG_HIDDEN);
            vTaskDelay(800);
          }
          
          if (i == 422)
          {
            lv_obj_clear_flag(guider_ui.screen_left_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(guider_ui.screen_mid_4, LV_OBJ_FLAG_HIDDEN);

            vTaskDelay(600);
          }
          
          if (i == 423)
          {
            lv_obj_clear_flag(guider_ui.screen_left_4, LV_OBJ_FLAG_HIDDEN);

            vTaskDelay(600);
          }
          
          if (i == 424)
          {
            lv_obj_add_flag(guider_ui.screen_left_1, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_left_2, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_left_3, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_left_4, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_left_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_left_6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_mid_1, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_mid_2, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_mid_3, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_mid_4, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_mid_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_mid_6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_right_1, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_right_2, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_right_3, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_right_4, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_right_5, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(guider_ui.screen_right_6, LV_OBJ_FLAG_HIDDEN); 
            
            vTaskDelay(1000);
          }
          
          if (i == 499)
          {
            i = 0;
          } 
          lv_task_handler();
        }  
}

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */
int main(void)
{
//    BaseType_t stat;

    /* Init board hardware. */
    BOARD_ConfigMPU();
    BOARD_BootClockRUN();

    /*
     * Reset the displaymix, otherwise during debugging, the
     * debugger may not reset the display, then the behavior
     * is not right.
     */
    SRC_AssertSliceSoftwareReset(SRC, kSRC_DisplaySlice);

    BOARD_InitLpuartPins();
    BOARD_InitMipiPanelPins();
    BOARD_MIPIPanelTouch_I2C_Init();
    BOARD_InitDebugConsole();
    
    /*Initialize RTC*/
    rtc_config();
    
    if (xTaskCreate(Panel_main_Task, "lvgl_tak", configMINIMAL_STACK_SIZE + 2000, NULL, configMAX_PRIORITIES - 2, NULL) != pdPASS)
    {
      PRINTF("Task creation failed!.\r\n");
      while(1)
        ;
    }

    if (xTaskCreate(shell_task, "Shell_task", configMINIMAL_STACK_SIZE + 1000, NULL, configMAX_PRIORITIES - 3, NULL) != pdPASS)
    {
        PRINTF("Task creation failed!.\r\n");
        while (1)
            ;
    }

    if (xTaskCreate(Clock_Thread, "Clock_thread", configMINIMAL_STACK_SIZE + 2000, NULL, configMAX_PRIORITIES - 5, NULL) != pdPASS)
    {
        PRINTF("Task creation failed!.\r\n");
        while (1)
            ;
    }
   
    vTaskStartScheduler();

    for (;;)
    {
    } /* should never get here */
    

}

static void shell_task(void *pvParameters)
{
    Shell_Init();
    
    vTaskDelay(10);
    
    vTaskDelete(NULL);    
}

/*!
 * @brief Malloc failed hook.
 */
void vApplicationMallocFailedHook(void)
{
    for (;;)
        ;
}

/*!
 * @brief FreeRTOS tick hook.
 */
void vApplicationTickHook(void)
{
    if (s_lvgl_initialized)
    {
        lv_tick_inc(1);
    }
}

/*!
 * @brief Stack overflow hook.
 */
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
    (void)pcTaskName;
    (void)xTask;

    for (;;)
        ;
}
