#include<stdio.h>
#include<conio.h>
void main(void){
		/*
		int num_01 = 10;
		printf("%d \n",num_01); // 10
		printf("%d \n",++num_01); // 11
		printf("%d \n",num_01++); // 11
		printf("%d \n",num_01); // 12
		// ++i prefix increament "Phley Add/Sub phir print"
		// i++ postfix increament "Phley print phir Add/Sub"
		printf("%d \n",--num_01); // ? 11 11 11 11
		printf("%d \n",num_01++); // ? 12 11 11 11
		printf("%d \n",num_01--); // ? 11 12 12 12
		printf("%d \n",--num_01); // ? 10 13 11 10
		printf("%d \n",num_01); // ?   10 13    10 
		
		num_01 = num_01 + 2;
		printf("%d \n",num_01); // 12
		printf("%d \n",num_01); //  12
		
		*/
		
		// ++i prefix increament "Phley Add/Sub phir print"
		// i++ postfix increament "Phley print phir Add/Sub"
		/*
		int num_02 = 50;
		printf("%d \n",num_02++); //  50 + 1 = 51
		num_02--; // 51 - 1 = 50
		++num_02; // 1 + 50 = 51 
		num_02++; // 51 + 1 = 52
		++num_02; // 1 + 52 = 53 
		num_02--; // 53 - 1 = 52
		--num_02; // 1 - 52 = 51
		printf("%d \n",num_02++); // 51 + 1 = 52
		*/
		
		// relational operators Binary Operators
		int x,y;
		x = 40;
		y = 10;
		
		printf("%d \n",x<y);  //0
		printf("%d \n",x>y);  //1
		printf("%d \n",x==y); //0
		printf("%d \n",x!=y); //1
		printf("%d \n",x<=y); //0
		printf("%d \n",x>=y); //1
		
		// Logical Operators
		printf("%d \n",x!=y&&x<=y); // 1 AND 0 = 0
		printf("%d \n",x!=y||x<=y); // 1 OR 0 =  1
		
		// Ternary Operators
		(x<y)?printf("X is less than Y"):printf("Y is less than X");
		(x>y)?printf("X is greater than Y"):printf("Y is greater than X");
		
}