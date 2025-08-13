#include<stdio.h>
int main()
{
    int n,sum=0,r,i;
    printf("Enter one number n=");
    scanf("%d" , &n);
    for ( i=n; i>0; i=i/10)
    {
        r=i%10;
        sum=(sum*10)+r;
    }
    printf("\nreversed number=%d",sum);

}
