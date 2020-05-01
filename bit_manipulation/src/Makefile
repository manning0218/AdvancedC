CFLAGS := -std=c11 -Wall -g
INCLUDES := -I../header/
CC := gcc

OBJ := main.o convert.o bitwise_op.o toggle.o bit_field.o

BIN_NAME := challenge

all: $(BIN_NAME)

$(BIN_NAME): $(OBJ)
	$(CC) $(CFLAGS) -lm $^ -o $(BIN_NAME)

main.o : main.c bitwise_op.c convert.c toggle.c bit_field.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bit_field.o : bit_field.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bitwise_op.o : bitwise_op.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

convert.o : convert.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

toggle.o : toggle.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(BIN_NAME)
	rm -f *.o
