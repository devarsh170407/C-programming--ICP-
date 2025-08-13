#include <stdio.h>

void main() {
    int i,n,f,j,sum=0;
    printf("enter no=");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        f=1;
        j=1; 
        while (j<=i)
        {
            f*=j;
            j++;
        }
        sum+=f;
        i++;
    }
        printf("sum from 1! to %d!=%d",n,sum);
        
    
    
}
