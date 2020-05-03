CFLAGS := -std=c11 -Wall -g
INCLUDES := -I../header/
CC := gcc

OBJ := main.o char_count.o read_input.o

BIN_NAME := challenge 

all: $(BIN_NAME)

$(BIN_NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(BIN_NAME)

main.o : main.c char_count.c read_input.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

char_count.o : char_count.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

read_input.o : read_input.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(BIN_NAME)
	rm -f *.o
