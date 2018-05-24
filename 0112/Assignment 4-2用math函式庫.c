//4.	請運用for迴圈, 計算1^2+2^2+3^2+…+10^2
 #include<stdio.h>
 #include <math.h>
int main(void)
{
	int i,sum=0;
	for(i=1;i<=10;i++){
		sum=sum+pow(i,2);//可運算更高次方 
		printf("sum=%d\n",sum);
	}
	printf("1^2+2^2+3^2+…+10^2 = %d\n",sum);
	return 0;
}



