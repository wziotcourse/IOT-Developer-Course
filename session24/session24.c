#include<stdio.h>
#include<conio.h>

float globalVar = 20.0;

void main(){
	printf("The temp in F is this: %f\n",globalVar); // what is the value?
	changeValue();
	printf("The temp in F is this: %f\n",globalVar); // what is the value?
}

void changeValue(){
	 globalVar = 43.0;	 
}