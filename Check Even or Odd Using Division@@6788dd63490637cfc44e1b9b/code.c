#include <stdio.h>

void checkEvenOdd(int n) {
    if (n / 2 * 2 == n) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input\n");
        return 1;
    }
    checkEvenOdd(n);
    return 0;
}
