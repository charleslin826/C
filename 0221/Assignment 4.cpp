/*34.	���]��ư}�Carr�ŧi��
int arr[5]={34,76,33,42,76};
�էQ�Ϋ��б`��arr����N�B��A�N�}�Carr�̨C�@�Ӥ������ȥ[�W10�A�æC�L�X���G�C 
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[5]={34,76,33,42,76};
	for(int i=0;i<5;i++){
		arr[i]+=10;
		printf("*(arr[%d]+10)=%d\n",i,*(arr+i));
	}
	system("pause");
	return 0;
}

 
