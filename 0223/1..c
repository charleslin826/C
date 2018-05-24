#include<stdio.h>
#include<stdlib.h>
int main(void){
	unsigned char cht,ch1,ch2;
	ch1=21;
	ch2=11;
	cht=ch1 & ch2;
	printf("10101 and 01011=%2d\n",cht);
	cht=ch1 | ch2;
	printf("10101 or 01011=%2d\n",cht);
	cht=ch1 ^ ch2;
	printf("10101 xor 01011=%2d\n",cht);//與or僅相差兩個都是一的時候為零 
	
	unsigned char ch=53,ix=5; //53 (110101)
	ch=ch<<1;
	printf("ch=%2d=%x(hex)\n",ch,ch);//106  01101010
	ch=ch<<1;
	printf("ch=%2d\n",ch);//212  11010100
	ch=ch<<1;
	printf("ch=%2d\n",ch);//168  10101000
	ch=ch>>1;
	printf("ch=%2d\n",ch);
	ch=ch>>1;
	printf("ch=%2d\n",ch);
	ix=ix<<5;
	printf("ix=%2d\n",ix);
	ix=ix>>3;
	printf("ix=%2d=%x(hex)\n",ix,ix);
	system("pause");
	return 0;	
}


