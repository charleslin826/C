#include<stdio.h>
#include<stdlib.h>
#define MAX 2
int main(void){
	int i;
	struct data{
		
		char name[15];
		int math;
		
	}student[MAX];
	
	for(int i=0;i<MAX;i++){
		printf("Name: ");
		gets(student[i].name);
		printf("Score: ");
//		gets(student[i].math);
		scanf("%d",&student[i].math);
		fflush(stdin);
		printf("Name:%s, Score:%d\n",student[i].name,student[i].math);		
	}
	
	
	
	system("pause");
	return 0;
}


/*gets() �P scanf("%s")
���� 0 ���� 0 ��K0�q�\���x
�o������M���OŪ���r��,
���Oscanf����Ū���t���Ů檺�r��,�]�N�O���|��Ů�P�Ů�λP���椧�����@�Ӧr��

��gets()�s���泣�i�H��@�O�@����J!!

��M�ϥΤW�`�`��scanf�V�γy�����D

����scanf("%d")��J�Ʀr���� �h���UEnter

gets()�N�|Ū�J�@��  �ҥH�q�`�n�W�[��J�Ů�scanf("%d ")

�Ϊ̬O�W�[getschar() �⴫��r��Ū��

���@���pŪ�J���r�ꤣ�ݭn���Ů�hgets��scanf ��4�� (��M�t�ץu�O�Ӭ���)

���@�ϥ�gets()��WŪ������ ��strlen(s)==0

���@�ŧi���}�C�Ӽƥ������J�h1

���@��J�}�C�@�@���x�s���̥��ݨt�η|�۰ʸɤW'\0'�o�Ӧr��

��  strlen()�i�O�ܯӮɶ��� �Y�i�٫h��'\0'���NOVER �t��+*/
