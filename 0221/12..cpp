#include<stdio.h>
#include<stdlib.h>
int *max(int *,int *);
int main(void){
	int a=5,b=8;
	int *ptr;  //�إߤ@�ӫ����ܼ� 
	printf("a=%d\tb=%d\n",a,b);
	printf("&a=%p\t&b=%p\n",&a,&b);
	ptr=max(&a,&b);  //ptr �̭��񪺬Omax��ƭp��X�Ӫ�p2���O�����}
	printf("*ptr(max)=%d\n",*ptr); //��*ptr���Xp2����
	
	
	
	system("pause");
	return 0;
}

int *max(int *p1, int *p2){
	if(*p1>*p2){
		return p1;
	}else
		printf("&p1=%p\n&p2=%p\n",&p1,&p2);
		printf("p1=%d \t p2=%d\n",*p1,*p2);
		printf("return p2 as max\n");
		return p2;
}


 
