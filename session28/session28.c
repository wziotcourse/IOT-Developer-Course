#include<conio.h>
#include<stdio.h>
#include<string.h>
// void main(){
//     // char name[50];
//     // char text[] = "Hello World";
//     // puts(text);
//     // puts("Enter the name Please");
//     // gets(name);
//     // puts(name);
//     char name[] = "Faizan";
//     char name02[] = {'F','a','i','z','a','n','\0'};
//     int i;
//     int length = strlen(name);
//     for (i = --length; i >= 0; i--)
//     {
//        printf("%c",name[i]);
//     }
//     printf("%s\n",name02);
// }

// This is the paragraph where you can find the details about group

void main(){
    char str01[] = "This is the paragraph where you can find the details about the group";
    char str02[] = "the";

    int n =0, m =0, times =0, len = strlen(str02);
    while(str01[n] != '\0'){
       if(str01[n] == str02[m]) {
        while(str01[n] == str02[m] && str01 != '\0'){
            n++;
            m++;
        }
        if(m==len && (str01[n] == ' ' || str01[n] == '\0')){
            times++;
        }
       }
       else{
            while(str01[n] != ' '){
                n++;
                if(str01[n] == '\0')
                break;
            }
       }
       n++;
       m=0;
    }
    if(times > 0){
        printf("Times: %d",times);
    }    
}
