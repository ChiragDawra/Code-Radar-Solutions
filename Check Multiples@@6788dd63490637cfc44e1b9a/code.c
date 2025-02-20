#include <stdio.h>

void checkMultiple(int a, int b) {
    if (b == 0) {
        printf("Invalid Input\n");
        return;
    }
    if (a % b == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid Input\n");
        return 1;
    }
    checkMultiple(a, b);
    return 0;
}
