#include <stdio.h>

void main() {
    int n, ld, fd;

    printf("Enter an integer: ");
    scanf("%d", &n);
    ld = n%10;

    while (n > 0) {
         fd = n % 10;
         n = n / 10;
    }

    printf("First digit is: %d\n",  fd);
    printf("Last digit is: %d\n", ld);

}
