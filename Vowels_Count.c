#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int i,vowel=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u')
        {
            vowel++;
        }
    }
    printf("%d",vowel);
}