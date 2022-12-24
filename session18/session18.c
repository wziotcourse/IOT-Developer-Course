#include<conio.h>
#include<stdio.h>
void main(void){
	//we have 4 students each has 3 subjects.
	int student_01[] = {0,0,0,0};
	int student_02[] = {0,0,0,0};
	int student_03[] = {0,0,0,0};
	int student_04[] = {0,0,0,0};	

	int result[] = {0,0,0,0};
	float percentage=0.0;
	int std_inp,input;
	int student,subject, print_total;
	
	printf("%d,%d,%d,%d \n",
	student_01[0],student_02[0],student_03[0],student_04[0]);
	
	for(std_inp=0;std_inp<4;std_inp++){
		printf("Enter the %d Student Marks\n",(1+std_inp));
		for(input=0;input<3;input++)
		{	
		    if(std_inp==0){
				printf("Enter the %d Subject Marks\n",(1+input));
				scanf("%d",&student_01[input]);
			}
			else if(std_inp==1){
				printf("Enter the %d Subject Marks\n",(1+input));
				scanf("%d",&student_02[input]);
			}
			else if(std_inp==2){
				printf("Enter the %d Subject Marks\n",(1+input));
				scanf("%d",&student_03[input]);
			}
			else if(std_inp==3){
				printf("Enter the %d Subject Marks\n",(1+input));
				scanf("%d",&student_04[input]);
			}

		}
	}
	
	for(student=0;student<4;student++){
		for(subject=0;subject<3;subject++){
			if(student==0)
				result[student] += student_01[subject];			
			else if(student==1)
				result[student] += student_02[subject];			
			else if(student==2)
				result[student] += student_03[subject];			
			else if(student==3)
				result[student] += student_04[subject];			
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

/*



			
			
	student_01[0] = 50;
	student_01[1] = 70;
	student_01[2] = 75;
	
	student_02[0] = 65;
	student_02[1] = 54;	
	student_02[2] = 43;
	
	student_03[0] = 54;
	student_03[1] = 77;
	student_03[2] = 90;
	
	student_04[0] = 53;
	student_04[1] = 98;
	student_04[2] = 99;
*/