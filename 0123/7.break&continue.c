#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	for(i=1;i<=10;i++){
		if(i%3==0){
			break;//break若替換成continue 則遇到3的倍數就繼續執行上面的 for迴圈(將跳過下面的printf指令)且繼續做到i<=10 
		}
		printf("i=%d\n",i);
	}
	printf("leave loop i=%d\n",i);
	system("pause");
	return 0;
}
