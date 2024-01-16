#include<stdio.h>

int main()
{
    int x,y;
    int a=500,b=1000;
    int A=500,B=1000;
    scanf("%d%d",&x,&y);
    for(int i=1;i<=x;i++)
    {
        a-=2;
    }
    for(int i=1;i<=x+y;i++)
    {
        b-=4;
    }
    int a_to_b=a+b;
    for(int j=1;j<=y;j++)
    {
        B-=4;
    }
    for(int j=1;j<=x+y;j++)
    {
        A-=2;
    }
    int b_to_a=A+B;
    if(a_to_b>b_to_a)
    {
        printf("%d",a_to_b);
    }
    else
    printf("%d",b_to_a);
}