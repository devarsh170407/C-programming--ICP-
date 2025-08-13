#include <stdio.h>

int main() {
    float rupees, dollars;
    float conversion_rate = 83.52; 

    printf("Enter the value in rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / conversion_rate;

    printf("%f rupees is equal to %f dollars.\n", rupees, dollars);

    return 0;
}       