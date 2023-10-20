/*
 * Copyright 2020 NXP
 *
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
 
#ifndef DRAW_TASK_H
#define DRAW_TASK_H

//#include "_stdint.h"


// Animate the Clock & Date
void draw_RTC_Init(void);
void draw_RTC_Animate(void);
void draw_date_Time_update(void);

#endif