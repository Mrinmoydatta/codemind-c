#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=(arr[i]*pow(2,n-(i+1)));
    }
    printf("%d",sum);
    return 0;
}