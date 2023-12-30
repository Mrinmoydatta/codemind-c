#include<stdio.h>
int main()
{
    int n,m,k,bag1,bag2;
    scanf("%d%d%d",&n,&m,&k);
    bag1=n/(k*m);
    bag2=n%(k*m);
    if(bag2==0)
    {
    printf("%d",bag1);
    }
    else
    {
        printf("%d",bag1+1);
    }
    return 0;
}