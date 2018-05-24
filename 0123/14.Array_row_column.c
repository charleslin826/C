#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,sum=0;
	int sale[2][4];
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("sales%d %d quarter results:",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	}
		printf("*********");
		for(i=0;i<2;i++){
			printf("\n sales%d quarter results:",i+1);
			for(j=0;j<4;j++){
				printf("%d  ",sale[i][j]);
				sum=sum+sale[i][j];
			}
		}
	printf("\n2017 results for the total sales volumne of %d cars\n",sum);
	system("pause");
	return 0;
}
