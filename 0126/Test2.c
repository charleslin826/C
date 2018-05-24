//2.	試撰寫void kitty(int k) 函數，可輸入行數k，當主程式呼叫kitty(k) 時，螢幕上會顯示出k行的 "Hello Kitty"。
#include <stdio.h>
#include <stdlib.h>
void kitty(int n);
int main(void)
{
	int k;
	printf("Please input how many times you want to show the \"Hello Kitty\":");
	scanf("%d",&k);
	kitty(k);
	

	
}


void kitty(int n){
	int i;
	for(i=0;i<n;i++){
	printf("\"Hello Kitty\"\n");	
	}
	
}
