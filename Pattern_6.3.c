#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int a=n,b=n;
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-1;j++)
		{
			printf(" ");
			
		}
		for(k=a;k<=b;k++)
		{
			printf("%d ",k);
		}
		n--;
		a--;
		printf("
");
	}
}