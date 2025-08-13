#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Odd numbers between 1 and %d are:\n", n);

    while (i <= n) {
        if (i % 2 == 1) {  
            printf("%d ", i);  
        }
        i++; 
    }

    printf("\n");  

    return 0;
}
