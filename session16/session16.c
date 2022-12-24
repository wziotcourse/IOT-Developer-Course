#include<stdio.h>
#include<conio.h>
void main(void){
	int i;
	// Time Complexity
	// Storage Complexity
	/*
	for(i=0;i<=10;i++){
		if(i%2 == 0){
			printf("The Even Number is:%d\n",i);
		}
		else{
			printf("The Odd Number is: %d\n",i);
		}
	}
	*/
	/*
	int num_01,num_02,input;
	
	printf("Enter the length of the Stars\n");
	scanf("%d",&input);
	
	for(num_01=0;num_01<input;num_01++){
		for(num_02=0;num_02<=num_01;num_02++){
			printf("*");			
		}
		printf("\n");	
	}
	
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
	*/
	int count = 0;
	do{
		printf("The value is: %d\n",count);
		count++;
	}while(count==10);
	
	
}

