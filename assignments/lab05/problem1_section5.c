#include <stdio.h>
int main(){
int year;
printf("Enter a year number: ");
scanf("%d", &year);
if (year % 100 == 0){
  if (year % 400 == 0){
    printf("LEAP YEAR!");
    }
  else{
    printf("NOT A LEAP YEAR!");
    }
  }
else if (year % 4 == 0) {
  printf("LEAP YEAR!");
  }
else{
  printf("NOT A LEAP YEAR!");
  }
return 0;
}