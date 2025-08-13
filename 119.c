#include<stdio.h>

void main()
{
    int a[5], b[5], i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    printf("Elements of array b: \n");
    for (i = 0; i < n; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }
}
