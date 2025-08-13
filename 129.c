#include<stdio.h>
#include<string.h>
void main()
{
    char ch1[10];
    printf("enter the first string:");
    gets(ch1);
   
    printf ("length of string = %d", strlen(ch1));
}