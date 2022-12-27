#include<stdio.h>
#include<conio.h>
void main(void){
	int stdMarks[4][5] = {
		{56,65,76,87,32}, // rows every line
		{45,54,43,23,65}, // coma seperated values are columns
		{34,65,76,87,98},
		{63,76,68,46,24},
		};
	int totalValue[] = {0,0,0,0};
	int rows, cols, i;
	printf("The value of 2nd row and 3rd col is this %d \n",
	stdMarks[1][2]); // Siraj stdMarks[2][3] // Sami stdMarks[3][4]
	
	printf("The value of 4th col and 4th row is this %d \n",
	stdMarks[3][3]);
	
	for(int rows=0; rows<4;rows++){
		for(int cols=0; cols<5;cols++){
			printf("%d, ",stdMarks[rows][cols]);
			totalValue[rows] += stdMarks[rows][cols];
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
		printf("Sum of Row %d is this %d\n",(i+1),totalValue[i]);	
	
	// you need to revamp the session 18 code with multi-dimenssional array.
}