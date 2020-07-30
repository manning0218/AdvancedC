CFLAGS := -std=c11 -Wall -g
INCLUDES := -I../header
CC := gcc

OBJ := main.o multiplication.o

OBJ_PATH := ../build/obj

BIN_NAME := challenge 

all: $(BIN_NAME)

$(BIN_NAME): $(OBJ)
	$(CC) $(CFLAGS) -lm $^ -o $(BIN_NAME)

main.o : main.c 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

multiplication.o: multiplication.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(BIN_NAME)
	rm -f *.o
