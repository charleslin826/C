#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float data[4]; // double佔8byte(位元組)    //float 的長度為4 個位元組， double 的長度為8 個位元組
	printf("Array:%d\n",sizeof(data[0]));
	printf("Array:%d\n",sizeof(data));
	system("pause");
	return 0;
}
