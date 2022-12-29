/*
#include<stdio.h>
#include<conio.h>
void main(void){
	int outter, inner;
	for(outter=0;outter<5;outter++){
		for(inner=0;inner<5;inner++){						
			if(inner==2){
				continue;
			}			
			printf("%d",inner);
		}
		printf("\n");
	}
}
*/
/*
#include<conio.h>
#include<stdio.h>
void main(void){
	//we have 4 students each has 3 subjects.
	int students[4][3] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
	int result[] = {0,0,0,0};
	float percentage=0.0;
	int std_inp,input;
	int student,subject, print_total;
	
	// this loop is used for students marks entering
	for(std_inp=0;std_inp<4;std_inp++){
		printf("Enter the %d Student Marks\n",(1+std_inp));
		for(input=0;input<3;input++)
		{
			printf("Enter the %d Subject Marks\n",(1+input));
			scanf("%d",&students[std_inp][input]);				  
		}
	}
	 // this loop is used for result calculation
	for(student=0;student<4;student++){
		for(subject=0;subject<3;subject++){
			result[student] += students[student][subject];							
		}
	}
	
	for(print_total=0; print_total<4;print_total++){
		percentage = (float)result[print_total]/300*100;		
		if(percentage >= 80)
		{
			printf("The Total mark of student %d : %d\n",
			(print_total+1),result[print_total]);
			printf("He/She got the A+ Grade\n");
		}
		else if(percentage >= 50)
		{
			printf("The Total mark of student %d : %d\n",
			(print_total+1),result[print_total]);
			printf("He/She got the B Grade\n");
		}
		else{
			printf("The Total mark of student %d : %d\n",
			(print_total+1),result[print_total]);
			printf("He/She is fail\n");
		}
		
	}
	
}

*/
#include<conio.h>
#include<stdio.h>
void main(void){
	//calculate the maximum number from the user or array
	
	int arrNumber[] = {0,0,0,0};
	int max=0,min,i,j;
	
	for(j=0;j<4;j++){
		printf("Enter the %d Marks\n",(1+j));
		scanf("%d",&arrNumber[j]);	
	}
	min=arrNumber[0];
	for(i=0;i<4;i++){
		if(arrNumber[i] > max){
			max = arrNumber[i];
		}
		if(arrNumber[i] < min){
			min = arrNumber[i];
		}
		printf("%d\n",arrNumber[i]);
	}
	printf("The Maximum Value is this: %d\n",max);
	printf("The Minimum Value is this: %d\n",min);
}