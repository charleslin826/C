#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	float num1=123.123456789f; //�e���O3�ӼƦr���ɭ� �p���I��ǫץu���� ��5�� 
	double num2=123.1234567890123456789f; //�e���O3�ӼƦr���ɭ� �p���I��ǫץu���� ��13�� 	
	printf("%.12lf float�e���O3�ӼƦr���ɭ� �p���I��ǫץu���� ��5�� \n",num1);
	printf("%.20lf double�e���O3�ӼƦr���ɭ� �p���I��ǫץu���� ��13�� \n",num2);
	system("pause");
	return 0;
} 
