#include<stdio.h>
int div (int a , int b);
void main()
{
    int a,b,div;

    printf("enter the value of a=");
    scanf("%d",&a);

    printf("enter the value of b=");
    scanf("%d",&b);

    div=a/b;
    printf("devision=%d",a/b);
}

int div(int a, int b)
{
    
   return a/b;

}