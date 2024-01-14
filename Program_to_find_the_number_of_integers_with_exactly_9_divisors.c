#include<stdio.h>
int divisor(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0) count++;
    }
    return count;
}
int main()
{
    int n,i,j,count=0,total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int count=divisor(i);
        if(count==9)
        {
            printf("%d ",i);
            total++;
        }
    }
    printf("
Total=%d",total);
}