/*1.	�ռ��g�@�{���A�Q��sizeof() �C�L�X���c�ܼ�abc���j�p�C
struct data
       {
           int num;
           char ch;
           double dist;
        }abc;
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	struct data
       {
           int num;
           char ch;
           double dist;
        }abc;
	
	printf("sizeof(abc)=%d\n",sizeof(abc));
	
	
	system("pause");
	return 0;
}
