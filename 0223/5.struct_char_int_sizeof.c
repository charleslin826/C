#include<stdio.h>
#include<stdlib.h>
int main(void){
	struct data {
		char name[15]; //char = 1 byte
		int sex; // int = 4 bytes 
		int age;
	}student1={"John",1,18};
	struct data student2={"Joanna Wang",0,34}; //�i�H��b�W�@�檺}�᭱ �άO���}�ŧi ���}�ŧi�ɤ]�i�H�[�W��� 
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
