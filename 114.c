#include<stdio.h>
void main()
{
    int a[5],i,n;

    printf("enter the value of element=");
    scanf("%d",&n);
// store the array elements

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }
//   print the array elements
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }

}

