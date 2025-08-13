#include<stdio.h>
void main()
{
    int a[10],i,n,max,min;

    printf("enter the value of element=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }    
        max=a[0];
        min=a[0];
    for(i=1;i<n;i++)
    {
        if (max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("largest element = %d and smallest element = %d",max,min);
       
}

