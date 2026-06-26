// Copyright 2022 Framework Computer
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#if defined(RGB_MATRIX_ENABLE)
// Map CSx_SWy names to upstream SWy_CSx macros
#define CS1_SW1 SW1_CS1
#define CS2_SW1 SW1_CS2
#define CS3_SW1 SW1_CS3
#define CS4_SW1 SW1_CS4
#define CS5_SW1 SW1_CS5
#define CS6_SW1 SW1_CS6
#define CS7_SW1 SW1_CS7
#define CS8_SW1 SW1_CS8
#define CS9_SW1 SW1_CS9
#define CS10_SW1 SW1_CS10
#define CS11_SW1 SW1_CS11
#define CS12_SW1 SW1_CS12
#define CS13_SW1 SW1_CS13
#define CS14_SW1 SW1_CS14
#define CS15_SW1 SW1_CS15
#define CS16_SW1 SW1_CS16
#define CS17_SW1 SW1_CS17
#define CS18_SW1 SW1_CS18
#define CS1_SW2 SW2_CS1
#define CS2_SW2 SW2_CS2
#define CS3_SW2 SW2_CS3
#define CS4_SW2 SW2_CS4
#define CS5_SW2 SW2_CS5
#define CS6_SW2 SW2_CS6
#define CS7_SW2 SW2_CS7
#define CS8_SW2 SW2_CS8
#define CS9_SW2 SW2_CS9
#define CS10_SW2 SW2_CS10
#define CS11_SW2 SW2_CS11
#define CS12_SW2 SW2_CS12
#define CS13_SW2 SW2_CS13
#define CS14_SW2 SW2_CS14
#define CS15_SW2 SW2_CS15
#define CS16_SW2 SW2_CS16
#define CS17_SW2 SW2_CS17
#define CS18_SW2 SW2_CS18
#define CS1_SW3 SW3_CS1
#define CS2_SW3 SW3_CS2
#define CS3_SW3 SW3_CS3
#define CS4_SW3 SW3_CS4
#define CS5_SW3 SW3_CS5
#define CS6_SW3 SW3_CS6
#define CS7_SW3 SW3_CS7
#define CS8_SW3 SW3_CS8
#define CS9_SW3 SW3_CS9
#define CS10_SW3 SW3_CS10
#define CS11_SW3 SW3_CS11
#define CS12_SW3 SW3_CS12
#define CS13_SW3 SW3_CS13
#define CS14_SW3 SW3_CS14
#define CS15_SW3 SW3_CS15
#define CS16_SW3 SW3_CS16
#define CS17_SW3 SW3_CS17
#define CS18_SW3 SW3_CS18
#define CS1_SW4 SW4_CS1
#define CS2_SW4 SW4_CS2
#define CS3_SW4 SW4_CS3
#define CS4_SW4 SW4_CS4
#define CS5_SW4 SW4_CS5
#define CS6_SW4 SW4_CS6
#define CS7_SW4 SW4_CS7
#define CS8_SW4 SW4_CS8
#define CS9_SW4 SW4_CS9
#define CS10_SW4 SW4_CS10
#define CS11_SW4 SW4_CS11
#define CS12_SW4 SW4_CS12
#define CS13_SW4 SW4_CS13
#define CS14_SW4 SW4_CS14
#define CS15_SW4 SW4_CS15
#define CS16_SW4 SW4_CS16
#define CS17_SW4 SW4_CS17
#define CS18_SW4 SW4_CS18
#define CS1_SW5 SW5_CS1
#define CS2_SW5 SW5_CS2
#define CS3_SW5 SW5_CS3
#define CS4_SW5 SW5_CS4
#define CS5_SW5 SW5_CS5
#define CS6_SW5 SW5_CS6
#define CS7_SW5 SW5_CS7
#define CS8_SW5 SW5_CS8
#define CS9_SW5 SW5_CS9
#define CS10_SW5 SW5_CS10
#define CS11_SW5 SW5_CS11
#define CS12_SW5 SW5_CS12
#define CS13_SW5 SW5_CS13
#define CS14_SW5 SW5_CS14
#define CS15_SW5 SW5_CS15
#define CS16_SW5 SW5_CS16
#define CS17_SW5 SW5_CS17
#define CS18_SW5 SW5_CS18
#define CS1_SW6 SW6_CS1
#define CS2_SW6 SW6_CS2
#define CS3_SW6 SW6_CS3
#define CS4_SW6 SW6_CS4
#define CS5_SW6 SW6_CS5
#define CS6_SW6 SW6_CS6
#define CS7_SW6 SW6_CS7
#define CS8_SW6 SW6_CS8
#define CS9_SW6 SW6_CS9
#define CS10_SW6 SW6_CS10
#define CS11_SW6 SW6_CS11
#define CS12_SW6 SW6_CS12
#define CS13_SW6 SW6_CS13
#define CS14_SW6 SW6_CS14
#define CS15_SW6 SW6_CS15
#define CS16_SW6 SW6_CS16
#define CS17_SW6 SW6_CS17
#define CS18_SW6 SW6_CS18
#define CS1_SW7 SW7_CS1
#define CS2_SW7 SW7_CS2
#define CS3_SW7 SW7_CS3
#define CS4_SW7 SW7_CS4
#define CS5_SW7 SW7_CS5
#define CS6_SW7 SW7_CS6
#define CS7_SW7 SW7_CS7
#define CS8_SW7 SW7_CS8
#define CS9_SW7 SW7_CS9
#define CS10_SW7 SW7_CS10
#define CS11_SW7 SW7_CS11
#define CS12_SW7 SW7_CS12
#define CS13_SW7 SW7_CS13
#define CS14_SW7 SW7_CS14
#define CS15_SW7 SW7_CS15
#define CS16_SW7 SW7_CS16
#define CS17_SW7 SW7_CS17
#define CS18_SW7 SW7_CS18
#define CS1_SW8 SW8_CS1
#define CS2_SW8 SW8_CS2
#define CS3_SW8 SW8_CS3
#define CS4_SW8 SW8_CS4
#define CS5_SW8 SW8_CS5
#define CS6_SW8 SW8_CS6
#define CS7_SW8 SW8_CS7
#define CS8_SW8 SW8_CS8
#define CS9_SW8 SW8_CS9
#define CS10_SW8 SW8_CS10
#define CS11_SW8 SW8_CS11
#define CS12_SW8 SW8_CS12
#define CS13_SW8 SW8_CS13
#define CS14_SW8 SW8_CS14
#define CS15_SW8 SW8_CS15
#define CS16_SW8 SW8_CS16
#define CS17_SW8 SW8_CS17
#define CS18_SW8 SW8_CS18
#define CS1_SW9 SW9_CS1
#define CS2_SW9 SW9_CS2
#define CS3_SW9 SW9_CS3
#define CS4_SW9 SW9_CS4
#define CS5_SW9 SW9_CS5
#define CS6_SW9 SW9_CS6
#define CS7_SW9 SW9_CS7
#define CS8_SW9 SW9_CS8
#define CS9_SW9 SW9_CS9
#define CS10_SW9 SW9_CS10
#define CS11_SW9 SW9_CS11
#define CS12_SW9 SW9_CS12
#define CS13_SW9 SW9_CS13
#define CS14_SW9 SW9_CS14
#define CS15_SW9 SW9_CS15
#define CS16_SW9 SW9_CS16
#define CS17_SW9 SW9_CS17
#define CS18_SW9 SW9_CS18
#define CS1_SW10 SW10_CS1
#define CS2_SW10 SW10_CS2
#define CS3_SW10 SW10_CS3
#define CS4_SW10 SW10_CS4
#define CS5_SW10 SW10_CS5
#define CS6_SW10 SW10_CS6
#define CS7_SW10 SW10_CS7
#define CS8_SW10 SW10_CS8
#define CS9_SW10 SW10_CS9
#define CS10_SW10 SW10_CS10
#define CS11_SW10 SW10_CS11
#define CS12_SW10 SW10_CS12
#define CS13_SW10 SW10_CS13
#define CS14_SW10 SW10_CS14
#define CS15_SW10 SW10_CS15
#define CS16_SW10 SW10_CS16
#define CS17_SW10 SW10_CS17
#define CS18_SW10 SW10_CS18
#define CS1_SW11 SW11_CS1
#define CS2_SW11 SW11_CS2
#define CS3_SW11 SW11_CS3
#define CS4_SW11 SW11_CS4
#define CS5_SW11 SW11_CS5
#define CS6_SW11 SW11_CS6
#define CS7_SW11 SW11_CS7
#define CS8_SW11 SW11_CS8
#define CS9_SW11 SW11_CS9
#define CS10_SW11 SW11_CS10
#define CS11_SW11 SW11_CS11
#define CS12_SW11 SW11_CS12
#define CS13_SW11 SW11_CS13
#define CS14_SW11 SW11_CS14
#define CS15_SW11 SW11_CS15
#define CS16_SW11 SW11_CS16
#define CS17_SW11 SW11_CS17
#define CS18_SW11 SW11_CS18

