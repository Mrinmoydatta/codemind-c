#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k,count=0;
    scanf("%d%d",&a,&b);
    int diff=abs(a-b);
    if(a==b)printf("0");
    else if(a<b){
        int r=diff%10;
        if(r!=0)printf("%d",(diff/10)+1);
        else printf("%d",diff/10);
    }
    else if(a>b)
    {
        int r=diff%10;
        if(r!=0)printf("%d",(diff/10)+1);
        else printf("%d",diff/10);
    }
}