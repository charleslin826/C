#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr; //�إߤ@�ӫ����ܼ�
	char *ptrc;
	
	printf("sizeof(ptr)=%d\n",sizeof(ptr));  //�O�����}�j�p8bytes 
	printf("sizeof(ptrc)=%d\n",sizeof(ptrc));  //�O�����}�j�p8bytes
	printf("sizeof(*ptr)=%d\n",sizeof(*ptr));   //���Vint=4bytes <*ptr���O������ڤj�p���Pint> 
	printf("sizeof(*ptrc)=%d\n",sizeof(*ptrc)); //���V�r��char���A =1byte  <*ptrc���O������ڤj�p���Pchar> 

	system("pause");
	return 0;
}


