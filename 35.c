#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no:");
    scanf("%d",&n);

    if (n<=1)
    printf("not prime no\n");
    else{
        i=2;
        while(i*i<=n)
        {
            if (n%i==0)
        {
            printf("%d is not prime no\n",n);
            i++;
            return 0;
        }

        }
        printf("%d is prime no\n",n);
    }
    return 0;
    }
