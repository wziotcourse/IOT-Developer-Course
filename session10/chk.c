#include<conio.h>
#include<stdio.h>
void main(void){
	int age;
	char grade;
	float height;
	
	printf("Enter the Age \n");
	scanf("%d",&age);	
		
	printf("Enter the height \n");	
	scanf("%f",&height);
	
	printf("Enter the grade \n");
	scanf(" %c",&grade);			
	
	printf("%d",age); 
	printf("%f",height);
	printf("%c",grade);
	
	
}