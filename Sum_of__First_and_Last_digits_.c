#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
    int last_digit=n%10;
    for(;n!=0;)
    {
        r=n%10;
        n/=10;
    }
    printf("%d",last_digit+r);
}