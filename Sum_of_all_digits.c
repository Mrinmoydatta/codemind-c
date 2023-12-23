#include<stdio.h>
int main()
{
    int n,i,r,sum=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    printf("%d",sum);
}