#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("%c ",i+64);
        }
        a--;
        printf("
");
    }
}