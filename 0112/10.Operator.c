#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int x1,x2,x3,x4;
	float x5;
	x1=4+2;
	x2=4-2;
	x3=1+5.8/2;//會先乘除後加減，浮點數(小數點)自動去除 
	x4=1+4*2;
	x5=1+5.0/2;
	printf("x1=%d,\nx2=%d,\nx3=%d,\nx4=%d,\nx5=%.2f,\n",x1,x2,x3,x4,x5);
	system("pause");
	return 0;
}
