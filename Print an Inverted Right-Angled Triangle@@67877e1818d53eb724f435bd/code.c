#include <stdio.h>

void printInvertedTriangle(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid Input\n");
        return 1;
    }
    printInvertedTriangle(n);
    return 0;
}