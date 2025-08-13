#include<stdio.h>
int cube(int a);
void main()
{
     int a;
    printf("enter the value of a = ");
    scanf("%d",&a);
   
    cube(a);

    //printf("\n cube = %d ",a);

}

int cube(int a)
{
   
    a=a*a*a;
    printf("cube of a = %d",a);
    
}