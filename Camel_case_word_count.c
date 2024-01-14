#include<stdio.h>
int main()
{
    char s[50];
    scanf("%s",s);
    int i,count=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            count++;
        }
    }
    if(!(s[0]>='A'&&s[0]<='Z')){
        printf("%d",count+1);
        }
        else
        {
            printf("%d",count);
        }
}