/*
3.	撰寫一程式，可輸入三個不同整數，然後[if…else if]找出這三個數值哪個最大。 
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	printf("Please input 3 numbers to compare with each other:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){ //EX1:a=10 b=100 c=1 NO--1     //EX2:a=1 b=2 c=3 NO--1
		if(a>c){
			printf("a is the biggest number.\n"); 
		}
	}else if (b>c){//a=10 b=100 c=1 OK--2   //EX2:a=1 b=2 c=3 NO--2
		if(b>a){
			printf("b is the biggest number.\n"); //OK--3
		}
	}else if (c>a){ //EX2:a=1 b=2 c=3 OK--3
		if(c>b){
			printf("c is the biggest number.\n");
		}
	}else{
		printf("input error!\n");
	}
	system("pause");
	return 0;
}

