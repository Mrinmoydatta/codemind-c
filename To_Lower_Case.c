#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    scanf("%s",s1);
    int i;
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]+=32;
        }
    }
    printf("%s",s1);
}