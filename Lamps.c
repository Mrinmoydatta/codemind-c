#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(x<y)
    {
        printf("%d",(k*x)+((n-k)*x));
    }
    else if(y<x)
    {
        printf("%d",(k*x)+((n-k)*y));
    }
    return 0;
}