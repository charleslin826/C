#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	char ch='a',ch2=90,ch3='9',ch4=9,ch5='\"';
	printf("ch=%c\n",ch);
	printf("ASCII of ch=%d in Decimal\n",ch);//10�i�� 
	printf("ASCII of ch=%x in Hex\n",ch);//16�i�� 
	printf("ASCII of ch2=%c\n",ch2);//�qASCII��L�XZ
	printf("ASCII of ch3=\"%d\"\n",ch3);//10�i�쪺9�bASCII���O��57�Ӷ���//�θ���r���L�X"(���޸� ) 
	printf("ASCII of ch4=\" %d %c\n",ch4,ch5);//�L�X�Ʀr & ��ch5 - %c �L�X"(���޸�)
	system("pause");
	return 0;
}
