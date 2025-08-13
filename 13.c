#include <stdio.h>

int main() {
    int numberOfChairs, totalCost, costPerChair;

    printf("Enter the number of chairs: ");
    scanf("%d", &numberOfChairs);

    printf("Enter the total cost: ");
    scanf("%d", &totalCost);

    if (numberOfChairs > 0) {
        costPerChair = totalCost / numberOfChairs;
        printf("Cost of each chair: %d\n", costPerChair);
    } else {
        printf("Invalid number of chairs.\n");
    }

    return 0;
}