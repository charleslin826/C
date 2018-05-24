#include<stdio.h>
#include<stdlib.h>
int main(void){
	struct data {
		char name[15]; //char = 1 byte
		int sex; // int = 4 bytes 
		int age;
	}student1={"John",1,18};
	struct data student2={"Joanna Wang",0,34}; //可以放在上一行的}後面 或是分開宣告 分開宣告時也可以加上資料 
	printf("sizeof(student1)=%d\n",sizeof(student1));	
	printf("Name:%s\n",student1.name);
	printf("Gender:");
	if(student1.sex==1){
		printf("Male\n");
	}else{
		printf("Female\n");
	}
	printf("Age:%d\n",student1.age);
	
	printf("sizeof(student2)=%d\n",sizeof(student2));
	printf("Name:%s\n",student2.name);
	printf("Gender:");
	if(student2.sex==1){
		printf("Male\n");
	}else{
		printf("Female\n");
	}
	printf("Age:%d\n",student2.age);
	
	
	
	
	
	system("pause");
	return 0;
}
