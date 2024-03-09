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
    int row_sum=0,col_sum=0,row_max=-1,col_max=-1;
    for(i=0;i<n;i++)
    {
        row_sum=0;
        for(j=0;j<m;j++)
        {
            row_sum+=arr[i][j];
        }
        if(row_sum>row_max) row_max=row_sum;
    }
    for(i=0;i<n;i++)
    {
        col_sum=0;
        for(j=0;j<m;j++)
        {
            col_sum+=arr[i][j];
        }
        if(col_sum>col_max) col_max=col_sum;
    }
    if(row_max>col_max) printf("%d",row_max);
    else printf("%d",col_max);
}