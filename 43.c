#include <stdio.h>

int main() {
    int num, product = 1, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        product = product * remainder;
        num = num / 10;
    }

    printf("Product of digits: %d\n", product);
    return 0;
}
