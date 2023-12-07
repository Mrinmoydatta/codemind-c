#include<stdio.h>
#include<math.h>
int main()
{
    int side,surface_area,volume;
    scanf("%d",&side);
    surface_area=6*pow(side,2);
    volume=pow(side,3);
    printf("Surface area = %d and Volume = %d",surface_area,volume);
}