#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main(void)
{
	int score[MAX];
	int j,i=0;
	float sum=0.0f;
	printf("Please input the score, input 0 to calculation:\n");
	do{
		if(i==MAX){
			printf("Array space has been used up!!\n");
			i++;
			break;
		}
		printf("Please input the score:");
		scanf("%d",&score[i]);
	}while(score[i++]>0);;
	for(j=0;j<(i-1);j++){
		sum=sum+score[j];
	}	
	printf("average score %4.2f\n",sum/(i-1));
	system("pause");
	return 0;
}
