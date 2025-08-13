#include<stdio.h>
int main(){
    //circle
    
    float a,r,b,base,height;
    printf("Enter the value of r:");
    scanf("%f" ,&r);
    a = 3.14*r*r;
    printf("Area of the circle is %f\n", a);

    //triangle

    printf("Enter the value of base:");
    scanf("%f" ,&base);
    printf("Enter the value of height:");
    scanf("%f" ,&height);
    b = 0.5*base*height;
    printf("Area of the triangle is %f", b);


    return 0;
}