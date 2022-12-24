#include<stdio.h>
#include<conio.h>

#define PI 3.1415343
#define X 50
void main(void){
	/*
	const int carWheel = 4;
	const int motorBikeWheel = 2;
	motorBikeWheel = 24;
	
	//#define PI 2.43535
	printf("%f\n",PI);
	printf("%d\n",X);
	printf("%d\n",carWheel);
	printf("%d\n",motorBikeWheel);
	
	*/
	
	// An index always start from 0 and always end with (length - 1)
	int studentOneMarks[6] = {54,65,57,87,78,90};
	studentOneMarks[0] = 43;
	printf("The Marks of Phy: %d \n",studentOneMarks[0]);
	printf("The Marks of Eng: %d \n",studentOneMarks[1]);
	printf("The Marks of Urd: %d \n",studentOneMarks[2]);
	printf("The Marks of Com: %d \n",studentOneMarks[3]);
	printf("The Marks of Pst: %d \n",studentOneMarks[4]);
	printf("The Marks of Isl: %d \n",studentOneMarks[5]);	
	
	float avgTemp[] = {23.3,12.4,14.6,23.8,27.5,10.3};
	printf("Temp 01: %f \n",avgTemp[0]);
	printf("Temp 02: %f \n",avgTemp[1]);
	printf("Temp 03: %f \n",avgTemp[2]);
	printf("Temp 04: %f \n",avgTemp[3]);
	printf("Temp 05: %f \n",avgTemp[4]);
	printf("Temp 06: %f \n",avgTemp[5]);
	
	char userName[] = {'A','l','i',' ','K','h','a','n','\0'};
	printf("%s",userName);
	
	char getUserName[30];
	printf("Enter the name of User \n");
	scanf("%s",getUserName);
	printf("The name of the user is this: %s \n", getUserName);
		
}