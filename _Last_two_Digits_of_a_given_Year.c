#include<stdio.h>
int main()
{
    int n,r1,r2;
    scanf("%d",&n);
    r1=n%10;
    r2=(n/10)%10;
    printf("%d%d",r2,r1);
}