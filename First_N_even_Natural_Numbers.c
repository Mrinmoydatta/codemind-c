#include<stdio.h>
int main()
{
    int i,n,flag;
    scanf("%d",&n);
  for(i=(2*n);i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            flag=flag+1;
            if(flag==n)
            break;
        }
        
    
    }
}