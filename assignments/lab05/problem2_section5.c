#include <stdio.h>
int main(){
int num,sum = 0;
printf("Enter a number: ");
scanf("%d", &num);
while (num!=0){
 sum = sum + (num % 10);
 num = num / 10;
 }
printf("SUM OF ALL THE INDIVIDUAL DIGITS OF THE NUMBER IS : %d",sum);
return 0;
}