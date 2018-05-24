#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	char ch='a',ch2=90,ch3='9',ch4=9,ch5='\"';
	printf("ch=%c\n",ch);
	printf("ASCII of ch=%d in Decimal\n",ch);//10進位 
	printf("ASCII of ch=%x in Hex\n",ch);//16進位 
	printf("ASCII of ch2=%c\n",ch2);//從ASCII表印出Z
	printf("ASCII of ch3=\"%d\"\n",ch3);//10進位的9在ASCII表中是第57個項目//用跳脫字元印出"(雙引號 ) 
	printf("ASCII of ch4=\" %d %c\n",ch4,ch5);//印出數字 & 用ch5 - %c 印出"(雙引號)
	system("pause");
	return 0;
}
