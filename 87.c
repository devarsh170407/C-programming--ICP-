#include <stdio.h>

int main() {
    int n, p = 1, r;

    printf("Enter a number n: ");
    scanf("%d", &n);


    while (n > 0) 
    {
        r = n % 10;       
        p *= r;      
        n /= 10;           
    }

    printf("\nProduct of the digits = %d\n", p);

    return 0;
}
