#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int x1=(1&&0);
	int x2=(1||0);
	printf("x1=%d, x2=%d\n",x1,x2);
	system("pause");
	int score;
	printf("Please input a score:");
	scanf("%d",&score);
	if((score<0)||(score>100)){
		printf("error input!!\n");//0以下或100以上分數錯誤 
	}
	if((score<60)&&(score>=0)){
		printf("make up exams!!\n");//0-59分重考 
	}
	if((score>=60)&&(score<=100)){
		printf("PASS");//60-100 PASS 
	}
	return 0;
} 
