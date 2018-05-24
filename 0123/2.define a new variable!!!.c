#include<stdio.h>
#include<stdlib.h>
#define SQUARE n*n
int main(void)
{
	int n;
	printf("Please input an integer:");
	scanf("%d",&n);
	printf("%d*%d=%d\n",n,n,SQUARE);
	system("pause");
	return 0;
	
}
