//23/02/18 14:22
#include<stdio.h>
#include<stdlib.h>
union paid{
	char creditCard[21];
	char bankAccount[16];
	int  cash;
};
int main(void){
	union paid money;
	printf("sizeof(union paid)=%2d\n",sizeof(union paid)); //最少都會顯示4的倍數為單位 所以21就會顯示24 
	printf("Please enter a bank account number: ");
	scanf("%s", &money.bankAccount);
	printf("CreditCard Number : %s\n",money.creditCard);//此行測試 會顯示一樣的數字 證明union的共用性  
	printf("BankAccount : %s\n",money.bankAccount);
	printf("Please enter a creditCard number: ");
	scanf("%s", &money.creditCard);
	printf("CreditCard Number : %s\n",money.creditCard);
	printf("Please enter a cash amount: ");
	scanf("%d", &money.cash);
	printf("Cash Amount : %4d\n",money.cash);
	
	printf("BankAccount : %s\n",money.bankAccount);//想要重新回去讀取 資料已經被cash清掉並占據了 //顯示? 

	
	system("pause");
	return 0;
}
