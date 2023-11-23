#include<stdio.h>
int main()
{
    int i,n,a,b,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if((a*i)%b==0)
        {
            printf("%d",(a*i));
            break;
        }
    }
}