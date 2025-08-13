#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Numbers from %d to 1 are:\n", n);

    do {
        printf("%d\n", n);
        n--;
    } while (n >= 1);

    return 0;
}
