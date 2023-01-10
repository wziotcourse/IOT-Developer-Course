#include<stdio.h>
#include<conio.h>

int outter, inner;

void main(void){
	/*
	int userInput=0;		
	printf("Please enter the value:");	
	scanf("%d",&userInput);
	printTriangle(userInput);
	printTriangle(5);
	
		// (40.649°C × 9/5) + 32 
	float fh, cl;
	printf("Enter the Temperature in C\n");
	scanf("%f",&cl);
	
	//BODMAS 
	fh = (cl * (9.0/5.0))+32.0;
	printf("%.2f",CtoF(cl));
	*/
	int arrValue[] = {65,76,34,675,34,65,78};
	printf("The sum of all array values is this: %d", calSum(arrValue,7));
}

int calSum(int val[],int lenArr){
	int sum,i = 0;
	for(i=0;i<lenArr;i++){
		sum = sum + val[i];
	}
	return sum;
}


float CtoF(float cl){
	return (cl * (9.0/5.0))+32.0;	
}

void printTriangle(int x){	
	for(outter = 0; outter < x; outter++){		
		for(inner=0;inner<=outter;inner++){
			printf("*");
		}
		printf("\n");
	}
}

// Write a program in which you enter the array as a parameter in a function and return the
// min and max value from it.