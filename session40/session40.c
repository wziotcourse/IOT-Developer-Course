#include<stdio.h>
#include<conio.h>
void main(){
    int custid, conu;
    float chg, surchg=0, gramt,netamt;
    char connm[25];
    printf("Enter the Customer Id:\n");
    scanf("%d",&custid);
    printf("Enter the Customer Name:\n");
    scanf("%s",connm);
    printf("Enter the Customer Units:\n");
    scanf("%d",&conu);

    if(conu<200){
        chg = 1.20;
    }
    else if(conu>=200 && conu <400){
        chg = 1.50;
    }
    else if(conu>=400 && conu <600){
        chg = 1.80;
    }
    else{
        chg = 2.00;
    }
    gramt = conu * chg;
    if(gramt > 400){
        surchg = gramt*15/100.0;
    }
    netamt = gramt+surchg;
    if(netamt < 100){
        netamt = 100;
    }
    printf("The total amount is: %f",netamt);
}