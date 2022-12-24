
#include<conio.h>
#include<stdio.h>
void main(){
	char temp_in_char = 'C';
	int date = 03;
	int month = 12;
	float value = 125423.32585456345;	
	
	printf("\t\t|+++++++++++++++++++++++++++++|\n");
	printf("\t\t|%.9f'%c right now on %d-%d|\n",value,temp_in_char,date,month);
	printf("\t\t|+++++++++++++++++++++++++++++|\n");	
	
	int var_01 = 60;
	int var_02 = 20;
	// Binary Operations
	int sum_result = var_01+var_02; 
	int mul_result = var_01*var_02; 
	int div_result = var_01/var_02; 
	int sub_result = var_01-var_02; 
	
	printf("The sum of %d and %d is this: %d\n",var_01,var_02,sum_result);
	printf("The multipilication of %d and %d is this: %d\n",var_01,var_02,mul_result);
	printf("The division of %d and %d is this: %d\n",var_01,var_02,div_result);
	printf("The subtraction of %d and %d is this: %d\n",var_01,var_02,sub_result);
	
}

/*
#include <stdio.h>
#include <conio.h>
void main(void){
	char Temo_in_char= 'C';
	int date = 03;
	int month= 12;
	float value= 12.3258;
	
	printf("\t\t%f'%c right now on%d-%d",value,Temo_in_char,date,month);
}

*/