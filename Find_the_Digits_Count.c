#include<stdio.h>
int main()
{
    int n,r,count=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        count++;
        n/=10;
    }
    printf("%d",count);
}