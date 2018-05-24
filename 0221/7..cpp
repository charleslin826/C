#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=5,b=10;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("a=%p, b=%p,\nptr1=%p, ptr2=%p\n",&a,&b,ptr1,ptr2);
	*ptr1=7;
	*ptr2=32;
	a=17;
	ptr1=ptr2;//從指向a位置(&a)改成指向b位址(&b)
	*ptr1=9;//b值改為9 
	printf("a=%d, b=%d,\nptr1=%p, ptr2=%p\n",a,b,ptr1,ptr2);
	ptr1=&a;
	a=64;
	*ptr2=*ptr1+5;
	printf("a=%d, b=%d,\nptr1=%p, ptr2=%p\n",a,b,ptr1,ptr2);
	ptr2=&a;
	printf("ptr2=%p\n",ptr2);
	system("pause");
	return 0;
}


