#include<stdio.h>
#include<stdlib.h>
struct data{//struct data�n�g�b�W���O�]���n��complier���D�o�ӪF��s�b 
	char name[15];
	int math;
};

void display(struct data);//����Ʊ������cstruct data 

int main(void){
	
	struct data s1={"Jenny",74};
	display(s1);	//�ǤJstruct data  
	
	system("pause");
	return 0;
}

void display(struct data s){//�N�ǤJ���e�{�X�� 
	printf("Name: %s\n",s.name);
	printf("Score: %d\n",s.math);
}
