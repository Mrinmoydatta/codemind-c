#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even_sum=0,odd_sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even_sum=even_sum+arr[i];
        }
        else
        {
            odd_sum=odd_sum+arr[i];
        }
        
    }
    printf("%d",abs(even_sum-odd_sum));
    
}