#include<stdio.h>
#include<stdlib.h>
#define MAX 2
int main(void){
	int i;
	struct data{
		
		char name[15];
		int math;
		
	}student[MAX];
	
	for(int i=0;i<MAX;i++){
		printf("Name: ");
		gets(student[i].name);
		printf("Score: ");
//		gets(student[i].math);
		scanf("%d",&student[i].math);
		fflush(stdin);
		printf("Name:%s, Score:%d\n",student[i].name,student[i].math);		
	}
	
	
	
	system("pause");
	return 0;
}


/*gets() 與 scanf("%s")
推薦 0 收藏 0 轉貼0訂閱站台
這兩個雖然都是讀取字串,
但是scanf不能讀取含有空格的字串,也就是說會把空格與空格或與換行之間當做一個字串

而gets()連換行都可以當作是一筆輸入!!

當然使用上常常跟scanf混用造成問題

假使scanf("%d")輸入數字的話 則按下Enter

gets()就會讀入一筆  所以通常要增加輸入空格scanf("%d ")

或者是增加getschar() 把換行字元讀掉

※　假如讀入的字串不需要有空格則gets比scanf 快4倍 (當然速度只是個約略)

※　使用gets()單獨讀取換行 其strlen(s)==0

※　宣告的陣列個數必須比輸入多1

※　輸入陣列　　所儲存的最末端系統會自動補上'\0'這個字元

※  strlen()可是很耗時間的 若可省則用'\0'替代OVER 速度+*/
