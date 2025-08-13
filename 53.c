#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter an integer  (n): ");
    scanf("%d", &n);

    do {
        printf("%d ", i);
        i = i * 2;
    } while (i<= n);

    printf("\n");
    return 0;
}
