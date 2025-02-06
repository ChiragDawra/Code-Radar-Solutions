#include <stdio.h>

void printBinary(int num) {
    int mask = 1 << 31; 
    int started = 0; 
    
    for (int i = 0; i < 32; i++) {
        if (num & mask) {
            started = 1;
            printf("1");
        } else if (started) {
            printf("0");
        }
        mask >>= 1;
    }
    
    if (!started) printf("0"); 
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    
    return 0;
}
