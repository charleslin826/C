/*3.	���׫��U�j�g�Τp�g���^��r��r�Bg��b�A�{�������浲�G����C�L�X�۹������C��*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	char key;
	enum rainbow{
		r=114,//�Q�i���ASCII CODE 
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

