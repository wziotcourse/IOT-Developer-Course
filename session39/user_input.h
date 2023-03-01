#ifndef USER_INPUT_H
#define USER_INPUT_H
#include <stdio.h>
#include <conio.h>

int get_integer(){
    int int_value;
    printf("Please Enter the Integer \n");
    scanf("%d",&int_value);
    return int_value;
}

float get_float(){
    float float_value;
    printf("Please Enter the Float \n");
    scanf("%f",&float_value);
    return float_value;
}

int square(int number){
    return number*number;
}

#endif