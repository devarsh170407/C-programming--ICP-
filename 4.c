#include<stdio.h>
void main(){
int a,b,c,d,e; float f;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    // Addition
    c = a+b;
    printf("Addition of a and b is %d\n", c);

    //Substraction
    d=a-b;
    printf("Substraction  of a and b is %d\n", d);

    //Multiplication
    e=a*b;
    printf("Multiplication of a and b is %d\n", e);

    //Division
    f = (float)a/b;
    printf("Division of a and b is %f\n", f);

    
}