CFLAGS := -std=c11 -Wall -g
INCLUDES := -I../header/
CC := gcc

OBJ := main.o vla.o flex_arr.o complex_nums.o

OBJ_PATH := ../build/obj

BIN_NAME := challenge 

all: $(BIN_NAME)

$(BIN_NAME): $(OBJ)
	$(CC) $(CFLAGS) -lm $^ -o $(BIN_NAME)

main.o : main.c vla.c flex_arr.c complex_nums.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

vla.o : vla.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

flex_arr.o : flex_arr.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

complex_nums.o : complex_nums.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(BIN_NAME)
	rm -f *.o
