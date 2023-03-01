#include<stdio.h>
#include<conio.h>
void main(){
    // FILE *fptr;
    // int i,n;
    // char str[100];
    // char file_name[25];
    // printf("Please enter the file name: \n");
    // scanf("%s",file_name);
    // fptr = fopen(file_name,"a");
    // printf("Enter the lines you have written in the file: \n");
    // scanf("%d",&n);
    // for(i=0;i<=n;i++){
    //     fgets(str,sizeof str,stdin);
    //     fputs(str,fptr);
    // }
    // fclose(fptr);
    char flag = 'y';
    int option;
    while(flag == 'y'){
        printf("Select the option\n");
        printf("1-Read\n");
        printf("2-Write\n");
        printf("3-Exit\n");
        scanf("%d",&option);
        if(option == 1){
             FILE *fptr;
            char file_name[25];
            char ch_str;
            printf("Please enter the file name: \n");
            scanf("%s",file_name);
            fptr = fopen(file_name,"r");
            ch_str = fgetc(fptr);
            while(ch_str != EOF){
            printf("%c",ch_str);
            ch_str = fgetc(fptr); 
            }
            printf("\n");
            fclose(fptr);
        }        
        else{
            printf("Invlaid Option\n");
        }
    }
}