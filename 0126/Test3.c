//3.	�ռ��g��ơA�i�p��5! (5�Ӷ��h EX 5! = 5 * 4 * 3 * 2 * 1 = 120)�b�ù��W�|��ܥX���G�C
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("1*2*3..*%d=%d!=%d",n,n,times(n));
}

int times(int n){
	int sum=1,i;
	for(i=1;i<n+1;i++){
		sum = sum*i;	
	}
		return sum;
}
