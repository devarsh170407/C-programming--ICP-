#include<stdio.h>
void main()
{
    int i=1,n,f=1;
    printf("entor no: ");
    scanf("%d", &n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    
    printf("%d", f);
}
