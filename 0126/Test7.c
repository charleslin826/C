//7.	�ЧQ��while�j��A�p��1+2+�K+100�Ҧ����ƪ��`�M�P�_�ƪ��`�X�C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,sum1=0,sum2=0;
	do{
		if(i%2==0){  //���� 
			sum1+= i;
		}else{		 //�_�� 
			sum2+= i; 
		}		
		i++;
	}while(i<=100);
	printf("From 1~100\nsum_of_even =%d\nsum_of_odd =%d",sum1,sum2);
}

