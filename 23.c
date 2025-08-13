#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping using a third variable:\n");
    printf("a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping without using a third variable:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}