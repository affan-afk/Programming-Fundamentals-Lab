#include <stdio.h>
int main(){
int x = 0,y;
do{
  printf("ENTER A NUMBER : ");
  scanf("%d",&y);
  x = x + y; 
  } while(y != 0);
printf("SUM OF ALL NUMBERS INPUT IS : %d",x);
}