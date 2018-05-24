#include<stdio.h>
#include<stdlib.h>
int main(void){
	double a[3]={5,7,9};
	printf("*a=%d\n",*a);
	printf("a=%p(二進位記憶體位置)=%d(十進位記憶體位置)\n",a,a);
	printf("a+1=%p二進位記憶體位置)=%d(十進位記憶體位置)\n",a+1,a+1);
	printf("a+2=%p二進位記憶體位置)=%d(十進位記憶體位置)\n",a+2,a+2);
	printf("a[0]=%.1f, *(a+0)=%.1f\n",a[0],*(a+0));//重點就是相隔8 bytes(double長度) 
	printf("a[1]=%.1f, *(a+1)=%.1f\n",a[1],*(a+1));
	printf("a[2]=%.1f, *(a+2)=%.1f\n",a[2],*(a+2));
	
	system("pause");
	return 0;
}



 
