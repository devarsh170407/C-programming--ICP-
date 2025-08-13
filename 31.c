#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int power_of_2 = 1; 

    while (power_of_2 <= n) 
    {
        printf("%d ", power_of_2);
        power_of_2 *= 2; 
    }

    printf("\n"); 
    return 0;
}
