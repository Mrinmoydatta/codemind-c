#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(y>x) printf("%d",x);
    else
    {
        int steps=x/y+x%y;
        printf("%d",steps);
    }
    return 0;
}