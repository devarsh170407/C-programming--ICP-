#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("The number is less than zero.\n");
    } else if (number > 0) {
        printf("The number is greater than zero.\n");
    } else {
        printf("The number is equal to zero.\n");
    }

    return 0;
}