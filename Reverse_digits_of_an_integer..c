#include<stdio.h>
int main()
{
    int n,i,rev=0;
    scanf("%d",&n);
    while(n)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    printf("%d",rev);
    
}
