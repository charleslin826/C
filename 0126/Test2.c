//2.	�ռ��gvoid kitty(int k) ��ơA�i��J���k�A��D�{���I�skitty(k) �ɡA�ù��W�|��ܥXk�檺 "Hello Kitty"�C
#include <stdio.h>
#include <stdlib.h>
void kitty(int n);
int main(void)
{
	int k;
	printf("Please input how many times you want to show the \"Hello Kitty\":");
	scanf("%d",&k);
	kitty(k);
	

	
}


void kitty(int n){
	int i;
	for(i=0;i<n;i++){
	printf("\"Hello Kitty\"\n");	
	}
	
}
