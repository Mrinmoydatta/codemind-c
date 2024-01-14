#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    scanf("%[^
]s",s);
    char str[50];
    strcpy(str,s);
    int i,temp,len=0;
    for(i=0;s[i]!=NULL;i++)
    {
        len++;
    }
    i=0;
    int j=len-1;
    for(i=0;s[i]!=NULL;i++)
    {
        while(i<=j){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
    int res=strcmp(str,s);
    if(res==0)
    {
        printf("Palindrome");
    }
    else
    printf("Not Palindrome");
}