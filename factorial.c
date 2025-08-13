#include<stdio.h>
void main()
{
    int f=1,n,i;
     
     printf("enter the n");
     scanf("%d",&n);

    i=1;
    while (i<=n)
    {
        f*=i;
        i++;
    }
    printf("%d! is = %d",n,f);


}