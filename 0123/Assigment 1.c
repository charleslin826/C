//1.	�м��g�@�{���ŧi�U�����r���}�C, �����Ұ}�Cstr�@���F�X��bytes�H
//      str[]="Hello, C language."


#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char str[]={"Hello, C language."};//�t�ιw�]�r�꦳�@�ӪŦr��null �ҥH�O18+1 =19# 
	//quote:"�r��ŧi. �bC�y�����A�r��O�Q��²�檺�@���r���}�C�[�W�@�Ӧr�굲���r��'\0'. �]NULL)�Ӫ�ܡC"
	printf("char:%d byte\n",sizeof(str[0]));
	printf("Array:%d bytes\n",sizeof(str));
	system("pause");
	return 0;
}
