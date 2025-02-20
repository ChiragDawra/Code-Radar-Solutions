#include <stdio.h>

void checkProfitLoss(int costPrice, int sellingPrice) {
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit, No Loss\n");
    }
}

int main() {
    int costPrice, sellingPrice;
    scanf("%d %d", &costPrice, &sellingPrice);
    checkProfitLoss(costPrice, sellingPrice);
    return 0;
}

