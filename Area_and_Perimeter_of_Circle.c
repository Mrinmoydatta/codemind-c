#include<stdio.h>
int main()
{
    int r;
    float pi=3.14,area,perimeter;
    scanf("%d",&r);
    area=pi*r*r;
    perimeter=2*pi*r;
    printf("%.2f
%.2f",area,perimeter);
}