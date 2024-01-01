#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a;
    for(i=n;i>=1;i--)
    {
        a=i;
        for(k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a--;
        }
        printf("
");
    }
}