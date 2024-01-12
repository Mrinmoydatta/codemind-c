#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
            count++;
        }
        if(count==n)
        {
            break;
        }
    }
}