#include<conio.h>
#include<stdio.h>
void main(void){
	//we have 4 students each has 3 subjects.
	int student_01[] = {50,65,45};
	int student_02[] = {54,65,64};
	int student_03[] = {23,65,23};
	int student_04[] = {76,65,23};
	
	int result_01,result_02,result_03,result_04,student,subject;
	
	printf("%d,%d,%d,%d \n",
	student_01[0],student_02[0],student_03[0],student_04[0]);
	
	for(student=0;student<1;student++){
		for(subject=0;subject<3;subject++){
			if(student==0)
				result_01 += student_01[subject];			
			else if(student==1)
				result_02 += student_02[subject];			
			else if(student==2)
				result_03 += student_03[subject];			
			else if(student==3)
				result_04 += student_04[subject];			
		}
	}
	printf("The Total mark of student 01 : %d\n",result_01);
	printf("The Total mark of student 02 : %d\n",result_02);
	printf("The Total mark of student 03 : %d\n",result_03);
	printf("The Total mark of student 04 : %d\n",result_04);
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