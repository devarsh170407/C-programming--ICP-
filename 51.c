#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);

    do {
        printf("%d\n", i);
        i = i + 2;
    } while (i <= n);

    return 0;
}
