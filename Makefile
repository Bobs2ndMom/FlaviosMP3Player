TARGET = FlaviosMP3Player
BUILD = build

all:
	mkdir -p $(BUILD)
	arm-none-eabi-gcc -I/opt/devkitpro/libctru/include src/main.c -L/opt/devkitpro/libctru/lib -lctru -o $(BUILD)/$(TARGET).elf
