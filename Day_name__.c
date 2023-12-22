#include<stdio.h>
int main()
{
    int day_name;
    scanf("%d",&day_name);
    if(day_name==1)
    {
        printf("Monday");
    }
    else if(day_name==2)
    {
        printf("Tuesday");
    }
    else if(day_name==3)
    {
        printf("Wednesday");
    }
    else if(day_name==4)
    {
        printf("Thursday");
    }
    else if(day_name==5)
    {
        printf("Friday");
    }
    else if(day_name==6)
    {
        printf("Saturday");
    }
    else if(day_name==7)
    {
        printf("Sunday");
    }
    else{
        printf("Invalid input");
    }
}