#include<stdio.h>
int main()
{
    char s1[30];
    scanf("%[^
]s",s1);
    int i,count=0;
    for(i=0;s1[i]!=NULL;i++)
    {
        count++;
    }
    printf("%d",count);
}