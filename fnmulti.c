#include<stdio.h>
int mult (int a , int b);
void main()
{
    int a,b,mult;

    printf("enter the value of a=");
    scanf("%d",&a);

    printf("enter the value of b=");
    scanf("%d",&b);

    mult=a*b;
    printf("multiplication=%d",a*b);
}

int mult (int a, int b)
{
    
   return a*b;

}