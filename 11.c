#include <stdio.h>

void main() {
    float cm, m, km;

    printf("Enter length in cm: ");
    scanf("%f", &cm);

    m = cm/100;
    km = m/1000;

    printf("Length in m: %f\n", m);
    printf("Length in km: %f\n", km);

}