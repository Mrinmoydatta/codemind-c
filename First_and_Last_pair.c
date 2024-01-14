#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    int j=n-1,pair_cnt=0;
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(n%2!=0){
        if(i==j)
        {
            printf("%d 0",arr[i]);
            break;
        }
        printf("%d %d ",arr[i],arr[j]);
        }
        else
        {
            printf("%d %d ",arr[i],arr[j]);
            pair_cnt++;
            if(pair_cnt==(n/2))
            {
                break;
            }
        }
    }
}