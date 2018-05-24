/*3.	試撰寫一函數void count(int *)，
可接收一個整數變數num的位址（num的初值請設為0）。
每當count()函數被呼叫一次，主程式裡的num之值也會被加1，
並於主程式裡測試count()函數三次。
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
 
