//5.	�էQ�α_���j�鼶�g�X�@�ӯಣ�ͦp�U�ϵ��G���{���C
//1    i
//12	i i+1
//123 i i+1 i+1+1
//1234 
//12345

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	for(i=0;i<5;i++){						
		for(j=0;j<i+1;j++){   
			printf("%d",j+1);  //�L�Xi��n 
		}
		printf("\n");
	}
	
}

