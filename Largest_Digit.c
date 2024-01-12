#include<stdio.h>
int main()
{
    int n,r,large=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r>large)
        {
            large=r;
        }
        n/=10;
    }
    printf("%d",large);
}