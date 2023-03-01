#ifndef ADD_ITEM_H
#define ADD_ITEM_H

int i,j,k,flag;

typedef struct{
    char name[20];
    int code;
    double rate;    
} product;
product item;
FILE *f;

void add_item(){
    system("cls");
    f = fopen("list.txt","a+");
    printf("Enter the Code:\n");
    scanf("%d",&item.code);
    printf("Enter the Name:\n");
    scanf("%s",&item.name);
    printf("Enter the Rate of a product:\n");
    scanf("%lf",&item.rate);
    fprintf(f,"\n%d\t%s\t%.2lf",item.code,item.name,item.rate);
    fclose(f);
}

#endif