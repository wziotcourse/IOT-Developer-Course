// str01 = "Waleed"
// str02 = "Wadood"

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str01[50] = "Naeem Khan";
    char str02[50] = "Wadood Zaka";
    int str01Len = strlen(str01);
    int str02Len = strlen(str02);
    int j;
    if(str02Len < str01Len){
        for(j=str02Len;j<str01Len;j++){
            str02[j] = ' ';
        }
    }
    else if(str01Len < str02Len){
        for(j=str01Len;j<str02Len;j++){
            str01[j] = ' ';
        }
    }
    printf("%d\n",str01Len);
    printf("%d\n",str02Len);
    

    char temp;
    int i = 0;
    printf("The First String Was this: %s\n",str01);
    printf("The Second String Was this: %s\n",str02);
    while(str01[i] != '\0'){
        temp = str01[i];
        str01[i] = str02[i];
        str02[i] = temp;
        i++;
    }
    printf("The First String after the swapping: %s\n", str01);
    printf("The Second String after the swapping: %s\n", str02);

}

// Task 
// Write a program in which you can swap the two variables without 
// taking the third/temp variable