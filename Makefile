cc=gcc
CFLAGS = -Wall -Wextra -Iinclude
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=build/%.o)
TARGET = calculator

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

build/%.o: src/%.c
	mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
