#include<stdio.h>
#include<string.h>
void main()
{
    char ch1[10],ch2[10];
    printf("enter the first string:");
    gets(ch1);
    printf("enter the second string:");
    gets(ch2);
        strcpy(ch1,ch2);
        printf("new valuse of first string is %s",ch1,ch2 );
   
}
