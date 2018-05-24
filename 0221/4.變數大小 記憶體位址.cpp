#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=5,b=10;
	double c=3.14;
	printf("a=%4d, sizeof(a)=%d, address:%d\n",a,sizeof(a),&a);
	printf("b=%4d, sizeof(b)=%d, address:%d\n",b,sizeof(b),&b);
	printf("c=%4.2f, sizeof(c)=%d, address:%d\n",c,sizeof(c),&c); //%4.2f表示默認長度是4，有兩位小數（四舍五入），如果實際長度超過4，則按實際寬度輸出。
	
	system("pause");
	return 0;
}


