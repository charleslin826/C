/*
2.	請由鍵盤輸入數值1~4，並加以判斷輸入值是否在1~4之間，如果超出此範圍，則印出 "輸入錯誤"，否則利用switch印出相對應的季節：
1：春天
2：夏天
3：秋天
4：冬天 
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char season;
	printf("Please input a number from 1 to 4:");
	scanf("%c",&season);
	switch(season){
		case'1':
			printf("春天\n");
			break;
		case'2':
			printf("夏天\n");
			break;
		case'3':
			printf("秋天\n");
			break;
		case'4':
			printf("冬天\n");
			break;
		default:
			printf("輸入錯誤");
	}
	system("pause");
	return 0;
}

