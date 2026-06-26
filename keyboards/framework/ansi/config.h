// Copyright 2022 Framework Computer
// SPDX-License-Identifier: GPL-2.0-or-later

#define MATRIX_COLS 16
#define MATRIX_ROWS 8

#define RGB_MATRIX_LED_COUNT 97

#define IS31FL3743A_DRIVER_COUNT 2
#define IS31FL3743A_I2C_ADDRESS_1 0b0100000
#define IS31FL3743A_I2C_ADDRESS_2 0b0100011
// Enable only the first 9 SW and disable software shutdown
#define IS31FL3743A_CONFIGURATION 0x21

// Limit current to ensure max current draw is just about 500mA
// when white att 100% brightness
#define IS31FL3743A_GLOBAL_CURRENT 104
