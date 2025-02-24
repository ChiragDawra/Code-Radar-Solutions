#include <stdio.h>

void checkVotingEligibility(int age, int citizen) {
    if (age >= 18 && citizen == 1) {
        printf("Eligible \n");
    } else {
        printf("Not Eligible \n");
    }
}

int main() {
    int age, citizen;
    if (scanf("%d %d", &age, &citizen) != 2) {
        printf("Invalid Input\n");
        return 1;
    }
    checkVotingEligibility(age, citizen);
    return 0;
}