#include<stdio.h>
#include<stdlib.h>
int main(void){
	char key;
	enum color{
		red=114,//�Q�i���ASCII CODE 
		green=103,  
		blue=98 	
	}shirt;
//	enum color shirt; //�t�~�ŧi�ܼ�shirt�N��o��enum �]�i�H��b�W�@�檺}�᭱ 
	do{
		printf("Please input (r,g,b):");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=red)&&(key!=green)&&(key!=blue));
	
	shirt=key; //�Y�t�s��C++ �h�o��|�X�{���~ 
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
