CC = gcc
CFLAGS = -Iinclude
#LDFLAGS ='c '
OBJS = objs
BIN = -o ./bin/app
OUTPUT = main.c 

all:
	$(CC) $(CFLAGS) $(OUTPUT) $(BIN)

