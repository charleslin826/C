#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int num;
	printf("Please input an integer:");
	scanf("%d",&num); // scanf是一個讓使用者存取他所輸入的值的函式 需搭配型態格式(如%d)和"&"使用
	printf("num=%d\n",num);
	system("pause");
	printf("num+1=%d\n",num+1);
	return 0;
}
 
