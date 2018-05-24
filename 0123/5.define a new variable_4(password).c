#include<stdio.h>
#include<stdlib.h>
#define PASSWD 1234
int main(void)
{
	int passwd;
	int flag=0;
	int retry=1;
	do
	{
		printf("%d. Enter your password:\n",retry++);
		scanf("%d",&passwd);
		if(passwd==PASSWD)
		{
			flag=1;
		}
	}while((!flag&&retry<=3));  //while括弧內的值是0就會跳出 ; 是1就會繼續跑do //!flag第一次對的話flag=1 , !flag=false 以及retry=true 則false&true=false=while(0)跳出 //不加反向則正確也要輸入三次才會到下個迴圈 
	if(flag){  //不用寫flag=1 因為如果是1=true (boolean) 
		printf("Congratulations!You are accepted.\n");
	}else{
		printf("You are rejected!\n");
	}
	system("pause");
	return 0;
	
}
