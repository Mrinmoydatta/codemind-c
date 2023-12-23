#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    while(n)
    {
        int r=n%10;
        count++;
        n/=10;
    }
    printf("%d",count);
    
}