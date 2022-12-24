#include<stdio.h>
#include<conio.h>
void main(void){
	/*
	int i,j; // variable declaration
	// %   i % 2 = 1,0 if(i%2 == 0) 
	
	for(i=2;i<=10;i+=2){
		printf("The Even Number is: %d \n", i);
	}
	for(j=1;j<=10;j+=2){
		printf("The Odd Number is: %d \n", j);
	}
	*/
	/*
	int condition = 0; //Initailization and Declaration
	while(condition < 10){  // Condition only
		printf("Hello World  %d\n" ,condition);
		condition++; // Increament/Decreament
	}
	
	int conditionEven = 0; //Initailization and Declaration
	while(conditionEven < 10){  // Condition only
		printf("The Even Number is: %d \n", conditionEven);
		conditionEven+=2; // Increament/Decreament
	}
	
	int conditionOdd = 1; //Initailization and Declaration
	while(conditionOdd < 10){  // Condition only
		printf("The Odd Number is: %d \n", conditionOdd);
		conditionOdd+=2; // Increament/Decreament
	}
	
	*/	
	int outter, inner;
	for(outter = 0; outter < 3; outter++){
		printf("Outter Loop: %d\n",outter);
		
		for(inner=0;inner<3;inner++){
			printf("Inner Loop: %d\n",inner);
		}
		
	}
	
	
	
// What is the difference b/t for and while with help real life example.
	//3*3 = 9
	// Task of the day 17-Dec-2022
	/*
			*
			**
			***
			****
			*****
	*/
}