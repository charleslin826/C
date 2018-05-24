/*1.	試撰寫一程式，利用sizeof() 列印出結構變數abc的大小。
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
