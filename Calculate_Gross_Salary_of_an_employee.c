#include<stdio.h>
int main()
{
    float salary,hra,da;
    float pf,gross_salary;
    scanf("%f%f%f",&salary,&hra,&da);
    pf=salary*0.12;
    gross_salary=salary+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gross_salary);
    
}