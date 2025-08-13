#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);

    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
