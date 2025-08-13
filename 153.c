#include <stdio.h>
#define PI 3.14

float Diameter(float radius);
float Circumference(float radius);
float Area(float radius);

void main()
{
    float radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter=Diameter(radius);
    circumference=Circumference(radius);
    area=Area(radius);

    printf("Diameter: %f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

}

float Diameter(float radius)

{
   return 2 * radius;
}

float Circumference(float radius)

{
   return 2 * PI* radius;
}

float Area(float radius)

{
  
   return PI*radius*radius;
}

