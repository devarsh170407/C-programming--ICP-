#include <stdio.h>

void main() 
{
    int num1, num2, square1, square2, cube1, cube2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    square1 = num1 * num1;
    square2 = num2 * num2;

    cube1 = square1 * num1;
    cube2 = square2 * num2;

    printf("\nSquare of %d is: %d\n", num1, square1);
    printf("Cube of %d is: %d\n", num1, cube1);

    printf("\nSquare of %d is: %d\n", num2, square2);
    printf("Cube of %d is: %d\n", num2, cube2);

}
