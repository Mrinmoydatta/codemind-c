#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    float a_time=a/(float)x;
    float b_time=b/(float)y;
    if(a_time<b_time)printf("Walter");
    else if(b_time<a_time)printf("Jesse");
    else if(a_time==b_time) printf("Both");
}