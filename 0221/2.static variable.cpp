#include<stdio.h>
#include<stdlib.h>
void func();
int main(){
	func();
	func();
	func();
	system("pause");
	return 0;
}

void func(void){
	static int a=200; //�Ыؤ@��static�R�A�� �|�@���s�b��O���餤 �ҥH�i�H�@���֥[ !  ����static �N�S�����ĪG�F 
	printf("in func() function a=%d\n",a);
	a+=200;
}
