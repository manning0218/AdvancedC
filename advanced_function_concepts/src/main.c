#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int add(int argc, ...);
int add_recurse(int num);
int gcd(int num1, int num2);
char* reverse(char* str);

int main(int argc, char** argv) {
    printf("%d\n", add(5, 1, 2, 3, 4, 5));

    int num;
    printf("Input last number of the range from 1-5: ");
    scanf("%d", &num);

    printf("The sum of the numbers 1 to 5: %d\n", add_recurse(num));

    int num2;
    printf("Input 1st number: ");
    scanf("%d", &num);
    printf("Input 2nd number: ");
    scanf("%d", &num2);

    printf("The gcd of %d and %d is %d\n", num, num2, gcd(num, num2));

    char str[100];
    printf("Input a string: ");
    scanf("%s", str);

    printf("The reverse string is %s\n", reverse(str));
    return 0;
}

int add(int argc, ...) {
    int sum = 0;
    va_list parg;
    va_start(parg, argc);

    while(argc > 0) {
        int num = va_arg(parg, int);
        sum += num;
        --argc;
    }

    va_end(parg);
    
    return sum;
}

int add_recurse(int num) {
    if(num == 1) {
        return 1;
    }

    return  num + add_recurse(num -1);
}

int gcd(int num1, int num2) {
    if(num1 == 0) {
        return num2;
    }

    return gcd(num2 % num1, num1);
}

char* reverse(char* str) {
    static char rev_str[100] = "";
     
    if(*str) {
        reverse(str + 1);
        strncat(rev_str, str, 1);
    }

    return rev_str;
}
