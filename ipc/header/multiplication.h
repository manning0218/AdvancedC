#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void end_game(int sig);
void times_up(int sig);
void error(char* msg);
void check_answer(int num1, int num2, int answer);
int ask_question(int num1, int num2);

#endif
