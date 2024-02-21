#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0||arr[i]==1)
        {
            flag=0;
        }
        else flag++;
    }
    if(flag==0)printf("True");
    else printf("False");
}