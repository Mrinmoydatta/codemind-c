#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if((m*k)>=n)
    {
        printf("YES");
    }
    else if((m*k)<n)
    {
        printf("NO");
    }
    return 0;
}