#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	printf("12%%4=%d\n",12%4);//C語言中要顯示%需在前面加一個"%"的跳脫字元而非"\"
	printf("12%%5=%d\n",12%5);
	printf("12%%16=%d\n",12%16);
	system("pause");
	return 0;
} 
