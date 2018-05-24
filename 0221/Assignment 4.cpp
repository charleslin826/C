/*34.	假設整數陣列arr宣告為
int arr[5]={34,76,33,42,76};
試利用指標常數arr的算術運算，將陣列arr裡每一個元素的值加上10，並列印出結果。 
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[5]={34,76,33,42,76};
	for(int i=0;i<5;i++){
		arr[i]+=10;
		printf("*(arr[%d]+10)=%d\n",i,*(arr+i));
	}
	system("pause");
	return 0;
}

 
