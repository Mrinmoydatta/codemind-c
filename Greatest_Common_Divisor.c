#include<stdio.h>
int main()
{
    int a,b,min,gcd;
    scanf("%d%d",&a,&b);
    (a<b)?(min=a):(min=b);
    for(int i=min;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            break;
        }
    }
    printf("%d",gcd);
}