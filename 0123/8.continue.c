#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	for(i=0;i<10;i++){
		if(i%2==0){ //0%2=0 1%2=1 2%2=0 ...   //!= �אּ ==  �J�참���~��֥[���L�X 
			continue; //1.3.5.7=�~���        //0.2.4.6=�~��� 
		}else if(i>=8){//��8����              //== �אּ >= �N���8���� �]���ڭ̥u�n�L�X1.3.5.7 
			break;
		}
		printf("%d\n",i);//�u�L�X0.2.4.6      //�u�L�X1.3.5.7 
	}
	system("pause");
	return 0;
}
