#include<stdio.h>
#include<stdlib.h>
int main(){
	int num=20;
	int *ptr; //建立一個指標變數 
	ptr=&num;//將ptr指向num 
	printf("num=%d, &num=%p\n",num,&num);
	printf("*ptr=%d, ptr=%p, &ptr=%p",*ptr,ptr,&ptr);//ptr 裡面放的是num的記憶體位址, ptr*是num變數的值,&ptr是ptr本身自己的位址 
					/* %p 代表使用16進制   *是取值運算子 &是取址運算子 */ 
	
	system("pause");
	return 0;
}


