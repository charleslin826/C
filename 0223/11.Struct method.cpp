#include<stdio.h>
#include<stdlib.h>
struct data{//struct data要寫在上面是因為要讓complier知道這個東西存在 
	char name[15];
	int math;
};

void display(struct data);//此函數接受結構struct data 

int main(void){
	
	struct data s1={"Jenny",74};
	display(s1);	//傳入struct data  
	
	system("pause");
	return 0;
}

void display(struct data s){//將傳入的呈現出來 
	printf("Name: %s\n",s.name);
	printf("Score: %d\n",s.math);
}
