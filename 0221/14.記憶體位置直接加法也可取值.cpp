#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a[3]={5,7,9};
	printf("*a=%d\n",*a);
	printf("a=%p(�G�i��O�����m)=%d(�Q�i��O�����m)\n",a,a);
	printf("a+1=%p�G�i��O�����m)=%d(�Q�i��O�����m)\n",a+1,a+1);
	printf("a[0]=%d, *(a+0)=%d\n",a[0],*(a+0));  //���I�N�O�۹j4bytes(int����) 
	printf("a[1]=%d, *(a+1)=%d\n",a[1],*(a+1));
	printf("a[2]=%d, *(a+2)=%d\n",a[2],*(a+2));
	
	system("pause");
	return 0;
}



 
