#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int i,j,flag=0;
    for(i=0;str[i]!=NULL;i++)
    {
        for(j=i+1;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
            
        }
    }
    
    if(flag==0) printf("True");
    else printf("False");
}