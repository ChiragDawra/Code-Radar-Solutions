#include <stdio.h>

void checkDivisibility(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by both\n");
    } else if (num % 3 == 0) {
        printf("Divisible by 3\n");
    } else if (num % 5 == 0) {
        printf("Divisible by 5\n");
    } else {
        printf("Neither\n");
    }
}

int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input\n");
        return 1;
    }
    checkDivisibility(num);
    return 0;
}

