#include <stdio.h>

void main() {
    float total_marks, obtained_marks, percentage;

    printf("Enter total marks: ");
    scanf("%f", &total_marks);
    
    printf("Enter obtained marks: ");
    scanf("%f", &obtained_marks);

    percentage = (obtained_marks / total_marks) * 100;

    if (percentage >= 70) 
    {
        printf("Grade: DISTINCTION\n");
    } 
    
    else if (percentage >= 60) 
    {
        printf("Grade: FIRST CLASS\n");
    } 
    
    else if (percentage >= 50) 
    {
        printf("Grade: SECOND CLASS\n");
    } 
    
    else if (percentage >= 40) 
    {
        printf("Grade: PASS CLASS\n");
    } 
    
    else 
    {
        printf("Grade: FAIL\n");
    }

    
}
