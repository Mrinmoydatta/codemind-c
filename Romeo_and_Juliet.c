#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int no_of_chocolate=((5*x)+(10*y))/z;
    printf("%d",no_of_chocolate);
}