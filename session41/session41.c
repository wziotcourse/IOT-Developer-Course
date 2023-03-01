// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// #include<math.h>
// struct strc_date{
//     int day;
//     int month;
//     int year;
// };

// struct strc_date_char{
//     int day;
//     char month[3];
//     int year;
// };
// int arr_date[2][3] = {{20,3,2000},
//                       {30,3,2010},
//                       {25,3,2020}};

// void main(void){
//     struct strc_date dateOne;
//     dateOne.day = 20;
//     dateOne.month = 03;
//     dateOne.year = 2023;

//     struct strc_date_char ch_date;
//     ch_date.day = 20;
//     strcpy(ch_date.month,"FEB");
//     ch_date.year = 2023;


//     printf("The Date is: %d-%d-%d\n",dateOne.day,dateOne.month,dateOne.year);
//     printf("The Date is: %d-%d-%d\n",arr_date[0][0],arr_date[0][1],arr_date[0][2]);
//     printf("The Date is: %f-%s-%d\n",sqrt(ch_date.day),ch_date.month,ch_date.year);
// }


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct Cars{
    int no_seats;
    char color[10];
    int EngineCC;
    char Transmission[10]
};
struct Computer_System{
    char vendor[10];
    char model[10];
    char processor[10];
    int ram;
    int HDD;
    float screenSize;
};


void main(void){    
    struct Computer_System T7610;
    strcpy(T7610.vendor,"Dell");
    strcpy(T7610.vendor,"T7610");
    strcpy(T7610.vendor,"2620 V2");
    T7610.ram = 16;
    T7610.HDD = 1024;
    T7610.screenSize = 24;
}