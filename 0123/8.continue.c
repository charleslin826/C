#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	for(i=0;i<10;i++){
		if(i%2==0){ //0%2=0 1%2=1 2%2=0 ...   //!= 改為 ==  遇到偶數繼續累加不印出 
			continue; //1.3.5.7=繼續算        //0.2.4.6=繼續算 
		}else if(i>=8){//到8停止              //== 改為 >= 代表到8停止 因為我們只要印出1.3.5.7 
			break;
		}
		printf("%d\n",i);//只印出0.2.4.6      //只印出1.3.5.7 
	}
	system("pause");
	return 0;
}
