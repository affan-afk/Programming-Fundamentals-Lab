#include <stdio.h>
int main(){
int income,creditscore,age;
printf("ENTER CREDIT SCORE\n");
scanf("%d",&creditscore);
printf("ENTER INCOME IN USD PER ANNUM\n");
scanf("%d",&income);
printf("ENTER AGE\n");
scanf("%d",&age);
if(income >= 25000 && (age >= 18 && age <= 70) && creditscore >= 600 ){
  printf("LOAN APPROVED");
  }
else{
  printf("CUSTOMER DOES NOT MEET MINIMUM REQUIREMENTS FOR LOAN");
  }
return 0;
}