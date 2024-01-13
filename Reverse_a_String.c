#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    scanf("%[^
]s",s1);
    int i,j,temp,len=0;
    for(i=0;s1[i]!=NULL;i++)
    {
        len++;
    }
    i=0;
    j=len-1;
    while(i<=j)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
        i++;
        j--;
    }
    printf("%s",s1);
}
