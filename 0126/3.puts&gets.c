#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char name[15];
	puts("What's your name?");  //puts �Mprintf���t�� ����t�~�[�ܼ���� 
	gets(name);  				//gets�Mscanf ���t�� ����t�~�[�ܼ���� 
	puts("Hi");
	puts(name);
	puts("How are you?");
	
	system("pause");
	return 0;	
		
 } 
