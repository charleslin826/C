/*2.	���]�b�{���X�̦��p�U���ԭz
float num=12.6f,*ptr;
ptr=&num;
�ռ��g�@�{���A�C�L�X�ܼ�num�P�����ܼ�ptr���ȻP��}�C
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	float num=12.6f,*ptr;
	ptr=&num;
	printf("num=%.1f, &num=%p\n",num,&num);
	printf("ptr=%p, *ptr=%.1f, &ptr=%p",ptr,*ptr,&ptr);
	
	system("pause");
	return 0;
}


 
