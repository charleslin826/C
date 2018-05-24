#include<stdio.h>
#include<stdlib.h>
void peri(double);
void area(double);
double p=3.14;
int main(){
	double r=1.0;
	printf("pi=%.2f\n",p);
	printf("radius=%.1f\n",r);
	peri(r);
	area(r);
	
	system("pause");
	return 0;
}

void peri(double r){
	printf("Circumference=%.2f\n",2*p*r);
}

void area(double r){
	printf("Circular area=%.2f\n",r*r*p);
}
