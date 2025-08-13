#include <stdio.h>
void main() {
    int n, d, r = 1;
    char *character[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };

    printf("Enter the number = ");
    scanf("%d", &n);

    int temp = n;

    // Calculate the divisor using a do-while loop
    do {
        r *= 10;
        temp /= 10;
    } while (temp >= 10);

    // Print each digit in words using a do-while loop
    printf("Entered number in words =");
    do {
        d = n / r;                  // Get the leading digit
        printf(" %s", character[d]); // Print the name of the digit
        n %= r;                     // Remove the leading digit
        r /= 10;                    // Reduce the divisor
    } while (r > 0);
}
