#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i=1,sum=0;
	do
	{
		printf("Please input he value of n(n>2):");
		scanf("%d",&n);
	}while(n<=2);
	do
	{
		sum+=i;
		i++;
	}while(i<=n);
	printf("1+2+...+%d=%d\n",n,sum);
	system("pause");
	return 0;
 } 
