#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch='a';
	char str1[]="a";
	char str2[]="Sweet home"; // �r��᭱���|�ɤ@�ӹs 
	
	printf("ch:%4dbyte\n",sizeof(ch)); //%d ������Ʀr�i�H�W�[�Ů�Ŷ�  //�r����1��byte   
	printf("str1:%2dbyte\n",sizeof(str1));//�r��᳣̫�|�h���@�ӹs(��1��byte)  //2
	printf("str2:%2dbyte\n",sizeof(str2));									   //11
	
	system("pause");
	return 0;	
		
 } 
