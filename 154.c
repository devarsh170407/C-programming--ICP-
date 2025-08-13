#include <stdio.h>

int Max(int a, int b);
int Min(int a, int b);

void main()
{
    int n1,n2,max,min;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    max=Max(n1, n2);
    min=Min(n1, n2);

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

}
int Max(int a, int b) 
{
    if (a>b)
    return a;
    else 
    return b;
}

int Min(int a, int b) 
{
    if (a<b)
    return a;
    else 
    return b;
}