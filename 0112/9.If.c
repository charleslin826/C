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
	else if(num<0)	//else if的else拿掉也不影響結果 
		printf("You enter an integer smaller than 0\n");//if的大括弧可以省略!! 
	else
		printf("You enter an integer equals to 0\n");//else的大括弧可以省略!!
	printf("End\n");
	system("pause");
	return 0;	
}




	
