#include <stdio.h>

void checkVotingEligibility(int age) {
    if (age < 0) {
        printf("Invalid Age\n");
    } else if (age >= 18) {
        printf("Eligible \n");
    } else {
        printf("Not Eligible \n");
    }
}

int main() {
    int age;
    if (scanf("%d", &age) != 1) {
        printf("Invalid Input\n");
        return 1;
    }
    checkVotingEligibility(age);
    return 0;
}