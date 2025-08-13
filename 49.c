#include <stdio.h>
void main ()
{
    int n,d,r=1;
    char *character[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    printf("enter the number = ");
    scanf("%d", &n);
    
    int temp = n;

    while(temp>=10)
    {
        r*=10;
        temp/10;
    }
    printf("Enterd number in words=");
    while(r>0)
    {
        d=n/r;
        printf(" %s",character[d]);
        n%=r;
        r/=10;
    }
}
