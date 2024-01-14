#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    if(n!=1)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int n,i,j,divisor=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int res=prime(i);
        if(res==1) continue;
        else
        {
            if(n%i==0)
            {
                divisor++;
            }
        }
    }
    printf("%d",divisor);
}