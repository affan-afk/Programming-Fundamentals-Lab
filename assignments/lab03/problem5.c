#include <stdio.h>
int main() {
float principal,rate,time,simple_interest;
printf("ENTER PRINCIPAL AMOUNT BETWEEN 100 PKR - 1,000,000 PKR: ");
scanf("%f",&principal);
printf("ENTER RATE OF INTEREST BETWEEN 5 PERCENT - 10 PERCENT: ");
scanf("%f",&rate);
printf("ENTER A TIME PERIOD BETWEEN 1 YEAR - 10 YEARS: ");
scanf("%f",&time);
simple_interest = (principal*rate*time)/100;
printf("SIMPLE INTEREST IS: %f",simple_interest);
}