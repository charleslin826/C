#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int score;
	printf("Please input a score:(0~100)");
	scanf("%d",&score);
	if(score<60){
		if(score>=50){
			printf("make up exams!\n");
		}
		else{
			printf("Fail!\n");
		}
	}
	else{
		printf("Pass\n");
	}
	system("pause");
	int num;
	printf("Please input a score:(any number)");
	scanf("%d",&num);
	if(num>=0){
		if(num<=20)
			printf("number between 0-20\n");
	else//�|��e�@��if�t��A�o�O�@�Ӥ��n�����Y�ƽd�ҡA�]�������H�o�˼g �ҥH�����n�ݱo�� 
			printf("number greater than 20\n");
	} else {
		printf("number less than 0\n");
	}
	system("pause");
	int score2;
	printf("Your score:");
	scanf("%d",&score2);
	if(score2>=80){
		printf("%d is A\n",score2);
	} else if(score2>=70) {
	printf("%d is B\n",score2);
	} else if(score2>=60){
		printf("%d is C\n",score2);
	} else{
		printf("Fail!\n");
	}		
	return 0;
 } 
