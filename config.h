#pragma once

// Added to try and solve issues with OLED, Tapping term, and encoder direction
#define OLED_BRIGHTNESS 128
#define CUSTOM_LAYER_READ

// Copied from Sofle RGB config.h but it may not be necessary
#define TAPPING_FORCE_HOLD
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif

// Comment to reverse encoder direction
#define ENCODER_DIRECTION_FLIP

// Split config
// Plug USB into the left half of the keyboard
// see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
#define MASTER_LEFT


// Serial comms between halves. Change if using I2C
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define SPLIT_TRANSPORT_MIRROR // testing rgb sync


// I suspect this is only needed for certain ProMicros
// Not sure what the disadvantages are / why it isn't on by default
// I disabled this; see: https://github.com/qmk/qmk_firmware/issues/8990
// #define SPLIT_USB_DETECT


// RGB Configuration
// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN D3
#define RGB_MATRIX_SPLIT { 29, 29 } // changed from RGBLED_SPLIT
#define DRIVER_LED_TOTAL 58
// LED Total changed from 29

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_STARTUP_SPD 5

// limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10


// RGB animations. Disable the animations you don't want/need.

#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_ALL

#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define DISABLE_RGB_MATRIX_BREATHING
// #define DISABLE_RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_RAINDROPS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_TYPING_HEATMAP
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
// #define DISABLE_RGB_MATRIX_SOLID_REACTIVE
// #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define DISABLE_RGB_MATRIX_SPLASH
#define DISABLE_RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_SPLASH
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
