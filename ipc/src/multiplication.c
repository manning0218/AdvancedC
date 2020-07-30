#include "multiplication.h"

static int score = 0;

void end_game(int sig) {
    printf("\nFinal score: %d\n", score);
    exit(0);
}

void times_up(int sig) {
    printf("\nTIMER EXPIRED!!!\n");
    printf("Final score: %d\n", score);
    exit(0);
}

void error(char* msg) {
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(1);
}

void check_answer(int num1, int num2, int answer) {
    int correct_answer = num1 * num2;
    if(correct_answer == answer) {
        printf("Correct! current score: %d\n", ++score);
    } else {
        printf("Wrong, the correct answer is %d. current score: %d\n", correct_answer, score);
    }
}

int ask_question(int num1, int num2) {
    char answer[4];

    alarm(5);
    printf("\nWhat is %d x %d: ", num1, num2);
    fgets(answer, 4, stdin);

    return atoi(answer);
}
