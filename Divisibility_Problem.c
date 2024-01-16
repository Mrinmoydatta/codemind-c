#include<stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    if(a%b==0) printf("%d",a%b);
    else
    {
        while(a)
        {
            count++;
            a+=1;
            if(a%b==0) break;
        }
        printf("%d",count);
    }
    
}