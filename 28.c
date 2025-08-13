#include <stdio.h>

void main() {
    int n, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

}
