CC = gcc
CFLAGS = -Iinclude
#LDFLAGS ='c '
OBJS = objs
BIN = -o ./bin/app
OUTPUT = main.c 
OBJS    = $(patsubst src/%.c, obj/%.o, $(wildcard src/*.c))

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) $(OUTPUT) $^ $(BIN)

debug: $(OBJS)
	$(CC) $(CFLAGS) $(OUTPUT)  -ggdb $^ $(BIN)

clean:
	rm -r bin/*
	rm -r obj/*

