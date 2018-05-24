#include<stdio.h>
#include<stdlib.h>
int main(void){
	char key;
	enum color{
		red=114,//十進位制ASCII CODE 
		green=103,  
		blue=98 	
	}shirt;
//	enum color shirt; //另外宣告變數shirt代表這個enum 也可以放在上一行的}後面 
	do{
		printf("Please input (r,g,b):");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=red)&&(key!=green)&&(key!=blue));
	
	shirt=key; //若另存成C++ 則這邊會出現錯誤 
	switch(shirt){
		case red:
			printf("You selected red!\n");
			break;
		case green:
			printf("You selected green!\n");
			break;
		case blue:
			printf("You selsected blue!\n");
			break;
	}
	system("pause");
	return 0;
}
