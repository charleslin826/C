#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main(void)
{
	int n;
	printf("Input a number:");
	scanf("%d",&n);
	prime(n);
	system("pause");
	return 0;
		
 } 
 
 int prime(int n){
 	int i,flag=0;
 	for(i=2;i<=n-1;i++){
 		if(n%i==0){  //判斷能不能被除盡  
 			flag=1;
		 }
	 }
	 if(flag==1){
	 	printf("It's not a prime.");
	 }else {
	 	printf("It's Prime.'");
	 }
	 
	 
	 
	 
 }

