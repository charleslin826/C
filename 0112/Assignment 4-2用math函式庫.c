//4.	�йB��for�j��, �p��1^2+2^2+3^2+�K+10^2
 #include<stdio.h>
 #include <math.h>
int main(void)
{
	int i,sum=0;
	for(i=1;i<=10;i++){
		sum=sum+pow(i,2);//�i�B��󰪦��� 
		printf("sum=%d\n",sum);
	}
	printf("1^2+2^2+3^2+�K+10^2 = %d\n",sum);
	return 0;
}



