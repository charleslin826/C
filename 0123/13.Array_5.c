#include<stdio.h>
#include<stdlib.h>
#define SIZE 6
int main(void)
{
	int i,num,flag=0,A[SIZE]={35,76,66,42,35,19},retry=1;
	printf("The value of an array element:\n");
	for(i=0;i<SIZE;i++){
		printf("A[%d]=%d\n",i,A[i]);
	}
	do{
	printf("Please input an integer:(from 18 to 76, You have 3 shots!)");
	scanf("%d",&num);
	system("cls");// 清除畫面  額外加的 增加趣味性 
	for(i=0;i<SIZE;i++){
		if(A[i]==num){
			printf("found it! A[%d]=%d\n",i,A[i]);
			flag=1;
		}
	}
	if(flag==0){ 
		printf("Not found...\n");
	}
	retry++;
}while(retry<4);
	system("pause");
	return 0;
}
