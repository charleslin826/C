#include <stdio.h>
#include <stdlib.h>
#define LEN 9
int main(void)
{
	int i,j;
	int tables[LEN][LEN];
	char str[15]="Hello world!"; 
	char str2[4] ={'B','Y','E','!'};
	char str3[5] ={'S','E','E','U','\0'}; //補0 
	for(i=0;i<LEN;i++){
		for(j=0;j<LEN;j++){
			tables[i][j]=(i+1)*(j+1);				
		}
	}		
		for(i=0;i<LEN;i++){
		for(j=0;j<LEN;j++){
			printf("%d*%d=%2d\t",(i+1),(j+1),tables[i][j]);  //%d 中間放數字可以增加空格空間  				
		}
		printf("\n");
	}
	printf("%s\n%s\n%s\n",str,str3,str2);
	system("pause");
	return 0;	
		
 } 
