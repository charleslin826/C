#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a,b;
	char op;
	printf("Please input the expression:(ex:3+2)\n");
	scanf("%f %c %f",&a,&op,&b);
	switch (op){
		case '+':
			printf("%.1f+%.1f=%.1f\n",a,b,a+b);
			break;
		case '-':
			printf("%.1f-%.1f=%.1f\n",a,b,a-b);
			break;
		case '*':
			printf("%.1f*%.1f=%.1f\n",a,b,a*b);
			break;
		case'/':
			printf("%.1f/%.1f=%.1f\n",a,b,a/b);
			break;
		default:
			printf("input error!!\n");
	}
	system("pause");	
	char grade;
	printf("Please input a grade:(ex:A or a or B..)\n");	
	fflush(stdin);
	scanf("%c",&grade);//�Y�S����fflush(stdin);�M���A�h�w�]scanf�|���@�Ӵ��檺���O�A�bASCII���N�O10(LINE FEED) 
	switch(grade){
		case'a': //���G�MA�@�� 
		case'A':
			printf("Excellent!!\n");
			break;
		case'b':
		case'B':
			printf("Good!\n");
			break;
		case'c':
		case'C':
			printf("Be study hard!\n");
			break;
		default:
			printf("Fail!\n");
			break;
	};
	system("pause");
	return 0;
 } 
