#include<stdio.h>
int main()
{
    int n,rev=0,i;
    scanf("%d",&n);
    int temp=n;
    while(n)
    {
        rev=rev*10+(n%10);  
        n/=10;
    }
    if(temp==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}