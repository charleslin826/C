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
	printf("num=%d, ASCII of ch=%d\n",num,ch);//�Y�S����fflush(stdin);�M���A�h�w�]scanf�|���@�Ӵ��檺���O�A�bASCII���N�O10(LINE FEED) 
	fflush(stdin);
	system("pause");
	return 0;
 } 
