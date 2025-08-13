#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers from %d to 1:\n", n);

    while (n >= 1) 
    {
        printf("%d ", n);
        n--;
    }

    printf("\n");

    return 0;
}