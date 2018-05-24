//6.	試撰寫一程式，利用while迴圈印出5~20之間所有整數的平方值，最後再印出這些平方值的總和。

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=5,sum=0;
	do{
		printf("%d*%d=%d\n",i,i,i*i);		
		sum+= i*i;
		i++;
	}while(i<=20);
	printf("sum =%d",sum);
}

