#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch='a';
	char str1[]="a";
	char str2[]="Sweet home"; // ﹃常穦干箂 
	
	printf("ch:%4dbyte\n",sizeof(ch)); //%d い丁计糤丁  //じ1byte   
	printf("str1:%2dbyte\n",sizeof(str1));//﹃程常穦箂(1byte)  //2
	printf("str2:%2dbyte\n",sizeof(str2));									   //11
	
	system("pause");
	return 0;	
		
 } 
