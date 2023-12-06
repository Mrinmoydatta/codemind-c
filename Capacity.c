#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int bytes=2*t*s*b*512;
    int kb=bytes/1024;
    printf("%d KB",kb);
}