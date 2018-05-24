#include<stdio.h>
#include<stdlib.h>
int main(void){
	struct data{
		char name[10]; // 10
		int math;  // 4
	}st[10];
	
	
	printf("sizeof(st[10])=%d bytes\n",sizeof(st[10])); //程ぶ常璶琌4计虫  
	printf("sizeof(st)=%d bytes\n",sizeof(st));
	
	struct data2{
		char name[12]; // 10
		int math;  // 4
	}st2[10];
	
	printf("sizeof(st[0])=%d bytes\n",sizeof(st2[0])); //程ぶ常璶琌4计虫  
	printf("sizeof(st)=%d bytes\n",sizeof(st2));
	
	
	struct data3{
		char name[13]; // 10
		int math;  // 4
	}st3[10];
	
	printf("sizeof(st[13])=%d bytes\n",sizeof(st3[13])); //程ぶ常璶琌4计虫  
	printf("sizeof(st)=%d bytes\n",sizeof(st3));
	
	system("pause");
	return 0;
}
