#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=1,sum=0;
	while(i<=10){
		sum+=i;
		printf("i=%2d, from 1 to accumulate to %2d=%2d\n",i,i,sum);
		i++;
	}
	int j=1,k=1;
	while(j<=9){
		printf("\n j=%d,k=%d\n",j,k);
		while(k<=9){
		printf("%d*%d=%2d\n",j,k,j*k);//k=1 ~ k=9
		k++;
		};
		j++;
		k=1;
	}
	
	system("pause");
	return 0;
 } 
