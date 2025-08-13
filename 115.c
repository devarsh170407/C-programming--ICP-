#include<stdio.h>
void main()
{
    int a[5],i,n,sum=0;

    printf("enter the value of element=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }    
        printf("Sum = %d",sum);
}
