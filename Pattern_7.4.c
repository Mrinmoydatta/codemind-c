#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a=n;
    for(i=n;i>=1;i--)
    {
        for(int k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",65+i-1);
        }
        printf("
");
    }
}