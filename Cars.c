#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int car=n/4;
    if(n%4==0)
    {
        printf("%d",car);
    }
    else
    {
        printf("%d",car+1);
    }
}