/*5.	�ռ��gint cub(int x) ��ơA�i�ΨӶǦ^x��6����A��
�Q�Φ���ƨӭp��cub(5)�A�Y�p��5^6�C
*/
#include<stdio.h>
#include<stdlib.h>
int cub(int x);
int main(void){
	
	printf("cub(5)=%d\n",cub(5));
	
	system("pause");
	return 0;
}

int cub(int x){
	int sum =1;
	for(int i=0;i<6;i++){
		sum *= x; 
	}
	return sum;
}

 
