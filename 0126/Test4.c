//4.	�ռ��g�@�{���A�ŧi�@�Ө㦳3�Ӥ�������ư}�Carr�A�M��Q����L��J�Ʀr�A
//        �N�}�C�����T�Ӥ����]�ȡA�̫��{���̦L�X�o�T�Ӥ����B�p�⥭���ȡC
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3],i;
	for(i=1;i<=3;i++){
		printf("Please input no.%d numbers:",i);
		scanf("%d",&a[i-1]);
	}
	int n = (a[0]+a[1]+a[2])/3;
	printf("The average of these 3 numbers is %d",n);
}


