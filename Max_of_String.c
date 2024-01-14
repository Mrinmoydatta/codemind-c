#include<stdio.h>
int main()
{
    char s[50];
    scanf("%[^
]s",s);
    int i,max=s[0];
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>max) max=s[i];
    }
    printf("%c",max);
}