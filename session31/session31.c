#include<stdio.h>
#include<conio.h>
#include<string.h>

void displayValues(int num_01, int num_02){
    printf("The first number is this: %d \n",num_01);
    printf("The second number is this: %d \n",num_02);
}

void main(){
    int result;
    int arrValue[8] = {65,768,87,45,23,65,212,72};
    float arrValue02[] = {65.0,25.2};
    // int i;
    // // displayValues(arrValue[0],arrValue[2]);
    // for(i=0;i<8;i+=2){
    //     displayValues(arrValue[i],arrValue[i+1]);
    // }
    // total_sum(arrValue);
    result = total_sum(arrValue);
    printf("The sum from the array is this: %d",result);
}
int total_sum(int num[8]){ // snake case total_sum_values
    int i, total = 0;

    for(i=0;i<8;i++){
        total = total + num[i];  
    } 
    return total;
    // printf("The sum of the values are: %d",total);
}

// float calculateSum(float num[]){ // camel case totalSumValues
//     float total = 0.0;
//     int i;
//     for(i=0;i<2;i++){
//         total = total + num[i];  
//     }    
//     return total;
// }