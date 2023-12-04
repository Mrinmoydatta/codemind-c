#include<stdio.h>
int main()
{
    int cp,sp;
    float loss_percentage;
    scanf("%d%d",&cp,&sp);
    loss_percentage=((cp-sp)*100)/(float)cp;
    printf("%.2f",loss_percentage);
}