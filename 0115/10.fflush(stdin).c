#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num;
	char ch;
	printf("Please input an integer:");
	scanf("%d",&num);
	fflush(stdin);
	printf("Please input a character:");
	scanf("%c",&ch);
	printf("num=%d, ASCII of ch=%d\n",num,ch);//若沒有用fflush(stdin);清除，則預設scanf會有一個換行的指令，在ASCII表內就是10(LINE FEED) 
	fflush(stdin);
	system("pause");
	return 0;
 } 
