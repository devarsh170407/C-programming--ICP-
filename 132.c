#include<stdio.h>
#include<string.h>
void main()
{
    char ch1[10],ch2[10];
    printf("enter the first string:");
    gets(ch1);
    printf("enter the second string:");
    gets(ch2);
        if(strcmp(ch1,ch2)==0)
            printf("stings are equal");
        else
            printf("stings are not equal");
        
    
}
