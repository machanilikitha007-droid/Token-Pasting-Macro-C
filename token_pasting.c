#include <stdio.h>

#define CONCAT(a, b) a##b

int main() {
    int number1 = 10;
    int number2 = 20;
    int number3 = 30;

    printf("Token Pasting Example\n");
    printf("number1 = %d\n", CONCAT(number, 1));
    printf("number2 = %d\n", CONCAT(number, 2));
    printf("number3 = %d\n", CONCAT(number, 3));

    return 0;
}
