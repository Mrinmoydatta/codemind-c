#include<stdio.h>
int main()
{
    int cp,sp;
    float profit_percentage;
    scanf("%d%d",&cp,&sp);
    profit_percentage=((sp-cp)*100)/(float)cp;
    printf("%.2f",profit_percentage);
}