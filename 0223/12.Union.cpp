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
	printf("sizeof(union paid)=%2d\n",sizeof(union paid)); //�ֳ̤��|���4�����Ƭ���� �ҥH21�N�|���24 
	printf("Please enter a bank account number: ");
	scanf("%s", &money.bankAccount);
	printf("CreditCard Number : %s\n",money.creditCard);//������� �|��ܤ@�˪��Ʀr �ҩ�union���@�Ω�  
	printf("BankAccount : %s\n",money.bankAccount);
	printf("Please enter a creditCard number: ");
	scanf("%s", &money.creditCard);
	printf("CreditCard Number : %s\n",money.creditCard);
	printf("Please enter a cash amount: ");
	scanf("%d", &money.cash);
	printf("Cash Amount : %4d\n",money.cash);
	
	printf("BankAccount : %s\n",money.bankAccount);//�Q�n���s�^�hŪ�� ��Ƥw�g�Qcash�M���åe�ڤF //���? 

	
	system("pause");
	return 0;
}
