#include<stdio.h>
void main ()
{
    int a[10],i,n,even=0,odd=0;
    printf("enter the value of element=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }    
    printf("even number=%dand odd number=%d",even,odd);

}