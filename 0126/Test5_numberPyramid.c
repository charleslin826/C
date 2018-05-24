//5.	試利用巢狀迴圈撰寫出一個能產生如下圖結果的程式。
//1    i
//12	i i+1
//123 i i+1 i+1+1
//1234 
//12345

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,n;
	char a[]={'1','2','3','4','5'};
	for(i=0;i<5;i++){				
		for(j=0;j<i+1;j++){
			printf("%c",a[j]);  
		}
		printf("\n");
	}

}

