#include<stdio.h>
int sub(int a , int b);
void main()
{
    int a,b,sub;

    printf("enter the value of a=");
    scanf("%d",&a);

    printf("enter the value of b=");
    scanf("%d",&b);

    sub=a+b;
    printf("substraction=%d",a-b);
}

int sub(int a, int b)
{
    
   return a-b;

}