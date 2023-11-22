#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float srt=0.0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        srt=srt+sqrt(i);
    }
    printf("%.2f",srt);
}
