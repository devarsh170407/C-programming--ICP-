#include <stdio.h>
int main() 
{
    float basicSalary, grossSalary;
    float hra, da;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = basicSalary * 0.20;  
        da = basicSalary * 0.80;                    
    } else if (basicSalary > 10000 && basicSalary <= 20000) {
        hra = basicSalary * 0.25;  
        da = basicSalary * 0.90;                 
    } else {
        hra = basicSalary * 0.30;  
        da = basicSalary * 0.95;                      
    }
    grossSalary = basicSalary + hra + da;

    printf("Gross Salary: %f\n", grossSalary);

    return 0;
}