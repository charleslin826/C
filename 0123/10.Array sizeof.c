#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float data[4]; // double��8byte(�줸��)    //float �����׬�4 �Ӧ줸�աA double �����׬�8 �Ӧ줸��
	printf("Array:%d\n",sizeof(data[0]));
	printf("Array:%d\n",sizeof(data));
	system("pause");
	return 0;
}
