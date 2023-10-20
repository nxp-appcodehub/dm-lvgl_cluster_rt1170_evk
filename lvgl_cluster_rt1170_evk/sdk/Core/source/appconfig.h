/*
 * Copyright 2020 NXP
 *
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __APP_CONFIG_H_
#define __APP_CONFIG_H_

#if 0  
/* Definition of symbols for preproccessor */
#if defined(XIP_EXTERNAL_FLASH) && (XIP_EXTERNAL_FLASH == 1)
#define XIP_BOOT_HEADER_ENABLE 1
#define XIP_BOOT_HEADER_DCD_ENABLE 0
#endif
#define USB_STACK_FREERTOS
#define USB_STACK_FREERTOS_HEAP_SIZE 32768
#define DATA_SECTION_IS_CACHEABLE 1
#define FSL_RTOS_FREE_RTOS
#define DEBUG_CONSOLE_TRANSFER_NON_BLOCKING
#define SERIAL_PORT_TYPE_USBCDC 1
#define PRINTF_FLOAT_ENABLE 0
#define SCANF_FLOAT_ENABLE 0
#define PRINTF_ADVANCED_ENABLE 1
#define SCANF_ADVANCED_ENABLE 0
#define SERIAL_PORT_TYPE_UART 1
#define SHELL_USE_COMMON_TASK 0
#define SERIAL_MANAGER_USE_COMMON_TASK 0
//#define OSA_USED
#define USE_SDRAM
//#define FSL_OSA_TASK_ENABLE 1
//#define DEBUG_CONSOLE_UART_INDEX 11
#define USB_CDC_SERIAL_MANAGER_RUN_NO_HOST 1
#define SERIAL_MANAGER_TASK_HANDLE_TX 0

/* Use LCDIFV2 by default, could use ELCDIF by changing this macro.
   DEMO_DISPLAY_CONTROLLER_ELCDIF  0
   DEMO_DISPLAY_CONTROLLER_LCDIFV2 1
*/
#define DEMO_DISPLAY_CONTROLLER DEMO_DISPLAY_CONTROLLER_LCDIFV2
#endif
/* Definition to enable system logging */
#define LOGGING_CONFIG_ENABLE
#define LOGGING_MAIN_BIT                (31U) /* most significant bit for main task */
#define LOGGING_PEER_BIT                (30U)


/* Definition for the GPT used for task run time status */  
#define CPU_LD_GPT_IRQ_ID         GPT2_IRQn
#define CPU_LD_GPT                GPT2
#define CPU_LD_GPT_IRQHandler     GPT2_IRQHandler
/* Get source clock for GPT driver (GPT prescaler = 0) */
#define CPU_LD_GPT_CLK_FREQ       CLOCK_GetFreq(kCLOCK_OscRc48MDiv2)



/* Task priority definition */
#define LOGGING_OUT_TASK_PRIORITY               (tskIDLE_PRIORITY + 1)
#define LOGGING_OUT_TASK_STACK_SIZE             (1024U)

#define SHELL_OUT_TASK_PRIORITY                 (tskIDLE_PRIORITY + 2)
#define SHELL_OUT_TASK_STACK_SIZE               (1024U)

#define SHELL_TASK_PRIORITY                     (tskIDLE_PRIORITY + 3)
#define SHELL_TASK_STACK_SIZE                   (1024U)

  
#endif /* __APP_CONFIG_H_ */