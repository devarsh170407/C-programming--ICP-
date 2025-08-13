#include<stdio.h>
void main()
{
    int a[5],i,n,pos;

    printf("enter the value of element=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }

    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }
    printf("enter the position from you want to delete=");
    scanf("%d",&pos);

    if (pos>=n+1);
    {
    printf("deletion of element is not possible ");
    }
    else 
    {
        for (i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];

        }
        
}
printf("updated array=%d",a[i]);

for (i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}