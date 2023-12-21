#include<stdio.h>
int main()
{
    int basic_salary;
    float gross_salary,DA,HRA;
    scanf("%d",&basic_salary);
    if(basic_salary<=10000)
    {
        gross_salary=basic_salary+(basic_salary*0.8)+(basic_salary*0.2);
        printf("%.2f",gross_salary);
    }
    else if(basic_salary<=20000)
    {
        gross_salary=basic_salary+(basic_salary*0.9)+(basic_salary*0.25);
        printf("%.2f",gross_salary);
    }
    else if(basic_salary>20000)
    {
        gross_salary=basic_salary+(basic_salary*0.95)+(basic_salary*0.3);
        printf("%.2f",gross_salary);
    }
}