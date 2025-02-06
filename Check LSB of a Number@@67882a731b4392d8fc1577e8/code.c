#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // Check if the least significant bit (LSB) is set
    if (num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    
    return 0;
}
