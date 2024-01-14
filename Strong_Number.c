#include<stdio.h>
int fact(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int t,r,n,sum=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int temp=n;
        sum=0;
        while(n){
            r=n%10;
            sum=sum+fact(r);
            n/=10;
        }
        if(temp==sum)
        {
            printf("Strong
");
        }
        else
        printf("Not Strong
");
    }
}