/*
4.	�ï]�����P�Q�s���K���O��45�P55��, �Х��߰ݫȤH�U�ݭn�R�X�~, ��ï]�����P�Q�s���K�ʶR�`�ƶW�L15�~, �åB�`�B�F(�t) 800��, ����ɦ�9���u�f�G
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int B,O,T; //T�i�H�� ((B*45+55*O)*0.9) �M%.1f �h���� 
	printf("�ï]�����P�Q�s���K���O��45�P55��, �аݦU�ݭn�R�X�~, \n��ï]�����P�Q�s���K�ʶR�`�ƶW�L15�~, �åB�`�B�F(�t) 800��, ����ɦ�9���u�f:\n");
	printf("�ï]����45��:");
	scanf("%d",&B);
	printf("�Q�s���K55��:");
	scanf("%d",&O);
	//T=((B*45+55*O)*0.9);
	if((B*45+55*O)>=800 && (B+O>=15)){
		printf("�]���`�B�F(�t)800���A�B�`�~�Ƥj��15�~�A�z�ɦ��E���u�f ���B��%.1f\n",((B*45+55*O)*0.9));//�[�`�ݥt���ܼ� 
	}else{
		printf("�z���F�E���u�f���e�A���B��%d\n",(B*45+55*O));
	}
	system("pause");
	return 0;
}

