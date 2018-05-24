#include <stdio.h>
#include <stdlib.h>
float sweight(float,int);
int main(void)
{
	int sex,height;
	float weight;
	printf("Gender (0)Female (1)Male:");
	scanf("%d",&sex);
	fflush(stdin);
	printf("Please enter height (cm):");
	scanf("%d",&height);
	fflush(stdin);
	weight=sweight(height,sex);
	printf("Your ideal body weight is %4.1f kg.",weight);
	
	system("pause");
	return 0;
		
 } 

float sweight(float h,int s){
	float ret;
	if(s==0){
		ret=(h-70)*60;
	}else{
		ret=(h-80)*0.7;
	}
	return ret;
	
}
