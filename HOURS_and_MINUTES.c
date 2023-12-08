#include<stdio.h>
int main()
{
    int hour,minutes;
    scanf("%d",&minutes);
    hour=minutes/60;
    minutes=minutes%60;
    printf("%d Hour(s) %d Minute(s)",hour,minutes);
}