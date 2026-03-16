CC = x86_64-w64-mingw32-gcc
CFLAGS = -Wall

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)
PROG = bin/facetracker-shim.exe

$(PROG): $(OBJS) bin
	$(CC) $(CFLAGS) -o $@ $(OBJS)

bin:
	mkdir bin

debug: CC = gcc
debug: CFLAGS += -O0 -g3
debug: $(PROG)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)
