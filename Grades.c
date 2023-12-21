#include<stdio.h>
int main()
{
    int phys,chem,biol,math,cs;
    scanf("%d%d%d%d%d",&phys,&chem,&biol,&math,&cs);
    float percentage=(phys+chem+biol+math+cs)/5.0;
    if(percentage>=90)
    {
        printf("Grade A");
    }
    else if(percentage>=80)
    {
        printf("Grade B");
    }
    else if(percentage>=70)
    {
        printf("Grade C");
    }
    else if(percentage>=60)
    {
        printf("Grade D");
    }
    else if(percentage>=40)
    {
        printf("Grade E");
    }
    else if(percentage<40)
    {
        printf("Grade F");
    }
}