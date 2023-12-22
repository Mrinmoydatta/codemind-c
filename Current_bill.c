#include<stdio.h>
int main()
{
    int units;
    float unitcost;
    scanf("%d",&units);
    if(units<200)
    {
        unitcost=1.20;
    }
    else if(units>=200 && units<400)
    {
        unitcost=1.50;
    }
    else if(units>=400 && units<600)
    {
        unitcost=1.80;
    }
    else if(units>=600)
    {
        unitcost=2.00;
    }
    float tbill,bill=units*unitcost;
    if(bill>=400)
    {
        tbill=bill+(bill*0.15);
    }
    else if(bill<400)
    {
        tbill=bill+100;
    }
    printf("%.2f",tbill);
}