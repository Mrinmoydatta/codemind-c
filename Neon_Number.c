#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int sq=n*n;
    
    while(sq)
    {
        int r=sq%10;
        sum+=r;
        sq/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}