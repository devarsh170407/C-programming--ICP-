#include<stdio.h>
int swap(int *a ,int *b);
void main()
{
     int a,b;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("\na=%d and b=%d in main function",a,b);

}

int swap(int *a,int *b)
{
    int c;

    c=*a;
    *a=*b;
    *b=c;

    printf("new value of a = %d",a);
    printf("\n new value of b = %d",b);
}