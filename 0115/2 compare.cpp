#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x=65;
	char A='A',B='B';
	float fx=65.0f;
	printf("%d==%c==%d\n",x,A,x==A);//65=A=1(true)
	printf("%d>%c=%d\n",x,B,x>B);//65>B(66)=0(false)
	printf("%c>%c=%d\n",B,A,B>A);//B>A=1
	printf("%.1f==%c==%d\n",fx,A,fx==A);//65.0=A=1
	printf("%.1f>%c=%d\n",fx,B,fx>B);//65.0>B=0
	system("pause");
	return 0;
 } 
