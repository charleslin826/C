#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	for(i=1;i<=10;i++){
		if(i%3==0){
			break;//break�Y������continue �h�J��3�����ƴN�~�����W���� for�j��(�N���L�U����printf���O)�B�~�򰵨�i<=10 
		}
		printf("i=%d\n",i);
	}
	printf("leave loop i=%d\n",i);
	system("pause");
	return 0;
}