const is31fl3743a_led_t PROGMEM g_is31fl3743a_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |   R location
 *   |   |         G location
 *   |   |         |         B location
 *   |   |         |         | */
    // Re-arranged in LED ID order so it matches with the physical location array
    {0,  CS3_SW1,  CS2_SW1,  CS1_SW1}, // LED 1
    {0,  CS3_SW2,  CS2_SW2,  CS1_SW2}, // LED 2
    {0,  CS3_SW3,  CS2_SW3,  CS1_SW3}, // LED 3
    {0,  CS3_SW4,  CS2_SW4,  CS1_SW4}, // LED 4

    {0,  CS6_SW1,  CS5_SW1,  CS4_SW1}, // LED 5
    {0,  CS6_SW3,  CS5_SW3,  CS4_SW3}, // LED 6
    {0,  CS6_SW4,  CS5_SW4,  CS4_SW4}, // LED 7
    {0,  CS6_SW2,  CS5_SW2,  CS4_SW2}, // LED 8

    {0,  CS9_SW1,  CS8_SW1,  CS7_SW1}, // LED 9
    {0,  CS9_SW2,  CS8_SW2,  CS7_SW2}, // LED 10
    {0,  CS9_SW3,  CS8_SW3,  CS7_SW3}, // LED 11
    {0,  CS9_SW4,  CS8_SW4,  CS7_SW4}, // LED 12

    {0, CS12_SW1, CS11_SW1, CS10_SW1}, // LED 13
    {0, CS12_SW2, CS11_SW2, CS10_SW2}, // LED 14
    {0, CS12_SW3, CS11_SW3, CS10_SW3}, // LED 15
    {0, CS12_SW4, CS11_SW4, CS10_SW4}, // LED 16

    {0, CS15_SW2, CS14_SW2, CS13_SW2}, // LED 17
    {0, CS15_SW3, CS14_SW3, CS13_SW3}, // LED 18
    {0, CS15_SW1, CS14_SW1, CS13_SW1}, // LED 19
    {0, CS15_SW4, CS14_SW4, CS13_SW4}, // LED 20

    {0, CS18_SW1, CS17_SW1, CS16_SW1}, // LED 21
    {0, CS18_SW2, CS17_SW2, CS16_SW2}, // LED 22
    {0, CS18_SW3, CS17_SW3, CS16_SW3}, // LED 23
    {0, CS18_SW4, CS17_SW4, CS16_SW4}, // LED 24
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {     4,      7,      6,      9,      0,      1,      3,     11, },
  {     8,     20,     21,     23,     15,     14,     18,     19, },
  {    12,      5,      2, NO_LED,     17,     16,     13,     10, },
  {NO_LED, NO_LED, NO_LED, NO_LED,     22, NO_LED, NO_LED, NO_LED, },
}, {
  // LED Index to Physical Position
  {  73,  10 }, // LED 1
  {  73,  24 }, // LED 2
  {  73,   0 }, // LED 3
  {  73,  37 }, // LED 4
  {   0,  10 }, // LED 5
  {   0,   0 }, // LED 6
  {   0,  37 }, // LED 7
  {   0,  24 }, // LED 8
  {   0,  64 }, // LED 9
  {   0,  50 }, // LED 10
  {  73,  64 }, // LED 11
  {  73,  50 }, // LED 12
  { 223,  64 }, // LED 13
  { 223,  50 }, // LED 14
  { 150,  64 }, // LED 15
  { 150,  50 }, // LED 16
  { 223,  24 }, // LED 17
  { 223,   0 }, // LED 18
  { 223,  10 }, // LED 19
  { 223,  37 }, // LED 20
  { 150,  10 }, // LED 21
  { 150,  24 }, // LED 22
  { 150,   0 }, // LED 23
  { 150,  37 }, // LED 24
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4
} };
#endif

