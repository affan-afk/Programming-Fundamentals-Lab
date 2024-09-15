#include <stdio.h>
int main(){
  char x;
  printf("enter a character \n");
  scanf(" %c",&x);
  if(x>96 && x<123){
    printf("character is a lowercase letter");
  }
  else if (x>64 && x<91){
    printf("character is a uppercase letter");
  }
  else if (x>47 && x<58){
    printf("character is a digit");
  }
  else{
    printf("character is a special character");
  }
}