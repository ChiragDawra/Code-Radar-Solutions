#include <stdio.h>

void checkGreaterOrEqual(int a, int b) {
    if (a >= b) {
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
    checkGreaterOrEqual(a, b);
    return 0;
}
