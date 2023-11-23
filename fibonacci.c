#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,f;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++)
    {
        f=a+b;
        printf("%d ",f);
        a=b;
        b=f;
    }
}