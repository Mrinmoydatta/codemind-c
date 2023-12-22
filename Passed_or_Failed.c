#include<stdio.h>
int main()
{
    int eng,math,phys,chem,cs;
    scanf("%d%d%d%d%d",&eng,&math,&phys,&chem,&cs);
    if(eng>34 && math>34 &&phys>34 && chem>34 && cs>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}