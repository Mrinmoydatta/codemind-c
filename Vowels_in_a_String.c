#include<stdio.h>
int main()
{
    char str[30],ch;
    scanf("%[^
]s",str);
    scanf(" %c",&ch);
    int i,flag=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        {
            flag=1;
             printf("True
");
             printf("%d",i);
            break;
        }
    }
    // if(flag==1)
    // {
    //     printf("True
");
    //     for(i=0;str[i]!=NULL;i++)
    //     {
    //         if(str[i]==ch)
    //         {
    //             printf("%d",i);
    //             break;
    //         }
    //     }
    // }
    if(flag==0)
    {
        printf("False");
    }
   
}