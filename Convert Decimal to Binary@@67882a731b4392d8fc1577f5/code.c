#include <stdio.h>

void decimalToBinary(int n) {
    int binary = 0, place = 1;
    while (n > 0) {
        int lastBit = n & 1; // Extract the last bit
        binary += lastBit * place;
        place *= 10;
        n >>= 1; // Right shift to process next bit
    }
    printf("%d\n", binary);
}

int main() {
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}
