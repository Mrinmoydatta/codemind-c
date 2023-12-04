#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    float volume,pi=3.14;
    scanf("%d",&r);
    volume=(4*pi*pow(r,3))/3.0;
    printf("%.2f",volume);
}