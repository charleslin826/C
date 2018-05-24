//2.	撰寫一程式，宣告一個具有5個元素的整數陣列arr，並利用陣列設定初值的方式，
//將arr[0] ~ arr[4] 分別設值為2, 3, 1, 7與9，最後列印出陣列arr的每一個元素值。

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,arr[4];
	arr[0]=2;
	arr[1]=3;
	arr[2]=1;
	arr[3]=7;
	arr[4]=9;
	for(i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	system("pause");
	return 0;
}
