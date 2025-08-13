#include<stdio.h>
void main()
{
    int a[50],i,n,sum=0;

    printf("enter the value of element=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
        for (i = 0; i < n; i++) { 
        if (a[i] % 2 == 0) { 
            sum += a[i];
        }
    }
        printf("Sum = %d",sum);
}
