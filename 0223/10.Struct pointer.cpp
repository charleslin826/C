#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	struct data{
	char name[15];
	int math;
	int eng;	
	}student, *ptr;
	
	ptr=&student; //ptr 指向student 
	printf("Name: ");
	gets(ptr->name);
	printf("Math: ");
	scanf("%d",&ptr->math);
	printf("English: ");
	scanf("%d",&ptr->eng);
	puts("");//當作空格 
	
	printf("Name: %s\n",student.name);
	printf("Math: %d\n",ptr->math);
	printf("English: %d\n",ptr->eng);
	printf("Average= %.2f\n",(ptr->eng+ptr->math)/2.0);
=
	system("pause");
	return 0;
}

/*http://blog.csdn.net/lingchen2348/article/details/52754053
scanf(),getchar(),gets()區別與用法
原創 2016年10月08日 10:18:28
這幾個常見的輸入函數時常困擾著初學程式設計的人，簡單介紹一下區別與用法。
一、scanf();本人最常用，基本格式就是scanf("%d,%c",&a,&b);輸入的數量可以繼續擴充，能夠將鍵盤輸入以不同格式保存在變數裡，功能強大。
注意點：
1、不要忘了加"&"，這個取位址符很重要，表明資料要放到這個位址去，有人經常丟；
2、scanf(),判斷輸入結束的標誌是空格和回車，所以輸入字串時，若中間有空格，空格後面的字元輸入不進去，因為scanf已經停止輸入了；
3、不要在scanf()中加入一些雜七雜八的格式字元，比如scanf("a= %d"，&a)；"a="就是自己給自己找麻煩，輸入者誰會知道你要求輸入"a="？
二、gets(),輸入字串的好幫手，當你的字串中有空格時，就別想scanf了，gets(abc);就可以解決這個問題，abc是個字元陣列，用來存字串，鍵盤上的輸入以回車為止；
注意點
1、gets()一次只能輸入一個字串，不像scanf()那樣連續給好幾個變數賦值；
2、主要用在字串的輸入上，其它類型不考慮
三、getchar(),得到一個字元，當你只想讓使用者輸入一個字元時，可以考慮用它，它只接受一個字元，其餘不要，比如讓用戶判斷yes or no 時，你只想讓用戶輸入Y 或者N時。
注意點
1、只接受一個字元
2、資料格式僅為字元，數位也會被當做字元。

再補充一點：
不管用哪個函數來進行鍵盤輸入，一個好習慣就是及時清除鍵盤緩衝區，因為使用者很可能不按照你給的的格式敲鍵盤，有些時候即使是最後的那一個"回車"也會在鍵盤緩衝區留下一個字元，影響後續的輸入（之後使用scanf等函數時很可能先讀入的是回車），為了消除最後一個回車的影響，一些方法是在scanf前多寫一個getchar()去吸收這個回車，有些是寫在scanf()後，這要根據不同程式自行設定，但有時還會存在一種情況，就是無論放在前還是放在後，getchar()總會不小心將正常的鍵盤輸入"吃掉"一個字元(原本設計的是吃掉回車符)，這一點也很好理解，因為它是一個輸入函數，鍵盤緩衝區的字元是否多餘完全需要你自己去判斷。
另一個方法就是用fflush(stdin);這個語句就是清除鍵盤緩衝區資料，個人感覺，如果你的程式不需要跨到linux上去的話，只是交交作業練練手，最好用這個，放在scanf前面就好，這表示當你開始一次鍵盤輸入時，鍵盤緩衝區是乾乾淨淨的，很省心。



*/
