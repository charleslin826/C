#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int num1=32,num2=1234567890;
	float num3=12.1234f;
	printf("num1=%6d km\n",num1);//��X�V�k�a6�� 
	printf("num2=%-6d km\n",num2);//�e���[�t���A��X�V���a6�� 
	printf("num3=%12.2f mile\n",num3);//�]�t�Ʀr�P�Ů��`�@12�� 
	system("pause");
	return 0;
}
