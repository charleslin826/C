#include<stdio.h>
#include<stdlib.h>
void func();
int main(){
	func();
	func();
	func();
	system("pause");
	return 0;
}

void func(void){
	static int a=200; //創建一個static靜態值 會一直存在於記憶體中 所以可以一直累加 !  拿掉static 就沒有此效果了 
	printf("in func() function a=%d\n",a);
	a+=200;
}
