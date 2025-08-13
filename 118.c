#include<stdio.h>

void main()
{
    int a[5], i, n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) 
        {
            sum = sum + a[i];
        }
    }

    printf("Sum of even numbers = %d", sum);
}
  