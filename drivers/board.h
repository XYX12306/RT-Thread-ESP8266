/*
 * File      : board.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2009 RT-Thread Develop Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017-10-05     flyingcys    add board.h to this bsp
 */
    
#ifndef __BOARD_H__
#define __BOARD_H__


#include "uart.h"

extern char _heap_start;
#define ESP8266_SRAM_END          (0x40000000)


void rt_hw_board_init(void);

#endif