#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a[3]={5,7,9};
	printf("*a=%d\n",*a);
	printf("a=%p(二進位記憶體位置)=%d(十進位記憶體位置)\n",a,a);
	printf("a+1=%p二進位記憶體位置)=%d(十進位記憶體位置)\n",a+1,a+1);
	printf("a[0]=%d, *(a+0)=%d\n",a[0],*(a+0));  //重點就是相隔4bytes(int長度) 
	printf("a[1]=%d, *(a+1)=%d\n",a[1],*(a+1));
	printf("a[2]=%d, *(a+2)=%d\n",a[2],*(a+2));
	
	system("pause");
	return 0;
}



 
