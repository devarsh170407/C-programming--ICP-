#include <stdio.h>
#include <math.h>

int main() {
    int n, oN, r, sum = 0, c = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    oN = n; 

    while (n > 0) {
        n = n / 10;
        c++;
    }

    n = oN;

    while (n > 0) {
        r = n % 10;
        sum += (int)pow(r, c); 
        n = n / 10;
    }

    if (sum == oN) {
        printf("%d is an Armstrong number.\n", oN);
    } else {
        printf("%d is not an Armstrong number.\n", oN);
    }

    return 0; 
}
