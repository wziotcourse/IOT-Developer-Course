#include<conio.h>
#include<stdio.h>
void main(void){
	//int result_value = calcul(65,76,'+');
	printf("The value after calculation is this: %d\n",calcul(32,45,2));	
}

int calcul(int num_01, int num_02, int op){
	int result = -1;
	switch(op){
		case 1:
			result = num_01+num_02;	
		break;
		case 2:
			result = num_01-num_02;	
		break;
		case 3:
			result = num_01*num_02;	
		break;
		case 4:
			result = num_01/num_02;	
		break;
		default:
			op = 'e';
		break;	
	}	
	return result;
}
