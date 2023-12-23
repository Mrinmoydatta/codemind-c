#include<stdio.h>
int main()
{
    int hurl_factor,spin,speed;
    scanf("%d%d%d",&hurl_factor,&spin,&speed);
    if(hurl_factor>50 && spin>60 && speed>100)
    {
        printf("10");
    }
    else if(hurl_factor>50 && spin>60 && speed<100)
    {
        printf("9");
    }else if(hurl_factor<50 && spin>60 && speed>100)
    {
        printf("8");
    }else if(hurl_factor>50 && spin<60 && speed>100)
    {
        printf("7");
    }
    else if(hurl_factor>50 || spin>60 || speed>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}