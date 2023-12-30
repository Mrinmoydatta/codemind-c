#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int row_sum;
    for(i=0;i<n;i++)
    {
        row_sum=0;
        for(j=0;j<m;j++)
        {
            row_sum=row_sum+arr[i][j];
        }
        printf("%d ",row_sum);
    }
    
}