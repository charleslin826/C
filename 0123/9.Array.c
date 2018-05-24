#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,score[4];
	score[0]=78;
	score[1]=57;
	score[2]=99;
	score[3]=71;
	for(i=0;i<=3;i++){
		printf("score[%d]=%d\n",i,score[i]);
	}
	system("pause");
	return 0;
}
