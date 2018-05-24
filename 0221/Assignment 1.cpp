//1.試利用 #define定義一巨集函數CUBIC(X)，可用來計算X的3次方，並利用此巨集計算5^3和 2.4^3。 
#include<stdio.h>
#include<stdlib.h>
#define CUBIC(X) (X)*(X)*(X)
int main(void){
	double a=5,b=2.4;
	printf("a=%.0f,b=%.1f\n",a,b);
	printf("a^3=%.0f\n",CUBIC(a));		
	printf("b^3=%.2f",CUBIC(b));	
	system("pause");
	return 0;
}


 
