#include<stdio.h>
#include<stdlib.h>
int main(){
	int num=20;
	int *ptr; //�إߤ@�ӫ����ܼ� 
	ptr=&num;//�Nptr���Vnum 
	printf("num=%d, &num=%p\n",num,&num);
	printf("*ptr=%d, ptr=%p, &ptr=%p",*ptr,ptr,&ptr);//ptr �̭��񪺬Onum���O�����}, ptr*�Onum�ܼƪ���,&ptr�Optr�����ۤv����} 
					/* %p �N��ϥ�16�i��   *�O���ȹB��l &�O���}�B��l */ 
	
	system("pause");
	return 0;
}


