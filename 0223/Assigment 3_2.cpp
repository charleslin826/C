/*3.	不論按下大寫或小寫的英文字母r、g或b，程式的執行結果均能列印出相對應的顏色*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	char key;
	enum rainbow{
		r=114,//十進位制ASCII CODE 
		g=103,  
		b=98
	}color;
		
	do{
		printf("Please input (r/g/b)(R/G/B):");
		scanf("%c",&key);
		if((key=="R")||(key=="G")||(key=="B")){
			switch(key){
				case R:
					key=r;
					break;
				case G:
					key=g;
					break;
				case B:
					key=b;
					break;	
			}
		}
		fflush(stdin);
	}while((key!=r)&&(key!=g)&&(key!=b));
	color=key;
	switch(color){
		case r:
			printf("red\n");
			break;
		case g:
			printf("green\n");
			break;
		case b:
			printf("blue\n");
			break;
	}

	system("pause");
	return 0;
}

