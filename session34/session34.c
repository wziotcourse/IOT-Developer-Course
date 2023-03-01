#include<stdio.h>
#include<conio.h>
void main(){
    // int user_input;
    // FILE *fptr; // File Pointer 
    // // fptr = fopen("D:\\session34.txt","w");
    // // absolute path
    // // fptr = fopen("C:\\Users\\Admin\\Documents\\IoT C Coding\\session34\\session35.txt","w");
    // // relative path
    // fptr = fopen("./session34.txt","w");
    // printf("Enter the Number\n");
    // scanf("%d",&user_input);

    // fprintf(fptr,"%d",user_input);
    // fclose(fptr);

    FILE *fp;
    char buff[255];
    fp = fopen("./session34.txt","r");
    fscanf(fp,"%s",buff);
    printf("%s\n",buff);

    fgets(buff, 255, (FILE*)fp);
    printf("%s\n",buff);

    fclose(fp);
}