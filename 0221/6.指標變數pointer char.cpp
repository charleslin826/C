#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr; //建立一個指標變數
	char *ptrc;
	
	printf("sizeof(ptr)=%d\n",sizeof(ptr));  //記憶體位址大小8bytes 
	printf("sizeof(ptrc)=%d\n",sizeof(ptrc));  //記憶體位址大小8bytes
	printf("sizeof(*ptr)=%d\n",sizeof(*ptr));   //指向int=4bytes <*ptr的記憶體佔據大小等同int> 
	printf("sizeof(*ptrc)=%d\n",sizeof(*ptrc)); //指向字元char型態 =1byte  <*ptrc的記憶體佔據大小等同char> 

	system("pause");
	return 0;
}


