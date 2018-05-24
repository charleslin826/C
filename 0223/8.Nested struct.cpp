#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	struct date{
		int month;
		int day;
	};
	
	struct data{
		char name[15]; 
		int math;
		struct date birthday;  //Nested struct
	}stu1={"Joanna Wang",74,{10,2}};
	//use the struct inside of a nested struct
	printf("Name=%s, Score=%d, Birthday:%d/%d\n",stu1.name,stu1.math,stu1.birthday.month,stu1.birthday.day);
	
	system("pause");
	return 0;
}
