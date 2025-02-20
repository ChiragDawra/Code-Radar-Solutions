#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    int binary[32]; // Array to store binary digits
    int index = 0;
    while (n > 0) {
        binary[index++] = n & 1;
        n >>= 1;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}