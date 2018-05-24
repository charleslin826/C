//3.	請利用do while迴圈，計算 2+4+6+...+n 的總和，其中n為正的偶數，可由鍵盤自行輸入。
//若輸入的不是正偶數，則程式會要求使用者再次輸入，直到輸入的數是正偶數為止。
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i,sum=0;
	do{
		printf("Please input a even number(n>6):");
		scanf("%d",&n);
	}while(n%2!=0||n<=6);
	if(n>0){
		for(i=1;i<=n;i++){
			if((i%2==0)){
			sum=sum+i;
			};
			
		}
		printf("n=%d sum=2+4+6+...%d=%d\n",n,n,sum);
	}	
	system("pause");
	return 0;
}
