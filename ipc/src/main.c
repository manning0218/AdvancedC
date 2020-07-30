#include <stdio.h>
#include <signal.h>
#include <time.h>

#include "multiplication.h"

int main() {
    signal(SIGINT, end_game);
    signal(SIGALRM, times_up);

    srand(time(0));
    while(1) {
        int num1 = rand() % 11;
        int num2 = rand() % 11;

        int answer = ask_question(num1, num2);
        check_answer(num1, num2, answer);
    }

    return 0;
}
