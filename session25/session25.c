#include<stdio.h>
#include<conio.h>
void main(int argc, char* argv[]){
	int i;
	printf("The number of total count is this: %d\n",(argc-1));
	for(i=1;i<argc;i++){		
		printf("The %d value is this: %s\n",i,argv[i]);
	}
}