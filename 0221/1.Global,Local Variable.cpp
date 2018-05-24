#include<stdio.h>
#include<stdlib.h>
void func();
int a=50; //此global variable無法影響裡面的 local variable
int main(){
	/*int*/ a=100; 
	printf("Before call func(), a=%d\n",a);
	func();
	printf("After call func(), a=%d\n",a);//int的宣告拿掉後 就不是local variable了 而是直接改global的 所以結果會跟著變 
	system("pause");
	return 0;
} 

void func(){
	/*int*/ a=300;
	printf("In func() function, a=%d\n",a);
}
