#include <stdio.h>
#include <stdlib.h>
#include <time.h>

union student_grade {
    char letter_grade;
    int rounded_grade;
    float exact_grade;
} student_1, student_2;

void print_grades(union student_grade *grade);
float random_grade();
char letter_grade(int grade);

int main(int argc, char** argv) {
    float exact_grade = random_grade();
    student_1.exact_grade = exact_grade;
    student_1.rounded_grade = (int)student_1.exact_grade;
    student_1.letter_grade = letter_grade(student_1.letter_grade);

    print_grades(&student_1);

    student_2.letter_grade = letter_grade((int)exact_grade);
    printf("Student Grades\n");
    printf("Letter Grade: %c\n", student_2.letter_grade);
    student_2.rounded_grade = (int)exact_grade;
    printf("Rounded Grade: %d\n", student_2.rounded_grade);
    student_2.exact_grade = exact_grade;
    printf("Exact Grade: %.2f\n", student_2.exact_grade);
    return 0;
}

void print_grades(union student_grade *grade) {
    if(grade) {
        printf("Student Grades\n");
        printf("Letter Grade: %c\n", grade->letter_grade);
        printf("Rounded Grade: %d\n", grade->rounded_grade);
        printf("Exact Grade: %.2f\n", grade->exact_grade);
    } else {
        printf("No grade information available.\n");
    }
}

float random_grade() {
    int grade = 0;
    time_t tm;
    float exact_grade;

    srand((unsigned) time(&tm));
    
    for(int i = 0; i < 5; i++) {
        grade += rand() % 101;
    }

    exact_grade = grade/5.0;
    return exact_grade;
}

char letter_grade(int grade) {
    if(grade >= 90) {
        return 'A';
    } else if(grade >= 80) {
        return 'B';
    } else if(grade >= 70) {
        return 'C';
    } else if(grade >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
