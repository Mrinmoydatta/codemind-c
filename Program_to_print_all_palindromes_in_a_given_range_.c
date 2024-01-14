#include<stdio.h>
int palindrome(int n)
{
    int t,rev=0;
    t=n;
    while(n)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==t)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int res=palindrome(i);
        if(res==1)
        {
            printf("%d ",i);
        }
    }
}