#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fptr;
    int std_ID, score;
    int i, s;
    char name[255];
    char n[255];
    fptr = fopen("student.txt", "w");
    printf("Enter The student Names \n");
    gets(name);
    printf("Enter the Students \n");
    scanf("%d", &std_ID);
    printf("Enter the Score \n");
    scanf("%d", &score);
    fprintf(fptr, "%d %d %s", std_ID, score, name);
    fclose(fptr);
    
    fptr = fopen("student.txt", "r");
    fscanf(fptr, "%d %d %[^\n]s", &i, &s, n);
    printf("Student ID : %d \n", i);
    printf("Name : %s \n", n);
    printf("Score : %d \n", s);
    fclose(fptr);
}