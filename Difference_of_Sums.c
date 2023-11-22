#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sq=0,s=0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=sq+pow(i,2);
        s=s+i;
    }
    p=s*s;
    printf("%d",p-sq);
}