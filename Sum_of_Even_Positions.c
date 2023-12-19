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
    int sum_even_index=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum_even_index=sum_even_index+arr[i];
        }
    }
    printf("%d",sum_even_index);
}