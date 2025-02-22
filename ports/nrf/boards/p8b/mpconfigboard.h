/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Glenn Ruben Bakke
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#define MICROPY_HW_BOARD_NAME       "COLMI P8b"
#define MICROPY_HW_NUS_NAME         "P8b"
#define MICROPY_HW_MCU_NAME         "NRF52832"
#define MICROPY_PY_SYS_PLATFORM     "nrf52"

#define MICROPY_PY_MACHINE_UART     (0)
#define MICROPY_PY_MACHINE_HW_PWM   (1)
#define MICROPY_PY_MACHINE_HW_SPI   (1)
#define MICROPY_PY_MACHINE_TIMER    (1)
#define MICROPY_PY_MACHINE_RTCOUNTER (1)
#define MICROPY_PY_MACHINE_I2C      (1)
#define MICROPY_PY_MACHINE_ADC      (1)
#define MICROPY_PY_MACHINE_TEMP     (1)
#define MICROPY_PY_RANDOM_HW_RNG    (1)
#define MICROPY_PY_MACHINE_DFU_BOOTLOADER (1)
#define MICROPY_PY_MACHINE_WDT      (1)

#define MICROPY_EMIT_THUMB          (1)

#define MICROPY_HW_HAS_LED          (0)
#define MICROPY_HW_LED_COUNT        (0)
#define MICROPY_HW_LED_PULLUP       (0)

// WDT config
#define MICROPY_HW_HAS_WDT_BUTTON   (1)
#define MICROPY_HW_WDT_BUTTON       (17)
#define MICROPY_HW_WDT_BUTTON_ACTIVE (1) // active high
#define MICROPY_HW_WDT_BUTTON_PULL  (0)  // no pull up/down

// UART config
#define MICROPY_HW_UART1_RX         (15) /* not connected */
#define MICROPY_HW_UART1_TX         (11)
#define MICROPY_HW_UART1_HWFC       (0)

// SPI0 config
#define MICROPY_HW_SPI0_NAME        "SPI0"
#define MICROPY_HW_SPI0_SCK         (2)
#define MICROPY_HW_SPI0_MOSI        (3)
#define MICROPY_HW_SPI0_MISO        (4)

#define MICROPY_HW_PWM0_NAME        "PWM0"
#define MICROPY_HW_PWM1_NAME        "PWM1"
#define MICROPY_HW_PWM2_NAME        "PWM2"

#define MICROPY_MBFS                (0)
#define MICROPY_VFS                 (1)
//MICROPY_VFS_LFS2 is defined via the command line to ensure the
//library code gets built

#define HELP_TEXT_BOARD_LED         ""
