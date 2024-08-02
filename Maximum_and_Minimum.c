#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int min=arr[0],max=arr[0];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int rep=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]) {
                rep++;
            }
        }
        if(arr[i]==1+rep) {
            flag++;
            if(arr[i]<min) min=arr[i];
            if(arr[i]>max) max=arr[i];
        }
    }
    if(flag!=0)
    printf("%d %d",min,max);
    else
    printf("%d",-1);
}