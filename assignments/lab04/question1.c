#include <stdio.h>
int main(){
  int x;
  printf("enter a num:");
  scanf("%d",&x);
  if (x%3 == 0){
    printf("number was a multiple of 3");	      
  }
  else{
    printf("number was not a multiple of 3");
  }
}
