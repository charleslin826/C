#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	printf("Hello C!");
	printf("Hello World!\n");
	system("pause");//畫面暫停 
	getchar(); //當你按下 enter 的時候才會跳開 (意思是你按其它鍵的話還是會顯示在螢幕上)
	//但注意的是，若程式碼中有任何之其他輸入函式，最後會因換行還留在 buffer 裡而導致失敗。
	return 0;//結束/跳出此程式的功能詞;因為我們是用Dev*C++ 會自動幫我們加入這個功能，但如果用記事本就要自己加 
}
