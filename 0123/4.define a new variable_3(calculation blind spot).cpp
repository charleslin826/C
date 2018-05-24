#include<stdio.h>
#include<stdlib.h>
#define SQUARE(x) (x)*(x) //若後面x沒有加括號會變成x+1*x+1 = 2x+1 EX:x=8 =>17# 
int main(void)
{
	int n;
	printf("Please input an integer:");
	scanf("%d",&n);
	printf("%d*%d=%d\n",n+1,n+1,SQUARE(n+1));
	system("pause");
	return 0;
	
}
