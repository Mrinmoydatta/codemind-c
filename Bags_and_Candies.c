#include<stdio.h>
int main()
{
    int n,k,m,b1,b2;
    scanf("%d%d%d",&n,&k,&m);
    b1=(n/(k*m));
    b2=(n%(k*m));
    if(b2==0)
    printf("%d",b1);
    else
    printf("%d",b1+1);
}