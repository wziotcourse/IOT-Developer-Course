#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char test01[50] = {'A','D','M','I','N','\0'};
    char test02[] = "Hello World ";
    char test03[] = "Hello World ";
    printf("%s\n",test01);
    printf("%s\n",test02);
    printf("The length of the string is: %d\n",strlen(test02));

    strcpy(test01,test02);
    printf("Copy of String Test01: %s\n",test01);
    strcat(test01,test02);
    printf("String Concat Test01: %s\n",test01);
    printf("%s\n",test02);
    printf("The Equality of Test 02 and 03 is: %d",strcmp(test02,test03));
}