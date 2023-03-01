#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fptr;
    int i,s;
    char n[255];
    
    fptr = fopen("student.txt","r");
    fscanf(fptr,"%d %d %[^\n]s",&i,&s,n);
    printf("Student Id: %d\n",i);
    printf("Name: %s\n",n);
    printf("Score: %d\n",s);

    fclose(fptr);
    
}