#include<stdio.h>
int main()
{
    int n,i,sum=0,product=1;
    scanf("%d",&n);
    while(n)
    {
        int r=n%10;
        sum+=r;
        product*=r;
        n/=10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else 
    {
        printf("Not Spy Number");
    }
}