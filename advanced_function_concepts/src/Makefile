CFLAGS := -std=c11 -Wall -g
INCLUDES := -I../header/
CC := gcc

OBJ := main.o 

BIN_NAME := challenge 

all: $(BIN_NAME)

$(BIN_NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(BIN_NAME)

main.o : main.c 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(BIN_NAME)
	rm -f *.o
