#include<stdio.h>
int main(){
    float I, p,r,t;
     printf("Enter the value of p: ");
    scanf("%f" ,&p);

     printf("Enter the value of t: ");
    scanf("%f" ,&t);
    
     printf("Enter the value of r: ");
    scanf("%f" ,&r);

    I=(p*r*t)/100;

    printf("The value of simple interest is %f" ,I);



    return 0;
}