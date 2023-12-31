#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int col_sum=0;
    for(i=0;i<m;i++)
    {
        col_sum=0;
        for(j=0;j<n;j++)
        {
            col_sum=col_sum+arr[j][i];
        }
        printf("%d ",col_sum);
    }
}