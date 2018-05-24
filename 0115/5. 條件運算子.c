#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int hour;
	printf("Please inpur the 24-hour system =>");
	scanf("%d",&hour);
	hour=(hour>=12)?hour-12:hour;
	printf("Present Time: %d\n",hour);
	system("pause");
	
	int num1,num2,larger;
	printf("Please input two integers:");
	scanf("%d %d",&num1,&num2);
	num1>num2?(larger=num1):(larger=num2);
	printf("The greater value is %d",larger);
	system("pause");
	return 0;
 } 
