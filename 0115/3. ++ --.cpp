#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a=3,b=3;
	printf("a=%d,\n",a);
	printf("a++ return value %d",a++);//a++先呈現後賦值 
	printf(",a=%d\n",a);
	printf("b=%d,\n",b);
	printf("++b return value %d",++b);//++b先賦值後呈現 
	printf(",b=%d,\n",b);
	system("pause");
	return 0;
 } 
