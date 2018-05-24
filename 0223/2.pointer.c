#include<stdio.h>
#include<stdlib.h>
int main(void){
	int p=20;
	int *ptr1,**ptr2;
	ptr1=&p; //將指標變數ptr1 指向p 
	ptr2=&ptr1;//指向ptr1指標的指標變數   //ptr2是雙重指標 
	printf("p=%d, &p=%p \n",p,&p);
	printf("*ptr1=%d, ptr1=%p, &ptr1=%p \n",*ptr1,ptr1,&ptr1);
	printf("**ptr2=%d, *ptr2=%p, ptr2=%p, &ptr2=%p\n",**ptr2,*ptr2,ptr2,&ptr2); // ptr1的值是p的位址=*ptr2 
	
	int num[3][4];
	printf("num=%p\n",num);
	printf("&num=%p\n",num); //指標常數的位址跟內容是一樣的 
	printf("*num=%p\n",num);
	printf("num[0]=%p\n",num[0]);
	printf("num[1]=%p\n",num[1]);
	printf("num[2]=%p\n",num[2]);
	printf("&num[0]=%p\n",&num[0]);
	printf("&num[1]=%p\n",&num[1]);
	printf("&num[2]=%p\n",&num[2]);
	printf("num[0][0]=%p\n",num[0][0]);
	printf("num[1][0]=%p\n",num[1][0]);
	printf("num[2][0]=%p\n",num[2][0]);
	printf("&num[0][0]=%p\n",&num[0][0]);
	printf("&num[1][0]=%p\n",&num[1][0]);
	printf("&num[2][0]=%p\n",&num[2][0]);
	
	printf("num[0][0]=%d\n",num[0][0]); // %d 43914304(dec十進制)  = %p 29E1440(hex十六進制&記憶體位址)
	num[0][0]=123;
	printf("num[0][0]=%d\n",num[0][0]);
	
	system("pause");
	return 0;	
}
