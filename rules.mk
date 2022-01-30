# SPLIT_KEYBOARD = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes
EXTRAKEY_ENABLE = yes
NKRO_ENABLE = yes

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812


# Reduce firmware size
# https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/#link-time-optimization-and-disabling-core-functionality
EXTRAFLAGS += -flto
CONSOLE_ENABLE = no

# Change keymaps without flashing
# https://caniusevia.com/
# VIA_ENABLE = yes
