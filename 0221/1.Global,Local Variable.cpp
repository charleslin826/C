#include<stdio.h>
#include<stdlib.h>
void func();
int a=50; //��global variable�L�k�v�T�̭��� local variable
int main(){
	/*int*/ a=100; 
	printf("Before call func(), a=%d\n",a);
	func();
	printf("After call func(), a=%d\n",a);//int���ŧi������ �N���Olocal variable�F �ӬO������global�� �ҥH���G�|����� 
	system("pause");
	return 0;
} 

void func(){
	/*int*/ a=300;
	printf("In func() function, a=%d\n",a);
}
