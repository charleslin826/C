#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char name[15];
	puts("What's your name?");  //puts 和printf有差異 不能另外加變數顯示 
	gets(name);  				//gets和scanf 有差異 不能另外加變數顯示 
	puts("Hi");
	puts(name);
	puts("How are you?");
	
	system("pause");
	return 0;	
		
 } 
