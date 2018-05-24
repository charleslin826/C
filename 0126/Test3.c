//3.	試撰寫函數，可計算5! (5個階層 EX 5! = 5 * 4 * 3 * 2 * 1 = 120)在螢幕上會顯示出結果。
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("1*2*3..*%d=%d!=%d",n,n,times(n));
}

int times(int n){
	int sum=1,i;
	for(i=1;i<n+1;i++){
		sum = sum*i;	
	}
		return sum;
}
