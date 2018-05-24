#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int num1=32,num2=1234567890;
	float num3=12.1234f;
	printf("num1=%6d km\n",num1);//輸出向右靠6格 
	printf("num2=%-6d km\n",num2);//前面加負號，輸出向左靠6格 
	printf("num3=%12.2f mile\n",num3);//包含數字與空格總共12格 
	system("pause");
	return 0;
}
