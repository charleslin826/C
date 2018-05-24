#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char SS[3][10]={"Andy123456","Mary","Bruce Lee"};//二維陣列 創立共三個10位元子串 再丟東西進去 
	int i;
	for(i=0;i<3;i++){
		printf("SS[%d]=%s\n",i,SS[i]);
	}
	system("pause");
	return 0;	
		
 } 
