#include <stdio.h>

void checkNumberType(int n) {
    if (n > 0) {
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input\n");
        return 1;
    }
    checkNumberType(n);
    return 0;
}
