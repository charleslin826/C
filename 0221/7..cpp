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
	ptr1=ptr2;//�q���Va��m(&a)�令���Vb��}(&b)
	*ptr1=9;//b�ȧאּ9 
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


