CC      = gcc
CFLAGS  = -Wall -Werror -std=c99 -fstack-protector -Isrc
TARGET  = main

SRCS    = main.c $(wildcard src/*/*.c)
OBJS    = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

build: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(OBJS:.o=.d) $(TARGET)

-include $(OBJS:.o=.d)

.PHONY: all run clean