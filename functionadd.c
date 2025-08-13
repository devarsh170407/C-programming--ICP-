#include<stdio.h>
int add (int a , int b);
void main()
{
    int a,b,add;

    printf("enter the value of a=");
    scanf("%d",&a);

    printf("enter the value of b=");
    scanf("%d",&b);

    add=a+b;
    printf("addition=%d",a+b);
}

int add (int a, int b)
{
    
   return a+b;

}