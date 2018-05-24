#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	short int sum,s=32767;//short range:-32768 ~ 32767 
	sum=s+1;
	printf("s+1=%d\n",sum);//overflow(溢位);進入數值迴圈 
	sum=s+2;
	printf("s+2=%d\n",sum);//overflow(溢位);進入數值迴圈 
	system("pause");
	long int sum2,s2=32767; 
	sum2=s2+1;
	printf("s2+1=%d\n",sum2);
	sum2=s2+2;
	printf("s2+2=%d\n",sum2);
	system("pause");
	return 0;
	
}
