#include<stdio.h>
#include<stdlib.h>
int main(void){
	struct data{
		char name[15];
		int math;
	}stu1={"Lily Chen",83};
	struct data stu2;
	stu2=stu1;
	printf("stu2.name=%s\t stu2.math=%d\n",stu2.name,stu2.math);
	
	system("pause");
	return 0;	
}
