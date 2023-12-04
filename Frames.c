#include<stdio.h>
int main()
{
    int m,n,x;
    scanf("%d%d%d",&n,&m,&x);
    int perimeter=2*(n+m);
    int cost=perimeter*x;
    printf("%d",cost);
}