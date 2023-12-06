#include<stdio.h>
int main()
{
    int x,seconds,hours,minutes;
    scanf("%d",&x);
    hours=x/3600;
    minutes=(x%3600)/60;
    seconds=((x%3600)%60);
    printf("H:M:S-%d:%d:%d",hours,minutes,seconds);
}