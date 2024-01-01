#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int i,count_word=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==32)
        {
            count_word++;
        }
    }
    printf("%d",count_word+1);
}