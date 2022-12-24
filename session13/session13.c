#include<stdio.h>
#include<conio.h>
void main(){
	/*
		int a = 40, b = 20;
		printf("%d\n",a>b);
		if(a>b){
			printf("The A is graeter than B \n");
			printf("A bara hain B sey\n");
		}
		else{
			printf("The B is graeter than A\n");
			printf("B bara hain A sey\n");
		}
	*/
	
	/*
	printf("Things you must have in the Exam room \n");
	int pen = 1;
	int admit_card = 1;	
	int uniform = 0;	
	
	if(admit_card){
		printf("You have admit card \n");
		if(pen){
				printf("You have pen \n");				
				if(uniform){
					printf("You have uniform \n");
					printf("Ap paper dey saktey hain\n");
				}
				else{
					printf("You do not have uniform \n");
					printf("Ap paper nahi dey saktey hain\n");
				}
		}
		else{
				printf("You do not have pen \n");
				printf("Ap paper nahi dey saktey hain\n");
		}
	}
	else{
		printf("You do not have admit card \n");
		printf("Ap paper nahi dey saktey hain\n");
	}
	*/
	printf("Things you must have in the Exam room \n");
	int pen = 0;
	int admit_card = 0;	
	int uniform = 1;
	
	if(admit_card){
		printf("You have admit card \n");
	}
	else if(pen){
		printf("You have pen \n");	
	}
	else if(uniform){
		printf("You have uniform \n");
	}
	else{
		printf("Ap key pass kuch bhi nahi hain\n");
	}
	
	int num_01 = 30;
	int num_02 = 10;
	char op = '-';
	
	switch(op){
		case '+':
			printf("The Sum is %d\n", num_01+num_02);
		break;
		case '-':
			printf("The Sub is %d\n", num_01-num_02);
		break;
	}
	
}		
