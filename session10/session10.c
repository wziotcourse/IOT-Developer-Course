#include<conio.h>
#include<stdio.h>
void main(void){
	int age;
	char grade;
	float height;
	
	/*printf("Enter the Age \n");
	scanf("%d",&age);
	printf("%d",age); */
	
	/*printf("Enter the grade \n");
	scanf("%c",&grade);	
	printf("%c",grade);*/
	
	/*printf("Enter the height");
	scanf("%f",&height);
	printf("%f",height);*/
	getch();
	int num_01;
	int num_02;
	int result;
	
	printf("Enter the First Number \n");
	scanf("%d",&num_01);
	printf("Enter the Second Number \n");
	scanf("%d",&num_02);
	result = num_01+num_02;
	printf("The sum is %d\n",result);
	result = 3*(5-8);
	printf("The sum is %d",result);
}