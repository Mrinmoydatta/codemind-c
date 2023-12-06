#include<stdio.h>
int main()
{
    int n,m,i,min,gcd;
    scanf("%d%d",&n,&m);
    (n>m)?min=m:min=n;
    for(i=1;i<=min;i++)
    {
        if(n%i==0 && m%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}