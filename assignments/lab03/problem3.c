#include <stdio.h>
int main() {
float tax,taxrate,salary;
printf("ENTER TAX RATE FOLLOWED BY SALARY \n");
scanf("%f %f",&taxrate,&salary);
tax = salary*(taxrate/100);
salary = salary - tax;
printf("THE TAX TO BE PAID IS: %0.0f \n",tax);
printf("THE SALARY AFTER THE TAX DEDUCTION WILL BE: %0.0f",salary);
}