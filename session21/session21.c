#include<conio.h>
#include<stdio.h>
int main(void){
	int i;
	//function calling
	for(i=0;i<10;i++){
		myWorking();
	}
	add(5,7);
	add(65,43);
	int result = addReturn(54,76);
	printf("The sum is this: %d\n", result);
	printf("The sum is this: %d\n", addReturn(23,76));
	
	return 0;
}


void myWorking(void){ //function declaration/create
	printf("Hello World from another function\n");
}

void add(int x, int y){ // x and y is the input parameters of a function
	printf("The Sum is this: %d\n",x+y);
}

int addReturn(int x, int y){ // function with return type and input parameters
	return x+y;
}
// Task before first class of the new year 2023.
// function for cube of any given number by user