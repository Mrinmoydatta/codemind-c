#include<stdio.h>
int main()
{
    int base1,base2,height;
    scanf("%d%d%d",&base1,&base2,&height);
    float area;
    area=((base1+base2)*height)/2.0;
    printf("%.4f",area);
}