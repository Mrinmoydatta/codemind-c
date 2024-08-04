#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    int hours_left=23-h;
    int minutes_left=60-m;
    int total_minute=hours_left*60+minutes_left;
    printf("%d",total_minute);
    return 0;
}