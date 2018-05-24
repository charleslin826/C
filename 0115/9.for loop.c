#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,n=6;
	for(i=1;j<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");//印出*後j+1，i不變 
			//printf("i=%d,j=%d\n",i,j);
		}
		printf("\n");//印出空格，i+1 
		printf("i=%d,j=%d\n",i,j-1);
	}
	system("pause");
	char row,column;
	for(row='A';row<='G';row++)
	{
		for(column=row;column<='G';column++){
			printf("%2c",column);		
		}
		printf("\n");
	}
	system("pause");
	return 0;
 } 
