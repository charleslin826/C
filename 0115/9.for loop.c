#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,n=6;
	for(i=1;j<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");//�L�X*��j+1�Ai���� 
			//printf("i=%d,j=%d\n",i,j);
		}
		printf("\n");//�L�X�Ů�Ai+1 
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
