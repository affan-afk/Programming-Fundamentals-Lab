#include <stdio.h>
int main(){
int customerid,units;
float bill,rate;
char name[100];

printf("Enter customer id \n");
scanf("%d",&customerid);
printf("Enter name \n");
scanf("%s",&name);
printf("Enter units consumed \n");
scanf("%d",&units);

if (units < 200){  
  rate = 16.20;
  bill = units*16.20;
}
else if (units >= 200 && units<300){
  rate = 20.10;
  bill = units*rate;
}
else if (units >= 300 && units<500){
  rate = 27.10;
  bill = units*rate;
}
else if (units >= 500){
  rate = 35.90;
  bill = units*rate;
}
if (bill > 18000){
  printf("Customer ID: %d",customerid);
  printf("\nCustomer Name: %s",name);
  printf("\nUnits Consumed: %d",units);
  printf("\nAmount Charges @ %0.2f",rate);
  printf(" per unit: %0.0f",bill);
  printf("\nSurcharge Amount: %0.0f",0.15*bill);
  printf("\nNet Amount Paid by the Customer: %0.2f",(0.15*bill+bill));
}
else{
  printf("Customer ID: %d",customerid);
  printf("\nCustomer Name: %s",name);
  printf("\nUnits Consumed: %d",units);
  printf("\nAmount Charges @ %0.2f",rate);
  printf(" per unit: %0.0f",bill);
  printf("\nNet Amount Paid by the Customer: %f0.2",bill);
}
}