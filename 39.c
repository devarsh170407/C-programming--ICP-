#include<stdio.h>
void main()
{
    int i,n,a=0,b=1;
    printf("Enter no.");
    scanf("%d",&n);
    i=0;

    while(i<=n){
   
    printf("%d\t",a);
    b=a+b;
    a=b-a;
    i++;
    }

}
