#include<stdio.h>
#include<stdlib.h>
#define PASSWD 1234
int main(void)
{
	int passwd;
	int flag=0;
	int retry=1;
	do
	{
		printf("%d. Enter your password:\n",retry++);
		scanf("%d",&passwd);
		if(passwd==PASSWD)
		{
			flag=1;
		}
	}while((!flag&&retry<=3));  //while�A�������ȬO0�N�|���X ; �O1�N�|�~��]do //!flag�Ĥ@���諸��flag=1 , !flag=false �H��retry=true �hfalse&true=false=while(0)���X //���[�ϦV�h���T�]�n��J�T���~�|��U�Ӱj�� 
	if(flag){  //���μgflag=1 �]���p�G�O1=true (boolean) 
		printf("Congratulations!You are accepted.\n");
	}else{
		printf("You are rejected!\n");
	}
	system("pause");
	return 0;
	
}
