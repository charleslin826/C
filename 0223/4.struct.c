/*�bC�y�����A�i�H�ϥε��c��]Struct�^�Ӧs��@�դ��P�������ƾڡC���c�骺�w�q�Φ����G

struct ���c��W{
    ���c��ҥ]�t���ܼƩμƲ�
}�ܼ�;*/ 

#include<stdio.h>
#include<stdlib.h>
int main(void){
	struct data{
		char name[20];
		int math;
		
	}student; //student�O�ܼ� 
	/*	struct data student; //�i�H���}�ŧi �άO��b�W�@�檺}�᭱ */ 
	printf("Please type in your name:");
	gets(student.name);
	printf("Please input a score");
	scanf("%d",&student.math);  // "&"��}�B��l���� 
	printf("Name:%s\n",student.name);
	printf("Socre:%d\n",student.math);
	
	
	system("pause");
	return 0;
}
