//4.	試撰寫一程式，宣告一個具有3個元素的整數陣列arr，然後利用鍵盤輸入數字，
//        將陣列內的三個元素設值，最後於程式裡印出這三個元素且計算平均值。
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3],i;
	for(i=1;i<=3;i++){
		printf("Please input no.%d numbers:",i);
		scanf("%d",&a[i-1]);
	}
	int n = (a[0]+a[1]+a[2])/3;
	printf("The average of these 3 numbers is %d",n);
}


