/*在C語言中，可以使用結構體（Struct）來存放一組不同類型的數據。結構體的定義形式為：

struct 結構體名{
    結構體所包含的變數或數組
}變數;*/ 

#include<stdio.h>
#include<stdlib.h>
int main(void){
	struct data{
		char name[20];
		int math;
		
	}student; //student是變數 
	/*	struct data student; //可以分開宣告 或是放在上一行的}後面 */ 
	printf("Please type in your name:");
	gets(student.name);
	printf("Please input a score");
	scanf("%d",&student.math);  // "&"位址運算子取值 
	printf("Name:%s\n",student.name);
	printf("Socre:%d\n",student.math);
	
	
	system("pause");
	return 0;
}
