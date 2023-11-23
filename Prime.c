#include<stdio.h>
int main()
{
    int n,i,r,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
        {
        c=c+1;
        }
    }
    if(n!=1 && c==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}