#include <stdio.h>

void checkRange(int num) {
    if (num >= 1 && num <= 100) {
        printf("In range\n");
    } else {
        printf("Out of range\n");
    }
}

int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input\n");
        return 1;
    }
    checkRange(num);
    return 0;
}
