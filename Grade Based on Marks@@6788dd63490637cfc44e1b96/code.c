#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); // Read user input

    if (num >= 90) {
        printf("A\n");
    } 
    else if (num >= 80) { // No need for `num < 90` because it is already checked
        printf("B\n");
    } 
    else if (num >= 70) {
        printf("C\n");
    } 
    else if (num >= 60) {
        printf("D\n");
    } 
    else {
        printf("F\n");
    }

    return 0; // Indicate successful execution
}
