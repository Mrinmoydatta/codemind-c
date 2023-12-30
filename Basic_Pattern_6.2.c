#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}