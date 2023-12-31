#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=n;
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
            {
                printf("%d",n+1-i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}