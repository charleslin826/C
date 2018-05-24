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
	scanf("%c",&grade);//若沒有用fflush(stdin);清除，則預設scanf會有一個換行的指令，在ASCII表內就是10(LINE FEED) 
	switch(grade){
		case'a': //結果和A一樣 
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
