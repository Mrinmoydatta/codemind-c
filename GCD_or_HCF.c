#include<stdio.h>
int main()
{
    int a,b,m,i,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=a*i;
        if(m%b==0)
        {
            lcm=m;
            break;
        }
    }
    int gcd=(a*b)/lcm;
    printf("%d",gcd);
    
}