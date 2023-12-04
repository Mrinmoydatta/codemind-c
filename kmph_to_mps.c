#include<stdio.h>
int main()
{
    int kmph;
    float mps;
    scanf("%d",&kmph);
    mps=(kmph*1000)/3600.0;
    printf("%.2f",mps);
}