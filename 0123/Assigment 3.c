//3.	�ЧQ��do while�j��A�p�� 2+4+6+...+n ���`�M�A�䤤n���������ơA�i����L�ۦ��J�C
//�Y��J�����O�����ơA�h�{���|�n�D�ϥΪ̦A����J�A�����J���ƬO�����Ƭ���C
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i,sum=0;
	do{
		printf("Please input a even number(n>6):");
		scanf("%d",&n);
	}while(n%2!=0||n<=6);
	if(n>0){
		for(i=1;i<=n;i++){
			if((i%2==0)){
			sum=sum+i;
			};
			
		}
		printf("n=%d sum=2+4+6+...%d=%d\n",n,n,sum);
	}	
	system("pause");
	return 0;
}
