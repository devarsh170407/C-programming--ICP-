#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[10],ch2[10];
    printf("enter the first string:");
    gets(ch1);
    printf("enter the second string:");
    gets(ch2);
        strncat(ch1,ch2,3);
        printf("%s",ch1);
        

    return 0;
}
