//7.	叫ノwhile癹伴璸衡1+2++100┮Τ案计羆㎝籔计羆

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,sum1=0,sum2=0;
	do{
		if(i%2==0){  //案计 
			sum1+= i;
		}else{		 //计 
			sum2+= i; 
		}		
		i++;
	}while(i<=100);
	printf("From 1~100\nsum_of_even =%d\nsum_of_odd =%d",sum1,sum2);
}

