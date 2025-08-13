#include <stdio.h>
int main()
{
    float I, c, d, g, h;
    
    printf("Enter 'c' : ");
    scanf("%f",&c);

    printf("Enter 'd' : ");
    scanf("%f",&d);

    printf("Enter 'g' : ");
    scanf("%f",&g);

    printf("Enter 'h' : ");  
    scanf("%f",&h);

    I = (c+d)*(g+h);

    printf("%f",I);

    return 0;
}

