#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[10],ch2[10];
    printf("enter the first string:");
    gets(ch1);
     printf("enter the second string:");
    gets(ch2);
   
    printf ("%s", strstr(ch1,"ha"));

}
