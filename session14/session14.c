#include<stdio.h>
#include<conio.h>
void main(void){
	int num_01, num_02, result;	
	char op;
	printf("Enter the First Number\n");
	scanf("%d",&num_01);
	printf("Enter the Second Number\n");
	scanf("%d",&num_02);
	printf("Enter the Operator\n");
	//scanf(" %c",&op);
	op = getche();
	/*
	if(op == '+'){	
		result = num_01+num_02;	
		printf("The sum is :%d\n",result);
	}
	else if (op == '-'){
		result = num_01-num_02;	
		printf("The sub is :%d\n",result);
	}
	else if (op == '*'){
		result = num_01*num_02;	
		printf("The mul is :%d\n",result);
	}
	else if (op == '/'){
		result = num_01/num_02;	
		printf("The div is :%d\n",result);
	}
	else{
		printf("You enter the wrong operator\n");
	}
	*/
	/*
	if(op == '+'){	
		result = num_01+num_02;	
	}
	else if (op == '-'){
		result = num_01-num_02;		
	}
	else if (op == '*'){
		result = num_01*num_02;	
	}
	else if (op == '/'){
		result = num_01/num_02;			
	}	
	//printf("\n%d\n",);
	((op == '+' || op == '-' || op == '*' || op == '/'))?printf("\n%d %c %d = :%d\n",num_01,op,num_02,result):printf("\nInvalid Operator\n"); 
	*/
	switch(op){
		case '+':
			result = num_01+num_02;	
		break;
		case '-':
			result = num_01-num_02;	
		break;
		case '*':
			result = num_01*num_02;	
		break;
		case '/':
			result = num_01/num_02;	
		break;
		default:
			op = 'e';
		break;		
	}
	printf("%c",op);
	(op!='e')?printf("\n%d %c %d = :%d\n",num_01,op,num_02,result):printf("\nInvalid Operator\n"); 
}