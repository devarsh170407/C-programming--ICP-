#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    int product = firstDigit * lastDigit;

    printf("Product of the first and last digit of %d is: %d\n", num, product);

    return 0;
}
