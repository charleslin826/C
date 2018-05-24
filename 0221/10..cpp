#include<stdio.h>
#include<stdlib.h>
void add10(int *);
void swap(int *,int *);
int main(void){
	int a=5,b=20;
	printf("Before add10 - \na=%d\n",a);
	add10(&a);
	printf("add10 - \na=%d\n",a);
	
	printf("Before swap - \na=%d,b=%d\n",a,b);
	swap(&a,&b);	
	printf("swap - \na=%d,b=%d\n",a,b);
	
	system("pause");
	return 0;
}

void add10(int *p1){
	*p1=*p1+10;
}

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
} 
 
