#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int rep=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=-1 && arr[j]!=-1) {
                rep++;
                arr[j]=-1;
            }
        }
        if(arr[i]==1+rep) {
            flag++;
            printf("%d ",arr[i]);
        }
    }
    if(flag==0)
    printf("%d",-1);
}