CFLAGS := -std=c11 -Wall -g
INCLUDES := -I../header/
CC := gcc

OBJ := main.o challenge.o

OBJ_PATH := ../build/obj

BIN_NAME := storage_classes

all: $(BIN_NAME)

$(BIN_NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(BIN_NAME)

main.o : main.c challenge.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

challenge.o : challenge.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(BIN_NAME)
	rm -f $(OBJ_PATH)/*
