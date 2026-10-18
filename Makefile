CC      = gcc
CFLAGS  = -Wall -Werror -std=c99 -fstack-protector -Isrc
LDLIBS  = -lm
TARGET  = main

SRCS    = main.c $(wildcard src/*/*.c src/*/*/*.c)
OBJS    = $(SRCS:.c=.o)

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

build: $(TARGET)

clean:
	rm -f $(OBJS) $(OBJS:.o=.d) $(TARGET)

clear: clean

-include $(OBJS:.o=.d)

.PHONY: all build clear clean