#include<stdio.h>
#include<math.h>
int main()
{
    int s1,s2;
    float h;
    scanf("%d%d",&s1,&s2);
    h=sqrt(pow(s1,2)+pow(s2,2));
    printf("%.2f",h);
}