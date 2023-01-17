#include<conio.h>
#include<stdio.h>
#include<string.h>
void main(){
    char test01[] = {'A','D','M','I','N','\0'};
    char strValue[] = "Hello from Waqar Zaka ";
    int v=0,c=0,x=0;
    int i = 0;
    int j,k;
    printf("The Length of the Content is this: %d\n",strlen(strValue));
    while(strValue[i] != '\0'){
        i++;
    }
    printf("The Length of Own function is this: %d\n",i);
    int lengthValue = strlen(strValue);
    int lengthHalfValue;
    if(lengthValue % 2 == 0){
        lengthHalfValue = strlen(strValue)/2;
    }
    else{
        lengthHalfValue = (strlen(strValue)/2+1);
    }
    

    for(j=0;j<lengthHalfValue;j++){
        printf("%c",strValue[j]);
    }
    printf("\n");
    for(k=lengthHalfValue;k<lengthValue;k++){
        printf("%c",strValue[k]);
    }

    while(strValue[x]!='\0'){
        if(strValue[x]=='a' || strValue[x]=='e' || strValue[x]=='i' ||strValue[x]=='o' ||strValue[x]=='u')
        {
            v++;
        }
        else{
            c++;    
        }
        x++;
    }
    printf("\nThe vowels and consonant are these %d %d",v,c);
}
