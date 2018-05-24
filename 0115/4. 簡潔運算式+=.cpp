#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a=3,b=5,c=6,d=7;
	printf("before calculation:a=%d,b=%d\n",a,b);
	a+=b;
	printf("a+=b calculation:a=%d,b=%d\n",a,b);
	printf("before calculation:c=%d,d=%d\n",c,d);
	c*=d;
	printf("c*=d calculation:c=%d,d=%d\n",c,d); 
	system("pause");
	return 0;
 } 
