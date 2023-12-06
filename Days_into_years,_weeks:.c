#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    int year=days/365;
    int week=(days%365)/7;
    printf("%d
%d",year,week);
}