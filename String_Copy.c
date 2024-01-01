#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    scanf("%[^
]s",s1);
    int i=0,len=0;
    for(i=0;s1[i]!=NULL;i++)
    {
        len++;
        s2[i]=s1[i];
    }
    s2[len]=NULL;
    printf("%s",s2);
}