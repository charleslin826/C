/*
2.	�Х���L��J�ƭ�1~4�A�å[�H�P�_��J�ȬO�_�b1~4�����A�p�G�W�X���d��A�h�L�X "��J���~"�A�_�h�Q��switch�L�X�۹������u�`�G
1�G�K��
2�G�L��
3�G���
4�G�V�� 
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char season;
	printf("Please input a number from 1 to 4:");
	scanf("%c",&season);
	switch(season){
		case'1':
			printf("�K��\n");
			break;
		case'2':
			printf("�L��\n");
			break;
		case'3':
			printf("���\n");
			break;
		case'4':
			printf("�V��\n");
			break;
		default:
			printf("��J���~");
	}
	system("pause");
	return 0;
}

