//2.	���g�@�{���A�ŧi�@�Ө㦳5�Ӥ�������ư}�Carr�A�çQ�ΰ}�C�]�w��Ȫ��覡�A
//�Narr[0] ~ arr[4] ���O�]�Ȭ�2, 3, 1, 7�P9�A�̫�C�L�X�}�Carr���C�@�Ӥ����ȡC

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,arr[4];
	arr[0]=2;
	arr[1]=3;
	arr[2]=1;
	arr[3]=7;
	arr[4]=9;
	for(i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	system("pause");
	return 0;
}
