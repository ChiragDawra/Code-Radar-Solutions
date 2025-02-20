#include <stdio.h>

void checkTriangleType(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Invalid Triangle\n");
        return;
    }
    if (a == b && b == c) {
        printf("Equilateral \n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles \n");
    } else {
        printf("Scalene \n");
    }
}

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid Input\n");
        return 1;
    }
    checkTriangleType(a, b, c);
    return 0;
}