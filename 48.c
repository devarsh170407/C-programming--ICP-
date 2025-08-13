#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Start the while loop from 1 and increment by 1 to check each number
    while (i <= n) {
        if (i % 2 == 0) {  // Check if the number is even
            sum =sum+i;       // Add the even number to sum
        }
        i++;  // Increment i to check the next number
    }

    printf("Sum of even numbers between 1 and %d is %d\n", n, sum);

    return 0;
}
