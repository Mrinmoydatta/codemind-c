#include<stdio.h>
int main()
{
    int rain;
    scanf("%d",&rain);
    if(rain<3)
    printf("LIGHT");
    else if(rain>=3 && rain<7)
    printf("MODERATE");
    else if(rain>=7)
    printf("HEAVY");
    
}