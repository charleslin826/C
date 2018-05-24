/*2.設計一個結構儲存你個人電腦的基本資料，包含：CPU 廠牌(char:10)、
記憶體大小(int)、作業系統名稱(char:20)以及硬碟的大小(int)。
硬碟與記憶體大小都以 G 為單位。在主程式中以這個結構宣告結構變數 comp，
以詢問的方式依序輸入上述的資料，最後並統一輸出所有輸入的資訊。
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	struct data{
		char CPU[10];
		int RAM;//以 G 為單位
		char OS[20];
		int HD;//以 G 為單位		
	}comp;//宣告結構變數 comp，
	
	printf("CPU: ");
	scanf("%s",comp.CPU);
	printf("RAM:(G) ");
	scanf("%d",&comp.RAM);
	printf("OS: ");
	scanf("%s",comp.OS);
	printf("HD:(G) ");
	scanf("%d",&comp.HD);
	puts("");
	
	printf("Here is your PC info:\nCPU: %s\nRAM: %dG\nOS: %s\nHD: %dG\n",comp.CPU,comp.RAM,comp.OS,comp.HD);
	
	system("pause");
	return 0;
}
