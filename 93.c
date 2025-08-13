#include <stdio.h>
void main() {
    int n, d, r = 1;
    char *character[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };

    printf("Enter the number = ");
    scanf("%d", &n);

    int temp = n;

    // Calculate the divisor 
    for (temp = n; temp >= 10; temp /= 10) {
        r *= 10;
    }

    // Print each digit in words 
    printf("Entered number in words =");
    for (temp=n; r > 0; r /= 10) {
        d = n / r;                  // Get the leading digit
        printf(" %s", character[d]); // Print the name of the digit
        n %= r;                     // Remove the leading digit
    }
}
