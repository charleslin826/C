#include<stdio.h>
#include<stdlib.h>
int main(void){
	double a[3]={5,7,9};
	printf("*a=%d\n",*a);
	printf("a=%p(�G�i��O�����m)=%d(�Q�i��O�����m)\n",a,a);
	printf("a+1=%p�G�i��O�����m)=%d(�Q�i��O�����m)\n",a+1,a+1);
	printf("a+2=%p�G�i��O�����m)=%d(�Q�i��O�����m)\n",a+2,a+2);
	printf("a[0]=%.1f, *(a+0)=%.1f\n",a[0],*(a+0));//���I�N�O�۹j8 bytes(double����) 
	printf("a[1]=%.1f, *(a+1)=%.1f\n",a[1],*(a+1));
	printf("a[2]=%.1f, *(a+2)=%.1f\n",a[2],*(a+2));
	
	system("pause");
	return 0;
}



 
