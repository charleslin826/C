#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int tea,coffee,total;
	printf("How mnay bottles of black tea do you want to buy: ($25/bottle)");
	scanf("%d",&tea);
	printf("How many bottles of coffee fo you want to buy: ($35/bottle)");
	scanf("%d",&coffee);
	total=tea*25+coffee*35;
	printf("Price:%d\n",total);
	system("pause");
	return 0;
}
