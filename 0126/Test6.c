//6.	�ռ��g�@�{���A�Q��while�j��L�X5~20�����Ҧ���ƪ�����ȡA�̫�A�L�X�o�ǥ���Ȫ��`�M�C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=5,sum=0;
	do{
		printf("%d*%d=%d\n",i,i,i*i);		
		sum+= i*i;
		i++;
	}while(i<=20);
	printf("sum =%d",sum);
}

