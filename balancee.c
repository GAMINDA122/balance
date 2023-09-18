#include <stdio.h>

void main(){

    float balance,bonus;
    char gender,cusName[25];

     printf("\t\t\t\t------------------ WELCOME TO THE PROGRAMME -----------------");

     printf("\n\nEnter your name : ");
     scanf("%s",cusName);
     printf("\nEnter your gender (F/M) : ");
     scanf("%s",&gender);
     printf("\nEnter your balance : ");
     scanf("%f",&balance);

     bonus = balance * 0.02;
     if((gender == 'F' || gender == 'f') && balance > 5000)
        bonus += balance * 0.05;
     balance = balance + bonus;
     printf("\n\nYour Balance is %2.f",balance);
     printf("\n\n\t\t\t\t-------------------- THANK YOU ------------------- ");
}
