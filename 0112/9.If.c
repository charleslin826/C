#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int num;
	printf("Please input an integer:");
	scanf("%d",&num);
	if(num>0){
		printf("You enter an integer greater than 0\n");
	}
	else if(num<0)	//else if��else�����]���v�T���G 
		printf("You enter an integer smaller than 0\n");//if���j�A���i�H�ٲ�!! 
	else
		printf("You enter an integer equals to 0\n");//else���j�A���i�H�ٲ�!!
	printf("End\n");
	system("pause");
	return 0;	
}




	
