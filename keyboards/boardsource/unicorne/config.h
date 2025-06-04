// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

// (not sure)
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

// Define Master/Slave Sides
#define MASTER_LEFT

// Audio Buzzer
#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
// #define STARTUP_SONG SONG(ODE_TO_JOY)  // AAAHHHHHHH

// Analog Sticks: ! I don't have these !
#define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
#define ANALOG_JOYSTICK_X_AXIS_PIN GP27
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X

// Reset OS Detection Upon Reinitialization
#define OS_DETECTION_KEYBOARD_RESET

// OLED
#define OLED_BRIGHTNESS 200 // 0-255
#define OLED_TIMEOUT 10000  // 10 seconds

// Tap Dance
#define TAPPING_TERM 175 // milliseconds

// Split Keyboard Actions
#define SPLIT_ACTIVITY_ENABLE  // allow timeouts
#define SPLIT_LET_STATE_ENABLE // caps-lock, num-lock, etc.
#define SPLIT_MODS_ENABLE      // mod key status
#define SPLIT_OLED_ENABLE      // oled status (on, off, etc.)
#define SPLIT_WPM_ENABLE       // words-per-minute status

// Allow keyboard to turn on at PC cold-boot
#define SPLIT_USB_TIMEOUT 26000 // milliseconds
