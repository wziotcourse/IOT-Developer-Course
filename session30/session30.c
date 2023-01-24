// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main(){
//     char strValue[4][30], temp[30];
//     int i,x,y;
//     printf("Enter the values \n");
//     // printf("%d",strcmp("Computer","Database"));

//     for(i=0;i<4;i++){
//         scanf("%s",strValue[i]);
//     }
//     for(x=0;x<4;x++){
//         for(y=x+1;y<4;y++){
//             if(strcmp(strValue[x],strValue[y]) > 0){
//                 strcpy(temp,strValue[x]);
//                 strcpy(strValue[x],strValue[y]);
//                 strcpy(strValue[y],temp);                
//             }
//         }
//     }
//     printf("\nResult values \n");
//     for(i=0;i<4;i++){
//         printf("%s\n",strValue[i]);
//     } 

// }

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    long long int i,fact=1, fact_number = 12;
    for(i=1;i<=fact_number;i++){
        fact = fact * i;
    }
    printf("The factorial of %d this: %d",fact_number,fact);
}

// factorial 4 = 4*3*2*1 = 24