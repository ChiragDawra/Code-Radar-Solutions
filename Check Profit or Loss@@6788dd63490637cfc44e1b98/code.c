#include <stdio.h>

void checkProfitLoss(int costPrice, int sellingPrice) {
    if (costPrice < 0 || sellingPrice < 0) {
        printf("Invalid Input\n");
        return;
    }
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }
}

int main() {
    int costPrice, sellingPrice;
    if (scanf("%d %d", &costPrice, &sellingPrice) != 2) {
        printf("Invalid Input\n");
        return 1;
    }
    checkProfitLoss(costPrice, sellingPrice);
    return 0;
}
