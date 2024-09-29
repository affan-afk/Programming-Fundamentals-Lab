#include <stdio.h>
int main(){
int num;
printf("ENTER a NUMBER\n");
scanf("%d",&num);
if (num > 0){
  if (num % 2 == 0){
    printf("NUMBER IS A POSTIVE EVEN NUMBER");
    }
  else{
    printf("NUMBER IS A POSTIVE ODD NUMBER"); 
    }
  }
else if (num < 0){
  printf("NUMBER IS A NEGATIVE NUMBER");
  }
else{
  printf("NUMBER IS ZERO"); 
  }
}