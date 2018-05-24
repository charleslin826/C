#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int i;
	for(i=10;i>=1;i--){
		printf("%d\n",i);
	}
	
	int y,sum=0;
	for(i=1;i<=5;i++){
		sum=sum+i;
	}
	printf("sum=1+2+3+4+5=%d",sum);

	
	return 0;
	
} 
