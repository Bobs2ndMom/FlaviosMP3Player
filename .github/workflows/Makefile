TARGET = FlaviosMP3Player
BUILD = build
SRC = src/main.c src/minimp3.c
CFLAGS = -I$(DEVKITPRO)/libctru/include -I./src
LDFLAGS = -L$(DEVKITPRO)/libctru/lib -lctru -lcitro2d

all:
	mkdir -p $(BUILD)
	$(CC) $(CFLAGS) $(SRC) -o $(BUILD)/$(TARGET).elf $(LDFLAGS)
