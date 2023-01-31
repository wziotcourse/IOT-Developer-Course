#include<conio.h>
#include<stdio.h>
void main(){
    int arr[2][3];
    int i,j;
    printf("Enter the numbers\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
        arr[i][2] = arr[i][0] * arr[i][1];
    }
    printData(arr);
}
void printData(int arr[2][3]){
    printf("The provided data is this: \n");
    int i,j,k;
    int total = 0;
    printf("Price \tQuant\t Total\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(k=0;k<2;k++){
        total = total + arr[k][2];
        // printf("%d\n",arr[0][2]);
    }
    // printf("%d\n",arr[0][2]);
    // printf("%d\n",arr[1][2]);
    printf("The Grand Total is: %d",total);
}

// Add the discount feature and make the design of the given program.