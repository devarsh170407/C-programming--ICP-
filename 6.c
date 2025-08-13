#include <stdio.h>

int main() {
    float a, p, r, n;

    printf("Enter principal amount (p): ");
    scanf("%f", &p);

    printf("Enter rate of interest (r): ");
    scanf("%f", &r);

    printf("Enter number of times interest is compounded per year (n): ");
    scanf("%f", &n);

    a = p * (1 + (r / 100) / n) - p;

    printf("The calculated amount (a) is: %f\n", a);

    return 0;
}