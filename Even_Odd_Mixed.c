#include<stdio.h>
int main()
{
    int n,r,len=0,even=0,odd=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        len++;
        if(r%2==0)
        {
            even++;
        }
        else if(r%2!=0)
        {
            odd++;
        }
        n/=10;
    }
    if(len==even)
    {
        printf("Even");
    }
    else if(len==odd)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}