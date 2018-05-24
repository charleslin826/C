#include<stdio.h>
#include<stdlib.h>
int main(void){
	enum color{ //enumeration will give its member raw value automatically
		red, 	//raw value 0
		green,  //raw value 1
		blue 	//raw value 2
	};
	enum color shirt;
	printf("sizeof(shirt)=%d \n",sizeof(shirt));
	printf("red=%d\n",red);
	printf("green=%d\n",green);
	printf("blue=%d\n",blue);
	shirt=green;
	if(shirt==green){
		printf("Chosen the green clothes.");
	}else{
		printf("Chosen the non-green clothes.");
	}
	system("pause");
	return 0;
}
