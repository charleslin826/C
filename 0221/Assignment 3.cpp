/*3.	�ռ��g�@���void count(int *)�A
�i�����@�Ӿ���ܼ�num����}�]num����Ƚг]��0�^�C
�C��count()��ƳQ�I�s�@���A�D�{���̪�num���Ȥ]�|�Q�[1�A
�é�D�{���̴���count()��ƤT���C
*/
#include<stdio.h>
#include<stdlib.h>
void count(int *);
int main(void){
	int num =0;
	int *ptr = &num;
	count(&num);
	count(&num);
	count(&num);
	printf("num=%d",num);
	system("pause");
	return 0;
}

void count(int *x){
	*x+=1;
}
 
