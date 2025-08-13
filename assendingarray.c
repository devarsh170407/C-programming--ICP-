#include<stdio.h>
void main()
{
    int a[10],i,j,n,temp=0;

    printf("enter the value of element=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);               
        scanf("%d",&a[i]);
       
    }    

    for (i=0;i<n;i++)
    {
        for ( j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    printf("elements of array in assending order is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
}
