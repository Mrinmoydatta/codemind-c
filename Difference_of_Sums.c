#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sq=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=sq+(i*i);
        sum=sum+i;
    }
    int sum_sq=sum*sum;
    printf("%d",abs(sq-sum_sq));
}