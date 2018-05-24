#include <stdio.h>
#include <stdlib.h>
void sum(int),fac(int);
int main(void)
{
	fac(6);
	sum(6);
	fac(8);
	sum(8);

	system("pause");
	return 0;
		
 } 
 
void fac(int n)
{
 	int i,total=1;
 	for(i=1;i<=n;i++)
	 {
 		total=total*i;
	 }
	 printf("1*2*...*%d=%d\n",n,total);
 	
 }

void sum(int a){
	int i,total=0;
	for(i=1;i<=a;i++){
		total=total+i;
	}
	 printf("1+2+..+%d=%d\n",a,total);
}
