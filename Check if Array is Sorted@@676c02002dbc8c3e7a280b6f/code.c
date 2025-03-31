#include <stdio.h>

// Function to check if the array is sorted in ascending order
void sorted(int arr[], int n) {
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  // If any element is greater than the next, it's not sorted
            printf("Not Sorted\n");
            return;
        }
    }

    // If loop completes, the array is sorted
    printf("Sorted\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];  

    sorted(arr, n);  

    return 0;
}
