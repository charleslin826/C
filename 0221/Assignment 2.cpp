/*2.	假設在程式碼裡有如下的敘述
float num=12.6f,*ptr;
ptr=&num;
試撰寫一程式，列印出變數num與指標變數ptr的值與位址。
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


 
