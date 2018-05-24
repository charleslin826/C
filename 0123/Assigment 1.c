//1.	請撰寫一程式宣告下面的字元陣列, 並驗證陣列str共佔了幾個bytes？
//      str[]="Hello, C language."


#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char str[]={"Hello, C language."};//系統預設字串有一個空字元null 所以是18+1 =19# 
	//quote:"字串宣告. 在C語言中，字串是利用簡單的一維字元陣列加上一個字串結束字元'\0'. （NULL)來表示。"
	printf("char:%d byte\n",sizeof(str[0]));
	printf("Array:%d bytes\n",sizeof(str));
	system("pause");
	return 0;
}
