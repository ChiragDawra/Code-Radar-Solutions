#include <stdio.h>

void checkSeniorCitizenDiscount(int age) {
    if (age >= 60) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
}

int main() {
    int age;
    if (scanf("%d", &age) != 1) {
        printf("Invalid Input\n");
        return 1;
    }
    checkSeniorCitizenDiscount(age);
    return 0;
}
