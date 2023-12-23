#include<stdio.h>
int main()
{
    int n,i,last_digit;
    scanf("%d",&n);
    last_digit=n%10;
    while(n>=10)
    {
        n/=10;
    }
    printf("%d",last_digit+n);
}