/*2.�]�p�@�ӵ��c�x�s�A�ӤH�q�����򥻸�ơA�]�t�GCPU �t�P(char:10)�B
�O����j�p(int)�B�@�~�t�ΦW��(char:20)�H�εw�Ъ��j�p(int)�C
�w�лP�O����j�p���H G �����C�b�D�{�����H�o�ӵ��c�ŧi���c�ܼ� comp�A
�H�߰ݪ��覡�̧ǿ�J�W�z����ơA�̫�òΤ@��X�Ҧ���J����T�C
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	struct data{
		char CPU[10];
		int RAM;//�H G �����
		char OS[20];
		int HD;//�H G �����		
	}comp;//�ŧi���c�ܼ� comp�A
	
	printf("CPU: ");
	scanf("%s",comp.CPU);
	printf("RAM:(G) ");
	scanf("%d",&comp.RAM);
	printf("OS: ");
	scanf("%s",comp.OS);
	printf("HD:(G) ");
	scanf("%d",&comp.HD);
	puts("");
	
	printf("Here is your PC info:\nCPU: %s\nRAM: %dG\nOS: %s\nHD: %dG\n",comp.CPU,comp.RAM,comp.OS,comp.HD);
	
	system("pause");
	return 0;
}
