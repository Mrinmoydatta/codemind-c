#include<stdio.h>
int main()
{
    int t,l,m,count=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&l,&m);
        for(int j=l;j<=m;j++)
        {
            if(j%10==2||j%10==3||j%10==9)
            {
                count++;
            }
        }
        printf("%d
",count);
        count=0;
    }
    
}