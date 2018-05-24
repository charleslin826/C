/*5.	試撰寫int cub(int x) 函數，可用來傳回x的6次方，並
利用此函數來計算cub(5)，即計算5^6。
*/
#include<stdio.h>
#include<stdlib.h>
int cub(int x);
int main(void){
	
	printf("cub(5)=%d\n",cub(5));
	
	system("pause");
	return 0;
}

int cub(int x){
	int sum =1;
	for(int i=0;i<6;i++){
		sum *= x; 
	}
	return sum;
}

 
