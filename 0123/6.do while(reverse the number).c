#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,rr;
	while(1) //while括弧內的值是0就會跳出 ; 是1就會繼續跑do  這邊就是讓它可以一直重複執行這個程式 
	{
		do
		{
			printf("Please input an integer:");
			scanf("%d",&a);
		}while(a<=0);
		printf("The reverse is ");
		while(a!=0)
		{
		rr=a%10; //123%10 = 3  //12%10=2 //1%10=1 =>rr=3 2 1
		a/=10;   //123/10=12  //12/10=1 =>a=12 1 0
		printf("%d",rr); //321
//		printf("(detail:a=%d,rr=%d)\n",a,rr); 
		}
		printf("\n\n");
	}
	system("pause");
	return 0;
 } 
