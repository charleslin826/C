//3.	請運用for迴圈, 計算1+3+5+…+99
 #include<stdio.h>
int main(void)
{
	int i,sum=0;
	for(i=1;i<=99;i+=2){
		sum=sum+i;
	}
	printf("1+3+5+... +99 = %d\n",sum);
	return 0;
}



